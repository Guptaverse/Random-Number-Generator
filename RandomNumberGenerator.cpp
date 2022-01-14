#include <bits/stdc++.h>

using namespace std;

int p=0;
int randomNumber(){
    time_t now = time(0);
    string a;
    char* dt = ctime(&now);
    for(int i=11;i<=18;i++){
        if(dt[i]!=':'){
            a=dt[i]+a;
        }
    }
    int ans=stoi(a);
    p=p%10;
    p++;
    return (ans/p)%10;
}

int main()
{
    for(int i=0;i<200;i++){
        cout<<randomNumber()<<endl;
    }

    return 0;
}