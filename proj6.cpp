#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

#define MAX_VALUE = 30

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

int main(){
    int fthir [30];
    int sthir [30];

    fill_arr(fthir, sthir);
    
    for(int i = 0; i < 15, i++;){
        cout << fthir[i] << endl;
    }

    for(int i = 0; i < 15, i++;){
        cout << sthir[i] << endl;
    }

}