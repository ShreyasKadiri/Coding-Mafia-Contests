/*
Sarthak is lost somewhere. Truthfully he has very poor navigation skills. He was going to a park initially. The park is rectangular in 
shape and has its sides parallel to x and y axes. Any point on the plane is represented as (x,y) where  and  are the  and  coordinates of the point. 
The park has (x1,y1) as its bottom-left point and (x2,y2) as top-right point. Now, Sarthak knows that his current position is (x3,y3). Now he wishes to know whether 
he is inside the park or not. Note : Borders are not considered to be inside the park

Input Format

First line contains one integer T denoting number of testcases

For each test case, there is a single line containing six integers x,y,x1,y1,x2,y2 denoting coordinates of bottom-left point of the park,top-right point of the park and current position of Sarthak respectively

Output Format

For each test case if Sarthak is inside the park, print "INSIDE" on a seperate line

and if Sarthak is not inside the park, print "NOT INSIDE" on a seperate line

Sample Input 0

3
1 1 4 4 2 3
1 1 4 4 6 6
1 1 4 4 1 3
Sample Output 0

INSIDE
NOT INSIDE
NOT INSIDE

*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x[3],y[3];
        for(int i = 0; i < 3; ++i)cin >> x[i] >> y[i];
        if(x[0] < x[2] && x[1] > x[2] && y[0] < y[2] && y[1] > y[2])printf("INSIDE\n");
        else printf("NOT INSIDE\n");
    }
    return 0;
}
