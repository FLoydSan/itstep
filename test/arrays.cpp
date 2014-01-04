#include <iostream>
using namespace std;
void main(){

	//int const size=50000;
	int x,sum;
	cin >> x;
	int arr[50000];
	for(int i=0;i<x;i++)
	{
		cin >> arr[i];
	}
	cout << sum << endl;
	for(int i=0;i<x;i++)
	{
		sum=arr[i]+arr[i];
		cout << sum << endl;
	}
	cout << sum << endl;
}