// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_structural_BalancedBSTNode
#define INCLUDED_luxe_structural_BalancedBSTNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ab6832648f802b31_777_new)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode)

namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES BalancedBSTNode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BalancedBSTNode_obj OBJ_;
		BalancedBSTNode_obj();

	public:
		enum { _hx_ClassId = 0x17632d9a };

		void __construct( ::Dynamic _key, ::Dynamic _value,int _node_count,bool _color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.structural.BalancedBSTNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.structural.BalancedBSTNode"); }

		hx::ObjectPtr< BalancedBSTNode_obj > __new( ::Dynamic _key, ::Dynamic _value,int _node_count,bool _color) {
			hx::ObjectPtr< BalancedBSTNode_obj > __this = new BalancedBSTNode_obj();
			__this->__construct(_key,_value,_node_count,_color);
			return __this;
		}

		static hx::ObjectPtr< BalancedBSTNode_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic _key, ::Dynamic _value,int _node_count,bool _color) {
			BalancedBSTNode_obj *__this = (BalancedBSTNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BalancedBSTNode_obj), true, "luxe.structural.BalancedBSTNode"));
			*(void **)__this = BalancedBSTNode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ab6832648f802b31_777_new)
HXLINE( 779)		( ( ::luxe::structural::BalancedBSTNode)(__this) )->left = null();
HXLINE( 780)		( ( ::luxe::structural::BalancedBSTNode)(__this) )->right = null();
HXLINE( 782)		( ( ::luxe::structural::BalancedBSTNode)(__this) )->key = _key;
HXLINE( 783)		( ( ::luxe::structural::BalancedBSTNode)(__this) )->value = _value;
HXLINE( 785)		( ( ::luxe::structural::BalancedBSTNode)(__this) )->nodecount = _node_count;
HXLINE( 786)		( ( ::luxe::structural::BalancedBSTNode)(__this) )->color = _color;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedBSTNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BalancedBSTNode","\x1d","\x36","\x4e","\x4a"); }

		 ::luxe::structural::BalancedBSTNode left;
		 ::luxe::structural::BalancedBSTNode right;
		int nodecount;
		bool color;
		 ::Dynamic key;
		 ::Dynamic value;
};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBSTNode */ 