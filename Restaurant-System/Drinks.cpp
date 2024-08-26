#include "Shared data.cpp"
class Drinks : public Shared_Data {
private:
	vector<Drinks>hot_drinks, cold_drinks;
	map<string, int>position;
public:
<<<<<<< HEAD
    void Add_Hot_Drink(Drinks Hot_Drink) {
        hot_drinks.push_back(Hot_Drink);
        string name = Hot_Drink.Get_name();
        position[name] = hot_drinks.size();
    }
    void Add_Cold_Drink(Drinks Cold_Drink) {
        cold_drinks.push_back(Cold_Drink);
        string name = Cold_Drink.Get_name();
        position[name] = cold_drinks.size();
    }
    void Update_Hot_Drink_Name(string name, int pos) {
        hot_drinks[pos].Set_name(name);
    }
    void Update_Hot_Drink_Price(double price, int pos) {
        hot_drinks[pos].Set_price(price);
    }
    void Update_Hot_Drink_Quantity(int quantity, int pos) {
        hot_drinks[pos].Set_Quantity(quantity);
    }
    void Update_Cold_Drink_Name(string name, int pos) {
        cold_drinks[pos].Set_name(name);
    }
    void Update_Cold_Drink_Price(double price, int pos) {
        cold_drinks[pos].Set_price(price);
    }
    void Update_Cold_Drink_Quantity(int quantity, int pos) {
        cold_drinks[pos].Set_Quantity(quantity);
    }
    int Search_Hot_Drinks_By_Name(string name) {
        return position[name]-1;
    }
    vector<Drinks> Search_Hot_Drinks_By_Price(double start, double end) {
        vector<Drinks>Ordered_Hot_Drinks;
        for(Drinks drink : hot_drinks) {
            double Current_Price = drink.Get_price();
            if(Current_Price>=start&&Current_Price<=end)
                Ordered_Hot_Drinks.push_back(drink);
        }
        return Ordered_Hot_Drinks;
    }
    int Search_Cold_Drinks_By_Name(string name) {
        return position[name]-1;
    }
    vector<Drinks> Search_Cold_Drinks_By_Price(double start, double end) {
        vector<Drinks>Ordered_Cold_Drinks;
        for(Drinks drink : cold_drinks) {
            double Current_Price = drink.Get_price();
            if(Current_Price>=start&&Current_Price<=end)
                Ordered_Cold_Drinks.push_back(drink);
        }
        return Ordered_Cold_Drinks;
    }

    void Remove_Hot_Drink(int pos) {
        hot_drinks.erase(pos+hot_drinks.begin());
    }
    void Remove_Cold_Drink(int pos) {
        cold_drinks.erase(pos + cold_drinks.begin());
    }
    void Display_All_Hot_Drinks() {
        for(Drinks drink : hot_drinks) {
            cout<<"Drink Name: "<<drink.Get_name()<<endl;
            cout<<"Drink Price: "<<drink.Get_price()<<endl;
            cout<<"Drink Quantity: "<<drink.Get_quantity()<<endl;
        }
    }
    void Display_All_Cold_Drinks() {
        for(Drinks drink : cold_drinks) {
            cout<<"Drink Name: "<<drink.Get_name()<<endl;
            cout<<"Drink Price: "<<drink.Get_price()<<endl;
            cout<<"Drink Quantity: "<<drink.Get_quantity()<<endl;
        }
    }
=======
	void Add_Hot_Drink(Drinks Hot_Drink) {
		hot_drinks.push_back(Hot_Drink);
		position[Hot_Drink.Get_name()] = hot_drinks.size();
	}
	void Add_Cold_Drink(Drinks Cold_Drink) {
		cold_drinks.push_back(Cold_Drink);
		position[Cold_Drink.Get_name()] = cold_drinks.size();
	}
	void Update_Hot_Drink_Name(string name, int pos) {
		hot_drinks[pos].Set_name(name);
	}
	void Update_Hot_Drink_Price(double price, int pos) {
		hot_drinks[pos].Set_price(price);
	}
	void Update_Hot_Drink_Quantity(int quantity, int pos) {
		hot_drinks[pos].Set_Quantity(quantity);
	}
	void Update_Cold_Drink_Name(string name, int pos) {
		cold_drinks[pos].Set_name(name);
	}
	void Update_Cold_Drink_Price(double price, int pos) {
		cold_drinks[pos].Set_price(price);
	}
	void Update_Cold_Drink_Quantity(int quantity, int pos) {
		cold_drinks[pos].Set_Quantity(quantity);
	}
	int Search_Hot_Drinks_By_Name(string name) {
		return position[name] - 1;
	}
	vector<Drinks> Search_Hot_Drinks_By_Price(double start, double end) {
		vector<Drinks>Ordered_Hot_Drinks;
		for (Drinks drink : hot_drinks) {
			double Current_Price = drink.Get_price();
			if (Current_Price >= start && Current_Price <= end)
				Ordered_Hot_Drinks.push_back(drink);
		}
		return Ordered_Hot_Drinks;
	}
	int Search_Cold_Drinks_By_Name(string name) {
		return position[name] - 1;
	}
	vector<Drinks> Search_Cold_Drinks_By_Price(double start, double end) {
		vector<Drinks>Ordered_Cold_Drinks;
		for (Drinks drink : cold_drinks) {
			double Current_Price = drink.Get_price();
			if (Current_Price >= start && Current_Price <= end)
				Ordered_Cold_Drinks.push_back(drink);
		}
		return Ordered_Cold_Drinks;
	}
	void Remove_Hot_Drink(string drink) {
		hot_drinks.erase(position[drink] - 1 + hot_drinks.begin());
	}
	void Remove_Cold_Drink(string drink) {
		cold_drinks.erase(position[drink] - 1 + cold_drinks.begin());
	}
	void Display_All_Hot_Drinks() {
		for (Drinks drink : hot_drinks) {
			cout << "Drink Name: " << drink.Get_name() << endl;
			cout << "Drink Price: " << drink.Get_price() << endl;
			cout << "Drink Quantity: " << drink.Get_quantity() << endl;
		}
	}
	void Display_All_Cold_Drinks() {
		for (Drinks drink : cold_drinks) {
			cout << "Drink Name: " << drink.Get_name() << endl;
			cout << "Drink Price: " << drink.Get_price() << endl;
			cout << "Drink Quantity: " << drink.Get_quantity() << endl;
		}
	}
>>>>>>> 7872510a9a18bbb82a16c9f9870be9eef947154b
};