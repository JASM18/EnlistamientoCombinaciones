long double CalcFact(int imput)
{
    long double fact = 1;
    for (int i = 2; i <= imput; ++i) {
        fact *= i;
    }
    return fact;
}

long double CalcComb(int n, int r)
{
    long double comb;
    comb = CalcFact(n) / (CalcFact(r) * CalcFact(n - r));

    return comb;
}