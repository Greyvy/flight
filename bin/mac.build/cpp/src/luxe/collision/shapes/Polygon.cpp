// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_luxe_collision_data_RayCollision
#include <luxe/collision/data/RayCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_data_ShapeCollision
#include <luxe/collision/data/ShapeCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_sat_SAT2D
#include <luxe/collision/sat/SAT2D.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Circle
#include <luxe/collision/shapes/Circle.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Polygon
#include <luxe/collision/shapes/Polygon.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Ray
#include <luxe/collision/shapes/Ray.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_00f5e35fff726ed5_21_new,"luxe.collision.shapes.Polygon","new",0xc0f30244,"luxe.collision.shapes.Polygon.new","luxe/collision/shapes/Polygon.hx",21,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_35_test,"luxe.collision.shapes.Polygon","test",0x17a63dee,"luxe.collision.shapes.Polygon.test","luxe/collision/shapes/Polygon.hx",35,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_42_testCircle,"luxe.collision.shapes.Polygon","testCircle",0x29084a9e,"luxe.collision.shapes.Polygon.testCircle","luxe/collision/shapes/Polygon.hx",42,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_49_testPolygon,"luxe.collision.shapes.Polygon","testPolygon",0xdb13a62c,"luxe.collision.shapes.Polygon.testPolygon","luxe/collision/shapes/Polygon.hx",49,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_56_testRay,"luxe.collision.shapes.Polygon","testRay",0xa3ad389c,"luxe.collision.shapes.Polygon.testRay","luxe/collision/shapes/Polygon.hx",56,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_61_destroy,"luxe.collision.shapes.Polygon","destroy",0x0a6e20de,"luxe.collision.shapes.Polygon.destroy","luxe/collision/shapes/Polygon.hx",61,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_147_get_transformedVertices,"luxe.collision.shapes.Polygon","get_transformedVertices",0x97331a5f,"luxe.collision.shapes.Polygon.get_transformedVertices","luxe/collision/shapes/Polygon.hx",147,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_164_get_vertices,"luxe.collision.shapes.Polygon","get_vertices",0x55f4e59e,"luxe.collision.shapes.Polygon.get_vertices","luxe/collision/shapes/Polygon.hx",164,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_80_create,"luxe.collision.shapes.Polygon","create",0xa2f97b98,"luxe.collision.shapes.Polygon.create","luxe/collision/shapes/Polygon.hx",80,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_105_rectangle,"luxe.collision.shapes.Polygon","rectangle",0x40348913,"luxe.collision.shapes.Polygon.rectangle","luxe/collision/shapes/Polygon.hx",105,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_133_square,"luxe.collision.shapes.Polygon","square",0x7fdc1539,"luxe.collision.shapes.Polygon.square","luxe/collision/shapes/Polygon.hx",133,0x6040276b)
HX_LOCAL_STACK_FRAME(_hx_pos_00f5e35fff726ed5_141_triangle,"luxe.collision.shapes.Polygon","triangle",0xd2d33264,"luxe.collision.shapes.Polygon.triangle","luxe/collision/shapes/Polygon.hx",141,0x6040276b)
namespace luxe{
namespace collision{
namespace shapes{

void Polygon_obj::__construct(Float x,Float y,::Array< ::Dynamic> vertices){
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_21_new)
HXLINE(  23)		super::__construct(x,y);
HXLINE(  25)		this->name = ((HX_("polygon(sides:",ac,f4,5b,aa) + vertices->length) + HX_(")",29,00,00,00));
HXLINE(  27)		this->_transformedVertices = ::Array_obj< ::Dynamic>::__new();
HXLINE(  28)		this->_vertices = vertices;
            	}

Dynamic Polygon_obj::__CreateEmpty() { return new Polygon_obj; }

void *Polygon_obj::_hx_vtable = 0;

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Polygon_obj > _hx_result = new Polygon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Polygon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2003dd7f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2003dd7f;
	} else {
		return inClassId==(int)0x5ecd9f2c;
	}
}

 ::luxe::collision::data::ShapeCollision Polygon_obj::test( ::luxe::collision::shapes::Shape shape, ::luxe::collision::data::ShapeCollision into){
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_35_test)
HXDLIN(  35)		return shape->testPolygon(hx::ObjectPtr<OBJ_>(this),into,true);
            	}


 ::luxe::collision::data::ShapeCollision Polygon_obj::testCircle( ::luxe::collision::shapes::Circle circle, ::luxe::collision::data::ShapeCollision into,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_42_testCircle)
HXDLIN(  42)		return ::luxe::collision::sat::SAT2D_obj::testCircleVsPolygon(circle,hx::ObjectPtr<OBJ_>(this),into,!(flip));
            	}


 ::luxe::collision::data::ShapeCollision Polygon_obj::testPolygon( ::luxe::collision::shapes::Polygon polygon, ::luxe::collision::data::ShapeCollision into,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_49_testPolygon)
HXDLIN(  49)		return ::luxe::collision::sat::SAT2D_obj::testPolygonVsPolygon(hx::ObjectPtr<OBJ_>(this),polygon,into,flip);
            	}


 ::luxe::collision::data::RayCollision Polygon_obj::testRay( ::luxe::collision::shapes::Ray ray, ::luxe::collision::data::RayCollision into){
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_56_testRay)
HXDLIN(  56)		return ::luxe::collision::sat::SAT2D_obj::testRayVsPolygon(ray,hx::ObjectPtr<OBJ_>(this),null());
            	}


void Polygon_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_61_destroy)
HXLINE(  63)		int _count = this->_vertices->length;
HXLINE(  65)		{
HXLINE(  65)			int _g1 = (int)0;
HXDLIN(  65)			int _g = _count;
HXDLIN(  65)			while((_g1 < _g)){
HXLINE(  65)				_g1 = (_g1 + (int)1);
HXDLIN(  65)				int i = (_g1 - (int)1);
HXLINE(  66)				this->_vertices[i] = null();
            			}
            		}
HXLINE(  69)		this->_transformedVertices = null();
HXLINE(  70)		this->_vertices = null();
HXLINE(  72)		this->super::destroy();
            	}


::Array< ::Dynamic> Polygon_obj::get_transformedVertices(){
            	HX_GC_STACKFRAME(&_hx_pos_00f5e35fff726ed5_147_get_transformedVertices)
HXLINE( 149)		if (!(this->_transformed)) {
HXLINE( 150)			this->_transformedVertices = ::Array_obj< ::Dynamic>::__new();
HXLINE( 151)			this->_transformed = true;
HXLINE( 153)			int _count = this->_vertices->length;
HXLINE( 155)			{
HXLINE( 155)				int _g1 = (int)0;
HXDLIN( 155)				int _g = _count;
HXDLIN( 155)				while((_g1 < _g)){
HXLINE( 155)					_g1 = (_g1 + (int)1);
HXDLIN( 155)					int i = (_g1 - (int)1);
HXLINE( 156)					::Array< ::Dynamic> _hx_tmp = this->_transformedVertices;
HXDLIN( 156)					 ::phoenix::Vector _this = this->_vertices->__get(i).StaticCast<  ::phoenix::Vector >();
HXDLIN( 156)					 ::phoenix::Vector _this1 =  ::phoenix::Vector_obj::__alloc( HX_CTX ,_this->x,_this->y,_this->z,_this->w);
HXDLIN( 156)					Float _x = _this1->x;
HXDLIN( 156)					Float _y = _this1->y;
HXDLIN( 156)					Float _z = _this1->z;
HXDLIN( 156)					::Array< Float > e = this->_transformMatrix->elements;
HXDLIN( 156)					{
HXLINE( 156)						Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));
HXDLIN( 156)						Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));
HXDLIN( 156)						Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));
HXDLIN( 156)						bool prev = _this1->ignore_listeners;
HXDLIN( 156)						_this1->ignore_listeners = true;
HXDLIN( 156)						{
HXLINE( 156)							_this1->x = _x1;
HXDLIN( 156)							if (!(_this1->_construct)) {
HXLINE( 156)								bool _hx_tmp1;
HXDLIN( 156)								if (hx::IsNotNull( _this1->listen_x )) {
HXLINE( 156)									_hx_tmp1 = !(_this1->ignore_listeners);
            								}
            								else {
HXLINE( 156)									_hx_tmp1 = false;
            								}
HXDLIN( 156)								if (_hx_tmp1) {
HXLINE( 156)									_this1->listen_x(_x1);
            								}
            							}
            						}
HXDLIN( 156)						{
HXLINE( 156)							_this1->y = _y1;
HXDLIN( 156)							if (!(_this1->_construct)) {
HXLINE( 156)								bool _hx_tmp2;
HXDLIN( 156)								if (hx::IsNotNull( _this1->listen_y )) {
HXLINE( 156)									_hx_tmp2 = !(_this1->ignore_listeners);
            								}
            								else {
HXLINE( 156)									_hx_tmp2 = false;
            								}
HXDLIN( 156)								if (_hx_tmp2) {
HXLINE( 156)									_this1->listen_y(_y1);
            								}
            							}
            						}
HXDLIN( 156)						{
HXLINE( 156)							_this1->z = _z1;
HXDLIN( 156)							if (!(_this1->_construct)) {
HXLINE( 156)								bool _hx_tmp3;
HXDLIN( 156)								if (hx::IsNotNull( _this1->listen_z )) {
HXLINE( 156)									_hx_tmp3 = !(_this1->ignore_listeners);
            								}
            								else {
HXLINE( 156)									_hx_tmp3 = false;
            								}
HXDLIN( 156)								if (_hx_tmp3) {
HXLINE( 156)									_this1->listen_z(_z1);
            								}
            							}
            						}
HXDLIN( 156)						_this1->ignore_listeners = prev;
HXDLIN( 156)						bool _hx_tmp4;
HXDLIN( 156)						if (hx::IsNotNull( _this1->listen_x )) {
HXLINE( 156)							_hx_tmp4 = !(_this1->ignore_listeners);
            						}
            						else {
HXLINE( 156)							_hx_tmp4 = false;
            						}
HXDLIN( 156)						if (_hx_tmp4) {
HXLINE( 156)							_this1->listen_x(_this1->x);
            						}
HXDLIN( 156)						bool _hx_tmp5;
HXDLIN( 156)						if (hx::IsNotNull( _this1->listen_y )) {
HXLINE( 156)							_hx_tmp5 = !(_this1->ignore_listeners);
            						}
            						else {
HXLINE( 156)							_hx_tmp5 = false;
            						}
HXDLIN( 156)						if (_hx_tmp5) {
HXLINE( 156)							_this1->listen_y(_this1->y);
            						}
HXDLIN( 156)						bool _hx_tmp6;
HXDLIN( 156)						if (hx::IsNotNull( _this1->listen_z )) {
HXLINE( 156)							_hx_tmp6 = !(_this1->ignore_listeners);
            						}
            						else {
HXLINE( 156)							_hx_tmp6 = false;
            						}
HXDLIN( 156)						if (_hx_tmp6) {
HXLINE( 156)							_this1->listen_z(_this1->z);
            						}
            					}
HXDLIN( 156)					_hx_tmp->push(_this1);
            				}
            			}
            		}
HXLINE( 160)		return this->_transformedVertices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_transformedVertices,return )

::Array< ::Dynamic> Polygon_obj::get_vertices(){
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_164_get_vertices)
HXDLIN( 164)		return this->_vertices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_vertices,return )

 ::luxe::collision::shapes::Polygon Polygon_obj::create(Float x,Float y,int sides,hx::Null< Float >  __o_radius){
Float radius = __o_radius.Default(100);
            	HX_GC_STACKFRAME(&_hx_pos_00f5e35fff726ed5_80_create)
HXLINE(  82)		if ((sides < (int)3)) {
HXLINE(  83)			HX_STACK_DO_THROW(HX_("Polygon - Needs at least 3 sides",07,3f,1e,8d));
            		}
HXLINE(  86)		Float rotation = ((Float)(::Math_obj::PI * (int)2) / (Float)sides);
HXLINE(  87)		Float angle;
HXLINE(  88)		 ::phoenix::Vector vector;
HXLINE(  89)		::Array< ::Dynamic> vertices = ::Array_obj< ::Dynamic>::__new();
HXLINE(  91)		{
HXLINE(  91)			int _g1 = (int)0;
HXDLIN(  91)			int _g = sides;
HXDLIN(  91)			while((_g1 < _g)){
HXLINE(  91)				_g1 = (_g1 + (int)1);
HXDLIN(  91)				int i = (_g1 - (int)1);
HXLINE(  92)				angle = ((i * rotation) + ((::Math_obj::PI - rotation) * ((Float)0.5)));
HXLINE(  93)				vector =  ::phoenix::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  94)				{
HXLINE(  94)					Float _x = (::Math_obj::cos(angle) * radius);
HXDLIN(  94)					vector->x = _x;
HXDLIN(  94)					if (!(vector->_construct)) {
HXLINE(  94)						bool _hx_tmp;
HXDLIN(  94)						if (hx::IsNotNull( vector->listen_x )) {
HXLINE(  94)							_hx_tmp = !(vector->ignore_listeners);
            						}
            						else {
HXLINE(  94)							_hx_tmp = false;
            						}
HXDLIN(  94)						if (_hx_tmp) {
HXLINE(  94)							vector->listen_x(_x);
            						}
            					}
            				}
HXLINE(  95)				{
HXLINE(  95)					Float _y = (::Math_obj::sin(angle) * radius);
HXDLIN(  95)					vector->y = _y;
HXDLIN(  95)					if (!(vector->_construct)) {
HXLINE(  95)						bool _hx_tmp1;
HXDLIN(  95)						if (hx::IsNotNull( vector->listen_y )) {
HXLINE(  95)							_hx_tmp1 = !(vector->ignore_listeners);
            						}
            						else {
HXLINE(  95)							_hx_tmp1 = false;
            						}
HXDLIN(  95)						if (_hx_tmp1) {
HXLINE(  95)							vector->listen_y(_y);
            						}
            					}
            				}
HXLINE(  96)				vertices->push(vector);
            			}
            		}
HXLINE(  99)		return  ::luxe::collision::shapes::Polygon_obj::__alloc( HX_CTX ,x,y,vertices);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_obj,create,return )

 ::luxe::collision::shapes::Polygon Polygon_obj::rectangle(Float x,Float y,Float width,Float height,hx::Null< bool >  __o_centered){
bool centered = __o_centered.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_00f5e35fff726ed5_105_rectangle)
HXLINE( 107)		::Array< ::Dynamic> vertices = ::Array_obj< ::Dynamic>::__new();
HXLINE( 109)		if (centered) {
HXLINE( 111)			vertices->push( ::phoenix::Vector_obj::__alloc( HX_CTX ,((Float)-(width) / (Float)(int)2),((Float)-(height) / (Float)(int)2),null(),null()));
HXLINE( 112)			vertices->push( ::phoenix::Vector_obj::__alloc( HX_CTX ,((Float)width / (Float)(int)2),((Float)-(height) / (Float)(int)2),null(),null()));
HXLINE( 113)			vertices->push( ::phoenix::Vector_obj::__alloc( HX_CTX ,((Float)width / (Float)(int)2),((Float)height / (Float)(int)2),null(),null()));
HXLINE( 114)			vertices->push( ::phoenix::Vector_obj::__alloc( HX_CTX ,((Float)-(width) / (Float)(int)2),((Float)height / (Float)(int)2),null(),null()));
            		}
            		else {
HXLINE( 118)			vertices->push( ::phoenix::Vector_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()));
HXLINE( 119)			vertices->push( ::phoenix::Vector_obj::__alloc( HX_CTX ,width,(int)0,null(),null()));
HXLINE( 120)			vertices->push( ::phoenix::Vector_obj::__alloc( HX_CTX ,width,height,null(),null()));
HXLINE( 121)			vertices->push( ::phoenix::Vector_obj::__alloc( HX_CTX ,(int)0,height,null(),null()));
            		}
HXLINE( 125)		return  ::luxe::collision::shapes::Polygon_obj::__alloc( HX_CTX ,x,y,vertices);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,rectangle,return )

 ::luxe::collision::shapes::Polygon Polygon_obj::square(Float x,Float y,Float width,hx::Null< bool >  __o_centered){
bool centered = __o_centered.Default(true);
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_133_square)
HXDLIN( 133)		return ::luxe::collision::shapes::Polygon_obj::rectangle(x,y,width,width,centered);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_obj,square,return )

 ::luxe::collision::shapes::Polygon Polygon_obj::triangle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_00f5e35fff726ed5_141_triangle)
HXDLIN( 141)		return ::luxe::collision::shapes::Polygon_obj::create(x,y,(int)3,radius);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,triangle,return )


hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Float x,Float y,::Array< ::Dynamic> vertices) {
	hx::ObjectPtr< Polygon_obj > __this = new Polygon_obj();
	__this->__construct(x,y,vertices);
	return __this;
}

hx::ObjectPtr< Polygon_obj > Polygon_obj::__alloc(hx::Ctx *_hx_ctx,Float x,Float y,::Array< ::Dynamic> vertices) {
	Polygon_obj *__this = (Polygon_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Polygon_obj), true, "luxe.collision.shapes.Polygon"));
	*(void **)__this = Polygon_obj::_hx_vtable;
	__this->__construct(x,y,vertices);
	return __this;
}

Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(_transformedVertices,"_transformedVertices");
	HX_MARK_MEMBER_NAME(_vertices,"_vertices");
	 ::luxe::collision::shapes::Shape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_transformedVertices,"_transformedVertices");
	HX_VISIT_MEMBER_NAME(_vertices,"_vertices");
	 ::luxe::collision::shapes::Shape_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Polygon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return hx::Val( test_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"testRay") ) { return hx::Val( testRay_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_vertices() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_vertices") ) { return hx::Val( _vertices ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testCircle") ) { return hx::Val( testCircle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testPolygon") ) { return hx::Val( testPolygon_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { return hx::Val( get_vertices_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"transformedVertices") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_transformedVertices() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedVertices") ) { return hx::Val( _transformedVertices ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_transformedVertices") ) { return hx::Val( get_transformedVertices_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Polygon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"square") ) { outValue = square_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triangle") ) { outValue = triangle_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rectangle") ) { outValue = rectangle_dyn(); return true; }
	}
	return false;
}

hx::Val Polygon_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_vertices") ) { _vertices=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedVertices") ) { _transformedVertices=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("transformedVertices","\xe4","\x77","\x78","\x19"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("_transformedVertices","\xe5","\x8e","\xd1","\x18"));
	outFields->push(HX_HCSTRING("_vertices","\x58","\xb7","\xab","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Polygon_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_transformedVertices),HX_HCSTRING("_transformedVertices","\xe5","\x8e","\xd1","\x18")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_vertices),HX_HCSTRING("_vertices","\x58","\xb7","\xab","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Polygon_obj_sStaticStorageInfo = 0;
#endif

static ::String Polygon_obj_sMemberFields[] = {
	HX_HCSTRING("_transformedVertices","\xe5","\x8e","\xd1","\x18"),
	HX_HCSTRING("_vertices","\x58","\xb7","\xab","\xb1"),
	HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"),
	HX_HCSTRING("testCircle","\x02","\xb8","\x01","\x6f"),
	HX_HCSTRING("testPolygon","\x48","\xf0","\x59","\xcf"),
	HX_HCSTRING("testRay","\xb8","\x44","\xc5","\xbd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_transformedVertices","\x7b","\x1e","\xce","\x21"),
	HX_HCSTRING("get_vertices","\x02","\x74","\x2f","\x1f"),
	::String(null()) };

static void Polygon_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Polygon_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#endif

hx::Class Polygon_obj::__mClass;

static ::String Polygon_obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),
	HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),
	HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),
	::String(null())
};

void Polygon_obj::__register()
{
	hx::Object *dummy = new Polygon_obj;
	Polygon_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.shapes.Polygon","\x52","\xd0","\x33","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygon_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Polygon_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Polygon_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Polygon_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Polygon_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Polygon_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polygon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polygon_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace collision
} // end namespace shapes
