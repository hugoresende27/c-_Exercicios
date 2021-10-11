   int a,b,c;
    printf ("Insira o valor A:: ");
    scanf ("%d",&a);
    printf ("Insira o valor B:: ");
    scanf ("%d",&b);
    printf ("Insira o valor C:: ");
    scanf ("%d",&c);
    if ( a > b && a > c)
    {
        cout << "O maior é o A-->" << a << endl;
    }
    else 
        if ( b > a && b > c)
        {
            cout << "O maior é o B-->" << b << endl;
        }
    else
        if ( c > a && c > b)
        {
            cout << "O maior é o C-->" << c << endl;
        }
    else 
        if (a==b && c > a)
        {
            cout << "O maior é o C-->" << c << endl;
        }
    else 
        if (c==a && b >a) 
        {
            cout << "O maior é o B-->" << b << endl;
        }
    else 
        if (b==c && a >c) 
        {
            cout << "O maior é o A-->" << a << endl;
        }
    else
        if (a==b && a > c)
        {
            cout << "O maior é o A-->" << a << "e o B "<< b << endl;
        }
    else 
        if (b==c && b > a) 
        {
            cout << "O maior é o B-->" << b << "e o C "<< c << endl;
        }
    else 
        if (a==c && a > b) 
        {
            cout << "O maior é o A-->" << a << "e o C "<< c << endl;
        }
    else    
        cout << "São todos iguais\n";
