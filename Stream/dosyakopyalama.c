#include <stdio.h>

int main(){
    FILE *f, *newf;
    f = fopen("geneData.txt", "r");
    if(f == NULL){
        return 1;
    }
    newf = fopen("newData.txt","w");
    if(newf == NULL){
        fclose(f);
        return 1;
    }
  char l[123];
    while((fgets(l,250,f)) != NULL){
        fputs(l, newf);
    } 
    
    fclose(f); fclose(newf);
    return 0;
}

