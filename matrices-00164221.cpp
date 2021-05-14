/*Mostrar la matriz transpuesta visualmente a la matriz original haciendo uso de las siguientes validaciones:
1. No se permite el ingreso de caracteres especiales o letras.
2. No se permite el uso de números negativos o imaginarios.
3. No se permite el uso de numero decimales.
únicamente hacer uso de los numero naturales incluyendo al cero (0,1,2,3,4,5,6....n).



Eso es la indicacion del ejercio que voy a hacer y abajo el ejemplo de codigo que nos dieron xdxdxd


*/

#include "iostream"
#include "conio.h"
#include "cctype"//libreria para usar la funcion isdigit
#include "stdio.h"
#include "stdlib.h"

using namespace std;

void program();

int main()
{
    program();
    return 0;
    
}

void program()
{
	int n;
	cout<<"Digite el grado de la matriz ";//le pedimos de cuanto es la matriz
	cin>>n;
	
    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
        	
            //llenando matriz
            bool band = false;
        	
            do{
            	fflush(stdin);//limpia memoria
            	char aux[5];
            	cout<<"Digite un numero entero ["<<i<<"]["<<j<<"]: ";//pide un numero
            	cin>>aux;
            	if(isdigit(aux[0])==false){
            		cout<<"DATO ERRONEO"<<endl;//revisa que un dato sea numerico
				}
				else if(aux<0){
					cout<<"No se permiten negativos"<<endl;
				}
				else{
					matriz[i][j] = atoi(aux);//atoi convierte el caracter a numero
					band = true;//la bandera sale del bucle
				}
			}while(band==false);
        }
    }
    
	//mostrando matriz original
    cout<<"Matriz original"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
	
	//mostrando transpuesta
    cout<<"Matriz transpuesta"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<matriz[j][i]<<" ";
        }
        cout<<endl;
    }
    getch();
    
}

