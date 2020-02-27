/*Melih KAHRAMAN
 *Bu program kullanicidan iki tane saat air ve bu satinin arasindaki farki gosterir. 
 */
#include <stdio.h>
struct Saat{ // kullanicidan alinan saatleri tutar

int saat;
int dakika;
int saniye;

}ilksaat,ikincisaat; // 2 saat alacagımız iç,n 2 saat tanımlandi
struct fark{ //farkin degerlerini tutacak struct

int saat;
int dakika;
int saniye;

}a;

int main () {
	int temp;
	int temp1;
	int temp2;
	printf("1.saatin saatini  giriniz :\n");
	scanf("%d",&ilksaat.saat);
	printf("1.saatin dakikasini giriniz :\n");
	scanf("%d",&ilksaat.dakika);
	printf("1.saatin saniyesini giriniz :\n");
	scanf("%d",&ilksaat.saniye);
	printf("\n");
	printf("2.saatin saatini giriniz :\n");
	scanf("%d",&ikincisaat.saat);
	printf("2.saatin dakikasini giriniz :\n");
	scanf("%d",&ikincisaat.dakika);
	printf("2.saatin saniyesini giriniz :\n");
	scanf("%d",&ikincisaat.saniye);
	
	temp=((ilksaat.saat*3600)+(ilksaat.dakika*60)+ilksaat.saniye);//alinan degerleri saniyeye çevrildi
	temp1=((ikincisaat.saat*3600)+(ikincisaat.dakika*60)+ikincisaat.saniye);
	
	if (temp>temp1) { 
		temp2=temp-temp1;//saniyelerin farki alindi
		a.saat=temp2/3600; //1saat=3600 saniyeye bolunerek saat bulundu
		temp2=temp2-a.saat*3600;//saatin saniyeleri çıktı
		
		a.dakika=temp2/60; // kalan saniye 60 bolunerek dakika bulundu
		temp2=temp2-a.dakika*60;//bulunan dakikada çıkarıldı
		
		a.saniye=temp2%60;//temp2 kalan saniye zaten farkın saniyesine eşittir
		//a.saniye=temp2;
		printf("%d saat %d dakika %d saniye",a.saat,a.dakika,a.saniye);
	}	
	else { //yukaridaki maddelerin aynisi
		temp2=temp1-temp;
		a.saat=temp2/3600;
		temp2=temp2-a.saat*3600;
		
		a.dakika=temp2/60;
		temp2=temp2-a.dakika*60;
		
		a.saniye=temp2%60;
		printf("%d:%d:%d",a.saat,a.dakika,a.saniye);
	}
	return 0;
}
