# 二分查找
最基础的算法之一
### 思路
~~初中就该学过的~~

通过倍减搜索域，提高算法速度

如果guess值大于goal值，则改变搜索域最大值
```
high=guess-1;
```
如果guess值小于goal值，则改变搜索域最小值
```
low=guess+1;
```
使用while循环直到搜索成功

### 算法时间复杂度O
logN

//log默认就是log2

//代码见c++文件
