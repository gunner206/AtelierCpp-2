#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Vecteur3d{
    private:
        float x;
        float y;
        float z;
    public:
        Vecteur3d(float a = 0.0, float b = 0.0, float c = 0.0): x(a), y(b), z(c){};
        void afficher() const{
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
        void somme(Vecteur3d vect) const{
            cout << "(" << vect.x + this->x << ", " << vect.y + this->y << "," << vect.z + this->z << ")" << endl;
        }
        int produit(Vecteur3d vect) const{
            int scalair = vect.x * this->x + vect.y * this->y + vect.z * this->z;
            return scalair;
        }
        bool coincide(Vecteur3d vect){
            return ((vect.x == this->x) && (vect.y == this->y) && (vect.z == this->z));
        }
        float norme(){return sqrt(x*x+y*y+z*z);}
        // 3 version de function normaux
        Vecteur3d normax_valeur(Vecteur3d vect){
            if (this->norme() >= vect.norme()){
                return *this;
            }
            else return vect;
        }
        Vecteur3d* normax_addresse(Vecteur3d* vect){
            if (this->norme() >= vect->norme()){
                return this;
            }
            else return vect;
        }
        Vecteur3d& normax_reference(Vecteur3d& vect){
            if (this->norme() >= vect.norme()){
                return *this;
            }
            else return vect;
        }


};

int main(){
    Vecteur3d v1(1, 2, 3);
    Vecteur3d v2(4, 5, 6);
    v1.afficher();
    v2.afficher();
    cout << "la somme est : ";
    v1.somme(v2);
    cout << "le produit est : " << v1.produit(v2) << endl;
    if (v1.coincide(v2)) cout << "v1 est v2 coincide" << endl;
    else cout << "v1 est v2 no coincide pas" << endl;
    cout << "la norme de v1: " << setprecision(4) << v1.norme() << endl;
    cout << "la norme de v2: " << setprecision(4) << v2.norme() << endl;
    cout << "Normax (retour par valeur) : ";
    v1.normax_valeur(v2).afficher();
    cout << "Normax (retour par valeur) : ";
    v1.normax_addresse(&v2)->afficher();
    cout << "Normax (retour par valeur) : ";
    v1.normax_reference(v2).afficher();
    return 0;
}
