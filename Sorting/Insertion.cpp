#include<cstdio>
#include <cstdlib>

int main()
{
	int n =50;
	int A[n];
	printf("Unsorted Array: \n");
	for(int i=0; i<n;i++)
	{
		A[i] = rand();
		printf("%d, ",A[i]);
	}
	
	for(int i=1;i<n;i++)
	{
		int key =A[i];
		for(int j =0;j<i;j++)
		{
			if(A[j]>A[i])
			{
				for(int k =i;k>j;k--)
				{
					A[k]=A[k-1];
				}
				A[j]=key;
			}
		}
	}
	printf("\nSorted Array: \n");
	for(int i=0;i<n-1;i++)
	{
		printf("%d, ",A[i]);
	}
	printf("%d",A[n-1]);
}
