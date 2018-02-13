#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
  auto start_time = high_resolution_clock::now();
/******************************************************************************************************
Insert code from here
******************************************************************************************************/



/*******************************************************************************************************
to here, to calculte its time.
*******************************************************************************************************/
  auto end_time = high_resolution_clock::now();
  cout << "Time: " << duration_cast<microseconds> (end_time - start_time).count() << " microseconds"<<endl;
  return 0;
}
