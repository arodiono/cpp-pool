/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:28:13 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 16:43:32 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//
//              GradeTooHighException
//
Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::GradeTooHighException(std::string message) : _message(message) {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj) { *this = obj; }
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooHighException &Form::GradeTooHighException::operator=(Form::GradeTooHighException const &obj)
{
    _message = obj._message;
    return *this;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return _message.c_str();
}

//
//              GradeTooLowException
//
Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::GradeTooLowException(std::string message) : _message(message) {}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj) { *this = obj; }
Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooLowException &Form::GradeTooLowException::operator=(Form::GradeTooLowException const &obj)
{
    _message = obj._message;
    return *this;
}
const char *Form::GradeTooLowException::what() const throw()
{
    return _message.c_str();
}

Form::Form() : _name("undefined"), _signGrade(42), _execGrade(42), _signed(false) {}
Form::Form(Form const &obj) : _name(obj._name), _signGrade(obj._signGrade), _execGrade(obj._execGrade), _signed(obj._signed) {}
Form::Form(std::string name, short sign, short exec) : _name(name), _signGrade(sign), _execGrade(exec), _signed(false) {}
Form::~Form() {}

Form &Form::operator=(Form const &obj)
{
    _signed = obj._signed;
    return *this;
}

std::ostream &operator<<(std::ostream &o, Form &obj)
{
    o << "Signed " << obj.getSignGrade();
    return o;
}

std::string Form::getName() const
{
    return _name;
}

short Form::getSignGrade()
{
    return _signGrade;
}

short Form::getExecGrade()
{
    return _execGrade;
}

bool Form::getSigned()
{
    return _signed;
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() < _signGrade)
    {
        _signed = true;
    }
    else
    {
        throw GradeTooLowException("Low Exception");
    }
}

void Form::execute(Bureaucrat const &executor) const
{
    try
    {
        if (executor.getGrade() > _execGrade)
        {
            throw GradeTooLowException("Low exception");
            
        }
        else if (_signed == false)
        {
            throw GradeTooLowException("Exception [not signed]");
        }
        else
        {
            this->action();            
        }
    }
    catch (GradeTooLowException e)
    {
        std::cout << e.what() << std::endl;
    }
}
