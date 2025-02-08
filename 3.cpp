//十字节万向轴数据处理.cpp
#include <iostream>
#include <cmath>
using namespace std;
 int main()
 {
     double pi=acos(-1);//定义pi
     double fai1=0,a1=-10*pi/180,a2=-25*pi/180;
     //主动轴转角
     //定义主动轴与中间轴夹角，从动轴与中间轴夹角
     double data[1800]; //主从动轴转角差
       data[0]=0;
     double max=data[0];
     for(int i=0;i<1800;i++)
     {
         data[i]=atan((cos(a2)-cos(a1))/(cos(a1)/tan(fai1)+cos(a2)*tan(fai1)));//计算主从动轴偏移角度差
         max=(data[i]>max?data[i]:max);
         fai1+=pi/1800;
     }
     cout<<"max = "<<max*180/pi<<endl;//计算理论滑块位移最值
     return 0;
 }

 