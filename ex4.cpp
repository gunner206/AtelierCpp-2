#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "entrer la taille de tableau: ";
    cin >> n;
    int *T = new int[n];
    for (int i = 0; i < n ; i++){
        cout << "insere le " << i + 1 << " element: ";
        cin >> T[i];
    }
    int *mul = new int[n];
    for (int i = 0 ; i < n ; i++){
        mul[i] = T[i] * T[i];
    }

    delete T;
    for (int i = 0 ; i < n ; i++){
        cout <<  mul[i] << " ";
    }
    cout << endl;

    delete mul;

    return 0;
}
