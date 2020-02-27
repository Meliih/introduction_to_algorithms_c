#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int bulundumu(FILE *f, char *id){
    char l[150], l2[150]; 
    while(fgets(l, 150, f) != NULL){
        strcpy(l2, l);
        char *pid = strtok(l, "\t");
        if(!strcmp(id, pid)){
            printf("Id: %s\n", pid);
            printf("First Name: %s\n", strtok(NULL, "\t"));
            printf("Last Name: %s\n", strtok(NULL, "\t"));
            return 1;
        }
    }
    return 0;
}

void ogrenci_ekle(FILE *f){
        char no[10], isim[40], soyisim[40];
        printf("No: ");
        scanf("%9s", no);
        printf("Isim: ");
        scanf("%40s", isim);
        printf("Soyisim: ");
        scanf("%40s", soyisim);
        fprintf(f,"\n%s\t%s\t%s",no,isim,soyisim);
}

/*int soyisim_ile_ara(FILE *f, char *soyisim){
	if(f==NULL){
		return 0;
	}
	
   
    return 0;
}

int isim_ile_ara(FILE *f, char *isim){
    if(f==NULL){
		return 0;
	}
	char s[250];

	while (fgets (s, 250, f) != NULL) {
		if(strcmp(f,isim)) {
			printf("%.15s",s);
		}
	}
	
    return 0;
}
*/
int main(){	
	int tercih;
	
	char soyisim;
	char isim;
	char no[10];
    FILE *f = fopen("ogrenci.txt", "a+");
    if (f == NULL){
        fprintf(stderr, "Dosya bulunamadi");
        exit(1);
    }
    
	printf("Kullanici ekle icin 1'i\n");
	printf("No ile arama yapmak icin 2'i tuslayiniz\n");
	printf("Isim ile arama yapmak icin 3'i tuslayiniz\n");
	printf("Soyisim ile arama yapmak icin 4'i tuslayiniz\n");
	scanf(" %d ",&tercih);
	
	if(tercih==1) {
		ogrenci_ekle(f);
		printf("Ogrencinin kaydi yapilmistir");
	}
	
	if(tercih==2) 
	{
		printf("ogrenci no: ");
		scanf("%9s", no);
		bulundumu(f,no);
	}
	if(tercih==3)
	{
		printf("isim giriniz:");
		scanf("%15s",&isim);
		//isim_ile_ara(f,isim);
	}
    
    if(tercih==4)
    {
		printf("soyisim giriniz:");
		scanf("%15s",&soyisim);
		//soyisim_ile_ara(f,soyisim);
	}
    
    fclose(f);
    return(0);
}






