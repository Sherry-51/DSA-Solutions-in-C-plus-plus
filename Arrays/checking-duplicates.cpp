#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findDuplicates(vector<int>& arr)
{
    vector<int> arr1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
            {
                if(arr1.empty() || arr1.back()!=arr[i])
                {
                    arr1.push_back(arr[i]);
                }
                
            }
        }
    return arr1;
}
int main()
{
	vector<int> vect={1,2,3,5,24,6,33,66,3,5,2,6,3,6,5,44,6};
	vector<int> solution=findDuplicates(vect);
	for(int i:solution)
	{
		cout<<i<<" ";
	}
}

