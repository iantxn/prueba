#include <iostream>

using namespace std;

int main(){
	int numero1, numero2;
	float resultadosuma, resultadoresta, resultadomultiplicacion, resultadodivision;
	
	cout<<"Calculadora automatica"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>numero1;
	cout<<"Ingrese el segudo numero"<<endl;
	cin>>numero2;
	cout<<"\n";
	cout<<"Los numeros ingresados son: ["<<numero1<<"] y ["<<numero2<<"]"<<endl;
	
	resultadosuma = numero1 + numero2;
	resultadoresta = numero1 - numero2;
	resultadomultiplicacion = numero1 * numero2;
	resultadodivision = numero1 / numero2;
	
	cout<<"El resultado de la suma es:"<<resultadosuma<<endl;
	cout<<"El resultado de la resta es:"<<resultadoresta<<endl;
	cout<<"El resultado de la multiplicacion es:"<<resultadomultiplicacion<<endl;
	cout<<"El resultado de la division:"<<resultadodivision<<endl;
	
	return 0;
}
