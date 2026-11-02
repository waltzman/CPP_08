/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:47:06 by rlobun            #+#    #+#             */
/*   Updated: 2026/11/02 15:58:04 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

// std::stack is not a container, it is a container ADAPTER: it wraps a real
// sequence container in a member the standard names `c` and narrows the
// interface down to push/pop/top/size/empty. That narrowing is why a stack has
// no iterators — and the standard declares `c` protected precisely so a
// derived class can widen it again.

template  <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
 public:
  
  typedef typename Container::iterator iterator;
  typedef typename Container::const_iterator const_iterator;
  typedef typename Container::reverse_iterator reverse_iterator;
  typedef typename Container::const_reverse_iterator const_reverse_iterator;

  MutantStack() : std::stack<T, Container>() {}

  
  explicit MutantStack(const Container& container)
      : std::stack<T, Container>(container) {}

  MutantStack(const MutantStack& src) : std::stack<T, Container>(src) {}

  MutantStack& operator=(const MutantStack& rhs) {
    if (this != &rhs) std::stack<T, Container>::operator=(rhs);
    return (*this);
  }

  ~MutantStack() {}

 
  iterator begin() { return this->c.begin(); }
  iterator end() { return this->c.end(); }

  const_iterator begin() const { return this->c.begin(); }
  const_iterator end() const { return this->c.end(); }

  reverse_iterator rbegin() { return this->c.rbegin(); }
  reverse_iterator rend() { return this->c.rend(); }

  const_reverse_iterator rbegin() const { return this->c.rbegin(); }
  const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif
