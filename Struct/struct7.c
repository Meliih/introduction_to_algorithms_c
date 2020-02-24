#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct Ogrenci{
        char no[10], isim[40];
        struct Ogrenci *next;
    }   s3 = {"3", "Ayse", NULL}, 
        s2 = {"2", "Ali", &s3}, 
        s1 = {"1", "Omer", &s2};


    struct Ogrenci *s4 = (struct Ogrenci*) malloc(sizeof(struct Ogrenci));
    strncpy(s4->no,"4", 10);
    strncpy(s4->isim,"Fatma", 40);
    
    s4->next = NULL;
    s3.next = s4;

    struct Ogrenci *temp = &s1;
    while(temp != NULL){
        printf("%.10s-%.40s\n", temp->no, temp->isim );
        temp = temp->next;
    }
    return 0;
}
