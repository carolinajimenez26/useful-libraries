// Convert string to number and vice-versa
#include <iostream>
#include <sstream> // for stringstream
#include <string> // for string
// We're first converting number to string
#include <vector>

using namespace std;

vector<string> split(string s, char tok) { // split a string by an  especified token
    istringstream ss(s);
    string token;
    vector<string> v;

    while(getline(ss, token, tok)) {
        v.push_back(token);
    }

    return v;
}

void print(vector<string> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) { // if is not the last element
           cout << " "; // don't put spaces after the word
        }
    }
    cout << endl;
}

int main() {
    int num = 2018;
    // declare output stringstream
    ostringstream out_str;
    out_str << num;
    // convert number to string
    string x = out_str.str();
    cout << "String is: ";
    cout << x << endl;

    cout << "Using to_string()";
    int i_val = 20;
    float f_val = 30.50;
    string stri = to_string(i_val);
    string strf = to_string(f_val);
    cout << "\n" << "The integer in string is: ";
    cout << stri << endl;
    cout << "The float in string is: ";
    cout << strf << endl;

    string name = "Hello Harshit";
    vector<string> splitted = split(name, ' ');
    print(splitted);

    return 0;
}
