#include<iostream>
using namespace std;
#define n 3
#define m 4
/*void printBoun(int matrix[][n])
{
//	int i=0;
	for(int j=0; j<n; j++)
	{
		int i=0;
	    cout<<matrix[i][j];
	    cout<<endl;
	}
//	int j=n-1;
	for(int i=1; i<m-1; i++)
	{
		int j=n-1;
		cout<<matrix[i][j];
		cout<<endl;
	}
//	int i=m-1;
	for(int j=m-2; j>=0;j--)
	{
		int i=m-1;
		cout<<matrix[i][j];
		cout<<endl;
	}
//	int j=0;
	for(int i=m-1; i>=1; i--)
	{
		int j=0;
		cout<<matrix[i][j];
		cout<<endl;
	}
}
int main()
{
	int matrix[m][n]={{1,2,3},
	                {4,5,6},
					{7,8,9},
					{10,11,12}};
	printBoun(matrix);
	
	
	
	return 0;				
}
*/

void printBoundary(int mat[][n])
{
	for(int i=0 ; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==0 || j==0 || i==m-1 || j==n-1)
			{
				cout<<mat[i][j]<<" ";
			}
			else{
				cout<<" "
				      "  ";
			}
		}
		cout<<endl;
	}

}
int main()
{
	int mat[m][n]= {{1,2,31},
	             {4,5,60},
				 {7,8,90},
				 {10,11,12}};
	printBoundary(mat);
	
	return 0;			
				
}

