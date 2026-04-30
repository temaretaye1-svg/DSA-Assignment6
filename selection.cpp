#include <iostream>
using namespace std;

//selection sort
void selectionsort(int dataelement[], int n){
    for (int i = 0; i < n - 1; i++){
        int min_index = i;
        for (int j = i + 1; j < n; j++){
            if (dataelement[j]<dataelement[min_index]){
                min_index = j;
            }
        }
        swap(dataelement[i], dataelement[min_index]);
    }
}


int main(){
    int dataelement[6] = {80, 8, 19, 7, 21, 44};
         for (int i=0; i < 6; i++){
        cout << dataelement[i]<< " ";
    }
    selectionsort(dataelement, 6);
       cout << endl;
    for (int i = 0; i < 6; i++){
        cout << dataelement[i]<< " ";
    }
    return 0;
}