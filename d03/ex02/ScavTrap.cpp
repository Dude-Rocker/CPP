/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgladush <vgladush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 14:39:03 by vgladush          #+#    #+#             */
/*   Updated: 2018/07/29 20:58:46 by vgladush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->typeCl = 2;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
	std::string crt[6] = {"Hey everybody! Check out my package!", "Let's get this party started!",
	"Glitching weirdness is a term of endearment, right?", "Recompiling my combat code!",
	"This time it'll be awesome, I promise!", "Look out everybody! Things are about to get awesome!"};
	std::cout << "SCAV-TP (" + this->Name + ") created" << std::endl;
	std::cout << this->Name << ": \"" << crt[rand() % 6] << "\"" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy)
{
	this->typeCl = 2;
	std::cout << &cpy << " is copied into " << this << std::endl;
	*this = cpy;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap &cpy)
{
	this->typeCl = 2;
	this->Name = cpy.getName();
	this->Hit_points = cpy.getHp();
	this->Energy_points = cpy.getEp();
	this->Level = cpy.getLvl();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::string dth[6] = {"Pop pop!", "Crit-i-cal!", "That looks like it hurts!", "WOW! I hit 'em!", "Extra ouch!", "Shwing!"};
	std::cout << "SCAV-TP (" + this->Name + ") destroed" << std::endl;
	std::cout << this->Name << ": \"" << dth[rand() % 6] << "\"" << std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	std::string act[8] = {"Miniontrap", "Funzerker", "Mechromagician", "Shhhh... Trap!", "Blight Bot", "Rubber Ducky", "Senseless Sacrifice", "Medbot"};
	std::string tk[8] = {"Claptrap throws out a Turrettrap that shoots explosive rockets (similar to Axton's Sabre Turret) and wields a Dahl assault rifle, periodically \
shooting powerful non-elemental bullets at its chosen target.", "Claptrap receives a copy of his currently equipped weapon in his other clamp, mimicking Salvador's Gunzerking ability.",
	"Claptrap summons a Punkbot, which engages enemies in combat in a similar fashion to Gaige's Deathtrap.", "Claptrap deploys a Holotrap and becomes invisible, similar to Zer0's \
Decepti0n ability.", "Claptrap summons a Sirentrap emitting an acid gas and with fire wings on its back, which proceeds to fly around enemies dealing incendiary and corrosive damage, \
similar to Maya's Blight Phoenix skill.", "Claptrap will continually bounce into the air and gain bullet reflection.", "Claptrap forces himself into Fight For Your Life to revive all \
other team members that are currently in Fight For Your Life.", "Claptrap gains drastically increased movement speed and a healing laser that he can use to restore teammate and enemy health."};
	int i = rand() % 8;
	std::cout << this->Name + " use " << act[i] << " : " << tk[i] << std::endl;
}
