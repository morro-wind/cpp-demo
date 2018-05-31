class complex {
    double re, im;  //成员变量：两个双精度浮点数
    public:
    complex(double r, double i) :re{r}, im{i} {} //用两个标量构建该复数
    complex(double r) :re{r}, im{0} {}          //用一个标量构建该复数
    complex() :re{0}, im{0} {}                  //默认的复数是{0,0}

double real() const { return re;}
void real(double d) { re=d; }
double imag() const { return im; }
void imag(double d) { im=d; }

complex& operator+=(complex z) { re+=z.re, im+z.im; return *this;} //加到re和im上然后返回

complex& operator-=(complex z) { re-=z.re, im-=z.im; return *this;}

complex& operator*=(complex);   //在类外的某处进行定义
complex& operator/=(complex);   //在类外的某处进行定义
};
