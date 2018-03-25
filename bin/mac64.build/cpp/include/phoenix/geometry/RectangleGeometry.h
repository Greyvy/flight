// Generated by Haxe 3.4.5
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#define INCLUDED_phoenix_geometry_RectangleGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,RectangleGeometry)

namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES RectangleGeometry_obj : public  ::phoenix::geometry::Geometry_obj
{
	public:
		typedef  ::phoenix::geometry::Geometry_obj super;
		typedef RectangleGeometry_obj OBJ_;
		RectangleGeometry_obj();

	public:
		enum { _hx_ClassId = 0x648dae00 };

		void __construct( ::Dynamic _options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.RectangleGeometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"phoenix.geometry.RectangleGeometry"); }
		static hx::ObjectPtr< RectangleGeometry_obj > __new( ::Dynamic _options);
		static hx::ObjectPtr< RectangleGeometry_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic _options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RectangleGeometry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RectangleGeometry","\xe1","\x99","\xa3","\xe8"); }

		void set_xywh(Float _x,Float _y,Float _w,Float _h);
		::Dynamic set_xywh_dyn();

		void set( ::phoenix::Rectangle _rect);
		::Dynamic set_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_RectangleGeometry */ 