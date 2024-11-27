/*
11. Consider class Complex in problem 9,
a) Modify the class to enable input and output of complex numbers through the overloaded >> and
<< operators, respectively
b) Overload the multiplication operator to enable multiplication of two complex numbers as in
algebra.
c) Overload the == and != operators to allow comparisons of complex numbers
*/
#include<iostream>
using namespace std;
class Complex {
    float real;
    float img;

public:
    Complex(){
        real = 0;
        img = 0;
    }

    Complex(float real, float img){
        this->real = real;
        this->img = img;
    }

    float getReal(){
        return real;
    }

    float getImg(){
        return img;
    }

    Complex operator*(Complex c){
        Complex result;
        result.real = (real*c.real) - (img*c.img);
        result.img = (real*c.img) + (img*c.real);
        return result;
    }

    bool operator ==(Complex c1){
        if(real == c1.real){
            if(img == c1.img) return true; 
        }
        return false;
    }

    bool operator !=(Complex c1){
        if(real != c1.real) return true; 
        else{
            if(img != c1.img) return true;
        } 
    
        return false;
    }
    
    friend istream& operator>>(istream &in, Complex &c) {
        in >> c.real >> c.img;
        return in;
    }

    // Overload << operator for output
    friend ostream& operator<<(ostream &out, const Complex &c) {
        out << c.real;
        if (c.img >= 0)
            out << " + " << c.img << "i";
        else
            out << " - " << -c.img << "i";
        return out;
    }

};

int main(){
    Complex c1,c2;

    cin>>c1>>c2;

    if(c1 == c2){
        cout<<c1;
        cout<<" is equal to ";
        cout<<c2;
        cout<<"\n";
    }
    else{
        cout<<c1;
        cout<<" is not equal to ";
        cout<<c2;
        cout<<"\n";
    }

    Complex c3 = c1 * c2;
    cout<<c3;
    cout<<"\n";
}