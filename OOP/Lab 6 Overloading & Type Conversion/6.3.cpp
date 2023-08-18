#include <iostream>
using namespace std;

class Factorial {
    int fact;
	public:
    Factorial(int f = 0) {
        fact = f;
    }
    void showfact() {
        cout << "Factorial: " << fact << endl;
    }
    void operator*=(int a) {
        fact = fact * a;
    }
};

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;
    Factorial f(num);
    for (int i = num - 1; i > 0; i--) {
        f *= i;
    }
    f.showfact();
	return 0;
}
