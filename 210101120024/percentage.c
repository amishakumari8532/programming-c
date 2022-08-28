#include<stdio.h>
int calcpercentage(int science,int math,int sanskrit);
int main(){
	int sc=56;
	int math=75;
	int sanskrit=67;
	printf("percentage is:%d",calcpercentage(sc,math,sanskrit));
	return 0;
}
int calcpercentage(int science,int math,int sanskrit){
	return((science+math+sanskrit)/3);
}
