#include <stdio.h>
#include <string.h>

int main() {

    char temp[64];
    char ca[64];
	printf("giriniz\n");
	scanf("%s",ca);
	int j = strlen(ca)-1;
	
	for(int i=0;i<strlen(ca)/2;i++){
		
			temp[0]=ca[i];
			ca[i]=ca[j];
			ca[j]=temp[0];
			j--;
		
	}

	printf("%s\n",ca);
	
	return 0;
}

