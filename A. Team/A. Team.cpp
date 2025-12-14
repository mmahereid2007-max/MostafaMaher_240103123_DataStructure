// A. Team.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int proleamN;
    cin >> proleamN;

    vector<vector<int>> pCases(proleamN, vector<int>(3));
    vector<int> counts(proleamN, 0);


    for (int i = 0; i < pCases.size(); ++i) {
        for (int x = 0; x < pCases[i].size(); ++x) {
            cin >> pCases[i][x];   // لازم 0 أو 1
        }
    }

    for (int i = 0; i < pCases.size(); ++i) {
        for (int x = 0; x < pCases[i].size(); ++x) {
            if (pCases[i][x] == 1) {
                counts[i]++;
            }
        }
    }
    int solved = 0;
    for (int i = 0; i < counts.size(); ++i) {
        if (counts[i] >= 2) {
            solved++;
        }
    }

    cout << solved;
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
