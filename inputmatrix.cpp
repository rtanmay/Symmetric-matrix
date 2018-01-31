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
        //int S;
              
       Symtrix(int initialise,T gettype)        //CONSTRUCTOR
       {
       	N=initialise;
       }
        //int S=(N*N+N)/2;
       
       vector<vector<T> > matrix(N, vector<T> N);
       
    
       void Input();
       void Print();
       //~Symtrix();                              //DESTRUCTOR

    };


//INPUT FUNCTION
template <typename T>
void Symtrix<T>::Input()
{ 
  int i,j;
  T temp;
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
    	cin>>matrix[i][j];
    	//matrix[i].push_back(temp);
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
  		cout<<matrix[i][j]<<" ";
  	}
  	cout<<"\n";
  }
	
}

//MAIN FUNCTION
int main()
{   
	int order;
	cout<<"Enter the order of the matrix:";
	cin>>order;
	float telltype;
	Symtrix<float> s(order,telltype);                     //Passing arguments when creating an object
	s.Input();
	s.Print();
    return 0;	
}