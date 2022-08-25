/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:02:56 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 18:05:25 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor\n" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string pName, int pGrade): name (pName)
{
	if (pGrade < 1)
		{throw Bureaucrat::GradeTooHighException();}
	if (pGrade > 150)
		{throw Bureaucrat::GradeTooLowException();}
	this->grade = pGrade;
	std::cout << "Bureaucrat name constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	*this = cpy;
	std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->grade = rhs.getGrade();
	return (*this);
}

Bureaucrat & Bureaucrat::operator++()
{
	this->grade --;
	if (this->grade < 1)
		{throw Bureaucrat::GradeTooHighException();}
	return(*this);
}

Bureaucrat & Bureaucrat::operator--()
{
	this->grade ++;
	if (this->grade > 150)
		{throw Bureaucrat::GradeTooLowException();}
	return(*this);
}

std::string Bureaucrat::getName() const
{
	return(this->name);
}

int Bureaucrat::getGrade() const
{
	return(this->grade);
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return("GradeTooLowException");
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return("GradeTooHighException");
}

std::ostream &operator << (std::ostream& out, const Bureaucrat &b)
{
	out << "Bureaucrat " << b.getName() << " has a grade of " << b.getGrade();
	return(out);
}
