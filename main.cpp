#include<iostream>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;
int main(){
 // we cannot add values in queue from start we have to add  values from end
    queue <int> s;

    s.push(1);
    s.push(4);
    s.push(2);
    s.pop(); // in queue value remove fromm start

   cout<<s.front()<<endl;// for first value
  cout<< s.size()<<endl; //  s will become zero because i swap it with s2 and s2 was empty



}
