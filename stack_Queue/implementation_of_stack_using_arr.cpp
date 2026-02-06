
// #include<bits/stdc++.h>
// using namespace std;

// class Stack{
//     // data members
//     int size;
//     int *arr;
//     int top;
//     // constructor --> it run automatically when we create an object 
//     public:
//     Stack() {
//        int top=-1;
//        int size=1000;
//        arr = new int [size];
//     }

//     void push(int x){
//            // check kar space hai to 
//         if (top < size - 1) {   // check for overflow
//            top++;
//            arr[top] = x;
//         } else {
//            cout << "Stack Overflow\n";
//         }
//     }
//     int pop(){
//         //check kar le empty to nahi hai 
//          if (top >= 0) {
//         int element = arr[top];
//         top--;
//         return element;
//     }
//     cout << "Stack Underflow\n";
//     return -1;  // or throw exception
//     }
//     int Top(){
//            return arr[top];
//     }
//     bool empty(){
//         if(top==-1) return true ;
//         else return false;
//     }
//     int Size(){
//         return top+1;
//     }
// };
// int main() {

//   Stack s;
//   s.push(6);
//   s.push(3);
//   s.push(7);
//   cout << "Top of stack is before deleting any element " << s.Top() << endl;
//   cout << "Size of stack before deleting any element " << s.Size() << endl;
//   cout << "The element deleted is " << s.pop() << endl;
//   cout << "Size of stack after deleting an element " << s.Size() << endl;
//   cout << "Top of stack after deleting an element " << s.Top() << endl;
//   return 0;
// }


#include<bits/stdc++.h>

using namespace std;
class Stack {
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }
  void push(int x) {
    top++;
    arr[top] = x;
  }
  int pop() {
    int x = arr[top];
    top--;
    return x;
  }
  int Top() {
    return arr[top];
  }
  int Size() {
    return top + 1;
  }
};
int main() {

  Stack s;
  s.push(6);
  s.push(3);
  s.push(7);
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  return 0;
}