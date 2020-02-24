/*Melih KAHRAMAN
 *bu program kullanicidan 1ile 5 arasinda sayi alarak kelimenin birini secmesini saglar kelime seçtikten sonra 4 harf tahminde bulunur eger kelimenin icinde
 * o harften var ise alt satırda kaç tane oldugunu gosterir. Tahmin kısmına gelince yukarda harf tahmin ettiklerinde dogru cıkan asagıda gosterilir
 * kkullanıcıda dogru tahmin girer ise tebrikler kazandiniz yazar eger dogru tahmin edememisse kaybettiniz yazar
 */
 //odev2.4
 #include <stdio.h>
 #include <string.h> //kutuphaneleri tanimladim

	int main () {
	//char m[4]="masa"; boyle olunca if kontrolunde kelime sonuna degisik bir şey ekliyo
    char s[4] = {'s','a','a','t'}; // char array(dizin)leri tanımladim
	char k[4] = {'k','a','s','a'}; // char array(dizin)leri tanımladim
	char e[4] = {'e','t','e','k'}; // char array(dizin)leri tanımladim
	char b[4] = {'b','l','u','z'}; // char array(dizin)leri tanımladim
	char ko[4] = {'k','o','l','a'}; // char array(dizin)leri tanımladim
	int sayi;
	
	
	printf("Adam asmaca oyunu baslamistir.\n");
	printf("Lutfen 1 ile 5 arasinda sayi giriniz :"); //kullanicidan sayi alip kelime kararini verdik
	scanf("%d",&sayi);
	
	char tercih[4];
	switch (sayi) {
		
		case 1:
		  tercih[0]=s[0]; // tercih ettigi kelimeyi tercih adında bir dizine aktardım
		  tercih[1]=s[1];
		  tercih[2]=s[2];
		  tercih[3]=s[3];
		  break;
		  
		case 2:
		  tercih[0]=k[0]; // tercih ettigi kelimeyi tercih adında bir dizine aktardım
		  tercih[1]=k[1];
		  tercih[2]=k[2];
		  tercih[3]=k[3];
		  break;
		  
		case 3:
		  tercih[0]=e[0]; // tercih ettigi kelimeyi tercih adında bir dizine aktardım
		  tercih[1]=e[1];
		  tercih[2]=e[2];
		  tercih[3]=e[3];
		  break;
		  
		case 4:
		  tercih[0]=b[0]; // tercih ettigi kelimeyi tercih adında bir dizine aktardım
		  tercih[1]=b[1];
		  tercih[2]=b[2];
		  tercih[3]=b[3];
		  break;
		  
		case 5:
		  tercih[0]=ko[0];  // tercih ettigi kelimeyi tercih adında bir dizine aktardım
		  tercih[1]=ko[1];
		  tercih[2]=ko[2];
		  tercih[3]=ko[3];
		  break;
		  
		  default:
		  printf("yanlis sayi girdiniz."); // 5 ten buyuk sayi ya da negatif bir sayi girerse
		  return 0;
    }
    
	int count=1;
	char x;
	char temp[4];
	
	while (count<5) { // while dongusune sokarak kullacidan harf tahminlerini aldim
		
		printf("\n%d'nci tahminizi giriniz :\n",count);
		scanf(" %c", &x);
		
		
		for(int i=0;i<4;i++){
			if (tercih[i] == x) { 		
				temp[i]=tercih[i]; 
				printf(" %c",temp[i]);
			}
		} 
		count++;
	}
			printf("\n");
			printf("\n");
	for (int i=0;i<4;i++) { // kullanicinin harf tahminleri dogru ise ekrana bastirir
		printf(" %c",temp[i]);
	}
	
	char tahmin[4];
	printf("\ntahmininizi veriniz\n");  //
	scanf("%s",tahmin);
	

	
return 0;
}


