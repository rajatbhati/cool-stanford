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


// define simple phylum - Feature
typedef class Feature_class *Feature;

class Feature_class : public tree_node {
protected:
   Type feature_type;
public:
   tree_node *copy()		 { return copy_Feature(); }
   virtual Feature copy_Feature() = 0;

   virtual void collect_Feature_Types() = 0;
   virtual bool check_Feature_Types() = 0;
   virtual bool install_Feature_Types() = 0;

#ifdef Feature_EXTRAS
   Feature_EXTRAS
#endif
};


// define simple phylum - Formal
typedef class Formal_class *Formal;

class Formal_class : public tree_node {
public:
   tree_node *copy()		 { return copy_Formal(); }
   virtual Formal copy_Formal() = 0;

   virtual Type collect_Formal_Type() = 0;
   virtual bool check_Formal_Type() = 0;
   virtual void install_Formal_Type() = 0;

#ifdef Formal_EXTRAS
   Formal_EXTRAS
#endif
};


// define simple phylum - Expression
typedef class Expression_class *Expression;

class Expression_class : public tree_node {
   Type   expr_type;
   bool   checked;
public:
   tree_node *copy()		 { return copy_Expression(); }
   virtual Expression copy_Expression() = 0;

   virtual Type do_Check_Expr_Type() = 0;
   Type get_Expr_Type();

   virtual bool is_no_expr() const
   {
	   return false;
   }

#ifdef Expression_EXTRAS
   Expression_EXTRAS
#endif
};


// define simple phylum - Case
typedef class Case_class *Case;

class Case_class : public tree_node {
public:
   tree_node *copy()		 { return copy_Case(); }
   virtual Case copy_Case() = 0;

   virtual bool install_Case_Type() = 0;
   virtual Type check_Case_Type( Type path_type) = 0;

#ifdef Case_EXTRAS
   Case_EXTRAS
#endif
};


// define the class for phylum - LIST
// define list phlyum - Classes
typedef list_node<Class_> Classes_class;
typedef Classes_class *Classes;


// define list phlyum - Features
typedef list_node<Feature> Features_class;
typedef Features_class *Features;


// define list phlyum - Formals
typedef list_node<Formal> Formals_class;
typedef Formals_class *Formals;


// define list phlyum - Expressions
typedef list_node<Expression> Expressions_class;
typedef Expressions_class *Expressions;


// define list phlyum - Cases
typedef list_node<Case> Cases_class;
typedef Cases_class *Cases;


// define the class for constructors
// define constructor - program
class program_class : public Program_class {
protected:
   Classes classes;
public:
   program_class(Classes a1) {
      classes = a1;
   }
   Program copy_Program();
   void dump(ostream& stream, int n);

#ifdef Program_SHARED_EXTRAS
   Program_SHARED_EXTRAS
#endif
#ifdef program_EXTRAS
   program_EXTRAS
#endif
};


// define constructor - class_
class class__class : public Class__class {
protected:
   Symbol name;
   Symbol parent;
   Features features;
   Symbol filename;
public:
   class__class(Symbol a1, Symbol a2, Features a3, Symbol a4) {
      name = a1;
      parent = a2;
      features = a3;
      filename = a4;
   }
   Class_ copy_Class_();
   void dump(ostream& stream, int n);

   Symbol get_name() const
   {
	   return name;
   }

   Symbol get_parent_name() const
   {
	   return parent;
   }

   void collect_Methods();
   bool check_Class_Types();

#ifdef Class__SHARED_EXTRAS
   Class__SHARED_EXTRAS
#endif
#ifdef class__EXTRAS
   class__EXTRAS
#endif
};


// define constructor - method
class method_class : public Feature_class {
protected:
   Symbol name;
   Formals formals;
   Symbol return_type;
   Expression expr;
public:
   method_class(Symbol a1, Formals a2, Symbol a3, Expression a4) {
      name = a1;
      formals = a2;
      return_type = a3;
      expr = a4;
   }
   Feature copy_Feature();
   void dump(ostream& stream, int n);

   void collect_Feature_Types();
   bool install_Feature_Types();
   bool check_Feature_Types();

#ifdef Feature_SHARED_EXTRAS
   Feature_SHARED_EXTRAS
#endif
#ifdef method_EXTRAS
   method_EXTRAS
#endif
};


// define constructor - attr
class attr_class : public Feature_class {
protected:
   Symbol name;
   Symbol type_decl;
   Expression init;
public:
   attr_class(Symbol a1, Symbol a2, Expression a3) {
      name = a1;
      type_decl = a2;
      init = a3;
   }
   Feature copy_Feature();
   void dump(ostream& stream, int n);

   void collect_Feature_Types();
   bool install_Feature_Types();
   bool check_Feature_Types();

#ifdef Feature_SHARED_EXTRAS
   Feature_SHARED_EXTRAS
#endif
#ifdef attr_EXTRAS
   attr_EXTRAS
#endif
};


// define constructor - formal
class formal_class : public Formal_class {
   Type ext_type;
protected:
   Symbol name;
   Symbol type_decl;
public:
   formal_class(Symbol a1, Symbol a2) {
      name = a1;
      type_decl = a2;
   }
   Formal copy_Formal();
   void dump(ostream& stream, int n);

   Type collect_Formal_Type();
   bool check_Formal_Type();
   void install_Formal_Type();

#ifdef Formal_SHARED_EXTRAS
   Formal_SHARED_EXTRAS
#endif
#ifdef formal_EXTRAS
   formal_EXTRAS
#endif
};


// define constructor - branch
class branch_class : public Case_class {
   Type id_type;
protected:
   Symbol name;
   Symbol type_decl;
   Expression expr;
public:
   branch_class(Symbol a1, Symbol a2, Expression a3) {
      name = a1;
      type_decl = a2;
      expr = a3;
   }
   Case copy_Case();
   void dump(ostream& stream, int n);

   bool install_Case_Type();
   Type check_Case_Type( Type path_type);

#ifdef Case_SHARED_EXTRAS
   Case_SHARED_EXTRAS
#endif
#ifdef branch_EXTRAS
   branch_EXTRAS
#endif
};


// define constructor - assign
class assign_class : public Expression_class {
protected:
   Symbol name;
   Expression expr;
public:
   assign_class(Symbol a1, Expression a2) {
      name = a1;
      expr = a2;
   }
   Expression copy_Expression();
   void dump(ostream& stream, int n);

   Type do_Check_Expr_Type();

#ifdef Expression_SHARED_EXTRAS
   Expression_SHARED_EXTRAS
#endif
#ifdef assign_EXTRAS
   assign_EXTRAS
#endif
};


// define constructor - static_dispatch
class static_dispatch_class : public Expression_class {
protected:
   Expression expr;
   Symbol type_name;
   Symbol name;
   Expressions actual;
public:
   static_dispatch_class(Expression a1, Symbol a2, Symbol a3, Expressions a4) {
      expr = a1;
      type_name = a2;
      name = a3;
      actual = a4;
   }
   Expression copy_Expression();
   void dump(ostream& stream, int n);

   Type do_Check_Expr_Type();

#ifdef Expression_SHARED_EXTRAS
   Expression_SHARED_EXTRAS
#endif
#ifdef static_dispatch_EXTRAS
   static_dispatch_EXTRAS
#endif
};
