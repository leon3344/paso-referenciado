#include <iostream>
#include <conio.h>
using namespace std;
void valNuevo(int&,int&);
void pedirDatos();
void funpot(int x, int y);
void Recursividad(int);
int main(int argc, char** argv) {

	    int num1, num2,opcion,numero,exponente;
	    while(opcion!=3){

	    cout << "MENU" << endl;
        cout << "\t1 .-Por referencia" << endl;
        cout << "\t2 .- Por valor" << endl;
        cout << "\t3 .- Recursividad" << endl;
        cout << "\t4 .- Salir" << endl;
        cout << "seleccione una opcion: ";
        cin >> opcion;

        	switch(opcion)
		{
			case 1:
				  cout << "ingresa dos numeros: "<<endl;
				  cin>>num1>>num2;
				  valNuevo(num1,num2);
				  cout<<" El valor del primer numero es: "<<num1<<endl;
				  cout<<" El valor del segundo numero es: "<<num2<<endl;

				break;

			case 2:
				pedirDatos();
				funpot(numero, exponente);

				break;
			case 3:
				cout<<"RECURSIVIDAD"<<endl;
				Recursividad(20);
				break;

			case 4:

				cout << "Has elejido salir del programa.\n";
				break;

}
}

	 return 0;

}
void valNuevo(int& xnum, int& ynum)
{
	cout<<"l primer numero es: "<<xnum<<endl;
	cout<<"el segundo numero es: "<<ynum<<endl;

	xnum=89;
	ynum=100;

   }
void pedirDatos(){
	int numero,exponente;
	cout<<"ingresa un numero: ";
	cin>>numero;
	cout<<"ingrese el exponente de elevacion: ";
	cin>>exponente;

}
void funpot(int x, int y){
	long resultado=1;
	for (int i=1; i<=y; i++){
		resultado *=x;
	}
	cout<<"El resultado es: "<<resultado<<endl;
}
   void Recursividad(int contador=20){
	if(contador==1)return;
	cout<<contador<<" ";
	Recursividad(contador-1);
}
