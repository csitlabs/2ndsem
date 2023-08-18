#include <iostream>
using namespace std;
class Time {
	int hour;
	int mins;
public:
	Time() {
		hour = 0;
		mins = 0;
	}
	Time(int t) {
		hour = t / 60;
		mins = t % 60;
	}
    void Display() {
		cout << "Time: " << hour << " hours & " << mins << " minutes" << endl;
	}
};

int main() {
    Time t;
	int s;
	cout<<"Enter time in minutes: ";
    cin >> s;
    t = s; // basic to user defined class
	t.Display();
    return 0;
}
