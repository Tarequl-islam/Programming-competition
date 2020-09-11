#include <bits/stdc++.h>
using namespace std;
int main(){
    float n1, n2, n3, n4, sum, avg, weight, xm, newsum, newavg;
    cin >> n1 >> n2 >> n3 >> n4;
    n1 = n1 * 2;
    n2 = n2 * 3;
    n3 = n3 * 4;
    n4 = n4 * 1;
    sum = n1 + n2 + n3 + n4;
    weight = 2 + 3 + 4 + 1;
    avg = sum / weight;
    cout << fixed << setprecision(1) << "Media: " << avg << endl;

    if (avg >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (avg < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (6.9 >= avg && avg >= 5)
    {
        cout << "Aluno em exame." << endl;
        cin >> xm;
        cout << "Nota do exame: " <<xm<< endl;
        newsum = xm + avg;
        newavg = newsum / 2;
        if (newavg >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else if (newavg <= 4.9)
        {
            cout << "Aluno reprovado." << endl;
        }
        printf("Media final: %.1f\n", newavg);
    }
    return 0;
}