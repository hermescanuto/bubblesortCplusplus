#include <iostream>
#include <iterator>
using namespace std;

void bubbleSort(int arr[],int size )
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)

        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] =  arr[j + 1];
                arr[j + 1] = temp;
            }

}

// Function to print an array
void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int size =  sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,size);
    cout << "Sorted array: \n";
    printArray(arr,size);
    return 0;
}