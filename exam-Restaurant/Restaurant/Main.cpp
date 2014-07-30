#include <iostream>
#include "Dish.h"
using namespace std;

void main(){

	Dish a;

	a.ChangeName();
	a.ChangeType();
	a.ChangePrice();
	a.Show();
	a.SaveToFile("menu.txt");
	//a.ReadFromFile("menu.txt");
	cout << endl;

	Dish b;

	//b.ChangeName();
	b.ChangeType();
	b.ChangePrice();
	b.Show();
	b.SaveToFile("menu.txt");
	//b.ReadFromFile("menu.txt");
}