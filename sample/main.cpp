#include "generator.h"
#include<bits/stdc++.h>
using namespace std;

int nTests, testType;
string pName;

int main(){
    cout << "Enter Problem Name: ";
    cin >> pName;
    cout << "\n";

    cout << "Enter Number of Tests: ";
    cin >> nTests;
    cout << "\n";

    do {
        cout << "Enter Problem Type (1 for CMS, 2 for Themis): ";
        cin >> testType;
        if (testType == 1 || testType == 2) break;
        cout << "Invalid Option, Please Retry!\n\n";
    } while (testType != 1 && testType != 2);

    for(int _ = 1; _ <= nTests; _++){
        string id;          // Index of Current Test
        stringstream ss;
        ss << _;
        ss >> id;
        cout << "Making test: " << id << "\n";
        string input, output, program = pName;

        if (testType == 1) {
            system(("mkdir " + pName + "\\").c_str());
            input  = pName + "\\" + pName + "_" + id + ".in";
            output = pName + "\\" + pName + "_" + id + ".out";
        }

        else {
            if (_ < 10) {
                system(("mkdir " + pName + "\\Test0" + id).c_str());
                input  = pName + "\\Test0" + id + '\\' + pName + ".INP";
                output = pName + "\\Test0" + id + '\\' + pName + ".OUT";
            }
            else {
                system(("mkdir " + pName + "\\Test" + id).c_str());
                input  = pName + "\\Test" + id + '\\' + pName + ".INP";
                output = pName + "\\Test" + id + '\\' + pName + ".OUT";
            }
        }
            
        ofstream inputFile(input.c_str());

        // Create Input
        makeTest(inputFile, _);
        inputFile.close();

        // Create Output
        system(("solution.exe < " + input + " > " + output).c_str());
    }
}