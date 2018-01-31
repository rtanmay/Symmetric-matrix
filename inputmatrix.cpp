//SYMMETRIC MATRIX CLASS STORING ONLY THE LOWER TRAINGLE  IN A VECTOR (IN ROW MAJOR ORDER)

#include <bits/stdc++.h>
using namespace std;

//Aim is to create a class similar to matrix template class in Eigen library:-
//-------------------------------------------------------------------------------------------
//template<typename _Scalar, int _Rows, int _Cols, int _Options, int _MaxRows, int _MaxCols>
//class Eigen::Matrix< _Scalar, _Rows, _Cols, _Options, _MaxRows, _MaxCols >
//-------------------------------------------------------------------------------------------

template <typename _Scalar>
class SymMatrix                       
    {   
      public:
       int _Rows, _Cols;
              
       SymMatrix(int initialise,_Scalar gettype)        //CONSTRUCTOR
       {
       	 _Rows=initialise;                              //Rows same as columns as symmetric matrix is a square matrice
       	 _Cols=initialise;
       }

       int cols_in_store;                               //Columns in the store vector

       vector<_Scalar> store;                    		//Storing in row major order

       //Member functions
       void Input();
       void Print();
       void Printelement(int,int);

    };


//INPUT FUNCTION
template <typename _Scalar>
void SymMatrix<_Scalar>::Input()
{ 
  cout<<"Enter only the lower triangle of matrix:\n";
  cols_in_store=(_Rows*(_Rows+1))/2;	
  int i,j;
  _Scalar temp;
  for(i=0;i<cols_in_store;i++)
  {
  	cin>>temp;
    store.push_back(temp);
  } 

}

//PRINT FUNCTION(Prints whole matrix)
template <typename _Scalar>
void SymMatrix<_Scalar>::Print()
{
  int i,j,k=0;
  cout<<"\nThe matrix looks like:\n";
  for(i=0;i<_Rows;i++)
  {
  	for (j=0;j<_Cols;j++)
  	{  
  	   if( i>=j )
  	   {
         cout<<store[k]<<" ";
         k++;
       }
       else
       {
       	 int l,i1=i,j1=j,i2,j2;
         int temp=i1;
         i1=j1;
         j1=temp;
         l=0;
  		 for(i2=0;i2<i1;i2++)
    	 {
  	  		for (j2=0;j2<=i2;j2++)
  	  		{
        		l++;
  	  		}
    	 }
    	 l=l+j1;
    	 cout<<store[l]<<" ";

       }
  	}
  	cout<<"\n";
  }
  cout<<"\n";
	
}

//Print a single element
template<typename _Scalar>
void SymMatrix<_Scalar>::Printelement(int row,int col)
{ 
  int r=row,c=col;	 
  if(r<c)                 //Swapping as A(i,j)==A(j,i) if A is symmetric
  {
  	int temp=c;
  	c=r;
  	r=temp;  	
  }
  
  int i,j,k=0;
  for(i=0;i<r;i++)
    {
  	  for (j=0;j<=i;j++)
  	  {
        k++;
  	  }
    }
  k=k+c;
  cout<<"Element at row:"<<row+1<<" and column:"<<col+1<<" is:"<<store[k]<<"\n";
  
}



//MAIN FUNCTION
int main()
{   
	//Creating a 5x5 float matrix;
	float telltype;
	SymMatrix<float> m(5,telltype);        

	//Inputs only lower triangle of the matrix
	m.Input();
	
	//Prints the whole matrix,it does not create a matrix, just print the elements.
	m.Print();

	//Prints a specific element
	//Here it is printing element at 3rd row and 4th column
	m.Printelement(2,3);              

    return 0;	
}