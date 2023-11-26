#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <string>
using namespace std;
void Admin();
void trainChoice();
void services();
void rate();
void dashboard();
void login();
void header();
void login();
void eticket();
void feedback();
void rating();
void helpline();
void displayInformation(const string &name, int cnic, const string &location, int num, int totalAmount);

    string username[10];
int option;
int password[10];
string role[10];
int i =0;
main()
{
    header();
    for (int i = 0; i < 10; ++i)
    {
        login();
        if (option == 3)
        {
            system("cls");
            break;
        }
    }

    login();
}
void header()
{

    cout << R"(
                    ____           
                    | |_ _ __ __ _(_)_ __  ___     
                    | __| '__/ _` | | '_ \/ __|
                    | |_| | | (_| | | | | \__ \
                    \__|_|  \__,_|_|_| |_|___/
                                                      ____   ___   ___  _  _____ _   _  ____ ____   
                                                      | __ ) / _ \ / _ \| |/ /_ _| \ | |/ ___/ ___|  
                                                      |  _ \| | | | | | | ' / | ||  \| | |  _\___ \  
                                                      | |_) | |_| | |_| | . \ | || |\  | |_| |___) | 
                                                      |____/ \___/ \___/|_|\_\___|_| \_|\____|____/           )";
}
void Admin()
{
    cout << "\n\n\t\t\tPress 1 Home" << endl;
    cout << "\n\n\t\t\tPress 2 Train Timings" << endl;
    cout << "\n\n\t\t\tPress 3 Rates" << endl;
    cout << "\n\n\t\t\tPress 4 Info" << endl;
    cout << "\n\n\t\t\tPress 5 EBooking" << endl;
    cout << "\n\n\t\t\tPress 6 Feedback" << endl;
    cout << "\n\n\t\t\tPress 7 Ratings" << endl;
    cout << "\n\n\t\t\tPress 8 Ticket Information" << endl;
    cout << "\n\n\t\t\tPress 9 Helpline" << endl;
    cout << "\n\n\t\t\tPress 10 Exit" << endl;
}
void trainChoice()
{
    header();
    int option;

    cout << "\n\n\t\t\tPress 1 Home" << endl;
    cout << "\n\n\t\t\tPress 2 Train Timings" << endl;
    cout << "\n\n\t\t\tPress 3 Rates" << endl;
    cout << "\n\n\t\t\tPress 4 Info" << endl;
    cout << "\n\n\t\t\tPress 5 EBooking" << endl;
    cout << "\n\n\t\t\tPress 6 Feedback" << endl;
    cout << "\n\n\t\t\tPress 7 Ratings" << endl;
    cout << "\n\n\t\t\tPress 8 Ticket Information" << endl;
    cout << "\n\n\t\t\tPress 9 Helpline" << endl;
    cout << "\n\n\t\t\tPress 10 Exit" << endl;
    cin >> option;
    system("cls");
    if (option == 4)
    {
        cout << "Pakistan Railways is the national, state-owned railway company of Pakistan in Lahore. Founded in 1861 as the North Western State Railway and headquartered in Lahore, it owns 7,490 kilometres of operational track across Pakistan, stretching from Torkham to Karachi, offering both freight and passenger services." << endl;
        int option;
        cout << "\t\t\t1. Back" << endl;
        cin >> option;
        if (option == 1)
        {
            system("cls");
            trainChoice();
        }
    }
    if (option == 10)
    {
        system("cls");
    }
    if (option == 3)
    {
        rate();
    }
    if (option == 1)
    {
        services();
    }
    if (option == 2)
    {
        dashboard();
    }
    if (option == 5 || option == 8)
    {
        eticket();
    }
    if (option == 7)
    {
        rating();
    }
    if (option == 6)
    {
        feedback();
    }
    if (option == 9)
    {
        helpline();
    }
}
void helpline()
{
    cout << "Call us at following numbers: " << endl;
    cout << "xxxx-xxx-xxxx" << endl;
    cout << "0000-000-0000\n";
    cout << "Press any key to continue";
    getch();
    trainChoice();
}
void displayInformation(const string &name, int cnic, const string &location, int num, int totalAmount)
{
    cout << "\n\n\n\n\t\t\t\t\t\tTicket Details\n\n\n\n"
         << endl;
    cout << "Passenger Name: " << name << endl;
    cout << "CNIC: " << cnic << endl;
    cout << "Location: " << location << endl;
    cout << "Number of Tickets: " << num << endl;
    cout << "Total Amount: " << totalAmount << endl;
}

void feedback()
{
    cin.ignore();
    string res;
    cout << "Enter Your Feedback about our Services: ";
    getline(cin, res);
    cout << "Thanks for your feedback!";
    Sleep(300);
    system("cls");
    trainChoice();
}
void rating()
{
    cout << "\t\t\t\tGive Your Response" << endl;
    cout << "1. Good \n";
    cout << "2. Average\n";
    cout << "3. Worst\n";
    int op;
    cin >> op;
    cout << "Thanks for your opinion!";
    Sleep(300);
    system("cls");
    trainChoice();
}
void eticket()
{
    int num;
    cout << "Enter number of tickets: ";
    cin >> num;
    cout << "\t\t\t\t\t\tPASSENGERS DETAILS" << endl;
    string name, location;
    int cnic;
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter CNIC: ";
    cin >> cnic;
    cout << "Location: ";
    cin >> location;

    int price = 0;
    if (location == "Lahore")
    {
        price = num * 4500;
        cout << "Total Amount: " << price;
    }
    else if (location == "Karachi")
    {
        price = num * 4200;
        cout << "Total Amount: " << price;
    }
    else if (location == "Peshawar")
    {
        price = num * 4500;
        cout << "Total Amount: " << price;
    }
    else if (location == "Multan")
    {
        price = num * 4000;
        cout << "Total Amount: " << price;
    }
    else if (location == "Gujranwala")
    {
        price = num * 4500;
        cout << "Total Amount: " << price;
    }

    displayInformation(name, cnic, location, num, price);
    cout << "Press any Key to continue";
    getch();
    trainChoice();
}

void dashboard()
{
    int op;
    cout << "\n\n\t\t\tPress 1 Enter Train:" << endl;
    cout << "\n\n\t\t\tPress 2 Location" << endl;
    cout << "\n\n\t\t\tPress 3 Back" << endl;
    cin >> op;
    system("cls");
    if (op == 3)
    {
        system("cls");
        trainChoice();
    }
    if (op == 1)
    {
        string name;
        cout << "\n\n\t\t\tName: ";
        cin >> name;
        if (name == "JAFFAR EXPRESS")
        {
            cout << "\n\n\t\t\tTrain Arrive At 10AM";
        }
        if (name == "YAAD-GAR-EXPRESS")
        {
            cout << "\n\n\t\t\tTrain is on time. ";
        }
        if (name == "PAK-TRAIN")
        {
            cout << "\n\n\t\t\tTrain is late due to Rain!";
        }
        if (name == "GREEN TRAIN")
        {
            cout << "\n\n\t\t\tTrain arrives at 2AM";
        }
    }
    if (op == 2)
    {
        string location;
        cout << "\n\n\t\t\tEnter Location: ";
        cin >> location;
        if (location == "Lahore")
        {
            cout << "\n\n\t\t\tJAFFAR EXPRESS is coming soon! ";
            Sleep(800);
            system("cls");
            dashboard();
        }
        if (location == "Karachi")
        {
            cout << "\n\n\t\t\tYAAD-GAR-EXPRESS is on its Way!";
            Sleep(800);
            system("cls");
            dashboard();
        }
        if (location == "Peshawar")
        {
            cout << "\n\n\t\t\tGREEN TRAIN arrives soon!";
            Sleep(800);
            system("cls");
            dashboard();
        }
        if (location == "Multan")
        {
            cout << "\n\n\t\t\tTrain is OUT OF ORDER!";
            Sleep(800);
            system("cls");
            dashboard();
        }
    }
}

void services()
{
    cout << "\n\n\t\t\tOur Services:";
    cout << "\n\n\t\t\tJAFFAR EXPRESS";
    cout << "\n\n\t\t\tYAAD-GAR-EXPRESS";
    cout << "\n\n\t\t\tGREEN TRAIN";
    cout << "\n\n\t\t\tPAK-TRAIN";
    cout << "\n\n\t\t\t1. Exit" << endl;
    int option;
    cin >> option;
    if (option == 1)
    {
        system("cls");
        trainChoice();
    }
}
void rate()
{

    cout << setw(70) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

    cout << left << setw(30) << "City" << setw(30) << "Train"
         << "Ticket Rate" << endl;
    cout << setw(30) << "Lahore-to-Karachi" << setw(30) << "JAFFAR EXPRESS"
         << "Rs 4500" << endl;
    cout << setw(30) << "Lahore-to-Multan" << setw(30) << "PAK-TRAIN"
         << "Rs 4500" << endl;
    cout << setw(30) << "Karachi-to-Multan" << setw(30) << "YAAD-GAR-EXPRESS"
         << "Rs 4200" << endl;
    cout << setw(30) << "Karachi-to-Lahore" << setw(30) << "JAFFAR EXPRESS"
         << "Rs 4200" << endl;
    cout << setw(30) << "Multan-to-Lahore" << setw(30) << "GREEN TRAIN"
         << "Rs 4000" << endl;
    cout << setw(30) << "Peshawar-to-Karachi" << setw(30) << "JAFFAR EXPRESS"
         << "Rs 4500" << endl;
    cout << setw(30) << "Peshawar-to-Lahore" << setw(30) << "YAAD-GAR-EXPRESS"
         << "Rs 4500" << endl;
    cout << setw(30) << "Gujranwala-to-Lahore" << setw(30) << "PAK-TRAIN"
         << "Rs 4500" << endl;

    cout << "1. Exit" << endl;

    int option;
    cin >> option;
    if (option == 1)
    {
        system("cls");
        trainChoice();
    }
}
void login()
{
    int signinpassword, signuppassword;
    string signinname, signupname;
    cout << "\n";
    cout << "\t\t\t************************** \n";

    cout << "\t\t\t\t\t\t  LOGIN" << endl;
    cout << "\t\t\t************************** \n";
    cout << "\t\t\t\t\t\t 1. Sign In" << endl;
    cout << "\t\t\t\t\t\t 2. Sign Up" << endl;
    cout << "\t\t\t\t\t\t 3. Exit" << endl;
    cout << "Choose Option: ";
    cin >> option;
    if (option == 1)
    {
        cout << " Enter Username: ";
        cin >> signinname;
        cout << " Enter Password: ";
        cin >> signinpassword;
        string role;
        cout << " Enter your role (Admin/User): ";
        cin >> role;
        int x = 0;
        for (int i = 0; i < 10; i++)
        {
            if (username[i] == signinname && password[i] == signinpassword )
            {
                cout << " Signed in Successfully as a " << role[i] << " !";
                x = 1;
                if(role =="User"){
                header();
                trainChoice();
                break;
            }
        }
        }
        if (x == 0)
            cout << " You don't have any account. Please Sign Up.";
    }

    int count = 1;
    if (option == 2)
    {
        cout << " Enter Username: ";
        cin >> signupname;
        cout << " Enter Password: ";
        cin >> signuppassword;

        for (int i = 0; i < 10; i++)
        {
            if (username[i] == signupname && password[i] == signuppassword)
            {
                cout << " Account already exists ! Please use different Username";

                count = 0;
                break;
            }
        }
        if (count == 1)
        {
            
            username[i] = signupname;
            password[i] = signuppassword;
            cout << " Enter your role (Admin/User): ";
            cin >> role[i];
            i = i + 1;
        }
    }
}
bool signUp(string name, string password, string role, string users[], string passwords[], string roles[], int &usersCount, int userArrSize)
{
    bool isPresent = false;

    for (int index = 0; index < usersCount; index++)
    {
        if (users[index] == name && passwords[index] == password)
        {
            isPresent = true;
            break;
        }
    }
    if (isPresent == true)
    {
        return 0;     
    }
    else if (usersCount < userArrSize)
    {
        users[usersCount] = name;
        passwords[usersCount] = password;
        roles[usersCount] = role;
        usersCount++;
        return true;
    }
    else
    {
        return false;
    }
}
