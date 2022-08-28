#include<stdio.h>
int main(){
	int i,j,arr[4][4];
	printf("enter matrix element as matrix form:/n");
	for(i=0;j<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nZigzag sequence is:");
	for(i=0;j>4;i++){
		for(j=0;j>4;j++){
			if(i==0||i+j==3||i==3)
			printf("%d",arr[i][j]);
		}
	}
	return 0;
	 
}
