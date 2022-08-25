/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:38:56 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:25:06 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _sign(false), _s_grade(150), _e_grade(150)
{
	std::cout << "Form default constructor" << std::endl;
}

Form::Form(std::string name, int s_grade, int e_grade) : _name(name), _sign(false), _s_grade(s_grade), _e_grade(e_grade)
{

	if (s_grade < 1 || e_grade < 1)
		throw Form::GradeTooHighException();
	else if (s_grade > 150 || e_grade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(const Form &cpy) : _name(cpy.getName()), _sign(false), _s_grade(cpy.get_S_Grade()), _e_grade(cpy.get_E_Grade())
{
	std::cout << "Form copy constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor" << std::endl;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (this->_s_grade < b.getGrade())
		throw Form::GradeTooLowException();
	this->_sign = true;
}

Form & Form::operator=(const Form &rhs)
{
	this->_sign = rhs._sign;
	return (*this);
}

std::string Form::getName() const
{
	return(this->_name);
}

int Form::get_S_Grade() const
{
	return(this->_s_grade);
}

int Form::get_E_Grade() const
{
	return(this->_e_grade);
}

bool Form::getIsSigned() const
{
	return(this->_sign);
}

const char * Form::GradeTooLowException::what() const throw()
{
	return("GradeTooLowException");
}

const char * Form::GradeTooHighException::what() const throw()
{
	return("GradeTooHighException");
}
const char * Form::FormNotSignedException::what() const throw()
{
	return("FormNotSignedException");
}

std::ostream &operator << (std::ostream& out, const Form &b)
{
	out << "Form " << b.getName() << " has a sign grade of " << b.get_S_Grade() \
		<< " and has an execute Grade of " << b.get_E_Grade() << \
		(b.getIsSigned() ? " and is signed." : " and is unsigned.");
	return(out);
}
