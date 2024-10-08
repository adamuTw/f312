#include <iostream>
using namespace std;
int main() {
    int A1,B1,C1,A2,B2,C2,n,ans=-999999990;
    cin>>A1>>B1>>C1>>A2>>B2>>C2>>n;
    for(int i=0;i<=n;i++){
        int y=n-i;
        int f1=A1*y*y+B1*y+C1;
        int f2=A2*n*n+B2*n+C2;
        if((f1+f2)>ans){
            ans=f1+f2;
        }
    }
    cout<<ans;
}
