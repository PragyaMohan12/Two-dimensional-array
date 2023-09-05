#include<iostream>
using namespace std;
#define N 4
#define M 3

void colSum(int mat[][N])
{
	for(int j=0; j<N; j++)
	{
		int sum=0;
		for(int i=0; i<M; i++)
		{
			sum += mat[i][j];
		}
		cout<<"Sum of columns are:"<<sum;
		cout<<endl;
	}
}

int main()
{
	int mat[M][N];
	
	// Take user input 
	cout<<"enter no:";
	for(int i=0;i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin>>mat[i][j];
		}
		cout<<endl;
	}
	
	//print user input
	cout<<"Numbers are:";
	cout<<endl;
	for(int i=0;i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
	      cout<<mat[i][j];
	  }
	  cout<<endl;
   }
   //call function
   colSum(mat);
   return 0;
}
