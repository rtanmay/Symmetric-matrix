#include <bits/stdc++.h>
using namespace std;

int main()
{   
	cout<<"Enter the order of the matrix(N):";
	unsigned long long int N;
	cin>>N;
    double M[N][N];
    int i,j;
    for(i=0;i<N;i++)
    {
    	cout<<"Enter the "<<i+1<<"th row:";
    	for(j=0;j<N;j++)
    	{
          cin>>M[i][j];
    	}
    }
    cout<<"Matrix has been entered!\n";


	return 0;
}