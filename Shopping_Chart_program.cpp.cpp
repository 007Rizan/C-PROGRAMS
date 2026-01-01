#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string input;
    vector<string> list;

    cout << "welcome to star market please enter your items (when your done type:D)\n";

    while (true) {
        cout << "enter what you want to buy: ";
        getline(cin, input);

        if (input == "D") {
            break;
        }

        list.push_back(input);
    }

    for (string a : list) {
        cout << a << endl;
    }

    return 0;
}
