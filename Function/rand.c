
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){
	int a=1;
	int rastgele =rand();
    srand(time(NULL));
   //rand()%10 [0, 10) aralığında bir tam say verir
    while(a<=10){
                 rastgele=rand()%25;
                 printf("%d sayi=%d \n",a,rastgele);
                 a++;
                 }
	
	return 0;
}

