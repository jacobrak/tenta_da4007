#include <iostream>
#include <vector>
using namespace std;

int count_uppercase(string word, vector<char> alphabet){
    int count = 0;
    for(int i=0; i < word.size(); i++){
        for(int j=0; j < alphabet.size(); j++){
            if (word[i] == alphabet[j]){
                count += 1;
            }
        }
    }
    return count;
}

int main(){
    string word;
    cout << "Give me a string";
    cin >> word;
}