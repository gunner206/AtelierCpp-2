#include <iostream>
using namespace std;

void echanger(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

void permuter(char *str, int debut, int fin){
    //base case
    if (debut == fin){
        cout << str << endl;
        return;
    }
    for (int i = debut; i <= fin ; i++){
        echanger(str[debut], str[i]); // echange de possistion
        permuter(str, debut + 1, fin); //appele recursive
        echanger(str[debut], str[i]); // retablir l'echange
    }
}

int main(){
    char chaine[] = "hello";
    int n = 0;
    while (chaine[n] != '\0') n++;

    cout << "la list de permutation de " << chaine << " sont :" << endl;
    permuter(chaine, 0, n-1);

    return 0;
}