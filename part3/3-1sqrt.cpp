double sqrt(double);    //这个平方根函数接受一个double型值，返回值也是一个double型

class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double* elem;//elem 指向一个数组，该数组包含sz个double型元素
        int sz;
}
