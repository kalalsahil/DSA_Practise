#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> n = {1, {3, 4}};

    cout << n.first << " " << n.second.second << " " << n.second.first << endl;

    pair<int, int> arr[] = {
        {1, 2},
        {2, 5},
        {5, 1},
    };

    cout << arr[1].second;
}

void explainVectors()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    // there needs to be curly bracket in push_back
    // but emplace_back automatically identifies elements to be a pair so no {} required.
    vec.emplace_back(1, 2);

    // container containing 5 instances of 100.
    vector<int> ve(5, 100);

    // container containing 5 instances of 0 as no value is spacified.
    vector<int> ve2(5);

    vector<int> v1(5, 20);
    // You can increase the size of vector even if you are predefining the size.
    // v2 is another container having data same as of v1.
    vector<int> v2(v1);

    vector<int>::iterator it = v2.begin();
    /*
        we also have:
        vector<int>::iterator it = v2.end();
        vector<int>::iterator it = v2.rend();
        vector<int>::iterator it = v2.rbegin();
    */
    it++;
    cout << *(it) << endl;

    cout << v.back() << endl;

    // print entire vector using iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // using auto
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // deletion
    v.erase(v.begin() + 1);

    v1.erase(v.begin() + 1, v.begin() + 4);

    // insertion
    v1.insert(v1.begin(), 3);
    v1.insert(v1.begin() + 1, 2, 4);
    for (auto it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        cout << *(it1) << " ";
    }
    cout << endl;

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    v.pop_back();

    v.swap(v2);

    v.clear();

    cout << v.empty();
}

void explainList()
{
    list<int> ls;

    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5);   //{5,2,4}
    ls.emplace_front(); //{2,4}

    // rest all functions same as vectors
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  // {1,2}
    dq.push_front(4);    // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    dq.pop_back();  // {3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();
    dq.front();

    // rest functions same as vectors
}

void explainStack()
{
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.push(3);    // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // 5

    st.pop(); // st looks like {3,3,2,1}

    cout << st.top(); // 3

    cout << st.size(); // 4

    cout << st.empty(); // false

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5;

    cout << q.back(); // prints 9

    // Q is {1,2,9}
    cout << q.front(); // prints 1

    q.pop(); // {2,9}

    cout << q.front(); // prints 2
}

void explainPQ()
{
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // 10

    pq.pop(); // {8,5,2}

    cout << pq.top(); // 8

    // Minimum Heap or min heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);     // {5}
    pq1.push(2);     // {2,5}
    pq1.push(8);     // {2,5,8}
    pq1.emplace(10); // {2,5,8,10}

    cout << pq.top(); // 2
}

void explainSet()
{
    // Everything in Sorted order and having unique elements
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}

    // auto it = st.find(3);
    // returns st.end() if element is not present.

    // auto it = st.find(6);

    st.erase(5);

    int cnt = st.count(1);
    // return 1 if present otherwise 0;

    // auto it = st.find(3);
    // st.erase(it);// removes 3 and maintains sorted order.

    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2); // after erase {1,4,5} [first,last)
    // auto it1 = st.lower_bound(2);
    // auto it2 = st.upper_bound(3);
}

void explainMultiSet()
{
    // Everything same as set
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1s erased

    int cnt = ms.count(1);
    // only single erased
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1),ms.find(1)+2);
}

void explainUSet()
{
    unordered_set<int> st;
    // lower_bound and upper_bound functions do not work
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
    // worst case time complexity goes to O(n) which is very rare.
    // otherwise all operations take O(1) time.
}

void explainMap()
{
    // Stores unique keys in sorted order.
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;
    mpp.insert({2, 4});

    mpp3[{2, 3}] = 10;

    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];

    // auto it1 = mpp.find(3);
    // cout<< *(it1).second;

    // auto it = mpp.lower_bound(2);
    // auto it = mpp.upper_bound(3);
}

void explainMultiMap()
{
    // everything same as map, only it can store multiple key.
    // only mpp[key] can not be used here.
}

void explainUnorderedMap()
{
    // not in sorted keys but all keys are unique.
    // constant time
}

/* The comp function helps in sorting elements in order:
Second element in increasing order
if second element is same then
first element in decreasing order*/

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first > p2.first)
        return true;
    return false;
}
void algo()
{
    pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
    int n = 3;
    sort(p, p + n, comp);
    for (auto it : p)
    {
        cout << it.first << " " << it.second << endl;
    }

    int num = 7;
    int cnt = __builtin_popcount(num);
    // returns number of set bits.
    // if long long num then __builtin_popcountll.

    string s = "123";
    // if you want all the permutations it must be sorted order.
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    vector<int> a{1, 2, 3};
    int maxi = *max_element(a.begin(), a.end());
}

int main()
{
    algo();
    return 0;
}