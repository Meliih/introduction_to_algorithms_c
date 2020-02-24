#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
//Oyunda aynı harf girme şartı ihmal edilmiştir.
    char ad[]="ibrahim";
    char bul[strlen(ad)];
    char 
    kelime;
    int bitir=0,say=0,yanlis=0,hak=0;
    int uzunluk=strlen(ad);
    printf("Harf Tahmin Oyununa Hosgeldiniz.Yanlis Tahmin Hakkiniz 3 Olarak Belirlenmistir.\n");
    for(int i=0;i<strlen(ad);i++){//harf uzunlugu kadar tire basar dinamik
        bul[i]='-';
        printf("%c ",bul[i]);
     
    }
    do{
        printf("\nkelime gir: ");
        scanf("%s",&kelime);
        say=0;//sadece do calısması içiin yazdım
        yanlis=0;
        for(int i=0;i<uzunluk;i++){// tire ile harfler yer değişti
            if(kelime==ad[i]){
                bul[i]=kelime;
               
            }
            else {
               yanlis++;// kelime uzunlugu kadar artarsa demekki o harf o kelimede yoktur.
                if(yanlis==uzunluk){//keime uzunlugu kadar artmıssa yanlis hak 1 azalır.
                    hak++;
                    printf("yanlis girdiniz kalan hakkiniz:%d\n",3-hak);
                }
            }
           
           
        }
        for(int j=0;j<uzunluk;j++){//kelimede hiç tire kalmamıssa say 0 kalacaktır.
            if(bul[j]=='-'){
                say++;
              
            }
               
        }
       for(int i=0;i<strlen(ad);i++){
       printf("%c ",bul[i]);
     
    }

        if(say==0) bitir=1;//say sıfır kaldıgı için bitirme şartımız için say'a 1 verdim sıfır dan farklı oldugu için do biter.
      
    }
   
    while(hak!=3 && bitir==0);
    {
        if(hak==3) printf("\nKaybettiniz! Hakkiniz bitti");
        else printf("\nTebrikler basari ile bitirdiniz.");
    }
}

