#include <stdio.h>

int main(){
	
	int giris;
	int yildiz=0;
	
	printf("Bir sayi giriniz");
	scanf("%d",&giris);
	printf("\n");
	
	for (int i=0;i<giris+1;i++) {
		
		for(int k=0;k<yildiz;k++) {
			
			printf("*");
			}
	 printf("\n");
	 yildiz++;
	}
	
	
	return 0;
}
