/*3 Popular sorting algorithms
     Simple sorts
        >> Insertion sort
        >> Selection sort
     Efficient sorts
        >> Merge sort
        >> Heapsort
        >> Quicksort
     Bubble sort and variants
        >> Bubble sort
        >> Shell sort
        >> Comb sort
     Distribution sort
        >> Counting sort
        >> Bucket sort
        >> Radix sort
    This list collected from Wikipedia
*/

#include<iostream>

using namespace std;
const int Index = 2000;
int n;
int arr[Index];
class node
{
private :
    int data;
    node* left ,*right;
public:
    node* SetValu (int data)
    {
        node *temp =new node();
        temp->data=data;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }
}*root=NULL;
void Print()
{
    cout<<endl;
    for(int i=0; i<n; i++) //use sizeof to find out the length of the array
        cout<<arr[i]<<" ";
    cout<<endl;
}
void ForBoubleSort()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
        }
    }

}

void ForSelcetionSort()
{
    int Min;
    for(int i=0; i<n; i++)
    {
        Min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
                Min=j;
        }
        swap(arr[Min],arr[i]);
    }
}

void ForInsertionSort()
{
    int key,i,j;
    for ( i=0; i<n; i++)
    {
        key=arr[i];
        for( j=i-1; j!=-1&&arr[j]>key; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;

    }

}

void ForHeapSort()
{

}

void ForQuickSort(int arr[] , int left, int right)
{
    int pivot = arr[right];
    int PartitionIndex = left;
    if(left>right) return ;
    for(int i=left; i<right; i++)
    {
        if(arr[i]<=pivot)
            swap(arr[i],arr[PartitionIndex++]);
    }
    swap(arr[right],arr[PartitionIndex]);

    ForQuickSort( arr ,  left , PartitionIndex-1);
    ForQuickSort( arr ,  PartitionIndex+1,right);
}

void ForMarchSort()
{
}

void ForShellSort()
{

}

void ForComboSort()
{
}

void ForCountingSort()
{

}


void ForBacketSort()
{

}

void ForRadixSort()
{

}

void AllSorting ()
{
    cout<<"..............Welcome to Sorting Algorithm..................."<<endl<<endl;;
    int t;
Again :
    cout<<"For Bubble Sort Press     1"<<endl;
    cout<<"For Selection Sort Press  2"<<endl;
    cout<<"For Insertion sort Press  3"<<endl;
    cout<<"For Heap Sort Press       4"<<endl;
    cout<<"For Quick Sort Press      5"<<endl;
    cout<<"For March Sort Press      6"<<endl;
    cout<<"For Shell Sort Press      7"<<endl;
    cout<<"For Comb Sort Press       8"<<endl;
    cout<<"For Counting sort Press   9"<<endl;
    cout<<"For Bucket Sort Press     10"<<endl;
    cout<<"For Radix Sort Press      11"<<endl;
    cout<<endl;
    cin>>t;
    switch(t)
    {
    case 1:

        ForBoubleSort();
        Print();
        break;
    case 2:
        ForSelcetionSort();
        Print();
        break;
    case 3:
        ForInsertionSort();
        Print();
        break;
    case 4:
        ForHeapSort();
        Print();
        break;
    case 5:
        ForQuickSort(arr,0,n-1);
        Print();
        break;
    case 6:
        ForMarchSort();
        Print();
        break;
    case 7:
        ForShellSort();
        Print();
        break;
    case 8:
        ForComboSort();
        Print();
        break;
    case 9:
        ForCountingSort();
        break;
    case 10:
        ForBacketSort();
        Print();
        break;
    case 11:
        ForRadixSort();
        Print();
        break;
    default :
        cout<<"...............Press Correct Key ............."<<endl;
        goto Again;


    }
}

int main()
{
    cout<<"How many element you want to Sort "<<endl<<"Ans : ";
    cin>>n;
    cout<<"Enter the element separated by space "<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];    //input take from user in array index of i th
    AllSorting ();
    return 0;
}
