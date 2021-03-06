#ifndef LIST_H_
#define LIST_H_
#include "abstractcollection.h"

/* 			CSE-241 HW6 
		JAVA COLLECTION HIERARCYH 
*/
/*----------------------------------------*/
/*	@ author : 		Goktug Ali Akin		 */
/*	@ student id :  161044018 			*/
/*-------------------------------------*/

/*------------------------------------*/
/*-------<<LIST INTERFACE>-----------*/
/*----------------------------------*/

/* @ This file is an interface file that user
	can call methods, and not contains implementation.
*/

namespace collectionsgtu
{
	template<typename T,template <typename...> class Container>
	class list : public virtual AbstractCollection<T,Container>
	{
	public:
		virtual gtuiterator<T,Container> iterator()=0;
		virtual void remove(T e)=0;
		virtual bool isEmpty()const=0;
		virtual int size()const=0;
		virtual void clear()=0;
		virtual void add(T e)=0;
		virtual bool contains(T e)=0;
	};
}
#endif