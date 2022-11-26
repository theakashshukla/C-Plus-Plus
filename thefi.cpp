#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){   // t is the number of test cases
        int n;    // number of elements
        cin>>n;   // n is the number of elements in the array
        string s; // string to store the elements
        cin>>s;    // input string
        int mom=0,dad=0;    //mom=1,dad=2
        for(int i=0;i<n;i++){  // loop to find mom and dad 
            if(s[i]=='m'){    //mom
                mom++;   
            }  
            else if(s[i]=='d'){  //if dad is found
                dad++;  
            }
        }
        if(mom==0 && dad==0){   //Goo-Goo
            cout<<"Goo-Goo"<<endl;
        }
        else if(mom>dad){
            cout<<"Mom"<<endl;
        }
        else if(dad>mom){
            cout<<"Dad"<<endl;
        }
        else{
            cout<<"Goo-Goo"<<endl;
        }
    }
    return 0;
}

