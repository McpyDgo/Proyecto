/*
Mariana Castro Payns   A01706038
Proyecto para agregar artículos al inventario de una tienda de cosméticos
06/12/2019
*/

//Incluir bibliotecas y clases
#include <iostream>
#include "producto.h"
#include "tienda.h"

using namespace std;


//Definir el menú principal como void
void menuPrincipal(){
    cout<<"Selecciona una opcion:\n";
    cout<<"1.Agregar productos al inventario\n";
    cout<<"2.Ver resumen de perfumes disponibles\n";
    cout<<"3.Ver resumen de labiales disponibles\n";
    cout<<"4.Ver resumen de sombras disponibles\n";
    cout<<"5.Ver resumen de todos los productos\n";
    cout<<"6.Salir\n";
}

//Definir el segundo menú para lo que se va a agregar
void menuAgregar(){
    cout<<"Que producto deseas agregar:\n";
    cout<<"1.Labial\n";
    cout<<"2.Perfume\n";
    cout<<"3.Sombras\n";
}

//Definir el main
int main(int argc, char* argv[]){

	Tienda tienda;
	tienda.creaPerfume();
	tienda.creaLabial();
	tienda.creaSombras();
	string nombret,marcat,colort;
	float preciot;


    int opcion = 0;
    int opciona=0;
    //Poner un while para que el menu se siga imprimiendo hasta que se seleccione salir
    while(opcion < 6 && opcion > -1){
        //Imprimir menu principal
		menuPrincipal();

        //Input para opciones del menu
		cin >> opcion;
        //Establecer un switch para que el menu tenga mayot funcionalidad
		switch(opcion){
            //Definir cada caso segun las opciones del menu principal
			case 2:

                tienda.muestraPerfume();

			break;

			case 3:
                tienda.muestraLabial();

			break;

			case 4:
                tienda.muestraSombras();

			break;

			case 5:
                tienda.muestraSombras();
                tienda.muestraPerfume();
                tienda.muestraLabial();

			break;

			case 1:
			    //Imprimir el menu para agregar articulos al inventario
			    menuAgregar();
			    //Input opcion de agregar
			    cin>>opciona;
                    //Switch para que el segundo menu funcione
                    switch(opciona){
                        //Establecer la opcion 1 y emplear el metodo de agregar
                        case 1:
                            cout<< "Cual es el nombre del labial: \n " ;
                            cin >> nombret;
                            cout<< "De que marca es: \n " ;
                            cin >> marcat;
                            cout<< "Cuanto cuesta:\n " ;
                            cin >> preciot;
                            cout<< "De que color es:\n";
                            cin>> colort;
                            tienda.agregaLabial(nombret, marcat, preciot, colort);
                            cout<<"Producto agregado con EXITO\n";
                           break;

                        //Establecer la opcion 2 y el metodo de agregar
                        case 2:
                            cout<< "Cual es el nombre del perfume: \n " ;
                            cin >> nombret;
                            cout<< "De que marca es: \n " ;
                            cin >> marcat;
                            cout<< "Cuanto cuesta:\n " ;
                            cin >> preciot;
                            cout<< "Que tipo de aroma tiene:\n";
                            cin>> colort;
                            cout<<"Producto agregado con EXITO\n";
                            tienda.agregaLabial(nombret, marcat, preciot, colort);
                        break;

                        //Establecer opcion 3 y el atributo agregar
                        case 3:
                            cout<< "Como se llaman las sombras: \n " ;
                            cin >> nombret;
                            cout<< "De que marca son: \n " ;
                            cin >> marcat;
                            cout<< "Cuanto cuestan:\n " ;
                            cin >> preciot;
                            cout<< "Cuantos tonos tiene:\n";
                            cin>> colort;
                            cout<<"Producto agregado con EXITO\n";
                            tienda.agregaLabial(nombret, marcat, preciot, colort);
                        break;
                    }


		}
    }
}

