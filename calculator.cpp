#include <iostream>
using namespace std;

int main()
{

    char operatr;
    float num1, num2;

    cout << "choose  operator:\n"
    <<"to add(+)\n"
    <<"to substract(-) \n"
    <<"to multiply (*) \n"
    <<"to divide (/)\n"<<endl;
cout<<"enter the operator "<<endl;
    cin >> operatr;

    cout << "Enter two operands: "<<endl;
    cout<<"enter the first operator"<<endl;
    cin >> num1 ;
     cout<<"enter the second operator"<<endl;
     cin>>num2;

    switch (operatr)
    {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}
