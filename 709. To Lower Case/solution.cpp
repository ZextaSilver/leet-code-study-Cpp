
string toLowerCase(string s) {
    for(auto &str : s)
    {
        if(int(str) <= 90 && int(str) >= 65)
        {
            str = int(str) + 32;
            cout << str << endl;
        }
    }

    return s;
}