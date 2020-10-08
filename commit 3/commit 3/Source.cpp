#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>
using namespace std;

int main()
{
    string line;
    string tfind;
    ifstream input;
    ofstream output;
    string substr;
    int k = 0;
    int index;
    cout << "Enter the substr you want to find in the file: ";
    cin >> substr;
    output.open("output.txt");
    input.open("log.txt");
    cout << "----------------------------------------Reading file \"log.txt\"----------------------------------------" << endl << endl;
    if (input.is_open())
    {
        while (!input.eof())
        {
            getline(input, line);
            k++;
            cout << "----------------------------------------Reading " << k << " line----------------------------------------" << endl << endl;
            index = line.find(substr);
            if (index != -1) {
                cout << "----------------------------------------Substring \"" << substr << "\" founded----------------------------------------" << endl << endl;
                output << line << endl;
            }
            else
                cout << "----------------------------------------Substring \"" << substr << "\" not founded----------------------------------------" << endl << endl;
        }

    }
    input.close();
    output.close();
}