What will be the output of the program given below?

interface Inherit_Multiple{
    String str1 = "This ";
}
interface Interface2{
    String str2 = "is ";
}
interface Interface3{
    String str1 = "Java ";
}
interface Interface4{
    String str1 = "World !!!";
}
class SubClass implements Inherit_Multiple,Interface2,Interface,Interface4{
    String str;
    SubClass(){
        str = str1.concat(str2).concat(str3).concat(str4);
    }
    void display(){
        System.out.println(str);
    }
}
public class MainClass{
    public static void main(String args[]){
        SubClass obj = new SubClass();
        obj.display();
    }
}
//--------------------------------------------------------
struct Node * Function(Struct Node * start){
    struct Node * temp1,* temp2;
    temp1=temp2=NULL;
    while(start!=NULL){
        temp2 = start->next;
        start->next = temp1;
        temp1 = start;
        start= temp2;
    }return temp1;
}
int main(){
    Struct Node* start = NULL;
    start = Function();
}
//------------------------------------------------------------
complete binary tree -  every level of the tree is completely filled except for the last level
