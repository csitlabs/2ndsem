//lab 9.1
#include <iostream>
using namespace std;

class Cube
{
    private:
        int number;

    public:
        void setNumber(int n)
        {
            number = n;
        }

        friend int cube(Cube c)
        {
            return c.number * c.number * c.number;
        }
};

int main()
{
    Cube c;
    int limit;

    cout << "Enter the Integer limit: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        c.setNumber(i);
        cout << "Cube of " << i << ": " << cube(c) << endl;
    }

    return 0;
}

