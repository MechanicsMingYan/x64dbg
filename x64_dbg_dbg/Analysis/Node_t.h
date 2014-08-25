#pragma once
#include "../_global.h"
#include "Meta.h"
#include <set>

namespace fa
{
	class Edge_t;
	class Node_t{
	public:
		Edge_t* outEdge;  //  all outgoing edges
		std::set<Edge_t*> inEdges;   // all incoming edges
		Instruction_t instruction;
		UInt64 vaddr;

		Node_t(Instruction_t t);
		Node_t(UInt64 t);
		Node_t();
		~Node_t();
		void remove();
		bool operator==(const Node_t & rhs) const;
		bool operator<(const Node_t & rhs) const;

	};

};