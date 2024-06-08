#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Spanish");
    
    float Ci = 0;
    float Ti = 0;
    int t = 0;
    float resultado = 0;
    
    while (Ci <= 0) {
        cout << "Ingrese el capital Inicial: ";
        cin >> Ci;
    }
    
    while (Ti <= 0) {
        cout << "Ingrese la tasa de interés anual: ";
        cin >> Ti;
    }
    
    while (t <= 0) {
        cout << "Ingrese el tiempo en años: ";
        cin >> t;
    }
    
    resultado = Ci * pow(1 + (Ti / 100), t);
    
    cout << "El dinero que se generó al final del tiempo de la inversión es: $" << resultado;
    
    // Espera a que el usuario presione Enter para salir
    cin.ignore();
    cin.get();
    
    return 0;
}
