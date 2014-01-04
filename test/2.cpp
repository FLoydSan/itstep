#include <iostream>
using namespace std;
void main()
{		
	//Вывести на экран числа от 50 до 30 с шагом 3.
	/*for (int x=50;x>30;x-=3){
	cout << x << endl;
	}*/

	//	Пользователь вводит числа диаппазона. Вывести среднее арифм. всех нечетных чисел диаппазона.(реализовать двумя способами)
	/*int x,y,sum=0,i=0;
	cin >> x >> y;
	for(;x<y; x++)
	{
	if(x%2==0)
	{
	continue;
	}
	sum+=x;
	i++;
	}
	sum/=i;
	cout << sum << endl;*/

	//Написать программу возведения целого числа A в степень N
	/*int a,n;
	cin >> a;
	cin >> n;
	for(int i=1;i<n; i++ ){
		a=a*n;
		cout << a << endl;
	}
	cout << a << endl;*/

	//Написать программу вычисления факториала заданного целого числа. Факториал числа N вычисляется по формуле.
	/*N = 1*2*3* ... *N
	int b=1;
	int e;
	cin >> e;
	int f=1,n;
	for(n=b;n<=e;n++){
		f*=n;
	}
	cout << f << endl;*/
	
	int str;
	int star_count;
	int length;
	cin >> length;
	str=1;
	while(str<=length)
	{
		star_count=1;
		while(star_count<=length)
		{
			cout<<"*";
			star_count++;
		}
		cout<<"\n";
		str++;
	}


}