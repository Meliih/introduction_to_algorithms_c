/*Melih Kahraman
 *15/11/2019  
 *Bu program recursive kulllanarak sayini asal sayi olup olmadigini kontrol eder
 */

#include <stdio.h>

	int asalmi(int x,int i) //x numberi i ise numberin yarisini göndrdik yarisina kadar kontrol etmesi yeterli
	{
		if ( x<2) // 2 den kücük ise asal sayi degildir
			return 0;
		if (i==1) // eger x sayisi i her defasinda bölünemez ve i 1 olursa bu sayi asaldir.
			return 1;
		if (x % i == 0)// x sayisi i ye bölonur ise asal sayı degildir
			return 0;
		
		return asalmi(x, i - 1);
	}
	int main () 
	{
		int number,result;
		
		printf("Bir sayi giriniz :\n");	//sayiyi aldık
		scanf("%d",&number);
		
		result=asalmi(number,number/2); //asal sayi fonksiyonuna gönderdik
		
		if (result == 0) 
		{
        printf("Asal sayi degildir");
		}
		if (result == 1)
		{
        printf("Asal sayidir\n");
		}

	}
		
		
		
