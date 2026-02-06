#include<iostream>
#include<climits>
using namespace std;
int x[20],y[20],n,ans;

int abs(int i){
	if(i>0){
		return i;
	}
	return -i;
}

int dist(int i, int j){
    int x1 = x[i], x2 = x[j];
    int y1 = y[i], y2 = y[j];
    
    return (abs(x1-x2) + abs(y1-y2));
}

void optimalPath(int x,bool visited[],int nodes,int value){
	if(n == nodes){
		ans = min(ans,value + dist(x,n+1));
	}
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			visited[i] = true;
			optimalPath(i,visited,nodes+1,value + dist(x,i));
			visited[i] = false;
		}
	}
}

int main(){
	int tCases;
	cin >> tCases;
	for(int i=0;i<tCases;i++){
		ans=INT_MAX;
		cin >> n;
		cin >> x[n+1] >> y[n+1] >> x[0] >> y[0];
		for(int i=1;i<=n;i++){
			cin >> x[i] >> y[i];
		}
		bool visited[n+2]={false};
		optimalPath(0,visited,0,0);
		cout << "#" << i+1 << " " << ans << endl;
	}
	return 0;
}