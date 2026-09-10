#include <iostream>
using namespace std;

struct Cuenta{
    double saldo;
};

void mostrar(Cuenta &cuenta){
    cout << "Su saldo es " << cuenta.saldo << "$" <<endl;
};

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
