#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 100001;

int arr[MAX];
int resp=0;

void merge(pair<int, int> a[], int start,
                int mid, int end)
{
    pair<int, int> f[mid - start + 1],
                   s[end - mid];
                    
    int n = mid - start + 1;
    int m = end - mid;
     
    for(int i = start; i <= mid; i++)
        f[i - start] = a[i];
    for(int i = mid + 1; i <= end; i++)
        s[i - mid - 1] = a[i];
         
    int i = 0, j = 0, k = start;
    int cont = 0;
 
    
    while(i < n && j < m)
    {
        if (f[i].second <= s[j].second)
        {
        	resp+=cont;
            
            a[k++] = f[i++];
        }
        else
        {
            cont++;
            a[k++] = s[j++];
        }
    }
 
    
    while(i < n)
    {
    	resp+=cont;
        
        a[k++] = f[i++];
    }
 
   
    while(j < m)
    {
        a[k++] = s[j++];
    }
}
 

void mergesort(pair<int, int> item[],
                    int low, int high)
{
    if (low >= high)
        return;
         
    int mid = (low + high) / 2;
    mergesort(item, low, mid);
    mergesort(item, mid + 1, high);
    merge(item, low, mid, high);
}
 
int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    	cin>>arr[i];
                    
    
    pair<int, int> a[n];
   
     
    for(int i = 0; i < n; i++)
    {
        a[i].second = arr[i];
        a[i].first = i;
    }
     
    mergesort(a, 0, n - 1);
    cout<<resp<<endl;
     
    return 0; 
}