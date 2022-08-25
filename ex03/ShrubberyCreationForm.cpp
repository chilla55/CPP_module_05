/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:41:39 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:23:59 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default-Target")
{
	std::cout << "Shrubbery default constructor" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Shrubbery targeted constructor" << std::endl;
};


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : Form("ShrubberyCreationForm", 145, 137), _target(cpy.getTarget())
{
	std::cout << "Shrubbery copy constructor" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor" << std::endl;
};

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm & rhs)
{
	this->_target = rhs.getTarget();
	return (*this);
};

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
};

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (!this->getIsSigned())
		throw Form::FormNotSignedException();
	if (this->get_E_Grade() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::ofstream outfile;
	outfile.open(&(this->getTarget() + (std::string)"_shrubbery")[0]);
	srand(time(NULL));
	int r = rand() % 5;
	switch (r)
	{
		case 0: outfile	<<	"                                              .\n"\
						<<	"                                   .         ;\n"\
						<<	"      .              .              ;%     ;;\n"\
						<<	"        ,           ,                :;%  %;\n"\
						<<	"         :         ;                   :;%;'     .,\n"\
						<<	",.        %;     %;            ;        %;'    ,;\n"\
						<<	"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"\
						<<	"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"\
						<<	"    ;%;      %;        ;%;        % ;%;  ,%;'\n"\
						<<	"     `%;.     ;%;     %;'         `;%%;.%;'\n"\
						<<	"      `:;%.    ;%%. %@;        %; ;@%;%'\n"\
						<<	"         `:%;.  :;bd%;          %;@%;'\n"\
						<<	"           `@%:.  :;%.         ;@@%;'\n"\
						<<	"             `@%.  `;@%.      ;@@%;\n"\
						<<	"               `@%%. `@%%    ;@@%;\n"\
						<<	"                 ;@%. :@%%  %@@%;\n"\
						<<	"                   %@bd%%%bd%%:;\n"\
						<<	"                     #@%%%%%:;;\n"\
						<<	"                     %@@%%%::;\n"\
						<<	"                     %@@@%(o);  . '\n"\
						<<	"                     %@@@o%;:(.,'\n"\
						<<	"                 `.. %@@@o%::;\n"\
						<<	"                    `)@@@o%::;\n"\
						<<	"                     %@@(o)::;\n"\
						<<	"                    .%@@@@%::;\n"\
						<<	"                    ;%@@@@%::;.\n"\
						<<	"                   ;%@@@@%%:;;;. \n"\
						<<	"               ...;%@@@@@%%:;;;;,..\n"\
						<<	"##########################################";break;
		case 1: outfile	<<	"        . . .\n"\
						<<	"      .        .  .     ..    .\n"\
						<<	"   .                 .         .  .\n"\
						<<	"                   .\n"\
						<<	"                  .                ..\n"\
						<<	"  .          .            .              .\n"\
						<<	"  .            '.,        .               .\n"\
						<<	"  .              'b      *\n"\
						<<	"   .              '$    #.                ..\n"\
						<<	"  .    .           $:   #:               .\n"\
						<<	"..      .  ..      *#  @):        .   . .\n"\
						<<	"             .     :@,@):   ,.**:'   .\n"\
						<<	" .      .,         :@@*: ..**'      .   .\n"\
						<<	"          '#o.    .:(@'.@*\"'  .\n"\
						<<	"  .  .       'bq,..:,@@*'   ,*      .  .\n"\
						<<	"             ,p$q8,:@)'  .p*'      .\n"\
						<<	"      .     '  . '@@Pp@@*'    .  .\n"\
						<<	"       .  . ..    Y7'.'     .  .\n"\
						<<	"                 :@):.\n"\
						<<	"                .:@:'.\n"\
						<<	"              .::(@:.\n"\
						<<	"##########################################"; break;
		case 2: outfile <<	"              _{\\ _{\\{\\/}/}/}__\n"\
						<<	"             {/{/\\}{/{/\\}(\\}{/\\} _\n"\
						<<	"            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"\
						<<	"         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"\
						<<	"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"\
						<<	"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"\
						<<	"      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"\
						<<	"      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"\
						<<	"     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"\
						<<	"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"\
						<<	"       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"\
						<<	"      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"\
						<<	"       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"\
						<<	"         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"\
						<<	"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"\
						<<	"            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"\
						<<	"             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"\
						<<	"              {){/ {\\/}{\\/} \\}\\}\n"\
						<<	"              (_)  \\.-'.-/\n"\
						<<	"          __...--- |'-.-'| --...__\n"\
						<<	"   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"\
						<<	" -\"    ' .  . '    |.'-._| '  . .  '\n"\
						<<	" .  '-  '    .--'  | '-.'|    .  '  . '\n"\
						<<	"          ' ..     |'-_.-|\n"\
						<<	"  .  '  .       _.-|-._ -|-._  .  '  .\n"\
						<<	"              .'   |'- .-|   '.\n"\
						<<	"  ..-'   ' .  '.   `-._.-�   .'  '  - .\n"\
						<<	"   .-' '        '-._______.-'     '  .\n"\
						<<	"        .      ~,\n"\
						<<	"    .       .   |\\   .    ' '-.\n"; break;
		case 3: outfile <<	"                      ___\n"\
						<<	"                _,-'\"\"   \"\"\"\"`--.\n"\
						<<	"             ,-'          __,,-- \\\n"\
						<<	"           ,'    __,--\"\"\"\"dF      )\n"\
						<<	"          /   .-\"Hb_,--\"\"dF      /\n"\
						<<	"        ,'       _Hb ___dF\"-._,-'\n"\
						<<	"      ,'      _,-\"\"\"\"   \"\"--..__\n"\
						<<	"     (     ,-'                  `.\n"\
						<<	"      `._,'     _   _             ;\n"\
						<<	"       ,'     ,' `-'Hb-.___..._,-'\n"\
						<<	"       \\    ,'\"Hb.-'HH`-.dHF\"\n"\
						<<	"        `--'   \"Hb  HH  dF\"\n"\
						<<	"                \"Hb HH dF\n"\
						<<	"                 \"HbHHdF\n"\
						<<	"                  |HHHF\n"\
						<<	"                  |HHH|\n"\
						<<	"                  |HHH|\n"\
						<<	"                  |HHH|\n"\
						<<	"                  |HHH|\n"\
						<<	"                  dHHHb\n"\
						<<	"                .dFd|bHb.               o\n"\
						<<	"      o       .dHFdH|HbTHb.          o /\n"\
						<<	"\\  Y  |  \\__,dHHFdHH|HHhoHHb.__     Y\n"\
						<<	"##########################################"; break;
		case 4: outfile <<	"               ,@@@@@@@,\n"\
						<<	"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"\
						<<	"    ,&\%\%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"\
						<<	"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"\
						<<	"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"\
						<<	"   %&&%/ %&\%\%&&@@\\ V /@@' `88\\8 `/88'\n"\
						<<	"   `&%\\ ` /%&'    |.|        \\ '|8'\n"\
						<<	"       |o|        | |         | |\n"\
						<<	"       |.|        | |         | |\n"\
						<<	"____\\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_"; break;
		default: std::cout << "out-of-bound bush!" << std::endl;
	}
};
