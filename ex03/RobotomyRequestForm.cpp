/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:37:15 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:23:45 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default-Target")
{
	std::cout << "Robotomy default constructor" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Robotomy targeted constructor" << std::endl;
};


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy) : Form("RobotomyRequestForm", 72, 45), _target(cpy.getTarget())
{
	std::cout << "Robotomy copy constructor" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor" << std::endl;
};

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm & rhs)
{
	this->_target = rhs.getTarget();
	return (*this);
};

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
};

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (!this->getIsSigned())
		throw Form::FormNotSignedException();
	if (this->get_E_Grade() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << "Makes some drilling noises" << std::endl;
	srand(time(NULL));
	int r = rand() % 2;
	switch (r)
	{
		case 0: std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;break;
		case 1: std::cout << this->getTarget() << " has failed to be robotomized" << std::endl;break;
		default: std::cout << "out-of-bound robot!" << std::endl;
		
	}
};
