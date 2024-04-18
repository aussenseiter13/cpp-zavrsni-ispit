#include <iostream>

using namespace std;

int main(){
    int niz[10] = {1,192,441,2,4121,988,333,92,4,72};
    int duzinaNiza = 10;

    // INSERTION SORT ALGORITAM
    int i, j, index;

    for(i = 1; i < duzinaNiza; i++){

        index = niz[i];
        j = i - 1;

        while(j >= 0 && niz[j] > index){
            niz[j + 1] = niz[j]; 
            j = j - 1;
        }

        niz[j + 1] = index;
    }

    for(int k = 0; k < duzinaNiza; k++){
        cout << niz[k] << ", ";
    }

    return 0;
}