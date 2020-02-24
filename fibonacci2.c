#include <stdio.h>
#include <stdlib.h>

	int main () {
	int a,b,c,i,sayi;
	a=1,b=1;
	
	printf("Fibonacci dizisinin kac elemanini gormek istersiniz\n");
	scanf("%d",&sayi);
	printf("\n\n");
	printf("%d-%d",a,b);
	
	for (i=1;i<=sayi;i++)
	{
	  c=a+b;
	  a=b;
	  b=c;
	  printf("-%d",c);
    }
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
