// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_ID
#define INCLUDED_luxe_ID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,ID)

namespace luxe{


class HXCPP_CLASS_ATTRIBUTES ID_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ID_obj OBJ_;
		ID_obj();

	public:
		enum { _hx_ClassId = 0x6b65f151 };

		void __construct(::String __o__name,::String __o__id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.ID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.ID"); }
		static hx::ObjectPtr< ID_obj > __new(::String __o__name,::String __o__id);
		static hx::ObjectPtr< ID_obj > __alloc(hx::Ctx *_hx_ctx,::String __o__name,::String __o__id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ID_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"); }

		::String id;
		::String name;
};

} // end namespace luxe

#endif /* INCLUDED_luxe_ID */ 