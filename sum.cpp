#include <iostream>


using namespace std;

int main(){
    float sum;
    string output;
    while (getline(cin, output)){
        sum += stof(output);
    }    
    cout << sum << endl;
    return 0;
}