// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_ArcGeometry
#include <phoenix/geometry/ArcGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_79ca65d32887f2cd_295_new,"luxe.Draw","new",0xc8b456ce,"luxe.Draw.new","luxe/Draw.hx",295,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_25_line,"luxe.Draw","line",0xd3c831c6,"luxe.Draw.line","luxe/Draw.hx",25,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_38_rectangle,"luxe.Draw","rectangle",0x843ee11d,"luxe.Draw.rectangle","luxe/Draw.hx",38,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_48_box,"luxe.Draw","box",0xc8ab4479,"luxe.Draw.box","luxe/Draw.hx",48,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_58_ring,"luxe.Draw","ring",0xd7bf7982,"luxe.Draw.ring","luxe/Draw.hx",58,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_68_circle,"luxe.Draw","circle",0xe4fa2462,"luxe.Draw.circle","luxe/Draw.hx",68,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_78_arc,"luxe.Draw","arc",0xc8aa84c0,"luxe.Draw.arc","luxe/Draw.hx",78,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_88_ngon,"luxe.Draw","ngon",0xd5191b6a,"luxe.Draw.ngon","luxe/Draw.hx",88,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_161_poly,"luxe.Draw","poly",0xd671981e,"luxe.Draw.poly","luxe/Draw.hx",161,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_222_texture,"luxe.Draw","texture",0x1f101e49,"luxe.Draw.texture","luxe/Draw.hx",222,0x47df6e81)
HX_LOCAL_STACK_FRAME(_hx_pos_79ca65d32887f2cd_281_text,"luxe.Draw","text",0xd90ee67f,"luxe.Draw.text","luxe/Draw.hx",281,0x47df6e81)
namespace luxe{

void Draw_obj::__construct( ::luxe::Engine _core){
            	HX_STACKFRAME(&_hx_pos_79ca65d32887f2cd_295_new)
HXDLIN( 295)		this->core = _core;
            	}

Dynamic Draw_obj::__CreateEmpty() { return new Draw_obj; }

void *Draw_obj::_hx_vtable = 0;

Dynamic Draw_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Draw_obj > _hx_result = new Draw_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Draw_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x305a9de2;
}

 ::phoenix::geometry::LineGeometry Draw_obj::line( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_25_line)
HXLINE(  27)		if (hx::IsNull( ( ( ::phoenix::Vector)(options->__Field(HX_("p0",c0,61,00,00),hx::paccDynamic)) ) )) {
HXLINE(  27)			HX_STACK_DO_THROW(::luxe::DebugError_obj::null_assertion((HX_("options.p0 was null",2e,ba,85,81) + ((HX_(" ( ",18,6b,18,00) + HX_("draw.line requires p0:Vector, and p1:Vector",32,56,a7,c0)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE(  28)		if (hx::IsNull( ( ( ::phoenix::Vector)(options->__Field(HX_("p1",c1,61,00,00),hx::paccDynamic)) ) )) {
HXLINE(  28)			HX_STACK_DO_THROW(::luxe::DebugError_obj::null_assertion((HX_("options.p1 was null",0d,32,d0,41) + ((HX_(" ( ",18,6b,18,00) + HX_("draw.line requires p0:Vector, and p1:Vector",32,56,a7,c0)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE(  30)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE(  30)			options->__SetField(HX_("id",db,5b,00,00),HX_("line.geometry",6c,2a,b6,5b),hx::paccDynamic);
            		}
HXLINE(  31)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE(  31)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE(  33)		return  ::phoenix::geometry::LineGeometry_obj::__alloc( HX_CTX ,options);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,line,return )

 ::phoenix::geometry::RectangleGeometry Draw_obj::rectangle( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_38_rectangle)
HXLINE(  40)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE(  40)			options->__SetField(HX_("id",db,5b,00,00),HX_("rectangle.geometry",d1,8e,fe,89),hx::paccDynamic);
            		}
HXLINE(  41)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE(  41)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE(  43)		return  ::phoenix::geometry::RectangleGeometry_obj::__alloc( HX_CTX ,options);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,rectangle,return )

 ::phoenix::geometry::QuadGeometry Draw_obj::box( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_48_box)
HXLINE(  50)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE(  50)			options->__SetField(HX_("id",db,5b,00,00),HX_("quad.geometry",39,d7,db,81),hx::paccDynamic);
            		}
HXLINE(  51)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE(  51)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE(  53)		return  ::phoenix::geometry::QuadGeometry_obj::__alloc( HX_CTX ,options);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,box,return )

 ::phoenix::geometry::RingGeometry Draw_obj::ring( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_58_ring)
HXLINE(  60)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE(  60)			options->__SetField(HX_("id",db,5b,00,00),HX_("ring.geometry",30,0b,ce,7e),hx::paccDynamic);
            		}
HXLINE(  61)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE(  61)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE(  63)		return  ::phoenix::geometry::RingGeometry_obj::__alloc( HX_CTX ,options);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,ring,return )

 ::phoenix::geometry::CircleGeometry Draw_obj::circle( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_68_circle)
HXLINE(  70)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE(  70)			options->__SetField(HX_("id",db,5b,00,00),HX_("circle.geometry",d0,ac,65,e8),hx::paccDynamic);
            		}
HXLINE(  71)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE(  71)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE(  73)		return  ::phoenix::geometry::CircleGeometry_obj::__alloc( HX_CTX ,options);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,circle,return )

 ::phoenix::geometry::ArcGeometry Draw_obj::arc( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_78_arc)
HXLINE(  80)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE(  80)			options->__SetField(HX_("id",db,5b,00,00),HX_("arc.geometry",4e,88,6a,63),hx::paccDynamic);
            		}
HXLINE(  81)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE(  81)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE(  83)		return  ::phoenix::geometry::ArcGeometry_obj::__alloc( HX_CTX ,options);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,arc,return )

 ::phoenix::geometry::Geometry Draw_obj::ngon( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_88_ngon)
HXLINE(  90)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE(  90)			options->__SetField(HX_("id",db,5b,00,00),HX_("ngon.geometry",48,ec,34,a7),hx::paccDynamic);
            		}
HXLINE(  91)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE(  91)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE(  93)		int _sides = (int)3;
HXLINE(  94)		Float _radius = (int)64;
HXLINE(  95)		bool _solid = false;
HXLINE(  96)		Float _x = (int)0;
HXLINE(  97)		Float _y = (int)0;
HXLINE(  98)		Float _angle = (int)0;
HXLINE( 100)		if (hx::IsNotNull( options->__Field(HX_("sides",fc,56,c8,7c),hx::paccDynamic) )) {
HXLINE( 101)			_sides = ( (int)(options->__Field(HX_("sides",fc,56,c8,7c),hx::paccDynamic)) );
            		}
HXLINE( 104)		if (hx::IsNotNull( options->__Field(HX_("r",72,00,00,00),hx::paccDynamic) )) {
HXLINE( 104)			_radius = ( (Float)(options->__Field(HX_("r",72,00,00,00),hx::paccDynamic)) );
            		}
HXLINE( 105)		if (hx::IsNotNull( options->__Field(HX_("x",78,00,00,00),hx::paccDynamic) )) {
HXLINE( 105)			_x = ( (Float)(options->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) );
            		}
HXLINE( 106)		if (hx::IsNotNull( options->__Field(HX_("y",79,00,00,00),hx::paccDynamic) )) {
HXLINE( 106)			_y = ( (Float)(options->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) );
            		}
HXLINE( 107)		if (hx::IsNotNull( options->__Field(HX_("angle",d3,43,e2,22),hx::paccDynamic) )) {
HXLINE( 107)			_angle = ( (Float)(options->__Field(HX_("angle",d3,43,e2,22),hx::paccDynamic)) );
            		}
HXLINE( 108)		if (hx::IsNotNull( options->__Field(HX_("solid",2b,b4,c5,80),hx::paccDynamic) )) {
HXLINE( 108)			_solid = ( (bool)(options->__Field(HX_("solid",2b,b4,c5,80),hx::paccDynamic)) );
            		}
HXLINE( 110)		if (!(_solid)) {
HXLINE( 111)			options->__SetField(HX_("primitive_type",92,c8,6d,88),(int)1,hx::paccDynamic);
            		}
            		else {
HXLINE( 113)			options->__SetField(HX_("primitive_type",92,c8,6d,88),(int)6,hx::paccDynamic);
            		}
HXLINE( 116)		 ::phoenix::geometry::Geometry _geometry =  ::phoenix::geometry::Geometry_obj::__alloc( HX_CTX ,options);
HXLINE( 117)		Float _two_pi = ((int)2 * ::Math_obj::PI);
HXLINE( 118)		Float _sides_over_pi = ((Float)::Math_obj::PI / (Float)_sides);
HXLINE( 119)		Float _sides_over_twopi = ((Float)_two_pi / (Float)_sides);
HXLINE( 120)		Float _angle_rad = (_angle * ((Float)0.0174532925199432781));
HXLINE( 121)		 ::phoenix::Color _color = ( ( ::phoenix::Color)(options->__Field(HX_("color",63,71,5c,4a),hx::paccDynamic)) );
HXLINE( 123)		if (_solid) {
HXLINE( 125)			_geometry->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX , ::phoenix::Vector_obj::__alloc( HX_CTX ,_x,_y,null(),null()),_color,null()));
            		}
HXLINE( 128)		int _count;
HXDLIN( 128)		if ((_solid == false)) {
HXLINE( 128)			_count = _sides;
            		}
            		else {
HXLINE( 128)			_count = (_sides + (int)1);
            		}
HXLINE( 129)		::Array< ::Dynamic> _points = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 131)		{
HXLINE( 131)			int _g1 = (int)0;
HXDLIN( 131)			int _g = _count;
HXDLIN( 131)			while((_g1 < _g)){
HXLINE( 131)				_g1 = (_g1 + (int)1);
HXDLIN( 131)				int i = (_g1 - (int)1);
HXLINE( 133)				Float _hx___x = (_radius * ::Math_obj::sin(((_angle_rad + _sides_over_pi) + (i * _sides_over_twopi))));
HXLINE( 134)				Float _hx___y = (_radius * ::Math_obj::cos(((_angle_rad + _sides_over_pi) + (i * _sides_over_twopi))));
HXLINE( 135)				 ::phoenix::Vector _hx___pos =  ::phoenix::Vector_obj::__alloc( HX_CTX ,(_x + _hx___x),(_y + _hx___y),(int)0,null());
HXLINE( 137)				_geometry->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX ,_hx___pos,_color,null()));
HXLINE( 139)				if (!(_solid)) {
HXLINE( 140)					if ((i > (int)0)) {
HXLINE( 141)						 ::phoenix::Vector _last = _points->__get((i - (int)1)).StaticCast<  ::phoenix::Vector >();
HXLINE( 142)						_geometry->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX ,_hx___pos,_color,null()));
            					}
            				}
HXLINE( 146)				_points->push(_hx___pos);
            			}
            		}
HXLINE( 150)		if (!(_solid)) {
HXLINE( 151)			_geometry->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX ,_points->__get((int)0).StaticCast<  ::phoenix::Vector >(),_color,null()));
            		}
HXLINE( 154)		return _geometry;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,ngon,return )

 ::phoenix::geometry::Geometry Draw_obj::poly( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_161_poly)
HXLINE( 163)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE( 163)			options->__SetField(HX_("id",db,5b,00,00),HX_("poly.geometry",14,39,49,01),hx::paccDynamic);
            		}
HXLINE( 164)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE( 164)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE( 165)		if (hx::IsNull( options->__Field(HX_("solid",2b,b4,c5,80),hx::paccDynamic) )) {
HXLINE( 165)			options->__SetField(HX_("solid",2b,b4,c5,80),true,hx::paccDynamic);
            		}
HXLINE( 166)		if (hx::IsNull( options->__Field(HX_("close",b8,17,63,48),hx::paccDynamic) )) {
HXLINE( 166)			options->__SetField(HX_("close",b8,17,63,48),false,hx::paccDynamic);
            		}
HXLINE( 168)		 ::phoenix::Color _default_col = null();
HXLINE( 169)		bool _has_colors = hx::IsNotNull( ( (::Array< ::Dynamic>)(options->__Field(HX_("colors",b0,c5,86,c6),hx::paccDynamic)) ) );
HXLINE( 170)		if (!(_has_colors)) {
HXLINE( 170)			if (hx::IsNull( ( ( ::phoenix::Color)(options->__Field(HX_("color",63,71,5c,4a),hx::paccDynamic)) ) )) {
HXLINE( 170)				options->__SetField(HX_("color",63,71,5c,4a), ::phoenix::Color_obj::__alloc( HX_CTX ,null(),null(),null(),null()),hx::paccDynamic);
            			}
HXDLIN( 170)			_default_col = ( ( ::phoenix::Color)(options->__Field(HX_("color",63,71,5c,4a),hx::paccDynamic)) );
            		}
HXLINE( 172)		if (( (bool)(options->__Field(HX_("solid",2b,b4,c5,80),hx::paccDynamic)) )) {
HXLINE( 174)			if (hx::IsNull( options->__Field(HX_("primitive_type",92,c8,6d,88),hx::paccDynamic) )) {
HXLINE( 174)				options->__SetField(HX_("primitive_type",92,c8,6d,88),(int)6,hx::paccDynamic);
            			}
HXLINE( 176)			 ::phoenix::geometry::Geometry _geometry =  ::phoenix::geometry::Geometry_obj::__alloc( HX_CTX ,options);
HXLINE( 178)			int _idx = (int)0;
HXLINE( 179)			int _l = ( (::Array< ::Dynamic>)(options->__Field(HX_("points",23,12,2e,f7),hx::paccDynamic)) )->length;
HXLINE( 180)			{
HXLINE( 180)				int _g = (int)0;
HXDLIN( 180)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(options->__Field(HX_("points",23,12,2e,f7),hx::paccDynamic)) );
HXDLIN( 180)				while((_g < _g1->length)){
HXLINE( 180)					 ::phoenix::Vector _point = _g1->__get(_g).StaticCast<  ::phoenix::Vector >();
HXDLIN( 180)					_g = (_g + (int)1);
HXLINE( 181)					 ::phoenix::Color _color;
HXDLIN( 181)					if (_has_colors) {
HXLINE( 181)						_color = Dynamic(  ::Dynamic(options->__Field(HX_("colors",b0,c5,86,c6),hx::paccDynamic))->__GetItem(_idx)).StaticCast<  ::phoenix::Color >();
            					}
            					else {
HXLINE( 181)						_color = _default_col;
            					}
HXLINE( 182)					_geometry->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX ,_point,_color,null()));
HXLINE( 183)					_idx = (_idx + (int)1);
            				}
            			}
HXLINE( 186)			return _geometry;
            		}
            		else {
HXLINE( 190)			if (hx::IsNull( options->__Field(HX_("primitive_type",92,c8,6d,88),hx::paccDynamic) )) {
HXLINE( 190)				options->__SetField(HX_("primitive_type",92,c8,6d,88),(int)1,hx::paccDynamic);
            			}
HXLINE( 192)			 ::phoenix::geometry::Geometry _geometry1 =  ::phoenix::geometry::Geometry_obj::__alloc( HX_CTX ,options);
HXLINE( 194)			int _idx1 = (int)0;
HXLINE( 195)			int _l1 = ( (::Array< ::Dynamic>)(options->__Field(HX_("points",23,12,2e,f7),hx::paccDynamic)) )->length;
HXLINE( 197)			{
HXLINE( 197)				int _g2 = (int)0;
HXDLIN( 197)				::Array< ::Dynamic> _g11 = ( (::Array< ::Dynamic>)(options->__Field(HX_("points",23,12,2e,f7),hx::paccDynamic)) );
HXDLIN( 197)				while((_g2 < _g11->length)){
HXLINE( 197)					 ::phoenix::Vector _point1 = _g11->__get(_g2).StaticCast<  ::phoenix::Vector >();
HXDLIN( 197)					_g2 = (_g2 + (int)1);
HXLINE( 198)					 ::phoenix::Color _color1;
HXDLIN( 198)					if (_has_colors) {
HXLINE( 198)						_color1 = Dynamic(  ::Dynamic(options->__Field(HX_("colors",b0,c5,86,c6),hx::paccDynamic))->__GetItem(_idx1)).StaticCast<  ::phoenix::Color >();
            					}
            					else {
HXLINE( 198)						_color1 = _default_col;
            					}
HXLINE( 199)					_geometry1->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX ,_point1,_color1,null()));
HXLINE( 200)					if ((_idx1 < (_l1 - (int)2))) {
HXLINE( 201)						 ::phoenix::Color _color_next;
HXDLIN( 201)						if (_has_colors) {
HXLINE( 201)							::Array< ::Dynamic> options1 = ( (::Array< ::Dynamic>)(options->__Field(HX_("colors",b0,c5,86,c6),hx::paccDynamic)) );
HXDLIN( 201)							_color_next = options1->__get((_idx1 + (int)1)).StaticCast<  ::phoenix::Color >();
            						}
            						else {
HXLINE( 201)							_color_next = _default_col;
            						}
HXLINE( 202)						::Array< ::Dynamic> options2 = ( (::Array< ::Dynamic>)(options->__Field(HX_("points",23,12,2e,f7),hx::paccDynamic)) );
HXDLIN( 202)						_geometry1->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX ,options2->__get((_idx1 + (int)1)).StaticCast<  ::phoenix::Vector >(),_color_next,null()));
            					}
HXLINE( 204)					_idx1 = (_idx1 + (int)1);
            				}
            			}
HXLINE( 207)			if (( (bool)(options->__Field(HX_("close",b8,17,63,48),hx::paccDynamic)) )) {
HXLINE( 208)				int _last = (( (::Array< ::Dynamic>)(options->__Field(HX_("points",23,12,2e,f7),hx::paccDynamic)) )->length - (int)1);
HXLINE( 209)				 ::phoenix::Color _color11;
HXDLIN( 209)				if (_has_colors) {
HXLINE( 209)					_color11 = Dynamic(  ::Dynamic(options->__Field(HX_("colors",b0,c5,86,c6),hx::paccDynamic))->__GetItem((int)0)).StaticCast<  ::phoenix::Color >();
            				}
            				else {
HXLINE( 209)					_color11 = _default_col;
            				}
HXLINE( 210)				 ::phoenix::Color _color2;
HXDLIN( 210)				if (_has_colors) {
HXLINE( 210)					_color2 = Dynamic(  ::Dynamic(options->__Field(HX_("colors",b0,c5,86,c6),hx::paccDynamic))->__GetItem(_last)).StaticCast<  ::phoenix::Color >();
            				}
            				else {
HXLINE( 210)					_color2 = _default_col;
            				}
HXLINE( 211)				_geometry1->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX ,Dynamic(  ::Dynamic(options->__Field(HX_("points",23,12,2e,f7),hx::paccDynamic))->__GetItem(_last)).StaticCast<  ::phoenix::Vector >(),_color11,null()));
HXLINE( 212)				_geometry1->add( ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX ,Dynamic(  ::Dynamic(options->__Field(HX_("points",23,12,2e,f7),hx::paccDynamic))->__GetItem((int)0)).StaticCast<  ::phoenix::Vector >(),_color2,null()));
            			}
HXLINE( 215)			return _geometry1;
            		}
HXLINE( 172)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,poly,return )

 ::phoenix::geometry::QuadGeometry Draw_obj::texture( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_222_texture)
HXLINE( 224)		if (hx::IsNull( ( (::String)(options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE( 224)			options->__SetField(HX_("id",db,5b,00,00),HX_("texture.geometry",a5,a4,84,ec),hx::paccDynamic);
            		}
HXLINE( 225)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE( 225)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE( 227)		Float _x = (int)0;
HXLINE( 228)		Float _y = (int)0;
HXLINE( 229)		Float _w = (int)0;
HXLINE( 230)		Float _h = (int)0;
HXLINE( 233)		int _tw = (int)64;
HXLINE( 234)		int _th = (int)64;
HXLINE( 236)		if (hx::IsNotNull( ( ( ::phoenix::Texture)(options->__Field(HX_("texture",db,c8,e0,9e),hx::paccDynamic)) ) )) {
HXLINE( 237)			_tw = ( ( ::phoenix::Texture)(options->__Field(HX_("texture",db,c8,e0,9e),hx::paccDynamic)) )->width;
HXLINE( 238)			_th = ( ( ::phoenix::Texture)(options->__Field(HX_("texture",db,c8,e0,9e),hx::paccDynamic)) )->height;
HXLINE( 240)			if (hx::IsNull( ( ( ::phoenix::Vector)(options->__Field(HX_("size",c1,a0,53,4c),hx::paccDynamic)) ) )) {
HXLINE( 241)				_w = _tw;
HXLINE( 242)				_h = _th;
            			}
            		}
HXLINE( 246)		if (hx::IsNotNull( ( ( ::phoenix::Vector)(options->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) )) {
HXLINE( 247)			_x = ( ( ::phoenix::Vector)(options->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) )->x;
HXLINE( 248)			_y = ( ( ::phoenix::Vector)(options->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) )->y;
            		}
HXLINE( 250)		if (hx::IsNotNull( ( ( ::phoenix::Vector)(options->__Field(HX_("size",c1,a0,53,4c),hx::paccDynamic)) ) )) {
HXLINE( 251)			_w = ( ( ::phoenix::Vector)(options->__Field(HX_("size",c1,a0,53,4c),hx::paccDynamic)) )->x;
HXLINE( 252)			_h = ( ( ::phoenix::Vector)(options->__Field(HX_("size",c1,a0,53,4c),hx::paccDynamic)) )->y;
            		}
HXLINE( 255)		if (hx::IsNull( options->__Field(HX_("x",78,00,00,00),hx::paccDynamic) )) {
HXLINE( 255)			options->__SetField(HX_("x",78,00,00,00),_x,hx::paccDynamic);
            		}
HXLINE( 256)		if (hx::IsNull( options->__Field(HX_("y",79,00,00,00),hx::paccDynamic) )) {
HXLINE( 256)			options->__SetField(HX_("y",79,00,00,00),_y,hx::paccDynamic);
            		}
HXLINE( 257)		if (hx::IsNull( options->__Field(HX_("w",77,00,00,00),hx::paccDynamic) )) {
HXLINE( 257)			options->__SetField(HX_("w",77,00,00,00),_w,hx::paccDynamic);
            		}
HXLINE( 258)		if (hx::IsNull( options->__Field(HX_("h",68,00,00,00),hx::paccDynamic) )) {
HXLINE( 258)			options->__SetField(HX_("h",68,00,00,00),_h,hx::paccDynamic);
            		}
HXLINE( 260)		 ::phoenix::geometry::QuadGeometry _quad =  ::phoenix::geometry::QuadGeometry_obj::__alloc( HX_CTX ,options);
HXLINE( 262)		Float _ux = (int)0;
HXLINE( 263)		Float _uy = (int)0;
HXLINE( 264)		Float _uw = _tw;
HXLINE( 265)		Float _uh = _th;
HXLINE( 267)		if (hx::IsNotNull( ( ( ::phoenix::Rectangle)(options->__Field(HX_("uv",61,66,00,00),hx::paccDynamic)) ) )) {
HXLINE( 268)			_ux = ( ( ::phoenix::Rectangle)(options->__Field(HX_("uv",61,66,00,00),hx::paccDynamic)) )->x;
HXLINE( 269)			_uy = ( ( ::phoenix::Rectangle)(options->__Field(HX_("uv",61,66,00,00),hx::paccDynamic)) )->y;
HXLINE( 270)			_uw = ( ( ::phoenix::Rectangle)(options->__Field(HX_("uv",61,66,00,00),hx::paccDynamic)) )->w;
HXLINE( 271)			_uh = ( ( ::phoenix::Rectangle)(options->__Field(HX_("uv",61,66,00,00),hx::paccDynamic)) )->h;
            		}
HXLINE( 274)		{
HXLINE( 274)			 ::phoenix::Rectangle _rect =  ::phoenix::Rectangle_obj::__alloc( HX_CTX ,_ux,_uy,_uw,_uh);
HXDLIN( 274)			if (hx::IsNull( _quad->state->texture )) {
HXLINE( 274)				HX_STACK_DO_THROW(::luxe::DebugError_obj::null_assertion((HX_("texture was null",c3,9c,a8,99) + ((HX_(" ( ",18,6b,18,00) + HX_("QuadGeometry; Calling UV on a geometry with null texture.",65,99,fb,a6)) + HX_(" )",09,1c,00,00)))));
            			}
HXDLIN( 274)			Float tlx = ((Float)_rect->x / (Float)_quad->state->texture->width_actual);
HXDLIN( 274)			Float tly = ((Float)_rect->y / (Float)_quad->state->texture->height_actual);
HXDLIN( 274)			Float szx = ((Float)_rect->w / (Float)_quad->state->texture->width_actual);
HXDLIN( 274)			Float szy = ((Float)_rect->h / (Float)_quad->state->texture->height_actual);
HXDLIN( 274)			if ((_quad->vertices->length != (int)0)) {
HXLINE( 274)				Float sz_x = szx;
HXDLIN( 274)				Float sz_y = szy;
HXDLIN( 274)				Float tl_x = tlx;
HXDLIN( 274)				Float tl_y = tly;
HXDLIN( 274)				_quad->_uv_x = tl_x;
HXDLIN( 274)				_quad->_uv_y = tl_y;
HXDLIN( 274)				_quad->_uv_w = sz_x;
HXDLIN( 274)				_quad->_uv_h = sz_y;
HXDLIN( 274)				Float tr_x = (tl_x + sz_x);
HXDLIN( 274)				Float tr_y = tl_y;
HXDLIN( 274)				Float br_x = (tl_x + sz_x);
HXDLIN( 274)				Float br_y = (tl_y + sz_y);
HXDLIN( 274)				Float bl_x = tl_x;
HXDLIN( 274)				Float bl_y = (tl_y + sz_y);
HXDLIN( 274)				Float tmp_x = ((Float)0.0);
HXDLIN( 274)				Float tmp_y = ((Float)0.0);
HXDLIN( 274)				int rotations = ::Std_obj::_hx_int(((Float)_quad->uv_angle / (Float)(int)90));
HXDLIN( 274)				rotations = (rotations - ((int)4 * ::Math_obj::floor(((Float)rotations / (Float)(int)4))));
HXDLIN( 274)				{
HXLINE( 274)					int _g1 = (int)0;
HXDLIN( 274)					int _g = rotations;
HXDLIN( 274)					while((_g1 < _g)){
HXLINE( 274)						_g1 = (_g1 + (int)1);
HXDLIN( 274)						int r = (_g1 - (int)1);
HXDLIN( 274)						{
HXLINE( 274)							tmp_x = tl_x;
HXDLIN( 274)							tl_x = bl_x;
HXDLIN( 274)							bl_x = br_x;
HXDLIN( 274)							br_x = tr_x;
HXDLIN( 274)							tr_x = tmp_x;
HXDLIN( 274)							tmp_y = tl_y;
HXDLIN( 274)							tl_y = bl_y;
HXDLIN( 274)							bl_y = br_y;
HXDLIN( 274)							br_y = tr_y;
HXDLIN( 274)							tr_y = tmp_y;
            						}
            					}
            				}
HXDLIN( 274)				if (_quad->flipy) {
HXLINE( 274)					tmp_y = bl_y;
HXDLIN( 274)					bl_y = tl_y;
HXDLIN( 274)					tl_y = tmp_y;
HXDLIN( 274)					tmp_x = bl_x;
HXDLIN( 274)					bl_x = tl_x;
HXDLIN( 274)					tl_x = tmp_x;
HXDLIN( 274)					tmp_y = br_y;
HXDLIN( 274)					br_y = tr_y;
HXDLIN( 274)					tr_y = tmp_y;
HXDLIN( 274)					tmp_x = br_x;
HXDLIN( 274)					br_x = tr_x;
HXDLIN( 274)					tr_x = tmp_x;
            				}
HXDLIN( 274)				if (_quad->flipx) {
HXLINE( 274)					tmp_x = tr_x;
HXDLIN( 274)					tr_x = tl_x;
HXDLIN( 274)					tl_x = tmp_x;
HXDLIN( 274)					tmp_y = tr_y;
HXDLIN( 274)					tr_y = tl_y;
HXDLIN( 274)					tl_y = tmp_y;
HXDLIN( 274)					tmp_x = br_x;
HXDLIN( 274)					br_x = bl_x;
HXDLIN( 274)					bl_x = tmp_x;
HXDLIN( 274)					tmp_y = br_y;
HXDLIN( 274)					br_y = bl_y;
HXDLIN( 274)					bl_y = tmp_y;
            				}
HXDLIN( 274)				{
HXLINE( 274)					 ::phoenix::geometry::TextureCoord _this = _quad->vertices->__get((int)0).StaticCast<  ::phoenix::geometry::Vertex >()->uv->uv0;
HXDLIN( 274)					_this->u = tl_x;
HXDLIN( 274)					_this->v = tl_y;
            				}
HXDLIN( 274)				{
HXLINE( 274)					 ::phoenix::geometry::TextureCoord _this1 = _quad->vertices->__get((int)1).StaticCast<  ::phoenix::geometry::Vertex >()->uv->uv0;
HXDLIN( 274)					_this1->u = tr_x;
HXDLIN( 274)					_this1->v = tr_y;
            				}
HXDLIN( 274)				{
HXLINE( 274)					 ::phoenix::geometry::TextureCoord _this2 = _quad->vertices->__get((int)2).StaticCast<  ::phoenix::geometry::Vertex >()->uv->uv0;
HXDLIN( 274)					_this2->u = br_x;
HXDLIN( 274)					_this2->v = br_y;
            				}
HXDLIN( 274)				{
HXLINE( 274)					 ::phoenix::geometry::TextureCoord _this3 = _quad->vertices->__get((int)3).StaticCast<  ::phoenix::geometry::Vertex >()->uv->uv0;
HXDLIN( 274)					_this3->u = bl_x;
HXDLIN( 274)					_this3->v = bl_y;
            				}
HXDLIN( 274)				{
HXLINE( 274)					 ::phoenix::geometry::TextureCoord _this4 = _quad->vertices->__get((int)4).StaticCast<  ::phoenix::geometry::Vertex >()->uv->uv0;
HXDLIN( 274)					_this4->u = tl_x;
HXDLIN( 274)					_this4->v = tl_y;
            				}
HXDLIN( 274)				{
HXLINE( 274)					 ::phoenix::geometry::TextureCoord _this5 = _quad->vertices->__get((int)5).StaticCast<  ::phoenix::geometry::Vertex >()->uv->uv0;
HXDLIN( 274)					_this5->u = br_x;
HXDLIN( 274)					_this5->v = br_y;
            				}
HXDLIN( 274)				_quad->set_dirty(true);
            			}
            		}
HXLINE( 276)		return _quad;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,texture,return )

 ::phoenix::geometry::TextGeometry Draw_obj::text( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_79ca65d32887f2cd_281_text)
HXLINE( 283)		if (hx::IsNull( ( ( ::phoenix::Batcher)(options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE( 283)			options->__SetField(HX_("batcher",a7,22,10,c0),::Luxe_obj::renderer->batcher,hx::paccDynamic);
            		}
HXLINE( 285)		return  ::phoenix::geometry::TextGeometry_obj::__alloc( HX_CTX ,options);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,text,return )


hx::ObjectPtr< Draw_obj > Draw_obj::__new( ::luxe::Engine _core) {
	hx::ObjectPtr< Draw_obj > __this = new Draw_obj();
	__this->__construct(_core);
	return __this;
}

hx::ObjectPtr< Draw_obj > Draw_obj::__alloc(hx::Ctx *_hx_ctx, ::luxe::Engine _core) {
	Draw_obj *__this = (Draw_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Draw_obj), true, "luxe.Draw"));
	*(void **)__this = Draw_obj::_hx_vtable;
	__this->__construct(_core);
	return __this;
}

Draw_obj::Draw_obj()
{
}

void Draw_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Draw);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_END_CLASS();
}

void Draw_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
}

hx::Val Draw_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return hx::Val( box_dyn() ); }
		if (HX_FIELD_EQ(inName,"arc") ) { return hx::Val( arc_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return hx::Val( line_dyn() ); }
		if (HX_FIELD_EQ(inName,"ring") ) { return hx::Val( ring_dyn() ); }
		if (HX_FIELD_EQ(inName,"ngon") ) { return hx::Val( ngon_dyn() ); }
		if (HX_FIELD_EQ(inName,"poly") ) { return hx::Val( poly_dyn() ); }
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text_dyn() ); }
		if (HX_FIELD_EQ(inName,"core") ) { return hx::Val( core ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return hx::Val( circle_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return hx::Val( texture_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rectangle") ) { return hx::Val( rectangle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Draw_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast<  ::luxe::Engine >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Draw_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Draw_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Draw_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Draw_obj_sStaticStorageInfo = 0;
#endif

static ::String Draw_obj_sMemberFields[] = {
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("ring","\xb0","\x5f","\xaa","\x4b"),
	HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),
	HX_HCSTRING("arc","\x52","\xfe","\x49","\x00"),
	HX_HCSTRING("ngon","\x98","\x01","\x04","\x49"),
	HX_HCSTRING("poly","\x4c","\x7e","\x5c","\x4a"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	::String(null()) };

static void Draw_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Draw_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
};

#endif

hx::Class Draw_obj::__mClass;

void Draw_obj::__register()
{
	hx::Object *dummy = new Draw_obj;
	Draw_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Draw","\xdc","\x97","\xb9","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Draw_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Draw_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Draw_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Draw_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Draw_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Draw_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe