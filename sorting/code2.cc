#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void SelectionSort(vector <int>& arr , int n){
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
}

void PrintArray(const vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Print original array
    cout << "Original array:" << endl;
    PrintArray(numbers, numbers.size());

    // Sort the array using selection sort
    

    // Print sorted array
    cout << "Sorted array:" << endl;
    SelectionSort(numbers, numbers.size());
    PrintArray(numbers, numbers.size());

    return 0;
}