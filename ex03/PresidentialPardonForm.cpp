/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:39:45 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:23:51 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 72, 45), _target("default-Target")
{
	std::cout << "Pardon default constructor" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 72, 45), _target(target)
{
	std::cout << "Pardon targeted constructor" << std::endl;
};


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cpy) : Form("PresidentialPardonForm", 72, 45), _target(cpy.getTarget())
{
	std::cout << "Pardon copy constructor" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Pardon destructor" << std::endl;
};

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm & rhs)
{
	this->_target = rhs.getTarget();
	return (*this);
};

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
};

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (!this->getIsSigned())
		throw Form::FormNotSignedException();
	if (this->get_E_Grade() < executor.getGrade())
		throw Form::GradeTooLowException();

	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};
