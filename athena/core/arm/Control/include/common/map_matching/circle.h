#pragma once

#include <math.h>
#include <vector>

//#include "navi_point.h"

using namespace std;

// 点的位置
class circle
{
public:
    // 传感器相对坐标
    double R;
    double ks;

};

 int get_circle(double x1, double y1,
               double x2, double y2,
               double x3, double y3,
               double& x, double& y,
               double& r, double& ks);

 int sign_circle_e(double x, double y,
                  double x1, double y1,
                  double x2, double y2);

