#include <iostream>
#include <vector>

int findFirstOccurrence(std::vector<int>& arr, int x) {
    int firstIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            firstIndex = i;
            break;
        }
    }
    return firstIndex;
}

int main() {
    std::vector<int> arr;
    int n, x;
    
  // std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

  //  std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        arr.push_back(element);
    }

   // std::cout << "Enter the element to find the first occurrence of: ";
    std::cin >> x;

    int result = findFirstOccurrence(arr, x);
    if (result == -1) {
      std::cout <<"-1" << std::endl;
    } else {
        std::cout<<result << std::endl;
    }

    return 0;
}