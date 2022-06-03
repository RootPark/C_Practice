#include <set>
#include "simple_int_set.h"
using namespace std;

std::set<int> SetIntersection(const std::set<int>& set0, const std::set<int>& set1){
	std::set<int> interSet;
	for(auto iter0 =set0.begin();iter0!=set0.end(); ++iter0){
		for(auto iter1=set1.begin();iter1!=set1.end();++iter1){
			if(*iter0==*iter1){
				interSet.insert(*iter0);
			}
		}
		return interSet;
	}
}

std::set<int> SetUnion(const std::set<int>& set0, const std::set<int>& set1){
	std::set<int> uniSet;
	for(auto iter0 =set0.begin(); iter0!=set0.end();++iter0){
		uniSet.insert(*iter0);
		for(auto iter1=set1.begin(); iter1!=set1.end();++iter1){
			uniSet.insert(*iter1);
		}
	}
	return uniSet;
}
std::set<int> SetDifference(const std::set<int>& set0, const std::set<int>& set1){
	std::set<int> differSet;
	std::set<int> interSet=SetIntersection(set0, set1);
	int a=0;
	for(auto iter0 =set0.begin(); iter0!=set0.end();++iter0){
		for(auto iterN=interSet.begin();iterN !=interSet.end();++iterN){
			if(*iter0==*iterN){
				break;
			}
			if(*iter0!=*iterN){
				a++;
			}
			if(a==interSet.size()){
				differSet.insert(*iter0);
				a=0;
			}
		}
	}
	return differSet;
}
