/*
Ritesh was solving a competitive question. Well he doesn't know the solution so he decided to print a pattern.

Now, he has a hypothesis, that the pattern is valid in case all the values in the pattern are perfect squares.

So he generated a list of values, and needs to check to whether his hypothesis is correct or not. It's better if two people verify his hypothesis. So given a list of  values ritesh observed, tell whether Ritesh made correct hypothesis or not.

Note: An integer  is considered perfect square if and only if there exist some integer  such that 

Input Format

First line contains a single integer  denoting number of test cases

For each test case, first line contains single integer  denoting number of valid values

Next line contains  integers denoting valid values 

Constraints




Output Format

For each test case print "Yes" if Ritesh's hypothesis is correct and "No" otherwise

Sample Input 0

3
4
0 1 4 9
4
0 -1 4 9
4
0 1 4 8
Sample Output 0

Yes
No
No

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,n,v=1;
        cin >> n;
        while(n--){
            cin >> a;
            if(a < 0 || (int)sqrt(a) * (int)sqrt(a) != a)v=0;
        }
        v ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
