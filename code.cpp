#include<bits/stdc++.h>
using namespace std;


int main() {
      int N;
    cin>>N;
    map<int,double>userbal;
        for(int i=0;i<N;i++){
         int user,bal;
            cin>>user>>bal;
          userbal[user] =bal; 
        }
    int t;
    cin>>t;
        
    for(int i=0;i<t;i++)
    {
          int from,to,amt;
        cin>>from>>to>>amt;
             if(userbal[from]>=amt)
               {
            userbal[from]-=amt;
            userbal[to]+=amt;
            cout<<"Success"<< endl;
                }
             else{
            cout<<"Failure"<< endl;
        }  
       
    }
     cout<<" "<<endl;
        multimap<int, int> sorted_users;  
    for (auto entry : userbal) {
        sorted_users.insert({entry.second, entry.first});  
    }
         for ( auto entry : sorted_users) {
        cout << entry.second <<" "<< entry.first << endl;  
    }

    
    return 0;
}
