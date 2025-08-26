/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatieh <aatieh@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:30:32 by aatieh            #+#    #+#             */
/*   Updated: 2025/06/29 18:59:59 by aatieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

// Constructors
template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &copy) : std::stack<T, Container>(copy)
{
}


// Destructor
template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
}


// Member functions
template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template <typename T, typename Container>
const typename Container::iterator MutantStack<T, Container>::begin() const
{
	return (this->c.begin());
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end()
{
	return (this->c.end());
}

template <typename T, typename Container>
const typename Container::iterator MutantStack<T, Container>::end() const
{
	return (this->c.end());
}


template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T, typename Container>
const typename Container::reverse_iterator MutantStack<T, Container>::rbegin() const
{
	return (this->c.rbegin());
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::rend()
{
	return (this->c.rend());
}

template <typename T, typename Container>
const typename Container::reverse_iterator MutantStack<T, Container>::rend() const
{
	return (this->c.rend());
}

// Operators
template <typename T, typename Container>
MutantStack<T, Container> & MutantStack<T, Container>::operator=(const MutantStack<T, Container> &assign)
{
	std::stack<T, Container>::operator=(assign);
	return *this;
}
#endif
