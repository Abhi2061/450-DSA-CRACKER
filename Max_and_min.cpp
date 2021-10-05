// Problem link: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

pair<int,int> max_and_min(vector<int>& A, int i, int j)
{
    if(i == j)
    return {A[i],A[i]};

    else if(j-i == 1)
    return {max(A[i],A[j]), min(A[i],A[j])};

    else
    {
        pair<int,int> M1, M2;

        int m = (i+j)/2;
        
        M1 = max_and_min(A, i, m);
        M2 = max_and_min(A, m+1, j);

        return {max(M1.first, M2.first), min(M1.second, M2.second)};
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;

        vector<int> A(N);

        for(int &it : A)
        cin>>it;

        pair<int, int> ans = max_and_min(A, 0, N-1);

        cout<<ans.first<<" "<<ans.second<<ed;
    }
    return 0;
}