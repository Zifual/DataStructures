#include <iostream>

using namespace std;

void Merge(int *array, int m, int l, int r)
{
	int i= l;
	int j= m+1;
	int k= 0;
	
	int temp[r-l +1];
	
	while(i <= m	&&	j <= r)
	{
		if(array[i] < array[j])
		{
			temp[k] = array[i];
			i++;
		}
		else
		{
			temp[k] = array[j];
			j++;
		}
		
		k++;
	}
	
	while(i <= m)
	{
		temp[k] = array[i];
		i++;
		k++;
	}
	
	while(j <= r)
	{
		temp[k] = array[j];
		j++;
		k++;
	}
	
	for(i=l; i<=r; i++)
	{
		array[i] = temp[i-l];
	}
	
}

void MergeSort(int array[], int low, int high)
{
	
	if(low < high)
	{
		int mid= (low+high-1) / 2;
		 
		MergeSort(array, low, mid);					// Dividing the array 
		MergeSort(array, mid+1, high);
		
		Merge(array, mid, low, high);			  // Merge the array
		
	}
	
}




int main(int argc, char** argv) {

	int n, i;
	
	cout<<"Specify size of array: ";				// Construct an Array
	cin>>n;

	int arr[n];

	cout<<"\nDetermine "<<n<<" components that the array comprise of: "<<endl<<endl;
	for(i=0; i<n; i++)
	{
		cout<<" "<<i+1<<". number: ";
		cin>>arr[i];
	}
	
//-------------------------------------------------------------------------------------------------	
	cout<<"\n Initial Array={ "<<arr[0];				// Display the initial Array
	for(int i=1; i<n; i++)
	{
		cout<<", "<<arr[i];	
	}
	cout<<" }"<<endl;
	
//---------------------------------------------------------------------------------------------------	
 
	MergeSort(arr, 0, n-1);							//---- Merge Sort Function ---
	
//--------------------------------------------------------------------------------------------------- 

	cout<<"\n -Sorted Array={ "<<arr[0];			// Display the sorted Array
	for(int i=1; i<n; i++)
	{
		cout<<", "<<arr[i];	
	}
	cout<<" }"<<endl;
	
	
	return 0;
}
