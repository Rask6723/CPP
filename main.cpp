#include <bits/stdc++.h>

using namespace std;

void f(int arr[],int ind,vector<int> &s,int n)
{
    if(ind==n)
    {
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i]<<" ";
        }
        if(s.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return ;
    }
    f(arr,ind+1,s,n);

    s.push_back(arr[ind]);
    f(arr,ind+1,s,n);
    s.pop_back();


}

// Driver Code
int main()
{
    int arr[]={3,1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> vec;


    f(arr,0, vec,n);

    return 0;
}
