 int count = (rear + size - front) % size + 1;

    for (int i = 0; i < count; i++)
    {
        int index = (front + i) % size;
        cout << qu[index] << " ";
    }

    cout << endl;
