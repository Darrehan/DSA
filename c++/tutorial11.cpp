// using of class to display name and age of user
#include <iostream>
using namespace std;
class user
{
    string name; // it will take whole string
    int age;     // member of class are private by default
public:
    void getdata(void);
    void display(void); // member funtions
};
void user ::getdata(void)
{
    cout << "Enter your name buddy \n";
    getline(cin, name); // it will take more than one word including spaces....
    // cin.ignore(); .....> cin.ignore();funtion is used to ignore buffer like it will no display: enter age. direct terminal
    cout << "Enter your age buddy \n";
    cin >> age;
}
void user ::display(void)
{
    cout << "Your name =" << name << "\n";
    cout << "your age =" << age << "\n";
}
int main()
{
    user u;
    u.getdata();
    u.display(); // calling  member funtions with the help of (.)operator;
    return 0;
}
// if we write float =12.75;
// than the compiler will automatically convert it into double .
// for kepping it float we must need to include f
// float =12.75f;