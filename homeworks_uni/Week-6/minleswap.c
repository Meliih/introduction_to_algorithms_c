#include <stdio.h>
#include <string.h>

void swapWithMin (int *px,int *py){
	//dizinin elemanlarini kucukten buyuge degistiriyor
	if(*py>*px) {
		int temp=*px;
			*px=*py;
			*py=temp;
	}
}

	
int main () {
	
	int msg[]={13,89,34,87,23,72,12,31,83,39,71,43,100,5,7,92,19,25,3,17,34,18};
	int z=sizeof(msg)/sizeof(int); //dizinin eleman sayisini bir degiskene atadim
	
	for (int i=0;i<z;i++) {
	
		for(int j=i+1;j<z;j++) {
			
			swapWithMin(&msg[j],&msg[i]);//dizinin tum elemanlari ikili ikili gonderilecek fonksiyon sıralayacak
		}
	}
		printf("Minumun : %d Maksimun : %d",msg[0],msg[z-1]);

return 0;
}



