#include "Question.h"

Question::Question(const std::string &questionText) {
  this->questionText = questionText;
}

void Question::addAnswer(const Answer& answer) {
  answers.emplace_back(answer);
}

std::vector<Answer> Question::getAnswers() {
  return answers;
}

std::string Question::getQuestionText() {
  return questionText;
}

void Question::toggleAnswer(int answerIndex) {
  const auto currentValue = &(this->getAnswers().at(answerIndex));
  currentValue->isSelected = !currentValue->isSelected;
}
