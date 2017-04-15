#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int x=5;
    int y=100;  
    int const * const xp=&x;
    xp=&y; //error: assignment of read-only variable 'xp'
    *xp=10; //error: assignment of read-only location '*(const int*)xp'  
    (*xp)++; //error: increment of read-only location '*(const int*)xp'  
}  