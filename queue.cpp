// write a program to insertion in queue.
 #include<iostream>
 using namespace std;
 string queue[100];
 int maxqueue=100,head=-1,tail=-1;
 void insert(string value)
 {
   if (tail>=maxqueue-1){
      cout<<"queue underflow"<<endl;
   }
   else if(head==tail && head==-1){
      head=head+1;
      tail=tail+1;
      queue[tail]=value;
   }
   else {
      tail= tail+1;
      queue[tail]=value;
   }
 }
 void display(){
   int i;
   if (tail==-1){
      cout<<"\nqueue is empty";
   }
   else{
      cout<<"\nqueue :";
      for(i=head; i<tail; i++){
         cout<<queue[i]<<" ";
      }
   }
 }
int main(){
   string val;
}
 
