/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IEntity.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 07:40:41 by amatshiy          #+#    #+#             */
/*   Updated: 2018/07/20 07:46:10 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IENTITY_HPP
#define IENTITY_HPP

#include <iostream>

class IEntity
{
    public:
        virtual std::string     getName(void) const = 0;
        virtual int             getScore(void) const = 0;
        virtual void            markPoint(void) = 0;
        virtual void            announces(void) const = 0;
};

#endif