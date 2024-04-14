/*
    **** ZADATAK 3 ****

    Provjeri da li uneseni string(rijec) sadrzi trazena slova

    **** PRIMJER ****

    Unesemo rijec: qwertguj
    
    Trazimo da li rijec sadrzi sekvencu slova: rtg
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int x[] = {1,3,6,10,15,21,28,36,45};
    int velicinaNiza =  sizeof(x) / sizeof(x[0]);
    int pocetakPretrage = velicinaNiza / 2;
    int brojZaPronaci;

    cout << "Unesite broj koji zelite pronaci u nizu: " << endl;
    cin >> brojZaPronaci;

    if(brojZaPronaci > x[pocetakPretrage]){
        int i = pocetakPretrage;
        while(i < velicinaNiza){
            if(brojZaPronaci == x[i]){
                cout << "Broj za pretragu se nalazi na " << i << " indexu glavnog niza" << endl;
            }
            i++;
        }
    }else{
        int i = pocetakPretrage;
        while(i >= 0){
            if(brojZaPronaci == x[i]){
                cout << "Broj za pretragu se nalazi na " << i << " indexu glavnog niza" << endl;
            }
            i--;
        }
    }

    return 0;
}