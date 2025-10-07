#include "Clstring.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string sample = "  Hello World Example  ";
    char sampleChar = 'W';

    string sd = "I,am Softower Enggenerl;']][weedsdd ";

    cout << Clstring::Remove_Panction(sd) << endl;
    // 1. Count words
    short wordCount = Clstring::Continue_Words(sample);
    cout << "Word Count: " << wordCount << endl;

    // 2. Print first letters of each word
    cout << "First letters:";
    Clstring::Print_First_Latter(sample);

    // 3. Capitalize first letter of each word
    cout << "Title Case: " << Clstring::Print_Fairst_Upper_Later(sample) << endl;

    // 4. Lowercase first letter of each word
    cout << "Lower-first Case: " << Clstring::Print_Fairst_Lower_Later(sample) << endl;

    // 5. Invert case of all characters
    cout << "Invert Case: " << Clstring::Print_All_Charcter_Lower_or_upper(sample) << endl;

    // 6. Invert a single character
    cout << "Invert '" << sampleChar << "': " << Clstring::invert_charcter_char(sampleChar) << endl;

    // 7. Invert entire string
    cout << "Invert Whole String: " << Clstring::inverst_All_string(sample) << endl;

    // 8. Count uppercase and lowercase
    Clstring::Conter_Small_Captel(sample);

    // 9. Count occurrences of a character
    cout << "Count 'l': " << Clstring::Conter_Charcter(sample, 'l') << endl;

    // 10. Match case-sensitive vs insensitive
    Clstring::Conter_Mache_Case_Or_Not(sample, 'e');

    // 11. Vowel checks
    cout << "Is '" << sampleChar << "' vowel? " << boolalpha << Clstring::Is_Voile_c(sampleChar) << endl;
    cout << Clstring::Is_Voile(sampleChar);

    // 12. Count vowels in string
    cout << "Vowel Count: " << Clstring::Conter_Vole(sample) << endl;

    // 13. Print all vowels
    cout << "Vowels in sample: ";
    Clstring::Print_All_Value_string(sample);

    // 14. Split and print tokens
    cout << "Split on space:" << endl;
    vector<string> tokens = Clstring::Splite_String("one two three", " ");
    for (auto& t : tokens) cout << t << endl;

    // 15. Join split result
    cout << "Joined with '-': " << Clstring::Joine_Splite(tokens, "-") << endl;

    // 16. Trim left, right, both
    cout << "Left Trim: '" << Clstring::Trime_Left(sample) << "'" << endl;
    cout << "Right Trim: '" << Clstring::Trime_Rigth(sample) << "'" << endl;
    cout << "Trim both: '" << Clstring::Trime(sample) << "'" << endl;

    // 17. Reverse word string
    cout << "Reverse chars: " << Clstring::Reversite_Word("abcde") << endl;

    // 18. Replace substring repeatedly
    cout << "Replace 'l'->'X': " << Clstring::Replac_String(sample, "l", "X") << endl;

    // 19. Replace whole word, case-insensitive
    cout << "Replace 'Hello'->'Hi': " << Clstring::Repace_string("Hello hello HELLO", "hello", "Hi", false) << endl;

    // 20. To lower all
    cout << "All lowercase: " << Clstring::To_Lower_all(sample) << endl;

    return 0;
}
