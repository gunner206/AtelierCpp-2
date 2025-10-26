#include <iostream>
using namespace std;

class Complex{
    private:
        double re, im;
    public:
        Complex(double r = 0 , double img = 0): re(r), im(img){}
        void saisir(){
            cout << "entrer la partie reel: ";
            cin >> re;
            cout << "entrer la partie imaginaire: ";
            cin >> im;
        }
        void afficher() const{ 
            cout << re << " + " << im << "i";
        }
        bool egaliter(const Complex& n){
            return ((this->re == n.re) && (this->im == n.im));
        }
        Complex addition(const Complex& n){
            return Complex(n.re + this->re, n.im + this->im);
        }
        Complex soustraction(const Complex& n){
            return Complex(this->re - n.re, this->im - n.im);
        }
        Complex division(const Complex& n) const {
            double denom = n.re * n.re + n.im * n.im;
            return Complex(
                (re * n.re + im * n.im) / denom,
                (im * n.re - re * n.im) / denom
            );
        }
        Complex multiplication(const Complex& n) const {
            return Complex(re * n.re - im * n.im, re * n.im + im * n.re);
        }

};

void menu(){
    cout << "============Menu============" << endl;
    cout << "1: egalite" << endl;
    cout << "2: addidton" << endl;
    cout << "3: soustraction" << endl;
    cout << "4: multiplication" << endl;
    cout << "5: division" << endl;
    cout << "0: quiter!!" << endl;
}
int main(){
    Complex n1, n2, resultat;
    cout << "==== calcule des nombre complexe =======" << endl;
    cout << "Saisir le premier nombre complexe =>" << endl;
    n1.saisir();
    cout << "Saisir le deuxieme nombre complexe => " << endl;
    n2.saisir();
    menu();
    int operation;
    while (true){
        cout << "entrer le nombre de l'operation: ";
        cin >> operation;
        switch (operation){
            case 1:
                if (n1.egaliter(n2)) cout << "il sont egale" << endl;
                else cout << "Il sont differents" << endl;
                break;
            case 2:
                resultat = n1.addition(n2);
                cout << "resultat d'addition: ";
                resultat.afficher();
                cout << endl;
                break;
            case 3:
                resultat = n1.soustraction(n2);
                cout << "resultat de soustractin: ";
                resultat.afficher();
                cout << endl;
                break;
            case 4:
                resultat = n1.multiplication(n2);
                cout << "resultat de multiplication: ";
                resultat.afficher();
                cout << endl;
                break;
            case 5:
                resultat = n1.division(n2);
                cout << "resultat de division: ";
                resultat.afficher();
                cout << endl;
                break;
            case 0:
                cout << "fin de programe" << endl;
                exit(0);
            default:
                cout << "choix invalide" << endl;
                break;
        }
    }
    return 0;
}