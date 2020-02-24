#include <stdio.h>

	int ustalma(int sayi,int ust) 
	{
		if(ust==0) 
		{
			return 1;
		}
		else 
		{
		return ustalma(sayi,ust-1)*sayi;	
		}
	}

	int main () 
	{
		int n,m;
		
		printf("Sayiyi giriniz :");
		scanf("%d",&n);
			
		printf("Ustu giriniz :");
		scanf("%d",&m);
		
		printf("%d^%d = %d",n,m,ustalma(n,m));
		
		
		
		
		
	}
	
