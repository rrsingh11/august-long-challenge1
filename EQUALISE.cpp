#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
        int a,b,flag = 0;
        cin >> a >> b;
        int x = min(a,b);
        int y = max(a,b);
        while(x <= y)
        {
            if(x == y)  
                flag = 1;
            x*=2;
        }
        if(flag == 1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
        
	}
	return 0;
}
