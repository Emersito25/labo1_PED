#include <iostream>
using namespace std;

struct Cuenta{
    double saldo;
};

void mostrar(Cuenta &cuenta){
    cout << "Su saldo es " << cuenta.saldo << "$" <<endl;
}; 
void depositar(Cuenta& cuenta) {
    double cantidad;

    cout << "Ingrese la cantidad a depositar: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que 0." << endl;
        return;
    }

    cuenta.saldo += cantidad;
    cout << "Deposito realizado correctamente." << endl;

int main(){

    Cuenta cuenta = {100};

    int opcion;

    cout << "== Cajero ==" << endl;
    cout << "1. Mostrar balance" << endl;
    cout << "2. Depositar" << endl;
    cout << "3. Retirar" << endl;
    cout << "4. Salir" << endl;
    
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        mostrar(cuenta);
        break;
    
    default:
        break;
    }



    return 0;
}
