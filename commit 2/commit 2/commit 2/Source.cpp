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
    string substr;
    int index;
    cout << "Enter the substr you want to find in the file: ";
    cin >> substr;
    input.open("log.txt");
    if (input.is_open())
    {
        while (!input.eof())
        {
            getline(input, line);
            index = line.find(substr);
            if (index != -1) {
                //если индекс не равен -1 то это нужная нам строка
            }

        }
        input.close();
    }

}