#include<iostream>
#include<vector>

using namespace std;
int main(){
	vector<int> v;
	
	int input;
	while(cin>>input){
		v.push_back(input);
	}

	int sum = 0;
	int max = v[0];

	for(vector<int>::size_type i = 0; i<v.size(); i++){
		if(sum>0)
			sum += v[i];
		else
			sum = v[i];

		if(max<sum)
			max=sum;
	}
	cout<<max<<endl;

}
