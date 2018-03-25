// Generated by Haxe 3.4.5
#ifndef INCLUDED_phoenix_ColorHSL
#define INCLUDED_phoenix_ColorHSL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,ColorHSL)

namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES ColorHSL_obj : public  ::phoenix::Color_obj
{
	public:
		typedef  ::phoenix::Color_obj super;
		typedef ColorHSL_obj OBJ_;
		ColorHSL_obj();

	public:
		enum { _hx_ClassId = 0x13716ec5 };

		void __construct(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="phoenix.ColorHSL")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"phoenix.ColorHSL"); }
		static hx::ObjectPtr< ColorHSL_obj > __new(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a);
		static hx::ObjectPtr< ColorHSL_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorHSL_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ColorHSL","\x7e","\xf5","\x98","\x63"); }

		Float h;
		Float s;
		Float l;
		Float set_h(Float _h);
		::Dynamic set_h_dyn();

		Float set_s(Float _s);
		::Dynamic set_s_dyn();

		Float set_l(Float _l);
		::Dynamic set_l_dyn();

		 ::phoenix::Color set( ::Dynamic _h, ::Dynamic _s, ::Dynamic _l, ::Dynamic _a);

		::Dynamic tween( ::Dynamic _time_in_seconds, ::Dynamic _dest,hx::Null< bool >  _override);

		 ::phoenix::ColorHSL _refresh();
		::Dynamic _refresh_dyn();

		 ::phoenix::Color clone();

		 ::phoenix::Color toColor();
		::Dynamic toColor_dyn();

		 ::phoenix::ColorHSL fromColor( ::phoenix::Color _color);
		::Dynamic fromColor_dyn();

		virtual ::String toString();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_ColorHSL */ 
