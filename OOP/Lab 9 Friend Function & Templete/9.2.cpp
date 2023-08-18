//lab 9.2
#include <iostream>
using namespace std;

class Sum
{
    private:
        int n;

    public:
        void setN(int num)
        {
            n = num;
        }

        friend int sumOdd(Sum s)
        {
            int sum = 0;
            for (int i = 1; i <= s.n * 2; i += 2)
            {
                sum += i;
            }
            return sum;
        }
};

int main()
{
    Sum s;
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    s.setN(n);
    cout << "Sum of first " << n << " odd numbers: " << sumOdd(s) << endl;

    return 0;
}

