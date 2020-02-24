#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Ogrenci{
    char no[11], isim[40];
    struct Ogrenci *next;       
} bas;

int ogrencileri_oku(FILE *f){
    if (f == NULL){
        return -1;
    }
    struct Ogrenci *temp = &bas;
    char l[150];
    while(fgets(l, 150, f) != NULL){
        temp->next = (struct Ogrenci *) malloc(sizeof(struct Ogrenci));
        char *no = strtok(l, "\t");
        char *isim = strtok(NULL, "\t");

        if (no != NULL && isim != NULL){
            strncpy(temp->next->no, no, 11);
            strncpy(temp->next->isim, isim, 40);
            temp = temp->next;
        }
    }
    temp->next = NULL;
    return 0;
}
void ogrencileri_yazdir(){

    struct Ogrenci *temp = &bas;

    while(temp->next != NULL){
		 printf("%.40s\n", temp->no);
       //printf("%.40s\n", temp->isim);
        temp = temp->next;
    }
}


int main () {
	
	FILE *f=fopen("ogrenci.txt","r");
	ogrencileri_oku(f);
	ogrencileri_yazdir();
	
	
}

