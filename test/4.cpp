#include <iostream>
using namespace std;
void main()
{	//прямоугольник залитый на половину	
	int a,b;
	cin >> a;
	cin >> b;
	for(int x=0;x<a;x++){
		cout << "*";
	}
	cout << "\n";
	//////////////////
	for(int y=0;y<b-2;y++){
		cout << "*";
		for(int x=0;x<a-2;x++){
			cout << " ";
		}
		cout << "*\n";
	}
	//////////////////
	for(int x=0;x<a;x++){
		cout << "*";
	}
	cout << "\n";
}