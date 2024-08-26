#include "Shared data.cpp"
<<<<<<< HEAD
class Food : public Shared_Data {
private:
    vector<Food>normal_food, sea_food;
    map<string,int>position;
public:
    void set_normal_food(Food food) {
        normal_food.push_back(food);
        position[food.Get_name()] = normal_food.size();
    }
    void set_sea_food(Food food) {
        sea_food.push_back(food);
        position[food.Get_name()] = sea_food.size();
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
    vector<Food>search_normal_by_range_price(double begin, double end) {
        vector<Food>Ordered;
        for(auto food : normal_food) {
            if(food.Get_price()>=begin&&food.Get_price()<=end) {
                Ordered.push_back(food);
            }
        }
        return Ordered;
    }
    vector<Food>search_sea_by_range_price(double begin, double end) {
        vector<Food>food_by_price;
        for(auto food : sea_food) {
            if(food.Get_price()>=begin&&food.Get_price()<=end) {
                food_by_price.push_back(food);
            }
        }
        return food_by_price;
    }
    void Update_sea_food_quantity(int q, int index)
    {
        sea_food[index].Set_Quantity(q);
    }
    void remove_normal_food(int  index) {
        normal_food.erase(normal_food.begin() + index);
    }
    void remove_sea_food(int index) {
        sea_food.erase(sea_food.begin() + index);
    }
    int search_normal_food(string food) {
        return position[food]-1;
    }
    int search_sea_food(string food) {
        return position[food]-1;
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
=======
class food : public Shared_Data {
private:
	vector<food>normal_food, sea_food;
	vector<food>normal_food_by_price, sea_food_by_price;
public:
	void set_normal_food(food food) {
		normal_food.push_back(food);
	}
	void set_sea_food(food food) {
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
			if (normal_food[i].Get_price() >= begin and normal_food[i].Get_price() <= end) {
				normal_food_by_price.push_back(normal_food[i]);
			}
		}
		return normal_food_by_price;
	}
	vector<food>search_sea_by_range_price(double begin, double end) {
		for (int i = 0; i < sea_food.size(); i++) {
			if (sea_food[i].Get_price() >= begin and sea_food[i].Get_price() <= end) {
				sea_food_by_price.push_back(sea_food[i]);
			}
		}
		return sea_food_by_price;
	}
	void Update_sea_food_quantity(int q, int index)
	{
		sea_food[index].Set_Quantity(q);
	}
	void remove_normal_food(int  index) {
		normal_food.erase(normal_food.begin() + index);
	}
	void remove_sea_food(int index) {
		sea_food.erase(sea_food.begin() + index);
	}
	int search_normal_food(string food) {
		for (int i = 0; i < normal_food.size(); i++) {
			if (normal_food[i].Get_name() == food) {
				return i;
			}
		}
		return -1;
	}
	int search_sea_food(string food) {
		for (int i = 0; i < sea_food.size(); i++) {
			if (sea_food[i].Get_name() == food) {
				return i;
			}
		}
		return -1;
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
>>>>>>> 7872510a9a18bbb82a16c9f9870be9eef947154b
};