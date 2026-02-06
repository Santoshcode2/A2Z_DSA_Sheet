#include<iostream>
using namespace std;

int main(){
    /*int first=6;
    int *p=&first;
    int *q=p; 
    (*q)++;
    cout<<first<<endl;
    */

    /*int first=8;
    int *p=&first;
    int a=(*p)++;
    cout<<a;
    //cout<<(*p)++<<" ";        //here we are performing pre increment
    cout<<first<<endl;
    cout<<a;*/

    /*int *p=0;
    int first=110;
    *p=first;
    cout<<*p<<endl;
    */
        /*
    int *p;                   //here we have created a pointer but it is pointing some garbage value
        cout<<*p<<endl;
    */
  /*  int *p=0;              //it will give segmentation fault
   cout<<*p;                   
   */

   // if you are writing *p=0;
   //then you have to write
   /*/ int i=5;
    int *p=0; //it is pointing to null value --- but now i want to point to i
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;*/

    /*int i=5;
    int *q=0; 
    q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;
    
    int *p=0; 
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;
    */
   /*int num=5;
   int a=num;                     
   cout<<"a before "<<num<<endl;
   a++;
   cout<<"a after "<<num<<endl;

    int *p=&num;
     cout<<" after "<<num<<endl;
    (*p)++;                               //pointer is not creating any copy 
    cout<<" after "<<num<<endl;
    //how to copy a pointer
    int *q=p;
    cout<<p<<"   "<<q<<endl;
    cout<<*p<<"   "<<*q<<endl;*/
    /*
    int arr[6]={11,12,31};
    cout<<arr<<" "<<&arr<<endl;
    */
   /*
   int arr[6]={11,12,31};
   cout<<arr<<"  "<<(arr+1)<<endl;
   */
  /*int arr[6]={11,21,31};
  int *p=arr;
  cout<<p[2]<<endl;
   */
 /*
  int arr[]={11,21,31,41};         //error--because we are doing arr=arr+1 which is not possible
  int*ptr= arr++;                  //ptr=ptr+1 is possible
  cout<<*ptr<<endl;
  */
 /*
 char ch='a';
 char *ptr=&ch;
 ch++;
 cout<<*ptr<<endl;
 */
    
    return 0;
}