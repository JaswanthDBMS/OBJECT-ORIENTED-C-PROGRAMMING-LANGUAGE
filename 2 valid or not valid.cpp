#include <iostream>
#include <string>
using namespace std;
bool validateUsername(const string& username1, const string& username2);
int main() {
    string username1, username2;

    cout << "Enter the user name: ";
    getline(cin, username1);
    
    cout << "Reenter the user name: ";
    getline(cin, username2);

    if (validateUsername(username1, username2)) {
        cout << "User name is valid" << endl;
    } else {
        cout << "User name is Invalid" << endl;
    }
    return 0;
}
bool validateUsername(const string& username1, const string& username2) {
    return username1 == username2;
}

