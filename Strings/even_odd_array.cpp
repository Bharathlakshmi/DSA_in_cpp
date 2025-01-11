#include<iostream>
using namespace std;


//see using geeks (down) - but thats not the exact output!! sorted differently

main()
{
    int n,a[20],o=0,e=0,odd[20],even[20];
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter array : ";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           even[e]=a[i];
           e++;
       }
       else
       {
           odd[o]=a[i];
           o++;
       }
    }


     for(int i=0;i<e;i++)
    {
       a[i]=even[i];
    }

    int j=0;
    for(int i=e;i<n;i++)
    {
       a[i]=odd[j];
       j++;
    }

    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }


}


/*
// C++ program to segregate even and odd elements of array
#include <iostream>
using namespace std;

// Function to swap *a and *b
void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{
	// Initialize left and right indexes
	int left = 0, right = size-1;
	while (left < right)
	{
		// Increment left index while we see 0 at left
		while (arr[left] % 2 == 0 && left < right)
			left++;

		// Decrement right index while we see 1 at right
		while (arr[right] % 2 == 1 && left < right)
			right--;

		if (left < right)
		{
			// Swap arr[left] and arr[right]
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int arr[] = {12, 34, 45, 9, 8, 90, 3};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	segregateEvenOdd(arr, arr_size);

	cout <<"Array after segregation ";
	for (i = 0; i < arr_size; i++)
		cout << arr[i] << " ";

	return 0;
}

*/


