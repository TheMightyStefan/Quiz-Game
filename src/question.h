/**
 * @file question.h
 *
 * This module provides the interface of Question.
 */

#ifndef QUESTION_H
#define QUESTION_H

#include <QString>
#include <QList>

#include "macros.h"

/**
 * @class Question
 *
 * @brief This class encapsulates and manages the data of a classic multiple-answer question.
 *
 * It contains the question's text and texts of ANSWERS_NUMBER answers, of whom only one is correct.
 *
 * It also allows access to the data, providing getter functions.
 */
class Question {
    private:
        QString question;
        QString answer[ANSWERS_NUMBER];

        int correctAnswerIndex;

    public:
        /**
         * @param question Question text.
         *
         * @param correctAnswerIndex Index of the correct answer.
         *
         * @param answers List of answers.
         */
        Question(const QString& question, int correctAnswerIndex, const QList<QString>& answers);

        /**
         * @brief Returns the question text.
         *
         * @return Question text
         */
        QString getQuestion() const;

        /**
         * @brief Returns an answer.
         *
         * @param answerIndex The index of the answer to be returned.
         */
        QString getAnswer(int answerIndex) const;

        /**
         * @brief Returns the correct answer.
         */
        QString getCorrectAnswer() const;

        /**
         * @brief Returns if an answer is correct or not.
         *
         * @param answerIndex The index of the answer to be checked if it's correct.
         */
        bool isCorrectAnswer(int answerIndex) const;
};

#endif
