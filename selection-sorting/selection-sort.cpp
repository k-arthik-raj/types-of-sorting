//Selection sort
#include<iostream>
#include<climits>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int j=i+1,min=i,temp;
        while(j<n)
        {
            if(arr[min]>arr[j])
                min=j;
                j++;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void display_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int n=5,arr[]={100,34,50,59,9};
    selection_sort(arr,n);
    cout<<"Sorted array:\n";
    display_arr(arr,n);
    return 0;
}
