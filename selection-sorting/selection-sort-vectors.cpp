#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void selection_sort(vector<int> arr)
{
    int n = arr.size();
    for(auto i = arr.begin();i != arr.end()-1; i++)
    {
        auto j = arr.at(i)+1,min = arr.at(i);
        while(j != arr.end())
        {
            if(*min>*j)
            {
                min = arr.at(j);
            }
        }
        swap(arr.at(i),arr.at(min));
    }
}
void display_arr(vector<int> arr)
{
    int n = arr.size();
    for(auto i = arr.begin();i != arr.end();i++)
        cout<<*i<<" ";
}
int main()
{
    vector<int> arr = {100,23,43,12,16};
    selection_sort(arr);
    display_arr(arr);
}
