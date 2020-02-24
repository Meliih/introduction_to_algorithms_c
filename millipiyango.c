#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){
	
	srand(time(NULL));
	printf("---Milli Piyango Biletleri---\n\n\n");
	for (int k=0;k<15;k++) {
	
		for (int i=0;i<7;i++) {
			int b=rand()%10;
			
			printf("%d",b);
		}
		printf("\t\t");
		for (int i=0;i<7;i++) {
			int a=rand()%10;
			
			printf("%d",a);
		}
		printf("\t\t");
		for (int i=0;i<7;i++) {
			int c=rand()%10;
			
			printf("%d",c);
		}
		
		printf("\n");
}
		
return 0;
}
