#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, s, f;
	cin >> n;
	map< pair<int,int>, int > m;
	vector< pair<int, int> > vp;
	for(int i = 0 ; i < n ; i++){
		cin >> s >> f;
		vp.push_back(make_pair(f, s));
		if(m.find(make_pair(s,f)) == m.end()) {
			m[make_pair(s,f)] = i + 1;
		}
	}
	vector<int> final;
	vector<int> tmp;
	sort(vp.begin(), vp.end());
	//for(int i = 0 ; i < vp.size() ; i++) cout << vp[i].first << " " << vp[i].second << endl;
	for(int i = n-1; i > 0; i--){
		int ts = vp[i].second;
		int tf = vp[i].first;
		tmp.push_back(m[make_pair(ts,tf)]);
		//cout << ts << " " << tf << endl;
		for(int j = i-1; j >= 0 ; j--){
			if(ts >= vp[j].first){
				ts = vp[j].second;
				tf = vp[j].first;
				tmp.push_back(m[make_pair(ts,tf)]);
				//cout <<"\t\t" << ts << " " << tf << endl;
			}
		}
		if(tmp.size() > final.size()) {
			final.clear(); 
			for(int i = 0 ; i < tmp.size(); i++)
				final.push_back(tmp[i]);
		}
		tmp.clear();
	}
	cout << final.size() << endl;
	for(int i = 0 ; i < final.size() ; i++)
		cout << final[i] << endl;
	return 0;
}
