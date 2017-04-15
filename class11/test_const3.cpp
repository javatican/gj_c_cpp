#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int x=5;
    int y=100; 
    //int * const xp; //error: uninitialized const 'xp' 
    int * const xp=&x;
    //xp=&y; //error: assignment of read-only variable 'xp'
    *xp=10; // ok
    (*xp)++; // ok
} 
  