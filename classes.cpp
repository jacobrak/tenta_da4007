#include <iostream>

using namespace std;

class Greet{
public:
    void greet(){
        cout << "hello" << endl;
    }
};
class Newlanguage: public Greet{
public: 
    void great_again(){
        cout << "hello_cool" << endl;
    }
};

int main(){
    Newlanguage t;
    t.greet();
    t.great_again();
}