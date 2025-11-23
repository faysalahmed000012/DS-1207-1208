// Binary Search Algorithm
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int binarySearch(const vector<int>& vec, int target){
    int left = 0;
    int right = vec.size() - 1; 

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(vec[mid] == target){  // found the element, return.
            return mid;
        }else if(vec[mid] < target){ // element is not on the left of the mid, cut the left side.
            left = mid + 1;
        }else { // element if not on the right side of the mid, cut the right side.
            right = mid - 1;
        }

    }

    return -1; // Not Found;
}


int main(){

    int n;
   cout << "Binary Search : Enter Number of Elements you want in the Array : ";
   cin >> n;

   vector<int> nums(n);

   cout << "Enter the Elements : ";
   for(int& num : nums ){
    cin >> num;
   }
   
   sort(nums.begin(),nums.end());

   cout << "Sorted List : ";
   for(int num : nums){
    cout << num << " ";
   }
   cout << endl;

   int target;
   cout << "Write the number you want to search : ";
   cin >> target;

   int index = binarySearch(nums,target);
   if(index != -1){
    cout << "Number Fond at position " << index + 1 << " of the sorted array." << endl;

   }else{
    cout << "Not Found";
   }

    return 0;
}