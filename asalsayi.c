

#include <stdio.h>

int main() {
	int n;
	
	printf("Sayinin asal sayi olup olmadigini kontrol eder\n");
	scanf("%d",&n);
	
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0){
			printf("Asal sayi degil");
		 break;
		}	
		else {
			printf("Asal sayi");
			break;
		}
	}
	
		
	return 0;
}

