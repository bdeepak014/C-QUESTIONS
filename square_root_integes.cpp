#include<iostream>
using namespace std;
int binary(int l,int r,int k)
{
    if(k==1)
    {
       return 1;
    }
   int mid;
   while(l<=r)
   {
        mid=(l+r)/2;
        int fnd=mid*mid;
        int fnd2=(mid-1)*(mid-1);
        int fnd1=(mid+1)*(mid+1);
        if(fnd==k)
        {
            return mid;
        }
        else if(fnd<k)
        {
            if(fnd1>k)
            {
                return mid;
            }
            else
            {
                return binary(mid+1,r,k);
            }
        }

        else if(fnd>k)
        {
            if(fnd2<k)
            {
                return mid-1;
       }
            else
            {
                return binary(l,mid-1,k);
            }
        }
    }
return -1;
}
main()
{
int num;
cin>>num;
int res=binary(0,num/2,num);
cout<<res;
}

/* Sir Method
int binSqrt(int A, int low, int high) {
     if(low >= high) {
         if(low == 0) return 0;
         return high * high > A ?  high-1 : high;
     }

     int mid = (low+high) / 2;
     long squareMid = (long)mid * (long)mid;
     
     if(squareMid == (long)A)
         return mid;
     
     if(squareMid < (long)A)  return binSqrt(A, mid+1, high);
     else return binSqrt(A, low, mid-1);
 }
 int floorSqrt(int num) {
    return binSqrt(num, 0, num);
}
*/


