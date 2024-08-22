#include<set>
#include<map>
#include<list>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<sstream>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<numeric>
#include<utility>
#include<functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
#include<bitset>
#include<chrono>
#include<cctype>

using namespace std;

class Shared_Data
{
private :
	string name; 
	double price;
	int quantity;
public:
    Shared_Data() {
        name="";
        price=0;
        quantity=0;
    }
	void Set_name(string name)
	{
		this->name = name;
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