#include <string>
#include <iostream>

using namespace std;

std::string convertToString(char *a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++)
    {
        s = s + a[i];
    }
    return s;
}

int main(int argc, char *argv[])
{
    int size = argc - 1;

    string *args;

    cout << "The address of args when declaring is: " << args << endl;

    args = new string[size];

    cout << "The address of args when allocating dynamic array is: " << args << endl;

    for (int i = 0; i < size; i++)
    {
        args[i] = argv[i + 1];
    }

    cout << "The address of args when filling the array is: " << args << endl;

    for (int i = 0; i < size; i++)
    {
        cout << args[i] << endl;
    }

    delete[] args;

    cout << "The address of args when deleting the array is: " << args << endl;

    args = NULL;

    cout << "The address of args when assigning it to a NULL is: " << args << endl;

    return 0;
}