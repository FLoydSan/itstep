#include <iostream>
using namespace std;
void main(){

	//int const size=50000;
	//int x,sum;
	//cin >> x;
	//int arr[50000];
	//for(int i=0;i<x;i++)
	//{
	//	cin >> arr[i];
	//}
	//cout << sum << endl;
	//for(int i=0;i<x;i++)
	//{
	//	sum=arr[i]+arr[i];
	//	cout << sum << endl;
	//}
	//cout << sum << endl;

		//содержимое массива наоборот
	//const int size=10; 
	//int ar[size]={88,3,4,5,6,7,8,9,123,456};
	//int sum=ar[0], min=ar[0];
	//for (int i=0;i<size;i++){
	//	cout << "Enter element: ";
	//	cin >> ar[i];	
	//	cout << endl;
	//}

	//for (int i=size;i>=0;i--){
	//	cout << ar[i];	
	//	cout << endl;
	//}
	//находит в массиве самое маленькое нечетное число и показывает его на экран

	//for (int i=1;i<size;i++){
	//	sum=ar[i];
	//	if(sum%2!=0 && min>ar[i])
	//		min=ar[i];
	//}
	//cout << min;	
	//cout << endl;

	//const int size=20000;
	//int arr[size];
	//int user_size;
	//cin >> user_size;
	//for(int i=0;i<user_size;i++){
	//	cin >> arr[i];
	//}
	//int sum=0;
	//for(int i=0;i<user_size;i++){
	//	sum=arr[i]+arr[i];
	//	//cout << arr[i] << endl;
	//}
	//cout << sum << endl;

	//Найти сумму отрицательных элементов, стоящих на четных позициях

	const int size=20000;
	int arr[size];
	int user_size;
	cin >> user_size;
	for(int i=0;i<user_size;i++){
		cin >> arr[i];
	}
	int sum=0;
	for(int i=0;i<user_size;i++){
		if(arr[i]<0){
			if(i%2==0){
				sum=arr[i]+arr[i];
			}
		}
		else continue;
	}
	cout << sum << endl;

}