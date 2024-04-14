/*
    ZADATAK: Napraviti brute force funkciju pretrazivanja niza koja vraca poziciju
             svakog ponavljanja unesenog elementa u nizu
*/

#include <iostream>

using namespace std;

int main(){

    // Deklaracija i definicija varijabli
    int glavniNiz[100] = {};

    /*
        U niz "nizSvihPonavljanja" cemo samo dodavati INDEXE
        pronadjenih elemenata iz glavnog niza
    */
    int nizSvihPonavljanja[100] = {};
    int velicinaNiza, elementZaPretragu, i = 0;
    int brojPonavljanja = 0; 

    /*
        GLAVNI DIO KODA
    */

    cout << "Unesite velicinu niza (N): " << endl;
    cin >> velicinaNiza;

    // Unos elemenata Glavnog Niza
    while (i < velicinaNiza)
    {
        cout << "Unesite " << (i+1) << " clan niza" << endl;
        cin >> glavniNiz[i];
        i += 1; // Isto kao da napisemo i = i + 1;
    }

    cout << "Unesite element koji zelite da pronadjete: " << endl;
    cin >> elementZaPretragu;

    i = 0;

    for(int j = 0; j < velicinaNiza; j++){
        if(glavniNiz[j] == elementZaPretragu){
            brojPonavljanja = brojPonavljanja + 1;
            nizSvihPonavljanja[i] = j;
            i++;
        }
    }

    if(brojPonavljanja == 0){
        cout << "Trazeni element nije pronadjen u glavnom nizu!" << endl;
    }else{
        cout << "Trazeni element " << elementZaPretragu << " pronadjen je " << brojPonavljanja << " u glavnom nizu!" << endl;
        cout << "INDEXI u glavnom nizu u kojima je pronadjen trazeni broj su = [ ";
        for(int k = 0; k < brojPonavljanja; k++){
            cout << nizSvihPonavljanja[k] << " ";
        }
        cout << "]" << endl;
    }

    return 0;

    if(brojPonavljanja == 0){
        cout << "Trazeni broj " << elementZaPretragu << " nije pronadjen u nizu!" << endl;
    }else{
        cout << "Trazeni broj " << elementZaPretragu << " pronadjen je " << brojPonavljanja << " puta u nizu" << endl;
        cout << "Pozicije (indexi u glavnom nizu ) na kojima je pronadjen trazeni broj su: [ ";
        for(int k = 0; k < brojPonavljanja; k++){
            cout << nizSvihPonavljanja[k] << " ";
        }
        cout << "]" << endl;
    }


    return 0;
}