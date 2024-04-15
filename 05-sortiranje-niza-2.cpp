/*
    ZADATAK 4: 
        Sortiranje niza od najmanjeg ka najvecem BEZ ugradjenih metoda
        Koristenjem BUBBLE SORT METODE

        Na slijedecem linku => https://prepinsta.com/data-structures-algorithms/sorting-of-array/
        Mozete pronaci ostale tipove i vrste algoritama za sortiranje
*/

#include <iostream>

using namespace std;

int main(){
    int velNiza;
    int i = 0;

    cout << "Unesite broj elementa niza" << endl;
    cin >> velNiza;

    int niz[velNiza] = {};

    while(i < velNiza){
        cout << "Unesite element niza: " << endl;
        cin >> niz[i];

        i++;
    }

    // ISPISIVANJE NIZA PRIJE SORTIRANJA
    cout << endl;
    cout << "NIZ PRIJE SORTIRANJA = { ";
    for(int q = 0; q < velNiza; q++){
        if(q == velNiza - 1){
            cout << niz[q];
        }else{
            cout << niz[q] << ", ";
        }
    }
    cout << " }" << endl;

    // BUBBLE SORT - Sortiranje niza
    for(int i = 0; i < velNiza; i++){
        for(int j = i + 1; j < velNiza; j++){
            if(niz[i] > niz[j]){
                int temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }

    // ISPISIVANJE NIZA POSLIJE SORTIRANJA
    cout << "NIZ PRIJE SORTIRANJA = { ";
    for(int k = 0; k < velNiza; k++){
        if(k == velNiza - 1){
            cout << niz[k];
        }else{
            cout << niz[k] << " ,";
        }
    }
    cout << " }" << endl;

    return 0;
}