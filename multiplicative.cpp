
#include <bits/stdc++.h>
using namespace std;

void multiplicativeCongruentialMethod(
    int Xo, int m, int a,
    vector<int> &randomNums,
    int noOfRandomNums)
{

    randomNums[0] = Xo;

    for (int i = 1; i < noOfRandomNums; i++)
    {

        randomNums[i] = (randomNums[i - 1] * a) % m;
    }
}

int main()
{
    int Xo = 3;
    int m = 15;
    int a = 7;

    int noOfRandomNums = 10;

    vector<int> randomNums(noOfRandomNums);

    multiplicativeCongruentialMethod(
        Xo, m, a, randomNums,
        noOfRandomNums);

    for (int i = 0; i < noOfRandomNums; i++)
    {
        cout << randomNums[i] << " ";
    }
    return 0;
}
