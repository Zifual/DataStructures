#include <iostream>

using namespace std;

int SumOfDigits(int number)
{
	int sum=0;
	
	while(number > 0)
	{
		sum += number % 10;
		number /= 10;
	}
	
	return sum;
}

int main(int argc, char** argv) {
	
	int x;
	
	cout<<" Enter a number: ";
	cin>>x;
	
	cout<<"\n Sum of digits of the number: "<<SumOfDigits(x)<<endl;		// Calculate and Print
		
	return 0;
}
