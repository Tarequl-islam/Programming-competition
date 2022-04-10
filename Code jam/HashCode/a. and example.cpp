#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define CLR(a, b) memset(a, b, sizeof(a))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 2 * acos(0.0)
#define M 998244353
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int MOD = 1000 * 1000 * 1000 + 7;
const int MAXN = 10 * 1000 * 1000 + 10, MAXV = 4;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
// int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);



class Skill{
public:
    string name;
    int label;
};
class Contributor{
public:
    string name;
    int noOfSkill;
    vector<Skill> skills;
};
class Project{
public:
    string name;
    int dayToComplete;
    int score;
    int bestBefore;
    int noOfRoles;
    vector<Skill> roles;
};
class ProjectOut{
public:
    string name;
    vector<string> contributorList;
};
bool cmp1(const Project &left, const Project &right){
    return left.dayToComplete > right.dayToComplete || (left.dayToComplete == right.dayToComplete && left.bestBefore > right.bestBefore);
}
int main(){
    int noOfcontr = 0, noOfproj = 0;
    vector<Contributor> contributors;
    vector<Project> projects;
    vector<ProjectOut> resultProject;

    //      INPUT SECTION
    cin >> noOfcontr >> noOfproj;
    // scanf("%d %d", &contr, &proj);
    for (int i = 0; i < noOfcontr; i++){
        Contributor cntr;
        cin >> cntr.name >> cntr.noOfSkill;
        for (int j = 0; j < cntr.noOfSkill; j++){
            Skill skl;
            cin >> skl.name >> skl.label;
            cntr.skills.push_back(skl);
        }
        contributors.push_back(cntr);
    }
    for (int i = 0; i < noOfproj; i++){
        Project prj;
        cin >> prj.name >> prj.dayToComplete >> prj.score >> prj.bestBefore >> prj.noOfRoles;
        for (int j = 0; j < prj.noOfRoles; j++){
            Skill role;
            cin >> role.name >> role.label;
            prj.roles.push_back(role);
        }
        projects.push_back(prj);
    }
    //         LOGIC GOES HERE
    sort(projects.begin(), projects.end(), cmp1);
    

    //         OUTPUT SECTION
    cout << resultProject.size() << endl;
    for (int i = 0; i < resultProject.size(); i++){
        cout << resultProject[i].name << endl;
        for (int j = 0; j < resultProject[i].contributorList.size(); j++){
            cout << resultProject[i].contributorList[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
