/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:28:11 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 18:02:17 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

  private:
	std::string const _name;
	short const _signGrade;
	short const _execGrade;
	bool _signed;

  public:
	class GradeTooHighException : public std::exception
	{
	  private:
		std::string _message;

	  public:
		GradeTooHighException();
		GradeTooHighException(std::string message);
		GradeTooHighException(GradeTooHighException const &obj);
		virtual ~GradeTooHighException() throw();
		GradeTooHighException &operator=(GradeTooHighException const &obj);
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	  private:
		std::string _message;

	  public:
		GradeTooLowException();
		GradeTooLowException(std::string message);
		GradeTooLowException(GradeTooLowException const &obj);
		virtual ~GradeTooLowException() throw();
		GradeTooLowException &operator=(GradeTooLowException const &obj);
		virtual const char *what() const throw();
	};

	Form();
	Form(std::string name, short sign, short exec);
	Form(Form const &obj);
	~Form();

	Form &operator=(Form const &obj);

	std::string getName();
	short getSignGrade();
	short getExecGrade();
	bool getSigned();

	void beSigned(Bureaucrat &obj);
};

std::ostream &operator<<(std::ostream &o, Form &obj);

#endif