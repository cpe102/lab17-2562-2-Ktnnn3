#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main(){
	ifstream n_s("name_score.txt");
	string n,cm;
	int n1,n2,n3;
	vector<int>sum;
	char name[100];
	vector<string> vn,vg;
	while(getline(n_s,n)){
		sscanf(n.c_str(),"%[^:]: %d %d %d",&n1,&n2,&n3);
		vn.push_back(name);
		sum.push_back(n1+n2+n3);
	}
	for(int i=0;i<sum.size();i++){
		if(sum[i]>=80) vg.push_back("A");
		else if(sum[i]>=70) vg.push_back("B");
		else if(sum[i]>=60) vg.push_back("C");
		else if(sum[i]>=50) vg.push_back("D");
		else vg.push_back("F");
	}
	
	while(true){
		cout<<"Please input your command: ";
		getline(cin,cm);
		int idx=cm.find_first_of(" ");
		string st2=upper(cm.substr(idx+1,cm.size()));//option
		string st1=upper(cm.substr(0,idx));//order
		if(st1=="EXIT") break;
		else if(st1=="NAME"){
			for(int i=0;i<20;i++){
				cout<<endl;
			}
				for(int j=0;j<vn.size();j++){
					if(st2==upper(vn[i])) cout<<vn[i]<<"'s grade"<<vg[i]<<endl;
					else if(st2 != upper(vn[i])&& i != vn.size()-1);
					else cout<<"Cannot found";	
				}
			cout<<endl;
				for(int p=0;p<20;p++) cout<<"-";
				cout<<endl;
		}
		else cout<<"Invalid command"<<endl;
	}
	
	
}
