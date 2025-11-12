#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s1 = "Hello", s2 = "World";
cout << "Concatenation: " << s1 + s2 << endl;
 reverse(s1.begin(), s1.end());
    cout << "Reversed: " << s1 << endl;
    string str = "Beautiful";
    str.erase(remove_if(str.begin(), str.end(), [](char c){
        return string("aeiouAEIOU").find(c) != string::npos;
    }), str.end());
    cout << "Without vowels: " << str << endl;
string s = "dcba";
    sort(s.begin(), s.end());
    cout << "Alphabetical: " << s << endl;
    char ch = 'A';
    cout << "Lowercase: " << (char)tolower(ch);
}
