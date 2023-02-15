#include "do_while.h"
#include<iostream>

using std::cout;
using std::cin;

void run_menu()
{
    cout<<"Main Menu\n";
    cout<<"1. Option 1\n";
    cout<<"2. Option 2\n";
    cout<<"3. Quit\n";
}

int prompt_user()
{
    int option = 0;
    cout<<"Enter an option: ";
    cin>>option;
    return option;
}

void handle_option(int option)
{
    switch(option){
        case 1:
            cout<<"Option 1\n";
            break;
        case 2:
            cout<<"Option 2\n";
            break;
        case 3:
            break;
        default:
            cout<<"Invalid Option\n";
            break;
    }
}