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

void insertionSort(int arr[], int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int key=arr[i];
        j=i-1;
        while(j>=0&&key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
}
int main(void)
{
    int arr[6] = { 5,4,10,40,1 };
    //sort the elements of an array
    insertionSort(arr,5);
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

