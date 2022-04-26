#include <bits/stdc++.h>
//This is a leetcode problem which converts roman numeral to an integer
//https://leetcode.com/problems/roman-to-integer/
using namespace std;

class Solution {
public:
    int romanToInt(string q) {
        int i=0;
        unordered_map<char, int> roman{
//unordered_map is an associated container that stores elements formed by the combination of key-value and a mapped value.
//Here key value will be of char type and mapped value will be of int type.
            {'I', 1} ,
            {'V', 5},
            {'X', 10},//here we insert values by using [] operator.
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        //a for loop is set here which has if/else statement to print the integer.
        for (int j = 0; j < q.length() - 1; j ++) {
            int cur = roman[q[j]];
            int next = roman[q[j + 1]];
            if (cur >= next) {
                i+= cur;
            } else {
                i-= cur;
            }
        }
        return i+ roman[q[q.length() - 1]];
    }
        
};