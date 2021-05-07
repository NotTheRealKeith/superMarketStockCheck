// superMarketStockCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;



void stock_output(string outputArray[3][7]) {
    int x, y;

    cout << "\nitem Code\titem Name\tCost Price\tSell Price\tStock\tRe-Order Level\n";
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 6; y++) {
            cout << outputArray[x][y] << "\t\t";
        }
        cout << "\n";
    }

    cout << "\nitem Code\titem Name\tCost Price\tSell Price\tStock\tRe-Order Level\t\tProfit\n";
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 7; y++) {
            cout << outputArray[x][y] << "\t\t";
        }
        cout << "\n";
    }

    cout << "\n";
    
    
}


int main()
{
    string stock[3][7];
    int i, j;
    cout << "\nThe purpose of this code is to print out stock details in a supermarket!\n";
    cout << "------------------------------------------------------------------------\n";


    // --- asking user for input
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 7; j++) {
           
            if (j == 0) {
                cout << "please enter item code\n";
                cin >> stock[i][j];
            }

            if (j == 1) {
                cout << "\nplease enter item name\n";
                cin >> stock[i][j];
            }

            if (j == 2) {
                cout << "\nplease enter item cost price\n";
                cin >> stock[i][j];
            }

            if (j == 3) {
                cout << "\nplease enter item sell price\n";
                cin >> stock[i][j];
            }

            if (j == 4) {
                cout << "\nplease enter item stock ammount\n";
                cin >> stock[i][j];
            }

            if (j == 5) {
                cout << "\nplease enter item re-order level\n";
                cin >> stock[i][j];
                
            }

            if (j == 6) {
                float profit = stof(stock[i][3]) - stof(stock[i][2]);
                stock[i][6] = to_string(profit);
            }
            
        }
       
    }

    // --- calls function to output
    stock_output(stock);

    
}

