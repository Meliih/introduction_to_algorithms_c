#include <stdio.h>

	void dizinin_tersi(int *pointer[]);

	int main ()
{
	/*
	int var =5;
	
	printf("Value :%d\n",var);
	printf("Address :%p",&var);
	return 0;
	*/
	
	
	
	/*
	int * pc,c;
	
	c=22;
	printf("Addresss of c:%p\n",&c);
	printf("Value of c:%d\n\n",c);
	
	pc=&c;
	printf("Address of pointer pc :%p\n",pc);
	printf("Content of pointer pc :%d\n\n",*pc);
	
	c=11;
	printf("Address of pointer pc :%p\n",pc);
	printf("Content of pointer pc :%d\n\n",*pc);
	
	*pc=2;
	printf("Address of c:%p\n",&c);
	printf("Value of c: %d\n\n",c);
	
	
	return 0;
	*/
	
	
	
	/*
	int data[5],i;
	printf("Enter elements: ");
	
	for (i=0;i<5;i++)
		scanf("%d",data+i);
		
		printf("You entered: \n");
		
	for(i=0;i<5;++i)
		printf("%d\n",*(data+i));
		
		return 0;
	*/
	



	/*
	
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	int *ptra[10];
	
	for(i=0;i<10;i++)
	
		ptra[i]=&a[i];
		dizinin_tersi (ptra);
		
		return 0;
	
	
	}
	void dizinin_tersi(int *pointer[])
	{	int i;
		
		for(i=9;i>=0;i--)
		{
			printf("%d",*pointer[i]);
			printf("\n");
		}	
	
	
	*/
	
	
	
	/*
	int var=10;
	int *p;
	p=&var;
	
	printf("Address of var is: %p",&var);
	printf("\nAddress of var is: %p",&p);
	
	printf("\nValue of var is: %d",var);
	printf("\nValue of var is: %d",*p);
	printf("\nValue of var is: %d",*(&var));
	
	printf("\nValue of pointer p is: %p",p);
	printf("\nAddress of pointer p is: %p",&p);
	return 0;
	
	*/
	
	
	
	
	/*
	int num ;
	int *pNum;
	
	pNum=&num;
	num=100;
	
	printf("num degiskeni ile :\n");
	printf("num : %d\n address of num: %p\n",num,&num);
	printf("pointer ile:\n");
	printf("num : %d\naddress of num: %p\n",*pNum,pNum);
	
	return 0;
	 
	*/
	
	
	
	/*
	
	const int a=10;
	int *p;

	p=&a;
	printf("a nin onceki degeri a: %d",a);
	
	*p=20;
	printf("\n sonra a: %d",a);
	
	return 0;
	
	*/
}

