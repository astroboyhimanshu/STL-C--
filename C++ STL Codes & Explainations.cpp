#include<iostream>
#include<array>
using namespace std;



// ARRAY STL

int main(){
	int basic[3] = {1,2,3}; // static array
	
	array<int,4> a = {1,2,3,4}; // also static array
	
	int size = a.size();
	
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
	cout<<"2nd element index: "<<a.at(2)<<endl;
	cout<<"empty or not: "<<a.empty()<<endl;
	cout<<"first element: "<<a.front()<<endl;
	cout<<"last element: "<<a.back()<<endl;

}


// VECTOR STL



#include<iostream>
#include<vector>
using namespace std;
// STL
int main(){
    // vector is a dynamic array
    // vector of size 4, when u put 5th element, it doubles its size, copies previous vector
    
    vector<int> v;
    
    vector<int> a(5,1); // 5 is size and elements start initializing with 1 
    
    cout<<"Size: "<<v.capacity()<<endl;
    
    // how to put element in vector
    v.push_back(1);
     cout<<"Size: "<<v.capacity()<<endl;
    v.push_back(2);
     cout<<"Size: "<<v.capacity()<<endl;
    v.push_back(3); // puts 3 at end 
     cout<<"Size: "<<v.capacity()<<endl; // capacity doubles as size limit exceeded 
    
    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;
    
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    
    // pop back end se 3 nikaal dega 
    v.pop_back();
    
    v.clear(); // clear size
    cout<<"size: "<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}


// Deque STL


#include<iostream>
#include<deque>
using namespace std;
// STL
int main(){
/* n C++, the STL deque is a sequential container that provides the functionality of a double-ended queue data structure.
 In a regular queue, elements are added from the rear and removed from the front.
  However, in a deque, we can insert and remove elements from both the front and rear. Deque Data Structure.*/
 deque<int> d;
 
 // put elements
 d.push_back(1);
 d.push_front(2);
 
 for(int i:d){
     cout<<i<<endl;
 }
 
//  d.pop_back(); // piche se pop kiya to 1 hat jaayega 
//  for(int i:d){
//      cout<<i<<endl;
//  }
 
 
 cout<<"Print first index element: "<<d.at(1)<<endl;
 
 cout<<"Front element: "<<d.front()<<endl;
 cout<<"back element: "<<d.back()<<endl;
 
cout<<"Empty or not: "<<d.empty()<<endl;

cout<<"Before Erase: "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1); // deleted first element 
cout<<"After erase: "<<d.size()<<endl;

for(int i:d){
    cout<<i<<endl;
}

// size = currently how many elements in then data structure 


    }
    
    
// LIST STL


#include<iostream>
#include<list>
using namespace std;
// STL
int main(){

list<int> l;

list<int> n(5,100); // 5 elements and all initialized with 100 

for(int i:n){
    cout<<i<<endl;
    
}


l.push_back(1);
l.push_front(2);

for(int i:l){
    cout<<i<<endl;
    
}

cout<<"Before Erase: "<<l.size()<<endl;
l.erase(l.begin());  // erase first element 
cout<<"After erase: "<<l.size()<<endl;

for(int i:l){
    cout<<i<<endl;
}

cout<<"Size of List: "<<l.size()<<endl;

    }
    
    


// STACK STL



#include<iostream>
#include<stack>
using namespace std;
// Stack STL
int main(){
// LIFO last in first out 
stack<string> s;

s.push("Himanshu");
s.push("Singh");
s.push("Malik");

cout<<"Top Element: "<<s.top()<<endl;

s.pop();
cout<<"Top Element: "<<s.top()<<endl;


cout<<"Size of Stack: "<<s.size()<<endl;

cout<<"Empty or not: "<<s.empty()<<endl;


    }


// QUEUE STL


#include<iostream>
#include<queue>
using namespace std;
// Queue STL
int main(){
// FIFO
queue<string> q;

q.push("Himanshu");
q.push("Singh");
q.push("Malik");

cout<<"Size before pop: "<<q.size()<<endl;

cout<<"First Element: "<<q.front()<<endl;
q.pop();
cout<<"First Element: "<<q.front()<<endl;
    
cout<<"Size after pop: "<<q.size()<<endl;
}



// Priority Queue STL


#include<iostream>
#include<queue>
using namespace std;
// Priority Queue STL - Made a queue whose first element is greatest 
int main(){
priority_queue<int> maxi; // max heap - first element is greatest 

priority_queue<int,vector<int>,greater<int> > mini; // min heap

maxi.push(1);
maxi.push(2);
maxi.push(3);
maxi.push(4);

cout<<"Size: "<<maxi.size()<<endl;
int n = maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;

mini.push(5);
mini.push(3);
mini.push(0);
mini.push(1);
mini.push(2);

int p = mini.size();
for(int i=0;i<p;i++){
    cout<<mini.top()<<" ";
    mini.pop();
}

cout<<"Empty or not:  "<<mini.empty()<<endl;

}


// SET STL


#include<iostream>
#include<set>
using namespace std;
// Set STL -  sets in C++ are the type of STL containers that are used for storing elements in a sorted way. Can't Modify , takes element once only.
int main(){

set<int> s;

s.insert(5);
s.insert(5);
s.insert(5);
s.insert(0);
s.insert(1);
s.insert(1);
s.insert(1);
s.insert(6);
s.insert(0); //complexity = O(log(n))

for(auto i : s){
    cout<<i<<endl;
}

set<int>::iterator it = s.begin();
it++;

s.erase(s.begin()); // deletes first element 

for(auto i : s){
    cout<<i<<endl;
}

s.erase(it); // deletes 1

for(auto i : s){
    cout<<i<<endl;
}
cout<<endl;
cout<<"5 there? "<<s.count(5)<<endl; // tells if this elemenet there or not in the set
cout<<"-5 there? "<<s.count(-5)<<endl;

set<int>::iterator itr = s.find(5);

cout<<"Value present at ITR: "<<*it<<endl;

for(auto it = itr;it!=s.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
}



// MAP STL


#include<iostream>
#include<map> // O(Log(n))
using namespace std;

// Map STL - one key points to one value only. Maps are associative containers that store elements in a combination of key values and mapped values 
//that follow a specific order. No two mapped values can have the same key values. In C++, maps store the key values in ascending order by default.

int main(){

map<int,string> m;
m[11]="babbar";
m[2]="love";
m[30]="kumar";

m.insert({5,"bheem"});


// comes in sorted order

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"finding 13: "<<m.count(13)<<endl;
cout<<"finding 30: "<<m.count(30)<<endl;

m.erase(30);
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

auto it = m.find(5);

for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}


}


// STL ALGOS 


#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;

// STL ALGOS 
int main(){
    
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    
    v.push_back(6);
    
    v.push_back(7);
    
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    // 0 means 5 not there 
        cout<<"6 there? "<<binary_search(v.begin(),v.end(),6)<<endl;
        
  cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; // 
   cout<<"Upper Bound: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl; // 
  
  int a = 3;
  int b = 5;
  
  cout<<"Min: "<<min(a,b)<<endl;
  
  cout<<"Max: "<<max(a,b)<<endl;
  
  swap(a,b);
  cout<<a<<" is new a "<<endl;
  
  string abcd = "abcd";
  reverse(abcd.begin(),abcd.end());
  cout<<"String: "<<abcd<<endl;
  
  rotate(v.begin(),v.begin()+1,v.end());
  cout<<"after rotate: "<<endl;
  for(int i:v){
      cout<<i<<" ";
  }
}
