#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>



	
int main () 
{		//iki boyutlu arrayleri tanimladim
	char kelimeler [10][11]={"bilgisayar","kalemtiras","dinozorlar","zorunluluk","karinbahar","tamircilik","tecrubesiz","televizyon","parlomento","sanatsever"};

	srand(time(NULL));
	int b =rand()%9;//rand fonksiyonu ile kelimeleri otomatik olarak atti
	
	char tercih[10][10];
	switch (b) // case gore kelimeleri tercih arrayine atadim
	{
		case 0:
		for(int i=0;i<10;i++)
		{
			tercih[0][i]=kelimeler[0][i];
		}
		
		case 1:
		for(int i=0;i<10;i++)
		{
			tercih[1][i]=kelimeler[1][i];
		}

		case 2:
		for(int i=0;i<10;i++)
		{
			tercih[2][i]=kelimeler[2][i];
		}
		
		case 3:
		for(int i=0;i<10;i++)
		{
			tercih[3][i]=kelimeler[3][i];
		}
		
		case 4:
		for(int i=0;i<10;i++)
		{
			tercih[4][i]=kelimeler[4][i];
		}
		
		case 5:
		for(int i=0;i<10;i++)
		{
			tercih[5][i]=kelimeler[5][i];
		}
		
		case 6:
		for(int i=0;i<10;i++)
		{
			tercih[6][i]=kelimeler[6][i];
		}
		
		case 7:
		for(int i=0;i<10;i++) 
		{
			tercih[7][i]=kelimeler[7][i];
		}
		
		case 8:
		for(int i=0;i<10;i++)
		{
			tercih[8][i]=kelimeler[8][i];
		}
		
		case 9:
		for(int i=0;i<10;i++)
		{
			tercih[9][i]=kelimeler[9][i];
		}
	}
	
	int count=1;
	char x;
	char temp[10][10];
	
	while (count<11) { //kullanicidan 10 tane tahmin hakki verdim
		
		printf("%d'nci tahminizi giriniz :\n",count);
		scanf(" %c",&x);
		
		//ayni harf girme ihmal edilmemistir
		
	
			for (int j=0;j<10;j++)
			{
				if (tercih[b][j] == x) //for dongusuyle tercihe atana arrayleri temp degiskeni atadim girilen kelimede harf varsa ekrana bastirir
				{ 		
				temp[b][j]=tercih[b][j]; 
				printf(" %c",temp[b][j]);
				}
			}
		count++;
	}
		
		char tahmin[10];
			printf("\n tahmininizi veriniz\n");  
			scanf("%s",tahmin);//kullanicini tahmini alir
	
		
		if(b==0) { //string kiyaslamasi ile kelimeleri karsilastirdim
			if ( strcmp(tahmin,"bilgisayar") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME bilgisayar");
			else
			printf("Yanlis tahmin");
		}
		if(b==1) {
			if ( strcmp(tahmin,"kalemtiras") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME kalemtiras");
			else
			printf("Yanlis tahmin");
		}
		if(b==2) {
			if ( strcmp(tahmin,"dinozorlar") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME dinozorlar");
			else
			printf("Yanlis tahmin");
		}
		if(b==3) {
			if ( strcmp(tahmin,"zorunluluk") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME zorunluluk");
			else
			printf("Yanlis tahmin");
		}
		if(b==4) {
			if ( strcmp(tahmin,"karinbahar") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME karinbahar");
			else
			printf("Yanlis tahmin");
		}
		if(b==5) {
			if ( strcmp(tahmin,"tamircilik") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME tamircilik");
			else
			printf("Yanlis tahmin");
		}
		if(b==6) {
			if ( strcmp(tahmin,"tecrubesiz") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME tecrubesiz");
			else
			printf("Yanlis tahmin");
		}
		if(b==7) {
			if ( strcmp(tahmin,"televizyon") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME televizyon");
			else
			printf("Yanlis tahmin");
		}
		if(b==8) {
			if ( strcmp(tahmin,"parlemento") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME parlemento");
			else
			printf("Yanlis tahmin");
		}
		if(b==9) {
			if ( strcmp(tahmin,"sanatsever") == 0 ) 
			printf("TEBRiKLER DOGRU KELIME sanatsever");
			else
			printf("Yanlis tahmin");
		}
		
return 0;
}
