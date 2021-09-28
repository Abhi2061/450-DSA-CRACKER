// Problem link : https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1

    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> S;
        
        for(int i=l; i<=r; i++)
        {
            S.push(arr[i]);
            
            if(S.size() > k)
            S.pop();
        }
        
        return S.top();
    }
};
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
