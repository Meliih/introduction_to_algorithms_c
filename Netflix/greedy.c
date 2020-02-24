#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct f{
float sure;
float mem;
float deger;
};
int main(int argc, char **argv){
	srand(time(NULL));
	struct f filmler[10];
	for(int i=0;i<10;i++){//süreleri atar
	filmler[i].sure=rand()%40+21;}
	for(int i=0;i<10;i++){//memnuniyeti atar
	filmler[i].mem=rand()%10+1; }
    for(int i=0;i<10;i++){//değerliğini atar
	filmler[i].deger=(filmler[i].mem)/(filmler[i].sure); }				 
						
	for(int i=0,b='a';i<10;i++,b++)
		printf("%c PROGRAMININ MEMNUNIYET DEGERI: %0.f SURESI %0.f\n",b,filmler[i].mem,filmler[i].sure);//atananları yazdırır
	int m; 
	struct f temp;
	for(int x=0;x<10;x++){
	m=x;
	for(int y=x+1;y<10;y++){//sıralar
		if(filmler[m].deger>filmler[y].deger)
		m=y;
		}
		if(m!=x){
	temp=filmler[m];
	filmler[m]=filmler[x];
	filmler[x]=temp;}}
	int memtop=0,suretop=0;
	printf("\n\nsecilenler\n\n");
	int i=9;
	while(suretop<=180){//180i geçmeyecek şekilde en iyileri seçer
		suretop+=filmler[i].sure;	
if(suretop<=180){
	
		memtop+=filmler[i].mem;
		printf("MEMNUNIYET: %0.f SURE: %0.f \n",filmler[i].mem,filmler[i].sure);
			i--;}
		
		}
	printf("EN IYI MEMNUNIYET ORANI: %d",memtop);
	return 0;
}

