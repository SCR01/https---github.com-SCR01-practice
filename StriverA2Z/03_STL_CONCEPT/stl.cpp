#include<bits/stdc++.h>// header file includes every Standard library
using namespace std;// using namespace std for avoiding std:: before every statement


void golu(){
    cout<< "Hello World!"<<endl;//won't return
}

int sum(int a, int b){
    return a+b;//will return the sum of a and b
}

void pairrrr(){//first container of pair is of type int and second container of pair is of type string
    pair<int,int> p1 = {1,2};//pair of integers
    pair<int,string> p2 = {1,"Hello"};//pair of integer and string
    cout<<p1.first<<" "<<p1.second<<endl;//accessing first and second
    cout<<p2.first<<" "<<p2.second<<endl;//accessing first and second
    pair<int,pair<int,int>> p3 = {1,{2,4}};
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;//accessing first and second of second
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};//array of pairs
    cout<<arr[0].first<<" "<<arr[0].second<<endl;//accessing first and second of first pair
    cout<<arr[1].first<<" "<<arr[1].second<<endl;//accessing first and second of second pair
    cout<<arr[2].first<<" "<<arr[2].second<<endl;//accessing first and second of third pair
    cout<<"End of the Pair Explanation"<<endl;
}

void explainVector(){// vector is a dynamic array that can grow and shrink in size
    vector<int> v;
    v.push_back(1);//inserting element at the end of the vector
    cout<<v[0]<<" "<<v.front()<<" "<<v.back()<<endl;//accessing
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,55);
    vector<int> v2(5);
    vector<int> v3(5,22);
    vector<int> v4(v3);

    vector<int>:: iterator it = v1.begin();
    it++;
    cout<<*it<<endl;// output: 55 (iterator pointing to the second element of the vector v1)

    vector<int>:: iterator it2 = v1.end();
    // cout<<*it2<<endl;   // ❌ can't dereference end()

    vector<int>:: reverse_iterator it3 = v1.rbegin();
    cout<<*it3<<endl;

    vector<int>:: reverse_iterator it4 = v1.rend();
    // cout<<*it4<<endl;   // ❌ can't dereference rend()

    cout<<v1[0]<<" "<<v1.at(0)<<endl;

    cout<<v.back()<<" ";//output: 2 (accessing last element of the vector v)

    for(vector<int>:: iterator it = v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    vector<pair<int,int>> vec2 = {{1,2},{3,4},{5,6}};
    for(auto it = vec2.begin(); it!=vec2.end();it++){
        cout << it->first << " " << it->second <<endl;
    }

    
// remove elements(erase) from vector
    vector<int> vit = {1,2,3,4,5};
    vit.erase(vit.begin()+2);//erasing element at index 2
    vit.erase(vit.begin()+1,vit.begin()+3);//erasing element from index 1 to index 2 (exclusive of index 3)


// insert function

vector<int> inn(2,100);
inn.insert(inn.begin(),300);//inserting 300 at index 1
cout<<inn[0]<<" "<<inn[1]<<" "<<inn[2]<<endl;
inn.insert(inn.begin()+1,2,200);
cout<<inn[0]<<" "<<inn[1]<<" "<<inn[2]<<endl;


vector<int> copy(2,44);
inn.insert(inn.begin(),copy.begin(),copy.end());//inserting copy vector at the beginning of inn vector
cout<<inn[0]<<" "<<inn[1]<<" "<<inn[2]<<" "<<inn[3]<<" "<<inn[4]<<" "<<inn[5]<<endl;
//size
cout<<inn.size()<<endl;
//some other operations

v.pop_back();//removing last element
v.clear();//removing all elements
v1.swap(v2);//swapping v1 and v2
cout<<v.empty()<<endl;//checking if vector is empty or not
cout<<"End of the Vector Explanation"<<endl;
// emplace back and push back difference is that emplace back constructs the element in place and push back copies the element to the vector. So, emplace back is more efficient than push back because it avoids unnecessary copying of elements.
}


void explainList(){// list is a doubly linked list that can grow and shrink in size and allows insertion and deletion of elements from both ends in O(1) time complexity
    // list is a doubly linked list
    list<int> ls;

    ls.push_back(1);
    cout<<ls.front()<<" "<<ls.back()<<endl;//output: 1 1
    ls.emplace_back(2);
    cout<<ls.front()<<" "<<ls.back()<<endl;//output: 1 2

    ls.push_front(3);
    cout<<ls.front()<<" "<<ls.back()<<endl;//output: 3 2
    list<pair<int,int>> ls2;
    ls2.emplace_front(1,2);
    cout<<ls.front()<<" "<<ls.back()<<endl;//output: 3 2
    cout<<ls2.front().first<<" "<<ls2.front().second<<endl;//output: 1 2
cout<<"End of the List Explanation"<<endl;
}

void ExplainDeque(){// deque is a double ended queue that can grow and shrink in size and allows insertion and deletion of elements from both ends in O(1) time complexity
    // deque is a double ended queue
    deque<int> dq;

    dq.push_back(1);
    cout<<dq.front()<<" "<<dq.back()<<endl;//output: 1 1
    dq.emplace_back(2);
    cout<<dq.front()<<" "<<dq.back()<<endl;//output: 1 2

    dq.push_front(3);
    cout<<dq.front()<<" "<<dq.back()<<endl;//output: 3 2
    deque<pair<int,int>> dq2;
    dq2.emplace_front(1,2);
    cout<<dq.front()<<" "<<dq.back()<<endl;//output: 3 2
    cout<<dq2.front().first<<" "<<dq2.front().second<<endl;//output: 1 2
    //for removing the element
    dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl;//output: 3 1

cout<<"End of the Deque Explanation"<<endl;
}

void ExplainStack(){//stack complexity of push, pop and top is O(1)
    // stack is a LIFO data structure
    // Three generic functions of stack are push(), pop() and top()
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;//output: 4
    st.pop();
    cout<<st.top()<<endl;//output: 3
    cout<<st.size()<<endl;//output: 3
    cout<<st.empty()<<endl;//output: 0 (false)
    stack<int>st1, st2;
    st1.swap(st2);//swapping st1 and st2
    cout<<"End of the Stack Explanation"<<endl;

}

void ExplainQueue(){
    // queue is a FIFO data structure
    // Three generic functions of queue are push(), pop() and front()
queue<int> q;
q.push(1);
q.push(2);
q.emplace(3);
cout<<q.front()<<endl;//output: 1

q.back() += 3;
cout<<q.back()<<endl;//output: 6

q.front() += 2;
cout<<q.front()<<endl;//output: 3

q.pop();
cout<<q.front()<<endl;//output: 2
cout<<q.back()<<endl;//output: 6

cout<<"End of the Queue Explanation"<<endl;

}

void ExplainPriorityQueue(){
    // priority queue is a data structure that is similar to a queue but it gives priority to the elements based on their value
    // Three generic functions of priority queue are push(), pop() and top()
   priority_queue<int> pq;
   //max heap
   pq.push(1);
   pq.push(2);
   pq.emplace(10);
// by default, priority queue gives priority to the maximum element
   cout<<pq.top()<<endl;
   
    pq.pop();
    cout<<pq.top()<<endl;
    // for minimum element, we can use greater<int> as a comparator
    priority_queue<int,vector<int>,greater<int>> pq2;// min heap priority queue that gives priority to the minimum element
    // min heap
    pq2.push(1);
    pq2.push(2);
    pq2.emplace(10);

    cout<<pq2.top()<<endl;
    pq2.pop();
    cout<<pq2.top()<<endl;
    cout<<"End of the Priority Queue Explanation"<<endl;

}

void ExplainSet(){
    //set is sorted and unique data structure
    // Three generic functions of set are insert(), erase() and find()
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.emplace(5);
    st.insert(3);
// st {1,2,3,5} (sorted and unique)
    //functionality of insert in vector can be used also, that only increases the efficiency of the insert function in set
    //begin() and end() can be used in set also
    //empty() and size() can be used in set also

    auto it = st.find(5);
    cout<<*it<<endl;//output: 5

    st.erase(2);
    // st {1,3,5}

    cout<<st.size()<<endl;//output: 3
    cout<<st.count(2)<<endl;//output: 0 (false)

    auto it2 = st.find(1);
    auto it3 = st.find(5);
    st.erase(it2,it3);//erasing elements from it2 to it3 (exclusive of it3)
    auto it4 = st.lower_bound(2);//returns the iterator to the first element that is greater than or equal to 2
    auto it5 = st.upper_bound(4);//returns the iterator to the first element that is greater than 4
cout<<*it4<<endl;//output: 3
cout<<*it5<<endl;//output: 5


cout<<"End of the Set Explanation"<<endl;

}

void ExplainMultiSet(){
    // multiset is a sorted and non-unique data structure
    // Three generic functions of multiset are insert(), erase() and find()
   multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.emplace(5);
    ms.insert(3);

    cout << *ms.find(1) << endl; // 1
    cout << ms.count(1) << endl; // 2

    ms.erase(2); // removes ALL 2s
    cout << ms.count(2) << endl; // 0

    ms.erase(ms.find(5)); // removes ONE 1
    cout << ms.count(5) << endl; // 1

    cout << "End of the MultiSet Explanation" << endl;
}

void ExpalinUnorderedSet(){
    // unordered set is a unique but unsorted data structure based on hash table
    // Three generic functions of unordered set are insert(), erase() and find()
    unordered_set<int> us;
// all the things similliar to set but the upper bound and lower bound functions are not present in unordered set because it is not sorted
    us.insert(1);
    us.insert(2);
    us.insert(2);
    us.emplace(5);
    us.insert(3);

    auto it = us.find(5);
    cout<<*it<<endl;//output: 5
    cout<<us.count(5)<<endl;

    us.erase(2);
    cout<<us.size()<<endl;//output: 3
    cout<<us.count(2)<<endl;//output: 0 (false)
// worst case complexites of unordered set are O(n) for insert, erase and find but average case complexities are O(1) for insert, erase and find

cout<<"End of the Unordered Set Explanation"<<endl;

}

void ExplainMAP(){
    // map is a sorted and unique data structure that stores key-value pairs
    // Three generic functions of map are insert(), erase() and find()
   // in maps key is unique but value can be duplicate
    //key and value can be of any data type
    map<int,int> mp;
    map<int,pair<int,int>> mp2;
    map<pair<int,int>,int> mp3;

    mp[1] = 2;
    mp.emplace(3,4);
    mp.insert({5,6});
    cout<<mp[1]<<endl;//output: 2
    cout<<mp[3]<<endl;//output: 4
    cout<<mp[5]<<endl;//output: 6

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;//output: 1 2, 3 4, 5 6
    }
    cout<<mp[1];
    cout<<mp[5]<<" ";
    cout<<mp[10]<<endl;//output: 0 (default value for int)

    auto it = mp.find(3);
    cout<<it->second<<endl;

     auto it1 = mp.lower_bound(2);//returns the iterator to the first element that is greater than or equal to 2
    auto it2 = mp.upper_bound(4);//returns the iterator to the first element that
    cout<<it1->first<<" "<<it1->second<<endl;//output: 3 4

    //erase, swap,size,empty are same
    cout<<"End of the Map Explanation"<<endl;
    
}

void ExplainMultiMap(){
    //similiar to map but the key can be duplicate in multimap
    // multimap is a sorted and non-unique data structure that stores key-value pairs
    // Three generic functions of multimap are insert(), erase() and find()
    // in multimaps key can be duplicate but value can be duplicate
    //key and value can be of any data type
    multimap<int,int> mmp;
    mmp.insert({1,2});
    mmp.insert({1,3});
    mmp.insert({2,4});
    mmp.emplace(3,5);

    for(auto it : mmp){
        cout<<it.first<<" "<<it.second<<endl;//output: 1 2, 1 3, 2 4, 3 5
    }

}

void ExplainUnorderedMap(){
    // unordered map is a unique but unsorted data structure based on hash table that stores key-value pairs
    // Three generic functions of unordered map are insert(), erase() and find()
    // in unordered maps key is unique but value can be duplicate
    //key and value can be of any data type
    unordered_map<int,int> ump;
    ump[1] = 2;
    ump.emplace(3,4);
    ump.insert({5,6});
    cout<<ump[1]<<endl;//output: 2
    cout<<ump[3]<<endl;//output: 4
    cout<<ump[5]<<endl;//output: 6

    auto it = ump.find(3);
    cout<<it->second<<endl;

    //erase, swap,size,empty are same       

}
bool comp(pair<int,int> p1, pair<int,int> p2){
    if (p1.second <p2.second) return true;
    if(p1.second>p2.second) return false;
//if they are same
if(p1.first>p2.first) return true;
return false;
}

void ExplainExtra(){
    //sort(a, a+n);for sorting an array of size n
    //sort(v.begin(),v.end());for sorting a vector

    //sort(a+2,a+4); for sorting from index 2 to index 3 (exclusive of index 4)
   // sort(a, a+n, greater<int>); for sorting in descending order

    pair<int,int> a[] = {{1,2},{3,4},{5,6}};
    // sort it according to second element of pair
    // if second element is same then sort
    // it according to first element but in descending

    //sort(a, a+n, comp); for sorting according to custom comparator function
    int num = 7;
    int cnt = __builtin_popcount(num);//returns the number of set bits in the binary representation of num
    cout<<cnt<<endl;//output: 3 (binary representation of 7 is
    long long num2 = 20239594949949;
    int cnt2 = __builtin_popcountll(num2);//returns the number of set bits in the binary representation of num2

string s = "123";
sort(s.begin(),s.end());
do{
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end()));//generates the next permutation of the string s in lexicographical order and returns false if there is no next permutation (i.e., if s is the last permutation)
pair<int,int> max1 = *max_element(a, a+4); //returns the maximum element in the array a of size n
pair<int,int> min1 = *min_element(a, a+4); //returns the minimum element in the array a of size n
cout<<"End of the Extra Explanation"<<endl;
}

int main(){

    int hi = sum(2,3);
    cout<<hi<<endl;
    golu();
    pairrrr();
    explainVector();
    explainList();
    ExplainDeque();
    ExplainStack();
    ExplainQueue();
    ExplainPriorityQueue();
    ExplainSet();
    ExplainMultiSet();   
    
    ExplainDeque();
    ExpalinUnorderedSet(); 
    ExplainMAP();  
    ExplainExtra();
    return 0;
}
