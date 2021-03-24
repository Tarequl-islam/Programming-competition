#include<bits/stdc++.h>
using namespace std;
const int mx=1000;

int ar[mx];
int tree[mx*3];
void init(int node, int b, int e){
    if(b==e){
        tree[node]=ar[b];
        return;
    }
    int mid = (b+e)/2;
    int left = node*2;
    int right = node*2 + 1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left]+tree[right];
}

int query(int node, int b, int e, int i, int j){
    if (i > e || j < b)
        return 0; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2; //বাম এবং ডান পাশের যোগফল
}
void update(int node, int b, int e, int i, int newvalue){
    if (i > e || i < b)
        return; //বাইরে চলে গিয়েছে
    if (b >= i && e <= i) { //রিলেভেন্ট সেগমেন্ট
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main(){  //http://codeforces.com/problemset/problem/339/D
    int t, cs = 1;
    cin >> t;
    for(int i=1; i<=t; i++) cin>>ar[i];
    init(1,1,t);
    for(int i=1; i<=t*3; i++) cout<<tree[i]<<" ";
    cout <<endl<< query(1, 1, t, 1, t) << endl;
    update(1, 1, t, 2, 0);
    cout << query(1, 1, t, 1, t) << endl;
    update(1, 1, t, 2, 2);
    cout << query(1, 1, t, 1, t) << endl;
    return 0;
}
