#include <iostream>

using namespace std;

bool is_palindrome(const string& s){
    string tmp = s;
    string reverse;
    for(int i=tmp.size() - 1; i >= 0; --i){
        reverse += tmp[i];
    }

    if (reverse == s){
        return true;
    }
    return false;
}

int main(){
    cout << boolalpha <<bool(is_palindrome("level"));
}