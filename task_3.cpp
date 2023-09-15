#include <iostream>
using namespace std;
int evendingits(long long number, int &ans)
{
    if (number / 10 == 0)
    {
        if (number % 2 == 0)
        {
            ans++;
        }
    }
    else
    {
        int tmp = number % 10;
        if (tmp % 2 == 0)
            ans++;
        number = number / 10;
        evendingits(number, ans);
    }
    return 1;
}
int main()
{
    long long a = 1373955553557;
    int ans = 0;
    evendingits(a, ans);
    cout << "Количество четных цифр: " << ans << endl;
}