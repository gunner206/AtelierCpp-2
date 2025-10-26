#include <iostream>
#include <string>
using namespace std;

class Voiture{
    private:
        std::string marque;
        std::string modele;
        int anne;
        float kilometrage;
        float vitesse;
    public:
        Voiture():marque("mercedis"),modele("C"),anne(2014),kilometrage(10000.50),vitesse(40.0){};
        Voiture(string m, string mo, int a, float k, float v){
            marque = m;
            modele = mo;
            anne = a;
            kilometrage = k;
            vitesse = v;
        };
        void accelerer(float valeur){ vitesse += valeur;};
        void freiner(float valeur){if (valeur <= vitesse) vitesse -= valeur;}
        void afficherInfo()const{
            cout << "Marque: " << marque << endl;
            cout << "Modele: " << modele << endl;
            cout << "Anne de Modele: " << anne << endl;
            cout << "kilometrage: " << kilometrage << endl;
            cout << "Vitesse: " << vitesse << endl;
        }
        void avancer(float distance){ kilometrage += distance;};
        ~Voiture(){
            cout << "la voiture est detruite!!" << endl;
        }
};

int main(){
    Voiture v1("bmw", "a", 2010, 20000, 140);
    //Voiture v1;
    v1.afficherInfo();
    v1.accelerer(50);
    v1.freiner(100);
    v1.avancer(50.3);
    v1.afficherInfo();
    return 0;
}