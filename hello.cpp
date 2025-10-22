#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    if (argc == 1){
        cout << "Please write ./filename.exe 'argument'";
        exit(1);
    }
    string name = argv[1];
    cout << "Hello Loser " << name << endl;
}
    