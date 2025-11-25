#include <iostream>
using namespace std;

int addition(int a,int b){
    int c = a + b;
    return c;
}

int substraction(int a,int b){
    int c = a - b;
    return c;
}

int multiplication(int a,int b){
    double c = a * b;
    return c;
}

int division(int a,int b){
    double c = a / b;
    return c;
}

int main(){
    int a;
    int b;
    double sum;
    int op;
    cout << "Which mathematical operation would you like to do?\n" << "[1] Addition, [2] Substraction [3] Multiplication [4] Division: \n";
    cin >> op;
    if(op==1){
        cout << "Enter number 1: \n";
        cin >> a;
        cout << "Enter number 2 \n";
        cin >> b;
        sum = addition(a, b);
        cout << "The sum is: " << sum << endl;
    }
    else if(op==2){
        cout << "Enter number 1: \n";
        cin >> a;
        cout << "Enter number 2 \n";
        cin >> b;
        sum = substraction(a, b);
        cout << "The answer is: " << sum << endl;
    }
    else if(op==3){
        cout << "Enter number 1: \n";
        cin >> a;
        cout << "Enter number 2 \n";
        cin >> b;
        sum = multiplication(a, b);
        cout << "The answer is: " << sum << endl;
    }
    else if(op==4){
        cout << "Enter number 1: \n";
        cin >> a;
        cout << "Enter number 2 \n";
        cin >> b;
        sum = division(a, b);
        cout << "The sum is: " << sum << endl;
    }
    else{
        cout << "Please choose one of the choices by typing the corresponding number.\n";
    }
    return 0;
}