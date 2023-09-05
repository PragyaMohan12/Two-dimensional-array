#include<iostream>
using namespace std;
#define N 3
#define M 3

void rowSum(int mat[][N])
{
	for(int i=0; i<M;i++)
	{
		int sum=0;
		for(int j=0; j<N; j++)
		{
			sum += mat[i][j];
		}
		cout<<"Sum of row are:"<<sum;
		cout<<endl;
	 }
}
int main()
{
	int mat[M][N];
	
	cout<<"enter No:";
	cout<<endl;
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin>>mat[i][j];
		}
		cout<<endl;
		
	}
	cout<<"Array are:";
	cout<<endl;
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cout<<mat[i][j];
        }
        cout<<endl;
    }
    
    rowSum(mat);
    return 0;
}
