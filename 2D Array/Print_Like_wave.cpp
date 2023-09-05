#include<iostream>
using namespace std;
#define N 4
#define M 3

void wavePrint(int mat[][N])
{
	for(int j=0; j<N; j++)
	{
		if(j%2 ==0)  // means index either 0 or even 
		{
			for(int i=0 ;i<M ; i++)
			{
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		else{
			for(int i=M-1; i>=0 ; i--)
			{
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}

int main()
{
	int mat[][N]={{1,22,33,4},
             	{11,2,34,55},
            	{23,9,88,56,}};
    for(int i=0; i<M; i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}        	
	//call function
	wavePrint(mat);
	return 0;
}
