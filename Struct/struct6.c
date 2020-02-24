#include <stdio.h>

struct Ogrenci{
    char no[10], isim[40];
    struct Ogrenci *next;
};



int main () {
	
	struct Ogrenci s4 = {"4", "Kaan", NULL};
	struct Ogrenci s3 = {"3", "Ayse", NULL};
	struct Ogrenci s2 = {"2", "Ali", NULL};
	struct Ogrenci s1 = {"1", "Omer", NULL};
	
	s1.next = &s2;
	s2.next = &s3;
	s3.next = &s4;
	
	/*
	printf("%.10s-%.40s\n",s1.no,s1.isim);
	printf("%.10s-%.40s\n",s1.next->no,s1.next->isim);
	printf("%.10s-%.40s\n", s1.next->next->no, s1.next->next->isim);
	 
	*/
	
	
	struct Ogrenci *temp = &s1;
	
	while(temp != NULL)
	{
    printf("%.10s-%.40s\n", temp->no, temp->isim );
    temp = temp->next;
	}

	
return 0;	
}
