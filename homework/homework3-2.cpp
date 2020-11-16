//
// Created by 冯灏 on 3/7/20.
//
/*
 * 基本思路：(1)将可以被包含的放在包含的之上，即如果上面有了点，下面就不用判断了
 * (2)一定有一些区间，有重叠但没有包含关系，需要按照一顺序排序，和区间调度是一样的证明
 * (3)还有一些区间，无公共部分，很明显分开做就可以了
 * ---------
 *  -------------
 *            ------
 * 按照从左到右的顺序排列，对各个区间而说，除去(1)中情况,剩下的情况就是(2)(3)，我们又指出(3)是单独考虑的，先从比较简单的(2)开始做
 * 设最优解每个点Ai,贪心解Bi,因为整数区间，不妨设点都是整数的（可以证明凡是小数点，一定有一整数点与其等效）贪心解取当前区间最右端点
 * 前第i-1个点Ai,Bi相同，第i点,Ai<Bi,此时，剩下的区间[Ai,end]的长度大于[Bi,end]
 * 对于剩余的区间有三种，包含Ai、Bi,不包含Ai、Bi,包含Bi而不包含Ai的
 * 所以对于剩下一个区间，相当于是本问题的子问题，贪心策略的解优于或等于最优解，所以贪心策略即为最优解
 * 对于(3)中情况，每个区间都需要一个点，贪心策略可行
 * 对于(1)中情况，稍微复杂一些，这涉及到对区间排序更细一点的规则我们先想如下情况
 *        ---
 *     --------
 *  ---------------
 *  对于这种情况，很明显只要选最小区间里的点就可以，换句话可以说下面两个区间是不需要的
 *  如果去除所有的如第二第三个区间，那么这个问题又回到了最初讨论的简单情况，而解是完全一样的
 *  总结出适用于贪心规则的排序方式，先比较右端点，从左到右排，如果右端点一致，那么左端点大的在上面
 *  over
 */
#include<iostream>
#include <algorithm>
using namespace std;
struct interval{
    int left,right;
};
int total=0;
int now_point;
bool compareing(interval& itv1,interval& itv2){
    if(itv2.right!=itv1.right){ return itv1.right<itv2.right;}
    return itv1.left>itv2.left;
}
int main(){
    int N;scanf("%d",&N);
    interval* ranges=new interval[N];
    for(int i=0;i<N;i++){
        scanf("%d %d",&ranges[i].left,&ranges[i].right);
    }
    std::sort(ranges,ranges+N,compareing);
    for(int i=0;i<N;i++){
        if(now_point>=ranges[i].left&&now_point<=ranges[i].right){//在区间之中
            continue;
        } else{
            total++;
            now_point=ranges[i].right;
        }
    }
    printf("%d\n",total);
}