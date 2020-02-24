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
    
    char s[250];
    while (fgets(s, 250, f) != NULL){
        printf("%.250s", s);
        fputs(s, newf);
    }
    fclose(f);  fclose(newf);
    return 0;
}

