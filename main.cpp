#include <iostream>
#include "cuenta.h"
int main(){
    cout << "= = = MI BANCO = = =\n" << endl;
       Cuenta cuenta01("Juan Perez", 50);
       Cuenta cuenta02("Andrea Boca", 200);
        cuenta01.ingresar(10);
        cuenta02.ingresar(-150);
        cuenta01.balance();
        cuenta02.balance();

    cout << "-----------------------\n";

        cuenta01.retirar(100);
        cuenta02.retirar(120);
        cuenta01.balance();
        cuenta02.balance();
return 0;}
