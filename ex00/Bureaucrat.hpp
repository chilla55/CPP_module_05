/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:03:32 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:50:44 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string pName, int pGrade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &rhs);
		Bureaucrat & operator++();
		Bureaucrat & operator--();
		std::string getName() const;
		int getGrade() const;

		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream& out, const Bureaucrat &b);

#endif
