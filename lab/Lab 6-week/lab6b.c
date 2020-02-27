#include <stdio.h>

	int fibo(int m)
	{	int x;
		if (m==0) {
			return 0;}
		else if(m==1) {
			return 1;}
		x= fibo(m-1)+fibo(m-2);

		return x;
	
	}
	
	void f(int m) {
		if(m>0) //ornegin 1 icin
			f(m-1);//f(0)oldu
			printf("%d ",fibo(m)); 
			//fibo(0) cagırırsak if icine girer 1 dondudur
	}
	
	int main () {
		
		int sayi;
		
		printf("Bir sayi giriniz :");
		scanf("%d",&sayi);
		f(sayi);//sayiyi f fonksiyonuna gönderdik

	}

