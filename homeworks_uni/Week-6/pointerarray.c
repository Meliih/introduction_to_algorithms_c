#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void first_and_last(char *array[],int boyut,char **min,char **max)
{
   
    char *temp;//gecici deger tanimlandi

    for(int i=0;i<boyut;i++)
    {
        for(int j=i+1;j<boyut;j++)
        {
			if(array[i][0]>array[j][0]) // dizi alfabetik siraya gore siralaniyor
			{
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                
            }
        }
    }
    
	*min=array[0],*max=array[7];
	//siralanmis dizinin ilk ve son kelimesinin adresinini tutar
}


int main(){
    
    char *array[]={"hello","world","today","is","a","very","nice","day"};//kelimeler tanimlandi
    int boyut=8; //arrayin boyutu tanimlandi
    char *minS,*maxS; //min ve max charı tutacak pointer tanimlandi
	first_and_last(array,boyut,&minS,&maxS); //fonksiyona gonderildi
    printf ("The first word is %s and the last is %s\n",minS,maxS);
   
    return 0;
}
