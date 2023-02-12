#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  uint32_t x = 0;

  //////////////////////////
  // MANIPULATE BITS HERE //
  //////////////////////////

   x |= 1;

   x |= (1 << 2);

   x |= (1 << 5);

   x |= (122 << 23);

   x &= ~(1 << 31);


  float f = reinterpret_cast<float&>(x);
  cout << "x = " << x << endl;
  cout << "f = " << showpos << scientific << setprecision(8) << f << endl;
}

