#include <iostream>
#include <limits>
using namespace std;

int main ()
{
  {
    ///////////////////////////////////
    // CREATE SIGNED,UNSIGNED 32-BIT //
    // INTEGERS NAMED s,u AND        //
    // INITIALIZE THEM TO ZERO       //
    ///////////////////////////////////
    int32_t s = 0;
    uint32_t u = 0;

    cout << "32-bit before decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    ///////////////////
    // DECREMENT s,u //
    ///////////////////

    --s;
    --u;


    cout << "32-bit after decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }

  {
    ///////////////////////////////////
    // CREATE SIGNED,UNSIGNED 16-BIT //
    // INTEGERS NAMED s,u AND        //
    // INITIALIZE THEM TO MAXIMUMS   //
    ///////////////////////////////////

    int16_t s = numeric_limits<int16_t>::max();
    uint16_t u = numeric_limits<uint16_t>::max();


    cout << "16-bit before increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    ////////////////////////
    // INCREMENT s,u HERE //
    ////////////////////////

    ++s;
    ++u;


    cout << "16-bit after increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }
}

