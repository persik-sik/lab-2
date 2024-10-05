#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    while(i<10){
        cout << i << " x N = "<< n*i<<endl;
        ++i;
    }
    return 0;
}
