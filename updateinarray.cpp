#include <iostream>
#include <vector>
using namespace std;
void sort(int d[], int n)
{
    vector<bool> visited(n, false);
    int index = 0, count, small, x = 0, largest;
    vector<int> a(n, 0);
    for (int i = 0; i < n - 1; i++) //to find largest in given array so that we can compare with other elements
    {
        if (d[i] < d[i + 1])
            largest = d[i + 1];
    }
    while (index != n) //we willcompare every element with largest value
    {
        count = 0;
        small = largest;
        for (int i = 0; i < n; i++)
        {
            if ((small >= d[i]) && (visited[i] != true)) //if we find any value smaller than value in small variable we will update small variable
            {
                small = d[i];
                count = i; //set count to new updated vlue index no.
            }
        }
        index++;
        a[count] = x;
        x++;
        visited[count] = true; //set visited of index true
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout<<"Enter elements in array";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    sort(arr, n);
    return 0;
}