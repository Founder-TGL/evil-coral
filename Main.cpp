#include <ctime>
#include <iostream>

using namespace std;

int main(){
    clock_t before, now, delta;
    before = clock();
    while(true){
        now = clock();
        delta = now-before;
        cout << "delta: "<< (float)delta << "\n";
        before = now;
    }

}