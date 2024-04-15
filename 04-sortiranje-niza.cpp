/*
    ZADATAK 4: Sortiranje niza od najveceg ka najmanjem sa ugradjenim metodama
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int niz[10] = {};
    int velNiza;
    int i = 0;

    cout << "Unesite broj elementa niza" << endl;
    cin >> velNiza;

    while(i < velNiza){
        cout << "Unesite element niza: " << endl;
        cin >> niz[i];

        i++;
    }

    cout << "Velicina niza = " << velNiza << endl;    

    // 23 1 588 3 21 15

    sort(niz, niz + velNiza, greater<int>());

    for(int j = 0; j < velNiza; j++){
        cout << niz[j] << endl;
    }

    return 0;
}