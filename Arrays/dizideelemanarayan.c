#include <stdio.h>

int main(){

	char msg[10]= {'m','e','d','e','n','i','y','e','t','!'};
	char x;
	
	printf("Bir char giriniz");
	scanf("%c",&x);
	
	for(int i=0;i<10;i++) {
		
		if(msg[i] == x) {
			
			printf("pozisyonu %d \n",i+1);
			
			
			}		
		}

return 0;
}


 
