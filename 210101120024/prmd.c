 #include<stdio.h>
 int main()
 {
 	int i,j,row,t=40,k,m=17,p;
 	for(i=0;i<9;i++)
 	{
 		k=1,p=1;
 		for(row=i;row<t;row++)
 		printf(" ");
 		while(k<=m)
 		{
 			printf("%d",p);
 			if(k<=(int)(m/2))
 			p++;
 			else
 			p--;
 			k++;
 			
		 }
	printf("\n");
	m-=2;
	t=t+2; 
	 }
	 return 0;
 }
