#include<iostream>
using namespace std;

class dist {
    int x;
    public:
    dist (int n) {
        x = n;
    }
    operator int () {
        return x;
    }
};

int main () {
    int a;
    cout<<"Enter a number: ";
    cin >> a;
    dist d(a);
    int p = d;
    int q = (int) d;
    cout << "The entered number is: " << q;
    return 0;
}
