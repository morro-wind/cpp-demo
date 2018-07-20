class Vector_container:public Container { // Vector_container 实现了Container
    Vector v;
    public:
    Vector_container(int s):v(s){} // 含有s个元素的Vector
    ~Vector_container() {}

    double& operator[](int i) { return v[i]; }
    int size() const { return v.size(); }
};
