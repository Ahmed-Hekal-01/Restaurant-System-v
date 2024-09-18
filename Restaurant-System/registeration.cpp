#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
class User {
private:
    string username;
    string password;
    int id;
public:
    User(string username, string password, int id) {
        this->username = username;
        this->password = password;
        this->id = id;
    }
    string Get_Username() const { return username; }
    string Get_Password() const { return password; }
    int Get_Id() const { return id; }
};

vector<User>users;
void Save_New_User(const User& user, const string& filename) {
    ofstream outFile(filename, ios::app);
    if (outFile.is_open()) {
        outFile << user.Get_Id() << " " << user.Get_Username() << " " << user.Get_Password() << endl;
        outFile.close();
        cout << "New user saved to file successfully.\n";
    } else {
        cerr << "Error: Could not open file to save user.\n";
    }
}

void loadUsersFromFile(const string& filename) {
    ifstream inFile(filename);

    if (!inFile) {
        cerr << "Error: Unable to open file: " << filename << endl;
        return;
    }

    string line, username, password;
    int id;
    while (getline(inFile, line)) {
        istringstream iss(line);
        if (iss >> id >> username >> password) {
            User New_User(username, password, id);
            users.push_back(New_User);
        } else {
            cerr << "Error: Incorrectly formatted line: " << line << endl;
        }
    }
    inFile.close();
}
void Register_New_User(string username, string password) {
    int id = users.size() + 1;
    User New_User(username, password, id);
    users.push_back(New_User);
    Save_New_User(New_User, "users.txt");
}

int main() {
    loadUsersFromFile("users.txt");
}


