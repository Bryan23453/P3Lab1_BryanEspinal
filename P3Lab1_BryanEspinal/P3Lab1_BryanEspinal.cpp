
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
        valor1 = B * B;
        valor2 = C * C;
        int pot1=0;
        int pot2 = 0;
        for (int i = 0; i < B; i++){
            if (i*i == B){
                pot1 = i;
                break;
            }
        }

        for (int i = 0; i < C; i++) {
            if (i * i == C) {
                pot2 = i;
                break;
            }
        }
        cout <<"raiz es " << pot1 <<endl;
        cout << "raiz es " << pot2 <<endl;
    }
    else{
        if (opcion == 2){
            cout << "Dijite el valor de A: " << endl;
            cin >> A;
            cout << "Dijite el valor de C: " << endl;
            cout << "La Formula Para Este Problema Es B^2=A^2-C^2" << endl;
            cin >> C;
            int valor1;
            int valor2;
            valor1 = A * A;
            valor2 = C * C;
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
                }
                    else{
                        cout << "Valor Invalido Favor Inserte Opcion Valida " << endl;
                    }
                
            }
        
    }
    return 0;
}
