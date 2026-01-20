#include <iostream>
#include <vector>
using namespace std;

int InsertionSort(vector<int>&arr, int n){
    for (int i = 1; i < n; i++){
        int curr = arr[i];
        for (int j = i - 1; j >= 0; j--){
            if (arr[j] > curr){
                arr[j + 1] = arr[j];
                arr[j] = curr;
            }
            else{
                break;
            }
        }
    }
}

int PrintArray(const vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a = {6,3,4,9,1};
    InsertionSort(a,5);
    PrintArray(a,5);

    return 0;
    
}