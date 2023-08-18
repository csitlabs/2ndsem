#include <iostream>
using namespace std;

class Minute {
public:
int mins;
	Minute() {
		mins = 0;
	}
	void show() {
		cout << "\nTotal Minutes : " << mins << endl;
	}
};

class Time {
	int hr, mins;
    public:
	Time(int h, int m) {
		hr = h;
		mins = m;
	}
	Time () {}
	operator Minute () {
		Minute m;
		m.mins = (hr * 60) + mins;
		return m;
	}
	void getD() {
	    cout << "Enter Hour & Minutes: ";
	    cin >> hr >> mins;
	}
	void show() {
		cout << "Hour: " << hr << endl;
		cout << "Minute : " << mins << endl;
	}
};

int main() {
	Time T1;
	T1.getD(); 
	Minute m;
	m=T1; //minute class is destination and Time class is source class
	T1.show();
	m.show();
	return 0;
}
