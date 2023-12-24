#include <iostream>

/*
                Q. find the Nth root of given integer M

            explanation -  N = 3    M = 27  ->  (27)^(1/3) = 3
                           N = 4    M = 69  ->  (69)^(1/4) = -1

            brute force -  will do linear search to find Nth root
                            for  M = 27
                        we take 1 -  1*1*1 = 1      not our answer
                        we take 2 -  2*2*2 = 8      not our answer
                        we take 3 -  3*3*3 = 27     this is our answer
                                    our ans will be '3'

        Pseudo code
for(i=1->m)                     // root can go upto 'm'
{
    if(f(i, n) == m)            // we will create a function here to give i^n
        return i;
    else if(f(i, n) > m)
        break;
}
return -1;


            TC - O(Nth root(N))


            Optimal sol -  use Binary search
                                if   N = 3   M = 27
                                then low = 1, high = 27  then mid = 14
                                14 * 14 * 14 = exceeded than 27, so we will not take entire right from 14
                                then low = 1, high = 13  then mid = 7
                                7 * 7 * 7 = exceeded than 27, so we will not take entire right from 7
                                then low = 1, high = 6  then mid = 3.5 = 3
                                3 * 3 * 3 = 27, so we will not take 3 as our answer

                                now taking  N = 4   M = 69
                                then low = 1, high = 69  then mid = 35
                                35 * 35 * 35 * 35 = exceeded than 69, so we will not take entire right from 35
                                then low = 1, high = 34  then mid = 17
                                17 * 17 * 17 * 17 = exceeded than 69, so we will not take entire right from 17
                                then low = 1, high = 16  then mid = 8
                                8 * 8 * 8 * 8 = exceeded than 69, so we will not take entire right from 8
                                then low = 1, high = 7  then mid = 4
                                4 * 4 * 4 * 4 = exceeded than 69, so we will not take entire right from 4
                                then low = 1, high = 3  then mid = 2
                                2 * 2 * 2 * 2 = lower than 69, so we will not take entire left till 2
                                then low = 3, high = 3  then mid = 3
                                3 * 3 * 3 * 3 = exceeded than 69, so we will not take entire right from 3
                                then low = 3  high = 2, here high crossed low and we got no integer which get us 69 
                                    so there is no exact answer for this question
                                    we will return '-1' as our answer

        Pseudo code
f(n, m)
{
    low = 1, high = m
    while(low <= high)
    {
        mid = (low + high)/2
        if(f(mid, n) == m)              // function (mid)^n
            return mid;
        else if(f(mid, n) < m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


            TC - O(log base2 M)


        Actual code
// return 1 if == m
// return 0 if < m
// return 2 if > m
int func(int mid, int n, int m)
{
    long long ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if(ans > m)
            return 2;
    }
    if(ans == m)
        return 1;
    return 0;

}

int NthRoot(int n, int m)
{
    int low = 1, high = m;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if(midN == m)
        {
            return mid;
        }
        else if(midN < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
*/

int main()
{
    std::cout << "Hello World!\n";
}