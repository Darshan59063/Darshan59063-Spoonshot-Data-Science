#include <iostream>
#include <vector>
using namespace std;
 
long* productExceptSelf(vector<int> v, int n)
{
    long prod = 1;
    long flag = 0;
 
    
    for (int i = 0; i < n; i++) {
        
        if (v[i] == 0)
            flag++;
        else
            prod *= v[i];
    }
 
    
    long* arr = new long[n];
 
    for (int i = 0; i < n; i++) {
 
       
        if (flag > 1)
            arr[i] = 0;
 
        
        else if (flag == 0)
            arr[i] = (prod / v[i]);
 
        
        else if (flag == 1 && v[i] != 0)
            arr[i] = 0;
 
       
        else
            arr[i] = prod;
    }
    return arr;
}
 

int main()
{
    int n ;
    cin>>n;
    vector<int> v(n);

    for(int i =0; i<n; i++)
      {
        cin>>v[i];
      }
 
    long* ans;
    ans = productExceptSelf(v, n);
 
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}