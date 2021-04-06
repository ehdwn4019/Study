#include <iostream>
#include<math.h>
using namespace std;

class Complex
{
private:
	double real, imag;
public:
	Complex() {};
	~Complex()
	{

	}
	Complex(double r,double i): real(r),imag(i){}
	Complex(double temp) : real(temp/2) ,imag(0){}
	Complex operator+(Complex);
	Complex operator-(Complex);
	Complex operator+=(Complex);
	Complex operator-=(Complex);
	bool operator==(Complex);
	bool operator!=(Complex);
	friend ostream& operator << (ostream&,Complex);
	friend istream& operator >> (istream&, Complex);
	friend Complex operator+(Complex,Complex);
	friend Complex operator-(Complex,Complex);
	int operator=(Complex);
	void print()
	{
		cout << "real : " << real << endl;
		cout << "imag : " << imag << endl;
	}
};

Complex Complex::operator+(Complex i)
{
	Complex c;
	c.real = this->real + i.real;
	c.imag = this->imag + i.imag;
	return c;
}

Complex Complex::operator-(Complex i)
{
	Complex c;
	c.real = this->real + i.real;
	c.imag = this->imag + i.imag;
	return c;
}

Complex Complex::operator+=(Complex i)
{
	Complex c;
	c.real = this->real += i.real;
	c.imag = this->imag += i.imag;
	return c;
}

Complex Complex::operator-=(Complex i)
{
	Complex c;
	c.real = this->real -= i.real;
	c.imag = this->imag -= i.imag;

	return c;
}

bool Complex::operator==(Complex i)
{
	return (this->real == i.real && this->imag == i.imag);
}

bool Complex::operator!=(Complex i)
{
	return !(*this!=i);
}

ostream & operator<<(ostream & os, Complex i)
{
	os << "(" << i.real << i.imag << ")" << endl;
	return os;
}

istream & operator>>(istream & os , Complex i)
{
	os >> i.real >> i.imag;
	if (!os)
		i = Complex(0.0);
	return os;
}

Complex operator+(Complex i, Complex j)
{
	Complex c;
	c.real = i.real + j.real;
	c.imag = i.imag + j.imag;
	return c;
}

Complex operator-(Complex i, Complex j)
{
	Complex c;
	c.real = i.real + j.real;
	c.imag = i.imag + j.imag;
	return c;
}




int Complex::operator=(Complex i)
{
	int temp = sqrt((i.real*i.real) + (i.imag*i.imag));
	return temp;
}

int main()
{
	Complex c1(1.0, 7.0), c2(3.0, 8.0);
	Complex c3=c1+c2;
	c3.print();

	c3 += c3;
	c3.print();

	c3 = c1.operator+(c2);
	c3.print();


	Complex c4(6);
	c4.print();

	Complex c5 = c1;
	c5.print();
	cout << endl;
	cout << c5.operator=(25);

	return 0;
}

