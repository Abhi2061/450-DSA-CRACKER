// Problem link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
	
    while(T--)
    {
        int N;
        cin>>N;
        
        vector<int> A(N);
        
        for(int &it : A)
        cin>>it;
        
        int low = 0, mid = 0, high = N-1;
        
        while(mid <= high)
        {
            if(A[mid] == 0)
            {
                swap(A[low], A[mid]);                
                mid++;
                low++;
            }
            else if(A[mid] == 2)
            {
                swap(A[mid], A[high]);
                high--;
            }
            else
            mid++;
        }
        
        for(int it : A)
        cout<<it<<" ";
        
        cout<<endl;
    }
	return 0;
}
