#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numbers[256];
	int adet;
	int temp;
	printf("Kac adet sayi girilecek :");
	scanf("%d",&adet);
	
	for (int i=0;i<adet;i++) {
		printf("Sayi giriniz :");
		scanf("%d",&numbers[i]);
	}
	
	for (int i=0;i<adet-1;i++) {
	
		for (int j=i+1;j<adet;j++) {
	
			if (numbers[i]>numbers[j]){
				temp=numbers[i];
				numbers[i] = numbers[j];
				numbers[j]=temp;	
			}
		}
	}
	

	for(int k=0;k<adet;k++) {
				
				printf("%d ",numbers[k]);			
			}
			
	
return 0;
}

