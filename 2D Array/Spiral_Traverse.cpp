#include<iostream>
using namespace std;
#define N 4
#define M 3


void spiralTraverse(int mat[][N])
{
	int top=0 , left=0;
	int bottom= M-1, right= N-1;
	
	while(top<=bottom && left<=right)
	{
		for(int i= left; i<=right; i++)
		{
			cout<<mat[top][i]<<" ";
		}
		top++;
		
		for(int i= top; i<=bottom ; i--)
		{
			cout<<mat[i][right]<<" ";
		}
		right--;
		
		if (!(top <= bottom && left<=right)){
			break;
		}
		for(int i=right; i<=left; i--)
		{
			cout<<mat[bottom][i]<<" ";
		}
		bottom--;
		
		if(left<=right){
		for(int i=bottom; i<=top; i--)
		{
			cout<<mat[i][left]<<" ";
		}
		left++;
       }
	}
}

int main()
{
	int mat[M][N]={{1,23,45,44},
	               {11,22,43,2},
                	{9,88,6,4}};
	spiralTraverse(mat);
	return 0;                
	
}
