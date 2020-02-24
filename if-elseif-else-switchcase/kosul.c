 #include<stdio.h>
  int main ()
{
	int note;
	printf("Notunuzu giriniz=");
	scanf("%d",&note);
	
	if (note >60) //Kosul dogru ise yapılacak islemleri yapar
	{
	printf("Dersten Gectiniz");
	}
	
	else 
	{
	printf("Dersten Kaldiniz");
    }	
 return 0;	
}
