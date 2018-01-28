#include <bits/stdc++.h>
using namespace std;

//The class is created similar to matrix template in Eigen

template <typename T>
class Symtrix                       
    {   
      public:
       int N;
       int S;
       S=(N*N+N)/2;
       T M[n][n];
       Symtrix(int initialise)        //CONSTRUCTOR
       {
       	N=initialise;
       }
       T M[100][100];
       void Input(int);
       void Print(int);

    };

void Symtrix::Input(int n)
{ 
  int i,j;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		cin>>M[i][j];
  	}
  }
}
void Symtrix::Print(int n)
{
  int i,j;
  cout<<"----------------------------------";
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		cout<<M[i][j];
  	}
  }

}
int main()
{   
	int num;
	cout<<"Enter the order of the matrix(less than 10^8):";
	cin>>num;
	Symtrix<float> s(num);
	s.Input(s.N);
	s.Print(s.N);
    return 0;	
}