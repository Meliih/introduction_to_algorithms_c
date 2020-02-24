/*Melih KAHRAMAN
 *Bu program kullanicidan sayi alarak "*" azalarak oruntu oluşan şeklini gosteririr
 */
 //soru1.c
#include <stdio.h>
 
int main () {
	int s,k,giris; 
	int yildiz=1;  
	
	printf("Sayi giriniz\n");
	scanf("%d",&giris);
	printf("\n");
	for (k=0;k<giris-1;k++) { //bu for dongusu dongunun alt satıra inmesini saglar
		
		for (s=0;s<yildiz;s++) { // bu for dongusu yıldız basmasını saglar
		  printf("* "); //artırarak yıldız basar
		}
	  printf("\n");
	  yildiz++;
	}
		
	for (k=0;k<giris;k++) {
		
		for (s=0;s<yildiz;s++) {
			printf("* ");//azaltarak yıldız basmasını saglar
		}
		printf("\n");
		yildiz--;
	}  
  return 0;
}
