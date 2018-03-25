// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_tween_easing_LinearEaseNone
#define INCLUDED_luxe_tween_easing_LinearEaseNone

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
HX_DECLARE_CLASS3(luxe,tween,easing,LinearEaseNone)

namespace luxe{
namespace tween{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES LinearEaseNone_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LinearEaseNone_obj OBJ_;
		LinearEaseNone_obj();

	public:
		enum { _hx_ClassId = 0x6a1abecb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="luxe.tween.easing.LinearEaseNone")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"luxe.tween.easing.LinearEaseNone"); }
		static hx::ObjectPtr< LinearEaseNone_obj > __new();
		static hx::ObjectPtr< LinearEaseNone_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LinearEaseNone_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("LinearEaseNone","\xeb","\xe8","\xc2","\xcd"); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace easing

#endif /* INCLUDED_luxe_tween_easing_LinearEaseNone */ 
