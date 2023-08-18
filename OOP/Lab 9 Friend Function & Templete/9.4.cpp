//lab 9.4
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    public:
    	int x;
        ClassA() : numA(10) {}
        
    private:
        int numA;
        
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
        ClassB() : numB(1) {}
    
    private:
        int numB;

        friend int add(ClassA, ClassB);
};

int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum is: " << add(objectA, objectB);
    return 0;
}
