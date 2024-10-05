int main(){
    int a;
    int b;
    long q = 1;
    long w = 1;
    long e = 1;
    long r = 1;
    cin >> a;
    cin >> b;
    for(int i=8; i<=15;++i){
        q *= i;
    }
    cout << q << endl;
    for(int i = a; i<=20; ++i){
        w *= i;
    }
    cout << w << endl;
    for(int i = 1; i<=b; ++i){
        e *= i;
    }
    cout << e << endl;
    for(int i = a; i<=b; ++i){
        r *= i;
    }
    cout << r << endl;
    return 0;
}
