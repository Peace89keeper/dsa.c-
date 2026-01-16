// Brute force
#include <iostream>
#include <vector>
using namespace std;

void Sort(vector<int> &arr, int n)
{
    n = arr.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int index = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[index++] = 0;
    };
    for (int i = 0; i < count1; i++)
    {
        arr[index++] = 1;
    };
    for (int i = 0; i < count2; i++)
    {
        arr[index++] = 2;
    };
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 0, 1, 2, 0, 1, 1, 0};
    int n = arr.size();

    cout << "Original array: ";
    printArray(arr);

    Sort(arr, n);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}