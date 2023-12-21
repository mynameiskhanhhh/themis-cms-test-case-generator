#include<bits/stdc++.h>
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

class Random {
public:
    int nextInt(int l, int r) {
        return uniform_int_distribution<int>(l, r)(rng);
    }

    long long nextLongLong(long long l, long long r) {
        return uniform_int_distribution<long long>(l, r)(rng);
    }

    double nextDouble(double l, double r) {
        return uniform_real_distribution<double>(l, r)(rng);
    }

    long double nextLongDouble(long double l, long double r) {
        return uniform_real_distribution<long double>(l, r)(rng);
    }

    template<typename RandomAccessIterator>
    void shuffle(RandomAccessIterator first, RandomAccessIterator last) {
        random_shuffle(first, last, [this](unsigned int idx) {      
            return nextInt(0, idx - 1);
        });
    }

    vector<int> nextVectorInt(int sz, int l, int r) {
        vector<int> v;
        for (int i=0; i<sz; i++) v.push_back(nextInt(l, r));
        return v;
    }

    vector<long long> nextVectorLongLong(int sz, long long l, long long r) {
        vector<long long> v;
        for (int i=0; i<sz; i++) v.push_back(nextLongLong(l, r));
        return v;
    }

    vector<double> nextVectorDouble(int sz, double l, double r) {
        vector<double> v;
        for (int i=0; i<sz; i++) v.push_back(nextDouble(l, r));
        return v;
    }

    vector<long double> nextVectorDouble(int sz, long double l, long double r) {
        vector<long double> v;
        for (int i=0; i<sz; i++) v.push_back(nextLongDouble(l, r));
        return v;
    }

    string nextString(int sz, bool has_lower, bool has_upper, bool has_digit) {
        string all = "";
        if (has_lower) {
            for (char c='a'; c<='z'; c++) all.push_back(c);
        }
        if (has_upper) {
            for (char c='A'; c<='Z'; c++) all.push_back(c);
        }
        if (has_digit) {
            for (char c='0'; c<='9'; c++) all.push_back(c);
        }
        int all_len = all.size();
        shuffle(all.begin(), all.end());
        string s = "";
        for (int i=0; i<sz; i++) s.push_back(all[nextInt(0, all_len-1)]);
        return s;
    }
};

Random rnd;