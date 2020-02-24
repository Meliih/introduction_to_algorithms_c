#include <stdio.h>

	int ardisiktoplam (int n,int m) 
	{	
		int x;
		if(n<m) 
		{	
			x=ardisiktoplam(n,m-1)+m-1;
			return x;
		
		}
		else if (m==n) 
		{
			return 0;	
		}
	}

	int main ()
	{
		int a,b;
		
		printf("Hangisi sayilar arasinda ardisik sayilarin toplamini istiyosunuz \n ");
		scanf("%d%d",&a,&b);
		printf("%d-%d arasindaki sayilarin toplami = %d",a,b,ardisiktoplam(a,b)-a);
		
		
	}

