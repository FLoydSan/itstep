#include "Dish.h"
#include <cstring>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <io.h>
using namespace std;

Dish::Dish(char* Name, int Price, Type dsh){
	strcpy(this->Name, Name);
	this->Price = Price;
	this->dsh = dsh;
}

void Dish::Show(){
	cout << "Dish name: " << Name << endl;
	cout << "Dish price: $" << Price << endl;
	if(dsh == 1)
		cout << "Dish type: cold" << endl;
	if(dsh == 2)
		cout << "Dish type: hot" << endl;
	if(dsh == 3)
		cout << "Dish type: desert" << endl;
	return;
}

void Dish::ChangeName(){
	cout << "Input dish name: ";
	cin.getline(Name, sizeof(Name));
	return;
}

void Dish::ChangePrice(){
	cout << "Input price: ";
	cin >> Price;
	return;
}

void Dish::ChangeType(){
	cout << "Input Dish type, 1 - cold, 2 - hot, 3 - desert: ";
	int t;
	cin >> t;
	if(t == 1)
		dsh = cold;
	if(t == 2)
		dsh = hot;
	if(t == 3)
		dsh = desert;
	return;
}

void Dish::SaveToFile( char *filename){
	cout << "Save results to file ..." << endl;
	FILE *f= fopen (filename, "a");
	fprintf (f, "%s\t %.2lf\t %s\t %d\n", Name, Price, dsh);
	fclose(f);
}

void Dish::ReadFromFile(char *filename){
	cout << "Read file ..." << endl;
	FILE *f= fopen (filename,"r");
	int count=0;
	while(!feof(f))
	{
		Dish a;
		fscanf (f, "%s\t %lf\t %s\t %d\n",a.Name,&a.Price,a.dsh);
		printf ("%s\t %.2lf\t %s\t %d\n", a.Name,&a.Price,a.dsh);
		count++;
	}

	cout << "Total count in menu:="<<count<<endl;
	fclose(f);
}

Dish& Dish::operator+(int a){
	this->Price += a;
	return *this;
}

Dish& Dish::operator-(int a){
	this->Price -= a;
	return *this;
}

Dish::operator long(){
	return Price;
}
