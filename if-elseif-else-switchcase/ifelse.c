


  #include <stdio.h>

   int main ()
{   
   int vize1,vize2,final;  
   float dersort;
   
   printf("1.Vize notunuzu giriniz=");
   scanf("%d",&vize1);
   printf("2.Vize notunuzu giriniz=");
   scanf("%d",&vize2);
   printf("3.Final notunuzu giriniz=");
   scanf("%d",&final);

   dersort=(vize1 + vize2 +final)/3.0;
   
   if (dersort > 60) { 
   //if ,else, else if de tek satır yazacaksan {} gerek yok
  
	printf("Dersten gectiniz");
	    
   }
   
   else {
	printf("Dersten kaldiniz");   
   
	
	
	return 0;
}

