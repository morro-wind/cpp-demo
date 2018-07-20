class List_container:public Container{ // List_container 实现了Container
    std::list<double> ld;   // 一个double 类型的标准库list（见9.3节）
    public:
    List_container() {} //空列表
    List_container(initializer_list<double> il):ld{il}{}
    ~List_container() {}

    double& operator[](int i);
    int size() const { return ld.size(); }
};

double& List_container::operator[](int i)
{
    for (auto& x : ld) {
        if (i == 0) return x;
        --i;
    }
    throw out_of_range("List container");
}

