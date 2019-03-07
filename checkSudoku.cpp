#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int sudo[9][9];
        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
                cin>>sudo[i][j];
        
        bool flag = 1;
        for(int i=0; i<9; i++){
            int num[9] = {};
            for(int j=0; j<9; j++){
                num[sudo[i][j]-1] = 1;
            }
            for(int j=0; j<9; j++)  if(!num[j]){    flag = 0;   break;  }
        }
        for(int i=0; i<9; i++){
            int num[9] = {};
            for(int j=0; j<9; j++){
                num[sudo[j][i]-1] = 1;
            }
            for(int j=0; j<9; j++)  if(!num[j]){    flag = 0;   break;  }
        }
        for(int i=0; i<9; i+=3){
            int num[9] = {};
            for(int j=i; j<i+3; j++){
                for(int k=i; k<i+3; k++){
                    num[sudo[j][k]-1] = 1;
                }
            }
            for(int j=0; j<9; j++)  if(!num[j]){    flag = 0;   break;  }
        }
        if(flag)    cout<<"Valid\n";
        else    cout<<"inValid\n";
    }
    return 0;
}
