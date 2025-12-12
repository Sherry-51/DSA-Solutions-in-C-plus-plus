#include<iostream>
using namespace std;
void input(int arr[][2]);
void product(int arr1[][2],int arr2[][2], int arr3[][2]);
void output(int arr3[][2]);
int main()
{
    int arr1[2][2], arr2[2][2], arr3[2][2]={{0,0},{0,0}};
    input(arr1);
    input(arr2);
    product(arr1,arr2,arr3);
    output(arr3);
    return 0;
}
void input(int arr[][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
}
void product(int arr1[][2],int arr2[][2], int arr3[][2])
{
    int temp=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                temp=arr1[i][k]*arr2[k][j];
                arr3[i][j]+=temp;
            }
        }
    }
}
void output(int arr3[][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
    cout<<endl;    
    }
}