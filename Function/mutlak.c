#include <stdio.h>

	int mutlak(int a) {
		if(a>0)
			return a;
		else
			return -a;
	}

	int main(){
	int b;
	printf("Mutlak degerini almak istediginiz ifadeyi giriniz : ");
	scanf("%d",&b);
	printf("%d nin mutlak degeri %d",b,mutlak(b));
	return 0;
}

