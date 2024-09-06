#include<stdio.h>
int main()
{
   int firsumt,sumecond;
   int third,sum;
   sum=0;
   int j , i , h;
   scanf("%d %d %d", &firsumt, &sumecond, &third);
   int a[firsumt][sumecond];
   int b[sumecond][third];
   int po[firsumt][third];
   for(i=0; i<firsumt; i++)
   {
   	for(j=0; j<sumecond; j++)
   		scanf("%d", &a[i][j]);
   }
   for( i=0; i<sumecond; i++)
   {
   	for( j=0; j<third; j++)
   		scanf("%d", &b[i][j]);
   }
   for( i=0; i<firsumt; i++)
   {
   	for( j=0; j<third; j++)
   	{
   		for(h=0; h<sumecond; h++)
   			sum =sum+ a[i][h] * b[h][j];
   		po[i][j]=sum;
   		sum=0;
   	}
   }
   for(i=0; i<firsumt; i++)
   {
   	for(j=0; j<third; j++)
   		printf("%d ",po[i][j]);
   	printf("\n");
   }
   return 0;
}
 