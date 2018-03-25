// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_structural_BalancedBST
#define INCLUDED_luxe_structural_BalancedBST

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,structural,BalancedBST)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTIterator)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTTraverseMethod)

namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES BalancedBST_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BalancedBST_obj OBJ_;
		BalancedBST_obj();

	public:
		enum { _hx_ClassId = 0x19bdc940 };

		void __construct( ::Dynamic compare_function);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.structural.BalancedBST")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.structural.BalancedBST"); }
		static hx::ObjectPtr< BalancedBST_obj > __new( ::Dynamic compare_function);
		static hx::ObjectPtr< BalancedBST_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic compare_function);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedBST_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BalancedBST","\x7b","\xa6","\xd6","\x9c"); }

		 ::luxe::structural::BalancedBSTNode root;
		 ::Dynamic compare;
		Dynamic compare_dyn() { return compare;}
		bool empty;
		int size();
		::Dynamic size_dyn();

		int depth();
		::Dynamic depth_dyn();

		void insert( ::Dynamic _key, ::Dynamic _value);
		::Dynamic insert_dyn();

		bool contains( ::Dynamic _key);
		::Dynamic contains_dyn();

		 ::Dynamic find( ::Dynamic _key);
		::Dynamic find_dyn();

		int rank( ::Dynamic _key);
		::Dynamic rank_dyn();

		 ::Dynamic select(int _rank);
		::Dynamic select_dyn();

		 ::Dynamic smallest();
		::Dynamic smallest_dyn();

		 ::Dynamic largest();
		::Dynamic largest_dyn();

		bool remove( ::Dynamic _key);
		::Dynamic remove_dyn();

		bool remove_smallest();
		::Dynamic remove_smallest_dyn();

		bool remove_largest();
		::Dynamic remove_largest_dyn();

		 ::Dynamic floor( ::Dynamic _key);
		::Dynamic floor_dyn();

		 ::Dynamic ceil( ::Dynamic _key);
		::Dynamic ceil_dyn();

		::cpp::VirtualArray toArray();
		::Dynamic toArray_dyn();

		::cpp::VirtualArray keys();
		::Dynamic keys_dyn();

		 ::luxe::structural::BalancedBSTIterator iterator();
		::Dynamic iterator_dyn();

		void traverse_node( ::luxe::structural::BalancedBSTNode _node, ::luxe::structural::BalancedBSTTraverseMethod _method, ::Dynamic _on_traverse);
		::Dynamic traverse_node_dyn();

		bool get_empty();
		::Dynamic get_empty_dyn();

		int node_depth( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic node_depth_dyn();

		int node_count( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic node_count_dyn();

		 ::luxe::structural::BalancedBSTNode node_insert( ::luxe::structural::BalancedBSTNode _node, ::Dynamic _key, ::Dynamic _value);
		::Dynamic node_insert_dyn();

		 ::luxe::structural::BalancedBSTNode node_update_count( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic node_update_count_dyn();

		 ::Dynamic node_find( ::luxe::structural::BalancedBSTNode _node, ::Dynamic _key);
		::Dynamic node_find_dyn();

		int node_rank( ::Dynamic _key, ::luxe::structural::BalancedBSTNode _node);
		::Dynamic node_rank_dyn();

		 ::luxe::structural::BalancedBSTNode node_select( ::luxe::structural::BalancedBSTNode _node,int _rank);
		::Dynamic node_select_dyn();

		 ::luxe::structural::BalancedBSTNode node_smallest( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic node_smallest_dyn();

		 ::luxe::structural::BalancedBSTNode node_largest( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic node_largest_dyn();

		 ::luxe::structural::BalancedBSTNode node_floor( ::luxe::structural::BalancedBSTNode _node, ::Dynamic _key);
		::Dynamic node_floor_dyn();

		 ::luxe::structural::BalancedBSTNode node_ceil( ::luxe::structural::BalancedBSTNode _node, ::Dynamic _key);
		::Dynamic node_ceil_dyn();

		 ::luxe::structural::BalancedBSTNode node_remove_smallest( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic node_remove_smallest_dyn();

		 ::luxe::structural::BalancedBSTNode node_remove_largest( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic node_remove_largest_dyn();

		 ::luxe::structural::BalancedBSTNode node_remove( ::luxe::structural::BalancedBSTNode _node, ::Dynamic _key);
		::Dynamic node_remove_dyn();

		bool is_red( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic is_red_dyn();

		 ::luxe::structural::BalancedBSTNode rotate_left( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic rotate_left_dyn();

		 ::luxe::structural::BalancedBSTNode rotate_right( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic rotate_right_dyn();

		void swap_color( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic swap_color_dyn();

		 ::luxe::structural::BalancedBSTNode move_red_left( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic move_red_left_dyn();

		 ::luxe::structural::BalancedBSTNode move_red_right( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic move_red_right_dyn();

		 ::luxe::structural::BalancedBSTNode balance( ::luxe::structural::BalancedBSTNode _node);
		::Dynamic balance_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBST */ 
