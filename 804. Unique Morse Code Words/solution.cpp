int uniqueMorseRepresentations(vector<string>& words) {


    set<string> uniqueTransformations;

    for(auto word : transformations(words))
    {
        uniqueTransformations.insert(word);
    }

    return uniqueTransformations.size();

}

//O(c)
string charToMorseCode(char character)
{
    vector<string> morseCodeTable = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    return morseCodeTable[int(character) - int('a')];
}

//O(a)
string transformation(string word)
{
    string morseCodeString;

    for(auto character : word)
    {
        morseCodeString += charToMorseCode(character);
    }

    return morseCodeString;
}

//O(an)
vector<string> transformations(vector<string> words)
{
    vector<string> transformedWords;

    for(auto word : words)
    {
        transformedWords.push_back(transformation(word));
    }

    return transformedWords;
}