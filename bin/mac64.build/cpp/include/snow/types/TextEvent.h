// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_types_TextEvent
#define INCLUDED_snow_types_TextEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_26d41b97c9893cda_661_new)
HX_DECLARE_CLASS2(snow,types,TextEvent)

namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES TextEvent_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextEvent_obj OBJ_;
		TextEvent_obj();

	public:
		enum { _hx_ClassId = 0x098f6adb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="snow.types.TextEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"snow.types.TextEvent"); }

		hx::ObjectPtr< TextEvent_obj > __new() {
			hx::ObjectPtr< TextEvent_obj > __this = new TextEvent_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TextEvent_obj > __alloc(hx::Ctx *_hx_ctx) {
			TextEvent_obj *__this = (TextEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextEvent_obj), true, "snow.types.TextEvent"));
			*(void **)__this = TextEvent_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_26d41b97c9893cda_661_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextEvent","\x0d","\x38","\x85","\xb0"); }

		 ::Dynamic type;
		::String text;
		 ::Dynamic start;
		 ::Dynamic length;
		void set(int _type,::String _text,int _start,int _length);
		::Dynamic set_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_TextEvent */ 
