#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>
using namespace std;


void LogParser(string inputName, string outputName, string substr);

int main()
{
    string inputName = "log.txt";
    string outputName = "output.txt";
    string substr = "Error";
    LogParser(inputName, outputName, substr);
    return 0;
}

void LogParser(string inputName, string outputName, string substr)
{
    string line;
    string tfind;
    ifstream input;
    ofstream output;
    
    int k = 0;
    int index;
    output.open(outputName);
    input.open(inputName);
    cout << "Reading file \"log.txt\"" << endl << endl;
    if (input.is_open())
    {
        while (!input.eof())
        {
            getline(input, line);
            k++;
            cout << "Reading " << k << " line" << endl << endl;
            index = line.find(substr);
            if (index != -1) {
                cout << "Substring \"" << substr << "\" founded" << endl << endl;
                output << line << endl;
            }
        }
    }
    input.close();
    output.close();
    return;
}


