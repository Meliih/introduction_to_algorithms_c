/*Melih KAHRAMAN
 *bu program programcinin 0-100 arasinda kafasina gore bir sayi belirler
 *kullanicdan sayi tahminleri ister kullanicinin girdigi tahminlere gore 
 *kullaniciyi yonlendirir
 */
#include <stdio.h>

int main () {
int count;
	
	printf("Sayi tahmin oyunu baslamistir\n");
	
	
	do{ // dongüye girer
	printf("Ozel sayiyi tahmin etmek icin 0-100 arasinda bir deger giriniz\n");
	scanf("%d",&count);
		
	if (count<100 && count>80) {
		printf("Buyuk bir deger girdiniz\n\n");
	}
		else if (count<=80 && count>60) {
		  printf("Buyuk bir deger girdiniz\n\n");
	    }
	    else if (count<=60 && count>50) {
		  printf("Buyuk bir deger girdiniz ama sayiya  yaklastiniz\n\n");
	    }
	    else if (count<=50 && count>45) {
		  printf("Buyuk bir deger girdiniz ama sayiya cok yaklastiniz\n\n");
	    }
	    else if (count==45) {
		  printf("Tebrikler bildiniz\n}n");
		}
	    else if (count<45 && count>=40) {
		  printf("Kucuk bir deger girdiniz ama sayiya cok yaklastiniz\n\n");
	    }
	    else if (count<40 && count>=30) {
		  printf("Kucuk  bir deger girdiniz ama sayiya yaklastiniz\n\n");
	    }
        else if (count<30) {
		  printf("Kucuk bir deger girdiniz\n\n");
	    }
		
		else  {
			printf("Yanlis sayi girdiniz \n\n");	
        }
        
    }while(count!=45);//eger count 45  esit degilse donguyu tekrarlatir
	
return 0;
}

