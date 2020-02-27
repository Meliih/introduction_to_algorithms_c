#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	
	char array[100]={"medeniyet.universitesi.bilgisayar.muhendisligi.melih.kahraman"}; // stringi tanimlandi

	int temp=1;
//while dongusune kadar for noktadan sonraki harfleri buyuk yapar
	for(int i=0; array[i] !='\0';i++) { //stringin son kelimesine kadar doner
		
		if(temp==1 && array[i]!='.') 
		{
			array[i]=toupper(array[i]); // toupper fonksiyonu cagrildi
			temp=0;// //if e girersse temp =0 yap
		}
		else if(array[i]=='.') // . ise tempi 1 yap tekrar donguye gir
		temp=1; // 
   }
    char* variable = strtok(array, "."); 
 // while dongusu '.' dan sonraki kelimeyi alt satira yazdirir   
    while (variable != NULL) 
    { 
		
        printf("%s\n", variable); 
        variable = strtok(NULL, "."); //. gorukdugu zaman cümle bolunecek
    } 

return 0;
}
