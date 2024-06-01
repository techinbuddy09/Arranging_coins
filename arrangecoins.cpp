// brute force Approach-1
class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;// setting i at 1
        while(n>=i)//loop till no>=i//if n=15
        {
            n=n-i;//14//12//9//5//0(n updates)
            i++;//2//3//4////5//6(everytime i gets upated)
        }
        return i-1;//(6-1)5..staircase
        
        //.
        //..
        //...
        //....
        //.....
    }
};

// binary search optimized solution-Approach-2
//Time complexity-OLOG(N)
class Solution {
public:
    int arrangeCoins(int n) {
        long long l=1;// long because function overflow
            long long h=n;
        while(l<=h)
        {
            long long mid=l+(h-l)/2 ;//use this only otherwise overflow
            long long val =mid*(mid+1)/2;
            if(val==n)
            {
               return mid;
            }
            else if(val<n)
            {
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return h;//since ans gets stored in high 
    }
};
// in this 1+2+3+4+5+..n
//s=n(n+1)/2= n^2/2+n/2
// n=5
//l=1
//h=5
// for 1) mid=5+1/2=3  now 5^2/2+5/2=14=>14<=5(n)=>h=4
// for 2) mid=1+4/2=2 now 2^2/2+2/2=2+1=3 3>=5..l=3
// for 2) mid=3+4/2=3 now 9/2+3/2=5==5..found

