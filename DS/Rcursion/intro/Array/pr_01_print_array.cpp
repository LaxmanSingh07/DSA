#include <iostream>
using namespace std;

void printArray(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, n, i + 1);
}

void reverse_print(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    reverse_print(arr, n, i + 1);
    cout << arr[i] << " ";
}
void second_reverse_method(int arr[], int n)
{
    if (n <= 0)
    {
        cout << endl;
        return;
    }
    cout << arr[n - 1] << " ";
    second_reverse_method(arr, n - 1);
}
void take_input(int arr[], int n, int i)
{
    if (i == n)
    {
        cout << endl;
        return;
    }
    cout << "Enter the value of " << i + 1 << "th index" << endl;
    cin >> arr[i];
    take_input(arr, n, i + 1);
}
int main()
{
    int n;
    printf("Enter the value of n");
    cin >> n;
    int arr[n];
    take_input(arr, n, 0);
    cout << "LEFT TO RIGHT" << endl;
    printArray(arr, n, 0);
    cout<<endl;
    cout << "Right to left" << endl;
    reverse_print(arr, n, 0);
    cout<<endl;
    cout << "another method" << endl;
    second_reverse_method(arr, n);
    return 0;
}