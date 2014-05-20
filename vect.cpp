// Compilation: c++ -std=c++0x vect.cpp
#include <iostream>
#include <vector>
#include <algorithm> // includes  for_each

using namespace std;

class PrintInt // Functional object, or FUNCTOR.
{
public:    
    void operator() (int elem) const
    {
        cout << elem << ' ';
    }
};

//new comment

int main( void )
{
    vector<int> v5(5);
    v5 = { 1, 2, 3, 4, 5 };
    for_each( v5.rbegin(), v5.rend(), PrintInt() );
    cout << endl;
}
