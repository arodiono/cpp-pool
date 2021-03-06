/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:06:12 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 18:07:24 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

//
//              GradeTooHighException
//
Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(std::string message) : _message(message) {}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj) { *this = obj; }
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &obj)
{
	_message = obj._message;
	return *this;
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return _message.c_str();
}

//
//              GradeTooLowException
//
Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(std::string message) : _message(message) {}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj) { *this = obj; }
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &obj)
{
	_message = obj._message;
	return *this;
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return _message.c_str();
}

//
//              Bureaucrat
//
Bureaucrat::Bureaucrat() : _name("default"), _grade(42) {}
Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj._name) { *this = obj; }
Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(std::string name, short grade) : _name(name)
{
	try
	{
		if (grade > 150)
		{
			throw GradeTooLowException("Low Exeption");
		}
		else if (grade < 1)
		{
			throw GradeTooHighException("High Exeption");
		}
		else
		{
			_grade = grade;
		}
	}
	catch (GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
		_grade = 150;
	}
	catch (GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
		_grade = 1;
	}
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	_grade = obj._grade;
	return *this;
}

std::string const Bureaucrat::getName(void)
{
	return _name;
}

short Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::incrementGrade(void)
{
	try
	{
		if (_grade == 1)
		{
			throw GradeTooHighException("High Exeption");
		}
		else
		{
			_grade -= 1;
		}
	}
	catch (GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(void)
{
	try
	{
		if (_grade == 150)
		{
			throw GradeTooLowException("Low Exeption");
		}
		else
		{
			_grade += 1;
		}
	}
	catch (GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return o;
}

void Bureaucrat::signForm(Form &form)
{
	char *reason;
	try
	{
		form.beSigned(*this);
	}
	catch (Form::GradeTooHighException &e)
	{
		reason = const_cast<char *>(e.what());
	}
	catch (Form::GradeTooLowException &e)
	{
		reason = const_cast<char *>(e.what());
	}
	if (form.getSigned() == true)
	{
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	else
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << reason << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
		return;
	}
	std::cout << _name << " executes " << form.getName() << std::endl;
}