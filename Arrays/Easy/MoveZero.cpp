#include <iostream>
using namespace std;

int main()
{

    int arr[10], size, i, j;
    cout << "Enter the size of the array";
    cin >> size;

    cout << "Enter the numbers";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The Numbers are";
    for (i = 0; i < size; i++)
    {
        for (j = i + i; j < size; j++)
        {
            if (arr[i] == 0)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        cout << "  " << arr[i];
    }
}
