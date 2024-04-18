/*
    ZADATAK 8: Binarno Pretrazivanje

    Sta je binarno pretrazivanje => [ https://www.geeksforgeeks.org/binary-search/ ]

    OPIS:

    Binarno pretrazivanje niza ( sortiranog - unesite sortiran od najmanjeg ka najvecem )

*/

#include <iostream>

using namespace std;

int main(){
    int duzinaNiza;
    int i = 0;

    cout << "Unesite broj elemenata niza: " << endl;
    cin >> duzinaNiza;

    int niz[duzinaNiza] = {};
    int sredinaNiza = 0 + (duzinaNiza - 0) / 2; 
    int brojZaPronaci;

    while (i < duzinaNiza)
    {
        cout << "Unesite " << (i + 1) << " element niza: " << endl;
        cin >> niz[i];
        i++;
    }

    cout << "Unesite broj koji trazite: " << endl;
    cin >> brojZaPronaci;

    cout << "Trazeni Broj: " << brojZaPronaci << endl;

    int indexTrazenogBroja = -1;

    if(niz[sredinaNiza] > brojZaPronaci){
        for(int j = 0; j < sredinaNiza; j++){
            if(brojZaPronaci == niz[j]){
                indexTrazenogBroja = j;
            }
        }
    }else{
        for(int k = sredinaNiza; k < duzinaNiza; k++){
            if(brojZaPronaci == niz[k]){
                indexTrazenogBroja = k;
            }
        }
    }

    if(indexTrazenogBroja != -1){
        cout << "Trazeni broj (" << brojZaPronaci <<")" << " se nalazi na indexu = " << indexTrazenogBroja << endl;
    }else{
        cout << "Trazeni broj (" << brojZaPronaci <<")" << " ne postoji u nizu" << endl;
    }

    return 0;
}