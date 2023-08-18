#include <iostream>
using namespace std;

class OddNumberException {};

void checkEvenOrOdd(int num)
{
    if (num % 2 != 0) {
        throw OddNumberException();
    }
	else {
        cout << num << " is Even number." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        checkEvenOrOdd(num);
    }
	catch (const OddNumberException&) {
        cout << "Error: Odd number" << endl;
    }

    return 0;
}

