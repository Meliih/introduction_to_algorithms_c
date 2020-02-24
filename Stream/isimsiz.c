#include <stdio.h>

int main () {
	
	FILE *f =fopen("a.txt","rb+");
	char a[5];
	
	if(f !=NULL) {
		fread(a,sizeof(char),3,f);
		printf("%c,%c,%c\n",a[0],a[1],a[2]);
		
		fwrite(&a[0],sizeof(char),3,f);	
	}
	fclose(f);
	return 0;
}
