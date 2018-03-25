// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_tween_easing_Sine
#define INCLUDED_luxe_tween_easing_Sine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
HX_DECLARE_CLASS3(luxe,tween,easing,Sine)

namespace luxe{
namespace tween{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES Sine_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Sine_obj OBJ_;
		Sine_obj();

	public:
		enum { _hx_ClassId = 0x41d04b69 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="luxe.tween.easing.Sine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"luxe.tween.easing.Sine"); }

		hx::ObjectPtr< Sine_obj > __new() {
			hx::ObjectPtr< Sine_obj > __this = new Sine_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Sine_obj > __alloc(hx::Ctx *_hx_ctx) {
			Sine_obj *__this = (Sine_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sine_obj), false, "luxe.tween.easing.Sine"));
			*(void **)__this = Sine_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sine_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Sine","\x6d","\xc2","\x2c","\x37"); }

		static ::Dynamic get_easeIn();
		static ::Dynamic get_easeIn_dyn();

		static ::Dynamic get_easeInOut();
		static ::Dynamic get_easeInOut_dyn();

		static ::Dynamic get_easeOut();
		static ::Dynamic get_easeOut_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace easing

#endif /* INCLUDED_luxe_tween_easing_Sine */ 