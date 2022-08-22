#include <iostream>
using namespace std;
void display(int a[],int size);
//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//selection sort
void selectionSort(int arr[], int n)
{
    int i,min_idx,j;
    for(i=0;i<n-1;i++)
    {
    	min_idx=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(arr[j]<arr[min_idx]);
    		min_idx=j;
		}
		if(min_idx!=i)
		swap(&arr[i], &arr[min_idx]);
	}
}
int main(void)
{
    int arr[6] = { 5,4,10,40,1 };
    //sort the elements of an array
    selectionSort(arr,5);
	//display array
	display(arr,5);
    return 0;
}
void display(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }	
    cout<<endl;
}

