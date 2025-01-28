#include <iostream>
#include <string>
using namespace std;

class fabrica{
    public:

        fabrica(r,c,m,mr,p){
            ruedas = r;
            color = c;
            modelo = m;
            marca = mr;
            proposito = p;
        }
    private:
    int ruedas;
    string color;
    string modelo;
    string marca;
    string proposito;
}