#include <iostream>
using namespace std;
void main ()
{	
	//int x;
	//cin >> x;
	//for(int a=0;a<x;a++){

	//	for(int b=0;b<x;b++){

	//		for(int c=0;c<x;c++){

	//			cout << " ";
	//		}
	//		cout << "*";	
	//	}
	//	cout << endl;
	//}
	//cout << endl;

	int size,j;
	cin >> size;

	for(int i=1; i<=size; i++)
	{
		for(j=size; j>i; j--)
			cout << " ";
		for(j=1; j<2*i; j++)
			cout << "*";
		cout << "\n";
	}
}