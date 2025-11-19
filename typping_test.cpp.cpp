#include <iostream>
#include <ctime>
#include <string>
using namespace std;


int count_correct_characters(string sentence_to_type, string user_input_sentence,
int sentence_length);
//compares two strings character-by-character up to sentence_length

float calculate_accuracy_percent(int correct_characters, int total_characters);
//turns counts into a percentage

void show_typing_results(string user_input_sentence, int correct_characters, int
total_characters, float accuracy_percent, float typing_time_seconds);
//prints a clean report and feedback

void show_debug_info(const float* time_pointer, const float* accuracy_pointer);
//prints addresses & values (read-only)

void start_typing_test();
//runs one full test round


int main()
{
	char user_try_again;
	
	do
	{
		start_typing_test();

		

		cout << "\nDo you want to try again (Y, y = Yes, N, n = No)?: ";
		cin >> user_try_again;

	} while (user_try_again == 'Y' || user_try_again == 'y');

	

	


}

int count_correct_characters(string sentence_to_type, string user_input_sentence,
	int sentence_length)
{
	int cur_index = 0;
	int correct_characters = 0;
	while (user_input_sentence[cur_index] != '\0')
	{
		if (sentence_to_type[cur_index] == user_input_sentence[cur_index])
		{
			correct_characters++;
		}

		cur_index++;
	}

	return correct_characters;
}

float calculate_accuracy_percent(int correct_characters, int total_characters)
{
	if (correct_characters == total_characters)
	{
		return 0;
	}
	else
	{
		float accuracy = (correct_characters * 100.0) / total_characters;
		return accuracy;
	} 
	
}

void show_typing_results(string user_input_sentence, int correct_characters, int
	total_characters, float accuracy_percent, float typing_time_seconds)
{

}

void show_debug_info(const float* time_pointer, const float* accuracy_pointer)
{

}

void start_typing_test()
{
	string sentence_to_type = "The quick brown fox jumps over the lazy dog";
	string user_input_sentence;
	string clear_input;

	cout << "Your goal is to type this sentence: ";
	cout << sentence_to_type;
	cout << endl;


	cout << "Press enter to start the timer!\n\n";
	getline(cin, clear_input);
	double start_time = time(0);
	getline(cin, user_input_sentence);
	double end_time = time(0);
	
	cout << (end_time - start_time) << " seconds" << endl;
	
	int sentence_length = 0;
	while (sentence_to_type[sentence_length] != '\0')
	{
		sentence_length++;
	}
	
	cout << count_correct_characters(sentence_to_type, user_input_sentence, sentence_length);
	int correct_characters = count_correct_characters(sentence_to_type, user_input_sentence,
		sentence_length);
	cout << endl;
	cout << calculate_accuracy_percent(correct_characters, sentence_length);
	
}