#include <iostream>

using namespace std;

void insertionSort(int array[], int range)			// Insertion Sort Function
{																
	
	int temp,a;

	for(int i=1; i<range; i++)
	{
		a = i;
		
		while( a > 0 && array[a-1] > array[a] )
		{
			temp= array[a];
			array[a]= array[a-1];
			array[a-1]= temp;
			
			a--;
		}
		
	}
	
}


int main(int argc, char** argv) {
	
	int n;
	int array[n];
	
	cout<<"Determine size of the array: ";			// Construct the Array
	cin>>n;
	
	cout<<"\nEnter the "<<n<<" elements the array's going to comprise: "<<endl<<endl;
	for(int i=0; i<n; i++)
	{
		
		cout<<i+1<<". component: ";
		cin>>array[i];
		
	}
	
	cout<<"\n\n Array={ "<<array[0];   				// Display the initial Array
	for(int i=1; i<n; i++)
	{
		
		cout<<", "<<array[i];
		
	}
	cout<<" }"<<endl;

	insertionSort(array, n);				      // Sort elements of the array
	
	cout<<"\n\n Array={ "<<array[0];  			 // Display the sorted Array
	for(int i=1; i<n; i++)
	{
		
		cout<<", "<<array[i];
		
	}
	cout<<" }"<<endl;
	
	return 0;
}



/*

	int temp,a;	
	for(int i=1; i<n; i++)
	{
		a = i;
		
		while( a > 0 && array[a-1] > array[a] )
		{
			temp= array[a];
			array[a]= array[a-1];
			array[a-1]= temp;
			
			a--;
		}
		
	}
	
	
*/
