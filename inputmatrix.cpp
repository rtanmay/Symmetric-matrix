//		SYMMETRIC MATRIX CLASS STORING UPPER TRAINGLE ONLY

#include <bits/stdc++.h>
using namespace std;

//The class is created similar to matrix template in Eigen library

template <typename T>
class Symtrix                       
    {   
      public:
        int N;
        int S;
              
       Symtrix(int initialise,T ptr)        //CONSTRUCTOR
       {
       	N=initialise;
       }
       S=(N*N+N)/2;
       
       T **ptr = new T[N][N];

       void Input();
       void Print();

    };


//INPUT FUNCTION
template <typename T>
void Symtrix<T>::Input()
{ 
  int i,j;
  for(i=0;i<N;i++)
  {
  	for(j=0;j<N;j++)
  	{
  		cin>>M[i][j];
  	}
  }
}

//PRINT FUNCTION
template <typename T>
void Symtrix<T>::Print()
{
  int i,j;
  cout<<"\nPrinting the output:\n";
  for(i=0;i<N;i++)
  {
  	for(j=0;j<N;j++)
  	{
  		cout<<M[i][j]<<" ";
  	}
  	cout<<"\n";
  }
	
}

//MAIN FUNCTION
int main()
{   
	int num;
	cout<<"Enter the order of the matrix:";
	cin>>num;
	float telltype;
	Symtrix<float> s(num,telltype);                     //Passing arguments when creating an object
	s.Input();
	s.Print();
    return 0;	
}