#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    int y;
    int z;
    cin >> x;
    cin >> y;
    cin >> z;
    if (x%2 == 1 and y%2==1) {
        cout << "condition is true"<< endl;
    }
    else {
        cout << "condition is false"<< endl;
    }
    if ((x < 20 and y>=20) or (x>=20 and y<20)){
        cout << "condition is true"<< endl;
    }
    else{
        cout << "condition is false"<< endl;
    }
    if (x==0 or y==0){
        cout << "condition is true"<< endl;
    }
    else{
        cout<<"condition is false"<< endl;
    }
    if ((x<0) and (y<0) and (z<0)){
        cout<<"condition is true"<< endl;
    }
    else{
        cout<<"condition is false"<< endl;
    }
    if (((x%5==0)+(y%5==0)+(z%5==0))==1){
        cout<<"condition is true"<< endl;
    }
    else{
        cout<<"condition is false"<< endl;
    }
    if (x>100 || y>100 || z>100){
        cout<<"condition is true"<< endl;
    }
    else{
        cout<<"condition is false"<< endl;
    }
    return 0;
}
