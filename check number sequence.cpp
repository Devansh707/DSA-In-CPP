#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int prev,curr;
    cin>>prev;
    bool isdec=true;
    int i=2;
    while(i<=n)
    {
        cin>>curr;
        if(prev==curr)
        {
            cout<<"false";
            return 0;
        }
        
        if(prev>curr)
        {
            if(isdec==false){
                cout<<"false";
                return 0;
            }
        }
            
           
        else
        {
            if(isdec==true)
            isdec=false;
        }
        
        i++;
           
        prev=curr;
    }
    cout<<"true";
    return 0; 
}
