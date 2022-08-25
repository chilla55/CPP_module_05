/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:38:43 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:23:02 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const	std::string _name;
		bool	_sign;
		const	int _s_grade;
		const	int _e_grade;
	public:
		Form();
		Form(const std::string name, const int s_grade, const int e_grade);
		Form(const Form &cpy);
		~Form();

		void beSigned(const Bureaucrat& b);
		virtual void execute(const Bureaucrat & executor) const = 0;

		std::string getName() const;
		int get_E_Grade() const;
		int get_S_Grade() const;
		bool getIsSigned() const;

		Form & operator=(const Form &rhs);

		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what() const throw();
		};

		class FormNotSignedException : public std::exception{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream& out, const Form &b);

#endif