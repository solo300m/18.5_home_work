#include <iostream>
#include <vector>
using namespace std;
void swapArr(int *arr, vector<int> *vec)
{
    for (int i = 0; i < vec->size(); i++)
    {
        int tmp = *(arr + i);
        *(arr + i) = vec->at(i);
        vec->at(i) = tmp;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> *b = &vec;
    int arr[] = {6, 7, 8, 9, 0};
    int *a{arr};
    swapArr(a, b);
    cout<<"Вывод данных вектора vec:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << vec[i] << "\t";
    }
    cout << endl;
    cout<<"Вывод данных массива arr:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}