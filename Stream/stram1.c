#include <stdio.h>

int main () {
	
	FILE *f =fopen("a.txt","r");
	
	if(f==NULL)
		printf("oyle bir dosya yok");
		
	else {
		printf("Dosya var");
	}
	
	return 0;
}
