void fct(int n)
{
    Vector v(n);
    // ...使用 V...
    //
    {
        Vector v2(2*n);
        // ..使用v 和v2...
    } // v2在此處被銷毀

    // ...使用 v...
} // v在此處被銷毀
