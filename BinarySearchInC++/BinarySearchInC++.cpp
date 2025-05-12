// BinarySearchInC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

//The following method is from geeksForGeeks at the following link:https://www.geeksforgeeks.org/how-to-sort-an-array-in-cpp/

int* selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    return arr;
}

int binarySearch(int arr[], int left, int right, int key) {
    //If right is >= 1 do the following
        //Create a middle value that stores left + (right - left)/2
        //check to see if left is equal to right, if so
            //check to see if arr[middle] !equal key
                //return -1
        //check to see if arr[middle] == key
            //return middle
        //else if (arr[middle] > key
            //return binarySearch (arr, left, middle - 1, key)
        //return binarySearch(arr, left + 1, right, key)
    //return -1

    if (right >= 1) {
        int middle = left + (right - left) / 2;
        if (left == right) {
            if (arr[middle] != key) {
                return -1;
            }
        }
        if (arr[middle] == key) {
            return middle;
        }
        else if (arr[middle] > key) {
            return binarySearch(arr, left, middle - 1, key);
        }
        return binarySearch(arr, left + 1, right, key);
    }
    return -1;
}

int main(){
    int number;
    cout << "What number would you like to see if its in a random 1-50 array(with duplicates)\n";
    cin >> number;
    int randArr[50];

    srand(time(0));  //Seed random number generator
    int randNum;
    for (int i = 0; i < 50; i++) {
        randNum = rand() % 50 + 1;
        randArr[i] = randNum;
    }
    int* arr = selectionSort(randArr, 50);
    for (int i = 0; i < 50; i++) {
        cout << arr[i] << ", ";
    }
    int answer = binarySearch(arr, 0, 50, number);
    cout << endl << "Answer: " << answer;
}