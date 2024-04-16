#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// string initialization using constructor
    string s("Hello Polapan");

    /// copy particular portion of a string using string constructor

    /// by using string variable
    /// syntax: string string_identifier(string_variable, starting_index, character_count_to_be_copied_from_the_starting_index);
    string s2(s, 0, 5);

    /// if starting_index is not given then it will starting copying characters
    /// from the given index
    string s3(s, 6);

    /// without using any string variable
    /// syntax: string string_identifier("your_string", starting index, count_of_next_characters_to_be_copied_from_the_starting_index);

    /// using 0 as starting_index is optional if you consider starting from first charaacter
    string s4("Hello Polapan", 0, 5);

    cout << s << "\n"
         << s2 << "\n"
         << s3 << "\n"
         << s4 << "\n";

    /// create a 'n' character string of a similar characters without using loop
    /// syntax: string string_identifier(frequency_of_character, 'character');
    string s5(26, 'a');
    cout << s5 << endl;

    return 0;
}