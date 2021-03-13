% 假设a=1
a=1;
t=0:0.2:2*pi;
x=a*(t-sin(t));
y=a*(1-cos(t));
plot(x,y);
axis equal 

% 功能：绘制最速曲线
% 参数说明：a为相关参数，这里把其设置为1，t为自变量，xy为参数方程的因变量
% 注意事项：a的值可以修改
% 程序返回：最速曲线的图像
