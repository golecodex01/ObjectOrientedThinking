#include <iostream>
using namespace std;

class Complex
{
    float real;     
    float imag;     

public:
    
    Complex() {
        real=0;
        imag=0;

    }

   
    Complex(int  r, int  i)
    {
        real = r;
        imag = i;
    }

    
    Complex operator + (Complex &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
       Complex operator - (Complex &obj)
    {
        Complex result;
        result.real = obj.real-real;
        result.imag =  obj.imag-imag;
        return result;
    }

   
    void displayAddition()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    void displaySubstraction()
    {
        cout << real << " - " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 21);   
    Complex c2(11, 24);   

    Complex c3 = c1 + c2; 
    
    Complex c4 =c1-c2;

    c3.displayAddition();

    c4.displaySubstraction();
     return 0;
}
