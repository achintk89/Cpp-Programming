//updation of no. in given difference array within given range 
#include <iostream>
using namespace std;

void diff(int a[], int n)
{
  int d[n];
  d[0] = a[0];
  for (int i = 1; i < n; i++)
    d[i] = a[i] - a[i - 1];
  for (int i = 0; i < n; i++)
    a[i] = d[i];
}
void update(int a[], int l, int r, int x)
{
  for (int i = l; i <= r; i++)
    a[i] = a[i] + x;
}
void printarray(int a[], int n)
{
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
}
int main()
{
  int l, r, x;

  int n;
  cout << "Enter size of array" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter elements in array" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  diff(arr, n);
  cout << "Enter your range" << endl;
  cin >> l >> r;
  cout << "Enter the no. you want to update" << endl;
  cin >> x;
  update(arr, l, r, x);
  printarray(arr, n);
  return 0;
}