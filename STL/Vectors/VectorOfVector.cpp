#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
int main()
{
    vector<vector<int>> v;
    /*
        Read Array of Vectors before this code.

        Now here, instead of having fixed rows or a fixed
        outer vector which can have vectors inside, we are having a
        dynamic size of the outer vector or a dyanmic size of the rows.

        So basically, this is a flexible 2d matrix.
    */

    int N;
    cout << "enter number of starting rows" << endl;
    cin >> N; // starting size of the outer vector
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "enter number of elements in row " << i + 1 << endl;
        cin >> n;

        vector<int> temp; // storing it in a temp array because the outer vector itself is of
        // size 0 right now when the loop runs the first time. then when filling the first element of the outer vector(2nd row), at that time
        // that vector would be of size 0 so we cant simple just v[i].push_back(x) in it because outer vector is of dynamic size and v[i] doesnt exist at this
        // moment.
        cout << "enter row " << i + 1 << " elements" << endl;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }

        v.push_back(temp); // placing the entire temp array elements in the row of the vector.
    }

    vector<int> he(5, 3); // we are just adding another row to show the outer vector is dynamic
    v.push_back(he);      // we are filling it with 5 elements named 3.

    cout << "=============" << endl;

    v[0].push_back(120); // we are adding another element in the first row. we can add
    // as many elements in rows as we want like this.
    
    for (int i = 0; i < v.size(); i++)
        printVector(v[i]); // this is how you access a row

    cout << v[0][1] << endl; // we are accesssing the 1st rows' 2nd element.

    
}