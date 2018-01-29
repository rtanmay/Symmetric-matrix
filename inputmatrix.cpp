//		SYMMETRIC MATRIX CLASS STORING UPPER TRAINGLE ONLY

#include <bits/stdc++.h>
using namespace std;

//The class is created similar to matrix template class in Eigen library:-
//-------------------------------------------------------------------------------------------
//template<typename _Scalar, int _Rows, int _Cols, int _Options, int _MaxRows, int _MaxCols>
//class Eigen::Matrix< _Scalar, _Rows, _Cols, _Options, _MaxRows, _MaxCols >
//-------------------------------------------------------------------------------------------

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