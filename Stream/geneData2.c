#include <stdio.h>
int main(){
    FILE *f = fopen("geneData.txt", "r");
    if(f == NULL){
        return 0;
    }
    char s[100][250];
    int row = 0;
    while (fgets (s[row], 250, f) != NULL && row < 100){
        printf("%.250s", s[row]);
        row++;
    }

    fclose(f);
    
    
    return 0;
    
 
}
