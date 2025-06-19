#include <iostream>
#include <vector>
#include <iterator>
#include <complex>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

int main()
{
    cout << "-----------1-------------------------" << endl;
    vector<int> myVector{4, 2, 3, 4, 4, 4, 5, 13, 9, 159};
    cout << "done" << endl << "-----------2-------------------------" << endl;
    cout << count(myVector.begin(), myVector.end(), 4) << endl;
    cout << "-----------3-------------------------" << endl;
    cout << count_if(myVector.begin(), myVector.end(), bind(greater<int>{}, placeholders::_1, 4)) << endl;
    cout << "-----------4-------------------------" << endl;
    cout << count_if(myVector.begin(), myVector.end(), bind(less<int>{}, placeholders::_1, 8)) << endl;
    cout << "-----------5-------------------------" << endl;
    copy(myVector.begin(), myVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl <<"-----------6-------------------------" << endl;
    vector<int> newVector{};
    cout << "done" << endl << "-----------7-------------------------" << endl;
    transform(myVector.begin(), myVector.end() - 1, myVector.begin()+1, back_inserter(newVector), minus<void>{});
    cout << "done" << endl << "-----------8-------------------------" << endl;
    copy(newVector.begin(), newVector.end(), ostream_iterator<int>(cout, " "));
    cout << endl <<"-----------9-------------------------" << endl;
    cout << accumulate(myVector.begin(), myVector.end(), 0) << endl;
}

