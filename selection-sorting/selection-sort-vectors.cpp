#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void display_arr(vector<int> arr)
{
    for(auto i = arr.begin();i != arr.end();i++)
        cout<<*i<<" ";
}

vector<int> selection_sort(vector<int> arr)
{
    int n = arr.size();
    for(auto i = arr.begin();i != arr.end()-2; i++)
    {
        auto j = i+1;
        auto min = i;
        while(j != arr.end()-1)
        {
            
            if(*min>*j)
            {
                min = j;
            }
            j++;
        }
        iter_swap(min,i);
      
    }
    return arr;
}

int main()
{
    vector<int> arr = {100,23,43,12,16};
    arr = selection_sort(arr);
    display_arr(arr);
}
