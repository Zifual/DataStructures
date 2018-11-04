#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int temp, a;
	
	cout<<"Specify size of array: ";				// Construct an Array
	cin>>n;

	int array[n];

	cout<<"\nDetermine "<<n<<" components that the array comprise of: "<<endl<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<" "<<i+1<<". number: ";
		cin>>array[i];
	}
	
	cout<<"\n Initial Array={ "<<array[0];					// Display the initial Array
	for(int i=1; i<n; i++)
	{
		cout<<", "<<array[i];	
	}
	cout<<" }"<<endl;
	
//-----------------------------------------------------------------------------------
	
	for(int i=1; i<n; i++)							// * * Insertion Sort * *
	{
		a = i;
		
		while(a>0 && array[a-1] > array[a])
		{
			temp= array[a-1];
			array[a-1]= array[a];
			array[a]= temp;
			
			a--;
		}
	}
//--------------------------------------------------------------------------------------	
	
	cout<<"\n -Sorted Array={ "<<array[0];					// Display the sorted Array
	for(int i=1; i<n; i++)
	{
		cout<<", "<<array[i];	
	}
	cout<<" }"<<endl;
	
	
	return 0;
}
