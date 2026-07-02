#include <iostream>
using namespace std;


int binarySearch(int arr[], int size, int item)
{
    int m_index, position = -1, f_index = 0, l_index = size - 1;

    while (f_index <= l_index)
    {
        m_index = (f_index + l_index) / 2;

        if (item < arr[m_index])
        {
            l_index = m_index - 1;
        }
        else if (item > arr[m_index])
        {
            f_index = m_index + 1;
        }
        else
        {
            position = m_index;
            break;
        }
    }

    return position;
}

int main()
{
    int size, item;
    cout<<"output: "<<endl;

    cout << "Enter size: ";
    cin >> size;

    int arr[size];

    cout << "Enter  elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"output: "<<endl;

    cout << "Enter item to search: ";
    cin >> item;

    int result = binarySearch(arr, size, item);

    if (result != -1)
        cout << "Item found at index: " << result;
    else
        cout << "Item not found";

    return 0;
}

