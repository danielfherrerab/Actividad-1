#include <iostream>
#include <math.h>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;
main()
{

int x=2;
char a;
cout<<"Bienvenido\n";
do{
int elementos,opcion,fila,columna,auxiliar,j,i,vector [50];
	if (x=1)
	{
		x=2;
	}
	cout<<"Ingrese la cantidad de elementos que desee ordenar\n";
	cin>>elementos;
		for (int i=1;i<=elementos;i++)
		{
			cout<<"Ingrese numero ";
			cin>>vector [i];
				if (i>1)	
				{		
					if (vector[i]>vector[i-1])
					{
						cout<<"No puede ingresar un numero mayor al anterior";
						i=elementos;
						x=1;
					}
					else 
					{
						for (fila=1;fila<=elementos-1;fila++)
						{
							if (vector[columna]>vector[columna+1])
							{
								auxiliar=vector [columna+1];
								vector [columna+1]=vector[columna];
								vector [columna]=auxiliar;
							}
						}
					}
				}
			}
	if (x==2)
	{
			cout<<"\nA continuacion vera sus numeros de menor a mayor\n";
			//
			cout<<"Sus numeros quedarian asi:\n";
			system ("pause");
						for (int i=1;i<=elementos;i++)
						{
							cout<<vector [i]<<"   ";
							//Sleep(50);
						}
						
	}
	if (vector[i]==vector[3])
	{
		int e;
		char tres[]={'Q','U','E','B','O','N','I','T','O','E','S','E','S','T','A','R','E','N','T','R','E','S'};
		
			for (int e=0;e<=26;e++)
			{
			cout<<tres[e];
			Sleep(20);
			}
	}
	cout<<endl;
		//system ("CLS");
		}while (x==1);
		system ("pause");
}
