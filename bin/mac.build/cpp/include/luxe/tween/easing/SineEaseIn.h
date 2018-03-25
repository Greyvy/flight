// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_tween_easing_SineEaseIn
#define INCLUDED_luxe_tween_easing_SineEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
HX_DECLARE_CLASS3(luxe,tween,easing,SineEaseIn)

namespace luxe{
namespace tween{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES SineEaseIn_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SineEaseIn_obj OBJ_;
		SineEaseIn_obj();

	public:
		enum { _hx_ClassId = 0x141bcfa0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="luxe.tween.easing.SineEaseIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"luxe.tween.easing.SineEaseIn"); }
		static hx::ObjectPtr< SineEaseIn_obj > __new();
		static hx::ObjectPtr< SineEaseIn_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SineEaseIn_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("SineEaseIn","\xc0","\x69","\x9c","\x95"); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace easing

#endif /* INCLUDED_luxe_tween_easing_SineEaseIn */ 
