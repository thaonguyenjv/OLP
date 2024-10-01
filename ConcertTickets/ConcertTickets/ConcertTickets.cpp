#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> concertTickets(vector<int>& price, vector<int>& pay)
{
    multiset<int> maxPrice;

    for (int i = 0; i < price.size(); i++)
    {
        maxPrice.insert(price[i]);
    }

    vector<int> ans(pay.size());

    for (int i = 0; i < pay.size(); i++)
    {
        int temp = pay[i];

        auto itr = maxPrice.upper_bound(temp);

        if (itr == maxPrice.begin())
        {
            ans[i] = -1;
        }
        else
        {
            itr--;
            ans[i] = *itr;
            maxPrice.erase(itr); // Erase the used ticket
        }
    }
    return ans;
}

int main() {

    int N, m;
    cin >> N >> m;

    vector<int> price(N);
    vector<int> pay(m);
    // bang ve'
    for (int i = 0; i < N; i++) {
        cin >> price[i];
    }
    // tien san long tra
    for (int i = 0; i < m; i++) {
        cin >> pay[i];
    }
    vector<int> result = concertTickets(price, pay);
    // In KQ
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
