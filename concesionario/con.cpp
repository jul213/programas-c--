#include <iostream>
#include <string>
using namespace std;

class fabrica{
    public:

        fabrica(int r,string c,string m,string mr,string p){
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