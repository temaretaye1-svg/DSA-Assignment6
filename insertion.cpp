#include <iostream>
using namespace std;

// insertion sort
void insertionsort(int dataelement[], int n){
    for (int i = 1; i < n; i++){
        int key = dataelement[i];
        int j = i - 1; // fixed

        while (j >= 0 && dataelement[j] > key){
            dataelement[j + 1] = dataelement[j];
            --j;
        }
        dataelement[j + 1] = key;
    }
}

int main(){
    int dataelement[6] = {32, 10, 12, 7, 21, 50};

    insertionsort(dataelement, 6);

    for (int i = 0; i < 6; i++){
        cout << dataelement[i] << " ";
    }

    return 0;
}