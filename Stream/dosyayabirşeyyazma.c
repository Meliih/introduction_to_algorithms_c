
#include <stdio.h>

int main() {
	char text[256];
	FILE *f=fopen("yaz.txt","a");
	
	if(f==NULL )
	printf("Dosya olusturalamadi");
	
	else {
		printf("Birseyler yazin ");
		fgets(text,256,stdin);
		fputs(text,f);
		printf("Dosyaya yazildi");
		fclose(f);
	}

	return 0;
}

