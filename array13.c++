//making sum of even index and odd index same by removing 
//element that is sufficient and returning it's index
#include <bits/stdc++.h>
using namespace std;
int cntIndexesToMakeBalance(vector<int>planets)
{
    vector<int>::iterator it;
    vector<int>myvector;
	for (int i = 0; i < planets.size(); i++) {
        
        myvector=planets;
        it = myvector.begin()+i;
        myvector.erase(it);

        int sumeven = 0;

	    int sumodd = 0;

        for(int j=0;j<myvector.size();j++)
        {
            if(j%2==0) 
                sumeven+=myvector[j];
            else
                sumodd+=myvector[j];
        }
        if(sumeven==sumodd)
            return i+1;

	}
    return -1;

	
}

// Driver Code
int main()
{

	vector<int>arr= {2,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << cntIndexesToMakeBalance(arr);
	return 0;
}
