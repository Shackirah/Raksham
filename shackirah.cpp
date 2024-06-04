#include <iostream>
using namespace std;
double accountTransaction();
double sendMoney();
double withdrawMoney();
//double depositeMoney();
double topUp();
//double changePin();
double akauntiYanga();
double kutumizaNdalama();
double kutapaNdalama();
double kugulaMayunitsi();
//double changePin();
void english();
void chichewa();
float balance = 40000;

int main()
{
    int num;
    int option;
    while (1)
    {
  
        cout << "WELCOME TO RAKSHAM BANK SERVICES " <<endl;
        cout << "Select Language"<<endl;
        cout << "1. English\n" << "2. Chichewa\n"<< "choice: ";
        cin >> option;
        switch (option) 
        {
            case 1:
                english();
                break;
            case 2:
                chichewa();
                break;
            default:
                cout << "wrong option please!!! try again later."<<endl;
                break;

        }
        cout << "Do you want to make another transaction?????" <<endl;
        cout << "1. Yes\n" << "2. No" <<endl;
        cin >> num;
        if (num == 1)
        {
            continue;
        }
        else 
        {
            break;
        }

    }
  
}
void english()
{
    float result;
    int choice;
     char options[5][100] = {"Account Transaction", "Send Money", "Withdraw Money",
      "Top up"};
    for (int  i = 0; i <4; i++)
    {
        /* code */
        cout << i+1 << ": " << options[i] << "\n";
    }
    cout << "choose option"<<endl;

    cin >> choice;
    switch (choice)
    {
        case 1:
            balance = accountTransaction();
            break;
        case 2:
        balance = sendMoney();
            cout <<"Your balance is: " <<balance <<endl;
            break;
        case 3:
        balance = withdrawMoney();
            cout <<"Your balance is: "<<balance <<endl;
            break;
        case 4:
        balance = topUp();
            //cout <<"you have successfully purchased your credit"<<endl;
            cout <<"Your balance is: "<<balance <<endl;
            break;
        /*case 5:
        balance =changePin();
            cout <<"Result: "<< result <<endl;
            break;*/
        default:
        cout << "Invalid input please try again!!!!!" <<endl;
        break;
    }
}
void chichewa()
{
    float result;
    int choice;
     char options[5][100] = {"Akaunti Yanga", "Kutumiza ndalama", "Kutapa ndalama",
      "Kugula mayunitsi"};
    for (int  i = 0; i <4; i++)
    {
        /* code */
        cout << i+1 << ": " << options[i] << "\n";
    }
    cout << "Sankhani chomwe mukufuna"<<endl;

    cin >> choice;
    switch (choice)
    {
        case 1:
            balance = akauntiYanga();
            break;
        case 2:
        balance =kutumizaNdalama ();
            cout <<"Ndalama zanu zotsala ndi: " <<balance <<endl;
            break;
        case 3:
        balance=kutapaNdalama();
            cout <<"Ndalama zanu zotsala ndi: "<<balance <<endl;
            break;
         case 4:
        balance =kugulaMayunitsi();
            cout <<"Ndalama zanu zotsala ndi: "<<balance <<endl;
            break;
       /*case 5:
        balance =changePin();
            cout <<"Result: "<<balance <<endl;
            break;*/
        default:
        cout << "Mwasankha nambala yolakwika, yesaniso kachikena!!!!!" <<endl;
        break;
    }
}
double accountTransaction()
{
    int option;
    cout << "select service" <<endl;
    cout << "1. Balance Inquiry \n" << "2. Main Menu"<<endl;
    cin >> option;
    if (option == 1)
    {
    cout << "Your balance is " << balance <<endl;
    }
    else if (option == 2)
    {
        main();
    }
    else 
    {
    cout << "Invalid input please try again!!!!" <<endl;
    cin >> option; 
    }

    
return balance;
}
double sendMoney()
{   int number;
    float amount;
    cout <<"Enter account number" <<endl;
    cin >> number;
    cout <<"Enter amount to transfer" <<endl;
    cin >> amount;
    balance -= amount;
    return balance;
}
double withdrawMoney()
{
    float amount;
    cout <<"How much do you want to withdraw???" <<endl;
    cin >> amount;
    balance -= amount;
    return balance;
}

double topUp()
{
    int option, number;
    float amount;
    cout << "1. TNM number\n " <<"2. Airtel number" <<endl;
    cin >> option;
    cout << "Enter phone number eg 099.....or 088....." <<endl;
    cin >>number;
    cout << "Enter amount of credit: "<<endl;
    cin >> amount;
    balance -= amount;

    return balance;
}

double akauntiYanga()
{
    int option;
    cout << "Sankhani chithandizo chomwe mukufuna: " <<endl;
    cout << "1. Balansi Yanga \n" << "2. meni menyu"<<endl;
    cin >> option;
    if (option == 1)
    {
    cout << "Ndalama zanu zotsala ndi: " << balance <<endl;
    }
    else if (option == 2)
    {
        main();
    }
    else 
    {
    cout << "Mwasankha nambala yolakwika, yesaniso kachikena!!!!" <<endl;
    cin >> option; 
    }

    
return balance;
}
double kutumizaNdalama()
{   int number;
    float amount;
    cout <<"Lowetsani akaunti nambala" <<endl;
    cin >> number;
    cout <<"Ndalama zomwe mukufuna kutumiza" <<endl;
    cin >> amount;
    balance -= amount;
    return balance;
}
double kutapaNdalama()
{
    float amount;
    cout <<"Mukufuna mutape ndalama zingati???" <<endl;
    cin >> amount;
    balance -= amount;
    return balance;
}

double kugulaMayunitsi()
{
    int option, number;
    float amount;
    cout << "1. TNM number\n " << "2. Airtel number" <<endl;
    cin >> option;
    cout << "Lowetsani nambala yanu eg 099.....or 088....." <<endl;
    cin >>number;
    cout << "Maunitsi a ndalama zingati: "<<endl;
    cin >> amount;
    balance -= amount;

    return balance;
}

/*double changePin()
{

}*/