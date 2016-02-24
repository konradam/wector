#include "wektor.h"
#include <vector>

int main(){
    wektor<int> b;
    b.push_back(3);
    b.push_back(3);
    b.push_back(4);
    b.push_back(3);
    b.push_back(3);
    b.push_back(3);
    b.push_back(3);
    b.push_back(3);
    cout<<b[3]<<endl;
}
