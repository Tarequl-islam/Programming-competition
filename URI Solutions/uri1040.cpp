#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    double MEDIA, a, b, c, d, e;
    cin>>a>>b>>c>>d;
    MEDIA = ((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    cout<<fixed<<setprecision(1)<<"Media: "<<MEDIA<<endl;

    if(MEDIA>= 7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(MEDIA<5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    else{
        cout<<"Aluno em exame."<<endl;
        cin>>e;
        cout<<"Nota do exame: "<<e<<endl;
        MEDIA = (MEDIA + e)/2;
        if(MEDIA>= 5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else if(MEDIA<=4.9){
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<MEDIA<<endl;
    }
    return 0;

}

