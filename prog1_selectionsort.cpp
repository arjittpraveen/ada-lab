#include <iostream>
#include <ctime>
using namespace std;

void selectionSort(int arr[], int size){

    int minIndex;

    for (int i = 0; i < size - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void generateRandomArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = rand() % 1000;
    }
}

int main(){

    int start = 5000;
    int end = 50000;
    int step = 5000;

    for (int size = start; size <= end; size += step){

        int arr[size];
        generateRandomArray(arr, size);

        // measure execution time
        clock_t t1 = clock();
        selectionSort(arr, size);
        clock_t t2 = clock();

        double time = (double)(t2 - t1)/CLOCKS_PER_SEC;
        cout << "n = " << size << " Time: " << time << endl;
    }

    return 0;
}