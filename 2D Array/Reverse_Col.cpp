#include<iostream>
using namespace std;
#define M 4
#define N 5

void reverseCol(int mat[][N])
{
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<=N/2; j++){
		   swap(mat[i][j], mat[i][N-1-j]);	
		}
	}
}

int main()
{
	int mat[M][N]={{1,2,3,4,55},
	              {11,2,3,4,50},
				  {12,13,14,8,9},
				   {15,16,7,4,2}};
				   
	reverseCol(mat);			   
   cout<<"Modefied matrix are:";
	cout<<endl;
	for(int i=0 ; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cout<<mat[i][j]<<" ";
			
		}
		cout<<endl;
	 }	 
	 return 0;				   
}

