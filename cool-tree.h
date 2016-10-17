#ifndef COOL_TREE_H
#define COOL_TREE_H
//////////////////////////////////////////////////////////
//
// file: cool-tree.h
//
// This file defines classes for each phylum and constructor
//
//////////////////////////////////////////////////////////


#include "tree.h"
#include "cool-tree.handcode.h"

struct class_tree_node_type;
typedef class_tree_node_type *class_tree_node;
class Type
{
	private:
	class_tree_node node;

	public:
	Type( class_tree_node n = NULL);
	Type( const Type &tn)
	{
		node = tn.node;
	}

	operator bool() const;

	class_tree_node operator->() const
	{
		return node;
	}

	operator class_tree_node() const
	{
		return node;
	}

	friend bool operator==( const Type &a, const Type &b);
	friend bool operator==( const Type &a, class_tree_node b);
	friend bool operator==( class_tree_node a, const Type &b);

	friend bool operator<=( const Type &, const Type &);

	friend Type find_type_lca( const Type &, const Type &);

	bool is_sub_type_of( const Type &o)
	{
		return *this <= o;
	}
};

// define the class for phylum
// define simple phylum - Program
typedef class Program_class *Program;

class Program_class : public tree_node {
public:
   tree_node *copy()		 { return copy_Program(); }
   virtual Program copy_Program() = 0;

#ifdef Program_EXTRAS
   Program_EXTRAS
#endif
};


// define simple phylum - Class_
typedef class Class__class *Class_;

class Class__class : public tree_node {
public:
   tree_node *copy()		 { return copy_Class_(); }
   virtual Class_ copy_Class_() = 0;

   virtual void collect_Methods() = 0;
   virtual bool check_Class_Types() = 0;

   virtual Symbol get_name() const = 0;
   virtual Symbol get_parent_name() const = 0;

#ifdef Class__EXTRAS
   Class__EXTRAS
#endif
};
