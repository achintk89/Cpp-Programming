//********************Rock,Paper,Scicor Game*********
#include <iostream>
#include <inttypes.h>
#include <cstdint>
using namespace std;
int main()
{
    int n = 1;
    char user, computer;
    int *p;
    while (n > 0)
    {
        p = new int();
        int res = ((intptr_t)p % 99) + 1;
        if (res < 33)

            // s is denoting Stone
            computer = 's';

        else if (res > 33 && res < 66)

            // p is denoting Paper
            computer = 'p';

        // z is denoting Scissor
        else
            computer = 'z';
        cout << "******************Game Starts****************" << endl;
        cout << "s for:Stone " << endl;
        cout << "p for:Paper " << endl;
        cout << "z for:Sisor " << endl;
        cout << "0 TO Exit" << endl;
        cout << "Enter your choice: ";
        cin >> user;
        cout << endl;
        cout << "Yours Choice: " << user << endl;
        if (user != '0')
        {
            switch (user)
            {
            case 's':
                if (computer == 'p')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "computer wins!!!!" << endl;
                }
                else if (computer == 'z')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "user wins!!!!" << endl;
                }
                else if (computer == 's')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "Draw!!!!!!!" << endl;
                }
                break;
            case 'p':
                if (computer == 'z')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "computer wins!!!!" << endl;
                }
                else if (computer == 's')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "user wins!!!!" << endl;
                }
                else if (computer == 'p')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "Draw!!!!!!!" << endl;
                }
                break;
            case 'z':
                if (computer == 's')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "computer wins!!!!" << endl;
                }
                else if (computer == 'p')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "user wins!!!!" << endl;
                }
                else if (computer == 'z')
                {
                    cout << "Computers Choice: " << computer << endl;
                    cout << "Draw!!!!!!!" << endl;
                }
                break;
            }
        }
        else
        {
            cout << "****************Games End*****************";
            n = 0;
        }
    }

    return 0;
}