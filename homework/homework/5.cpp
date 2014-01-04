#include <iostream>
using namespace std;
void main ()
{	//Нарисовать фигурки
	//прямоугольник залитый
	int x;
	cin >> x;
	//for(;i<x;i++){
	//	for(int j=0;j<x;j++){
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	//cout << endl;

	//прямоугольник пустой

	//for(int x=0;x<a;x++){
	//	cout << "*";
	//}
	//cout << "\n";
	////////////////////
	//for(int y=0;y<b-2;y++){
	//	cout << "*";
	//	for(int x=0;x<a-2;x++){
	//		cout << " ";
	//	}
	//	cout << "*\n";
	//}
	////////////////////
	//for(int x=0;x<a;x++){
	//	cout << "*";
	//}
	//cout << "\n";

	//равнобедренный треугольник (прямоугольный)

		//for(int i=5;i>=0;i--){
		//	for(int j=0;j<5-i;j++){
		//		cout << "*";	
		//	}
		//	cout << "\n";
		//}
			for(int i=0;i<=x;i++){
			for(int j=0;j<x-i;j++){
				cout << "*";	
			}
			cout << "\n";
		}

			
}