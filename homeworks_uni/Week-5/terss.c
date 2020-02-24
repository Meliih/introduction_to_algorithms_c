#include <stdio.h>
#include <string.h>
	char dizi[5]={"kayak"};
	
	int uzunluk(char dizi)
	{
	  return sizeof(dizi)/sizeof(char);
	}
	
	
	int esit_mi(char dizi[],int i,int j) 
	{
		if (j==i)
		{
			return 1;
		}
		 if(dizi[i] == dizi[j]) 
		{
			return esit_mi(dizi,++i,--j);
		}
		
		else 
		{
		return -1;
		}
	}
	
		void bil ()
		{
		printf("'kayak' kelimesi palindromdur");
		}
		void bile ()
		{
		printf("kelime palindrom degildir");
		}
	int main ()
	{
		int b=strlen(dizi); 
	
		int x=esit_mi(dizi,0,b-1);

		if(x==1)
			bil();
		else
			bile();


return 0;
	}
