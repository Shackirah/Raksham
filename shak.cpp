#include <iostream>
#include <cmath>
using namespace std;

double myArithmetic();
double myTrigonometry();
double myAdvanced(); 
double myTheorems();

int main() 
{
    double result;
    int choice;
    int num = 1;
    while ( num == 1){
    const char* option[] ={"Arithmetic", "Trigonometry", "Advanced",
    "Theorems"};

    int numOption = sizeof(option) / sizeof(option[0]);
    for (int i = 0; i < numOption; ++i)
    {
        cout << i + 1 << ": " << option[i] << endl;
    }
    cout << "Choose option: "<<endl;
    cin >> choice;
    switch (choice)
    {
        case 1:
            result = myArithmetic();
            cout <<"Result: " << result <<endl;
            break;
        case 2:
            result = myTrigonometry();
            cout <<"Result: " << result <<endl;
            break;
        case 3:
            result = myAdvanced();
            cout <<"Result: "<< result <<endl;
            break;
        case 4:
            result =myTheorems();
            cout <<"Result: "<< result <<endl;
            break;
        default:
        cout << "Invalid input please try again!!!!!" <<endl;
        break;
    }
      
    cout << "Do you want to do another calculation" <<endl;
    cout << "1. Yes\n" << "2. No\n" <<endl;
    cin >> num;
    
    }
    while (num == 2)
    {
        break;
    }
   
    return 0;
}


double myTrigonometry(){
    ///list of options
    int choice;
    double result;
    double pi = 3.14159;
    double a;

    char options[3][10] = {"Sin",  "Cos", "Tan"};
    for (int  i = 0; i < 3; i++)
    {
        /* code */
        cout << i+1 << ": " << options[i] << "\n";
    }
    cout << "choose option"<<endl;

    cin >> choice;
    cout << "Enter an angle: ";
    cin>> a;
    double angle = a*(pi/180);
    switch (choice)
    {
    case 1:
        result = sin(angle);
        break;

    case 2:
        result = cos(angle);
        break;

    case 3:
        result = tan(angle);
        break;
    
    default:
        cout << "Invalid input please try again!!!!!" <<endl;
        break;
    }


    return result;
    
}
double myArithmetic ()
{
    int choice;
    double num1, num2, num3;
    double result;
    char options[4][20] = {"Addition",  "Subtraction", "Multiplication", "Division"};
    for (int  i = 0; i < 4; i++)
    {
        /* code */
        cout << i+1 << ": "<< options[i] << "\n";
    }
    cout << "choose option : "<<endl;
    cin>> choice;
    cout << "Enter num1 : " <<endl;
    cin >> num1;
    cout << "Enter num2 :" <<endl;
    cin >> num2;
     switch (choice)
    {
    case 1:
        result = num1 + num2;
        break;

    case 2:
        result = num1 - num2;
        break;

    case 3:
        result = num1 * num2;
        break;

    case 4:
        if(num2 != 0)
        {
        result = num1 / num2;
        }
        else
        {
            cout << "UNDEFINED!!!!" <<endl;
        }
        break;
    default:
        cout << "Invalid input please try again!!!!!" <<endl;
        break;
    }
    return result;
   
}
double myAdvanced ()
{
    int choice;
    double num1, num2;
    double result;
    char options[7][20] = {"Square Root",  "Power", "Inverse", "Logarithm"};
    for (int  i = 0; i < 4; i++)
    {
        /* code */
        cout << i+1 << ": "<< options[i] << "\n";
    }
    cout << "choose option : "<<endl;
    cin>> choice;
    cout << "Enter num1 : " <<endl;
    cin >> num1;
    
     switch (choice)
    {
    case 1:
        result = sqrt(num1);
        break;

    case 2:
        cout << "Enter num2 :" <<endl;
        cin >> num2;
        result = pow(num1, num2);
        break;

    case 3:
        result = 1/(num1);
        break;

    case 4:
        result = log(num1);
        break;
    default:
        cout << "Invalid input please try again!!!!!" <<endl;
        break;
    }
    return result;
   
}
double myTheorems ()
{
    int choice;
    double num1, num2, num3;
    double result;
    double pi = 3.14159;
    char options[10][20] = {"AreaOfcicle",  "Circumference", "Pythagorous", "AreaOfsquare", "Volume"};
    for (int  i = 0; i < 5; i++)
    {
        /* code */
        cout << i+1 << ": "<< options[i] << "\n";
    }
    cout << "choose option : "<<endl;
    cin>> choice;
     switch (choice)
    {
    case 1:
        cout << "Enter Radius of the circle: " <<endl;
        cin >> num1;
        result = pi*num1*num1;
        break;

    case 2:
        cout << "Enter Radius of the circle: " <<endl;
        cin >> num1;
        result = 2*pi*num1;
        break;

    case 3:
        cout << "Enter Adjacent: " <<endl;
        cin >> num1;
        cout << "Enter Hypotenuse: " <<endl;
        cin >> num2;
        result =sqrt((num1*num1) +(num2*num2));
        break;

    case 4:
        cout << "Enter Length: " <<endl;
        cin >> num1;
        cout << "Enter width: "<<endl;
        cin >> num2;
        result = num1 * num2;
        break;
    
    case 5:
        cout << "Enter Length: " <<endl;
        cin >> num1;
        cout << "Enter Width: "<<endl;
        cin >> num2;
        cout << "Enter Height: "<<endl;
        cin >> num3;
        result = num1 * num2 * num3;
        
    default:
        cout << "Invalid input please try again!!!!!" <<endl;
        break;
    }
    return result;
   
}


