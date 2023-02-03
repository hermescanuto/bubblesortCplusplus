#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

void printOut(vector<int> const &input)
{
    copy(input.begin(),
              input.end(),
              ostream_iterator<int>(cout, ","));     
    cout << endl; 
}



void bubbleSort(vector<int> &v)
{
    for (vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        for (int j = 0; j < v.size() - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> v = {5, 1, 4,0, 2, 8,3,10,7,-1};
    printOut(v);   
    bubbleSort(v);
    printOut(v);    
    return 0;
}
