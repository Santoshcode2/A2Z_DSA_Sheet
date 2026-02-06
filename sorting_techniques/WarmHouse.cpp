// // bipertite graph
 
// #include<iostream>
// using namespace std;
// int n;
// int arr[100][100]={0};

// bool isBiPartite(int i,int color[]){
// 	bool flag = true;
// 	for(int j=0;j<n;j++){
// 		if(arr[i][j] == 1){
// 			if(color[j] == -1){
// 				color[j] = 1 - color[i];
// 				flag = flag & isBiPartite(j,color);
// 			}
// 			else if(color[i] == color[j]){
// 				return false;
// 			}
// 		}
// 	}
// 	return flag;
// }

// int main(){
//     cin >> n;
//     int color[n];
    
//     for(int i=0;i<n;i++){
//     	color[i] = -1;
//         for(int j=0;j<n;j++){
//             cin >> arr[i][j];
//         }
//     }
    
//     for(int i=0;i<n;i++){
// 		if(color[i]==-1){
// 			color[i] = 0;
// 			if(!isBiPartite(i,color)){
// 				cout << "-1" << endl;
// 				return 0;
// 			}
// 		}
// 	}
	
// 	for(int i=0;i<n;i++){
// 		if(color[i] == 0){
// 			cout << i << " ";
// 		}
// 	}
	
//     return 0;


// }









// #include <bits/stdc++.h>
// using namespace std;

// bool isBipartiteComponent(int start, vector<vector<int>>& graph, vector<int>& color) {
//     queue<int> q;
//     q.push(start);
//     color[start] = 0; 
//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();

//         for (int neighbor = 0; neighbor < graph.size(); neighbor++) {
//             if (graph[node][neighbor] == 1) { 
//                 if (color[neighbor] == -1) {
//                     color[neighbor] = 1 - color[node]; 
//                     q.push(neighbor);
//                 } 
//                 else if (color[neighbor] == color[node]) {
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin >> n; 

//     vector<vector<int>> graph(n, vector<int>(n));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> graph[i][j];
//         }
//     }
//     vector<int> color(n, -1); 

//     for (int i = 0; i < n; i++) {
//         if (color[i] == -1) {
//             if (!isBipartiteComponent(i, graph, color)) {
//                 cout << "-1" << endl;
//                 return 0;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (color[i] == 0) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }






// endoscope
#include<iostream>
using namespace std;
int row,col,X,Y,L;
int map[1000][1000],visited[1000][1000];
struct node{
    int x,y,l;
};
node q[1000000];
int front,back;
void init(){
    front=0,back=0;
}
void push(node temp){
    q[back++]=temp;
}
node pop(){
    return q[front++];
}
bool empty(){
    return front == back;
}
bool valid(int x,int y)
{
    return (x>=0 && x<row && y>=0 && y<col);
}
bool left(int x,int y){
    return (map[x][y]==1 || map[x][y]==3 || map[x][y]==6 || map[x][y]==7);
}
bool right(int x,int y){
    return (map[x][y]==1 || map[x][y]==3 || map[x][y]==4 || map[x][y]==5);
}
bool up(int x,int y){
    return (map[x][y]==1 || map[x][y]==2 || map[x][y]==4 || map[x][y]==7);
}
bool down(int x,int y){
    return (map[x][y]==1 || map[x][y]==2 || map[x][y]==6 || map[x][y]==5);
}
int solve(int x,int y,int l){
    int ans = 0;
    push({x,y,l});
    visited[x][y]=1;
    while(!empty()){
        node cur = pop();
        int x = cur.x;
        int y = cur.y;
        int l = cur.l;
        if(l==0) continue;
        ans++;
        if(valid(x,y-1) && left(x,y) && right(x,y-1) && visited[x][y-1]==0){
            push({x,y-1,l-1});
            visited[x][y-1]=1;
        }
        if(valid(x,y+1) && right(x,y) && left(x,y+1) && visited[x][y+1]==0){
            push({x,y+1,l-1});
            visited[x][y+1]=1;
        }
        if(valid(x-1,y) && up(x,y) && down(x-1,y) && visited[x-1][y]==0){
            push({x-1,y,l-1});
            visited[x-1][y]=1;
        }
        if(valid(x+1,y) && down(x,y) && up(x+1,y) && visited[x+1][y]==0){
            push({x+1,y,l-1});
            visited[x+1][y]=1;
        }
    }
    return ans;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>row>>col>>X>>Y>>L;
        init();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>map[i][j];
                visited[i][j]=0;
            }
        }
        if(map[X][Y]>0){
            cout<<solve(X,Y,L)<<endl;
        }
        else cout<<0<<endl;
 
    }
}





































