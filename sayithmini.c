#include <stdio.h>

int maiin () {
int count;
	
	printf("Sayi tahmin oyunu baslamistir\n");
	printf("N sayisini tahmin etmek için 0-100 arasinda bir deger giriniz");
	scanf("%d",&count);
	
	if (count<100 && count>80) {
		printf("Buyuk bir deger girdiniz");
	}
		else if (count<80 && count>60) {
		  printf("Buyuk bir deger girdiniz");
	    }
	    else if (count<60 && count>50) {
		  printf("Buyuk bir deger girdiniz ama sayiya  yaklastiniz");
	    }
	    else if (count<50 && count>45) {
		  printf("Buyuk bir deger girdiniz ama sayiya çok yaklastiniz");
	    }
	    else if (count==45) {
		  printf("Tebrikler bidiniz");
		}
	    else if (count<45 && count>40) {
		  printf("Kucuk bir deger girdiniz ama sayiya çok yaklastiniz");
	    }
	    else if (count<40 && count>30) {
		  printf("Buyuk bir deger girdiniz ama sayiya yaklastiniz");
	    }
        else if (count<30) {
		  printf("Kucuk bir deger girdiniz");
	    }
		
		else  {
			printf("Yanlis sayi girdiniz ");	
        }
    
return 0;
}
