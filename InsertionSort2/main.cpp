#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int array[10]= {4,3,2,5,1,8,3,2,9,6};
	int temp,a;
	
	for(int i=1; i<10; i++)				// Insertion Sort_________
	{
		a= i;
		
		while( a > 0 && array[a-1] > array[a] )
		{
			
			temp= array[a-1];
			array[a-1]= array[a];
			array[a]= temp;
			
			a--;
		}
		
	}								// Insertion Sort end___________
	
	for(int j=0; j<10; j++)
	{
		
		cout<<array[j]<<endl;
		
	}
	
	return 0;
}
