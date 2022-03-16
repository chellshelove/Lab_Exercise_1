#include <iostream>
#include <string>
using namespace std;
  
int swapNum(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    return 0;
}
  
int main()
{
    int a, b;
    a = 10, b = 20;
  
    swapNum(&a, &b);
    cout << "After swapping: "<< a << " " << b << endl;
    return 0;
}
