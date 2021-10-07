#include <iostream>
#include <vector>
#include <regex>
#include "BaseValidator.h"
#include "RegexValidator.h"
#include "HistoryValidator.h"
#include "NotEmptyValidator.h"

using namespace std;

int main()
{
    std::vector<std::string> oldPasswords = { "abc123", "123456", "hello" };

    BaseValidator *emailValidator = new BaseValidator;

    emailValidator->setNext(new NotEmptyValidator);
    emailValidator->setNext(new RegexValidator("email address", "^\\w+([-+.']\\w+)*@\\w+([-.]\\w+)*\\.\\w+([-.]\\w+)*$"));
    emailValidator->setNext(new HistoryValidator(oldPasswords));

        std::cout << "Checking Emails ---------------\n";
        //std::cout << "Input: \n" << emailValidator->validate("") << "\n\n";
        //std::cout << "Input: shaun\n" << emailValidator->validate("shaun") << "\n\n";
        std::cout << "Input: shaun@test.com\n" << emailValidator->validate("shaun@test.com") << "\n\n";

    delete emailValidator;

    return 0;
}
