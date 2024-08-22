#include "Shared data.cpp"
class food : public shared_Data {
private:
	vector<food>normal_food, sea_food;
	vector<food>food_by_price;
public:
	void set_normal_food(food food) {
		normal_food.push_back(food);
	}
	void set_sea_food() {
		sea_food.push_back(food);
	}
	void update_normal_name(string name, int index) {
		normal_food[index].set_name(name);
	}
	void update_sea_name(string name, int index) {
		sea_food[index].set_name(name);
	}
	void update_normal_price(int price, int index) {
		normal_food[index].set_price(price);
	}
	void update_sea_price(int price, int index) {
		sea_food[index].set_price(price);
	}
	void remove_normal_food(string food) {
		normal_food.erase(normal_food.begin() + normal_food[food]);
	}
	void remove_sea_food(string food) {
		sea_food.erase(sea_food.begin() + sea_food[food]);
	}
	void Update_normal_food_Quantity(int quantity, int p) {
		normal_food[p].Set_Quantity(quantity);
	}
	void Update_sea_food_Quantity(int quantity, int p) {
		sea_food[p].Set_Quantity(quantity);
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