//conversor de monedas usando punteros para entrada y salida de datos

#include<iostream>

using namespace std;

int op,op2;

double cantmoneda,pesos,*x,*y,*z;

int main(){
	
	do{
	 
		cout<<" Conversor de monedas a pesos colombianos "<<endl<<endl;
		cout<<"Digite 1 para convertir de MXN a COP "<<endl;
		cout<<"Digite 2 para convertir de Dolar a COP "<<endl;
		cout<<"Digite 3 para convertir de Peso argentino a COP "<<endl;
		cout<<"Digite 4 para convertir de Euro a COP "<<endl;
		cout<<"Digite 5 para salir "<<endl;
		cout<<"Digite una opcion "<<endl;
		cin>>op;
		
		switch(op)
		{
			case 1:
				system("cls");
				y=&cantmoneda;
				cout<<" Ingrese la cantidad de MXN "<<endl;
				cin>>*y;
				x=&pesos;
				*x= *y *189,22;
				cout<<*y<<" MXN equivalen a $ "<<*x<<" Pesos Colombianos "<<endl;
				system("pause");
				system("cls");
				
			break;
			case 2:
				system("cls");
				y=&cantmoneda;
				cout<<" Ingrese la cantidad de Dolares "<<endl;
				cin>>*y;
				x=&pesos;
				*x= *y *3991,50;
				cout<<*y<<" Dolares equivalen a $ "<<*x<<"  Pesos Colombianos "<<endl;
				system("pause");
				system("cls");
			break;
			case 3:
				system("cls");
				y=&cantmoneda;
				cout<<" Ingrese la cantidad de Pesos Argentinos "<<endl;
				cin>>*y;
				x=&pesos;
				*x= *y *39,04;
				cout<<*y<<" Pesos argentinos equivalen a $ "<<*x<<"  Pesos Colombianos "<<endl;
				system("pause");
				system("cls");
				
			break;
			case 4:	
				system("cls");
				y=&cantmoneda;
				cout<<" Ingrese la cantidad de Euros "<<endl;
				cin>>*y;
				x=&pesos;
				*x= *y *4518,34;
				cout<<*y<<" Euros equivalen a $ "<<*x<<"  Pesos Colombianos "<<endl;
				system("pause");
				system("cls");
			break;								
		}
	
	}while(op!=5);
	
	
	
}

