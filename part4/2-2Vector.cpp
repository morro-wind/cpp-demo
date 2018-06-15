class Vector {
private:
    double* elem;	//elem 指向一個含sz個double 型的元素的數組
    int sz;
public:
    Vector(int s) :elem{new double[s]}, sz{s}   //構造函數：獲取資源
    {
        for (int i=0; i!=s; ++i)    // 初始化元素
            elem[i]=0;
    }

    ~Vector() { delete[] elem;}

    double& operator[](int i);
    int size() const;
};
