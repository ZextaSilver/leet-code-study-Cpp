
void reverseString(vector<char>& s) {

    char temp;

    int front = 0, back = s.size() - 1;

    while(front < back)
    {
        temp = s[front];
        s[front] = s[back];
        s[back] = temp;
        front++;
        back--;
    }
}