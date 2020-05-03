#include<iostream>
#include<conio.h>
using namespace std;
int main(void){
    int i,n,tot_bt=0,sum=0,tot=0;
    int p[10],b[10],wt[10], tat[10];
    wt[0]=b[0]=0;
    cout<<"\nEnter the No of Process:";
    cin>>n;
    for(i=1;i<=n;i++){
        p[i]=i;
        cout<<"\nEnter the burst time of P"<<i<<":"; cin>>b[i];
    }
    cout<<"\nProces"<<" "<<"Burst time\n"<<endl;
    for(i=1;i<=n;i++)  {
        cout<<" P"<<p[i]<<" "<<b[i]<<endl;
        tot_bt=tot_bt+b[i];
    }
    for(i=1;i<=n;i++){
        wt[i]=wt[i-1]+b[i-1];
        sum+=wt[i];
        tat[i]=wt[i]+b[i];
        cout<<"\nWaiting time of P"<<i<<":"<<wt[i]; cout<<"\nTurnaround time of P"<<i<<":"<<tat[i];
    }
cout<<"\n\nAverage Waiting Time="<<float(sum)/n<<"ms\n\n";
}

