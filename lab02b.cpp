#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    double *array;

    array = new double[4];

    int size = 0;
    int old_size = 4;

    cout << "Enter values of this array (all negative values are ignored) type -1 to end the list : " << endl;

    double input;

    while (1)
    {
        if (size != old_size)
        {
            cin >> input;

            if (input > 0)
            {
                array[size] = input;
            }
            else if (input == -1)
            {
                break;
            }
        }

        else if (size == old_size)
        {
            double temp[old_size];
            copy(temp, temp + old_size, array);

            delete[] array;

            array = new double[old_size * 2];

            copy(array, array + old_size, temp);

            old_size *= 2;

            cin >> input;

            if (input > 0)
            {
                array[size] = input;
            }
            else if (input == -1)
            {
                break;
            }
        }

        size++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    delete[] array;

    return 0;
}
