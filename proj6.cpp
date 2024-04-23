#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

#define MAX_VALUE = 30

void bubbleSort(int arr[], int n){
    //int i, j;
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void selectionSort(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}


void fill_arr(int fthir[], int sthir[]){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    for(int i = 0; i < 15; i++){
        int random_number = dis(gen);
        fthir[i] = random_number;
    }
    for(int i = 0; i < 15; i++){
        int random_number = dis(gen);
        sthir[i] = random_number;
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int fthir [30];
    int sthir [30];
    int count = 15;

    fill_arr(fthir, sthir);
    
    

    printArray(fthir, count);
    bubbleSort(fthir, count);
    printArray(fthir, count);

    cout << endl;

    printArray(sthir, count);
    selectionSort(sthir, count);

    

}