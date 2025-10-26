#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int &ref_a = a;
    int *p_a = &a;
    cout << "valeur de a: " << a << endl;
    cout << "addrese de a: " << &a << endl;
    cout << "reference de a: " << ref_a << endl;
    cout << "address de ref_a: " << &ref_a << endl;
    cout << "valeur de p_a: " << p_a << endl;
    cout << "addrese de p_a" << &p_a << endl;
    return 0;
}