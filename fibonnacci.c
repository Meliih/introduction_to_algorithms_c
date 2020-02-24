#include <stdio.h>
#include <stdlib.h>
	//fibonacci seisinin ilk 10 eleman toplamıı verir
	int main () {
	int a,b,c,i;
	a=1;
	b=1;
	
	printf("%d\n%d\n",a,b);
	for (i=1;i<=8;i++) 
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
		
return 0;
}

