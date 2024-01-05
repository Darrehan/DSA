#include <iostream>
using namespace std;

class Rational
{
private:
    int p;
    int q;

public:
    Rational()
    {
        p = 1; // non parameterised constructer
        q = 1;
    }

    Rational(int p, int q)
    {
        this->p = p; // prameterised construster
        this->q = q;
    }

    Rational(Rational &r)
    {
        this->p = r.p; // copy constructer
        this->q = r.q;
    }

    int getP() { return p; } // accessors

    int getQ() { return q; }

    void setP(int p)
    {
        this->p = p; // mutators
    }

    void setQ(int q)
    {
        this->q = q;
    }

    Rational operator+(Rational r)
    {
        Rational t;
        t.p = this->p * r.q + this->q * r.p; // inline funtion and also operator overloading
        t.q = this->q * r.q;                 // its the logic of adding two rational numbers @darrehanrasool.
        return t;
    }
    friend ostream &operator<<(ostream &out, Rational &r); // the friend funtion has to be written outside the class without using scope resolution operator
};

ostream &operator<<(ostream &out, Rational &r)
{
    out << r.p << "/" << r.q;
    return out;
}

int main()
{
    Rational r1(3, 4), r2(2, 5), r3;
    r3 = r1 + r2;
    cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;
}