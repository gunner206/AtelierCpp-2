#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int T[n];
    for (int i = 0; i < n ; i++){
        cout << "entrer le " << i + 1 << " entier: ";
        cin >> T[i];
    }
    // chercher le max et le min utilisons la formalisme tableau
    int min = T[0];
    int max = T[0];
    for (int i = 1 ; i < n ; i++){
        if (T[i] < min){
            min = T[i];
        }
        if (T[i] > max){
            max = T[i];
        }
    }
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;
    // chercher le max et le min utilissons formalisme pointeur
    int *s = T;
    int *m = T;
    for (int i = 1 ; i < n ; i++){
        if (*(T + i ) < *s)
            s = T + i;
        if (*(T + i) > *m)
            m = T + i;
    }

    cout << "min = " << *s << endl;
    cout << "max = " << *m << endl;


    return 0;
}