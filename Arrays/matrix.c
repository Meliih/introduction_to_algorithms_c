#include <stdio.h>
#include <string.h>


int main(){
	
	int a[2][2]={{4,3},{2,7}};
	int b[2][2]={{7,13},{21,4}};
	int temp[2][2]={{0}};
	for(int i=0;i<2;i++){
		
		for(int j=0;j<2;j++) {
			
			for(int k=0;k<2;k++) {
				
				temp[i][j]+=a[i][k]*b[k][j];
					
			}
		}
	}

	printf("%d  %d \n",temp[0][0],temp[0][1]);
	printf("%d %d \n",temp[1][0],temp[1][1]);
	
	
	
	return 0;
}
