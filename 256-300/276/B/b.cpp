#include <iostream>

using namespace std;

int main(void)
{

    int long long City;
    int long long NumRoad;

    cin >> City >> NumRoad;

    int CityConnect[City][City] = {};
    int CityCount[City] = {};

    // 入力
    for (int i = 0; i < NumRoad; i++)
    {
        int x, y;
        cin >> x >> y;
        // 入力した道を登録
        if (CityConnect[x - 1][y - 1] == 0 and CityConnect[y - 1][x - 1] == 0)
        {
            CityConnect[x - 1][y - 1] = 1;
            CityConnect[y - 1][x - 1] = 1;
            CityCount[x - 1] += 1;
            CityCount[y - 1] += 1;
        }
    }

    for (int i = 0; i < City; i++)
    {
        cout << CityCount[i];

        if (CityCount[i] > 0)
        {
            for (int j = 0; j < City; j++)
            {
                if (i == j)
                {
                    continue;
                }
                else if (CityConnect[i][j] == 1)
                {
                    cout << " " << j + 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
