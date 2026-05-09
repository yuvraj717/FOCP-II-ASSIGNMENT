#include <iostream>
#include <string>
#include <cctype>   // for isalnum()

using namespace std;

bool isValidUsername(const string& username) {
    for (char ch : username) {
        if (!isalnum(ch)) {   // check if character is not alphanumeric
            return false;
        }
    }
    return true;
}

int main() {
    string username;
    cout << "Enter a username: ";
    cin >> username;   // cin stops at space, so spaces
