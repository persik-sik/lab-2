#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if ((a==c) or (b==d)){
        cout<<"Угрожает"<< endl;
    }
    else{
        cout<<"Не угрожает"<< endl;
    }
    if (abs(a-c) == abs(b-d)){
        cout<<"Угрожает"<<endl;
    }
    else{
        cout<<"Не угрожает"<<endl;
    }
    if ((abs(a-c) == 1) and abs(b-d) == 1) or (abs(a-c)==1 and (b==d)) or ((a==c) and abs(b-d)==1){
        cout<<"Может попасть"<< endl;
    }
    else{
        cout<<"Не может попасть"<< endl;
    }
    if (((a==c) or (b==d)) or (abs(a-c) == abs(b-d))){
        cout<<"Угрожает"<< endl;
    }
    else{
        cout<<"Не угрожает"<< endl;
    }
    if ((a + 1 == c) or ((a + 1 == c) and (b + 1==d))){
        cout<<"Угрожает"<< endl;
    }
    else{
        cout<<"Не угрожает"<< endl;
    }
    return 0;
