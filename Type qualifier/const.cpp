#include <iostream>
using namespace std;

int main(){

    const int x = 10;
    cout << "The value of x is :" <<x << endl;
    // x = 20; // This will cause a compile-time error because x is declared as const
 
    return 0;

}
