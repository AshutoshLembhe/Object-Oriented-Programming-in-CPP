#include<iostream>
#include<string>
#include<vector>
//using namespace std;

//template classes are typically completely contained in header file
//so we would have the template class in item.h and no item.cpp file

template <typename T>
class item{
	private:
		std::string name;
		T value;
	public:
		item(std::string name,T value):name{name},value{value}
		{}
		std::string get_name() const{return name;}
		T get_value() const{return value;}
};
// associating with datatype.
template <typename T1,typename T2>
struct my_pair{
	T1 first;
	T2 second;
};

int main()
{
	item<int> item1{"frank",100};
	std::cout<<item1.get_name()<<" "<<item1.get_value()<<std::endl;
	
	item<std::string> item2{"frank","professor"}
	std::cout<<item2.get_name()<<" "<<item2.get_value()<<std::endl;
	
	item <item<std::string>> item3{"frank",{"C++","professor"}};
	std::cout<<item3.get_name()<<""<<item3.get_value().get_name()<<""<<item3.get_value().get_value()<<std::endl;
	
	std::cout<<"\n================="<<std::endl;
	std::vector<item<double>>vec{};
	vec.push_back(item<double> ("larry",100.0));
	vec.push_back(item<double> ("moe",200.0));
	vec.push_back(item<double> ("curly",300.0));
	for(const auto &item:vec)
	{
		std::cout<<item.get_name()<<" "<<item.get_value()<<std::endl;
	}
	
	std::cout<<"\n=========="<<std::endl;
	my_pair <std::string,int> p1{"ashutosh",100};
	my_pair <int,double> p2{124,13.6}
	std::cout<<p1.first<<","<<p1.second<<std::endl;
	std::cout<<p2.first<<","<<p2.second<<std::endl;
	
	return 0;
}	

