double bmi(double m, double w)
{
    return m/(w*w);
}
const char* check(double b)
{
    if (b<18.5)
    {
        return "niedowage";
    }
    if (b>18.5 && b<25)
    {
        return "prawidlowa wage";
    }
    if (b>25)
    {
        return "nadwage";
    }
}

const char* advice(double b)
{
    if (b<18.5)
    {
        return "Pora na wiecej ciasteczek!";
    }
    if (b>18.5 && b<25)
    {
        return "Gratulacje, nie potrzebujesz naszych zlotych rad";
    }
    if (b>25)
    {
        return "Nie przejmuj sie, slodkiego kochanego ciala nigdy nie za duzo!";
    }
}
int squirral (double m)
{
    int a = m / 0.3;
    return a;
}

double water(double m)
{
    double x = 0.7 * m;
    return x;
}
