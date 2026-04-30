#include <iostream>
using namespace std;

//swap values
void swap(int &x, int &y){
    int tmp;
    tmp =x;
    x=y;
    y=tmp;
}

//simple sort
void simplesort(int dataelement[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (dataelement[i]> dataelement[j]){
                swap(dataelement[i],dataelement[j]);
            }
        }
    }
}

int main(){
    int dataelement[6] = {31, 8, 19, 10, 21, 50};
         for (int i=0; i < 6; i++){
        cout << dataelement[i]<< " ";
         }
   simplesort(dataelement, 6);
        cout << endl;
    for (int i=0; i <6; i++){
        cout << dataelement[i]<< " ";
    }
    return 0;
}