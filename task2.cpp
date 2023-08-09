#include<iostream>
using namespace std;


int main()
{
    double num1, num2;
    char operation;

    cout<<"Enter the First Number: ";
    cin>>num1;

    cout<<"Enter the Second Number: ";
    cin>>num2;

    cout<<"Enter the operation ( +, -, * ,/): ";
    cin>>operation;

    double result;

    // use switch case:
    switch(operation){
        case '+':
        result = (num1 + num2);
        cout<<"Result: "<<result<<endl;
        break;

        case '-':
        result = (num1 - num2);
        cout<<"Result: "<<result<<endl;
        break;


        case '*':
        result = (num1 * num2);
        cout<<"Result: "<<result<<endl;
        break;


        case '/':
        if(num2 !=0 ){
        result = (num1 / num2);
        cout<<"Result: "<<result<<endl;
        }
        else{
            cout<<"Error detected: "<<endl;
        }
        break;

        default:
        cout<<"Enter valid operation: "<<endl;
        break;

    }

    return 0;

}