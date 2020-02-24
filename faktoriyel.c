#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i,sayi;
	int faktoriyel=1;
	
	printf("Faktoriyeli bulunmasini istediginiz sayiyi giriniz\n");
	scanf("%d",&sayi);
	
		for (i=1;i<=sayi;i++) 
		{
			faktoriyel=faktoriyel*i;
		}
		printf("Sonucunuz : %d",faktoriyel);



return 0;
}
