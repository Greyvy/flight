// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_Timer
#define INCLUDED_luxe_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(luxe,Timer)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS2(snow,api,Timer)

namespace luxe{


class HXCPP_CLASS_ATTRIBUTES Timer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();

	public:
		enum { _hx_ClassId = 0x4f6ef027 };

		void __construct( ::luxe::Engine _core);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.Timer"); }
		static hx::ObjectPtr< Timer_obj > __new( ::luxe::Engine _core);
		static hx::ObjectPtr< Timer_obj > __alloc(hx::Ctx *_hx_ctx, ::luxe::Engine _core);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		 ::luxe::Engine core;
		::Array< ::Dynamic> timers;
		void init();
		::Dynamic init_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void process();
		::Dynamic process_dyn();

		void reset();
		::Dynamic reset_dyn();

		 ::snow::api::Timer schedule(Float _time_in_seconds, ::Dynamic _on_time, ::Dynamic repeat);
		::Dynamic schedule_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Timer */ 
