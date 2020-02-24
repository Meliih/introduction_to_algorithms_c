#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	int dizi[]={1,2,5,6,8,9,12,58,69,77,178,179,180,190,200,201};
	int main()
	{
		
		int bas=0; //degiskenleri belirledim
		int son=sizeof(dizi)/sizeof(int)-1;
		int temp=0,hedef;

		printf("Aramak istediginiz sayiyi giriniz\n");
		scanf("%d",&hedef); //aranmak istenen sayiyi aldim
	
	while(bas <= son){ 
		int orta=bas+(son-bas)/2; //orta degeri belirledim
		
		if(dizi[orta] == hedef) // dizi hedefe esitse hedefi ve sirasini yazdirir
		{
			temp= 1; // eger aranan sayiyi yazdirirsa tempi 1 yapacak eger girmezse temp 0 kalacak
			printf("Aranan sayi: %d \nSirasi %d",hedef,orta+1);
			break;
		}
		
			else if(dizi[orta] < hedef){  // orta+1 degeri basa atayarak dizinin ortadan sonra sol tarafi aramaya dahil etmez
				bas=orta+1;
			}
			
		else // orta-1 degeri son atayarak dizinin ortadan sonra sag tarafi aramaya dahil etmez
		{
			son= orta-1;
		}
	}
	
		if(temp== 0) //temp 0 kalırsa dizide eleman bulunamadi
		{
			printf("Bulunamadi\n");
		}

	return 0;
}

