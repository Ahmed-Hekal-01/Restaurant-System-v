#include "Shared data.cpp"
class Drinks : public Shared_Data {
private:
    vector<Drinks>hot_drinks, cold_drinks;
    map<string,int>position;
public:
    // Adding hot drink
    void Add_Hot_Drink(Drinks Hot_Drink) {
        hot_drinks.push_back(Hot_Drink);
        position[Hot_Drink.Get_name()] = hot_drinks.size();
    }
    // Adding cold drink
    void Add_Cold_Drink(Drinks Cold_Drink) {
        cold_drinks.push_back(Cold_Drink);
        position[Cold_Drink.Get_name()] = cold_drinks.size();
    }
    // Update hot drink data

    // Update hot drink name
    void Update_Hot_Drink_Name(string name, int pos) {
        hot_drinks[pos].Set_name(name);
    }
    // Update hot drink price
    void Update_Hot_Drink_Price(double price, int pos) {
        hot_drinks[pos].Set_price(price);
    }
    // Update cold drink quantity
    void Update_Hot_Drink_Quantity(int quantity, int pos) {
        hot_drinks[pos].Set_Quantity(quantity);
    }

    // Update cold drink data

    // Update cold drink name
    void Update_Cold_Drink_Name(string name, int pos) {
        cold_drinks[pos].Set_name(name);
    }
    // Update cold drink price
    void Update_Cold_Drink_Price(double price, int pos) {
        cold_drinks[pos].Set_price(price);
    }
    // Update cold drink quantity
    void Update_Cold_Drink_Quantity(int quantity, int pos) {
        cold_drinks[pos].Set_Quantity(quantity);
    }

    // Search by name in hot drinks
    int Search_Hot_Drinks_By_Name(string name) {
        return position[name]-1;
    }
    // Search by price in hot drinks
    vector<Drinks> Search_Hot_Drinks_By_Price(double start, double end) {
        vector<Drinks>Ordered_Hot_Drinks;
        for(Drinks drink : hot_drinks) {
            double Current_Price = drink.Get_price();
            if(Current_Price>=start&&Current_Price<=end)
                Ordered_Hot_Drinks.push_back(drink);
        }
        return Ordered_Hot_Drinks;
    }
    // Searching
    // Search by name in hot drinks
    int Search_Cold_Drinks_By_Name(string name) {
        return position[name]-1;
    }
    // Search by price in hot drinks
    vector<Drinks> Search_Cold_Drinks_By_Price(double start, double end) {
        vector<Drinks>Ordered_Cold_Drinks;
        for(Drinks drink : cold_drinks) {
            double Current_Price = drink.Get_price();
            if(Current_Price>=start&&Current_Price<=end)
                Ordered_Cold_Drinks.push_back(drink);
        }
        return Ordered_Cold_Drinks;
    }

    // Remove hot drink
    void Remove_Hot_Drink(string drink) {
        hot_drinks.erase(position[drink]-1+hot_drinks.begin());
    }
    // Remove cold drink
    void Remove_Cold_Drink(string drink) {
        cold_drinks.erase(position[drink]-1+cold_drinks.begin());
    }

    // Display all hot drinks
    void Display_All_Hot_Drinks() {
        for(Drinks drink : hot_drinks) {
            cout<<"Drink Name: "<<drink.Get_name()<<endl;
            cout<<"Drink Price: "<<drink.Get_price()<<endl;
            cout<<"Drink Quantity: "<<drink.Get_quantity()<<endl;
        }
    }
    // Display all cold drinks
    void Display_All_Cold_Drinks() {
        for(Drinks drink : cold_drinks) {
            cout<<"Drink Name: "<<drink.Get_name()<<endl;
            cout<<"Drink Price: "<<drink.Get_price()<<endl;
            cout<<"Drink Quantity: "<<drink.Get_quantity()<<endl;
        }
    }
};