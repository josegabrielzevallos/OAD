#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class dado
{
    int x;
public:
    dado (int x): x(x) {}
    int operator()(){return rand() % x +1 ;}

};
int main()
{
    dado dado1(6);
    cout <<dado1()<<endl;
    cout <<dado1()<<endl;cout <<dado1()<<endl;cout <<dado1()<<endl;cout <<dado1()<<endl;

}
