#include <iostream>
using namespace std;

void incrementer(int *a){
    ++*a;
}
void permuter(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void incrementer2(int &a){ 
    a++;
}
void permuter2(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    int b = 5;
    cout << "--avant l'appelle ---" << endl;
    cout << "valeur de a: " << a << endl;
    cout << "valeur de b: " << b << endl;
    cout << "--- Utilisons l'adress des variables ---" << endl;
    incrementer(&a);
    permuter(&a, &b);
    cout << "valeur de a: " << a << endl;
    cout << "valeur de b: " << b << endl;
    cout << "--- Utilisons le reference des variables ---" << endl;
    incrementer2(a);
    permuter2(a, b);
    cout << "valeur de a: " << a << endl;
    cout << "valeur de b: " << b << endl;
    return 0;
}