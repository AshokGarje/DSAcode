#include<iostream>
#include<math.h>
using namespace std;

class pointDistance{
    int a, b;
    double dst;
public:
    pointDistance(int x, int y){
        a = x;
        b = y;
    }

    pointDistance(pointDistance p, pointDistance q){
        dst = sqrt((pow((p.a - q.a),2)) + (pow((p.b - q.b), 2)));
        cout<<"The distance between p and q is: "<<dst<<" unit"<<endl;
    }
};
int main()
{
    pointDistance p(1, 0), q(70, 0), r(p,q);
    return 0;
}