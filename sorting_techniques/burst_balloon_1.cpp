

// #include <iostream>
// using namespace std;
 
// int maxcoins(int A[],int siz)
// {
//     int nums[siz+2];
//     int n=1, points = 0;
 
//     for(int i=0;i<siz;i++)
//     {
//         if(A[i]>0)
//         {
//             nums[n] = A[i];
//             n++;
//         }
//         else
//             points += (n - 1 > 0 ? nums[n - 1] : 1) * (i + 1 < siz ? A[i + 1] : 1);    
            
//     }
//     nums[0] = nums[n] = 1;
//     n++;

//     int dp[n][n] = {};
 
//     for(int j=2;j<n;j++)
//     {
//         for(int left=0;left<n-j;left++)
//         {
//             int right = left+j;
//             for(int i = left+1;i<right;i++)
//             {
//                 if(left==0 && right==n-1)
//                     dp[left][right] = max(nums[left]*nums[i]*nums[right] + dp[left][i] + dp[i][right],dp[left][right]);
//                 else
//                     dp[left][right] = max(nums[left]*nums[right] + dp[left][i] + dp[i][right],dp[left][right]);
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cout<<dp[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return points + dp[0][n-1];
// }
 
// int main()
// {
//     int siz;
//     cin >> siz;
//     int A[siz];
//     for(int i=0;i<siz;i++)
//         cin >> A[i];
 
//     int ans = maxcoins(A,siz);
//     cout << ans << endl;
//     return 0;
// }





#include <iostream>
using namespace std;

int maxCoins(int A[], int n) {
    if(n == 0) return 0;

    int dp[100][100] = {}; 

    for(int len = 1; len <= n; len++){
        for(int i = 0; i <= n - len; i++){
            int j = i + len - 1;
            for(int k = i; k <= j; k++){
                int leftValue  = (i != 0) ? A[i-1] : 1;
                int rightValue = (j != n-1) ? A[j+1] : 1;

                int before = (i != k) ? dp[i][k-1] : 0;
                int after  = (j != k) ? dp[k+1][j] : 0;

                int val = leftValue * A[k] * rightValue + before + after;
                if(val > dp[i][j])
                    dp[i][j] = val;
            }
        }
    }

    return dp[0][n-1];
}

int main() {
    char ch;
    int A[1000], n = 0;

    cin >> ch; 
    while (cin >> A[n]) {
        n++;
        cin >> ch; 
        if(ch == ']') break;
    }

    cout << maxCoins(A, n) << endl;
    return 0;
}

