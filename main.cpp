#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int h=matrix.size();
        int w=matrix[0].size();
        vector<vector<int> > ans(h,vector<int>(w,0));
        vector<vector<bool> > visited(h,vector<bool>(w,false));
        queue<pair<int,int> > q;
        queue<pair<int,int> > tmpq;
        for(int row=0;row<h;row++){
            for(int col=0;col<w;col++){
                if(matrix[row][col]==0){
                    q.push(make_pair(row,col));
                    visited[row][col]=true;
                }
            }
        }
      /*  for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"yikaishifangwen"<<endl;
*/

        int step=1;
        while(!q.empty()){
            cout<<q.size()<<endl;
            pair<int,int> p=q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
            cout<<i<<"  "<<j<<endl;
            if(i-1>=0 ){
                if(!visited[i-1][j]){
                    ans[i-1][j]=step;
                    visited[i-1][j]=true;
                    tmpq.push(make_pair(i-1,j));
                    cout<<i-1<<" "<<j<<endl;
                }
                    cout<<i-1<<" "<<j<<endl;

                                    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            cout<<visited[b][b]<<" ";
        }
        cout<<endl;
    }
            }

            if(i+1<=h-1 ){
                if(!visited[i+1][j]){
                    ans[i+1][j]=step;
                    visited[i+1][j]=true;
                    tmpq.push(make_pair(i+1,j));cout<<i+1<<" "<<j<<endl;
                }cout<<i+1<<" "<<j<<endl;

                                    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            cout<<visited[b][b]<<" ";
        }
        cout<<endl;
    }
            }

            if( j-1>=0 ){
                if(!visited[i][j-1]){
                    ans[i][j-1]=step;
                    visited[i][j-1]=true;
                    tmpq.push(make_pair(i,j-1));cout<<i<<" "<<j-1<<endl;

                }cout<<i<<" "<<j-1<<endl;
                                    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            cout<<visited[b][b]<<" ";
        }
        cout<<endl;
    }
            }

            if(j+1<=w-1){
                if(!visited[i][j+1]){
                    ans[i][j+1]=step;
                    visited[i][j+1]=true;
                    tmpq.push(make_pair(i,j+1));cout<<i<<" "<<j+1<<endl;

                }cout<<i<<" "<<j+1<<endl;
                    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            cout<<visited[b][b]<<" ";
        }
        cout<<endl;
    }
            }

            if(q.empty()){
                step=step+1;
                while(!tmpq.empty()){
                    pair<int,int> tp=tmpq.front();
                    tmpq.pop();
                    q.push(tp);

                }

            }


        }




        return ans;
    }

};


int main()
{
   // vector<vector<bool> > visited(10,vector<bool>(1,false));
    vector<vector<int> > ans(3,vector<int>(3,0));
    ans[1][1]=1;
    ans[2][1]=1;
    ans[2][2]=1;
    ans[2][0]=1;
    vector<int> a;
    a.push_back(0);
    vector<int> b;
    b.push_back(1);
    vector<vector<int> > an;
    an.push_back(a);
    an.push_back(b);
    Solution s;
    vector<vector<int> > aaaaaa=s.updateMatrix(an);
   // cout<<a[2][2]<<"as"<<endl;
  /*  for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            cout<<ans[b][b]<<" ";
        }
        cout<<endl;
    }*/
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/

    //cout << visited[2][1] << endl;
    return 0;
}
