#include <iostream>
#include <queue>
#include <string>
using namespace std;
/*
int visit[1000][1000];//到达数组
int A,B,C;//三个初始值
int totalid=0;
int totalstep=0;
struct bottle{
    int bottle1;
    int bottle2;
    int step;//走了多少步
    int pre;//如何来到的这个状态0-5
    int preid;
};
bottle TheBottles[1000000];

void BFS(bottle&now){
    //BFS是不用递归的......
    bottle now_bottle,next_bottle;
    int head=0;
    int end=1;
    queue<bottle> q_bottle;
    now_bottle=now;
    q_bottle.push(now_bottle);
    while(!q_bottle.empty()){
        //取出这一个，对应数组的下标为head
        TheBottles[head]=q_bottle.front();
        head++;
        now_bottle=q_bottle.front();
        //next_bottle是下一个的状态，也是从now_bottle来的
        q_bottle.pop();
        for(int caozuo=0;caozuo<6;caozuo++) {
            next_bottle=now_bottle;
            next_bottle.step++;
        if (caozuo == 0) {
            //倒满第一个杯子
            next_bottle.bottle1 = A;
            next_bottle.pre = 0;
        } else if (caozuo == 1) {
            //倒满第二个杯子
            next_bottle.bottle2 = B;
            next_bottle.pre = 1;
        } else if (caozuo == 2) {
            //倒空第一个杯子
            next_bottle.bottle1 = 0;
            next_bottle.pre = 2;
        } else if (caozuo == 3) {
            //倒空第二个杯子
            next_bottle.bottle2 = 0;
            next_bottle.pre = 3;
        } else if (caozuo == 4) {
            //将第一个倒入第二个
            if (B - next_bottle.bottle2 > next_bottle.bottle1) {
                //can pour all
                next_bottle.bottle2 += next_bottle.bottle1;
                next_bottle.bottle1 = 0;
            } else {
                //left in bot1
                next_bottle.bottle1 -= B - next_bottle.bottle2;
                next_bottle.bottle2 = B;
            }
            next_bottle.pre = 4;
        } else if (caozuo == 5) {
            //将第二个倒入第一个
            if (A - next_bottle.bottle1 > next_bottle.bottle2) {
                //can pour all
                next_bottle.bottle1 += next_bottle.bottle2;
                next_bottle.bottle2 = 0;
            } else {
                //left in bot2
                next_bottle.bottle2 -= A - next_bottle.bottle1;
                next_bottle.bottle1 = A;
            }
            next_bottle.pre = 5;
        }
        if (visit[next_bottle.bottle1][next_bottle.bottle2] != 1) {
            //没有到达过这个状态
            //cout<<"never visit"<<next_bottle.bottle1<<" "<<next_bottle.bottle2<<endl;
            visit[next_bottle.bottle1][next_bottle.bottle2]=1;
            next_bottle.preid=head-1;
            //cout<<"preid "<<next_bottle.preid<<"pre "<<next_bottle.pre<<endl;
            TheBottles[end]=next_bottle;
            end++;
            q_bottle.push(next_bottle);
            //加入队列
            if(next_bottle.bottle1==C||next_bottle.bottle2==C){
                //到达目标状态，记录数组中的下标，总的步数
                totalid=end;
                totalstep=next_bottle.step;
                return;
            }
        }
    }
    }
}
//有两种情况，第一种是量比较大，一定在大桶中，可以用这样的思路：若干小杯加上一点剩余的。xB+C%B
//第二种是量比较小，不一定在哪个杯子里，这一定是差出来的，第一种是第二种再加上一些整数倍的小杯
//我认为这差出来的只能差一次，因为无法留第三个杯子中
//剩下的问题就是如何得到这个差值？若留在大杯中，则是B%A，若是留在小杯中，则是A-B%A
//套娃改变容量？
int main() {
    while (cin >> A >> B >> C) {
        for (int i = 0; i < 1000; i++) {
            for (int j = 0; j < 1000; j++) {
                visit[i][j] = 0;
                //初始化
            }
        }
        totalid=0;
        totalstep=0;
        //TheBottles应该不用每次都改
        visit[0][0] = 1;
        bottle first_bottle;
        first_bottle.step = first_bottle.preid = first_bottle.bottle1 = first_bottle.bottle2 = 0;
        //初始化
        BFS(first_bottle);
        int *all_preid = new int[totalstep + 1];
        all_preid[totalstep] = totalid - 1;
        for (int i = totalstep - 1; i > 0; i--) {
            //找个数组存放所有的操作
            all_preid[i] = TheBottles[all_preid[i + 1]].preid;
            //cout<<"preid is "<<all_preid[i]<<endl;
        }
        for (int i = 1; i < totalstep + 1; i++) {
            int op = TheBottles[all_preid[i]].pre;
            switch (op) {
                case 0: {
                    cout << "fill A" << endl;
                    break;
                }
                case 1: {
                    cout << "fill B" << endl;
                    break;
                }
                case 2: {
                    cout << "empty A" << endl;
                    break;
                }
                case 3: {
                    cout << "empty B" << endl;
                    break;
                }
                case 4: {
                    cout << "pour A B" << endl;
                    break;
                }
                case 5: {
                    cout << "pour B A" << endl;
                    break;
                }
                default: {
                    cout << op << endl;
                    break;
                }
            }
        }
        cout << "success" << endl;
    }
}
*/

int main(){
    char id_pwd[20][18];
    for(int i=0;i<20;i++){
        for(int j=0;j<18;j++){
            cin>>id_pwd[i][j];
        }
    }
    for(int i=0;i<20;i++){
        cout<<"username=";
        for(int j=0;j<8;j++){
            cout<<id_pwd[i][j];
        }
        cout<<";password=";
        for(int j=12;j<18;j++){
            cout<<id_pwd[i][j];
        }
        cout<<";"<<endl;
    }
}
