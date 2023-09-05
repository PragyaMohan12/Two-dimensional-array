#include<iostream>
#include<vector>
using namespace std;
#define N 4

void transpose(int A[][N])
{
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<=i; j++ ){
			swap(A[i][j],A[j][i]);
		}
	}
}

int main()
{
     
	int A[N][N]={{1,2,3,4},
	             {7,8,9,10},
	             {12,13,14,30},
	             {23,56,57,80}};
	             
	transpose(A);
	
	cout<<"Modified matrix is"<<" ";
	cout<<endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <N; j++)
           cout<< A[i][j];
        cout<<endl;
    }

 
    return 0;
}			 
								               

