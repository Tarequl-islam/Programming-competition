#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, l=0;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--){
        if(l!=0) cout<<endl;
        int n=0;
        vector<string> v;
        string line;
        map<string, float> m;
        map<string, float> :: iterator it;
        while(1){
            //cin>>line;
            getline(cin, line);
            if (line.length()==0){
                break;
            }
            else v.push_back(line);
            n++;
        }
        float freq=100/(float)n;
        while(n--){
            if(m.count(v.back())) m[v.back()]+=freq;
            else{
                m.insert(make_pair(v.back(), freq));
            }
            v.pop_back();
        }
        for(it=m.begin(); it!=m.end();it++){
            cout<< it->first <<" "<<fixed<<setprecision(4)<< it->second<<endl;
        }
        l++;
    }
    return 0;
}
