#include<iostream>
#include<string>

template <typename T,int N>
class Array{
		int size{N};
		T values[N]; //N needs be known during compile time
		
		friend std::ostream &operator<<(std::ostream &os,const Array<T,N> &arr){
			os<<"[";
			for(const auto &val:arr.values)
				os<<val<<" ";
			os<<"]"<<std::endl;
			return os;
		}
	public:
		Array()=default;
		Array(int init_val){
			for(auto &item:values)
				item=init_val;
		}
		void fill(int val)
		{
			for(auto &item:values)
				item=val;	
		}
		int get_size() const{
			return size;
		}
		T &operator[](int index){
			return values[index];
		}
};

int main()
{
	Array<int,5> nums;
	std::cout<<"the size of nums is:"<<nums.get_size()<<std::endl;

	//the array size is 5 as declared earlier.
	//it fills the array with 0 for all 5 spaces in the array.
	num.fill(0);
	std::cout<<"the size of num is:"<<nums.get_size()<<std::endl;
	std::cout<<nums<<std::endl;
	
	//fills all spaces of array with 10.
	nums.fill(10);
	std::cout<<nums<<std::endl;
	
	//replacing the 0th and 3rd postion in array.
	nums[0]=1000;
	nums[3]=1000;
	std::cout<<nums<<std::endl;
	
	//filling 100 places with 1.
	Array<int,100> nums2(1);
	std::cout<<nums2<<std::endl;
	
	Array<std::string,10> strings(std::string("frank"));
	std::cout<<"the size of string is"<<strings.get_size()<<std::endl;
	std::cout<<strings<<std::endl;
	
	strings[0]=std::string("larry");
	std::cout<<strings<<std::endl;
	
	strings.fill(std::string("X"));
	std::cout<<strings<<std::endl;

}
