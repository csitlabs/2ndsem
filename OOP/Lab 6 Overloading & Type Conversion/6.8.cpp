#include <iostream>
using namespace std;

class ascii {
    public:
    int x;
    char y;
    
    void getCharacter () {
    cout << "Enter Character: ";
    cin >> y;
    }
    
    void finder () {
        x = 1 * y; // conversion of char to int
    }
    
    void Display () {
        cout<<"ASCII of " << y << " is: " << x;
    }
};

int main() {
    ascii a;
    a.getCharacter();
    a.finder();
    a.Display(); 
	return 0;
}
