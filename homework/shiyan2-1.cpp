//
// Created by 冯灏 on 3/6/20.
//所有下标为便于理解从1开始
//
#include <iostream>
using namespace std;
int degree[5];//多少度的点有多少个
int edges[5][2];//记录原始的各个边
int thedegrees[7];//原始的各点的度数
int main(){
    int T;scanf("%d",&T);
    for(int i=0;i<T;i++){
        for(int j=0;j<7;j++){
            thedegrees[j]=0;
        }
        for(int j=0;j<5;j++){
            degree[j]=0;
        }
        //以上初始化
        for(int j=0;j<5;j++){//对应点的度加上去
            scanf("%d",&edges[j][0]);
            scanf("%d",&edges[j][1]);
            thedegrees[edges[j][0]]++;
            thedegrees[edges[j][1]]++;
        }
        for(int j=1;j<=6;j++){//统一计算多少度的点有多少个
            //thedegrees[j]是第j点的度数
            degree[thedegrees[j]]++;
        }
        if(degree[2]==4){//第一种
            printf("n-hexane\n");
        } else if(degree[3]==2){//第四种
            printf("2,3-dimethylbutane\n");
        } else if (degree[4]==1){//第五种
            printf("2,2-dimethylbutane\n");
        }
        else{//开始判断第二种和第三种
            int v3=0,temp=0,advsum=0;
            int adv[3];
            for(int k=1;k<=6;k++){//找到度为三的点
                if(thedegrees[k]==3){v3=k;break;}
            }
            for(int k=0;k<5;k++){//统计和度为三的点相邻的点
                if(edges[k][0]==v3)adv[temp++]=edges[k][1];
                if(edges[k][1]==v3)adv[temp++]=edges[k][0];
            }
            for(int k=0;k<3;k++){
                advsum+=thedegrees[adv[k]];
                temp=0;
            }
            if(advsum==4)printf("2-methylpentane\n");
            else printf("3-methylpentane\n");
        }
    }
}