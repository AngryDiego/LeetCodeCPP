class Solution {
public:
    int percentageLetter(string s, char letter) {
        double percentletter = 0;
        double count = 0;

        for (int index = 0; index < s.size(); index++){
            if (s[index] == letter){
                count++;
            }
        }

        percentletter = (count / s.size()) * 100;
        return percentletter;
    }
};
