// Generated by Haxe 3.4.5
#ifndef INCLUDED_phoenix_Ray
#define INCLUDED_phoenix_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Ray)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)

namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES Ray_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Ray_obj OBJ_;
		Ray_obj();

	public:
		enum { _hx_ClassId = 0x1f75937f };

		void __construct( ::phoenix::Vector _screen_pos, ::phoenix::Camera _camera, ::phoenix::Rectangle _viewport);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="phoenix.Ray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"phoenix.Ray"); }
		static hx::ObjectPtr< Ray_obj > __new( ::phoenix::Vector _screen_pos, ::phoenix::Camera _camera, ::phoenix::Rectangle _viewport);
		static hx::ObjectPtr< Ray_obj > __alloc(hx::Ctx *_hx_ctx, ::phoenix::Vector _screen_pos, ::phoenix::Camera _camera, ::phoenix::Rectangle _viewport);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ray_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Ray","\xca","\x8d","\x3e","\x00"); }

		 ::phoenix::Vector origin;
		 ::phoenix::Vector end;
		 ::phoenix::Vector dir;
		 ::phoenix::Camera camera;
		 ::phoenix::Rectangle viewport;
		void refresh( ::phoenix::Vector _screen_pos);
		::Dynamic refresh_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Ray */ 
