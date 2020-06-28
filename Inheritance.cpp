//Why we need inheritance? IS - A
#include <iostream>
using namespace std;

class Calculator { 
protected:
    int count;
public:
    int add(int a, int b) {
        return a + b;
    }
};

class AdvancedCalc : public Calculator {
public:
    int multipy(int a, int b) {
        return a * b;
    }
};


int main()
{
    AdvancedCalc adv;
    cout << adv.add(5, 10) << endl;
    cout << adv.multipy(5, 10) << endl;
   
    cout << "Learning inheritance under 5 minutes!\n";
}
