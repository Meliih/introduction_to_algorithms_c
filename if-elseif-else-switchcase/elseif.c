
  #include <stdio.h>

   int main ()
{   
   int vize1,vize2,final;  
   float dersort,ortalama;
   
   printf("1.Vize notunuzu giriniz=");
   scanf("%d",&vize1);
   printf("2.Vize notunuzu giriniz=");
   scanf("%d",&vize2);
   printf("3.Final notunuzu giriniz=");
   scanf("%d",&final);
   printf("Universite ortalamaniz kac?");
   scanf("%f",&ortalama);

   dersort=(vize1 + vize2 +final)/3.0;
   
   if (dersort>60)
   {
	   printf("Dersten gectiniz");
   }
   else if (dersort>=50) 
   {
	   printf("Dersten bute kaldiniz\n");
	   if (ortalama < 2.5)
	   printf("Butu gecsende seneye dersi aliniz cünkü ortalamaniz dusuk");
   } 
   else
   {
	printf("Kaldiniz");
   }
 
 return 0;     
}      
