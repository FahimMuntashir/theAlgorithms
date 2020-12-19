  int l, r;
    cin >> l >> r;

    if (l > 0)
    {
        cout << f[r] - f[l - 1] << endl;
    }
    else
    {
        cout << f[r] << endl;
    }