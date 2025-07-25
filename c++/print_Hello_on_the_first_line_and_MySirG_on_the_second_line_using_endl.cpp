#include <iostream>
using namespace std;
int main()
{ 
    int y=8;
    int &x=y;
    int z=9;
    z=x;
    cout <<x<<" "<<z;
    return 0;
}
