int romanToInt(string s) {

    map<char, int> romanNumberTable;
    romanNumberTable.insert(pair<char, int>('I', 1));
    romanNumberTable.insert(pair<char, int>('V', 5));
    romanNumberTable.insert(pair<char, int>('X', 10));
    romanNumberTable.insert(pair<char, int>('L', 50));
    romanNumberTable.insert(pair<char, int>('C', 100));
    romanNumberTable.insert(pair<char, int>('D', 500));
    romanNumberTable.insert(pair<char, int>('M', 1000));

    int finalAnswer = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X'))
        {
            finalAnswer += romanNumberTable[s[i+1]] - romanNumberTable[s[i]];
            i++;
        }
        else if(s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C'))
        {
            finalAnswer += romanNumberTable[s[i+1]] - romanNumberTable[s[i]];
            i++;
        }
        else if(s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M'))
        {
            finalAnswer += romanNumberTable[s[i+1]] - romanNumberTable[s[i]];
            i++;
        }
        else
            finalAnswer += romanNumberTable[s[i]];
    }
    
    return finalAnswer;
}

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000