#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int const x=5;
    const int y=100;
    x=10; //error: assignment of read-only variable 'x'
    y++; //error: increment of read-only variable 'y'
}
 