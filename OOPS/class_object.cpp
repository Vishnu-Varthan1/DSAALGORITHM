#include <iostream>
using namespace std;

class MyClass {
public:
    void greet() {
        cout << "Hello from MyClass!" << endl;
    }
};

int main() {
    MyClass obj;
    obj.greet();
    return 0;
}

