#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char* argv[]){
    if (argc < 2){
        cerr << "Error opening file";
        exit(1);
    }
    string filepath = argv[1];
    ifstream file(filepath);
    if (!file){
        cerr << "Error opening file";
        exit(1);
    }
    string word;
    file >> word;
    int largest_number = stoi(word);
    while (file >> word){
        if (stoi(word) > largest_number){
            largest_number = stoi(word);
        }
        
    }
    cout << largest_number;
}