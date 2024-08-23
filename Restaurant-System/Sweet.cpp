#include"Shared data.cpp"
class Sweet : public Shared_Data
{
private:
	vector<Sweet>sweet;
	vector<Sweet>sweet_by_price;
public:
	void Add_Sweet(Sweet s) // only admin can access 
	{
		sweet.push_back(s);
	}
	int search_sweet_by_name(string s)
	{
		for (int i = 0; i < sweet.size(); i++)
		{
			if (sweet[i].Get_name() == s) return i;
		}
		return -1;
	}
	vector<Sweet> search_sweet_by_range_price(double start, double end)
	{

		for (int i = 0; i < sweet.size(); i++)
		{
			if (sweet[i].Get_price() >= start and sweet[i].Get_price() <= end)
			{
				sweet_by_price.push_back(sweet[i]);
			}
		}
		return sweet_by_price;
	}
	void Remove_Sweet(int index) // index of the sweet if found
	{
		sweet.erase(sweet.begin() + index);
	}
	void Update_Sweet_Name(string s, int index)  // for all this functions we have to check if sweet exit by searching on it by name
	{
		sweet[index].Set_name(s);
	}
	void Update_Sweet_Price(double p, int index)
	{
		sweet[index].Set_price(p);
	}
	void Update_Sweet_quantity(int q, int index)
	{
		sweet[index].Set_Quantity(q);
	}
	void Display_Sweet()
	{
		for (auto& t : sweet)
		{
			cout << "Sweet Name : " << t.Get_name() << endl;
			cout << "Sweet Price : " << t.Get_price() << endl;
			cout << "Sweet Quantity : " << t.Get_quantity() << endl;
		}
	}
};