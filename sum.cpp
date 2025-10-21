#include <iostream>


using namespace std;

int main(){
    float sum;
    string output;
    try{
    while (getline(cin, output)){
        sum += stof(output);
        }
    cout << sum << endl;
    return 0;
    }  
    catch (invalid_argument){
        cerr << "bad input";
        exit(1);
    }
    
}