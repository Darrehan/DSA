/* templates */
#include <iostream>
#include <stdlib.h>
using namespace std;
template <class T>
class arithimatic
{
private:
    T a;
    T b;

public:
    arithimatic()
    {
        T a = 0; // default constructer we can say non-parameterised constructer
        T b = 0;
    }
    arithimatic(T a, T b); // parameterised constructer or constructer overloading
    T add();
    T sub();
};
template <class T>
arithimatic<T>::arithimatic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T arithimatic<T>::add() // do not write T in front of arithematic because it will automatically check                     // what funtion is going to return template<T> is defined to this funtion it will do automatic conversion.
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T arithimatic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}
int main()
{
    arithimatic<int> ar(10, 5);
    cout << "add = " << ar.add() << "\n";
    cout << "sub = " << ar.sub() << "\n";
    return 0;
}