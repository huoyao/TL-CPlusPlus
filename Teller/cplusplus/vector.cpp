 #if 0

#include <iostream>
#include <vector>
using namespace std;

void test_vector_pop_back()
{
	vector<int> vec;
	vec.push_back(0);
	vec.pop_back();
	vec.pop_back();
	vec[0]=1;
	cout<<"succeed"<<"  vec[0]="<<vec[0]<<endl;
}

template <class T>
void print_info(const T &vec)
{
	cout<<"    size:"<<vec.size()<<endl;  
	cout<<"capacity:"<<vec.capacity()<<endl;
}

void test_vector_size_capacity()
{
	vector<int> vec;
	print_info(vec);
	vec.push_back(1);
	print_info(vec);
	vec.push_back(2);
	print_info(vec);
	vec.push_back(3);
	print_info(vec);
}

int main()
{
	//test_vector_pop_back();
	test_vector_size_capacity();
	getchar();
	return 0;
}

#endif
