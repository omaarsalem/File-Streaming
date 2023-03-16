
// file_stream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char value;
    string response;
    // declare variables

    ofstream ashifile;

    ashifile.open("fruit.txt", ios::app);
    ashifile << "Fruit 1: Mango" << endl;
    ashifile << "Fruit 2 : Watermelon" << endl;
    ashifile << "Fruit 3 : Coconut" << endl;
    ashifile << "Fruit 4 : Banana" << endl;
    ashifile << "Fruit 5 : Orange" << endl;
    ashifile.close();
    // create writing object


    ifstream ashifile_read;
    ashifile.open("fruit.txt");
    string string1;


    while (getline(ashifile_read, string1))
    {

        cout << string1 << endl;
        if (string1 == "Mango")
        {
            cout << "The cost of the Mango you have chosen is £15/kilogram.\n";
        }


        if (string1 == "Watermelon")
        {
            cout << "The cost of the Watermelon you have chosen is £8/kilogram.\n";
        }


        if (string1 == "Coconut")
        {
            cout << "The cost of the Coconut you have chosen is £15/kilogram.\n";
        }


        if (string1 == "Banana")
        {
            cout << "The cost of the Banana you have chosen is £6/kilogram.\n";
        }


        if (string1 == "Orange")
        {
            cout << "The cost of the Orange you have chosen is £4/kilogram.\n";
        }

        // if statments
    }
    ashifile_read.close();

    cout << "Hello :)";
    cout << "\n";
    cout << "Which fruit do you want to know its cost: (Mango, Watermelon, Coconut, Banana and Orange) ";

    //print statments
    cin >> response;
    // store user input

    if (response == "Mango")
    {
        cout << "The cost of the Mango is £10/kg.\n";
    }


    else if (response == "Watermelon")
    {
        cout << "The cost of the Watermelon is £15/kg.\n";
    }


    else if (response == "Coconut")
    {
        cout << "The cost of the Coconut is £15/kg.\n";
    }

    else if (response == "Banana")
    {
        cout << "The cost of the Banana is £9/kg.\n";
    }

    else if (response == "Orange")
    {
        cout << "The cost of the Orange is £7/kg.\n";
    }
    // if statments
    cout << "Thank you, bye"; //statment printed
}




