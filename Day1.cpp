/* QUESTION:

Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.

Note: If the second largest element does not exist, return -1.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.

Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 there is no second largest element.*/

#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int getSecondLargest(vector<int>& arr) 
    {
        int largest = -1, second = -1; 
        for (int num : arr) 
        {
            if (num > largest) 
            { 
                second = largest;
                largest = num;
            } 
            else if (num > second && num != largest) 
            { 
                second = num;
            }
        }

        return second; 
    }
};

int main() 
{
    vector<int> arr = {12, 35, 1, 10, 34, 1}; 
    Solution sol;
    cout << sol.getSecondLargest(arr) << endl; 
    return 0;
}
