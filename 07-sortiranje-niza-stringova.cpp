#include <iostream>

using namespace std;

int main(){
    char rijec[10] = {};

    cout << "Unesite rijec koju zelite da sortirate: " << endl;
    cin >> rijec;

    int i = 0;
    int k = 0;

    while(rijec[i] != '\0'){
        i += 1;
    }

    for(int j = 0; j < i; j++){
        for(int k = j + 1; k < i; k++){
            if(rijec[j] > rijec[k]){
                int temp = rijec[j];
                rijec[j] = rijec[k];
                rijec[k] = temp;
            }
        }
    }

    cout << rijec << endl;

    return 0;
}