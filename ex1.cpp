#include <iostream>
using namespace std;

int count = 0;

void appeler(){
    count++;
    cout << "appel numero " << count << endl; 
}

int main(){
    int v;
    while (1){
        cout << "entrer 1 pour appeler la function ,0 pour quiter: ";
        cin >> v;
        if (v == 1) appeler();
        else exit(1);
    }
    return 0;
}