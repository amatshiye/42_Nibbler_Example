/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 07:40:49 by amatshiy          #+#    #+#             */
/*   Updated: 2018/07/20 09:00:07 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "IEntity.hpp"
#include <iostream>

class Player : public IEntity
{
    private:
        std::string     _name;
        int             _score;
        Player(void);

    public:
        Player(std::string name);
        ~Player(void);

        std::string     getName(void) const;
        int             getScore(void) const;
        void            markPoint(void);
        void            announces(void) const;
};

extern "C" 
{
    Player              *createPlayer(const std::string& name);
    void                deletePlayer(Player *player);
}

#endif