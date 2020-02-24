#include <stdio.h>
#include <string.h>

void swap(char *px,char *py){
//fonksiyona dizinin bas harfi ile son harfi geldi
    char temp = *px;
    *px = *py;
    *py = temp; // bas harfle son harf yer degistirdi
}


int main(void){

    char a[]="melihkahraman";

	printf("Before: %s\n",a); //stringi ekrana bastı
    swap(&a[0],&a[(strlen(a)-1)]);
    printf("After: %s\n",a); // bas harfle son harf yer degistirilmis bir sekilde ekrana bastı
return 0;
}
