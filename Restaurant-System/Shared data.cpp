#include<iostream>
using namespace std;

class Shared_Data
{
private :
	string name; 
	double price;
	int quantity;
public:
	void Set_name(string name)
	{
		this->name = name
	}
	void Set_price(double price)
	{
		this->price = price;

	}
	void Set_Quantity(int quantity)
	{
		this->quantity = quantity;
	}

	string Get_name()
	{
		return name;
	}
	double Get_price()
	{
		return price;
	}
	int Get_quantity()
	{
		return quantity;
	}

};