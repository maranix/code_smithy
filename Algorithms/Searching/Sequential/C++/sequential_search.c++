#include <iostream>

using namespace std;

int main() {
    int arr[5], search;
    bool found;

    cout<<"Enter 5 numbers to store in the array "<<endl;
    
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    cout<<"Enter the number to search for in the array "<<endl;
    cin>>search;

    for(int i=0; i<5; i++){
        if(arr[i]==search){
            found=true;
            cout<<"Found at index "<<i<<endl;
        }
    }    

    if(!found){
        cout<<"Number not found in array "<<endl;
    }

    return 0;
}