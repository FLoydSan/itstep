#pragma once;

enum Type {
	cold = 1, hot = 2, desert = 3
};

class Dish{
	char Name[20];
	int Price;
	Type dsh;
public:	
	Dish(char* Name = "no name", int Price = 00, Type dsh = cold);	
	void Show();
	void ChangeName();
	void ChangePrice();
	void ChangeType();
	Dish& operator+(int a);
	Dish& operator-(int a);
	operator long();
	void Dish::SaveToFile( char *filename);
	void ReadFromFile(char *filename);

};

