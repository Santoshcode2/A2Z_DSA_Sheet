#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to read input
void read_input(int& N, vector<int>& A, int& level) {
    cin >> N;
    A.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    cin >> level;
}

// Function to calculate the sum at a given level
int sum_at_level(const vector<int>& A, int level) {
    if (level < 1) return 0;

    int current_level = 1;
    int index = 0;
    int size = A.size();

    queue<int> q;
    q.push(A[index++]);

    while (!q.empty() && current_level < level) {
        int level_size = q.size();
        for (int i = 0; i < level_size; ++i) {
            int node = q.front();
            q.pop();
            if (index < size) q.push(A[index++]);
            if (index < size) q.push(A[index++]);
        }
        ++current_level;
    }

    if (current_level == level) {
        int level_sum = 0;
        while (!q.empty()) {
            level_sum += q.front();
            q.pop();
        }
        return level_sum;
    }
    return 0;
}

int main() {
    int N;
    vector<int> A;
    int level;

    // Read input
    read_input(N, A, level);

    // Calculate sum at the given level
    int result = sum_at_level(A, level);

    // Print the result
    cout << result << endl;

    return 0;
}

/*consider that you are provided with a list of A of N integers. Construct the almost complete binary tree using them and write a program to print the sum S of all the elements present in the given level 
if the elements of the list L are [x1, x2 , x3,x4,x5,x6,... ,x10] then the constructed almost binary tree would be in the following manner

an almost complete binary tree is the binary tree that satisfies the following conditions 
i)insertion of nodes must take place level by level and all the nodes must be left justified .
ii) all the levels from 1 to h-1 level (h stands for the number of levels) should be completely filled without any gap.

read the input from STDIN and print the outputs to STDOUT . do not  write arbitrary strings while reading the inputs or while printing as these contribute to the standard output. 

constraints:
element  should not be negative

input formats:
the first line of the input contains N where n denotes the total number of elements in the list A. the second line of input contains  n elements separated by a single white space .
third line contains the specific level at which the sum has to be calculated.
output formats:
 a single line of output contains the sum S.
write the code in C++*/