#include <iostream>

using namespace std;

class Greet{
public:
    void virtual greet(){
        cout << "hello" << endl;
    }
};
class Newlanguage: public Greet{
public: 
    void greet() override{
        cout << "hello_cool" << endl;
    }
};

int main(){
    Newlanguage t;
    t.greet();
}