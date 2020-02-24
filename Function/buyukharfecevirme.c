
#include <stdio.h>

	char buyuk_cevir (char c) ;
	
	
int main() {
	char b;
	char buyuk_cevir (char c) {
	return c-32;
	}
	printf("Kucuk harfi buyuk harfe cevirme : ");
	scanf("%c",&b);
	printf("%c",buyuk_cevir(b));
	
	
	return 0;
}

