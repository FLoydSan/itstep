
#include <iostream>
using namespace std;
void main()
{// Пользователь вводит с клавиатуры число - программа должна показать сколько в данном числе цифр. Число вводится целиком в одну переменную.
	//int a,sum=0;
	//cin>>a;
	//a=a/10;
	/*for(int sum=0;a>10;a=a%10;sum++;)
	{cout << sum <<endl;}*/
	
//while(a>10)
//	{	sum++;
//		a/=10;
//}
//cout << a << endl;
 int x,y;   
 cout << "Enter a num Y: \n";
 cin >> y;
  for (x=1;y>10;x++)
		{y/=10;}
    cout << "your number contains " << x << " digits\n";
}