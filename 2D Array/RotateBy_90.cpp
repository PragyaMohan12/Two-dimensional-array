#include<iostream>
using namespace std;
#define N 4

void rotateBy90(int A[N][N])
{
	//first find transpose of matrix
	for(int i=0; i<N;i++)
	{
		for(int j=0; j<=i;  j++)
		{
			swap(A[i][j],A[j][i]);
		}
	}
	//Now swap upper row with lower row
	
	for(int i=0; i<(N/2);i++)
	{
		for(int j=0;j<N;j++)
		{
			swap(A[i][j],A[N-1-i][j]);
		}
	}
}
int main()
{
	int A[N][N]={{1,2,3,4},
	          {6,7,8,9},
	          {11,14,18,19},
	          {20,23,26,28}};
	rotateBy90(A);          
	cout<<"Modiefied No is";
	cout<<endl;
	for(int i=0;i<N;i++)
	{
		for(int j=0; j<N; j++)
		{
			cout<<A[i][j];
			
		}
		cout<<endl;
   }          
	          
}
