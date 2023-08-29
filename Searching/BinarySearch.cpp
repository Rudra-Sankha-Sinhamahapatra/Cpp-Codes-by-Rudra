#include <iostream>

int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; // Element not found
}

int main() {
    int n;
    std::cout<<"Enter the size of the array";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the Elements of the array";
    for ( int i = 0; i < n; i++)
    {
       std::cin>>arr[i];
    }
    

    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    std::cout << "Enter the target value: ";
    std::cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
