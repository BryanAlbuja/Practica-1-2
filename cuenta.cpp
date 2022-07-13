#include "cuenta.h"

Cuenta::Cuenta()
{

}
Cuenta::Cuenta(string nombre, int dinero){
    //Se usa el this para referirse al codigo del que esta
    //seleccionando y que el programa no confunda con otras variables
    this->nombre=nombre;
    this->dinero=dinero;
}
void Cuenta::balance(){
    cout <<"Titular: "<<nombre<< ","<<"Cantidad: "<<dinero<<endl;
}
void Cuenta::ingresar(int deposito){
    if(deposito<0){
        dinero=dinero*1;
    }else{
        dinero=dinero+deposito;
    }
}
void Cuenta::retirar(int deposito){
    if(deposito > dinero){
        dinero=dinero*1;
    }else{
        dinero=dinero-deposito;
    }
}
