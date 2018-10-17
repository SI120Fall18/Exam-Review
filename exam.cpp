#include <iostream>

int main() {
    std::string question1 = "Physical components of a computer",
                answer1 = "hardware",
                question2 = "Part of the computer that runs programs. Most important component in a computer",
                answer2 = "central processing unit",
                question3 = "Short-term volatile type of memory that can be accessed quickly",
                answer3_1 = "main memory", answer3_2 = "random access memory",
                question4 = "Programs used to operate computers and devices",
                answer4 = "software",
                question5 = "Operating systems",
                answer5 = "system software",
                question6 = "Software used by users; programs people normally use",
                answer6 = "application software",
                question7 = "Language close to the level of human-readability",
                answer7_1 = "low-level", answer7_2 = "low level",
                question8 = "Language close to the level of human-readability",
                answer8_1 = "high-level", answer8_2 = "high level",
                question9 = "Cannot be used for anything other than their purpose",
                answer9_1 = "keywords", answer9_2 = "key words",
                question10 = "Made up by the programmer; usually named of variables",
                answer10 = "programmer defined identifiers",
                question11 = "Performs operations on pieces of data",
                answer11 = "operators",
                question12 = "Mark the beginning or ending of a statement, or separate items in a list",
                answer12 = "punctuation",
                question13 = "Complete instruction that causes the computer to perform some action",
                answer13 = "statement",
                question14 = "Two parts of the central processing unit (<first answer> & <second answer>)",
                answer14_1 = "control unit & arithmetic and logic unit", answer14_2 = "arithmetic and logic unit & control unit";

    std::string response;
    int num_correct = 0;

    std::cout << "EXAM REVIEW (answers will be lowercase and no abbreviations!)" << std::endl;
    std::cout << "Definitions portion" << std::endl << std::endl;

    std::cout << question1 << ": ";
    std::getline(std::cin, response);
    if(response == answer1) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question2 << ": ";
    std::getline(std::cin, response);
    if(response == answer2) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question3 << ": ";
    std::getline(std::cin, response);
    if(response == answer3_1 || response == answer3_2) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question4 << ": ";
    std::getline(std::cin, response);
    if(response == answer4) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question5 << ": ";
    std::getline(std::cin, response);
    if(response == answer5) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question6 << ": ";
    std::getline(std::cin, response);
    if(response == answer6) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question7 << ": ";
    std::getline(std::cin, response);
    if(response == answer7_1 || response == answer7_2) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question8 << ": ";
    std::getline(std::cin, response);
    if(response == answer8_1 || response == answer8_2) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question9 << ": ";
    std::getline(std::cin, response);
    if(response == answer9_1 || response == answer9_2) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question10 << ": ";
    std::getline(std::cin, response);
    if(response == answer10) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question11 << ": ";
    std::getline(std::cin, response);
    if(response == answer11) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question12 << ": ";
    std::getline(std::cin, response);
    if(response == answer12) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question13 << ": ";
    std::getline(std::cin, response);
    if(response == answer13) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << question14 << ": ";
    std::getline(std::cin, response);
    if(response == answer14_1 || response == answer14_2) {
        std::cout << "Correct!" << std::endl;
        num_correct += 1;
    } else {
        std::cout << "Wrong." << std::endl;
    }

    std::cout << "You scored " << num_correct << " out of 14." << std::endl;

    return 0;

}