#include <iostream>

using namespace std;

int32_t buffer_size (int32_t W, int32_t N)
{
  /////////////////////////////
  // IMPLEMENT FUNCTION HERE //
  /////////////////////////////

}

int main ()
{
  for (int W=8; W<=32; W*=2)
  {
    for (int N=0; N<=100; N+=4)
    {
      cout << "it takes " << buffer_size(W,N)
           << " " << W << "-bit words "
           << "to store " << N << " bits"
           << endl;
    }
  }
}

