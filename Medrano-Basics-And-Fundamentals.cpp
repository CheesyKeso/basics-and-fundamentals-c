#include <iostream>
using namespace std;

int main(){
    int size = 10;

    int element1[size], element2[size], merge[size*2], temp;

    cout << "Enter 10 elements for first array: \n";

    for (int i = 0; i < size; i++){

        cout << "Element # " << i + 1 << ": ";

        cin >>element1[i];
    }

    cout << "Enter 10 elements for second array: \n";

    for (int i = 0; i < size; i++){

        cout << "Element # " << i + 1 << ": ";

        cin >> element2[i];
    }

    for(int i = 0; i < size; i++){
        merge[i] = element1[i];
        merge[i + size] = element2[i];
 }

    for (int i = 0; i < size*2; i++){
        for (int j = i + 1; j < size*2; j++){
            if(merge[i] < merge[j]) {
                temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }

    cout << "\nMerged array in descending order: ";

    for (int i = 0; i < size*2; i++){
        cout << merge[i] <<  " ";
    }
    
    return 0;
}