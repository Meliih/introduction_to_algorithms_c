#include <stdio.h>

int main(){
	//fgets kullanımı
    FILE *f = fopen("geneData.txt", "r");
    if(f == NULL){
        return 0;
    }
    char s[250];
    while (fgets (s, 250, f) != NULL){
        printf("%.250s", s);
    }

    fclose(f);
    return 0;
    
}
