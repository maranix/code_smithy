#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> myArray = {1,2,3,4,5};

    for (int i = 0; i < myArray.size(); i++) {
        cout<<myArray[i]<<endl;
    }

    return 0;
}