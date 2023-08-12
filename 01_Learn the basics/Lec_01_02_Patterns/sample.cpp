#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int q = 0; q < i + i + 1; q++)
        {
            cout << "*";
        }
        for (int p = i; p < n - 1; p++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print3(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print5(int n)
{

    for (int i = 1; i < n + 1; i++)
    {

        for (int j = 1; j < i + 1; j++)
        {
            if (i % 2 == 0)
            {

                if (j % 2 == 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            else
            {

                if (j % 2 == 0)
                {
                    cout << "0 ";
                }
                else
                {
                    cout << "1 ";
                }
            }
        }
        cout << endl;
    }
}

void print7(int n)
{
    int a = n * 2 - 2;
    for (int i = 0; i < n; i++)
    {
        int b = i + 1;

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        for (int p = 0; p < a; p++)
        {
            cout << "  ";
        }
        for (int q = 0; q < i + 1; q++)
        {

            cout << b << " ";
            b--;
        }
        a = a - 2;
        cout << endl;
    }
}

void print6(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        int a = i;
        if (a % 2 == 0)
        {
            for (int j = 1; j < i + 1; j++)
            {

                if (j % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            cout << endl;
        }

        else
        {

            for (int j = 1; j < i + 1; j++)
            {

                if (j % 2 == 0)
                {
                    cout << "0";
                }
                else
                {
                    cout << "1";
                }
            }
            cout << endl;
        }
    }
}

void print8(int n)
{
    int b = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {

            cout << b << " ";
            b++;
        }
        cout << endl;
    }
}

void print11(int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
}

void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char a = 65;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}

void print16(int n)
{
    int p = n;
    for (int i = 0; i < n; i++)
    {
        char a = 65;
        for (int j = 0; j < p; j++)
        {
            cout << a;
            a++;
        }
        p--;
        cout << endl;
    }
}

void print17(int n)
{
    char a = 65;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << a;
        }
        a++;
        cout << endl;
    }
}

void print18(int n)
{

    for (int i = 0; i < n; i++)
    {
        char a = 64 + n;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a << " ";
            a--;
        }

        cout << endl;
    }
}

void print19(int n)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int p = 0; p < a; p++)
        {
            cout << " ";
        }
        a = a + 2;
        for (int q = 0; q < n - i; q++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int b = 2 * n - 2;
    for (int r = 0; r < n; r++)
    {
        for (int f = 0; f < r + 1; f++)
        {
            cout << "*";
        }
        for (int g = 0; g < b; g++)
        {
            cout << " ";
        }
        b = b - 2;
        for (int h = 0; h < r + 1; h++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print20(int n)
{
    int b = 2 * n - 2;
    for (int r = 0; r < n; r++)
    {
        for (int f = 0; f < r + 1; f++)
        {
            cout << "*";
        }
        for (int g = 0; g < b; g++)
        {
            cout << " ";
        }
        b = b - 2;
        for (int h = 0; h < r + 1; h++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int a = 2;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        for (int p = 0; p < a; p++)
        {
            cout << " ";
        }
        a = a + 2;
        for (int q = 0; q < n - 1 - i; q++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// extra me pattern no  9
void print21(int n)
{
    int a = n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < a; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i + i + 2; k++)
        {
            if (k % 2 == 0)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        a--;

        cout << endl;
    }

    int c = n * 2 - 1;
    for (int w = 0; w < n; w++)
    {
        for (int l = 0; l < w; l++)
        {
            cout << " ";
        }
        for (int m = 1; m < c + 1; m++)
        {
            if (m % 2 == 0)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        c = c - 2;

        cout << endl;
    }
}

void print22(int n)
{
    int b = n - 1;
    char d=64;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < b; j++)
        {
            cout << " ";
        }
        char a = 65;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a;
            a++;
        }
        b--;

        char e= d;
        for (int k = 0; k < i; k++)
        {
            cout<<e;
            e--;
           
        }
         d++;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print22(n);

    return 0;
}