

   #include<stdio.h>
   
   
   int main ()
{
    int vize1,vize2,final;
    float okulortalama,dersort;
    printf("1.Vize:");
    scanf("%d",&vize1);
    printf("2.Vize:");
    scanf("%d",&vize2);
    printf("Final:");
    scanf("%d",&final);
    printf("Universite ortalamanizi giriniz:");
    scanf("%f",&okulortalama);
    
    dersort=(vize1 *3/10.0 + vize2 *3/10.0 + final*4/10.0);
    
    if (dersort >=90) {

	printf("Harf Notunuz AA ve Ders Ortalamaniz: %f",dersort);  
}
    else if(dersort >=85 && dersort < 90) {

	printf("Harf Notunuz BA ve Ders Ortalamaniz: %f",dersort);
}
    else if(dersort >=80 && dersort < 85) {

	printf("Harf Notunuz BB ve Ders Ortalamaniz: %f",dersort);
}
	else if(dersort >=75 && dersort < 80) {

	printf("Harf Notunuz CB ve Ders Ortalamaniz: %f",dersort);
}
    else if(dersort >=70 && dersort < 75) {

	printf("Harf Notunuz CC ve Ders Ortalamaniz: %f",dersort);

	if( okulortalama < 2.5){

	printf("Dersi tekrar almaniz yararli olur cunku ortalamiz dusuk");
    }
}
    else if(dersort >=65 && dersort < 70) {

	printf("Harf Notunuz DC ve Ders Ortalamaniz: %f",dersort);

     if( okulortalama < 2.5) {
  	 
	printf("Dersi tekrar almaniz yararli olur cunku ortalamiz dusuk");
    }
}
    else if(dersort >=60 && dersort < 65) {

	printf("Harf Notunuz DD ve Ders Ortalamaniz:%f",dersort);
	
    if( okulortalama < 2.5){

	printf("Dersi tekrar almaniz yararli olur cunku ortalamiz dusuk");
    }
}
   else {
   printf("Harf Notunuz FF ve Ders Ortalamaniz:%f",dersort);
   printf("Dersten Kaldiniz ");
}


 return 0;
}
