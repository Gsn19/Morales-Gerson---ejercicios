#include <iostream>

using namespace std;

int invertirNumero(int numero){
    int invertido = 0;

    do {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero/=10;
    } while(numero > 0);

    return invertido;
}

int main(){
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    int resultado = invertirNumero(numero);
    cout<<"Numero invertido: "<< resultado<<endl;
    
    return 0;
}
