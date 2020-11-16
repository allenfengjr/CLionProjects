//
// Created by 冯灏 on 3/7/20.
//
/*
 * 基本思路：和上一题在很多地方是有相似处的，比如说区间的关系分为三种等
 * (1)用尽量少的区间，被包含的区间将被无视，要放在包含它的区间之下
 *  ----------
 *    -------
 *       --
 * 如上，第二三个区间是没有必要存在的
 * (2)把区间从左到右排序，排序细则暂时不探讨
 * (3)如果存在毫无交集的区间，那么覆盖失败(在判断时要注意端点问题)
 * 设A[k],B[l]分别是最优解和贪心策略的解(先认为可以覆盖)贪心解取左端点在区间内，且右端点最大的点
 * 设Ai,Bi之前区间都相同，第i个出现不同，Ai的右端点<Bi的右端点，即剩下的待覆盖区间，A的大于B的
 * 待覆盖区间的覆盖是子问题，设剩下m个区间，其中m-1个是一样的，只有一个有区别，即另一种策略中选择的区间
 * 对于子问题，贪心策略不需要有区别的这个区间，因为该区间的范围已经覆盖，而最优解可能需要，所以贪心策略等于或优于最优解，即为最优解
 * 现在可以讨论排序问题了，本着被包含在下的原因，左端点小的在前，如一样，则右端点大的在前
 */
#include<iostream>
#include <algorithm>
using namespace std;
struct interval{
    int left,right;
};
int total=0;//总的区间数
int now_right=0;//当前已经覆盖的
bool compareing(interval& itv1,interval& itv2){
    if(itv2.left!=itv1.left){ return itv1.left<itv2.left;}
    return itv1.right>itv2.right;
}
int main(){
    int T,n;scanf("%d %d",&n,&T);
    interval* ranges=new interval[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&ranges[i].left,&ranges[i].right);
    }
    sort(ranges,ranges+n,compareing);
    interval temp;temp.left=0;temp.right=0;
    for(int i=0;i<n;i++) {//temp和now_left,now_right要合适时更新
        if(ranges[i].left-now_right<=1){
            //可以选的情况
            if(ranges[i].right>temp.right){
                //可以更新temp的情况
                temp=ranges[i];
            }
        }
        else{
            //不可以选的情况
            if(ranges[i].left-temp.right<=1){
                //把暂存的temp加入后可以选的情况
                now_right=temp.right;
                temp=ranges[i];
                total++;
            }
            else{
                //加入后也不能选，就是拉了呗
                total=-1;
                break;
            }
        }
        if(temp.right>=T){
            //暂存的temp实现了覆盖
            total++;
            break;
        }
    }
    if(temp.right<T){total=-1;}
    printf("%d",total);
}