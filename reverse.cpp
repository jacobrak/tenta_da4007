#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    if (argc <= 1){
        cerr << "Error message";
        return -1;
    }
    string reverse;
    string name = argv[1];

    for(int i = name.size() - 1; i >= 0; --i){
        reverse += name[i];
    }
    cout << reverse << endl;
    return 0;
}