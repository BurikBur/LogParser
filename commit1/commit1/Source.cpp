#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>
using namespace std;

int main()
{
    string line;
    ifstream input;
    int k = 0;
    int index;
    input.open("log.txt");
    if (input.is_open())
    {
        while (!input.eof())
        {
            getline(input, line);
            cout << line << endl;
        }

    }
    input.close();
}

