bool isAnagram(string s, string t) {

    map<char, int> dictionaryS = stringDictionary(s);
    map<char, int> dictionaryT = stringDictionary(t);

    return dictionaryS == dictionaryT;

}

map<char, int> stringDictionary(string str)
{
    map<char, int> dictionary;

    for(auto character : str)
    {
        
        if(dictionary.find(character) != dictionary.end())
        {
            dictionary[character] += 1;
        }
        else
        {
            dictionary.insert(pair<char,int>(character, 1));
        }
    }

    return dictionary;
}