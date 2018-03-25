// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_Draw
#define INCLUDED_luxe_Draw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Draw)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS2(phoenix,geometry,ArcGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,CircleGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,LineGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,RectangleGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,RingGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,TextGeometry)
HX_DECLARE_CLASS1(snow,App)

namespace luxe{


class HXCPP_CLASS_ATTRIBUTES Draw_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Draw_obj OBJ_;
		Draw_obj();

	public:
		enum { _hx_ClassId = 0x305a9de2 };

		void __construct( ::luxe::Engine _core);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.Draw")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.Draw"); }
		static hx::ObjectPtr< Draw_obj > __new( ::luxe::Engine _core);
		static hx::ObjectPtr< Draw_obj > __alloc(hx::Ctx *_hx_ctx, ::luxe::Engine _core);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Draw_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Draw","\x24","\x58","\x49","\x2d"); }

		 ::phoenix::geometry::LineGeometry line( ::Dynamic options);
		::Dynamic line_dyn();

		 ::phoenix::geometry::RectangleGeometry rectangle( ::Dynamic options);
		::Dynamic rectangle_dyn();

		 ::phoenix::geometry::QuadGeometry box( ::Dynamic options);
		::Dynamic box_dyn();

		 ::phoenix::geometry::RingGeometry ring( ::Dynamic options);
		::Dynamic ring_dyn();

		 ::phoenix::geometry::CircleGeometry circle( ::Dynamic options);
		::Dynamic circle_dyn();

		 ::phoenix::geometry::ArcGeometry arc( ::Dynamic options);
		::Dynamic arc_dyn();

		 ::phoenix::geometry::Geometry ngon( ::Dynamic options);
		::Dynamic ngon_dyn();

		 ::phoenix::geometry::Geometry poly( ::Dynamic options);
		::Dynamic poly_dyn();

		 ::phoenix::geometry::QuadGeometry texture( ::Dynamic options);
		::Dynamic texture_dyn();

		 ::phoenix::geometry::TextGeometry text( ::Dynamic options);
		::Dynamic text_dyn();

		 ::luxe::Engine core;
};

} // end namespace luxe

#endif /* INCLUDED_luxe_Draw */ 