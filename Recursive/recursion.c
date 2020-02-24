#include <stdio.h>

	int fact (int n) {
		if(n==1) {
			return 1;
		}
		else {
			return n*fact(n-1);
		}		
	}
	
	int main () {
	
	int sayi;
	
	printf("Faktoriyeli alinacak ifadeyi giriniz :");
	scanf("%d",&sayi);
	printf("%d! sonucu = %d",sayi,fact(sayi));
}
