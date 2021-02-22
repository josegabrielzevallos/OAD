#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Vuelto
{
private:
	float numero;
	
	//int arr[11]={b_200,b_100,b_50,b_20,b_10,m_5,m_2,m_1,m_0_5,}
	
	int b_200=0;
	int b_100=0;
	int b_50=0;
	int b_20=0;
	int b_10=0;
	int m_5=0;
	int m_2=0;
	int m_1=0;
	int m_0_5=0;
	int m_0_2=0;
	int m_0_1=0;
public:
	Vuelto();
	void Titulo();
	void Error();
	void Menu();
	void Ingresar_numero();
	void Calcular_vuelto();
	void Imprimir_resultado();
};

Vuelto::Vuelto()
{
	Menu();
}

void Vuelto::Titulo()
{
	cout<<'\n';
	cout<<'\n';
	cout<<"                                            .d88b      8            8              Yb    dP             8  w         "<<endl;
	cout<<"                                            8P    .d88 8 .d8b 8   8 8 .d88 8d8b     Yb  dP  8   8 .d88b 8 w8ww .d8b. "<<endl;
	cout<<"                                            8b    8  8 8 8    8b d8 8 8  8 8P        YbdP   8b d8 8.dP' 8  8   8' .8 "<<endl;
	cout<<"                                            `Y88P `Y88 8 `Y8P `Y8P8 8 `Y88 8          YP    `Y8P8 `Y88P 8  Y8P `Y8P' "<<endl;
	cout<<'\n';
	cout<<'\n';
	cout<<'\n';
	cout<<'\n';
}

void Vuelto::Error()
{
	cout<<'\n';
	cout<<'\n';
	cout<<"                                                               8888 888b. 888b. .d88b. 888b. "<<endl;
	cout<<"                                                               8www 8  .8 8  .8 8P  Y8 8  .8 "<<endl;
	cout<<"                                                               8    8wwK' 8wwK' 8b  d8 8wwK' "<<endl;
	cout<<"                                                               8888 8  Yb 8  Yb `Y88P' 8  Yb "<<endl;
	cout<<'\n';
	cout<<'\n';
	cout<<'\n';
	cout<<'\n';
}

void Vuelto::Menu()
{
	Titulo();
	int opcion;
	cout<<"  1. Vuelto"<<endl;
	cout<<"  2. Salir"<<endl;
	cout<<'\n';
	cout<<"  -> Ingrese la opcion: ";cin>>opcion;
	system("cls");
	switch(opcion)
	{
	case 1:
		Ingresar_numero();
		Calcular_vuelto();
		Imprimir_resultado();
		break;
	case 2:
		exit(0);
	default:
		Error();
	}
	cout<<"   Presiona ENTER para continuar...";getch();
	system("cls");
	Vuelto();
}

void Vuelto::Ingresar_numero()
{
	Titulo();
	cout<<"  -> Ingrese el numero (float): ";cin>>numero;
	if(numero<0)
	{
		cout<<'\n';
		cout<<"  ...ERROR: Numero Invalido..."<<endl;
		cout<<'\n';
		cout<<'\n';
		cout<<"   Presiona ENTER para continuar...";getch();
		system("cls");
		Ingresar_numero();
	}
}

void Vuelto::Calcular_vuelto()

{
	numero=numero+0.001;
	while(numero>=200)
	{
		numero=numero-200;
		b_200++;
	}
	while(numero>=100)
	{
		numero=numero-100;
		b_100++;
	}
	while(numero>=50)
	{
		numero=numero-50;
		b_50++;
	}
	while(numero>=20)
	{
		numero=numero-20;
		b_20++;
	}
	while(numero>=10)
	{
		numero=numero-10;
		b_10++;
	}
	while(numero>=5)
	{
		numero=numero-5;
		m_5++;
	}
	while(numero>=2)
	{
		numero=numero-2;
		m_2++;
	}
	while(numero>=1)
	{
		numero=numero-1;
		m_1++;
	}
	while(numero>=0.5)
	{
		numero=numero-0.5;
		m_0_5++;
	}
	while(numero>=0.2)
	{
		numero=numero-0.2;
		m_0_2++;
	}
	while(numero>=0.1)
	{
		numero=numero-0.1;
		m_0_1++;
	}
	//m_0_1=m_0_1+1;
}

void Vuelto::Imprimir_resultado()
{
	cout<<'\n';
	cout<<"  -> RESULTADO:"<<endl;
	cout<<'\n';
	cout<<"      Billetes de 200: "<<b_200<<endl;
	cout<<"      Billetes de 100: "<<b_100<<endl;
	cout<<"      Billetes de 50: "<<b_50<<endl;
	cout<<"      Billetes de 20: "<<b_20<<endl;
	cout<<"      Billetes de 10: "<<b_10<<endl;
	cout<<"      Moneda de 5: "<<m_5<<endl;
	cout<<"      Moneda de 2: "<<m_2<<endl;
	cout<<"      Moneda de 1: "<<m_1<<endl;
	cout<<"      Moneda de 0.5: "<<m_0_5<<endl;
	cout<<"      Moneda de 0.2: "<<m_0_2<<endl;
	cout<<"      Moneda de 0.1: "<<m_0_1<<endl;
	cout<<'\n';
	cout<<'\n';
}

int main()
{
	Vuelto nuevo_ingreso;
}
