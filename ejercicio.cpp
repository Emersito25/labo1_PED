#include <iostream>
using namespace std;

struct Cuenta {
    double saldo;
    double retiro;
    double deposito;
};

void mostrar(const Cuenta &cuenta) {
    cout << "Su saldo es $" << cuenta.saldo << endl;
}

void depositar(Cuenta &cuenta) {
    double cantidad;

    cout << "Ingrese la cantidad a depositar: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que 0." << endl;
        return;
    }

    cuenta.saldo += cantidad;
    cout << "Deposito realizado correctamente." << endl;
}

void retiro(Cuenta &cuenta) {
    cout << "Ingrese el monto a retirar: $";
    cin >> cuenta.retiro;

    if (cuenta.retiro < 0) {
        cout << "\nRetiro invalido" << endl;
        cuenta.retiro = 0;
        return;
    }
    else if (cuenta.retiro <= cuenta.saldo) {
        cuenta.saldo = cuenta.saldo - cuenta.retiro;
        cout << "\nRetiro exitoso de $" << cuenta.retiro << endl;
        cuenta.retiro = 0;
    }
    else {
        cout << "\nNo cuenta con el suficiente saldo para realizar este retiro" << endl;
        cuenta.retiro = 0;
    }
}

int main() {
    Cuenta cuenta = {1000.0, 0.0, 0.0};
    int opcion;

    do {
        cout << "\n== Cajero ==" << endl;
        cout << "1. Mostrar balance" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Retirar" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrar(cuenta);
                break;
            case 2:
                depositar(cuenta);
                break;
            case 3:
                retiro(cuenta);
                break;
            case 4:
                cout << "\nGracias por usar el cajero." << endl;
                break;
            default:
                cout << "\nOpcion invalida." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}
