#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string password;    // For password length
    int upper = 0, lower = 0, digit = 0, special = 0; // initialization

    // Display output

    cout << "========================================\n";
    cout << "    PASSWORD STRENGTH CHEKEAR\n";
    cout << "========================================\n\n";

    // Enter password section

    cout << "Enter Password (Example: MyPass10%): ";
    getline(cin, password); //For space count in password

    int length = password.length(); //For string length 

    // For condition check

    for (int i = 0; i < length; i++)
    {

        if (isupper(password[i]))
            upper++;

        else if (islower(password[i]))

            lower++;

        else if (isdigit(password[i]))
            digit++;

        else if (ispunct(password[i]))
            special++;
    }
    cout << "\n================ RESULT ======================\n"; //Display Result 

    if (length >= 8 && upper && lower && digit && special)
        cout << password << " Is a Strong Password" << endl;

    else
        cout << password << " Is a Weak Password" << endl;

    return 0;
}