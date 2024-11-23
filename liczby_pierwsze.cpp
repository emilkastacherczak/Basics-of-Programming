#include <iostream>

using namespace std;

int main(){
    int x;
    cin>>x;

    if(x<=1){
        cout<<0;
        return 0;
    }
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            cout<<0;
            return 0;
        }
    }
    cout<<1;
    return 0;
}
