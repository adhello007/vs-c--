#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
//change in line 34 by inserting an empty vector.  
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

        v.push_back(vector<int> ());//WE HAVE PUSHED AN EMPTY ROW. this does NOT have 0 as its elements. 
        cout << "enter row " << i + 1 << " elements" << endl;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);//we can do this here because ith vector does exist now because we placed
            //an empty vector. 
        }

        
    }

    

    cout << "=============" << endl;

    for (int i = 0; i < v.size(); i++)
        printVector(v[i]); // this is how you access a row

}