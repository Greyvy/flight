// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_types_InputEvent
#define INCLUDED_snow_types_InputEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,GamepadEvent)
HX_DECLARE_CLASS2(snow,types,InputEvent)
HX_DECLARE_CLASS2(snow,types,KeyEvent)
HX_DECLARE_CLASS2(snow,types,MouseEvent)
HX_DECLARE_CLASS2(snow,types,TextEvent)
HX_DECLARE_CLASS2(snow,types,TouchEvent)

namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES InputEvent_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef InputEvent_obj OBJ_;
		InputEvent_obj();

	public:
		enum { _hx_ClassId = 0x32cb4926 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="snow.types.InputEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"snow.types.InputEvent"); }
		static hx::ObjectPtr< InputEvent_obj > __new();
		static hx::ObjectPtr< InputEvent_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("InputEvent","\xd0","\x93","\xb0","\xea"); }

		int type;
		Float timestamp;
		int window_id;
		 ::snow::types::KeyEvent key;
		 ::snow::types::TextEvent text;
		 ::snow::types::MouseEvent mouse;
		 ::snow::types::TouchEvent touch;
		 ::snow::types::GamepadEvent gamepad;
		void reset(int _type,int _window_id,Float _timestamp);
		::Dynamic reset_dyn();

		void set_key( ::snow::types::KeyEvent _event,int _window_id,Float _timestamp);
		::Dynamic set_key_dyn();

		void set_text( ::snow::types::TextEvent _event,int _window_id,Float _timestamp);
		::Dynamic set_text_dyn();

		void set_mouse( ::snow::types::MouseEvent _event,int _window_id,Float _timestamp);
		::Dynamic set_mouse_dyn();

		void set_touch( ::snow::types::TouchEvent _event,Float _timestamp);
		::Dynamic set_touch_dyn();

		void set_gamepad( ::snow::types::GamepadEvent _event,Float _timestamp);
		::Dynamic set_gamepad_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_InputEvent */ 
