#include <iostream>

using namespace std;

int main(){
    int x[100];
    int i,n,br,in;

    cout << "Unesite N: " << endl;
    cin >> n;

    cout << "Unesite BR: " << endl;
    cin >> br;

    i = 0;

    while(i < n){
        cout << "Unesite " << (i+1) << " clan niza" << endl;
        cin >> x[i];
        i += 1;
    }

    i = 0;
    in = 1;

    while(i < n && in == 1){

        if(x[i] == br){
            in = 0;
        }

        i += 1;
    }

    if(in == 0){
        cout << "Index je = " << (i - 1) << endl;
    }else{
        cout << "NEMA" << endl;
    }

    return 0;
}