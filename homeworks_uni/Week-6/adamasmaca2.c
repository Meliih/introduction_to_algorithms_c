#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void write () {
	printf("Bir harf giriniz  ");
}

int main () {	
	char *kelimeler [33]={"harita","oda","mehmetcik","zar","muhendis","kabak","bilgisayar","sandalye","karıncık","kolay"
		,"yapayzeka","bilisim","doktor","evren","mucize","universite","ataturk","integral","turev","limit"
		,"ekonomi","felsefe","kopek","ayi","kayak","karpuz","kavun","elma","muz","salatalik","domates","havuz","saat",}; //kelimeler tanimlandi
	
	srand(time(NULL));//bilgisayar kendi bir sayi uretti
	int z =rand()%32;//sayiyi z degiskenine atandi 
	
	int boyut=strlen(kelimeler[z]); //kelimeler dizisinin z'inci sayisindaki kelimenin boyutu bulundu
	//printf("%d\n",z);
	char *arr=kelimeler[z];
	char bos[boyut];
	
	
	for (int i=0;i<boyut;i++){ //kelimenin boyutu kadar _ bastırdı
        bos[i]='_';    
    }
			
		for (int j=0;j<boyut;j++) {
			char a;
			write();
			scanf(" %c",&a);//kullanıcıdan harf alındı
			
				for (int n=0;n<boyut;n++) {
					
					if(arr[n] == a) {//eger girilen harf arr dizisindeki harf ile ayniysa a harfini bos dizisine ata
						bos[n]=a;
					}
				}
				
				for (int t=0;t<boyut;t++) { //yukarıda harf dogru bilindiyse _ uzerine harfi basar.
				printf("%c ",bos[t]); //boyut kadar donmesinin nedeni ayni harften kac tane varsa onu bastırmak icin
				}
				
		}
			
		printf("\n\nSimdide kelimeyi tahmin ediniz\n");
		int count=0;
		char temp;
		
		for(int m=0;m<boyut;m++) { 
			scanf(" %c",&temp);	
					if(temp==arr[m]) //kelimelri tek tek kiyasladi
						count++; //ayni ise countu arttirdi
		}
		
		if(count==boyut) 
		{ //countla boyutm eşit olursa kelimeler eslesmistir demek
		printf("TEBRIKLER KAZANDINIZ");
		}
		else 
		{
			printf("MALESEF BILEMEDINIZ TEKRAR OYNAYINIZ");
		}
				
return 0;
}
