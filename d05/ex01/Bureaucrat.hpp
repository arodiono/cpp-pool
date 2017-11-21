/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodiono <arodiono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:06:08 by arodiono          #+#    #+#             */
/*   Updated: 2017/11/07 18:06:59 by arodiono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
  private:
	std::string const _name;
	short _grade;

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

	Bureaucrat(void);
	Bureaucrat(std::string name, short grade);
	Bureaucrat(Bureaucrat const &obj);
	~Bureaucrat(void);

	Bureaucrat &operator=(Bureaucrat const &obj);

	std::string const getName(void);
	short getGrade(void);
	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &obj);

#endif