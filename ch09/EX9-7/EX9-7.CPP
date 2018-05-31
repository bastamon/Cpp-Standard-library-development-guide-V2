#include <iostream>
#include <cstdlib>
void main()
{
	std::cout<<"Enter the array size: ";
	int size;
	std::cin>>size;
	int* array=new int[size];
	for(int i=0;i<size;i++)
	{
		array[i]=rand();
	}
	for(i=0;i<size;i++)
	{
		std::cout<<"\n"<<array[i];
	}	
	std::cout<<std::endl;
	delete[] array;
	return;
}