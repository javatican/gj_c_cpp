#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int x=5;
    int y=100; 
    int const *xp;
    xp=&x;
    xp=&y; //ok
    *xp=200; //error: assignment of read-only location '* xp'
    (*xp)++; //error: increment of read-only location '* xp'
} 