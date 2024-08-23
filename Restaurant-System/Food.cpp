#include "Shared data.cpp"
class food : public shared_Data {
private:
	vector<food>normal_food, sea_food;
	vector<food>normal_food_by_price, sea_food_by_price;
public:
	void set_normal_food(food food) {
		normal_food.push_back(food);
	}
	void set_sea_food() {
		sea_food.push_back(food);
	}
	void update_normal_name(string name, int index) {
		normal_food[index].Set_name(name);
	}
	void update_sea_name(string name, int index) {
		sea_food[index].Set_name(name);
	}
	void update_normal_price(int price, int index) {
		normal_food[index].Set_price(price);
	}
	void update_sea_price(int price, int index) {
		sea_food[index].Set_price(price);
	}
	void Update_normal_food_quantity(int q, int index)
	{
		normal_food[index].Set_Quantity(q);
	}
	vector<food>search_normal_by_range_price(double begin, double end) {
		for (int i = 0; i < normal_food.size(); i++) {
			if (normal_food.Get_price() >= begin and normal_food.Get_price() <= end) {
				normal_food_by_price.push_back(normal_food[i]);
			}
		}
		return normal_food_by_price;
	}
	vector<food>search_sea_by_range_price(double begin, double end) {
		for (int i = 0; i < sea_food.size(); i++) {
			if (sea_food.Get_price() >= begin and sea_food.Get_price() <= end) {
				sea_food_by_price.push_back(sea_food[i]);
			}
		}
		return sea_food_by_price;
	}
	void Update_sea_food_quantity(int q, int index)
	{
		sea_food[index].Set_Quantity(q);
	}
	void remove_normal_food(string food) {
		normal_food.erase(normal_food.begin() + normal_food[food]);
	}
	void remove_sea_food(string food) {
		sea_food.erase(sea_food.begin() + sea_food[food]);
	}
	void search_normal_food(string food) {
		return normal_food[food];
	}
	void search_sea_food(string food) {
		return sea_food[food];
	}
	void display_normal_food() {
		for (auto i : normal_food) {
			cout << "Normal food name " << i.Get_name() << endl;
			cout << "Normal food price " << i.Get_price() << endl;
			cout << "Normal food quantity " << i.Get_quantity() << endl;
		}
	}
	void display_sea_food() {
		for (auto i : sea_food) {
			cout << "sea food name " << i.Get_name() << endl;
			cout << "sea food price " << i.Get_price() << endl;
			cout << "sea food quantity " << i.Get_quantity() << endl;
		}
	}
};