#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:\n";
    int a,b;
    cin>>a>>b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << endl;
     if (a>b)
         cout<<"MAX="<<a<<endl;
         else
            cout<<"MAX+"<<b;
}
