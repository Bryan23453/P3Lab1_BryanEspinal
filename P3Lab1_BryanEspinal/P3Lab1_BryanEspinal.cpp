
#include <iostream>
using namespace std;
int main(){
    int opcion;
    std::cout << "1: A\n2: B\n3: C \nSelecione que variable desea encontrar:";
    cin >> opcion;
    int A;
    int B;
    int C;
    if (opcion==1){
        cout << "Dijite el valor de B: " << endl;
        cin >> B;
        cout << "Dijite el valor de C: "<<endl;
        cin >> C;
        cout << "La Formula Para Este Problema Es A^2=B^2-C^2"<<endl;
        int valor1;
        int valor2;
        valor2 = B * B;
        valor1 = C * C;
        cout << "Formula  Es A^2 = " <<valor1<<"-"<< valor2<< endl;
        cout << "Formula  Es A^2 = " << valor1 - valor2<< endl;
        int resultado=0;
        for (int i = 0; i < valor1 - valor2; i++) {
            if (i * i == valor1 - valor2) {
                resultado = i;
                break;
            }
        }
        if (resultado==0)
        {
            cout << "La Raiz No Es Perfecta o el valor es menor a 0 " << endl;
        }
        else
        {
            cout << "Formula  Es A = " << resultado << endl;
        }
        
        
    }
    else{
        if (opcion == 2){
            cout << "Dijite el valor de A: " << endl;
            cin >> A;
            cout << "Dijite el valor de C: " << endl;
            cin >> C;
            cout << "La Formula Para Este Problema Es B^2=A^2-C^2" << endl;
            int valor1;
            int valor2;
            valor2 = A * A;
            valor1 = C * C;
            cout << "Formula  Es B^2 = " << valor1 << "-" << valor2 << endl;
            cout << "Formula  Es B^2 = " << valor1 - valor2 << endl;
            int resultado = 0;
            for (int i = 0; i < valor1 - valor2; i++) {
                if (i * i == valor1 - valor2) {
                    resultado = i;
                    break;
                }
            }
            if (resultado == 0)
            {
                cout << "La Raiz No Es Perfecta o el valor es menor a 0 " << endl;
            }
            else
            {
                cout << "Formula  Es B = " << resultado << endl;
            }

        }
            else{
                if (opcion == 3){
                    cout << "Dijite el valor de A: " << endl;
                    cin >> A;
                    cout << "Dijite el valor de B: " << endl;
                    cout << "La Formula Para Este Problema Es C^2=A^2+B^2" << endl;
                    cin >> B;
                    int valor1;
                    int valor2;
                    valor1 = A * A;
                    valor2 = B * B;
                    cout << "Formula  Es C^2 = " << valor1 << "+" << valor2 << endl;
                    cout << "Formula  Es C^2 = " << valor1 + valor2 << endl;
                    int resultado = 0;
                    for (int i = 0; i < valor1 + valor2; i++) {
                        if (i * i == valor1 + valor2) {
                            resultado = i;
                            break;
                        }
                    }
                    if (resultado == 0)
                    {
                        cout << "La Raiz No Es Perfecta o el valor es menor a 0 " << endl;
                    }
                    else
                    {
                        cout << "Formula  Es C = " << resultado << endl;
                    }
                }
                    else{
                        cout << "Valor Invalido Favor Inserte Opcion Valida " << endl;
                    }
                
            }
        
    }
    return 0;
}
