#include<iostream>
using namespace std;
#define N 3
#define M 4

int main()
{
	int mat[M][N];
	
	//take user input
	cout<<" enter No:"<<" ";
	for(int i=0 ;i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin>>mat[i][j];
		}
		cout<<endl;
	}
	
	//print input
	for(int i=0 ;i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
		  cout<<mat[i][j]<<" ";
	   }
	   cout<<endl;
    }
    return 0;
}
