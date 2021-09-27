#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

string reverseWord(string str){

  string ans = str;
  int l = str.length();
  
  for(int i=0; i<l/2; i++)
  {
      char temp = ans[i];
      ans[i] = ans[l-i-1];
      ans[l-i-1] = temp;
  }
  
  return ans;
}
