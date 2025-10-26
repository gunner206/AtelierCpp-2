#include <iostream>
using namespace std;

int isPair(int n){
    if (n % 2 == 0) cout << "il est pair" << endl;
    return 0;
}
int isMul(int n){
    if (n  % 3 == 0) cout << "il est multiple de 3" << endl;
    if (n % 6 == 0) cout << "il est divisible par 6" << endl;
    return 0;
}


int main(){
    int n;
    for (int i = 0; i < 2 ; i++){
        cout << "donnez un entier: ";
        cin >> n;
        isPair(n);
        isMul(n);
        cout << "----------------" << endl;
    }
    return 0;
}