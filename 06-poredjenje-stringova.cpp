#include <iostream>

using namespace std;

// Inicijalizacija Funkcije
void poredistr(char s1[], char s2[]);

int main(){

    char s1[10];
    char s2[10];

    cout << "Unesite prvu rijec:" << endl;
    cin >> s1;

    cout << "Unesite drugu rijec:" << endl;
    cin >> s2;

    poredistr(s1, s2);

    return 0;
}

// Definicija Funkcije
void poredistr(char s1[], char s2[]){
    int i = 0;
    int k = 0;

    while(s1[i] != '\0' && s1[i] == s2[i]){
        i += 1;
    }

    cout << endl;

    while(s2[k] != '\0' && s2[k] == s1[k]){
        k += 1;
    }

    if(s1[i] > s2[i]){
        cout << "S1 VECE" << endl;
    }else if(s1[i] < s2[i]){
        cout << "S2 VECE" << endl;
    }else{
        cout << "JEDNAKI" << endl;
    }
}