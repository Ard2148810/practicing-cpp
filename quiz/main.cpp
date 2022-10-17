#include <iostream>
#include "Question.h"

int main() {
  Question test("Test question");
  test.addAnswer(Answer("Incorrect answer", false));
  test.addAnswer(Answer("Another incorrect answer", false));
  test.addAnswer(Answer("Correct answer", true));

  std::cout << test.getQuestionText() << '\n';
  int index = 0;
  for (const auto &answer: test.getAnswers()) {
    std::cout << "  " << index << ". " << answer.text << '\n';
    ++index;
  }
  int selection;
  std::cout << "Choose answer :";
  std::cin >> selection;
  test.toggleAnswer(selection);
  std::cout << "Your answer is: " << (test.getAnswers().at(selection).isCorrect ? "correct" : "incorrect");

    return 0;
}
