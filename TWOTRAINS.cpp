#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,sum=0,diff=0;
	    cin >> n;
	    int arr[n-1],temp[n-1];
	    arr[0] = 0; 
	    temp[0] = 0;
	    for(int i=1;i<n;i++)
	    {
	       cin >> arr[i];
	       sum = arr[i] + sum;
	       temp[i] = arr[i];
	       arr[i] = sum;
	    }
	    int i;
        for(i=0;i<n;i++)
        {
           diff = arr[i+1] - temp[i];
           if(diff > 0)
                temp[i+1] = temp[i] + temp[i+1] + diff;
            else
                temp[i+1] = temp[i] + temp[i+1];
        }
        cout << temp[n-1] << endl;
	}
	return 0;
}