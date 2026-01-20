#include <iostream>
using namespace std;
#include <vector>

int BubbleSort( vector<int>&num,int n){
     
    for(int i = 0; i < (n-1) ; i++){
        bool isSwap = false;
        for(int j = 0 ; j < (n-i-1) ; j++){
            
            if(num[j] > num[j+1]){
                
                swap(num[j] , num[j+1]);
                isSwap = true;

            };


        }
        if(!isSwap){
            return -1;
        }
        
        
    }
    
    
}

int PrintArray(vector <int> &num , int n){
    for(int i = 0; i < n; i++){
        cout << num[i] << endl;
    }
    cout << endl;

}



int main(){
    vector<int> a = {6,3,4,9,1};
    BubbleSort(a,5);
    PrintArray(a,5);

    return 0;
    
}
