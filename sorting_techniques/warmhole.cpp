
// #include <iostream>
// #include <climits>
// using namespace std;

// int ANS = INT_MAX, n, temp = 0;
// int w[35][5];
// int mask[35];

// int abs(int i){
//     return (i>=0) ? i : -1*i;
// }

// int min(int x, int y){
//     return (x>=y) ? y : x;
// }

// int dist(int sX, int sY, int tX, int tY){
//     return abs(sX-tX) + abs(sY-tY);
// }

// void wormhole(int sX, int sY, int tX, int tY, int value){
//     ANS = min(ANS, dist(sX, sY, tX, tY) + value);

//     for(int i=0; i<n; i++){
//         if(mask[i] == 0){
//             mask[i] = 1;

//             temp = dist(sX, sY, w[i][0], w[i][1]) + w[i][4] + value;
//             wormhole(w[i][2], w[i][3], tX, tY, temp);

//             temp = dist(sX, sY, w[i][2], w[i][3]) + w[i][4] + value;
//             wormhole(w[i][0], w[i][1], tX, tY, temp);

//             mask[i] = 0;
//         }
//     }
// }

// int main() {
//     int t, sX, sY, tX, tY;
//     cin >> t;
//     while(t--){
//     	ANS = INT_MAX;
//         cin >> n;
//         cin >> sX >> sY >> tX >> tY;
//         for(int i=0; i<n; i++){
//             mask[i] = 0;
//             for(int j=0; j<5; j++){
//                 cin >> w[i][j];
//             }
//         }

//         wormhole(sX, sY, tX, tY, 0);
//         cout << ANS << endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
struct node{   
    int x, y;
};

int abs(int x){
    return (x<0) ? -x : x;
}

int finddist(struct node *first,struct node *second){
	int dstx = abs(first->x - second->x);
	int dsty = abs(first->y - second->y);
	return dstx + dsty;
}

int main(){
    int test;
    cin >> test;
    for(int t=1;t<=test;t++){
        int warmholes;    
        cin>>warmholes;

	    int nodes = 2 * warmholes + 2;
	  	struct node *location[nodes];
	  	
        int cost[nodes][nodes];
	  	for(int i=0;i<nodes;i++){
	  		for(int j=0;j<nodes;j++){
	  			cost[i][j]=-1;
			}
		}

		  int sx, sy;
		  cin>>sx>>sy;
		  struct node *src=new struct node;
		  src->x=sx;
		  src->y=sy;
		  location[0]=src;

		  int dox,doy;
		  cin>>dox>>doy;
		  struct node *temp=new node;
		  temp->x=dox;
		  temp->y=doy;
		  location[nodes-1]=temp;

		  for(int i=0;i<warmholes;i++){
		  	int six, siy;
		  	cin>>six>>siy;
		  	struct node *temp=new node;
			  	temp->x=six;
			  	temp->y=siy;
				
            int dix,diy;
		  	cin>>dix>>diy;
		  	struct node *temp1=new node;
			  	temp1->x=dix;
			  	temp1->y=diy;
			
			int w;
		  	cin>>w;
		  	
            location[2*i+1]=temp;
		  	location[2*i+2]=temp1;
		  	cost[2*i+1][2*i+2]=w;
		  	cost[2*i+2][2*i+1]=w;
          }

            for(int i=0;i<nodes;i++){
                for(int j=0;j<nodes;j++){
		  		    if(cost[i][j] == -1){
		  			cost[i][j] = finddist(location[i],location[j]);
				    }
			    }
    		}

            for(int k=0;k<nodes;k++){
                for(int i=0;i<nodes;i++){
                    for(int j=0;j<nodes;j++){
                        if(i==k||j==k)
                            continue;
                        cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
                    }
                }
            }

        cout << "#" << t << " : " << cost[0][nodes-1] << "\n";
    }
    return 0;
}