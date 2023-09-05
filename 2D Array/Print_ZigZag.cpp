#include<iostream>
using namespace std;
#define N 3

void print_ZigZag(int mat[][N])
{
	for(int i=0; i<N; i++)
	{
		if(i%2 == 0)
		{
			for(int j=0 ;j<N ; j++)
			{
				cout<< mat[i][j]<<" ";
			}
			cout<<endl;
		}
		else{
			for(int j=N-1; j>=0; j--)
			{
				cout<< mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
int main()
{
	int mat[][N]={{1,2,33},
	             {11,2,34},
	             {34,7,80}};
	print_ZigZag(mat);	
	return 0;			 
}

