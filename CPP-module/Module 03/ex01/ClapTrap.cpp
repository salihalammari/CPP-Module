#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap Default constructor : " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap String constructor : " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap) : _name(clap._name), _hp(clap._hp), _ep(clap._ep), _ad(clap._ad)
{
	std::cout << "ClapTrap Copy constructor : " << _name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor : " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
	_name = clap._name;
	_hp = clap._hp;
	_ep = clap._ep;
	_ad = clap._ad;
	std::cout << "ClapTrap Copy assignment operator : " << _name << std::endl;
	return *this;
}

bool ClapTrap::is_alive(void) const
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " already dead!" << std::endl;
		return false;
	}
	else if (_ep <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy point remainding!" << std::endl;
		return false;
	}
	else
		return true;
}

void ClapTrap::attack(const std::string& target)
{
	if (!is_alive())
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target \
		<< ", causing " << _ad << " points of damage!" << std::endl;
	_ep--;
	std::cout << "ClapTrap " << _name << "'s remaining energy point : " << _ep << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage!" << std::endl;
	if (_hp <= amount)
	{
		_hp = 0;
		std::cout << "ClapTrap " << _name << "'s remaining hit point : " << _hp << std::endl;
		std::cout << "ClapTrap " << _name << " died!" << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << "ClapTrap " << _name << "'s remaining hit point : " << _hp << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!is_alive())
		return ;
	_hp += amount;
	_ep--;
	std::cout << "ClapTrap " << _name << " has been repaired of " << amount << " hit point!" << std::endl;
	std::cout << "ClapTrap " << _name << "'s remaining hit point : " << _hp << std::endl;
	std::cout << "ClapTrap " << _name << "'s remaining energy point : " << _ep << std::endl;
}

unsigned int ClapTrap::getAd(void) const
{
	return _ad;
}
