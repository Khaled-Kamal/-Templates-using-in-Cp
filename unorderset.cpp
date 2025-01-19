#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;

int main() {

    orderedSet s;
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(5);
    s.insert(1);

    s.erase(5);

    for (auto it: s)
        cout << it << " ";
    // 1 3 4
     cout << st.order_of_key(5); // هيبرنت عدد الارقام اللي اقل من الرقم اللي هحطه هنا
    cout << *st.find_by_order(0) << '\n'; // ببصيلة انديكس وهو بيرجع الفاليو .. بيبدا من زيرو
    

    return 0;
}

// using less --> As if it Were ( Set) sorted && inque
// using less_equal -- > sorted && not inque

// Funcation 
// 1 - order_of_key(x) || Finding No. of elements smaller than x in the set ع
// 2 - find_by_order(x) || Finding the element at thr xTh index in the set || O(logN) 
