#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float imaginary;

public:
    void set()
    {
        cout << "enter the real part ";
        cin >> real;
        cout << "enter the imaginary part ";
        cin >> imaginary;
    }
    void display()
    {
        cout << "complex no. is " << real << "+" << imaginary << "i";
    }
};
int main()
{
    complex x,y;
    x.set();
    x.display();
}
