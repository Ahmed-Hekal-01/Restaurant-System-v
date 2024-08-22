#include "Food.cpp"
#include "Drinks.cpp"
#include "Sweet.cpp"

class customer_functions : public Drinks, Sweet {
private:
    vector<tuple<string,double,string>>Chart;
    vector<vector<tuple<string,double,string>>>history;
public:
    // getting the current time
    string getCurrentTime() {
        auto now = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(now);
        return ctime(&currentTime);
    }
    // display the chart
    void Display_Chart() {
        for(auto [name,price,time] : Chart) {
            cout << name << ' ' << price << ' ' << time << endl;
        }
    }
    // displaying the history
    void Display_History() {
        for(auto current : history) {
            for(auto [name,price,time] : Chart) {
                cout<<name<<' '<<price<<' '<<time<<endl;
            }
        }
    }
    // saving char in history
    void saveToFile(const string& filename) {
        ofstream outFile(filename);
        if (outFile.is_open()) {
            for (const auto& element : history) {
                for(auto [name,price,time] : Chart) {
                   outFile<<name<<' '<<price<<' '<<time<<endl;
                }
                outFile<<"-------------"<<endl;
            }
            outFile.close();
            cout << "Data saved to " << filename << endl;
        } else {
            cerr << "Unable to open file for writing." << endl;
        }
    }
    // loading the old history
    void loadFromFile(const string& filename) {
        ifstream inFile(filename);
        if (inFile.is_open()) {
            string line;
            vector<tuple<string, double, string>> currentGroup;

            while (getline(inFile, line)) {
                if (line == "-------------") {
                    history.push_back(currentGroup);
                    currentGroup.clear();
                } else {
                    istringstream iss(line);
                    string name, time;
                    double price;

                    iss >> name >> price;
                    getline(iss, time);

                    if (!time.empty() && time[0] == ' ') {
                        time.erase(0, 1);
                    }

                    currentGroup.push_back(make_tuple(name, price, time));
                }
            }

            if (!currentGroup.empty()) {
                history.push_back(currentGroup);
            }

            inFile.close();
            cout << "Data loaded from " << filename << endl;
        } else {
            cerr << "Unable to open file for reading." << endl;
        }
    }
    // Drinks
    // Search by name in hot drinks
    int Search_Hot_Drinks_Name(string name) {
        return Search_Cold_Drinks_By_Name(name);
    }
    // Search by price in hot drinks
    vector<Drinks> Search_Hot_Drinks_Price(double start, double end) {
        return Search_Hot_Drinks_By_Price(start, end);
    }
    // Searching
    // Search by name in hot drinks
    int Search_Cold_Drinks_Name(string name) {
        return Search_Cold_Drinks_By_Name(name);
    }
    // Search by price in hot drinks
    vector<Drinks> Search_Cold_Drinks_Price(double start, double end) {
        return Search_Cold_Drinks_By_Price(start, end);
    }
    // Display all hot drinks
    void Display_Hot_Drinks() {
       Display_All_Hot_Drinks();
    }
    // Display all cold drinks
    void Display_Cold_Drinks() {
        Display_All_Cold_Drinks();
    }
    // Buy this drink
    void Buy_Drink(Drinks drink) {
        string name = drink.Get_name();
        double price = drink.Get_price();
        string time = getCurrentTime();
        Chart.push_back({name,price,time});
    }

    // Sweet
    // searching sweet by name
    int search_sweet_name(string s)
    {
        return search_sweet_by_name(s);
    }
    //searching sweer by price
    vector<Sweet> search_sweet_range_price(double start, double end)
    {
        return search_sweet_by_range_price(start, end);
    }
    // displaying all sweet
    void Display_All_Sweet() {
        Display_Sweet();
    }
    // buy this sweet
    void Buy_Sweet(Sweet sweet) {
        string name = sweet.Get_name();
        double price = sweet.Get_price();
        string time = getCurrentTime();
        Chart.push_back({name,price,time});
    }
};