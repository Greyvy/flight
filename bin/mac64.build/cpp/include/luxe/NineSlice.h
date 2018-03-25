// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_NineSlice
#define INCLUDED_luxe_NineSlice

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,NineSlice)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadPackGeometry)

namespace luxe{


class HXCPP_CLASS_ATTRIBUTES NineSlice_obj : public  ::luxe::Visual_obj
{
	public:
		typedef  ::luxe::Visual_obj super;
		typedef NineSlice_obj OBJ_;
		NineSlice_obj();

	public:
		enum { _hx_ClassId = 0x46db82ea };

		void __construct( ::Dynamic _options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.NineSlice")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.NineSlice"); }
		static hx::ObjectPtr< NineSlice_obj > __new( ::Dynamic _options);
		static hx::ObjectPtr< NineSlice_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic _options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NineSlice_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NineSlice","\xa0","\x79","\x78","\x0d"); }

		Float top;
		Float left;
		Float right;
		Float width;
		Float bottom;
		Float height;
		Float source_x;
		Float source_y;
		Float source_w;
		Float source_h;
		bool is_set;
		Float midwidth;
		Float midheight;
		::Array< ::Dynamic> slices;
		bool added;
		 ::Dynamic nineslice_options;
		 ::phoenix::geometry::QuadPackGeometry _geometry;
		 ::phoenix::Batcher _batcher;
		void lock();
		::Dynamic lock_dyn();

		void dirty();
		::Dynamic dirty_dyn();

		void update_size(Float _width,Float _height);
		::Dynamic update_size_dyn();

		void set(Float _width,Float _height);
		::Dynamic set_dyn();

		 ::phoenix::Vector set_size( ::phoenix::Vector _v);

		void _create( ::phoenix::Vector _pos,Float _w,Float _h, ::Dynamic _reset);
		::Dynamic _create_dyn();

		void create( ::phoenix::Vector _pos,Float _w,Float _h, ::Dynamic _reset);
		::Dynamic create_dyn();

		void init();

		void ondestroy();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_NineSlice */ 