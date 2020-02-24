#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {

	
	srand(time(NULL));  
	
	for (int i=0;i<10;i++) {
		
		for (int k=0;k<6;k++) {
		
			int b=rand()%50;
			printf("%d ",b);
		}
		printf("\n");
	}
	return 0;
}
