#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int arr[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    
    int player=1;
    int choice;
    cout<<"| 1 | 2 | 3 |\n-------------\n| 4 | 5 | 6 |\n-------------\n| 7 | 8 | 9 |"<<endl<<endl;
   

    while(1){
        
        
        cout<<"Enter choice player "<<player;
        cin>>choice;
        int n=0;
        switch(choice) {
            case 1:
                arr[0][0]=player;
                break;
            case 2:
                arr[0][1]=player;
                break;
            case 3:
                arr[0][2]=player;
                break;
            case 4:
                arr[1][0]=player;
                break;
            case 5:
                arr[1][1]=player;
                break;
            case 6:
                arr[1][2]=player;
                break;
            case 7:
                arr[2][0]=player;
                break;
            case 8:
                arr[2][1]=player;
                break;
            case 9:
                arr[2][2]=player;
                break;
            default:
                cout<<" Invalid choice ;( \n";
                n=1;
                break;
                
            }
            for(int i=0;i<3;i++){
            cout<<"|";
            for(int j=0;j<3;j++){
                if(arr[i][j]==0){
                    cout<<"   |";
                }else if(arr[i][j]==1) {
                    cout<<" X |";
                } else if(arr[i][j]==2) {
                    cout<<" O |";
                }
            }
            cout<<"\n------------\n";
        }
            
            if(arr[0][0]==arr[1][1] && arr[0][0]!=0 && arr[1][1]!=0){
                if(arr[1][1]==arr[2][2] && arr[2][2]!=0){
                    cout<<"Player "<<player<<"wins\n";
                    goto x;
                }
            }
            
            if(arr[0][2]==arr[1][1] && arr[0][2]!=0 && arr[1][1]!=0){
                if(arr[1][1]==arr[0][2] && arr[0][2]!=0){
                    cout<<"Player "<<player<<"wins\n";
                    goto x;
                }
            }
            
            for(int i=0;i<3;i++){
                if(arr[i][0]==arr[i][1] && arr[i][0]!=0 && arr[i][1]!=0){
                    if(arr[i][1]==arr[i][2] && arr[i][2]!=0){
                        cout<<"Player "<<player<<"wins\n";
                        goto x;
                    }
                }
                if(arr[0][i]==arr[1][i] && arr[0][i]!=0 && arr[1][i]!=0){
                    if(arr[1][i]==arr[2][i] && arr[2][i]!=0){
                        cout<<"Player "<<player<<"wins\n";
                        goto x;
                    }
                }
            }
            
            if(arr[0][0]!=0 && arr[0][1]!=0 && arr[0][2]!=0 && arr[1][0]!=0 && arr[1][1]!=0 && arr[1][2]!=0 && arr[2][0]!=0 && arr[2][1]!=0 && arr[2][2]!=0){
                cout<<"DRAW :|\n";
                goto x;
            }
            
            if(player==1 && n!=1) player=2;
            else if(player==2 && n!=1) player=1;
        
    }
    x:
    return 0;
    
}