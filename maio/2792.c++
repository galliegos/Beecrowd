#include <iostream> 
  
using namespace std; 
const int MAX = 500001;
int vet[MAX];
int freq[MAX];
  

int getSum(int BITree[], int index) 
{ 
    int sum = 0; 
  
  
    index = index + 1; 
  
   
    while (index>0) 
    { 
       
        sum += BITree[index]; 
  
       
        index -= index & (-index); 
    } 
    return sum; 
} 
  

void updateBIT(int BITree[], int n, int index, int val) 
{ 
   
    index = index + 1; 
  
    
    while (index <= n) 
    { 
    
    BITree[index] += val; 
  
   
    index += index & (-index); 
    } 
} 
  

int *constructBITree(int arr[], int n) 
{ 
   
    int *BITree = new int[n+1]; 
    for (int i=1; i<=n; i++) 
        BITree[i] = 0; 
  
   
    for (int i=0; i<n; i++) 
        updateBIT(BITree, n, i, arr[i]); 
  
    
    return BITree; 
} 
  
  
// Driver program to test above functions 
int main() 
{ 
int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
	
    	cin>>vet[i];
    	freq[i]=1;
    }
   
    /* for(int i=0;i<n;i++)
    	cout<<freq[i]<<endl;*/

    
    int *BITree = constructBITree(freq, n); 
    /*cout << "Sum of elements in arr[0..5] is "
        << getSum(BITree, n-1); */
    for(int i=0;i<n;i++){
    	
    	if(i<n-1)
    		cout<<getSum(BITree,vet[i]-1)<<" ";
    	else
    		cout<<getSum(BITree,vet[i]-1);
    	updateBIT(BITree,n,vet[i]-1,-1);
	}
	cout<<endl;
  
    // Let use test the update operation 
    
   /* updateBIT(BITree, n, 3, 6); //Update BIT for above change in arr[] 
  
    cout << "\nSum of elements in arr[0..5] after update is "
        << getSum(BITree, 5);*/ 
  
    return 0; 
} 