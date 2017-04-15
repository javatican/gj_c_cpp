#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int x=5;
    int y=100;  
    //const int &xp; //error: 'xp' declared as reference but not initialized
    const int &xp=x; 
    xp=10; //error: assignment of read-only reference 'xp'
    xp++; //error: increment of read-only reference 'xp'
}   