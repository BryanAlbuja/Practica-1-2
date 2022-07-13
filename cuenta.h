#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>
#include <string>

using namespace std;

class Cuenta
{
    string nombre;
    int dinero;
public:
    Cuenta();
    Cuenta(string nombre, int dinero);
    void balance();
    void ingresar(int deposito);
    void retirar(int deposito);
};

#endif // CUENTA_H
