#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vec;
vector<vector<int>> *ptr = &vec;

void jambComb(int nStair, int mStep = 3)
{
    if (mStep == 1)
    {
        vector<int> jamp;
        int sum = 0;
        while (sum != nStair)
        {
            jamp.push_back(1);
            sum++;
        }
        ptr->push_back(jamp);
    }
    else if (mStep > 1)
    {
        vector<int> jamp;
        int sum = 0;
        int tStep = mStep;
        while (sum != nStair)
        {
            if ((sum + tStep) <= nStair)
            {
                sum += tStep;
                jamp.push_back(tStep);
            }
            else if ((sum + tStep) > nStair && tStep > 0)
            {
                tStep--;
            }
        }
        ptr->push_back(jamp);
    }
    else
    {
        return;
    }
    jambComb(nStair, --mStep);
}

void disply(vector<vector<int>> ptr)
{
    for (int i = 0; i < ptr.size(); i++)
    {
        for (int j = 0; j < ptr[i].size(); j++)
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    // 3,2  3
    // 1,1,1;
    // 1,2; 2,1;

    // 4,2  5
    // 1,1,1,1;
    // 2,1,1; 1,2,1; 1,1,2;
    // 2,2;

    // 5,2  8
    // 2,1,1,1; 1,2,1,1; 1,1,2,1; 1,1,1,2;
    // 2,2,1; 1,2,2; 2,1,2;
    // 1,1,1,1,1

    // 6,2  13
    // 1,1,1,1,1,1
    // 2,2,2
    // 2,2,1,1; 2,1,2,1; 2,1,1,2; 1,2,1,2; 1,1,2,2; 1,2,2,1;
    // 2,1,1,1,1; 1,2,1,1,1; 1,1,2,1,1; 1,1,1,2,1; 1,1,1,1,2;

    // 7,2  21
    // 1,1,1,1,1,1,1;
    // 2,2,2,1; 2,2,1,2; 2,1,2,2; 1,2,2,2;
    // 2,2,1,1,1; 2,1,1,1,2; 1,1,1,2,2; 1,1,2,1,2; 1,2,1,1,2; 2,1,1,1,2; 2,1,1,2,1; 2,1,2,1,1; 1,2,2,1,1; 1,1,2,2,1;
    // 2,1,1,1,1,1; 1,2,1,1,1,1; 1,1,2,1,1,1; 1,1,1,2,1,1; 1,1,1,1,2,1; 1,1,1,1,1,2;
    // 8,2
}

int main()
{
    jambComb(5, 2);
    disply(vec);
}