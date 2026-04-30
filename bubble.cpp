#include <iostream>
using namespace std;

//swap values
void swap(int &x, int &y){
    int tmp;
    tmp =x;
    x=y;
    y=tmp;
}

// bubble sort
void bubblesort( int dataelement[], int n){
    for (int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            if (dataelement[j] < dataelement[j-1]){
                swap(dataelement[j], dataelement[j-1]);
            }
        }

    }
}

int main(){
    int dataelement[6]={37, 8, 19, 16, 21, 50};
    for (int i=0; i < 6; i++){
        cout << dataelement[i]<< " ";
    }
      bubblesort(dataelement, 6);
        cout << endl;
    for (int i=0; i <6; i++){
        cout << dataelement[i]<< " ";
    }
    

return 0;

}