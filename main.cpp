	#include <iostream>
	#include <conio.h>
	#include <Windows.h>
	
	using namespace std;
	
	int main(int argc, char** argv) {		
			char z;
			
		do{
			//reset de valores
			int c1 = 1, c2 = 0, x = 0, i, y, j=0;
			
			//limpieza de pantalla
			system("CLS");
			
			//entrada
			cout<<"Coloque el valor de inicio: ";
			cin>>y;
			
			//validacion de pertenencia
			do{
				x = c1 + c2;
				c2 = c1;
				c1 = x;
				j++;
			}while(x!=y and j<1000000);
			
			//si pertenece imprime
			if(j<100){
				for(i = 0; i<10; i++){
					x = c1 + c2;
					c2 = c1;
					c1 = x;
					cout<<x<<", ";	
				}
			}
			//sino muestra mensaje de error
			else{
				cout<<"Numero Invalido";
			}
			
			//continuar...
			cout<<"\n\nPara repetir presione 'Y', para salir preseione cualquier otra tecla: ";
			z = getch();
					
		}while(z == 'Y' or z == 'y');
			
		return 0;
	}
