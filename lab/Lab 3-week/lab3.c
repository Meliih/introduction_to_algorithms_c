/*04.10.2019
 * Melih KAHRAMAN  
 * Bu program kullanıcıdan aldıgı verilerle kaç lira kaç kurus parası oldugunu
 * hesaplar
 */
 //lab3.c

#include <stdio.h>

int main()
{   int k1,k5,k10,k25,k50; //kurus olarak k ifadesini kullandım
	int toplam_kurus,lira,kurus;
	
	printf("1 kurus sayisini giriniz\n");
	scanf("%d",&k1);
	printf("5 kurus sayisini giriniz\n");
	scanf("%d",&k5);
	printf("10 kurus sayisini giriniz\n");
	scanf("%d",&k10);
	printf("25 kurus sayisini giriniz\n");
	scanf("%d",&k25);
	printf("50 kurus sayisini giriniz\n");
	scanf("%d",&k50);
	
	toplam_kurus=k1+k5*5+k10*10+k25*25+k50*50;
	
	lira=toplam_kurus/100;
	
	kurus=toplam_kurus%100;
	printf("=======================================================================================\n");
	printf("\n1 kurus		5kurus 		10 kurus 		25 kurus		50 kurus \n");
	printf("sayisi     	sayisi          sayisi	     	  	 sayisi		  	 sayisi\n ");
	printf("  %d  	         %d		   %d	 		  %d		 	  %d\n\n",k1,k5,k10,k25,k50);
	printf("=======================================================================================\n");
	printf("%d lira %d kurusunuz var\n",lira,kurus);
	printf("=======================================================================================\n\n\n");
	

	return 0;
}

