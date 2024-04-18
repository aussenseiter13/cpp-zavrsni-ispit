/*
    KORISNE REFERENCE

    https://stackoverflow.com/questions/16229729/printing-out-contents-of-a-list-from-the-c-list-library
    https://www.geeksforgeeks.org/structures-in-cpp/
    https://www.quora.com/How-do-you-implement-a-double-linked-list-in-C-without-using-the-Standard-Template-Library-STL


    Struktura sa nizom u sebi
    https://www.geeksforgeeks.org/array-of-structures-vs-array-within-a-structure-in-c-and-cpp/

*/

#include <iostream>
#include <list>

using namespace std;

struct test
{
    int broj;
    char slovo;
    int niz[3];
};



int main(){

    list<test> lista;

    /*
        Kod dodavanja char tipa podataka u strukturu dobro pazite
        da koristite 'a' a ne "a" posto ce vam to izaciti gresku
        jer sa 'a' vrsimo inicijalizaciju char tipa a sa "a" const char
    */
    struct test a = {1, 'a', {1,2,3}};
    struct test b = {2, 'b', {4,5,6}};
    struct test c = {3, 'c', {7,8,9}};

    lista.push_back(a);
    lista.push_back(b);
    lista.push_back(c);

    for(auto prop:lista){
        cout << "\t" << prop.broj << " ";
        cout << prop.slovo << " ";
        for(int i = 0; i < 3; i++){
            cout << prop.niz[i] << ", ";
        }
    }

    return 0;
}