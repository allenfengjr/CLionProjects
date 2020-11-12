//
// Created by haofeng on 5/22/20.
//
/*
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
using namespace std;
int A,B,N;
struct time_qujian{
    int h1;
    int m1;
    int h2;
    int m2;
    int tot_time;
    //重载,开始时间排序
    bool operator<(time_qujian t){
        if(h1!=t.h1)return h1<t.h1;
        return m1<t.m1;
    }
    int getTottime(){
        if(h1<h2||(h1==h2&&m1<m2)){
            //正常
            tot_time=(h2-h1)*60+m2-m1+1;
        }
        else{
            //跨夜
            tot_time=(h2-h1+24)*60+m2-m1+1;
        }
        return tot_time;
    }
};
void addmin(int&h,int&m){
    //加1分钟
    m++;
    if(m==60){
        m=0;
        h++;
    }
}
void submin(int&h,int&m){
    m--;
    if(m==-1){
        m=59;
        h--;
    }
}
time_qujian busy_time[24];//看番
time_qujian spare_time[24];//空闲
int main(){
    while (scanf("%d %d %d",&A,&B,&N)!=EOF){
        int h1,m1,h2,m2;
        int s=0;//空闲区间个数
        bool kuaye=false;
        bool ok=true;
        memset(busy_time,0,sizeof(busy_time));
        memset(spare_time,0,sizeof(spare_time));
        time_qujian pre;
        //添加看番时间
        for (int i = 0; i <N ; ++i) {
            scanf("%d:%d-%d:%d",&h1,&m1,&h2,&m2);
            busy_time[i].h1=h1;
            busy_time[i].m1=m1;
            busy_time[i].h2=h2;
            busy_time[i].m2=m2;
            busy_time[i].getTottime();
            if((busy_time[i].h2<busy_time[i].h1)||
               (busy_time[i].h1==busy_time[i].h2 && busy_time[i].m2<busy_time[i].m1) ){
                //跨夜,48小时制
                kuaye=true;
                busy_time[i].h2+=24;
                busy_time->getTottime();
            }
            if(busy_time[i].tot_time>B*60){
                //直接拉了
                ok=false;
            }
        }
        //添加空闲区间,ok才做，上一步直接不行就跳过
        if(ok){
            sort(busy_time,busy_time+N);
            //加入最后一个
            time_qujian tq;
            tq=busy_time[0];
            tq.h1+=24;
            tq.h2+=24;
            tq.getTottime();
            busy_time[N]=tq;
            //第一个醒着的区间pre
            pre.h1=busy_time[0].h1;
            pre.h2=busy_time[0].h2;
            pre.m1=busy_time[0].m1;
            pre.m2=busy_time[0].m2;
            pre.tot_time=busy_time[0].tot_time;

            for (int i = 0; i <N ; ++i) {
                //闭区间的长度
                int tmp=(busy_time[i+1].h1-busy_time[i].h2)*60+
                        (busy_time[i+1].m1-busy_time[i].m2)-1;
                //跨夜的话,在最后一个
                //如果可以睡觉,则
                if(tmp>=60*A){
                    spare_time[s].h1=busy_time[i].h2;
                    spare_time[s].m1=busy_time[i].m2;
                    spare_time[s].h2=busy_time[i+1].h1;
                    spare_time[s].m2=busy_time[i+1].m1;
                    //加减分钟
                    addmin(spare_time[s].h1,spare_time[s].m1);
                    submin(spare_time[s].h2,spare_time[s].m2);
                    pre=busy_time[i+1];
                    s++;
                }
                else{
                    pre.tot_time+=(tmp+busy_time[i+1].tot_time);
                    pre.h2=busy_time[i+1].h2;
                    pre.m2=busy_time[i+1].m2;
                    if(pre.tot_time>60*B){
                        ok=false;
                        break;
                    }
                }
            }
        }
        //调整回24h
        for (int i = 0; i < s; ++i) {
            if(spare_time[i].h1>=24)spare_time[i].h1-=24;
            if(spare_time[i].h2>=24)spare_time[i].h2-=24;
        }
        if(!ok){
            printf("No\n");
        }
        else{
            printf("Yes\n%d\n",s);
            for (int i = 0; i < s; ++i) {
                printf("%02d:%02d-%02d:%02d\n",spare_time[i].h1,spare_time[i].m1,spare_time[i].h2,spare_time[i].m2);
            }
        }
    }
}

*/