#include<iostream>
using namespace std;
class Complex {
	public:
		int real, imaginary;
	Complex(int tempReal = 0, int tempImaginary = 0)
	{
		real = tempReal;
		imaginary = tempImaginary;
	}
	Complex addComp(Complex C1, Complex C2)
	{
		Complex temp;
		temp.real = C1.real + C2.real;
		temp.imaginary = C1.imaginary + C2.imaginary;
		return temp;
	}
};
int main()
{
	float a, b, c, d;
	cout<<"Enter first complex number: ";
	cin >> a >> b;
	Complex C1(a, b);
	cout<<"Complex number 1 : "<< C1.real << " + " << C1.imaginary << "i " <<endl;
	cout << "Enter second complex number: ";
	cin >> c >> d;
	Complex C2(c, d);
	cout<<"Complex number 2 : "<< C2.real << " + "<< C2.imaginary << "i " <<endl;
	Complex C3;
	C3 = C3.addComp(C1, C2);
	cout<<"Sum of complex number : " << C3.real << " + " << C3.imaginary << "i ";
	return 0;
}
