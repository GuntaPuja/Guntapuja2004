/* C Program to print the sum of elements in the Zigzag sequence in a given matrix */
//Without using pointers. Solving the problem using pointers is given below :
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n, sum = 0, row1 = 0, col_n = 0, diag = 0;
       
	int i, j;
	int mat[m][n];
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				
		

	for(i = 0; i <= 0; i++)
		{
			for(j = 0; j < n-1; j++)
				{
					row1 = row1 + mat[i][j];
				}
		}		


	{
		for(i = 0; i < m; i++)
			{
				col_n = col_n + mat[j][i];
			}
	}

for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			{
			
					{
						diag += mat[i][j];
					}
				if(j == 0 && i == m-1)
					
			
	
	


// Using pointers
#include<stdio.h>
#include<stdlib.h>
int main()

	
	
	

	
		*(a+i)=(int*)malloc(c*sizeof(int));

	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				{
					
				}
		}

	i=0;int sum1=0;
	for(j=0;j<c-1;j++)
		sum1=sum1+*(*(a+i)+j);

	i=r-1;int sum3=0;
	for(j=1;j<c;j++)
		sum3=sum3+*(*(a+i)+j);

	i=0;j=c-1;int sum2=0;
		while(i<r&&j>=0)
			{
				sum2=sum2+*(*(a+i)+j);
				i++;
				j--;
			}
	
	return 0;
}
