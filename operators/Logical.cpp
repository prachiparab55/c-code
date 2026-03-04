#include <iostream>
using namespace std;

int main(){
    int a = 15, b = 10;

    cout << ((a > 5) && (b>5)) << endl;
    cout << ((a > 5) || (b<5)) << endl;
    cout << !(a > b)<< endl;

    return 0;
}
