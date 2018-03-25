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
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerGraph
#include <luxe/debug/_ProfilerDebugView/ProfilerGraph.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_567d3ac0d86e4ef8_303_new,"luxe.debug._ProfilerDebugView.ProfilerGraph","new",0x3312bf0c,"luxe.debug._ProfilerDebugView.ProfilerGraph.new","luxe/debug/ProfilerDebugView.hx",303,0xef83e3c4)
HX_LOCAL_STACK_FRAME(_hx_pos_567d3ac0d86e4ef8_333_create,"luxe.debug._ProfilerDebugView.ProfilerGraph","create",0xd689ebd0,"luxe.debug._ProfilerDebugView.ProfilerGraph.create","luxe/debug/ProfilerDebugView.hx",333,0xef83e3c4)
HX_LOCAL_STACK_FRAME(_hx_pos_567d3ac0d86e4ef8_366_set_max,"luxe.debug._ProfilerDebugView.ProfilerGraph","set_max",0xea8318f3,"luxe.debug._ProfilerDebugView.ProfilerGraph.set_max","luxe/debug/ProfilerDebugView.hx",366,0xef83e3c4)
HX_LOCAL_STACK_FRAME(_hx_pos_567d3ac0d86e4ef8_393_set_ping,"luxe.debug._ProfilerDebugView.ProfilerGraph","set_ping",0x4a346943,"luxe.debug._ProfilerDebugView.ProfilerGraph.set_ping","luxe/debug/ProfilerDebugView.hx",393,0xef83e3c4)
HX_LOCAL_STACK_FRAME(_hx_pos_567d3ac0d86e4ef8_427_hide,"luxe.debug._ProfilerDebugView.ProfilerGraph","hide",0x79601c96,"luxe.debug._ProfilerDebugView.ProfilerGraph.hide","luxe/debug/ProfilerDebugView.hx",427,0xef83e3c4)
HX_LOCAL_STACK_FRAME(_hx_pos_567d3ac0d86e4ef8_433_show,"luxe.debug._ProfilerDebugView.ProfilerGraph","show",0x80a4bcd1,"luxe.debug._ProfilerDebugView.ProfilerGraph.show","luxe/debug/ProfilerDebugView.hx",433,0xef83e3c4)
HX_LOCAL_STACK_FRAME(_hx_pos_567d3ac0d86e4ef8_439_set_pos,"luxe.debug._ProfilerDebugView.ProfilerGraph","set_pos",0xea856be3,"luxe.debug._ProfilerDebugView.ProfilerGraph.set_pos","luxe/debug/ProfilerDebugView.hx",439,0xef83e3c4)
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{

void ProfilerGraph_obj::__construct(::String _name,hx::Null< bool >  __o__bg){
bool _bg = __o__bg.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_567d3ac0d86e4ef8_303_new)
HXLINE( 315)		this->visible = false;
HXLINE( 314)		this->history = (int)33;
HXLINE( 313)		this->height2 = ((Float)8);
HXLINE( 312)		this->height = ((Float)8);
HXLINE( 311)		this->width = ((Float)128);
HXLINE( 309)		this->bg = true;
HXLINE( 326)		this->bg = _bg;
HXLINE( 327)		this->name = _name;
HXLINE( 328)		this->color =  ::phoenix::Color_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 329)		Float n = ::Math_obj::pow((int)10,(int)2);
HXDLIN( 329)		this->set_max(((Float)::Std_obj::_hx_int((((Float)16.6666666666666679) * n)) / (Float)n));
            	}

Dynamic ProfilerGraph_obj::__CreateEmpty() { return new ProfilerGraph_obj; }

void *ProfilerGraph_obj::_hx_vtable = 0;

Dynamic ProfilerGraph_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProfilerGraph_obj > _hx_result = new ProfilerGraph_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ProfilerGraph_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72ed693c;
}

void ProfilerGraph_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_567d3ac0d86e4ef8_333_create)
HXLINE( 335)		this->segment = ((Float)this->width / (Float)this->history);
HXLINE( 336)		this->height2 = (this->height * (int)2);
HXLINE( 338)		if (this->bg) {
HXLINE( 339)			 ::luxe::Draw _hx_tmp = ::Luxe_obj::draw;
HXLINE( 340)			 ::phoenix::Color _hx_tmp1 =  ::phoenix::Color_obj::__alloc( HX_CTX ,null(),null(),null(),null())->rgb((int)1052688);
HXLINE( 342)			 ::phoenix::Batcher _hx_tmp2 = ::Luxe_obj::debug->batcher;
HXLINE( 339)			this->graphbg_geometry = _hx_tmp->box( ::Dynamic(hx::Anon_obj::Create(7)
            				->setFixed(0,HX_("batcher",a7,22,10,c0),_hx_tmp2)
            				->setFixed(1,HX_("depth",03,f1,29,d7),((Float)999.3))
            				->setFixed(2,HX_("h",68,00,00,00),this->height2)
            				->setFixed(3,HX_("w",77,00,00,00),(this->width - this->segment))
            				->setFixed(4,HX_("x",78,00,00,00),(int)0)
            				->setFixed(5,HX_("y",79,00,00,00),(int)0)
            				->setFixed(6,HX_("color",63,71,5c,4a),_hx_tmp1)));
            		}
HXLINE( 347)		this->graph_geometry =  ::phoenix::geometry::Geometry_obj::__alloc( HX_CTX , ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("batcher",a7,22,10,c0),::Luxe_obj::debug->batcher)
            			->setFixed(1,HX_("depth",03,f1,29,d7),((Float)999.33))
            			->setFixed(2,HX_("color",63,71,5c,4a),this->color)));
HXLINE( 353)		{
HXLINE( 353)			int _g1 = (int)0;
HXDLIN( 353)			int _g = this->history;
HXDLIN( 353)			while((_g1 < _g)){
HXLINE( 353)				_g1 = (_g1 + (int)1);
HXDLIN( 353)				int i = (_g1 - (int)1);
HXLINE( 354)				 ::phoenix::geometry::Vertex _b =  ::phoenix::geometry::Vertex_obj::__alloc( HX_CTX , ::phoenix::Vector_obj::__alloc( HX_CTX ,(this->segment * i),this->height2,null(),null()),this->color,null());
HXLINE( 355)				this->graph_geometry->add(_b);
            			}
            		}
HXLINE( 358)		this->graph_geometry->set_primitive_type((int)3);
HXLINE( 360)		this->hide();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerGraph_obj,create,(void))

Float ProfilerGraph_obj::set_max(Float _v){
            	HX_STACKFRAME(&_hx_pos_567d3ac0d86e4ef8_366_set_max)
HXLINE( 368)		Float oldmax = this->max;
HXLINE( 369)		this->max = _v;
HXLINE( 371)		if (hx::IsNotNull( this->graph_geometry )) {
HXLINE( 372)			Float ratio = ((Float)1.0);
HXLINE( 373)			if ((oldmax != (int)0)) {
HXLINE( 374)				ratio = ((Float)oldmax / (Float)_v);
            			}
HXLINE( 376)			{
HXLINE( 376)				int _g = (int)0;
HXDLIN( 376)				::Array< ::Dynamic> _g1 = this->graph_geometry->vertices;
HXDLIN( 376)				while((_g < _g1->length)){
HXLINE( 376)					 ::phoenix::geometry::Vertex v = _g1->__get(_g).StaticCast<  ::phoenix::geometry::Vertex >();
HXDLIN( 376)					_g = (_g + (int)1);
HXLINE( 377)					if (hx::IsNotNull( v )) {
HXLINE( 379)						Float vp = (((Float)1.0) - ((Float)v->pos->y / (Float)this->height2));
HXLINE( 381)						Float vv = (vp * oldmax);
HXLINE( 383)						vp = ((Float)vv / (Float)this->max);
HXLINE( 385)						{
HXLINE( 385)							 ::phoenix::Vector _this = v->pos;
HXDLIN( 385)							Float _y = this->height2;
HXDLIN( 385)							Float _y1 = (_y * (((Float)1.0) - vp));
HXDLIN( 385)							_this->y = _y1;
HXDLIN( 385)							if (!(_this->_construct)) {
HXLINE( 385)								bool _hx_tmp;
HXDLIN( 385)								if (hx::IsNotNull( _this->listen_y )) {
HXLINE( 385)									_hx_tmp = !(_this->ignore_listeners);
            								}
            								else {
HXLINE( 385)									_hx_tmp = false;
            								}
HXDLIN( 385)								if (_hx_tmp) {
HXLINE( 385)									_this->listen_y(_y1);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 390)		return this->max;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerGraph_obj,set_max,return )

Float ProfilerGraph_obj::set_ping(Float _v){
            	HX_STACKFRAME(&_hx_pos_567d3ac0d86e4ef8_393_set_ping)
HXLINE( 395)		Float n = ::Math_obj::pow((int)10,(int)4);
HXDLIN( 395)		Float _vv = ((Float)::Std_obj::_hx_int((_v * n)) / (Float)n);
HXLINE( 396)		Float _p = ((Float)_vv / (Float)this->max);
HXLINE( 399)		{
HXLINE( 399)			int _g1 = (int)0;
HXDLIN( 399)			int _g = this->history;
HXDLIN( 399)			while((_g1 < _g)){
HXLINE( 399)				_g1 = (_g1 + (int)1);
HXDLIN( 399)				int i = (_g1 - (int)1);
HXLINE( 401)				 ::phoenix::geometry::Vertex v = this->graph_geometry->vertices->__get(i).StaticCast<  ::phoenix::geometry::Vertex >();
HXLINE( 402)				if ((i < (this->history - (int)1))) {
HXLINE( 403)					::Array< ::Dynamic> v1 = this->graph_geometry->vertices;
HXDLIN( 403)					 ::phoenix::geometry::Vertex v11 = v1->__get((i + (int)1)).StaticCast<  ::phoenix::geometry::Vertex >();
HXLINE( 404)					if (hx::IsNotNull( v11 )) {
HXLINE( 405)						{
HXLINE( 405)							 ::phoenix::Vector _this = v->pos;
HXDLIN( 405)							Float _y = ::Math_obj::floor(v11->pos->y);
HXDLIN( 405)							_this->y = _y;
HXDLIN( 405)							if (!(_this->_construct)) {
HXLINE( 405)								bool _hx_tmp;
HXDLIN( 405)								if (hx::IsNotNull( _this->listen_y )) {
HXLINE( 405)									_hx_tmp = !(_this->ignore_listeners);
            								}
            								else {
HXLINE( 405)									_hx_tmp = false;
            								}
HXDLIN( 405)								if (_hx_tmp) {
HXLINE( 405)									_this->listen_y(_y);
            								}
            							}
            						}
HXLINE( 406)						v->color = v11->color;
            					}
            				}
            			}
            		}
HXLINE( 411)		if ((_p < ((Float)0.001))) {
HXLINE( 411)			_p = ((Float)0.001);
            		}
            		else {
HXLINE( 411)			if ((_p > (int)1)) {
HXLINE( 411)				_p = (int)1;
            			}
            			else {
HXLINE( 411)				_p = _p;
            			}
            		}
HXLINE( 413)		if ((_p > (int)1)) {
HXLINE( 414)			::Array< ::Dynamic> _hx_tmp1 = this->graph_geometry->vertices;
HXDLIN( 414)			_hx_tmp1->__get((this->history - (int)1)).StaticCast<  ::phoenix::geometry::Vertex >()->color = ::luxe::debug::ProfilerDebugView_obj::color_red;
            		}
            		else {
HXLINE( 415)			if ((_p < ((Float)0.2))) {
HXLINE( 416)				::Array< ::Dynamic> _hx_tmp2 = this->graph_geometry->vertices;
HXDLIN( 416)				_hx_tmp2->__get((this->history - (int)1)).StaticCast<  ::phoenix::geometry::Vertex >()->color = ::luxe::debug::ProfilerDebugView_obj::color_green;
            			}
            			else {
HXLINE( 418)				::Array< ::Dynamic> _hx_tmp3 = this->graph_geometry->vertices;
HXDLIN( 418)				_hx_tmp3->__get((this->history - (int)1)).StaticCast<  ::phoenix::geometry::Vertex >()->color = this->color;
            			}
            		}
HXLINE( 421)		{
HXLINE( 421)			::Array< ::Dynamic> _this1 = this->graph_geometry->vertices;
HXDLIN( 421)			 ::phoenix::Vector _this2 = _this1->__get((this->history - (int)1)).StaticCast<  ::phoenix::geometry::Vertex >()->pos;
HXDLIN( 421)			Float _y1 = this->height2;
HXDLIN( 421)			Float _y2 = ::Math_obj::floor((_y1 * (((Float)1.0) - _p)));
HXDLIN( 421)			_this2->y = _y2;
HXDLIN( 421)			if (!(_this2->_construct)) {
HXLINE( 421)				bool _hx_tmp4;
HXDLIN( 421)				if (hx::IsNotNull( _this2->listen_y )) {
HXLINE( 421)					_hx_tmp4 = !(_this2->ignore_listeners);
            				}
            				else {
HXLINE( 421)					_hx_tmp4 = false;
            				}
HXDLIN( 421)				if (_hx_tmp4) {
HXLINE( 421)					_this2->listen_y(_y2);
            				}
            			}
            		}
HXLINE( 423)		return (this->ping = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerGraph_obj,set_ping,return )

void ProfilerGraph_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_567d3ac0d86e4ef8_427_hide)
HXLINE( 428)		this->visible = false;
HXLINE( 429)		this->graph_geometry->set_visible(false);
HXLINE( 430)		if (hx::IsNotNull( this->graphbg_geometry )) {
HXLINE( 430)			this->graphbg_geometry->set_visible(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerGraph_obj,hide,(void))

void ProfilerGraph_obj::show(){
            	HX_STACKFRAME(&_hx_pos_567d3ac0d86e4ef8_433_show)
HXLINE( 434)		this->visible = true;
HXLINE( 435)		this->graph_geometry->set_visible(true);
HXLINE( 436)		if (hx::IsNotNull( this->graphbg_geometry )) {
HXLINE( 436)			this->graphbg_geometry->set_visible(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerGraph_obj,show,(void))

 ::phoenix::Vector ProfilerGraph_obj::set_pos( ::phoenix::Vector _p){
            	HX_STACKFRAME(&_hx_pos_567d3ac0d86e4ef8_439_set_pos)
HXLINE( 441)		if (hx::IsNotNull( this->graphbg_geometry )) {
HXLINE( 441)			 ::phoenix::Vector _this = this->graphbg_geometry->transform->local->pos;
HXDLIN( 441)			{
HXLINE( 441)				Float _x = _p->x;
HXDLIN( 441)				Float _y = _p->y;
HXDLIN( 441)				Float _z = _p->z;
HXDLIN( 441)				Float _w = _p->w;
HXDLIN( 441)				bool prev = _this->ignore_listeners;
HXDLIN( 441)				_this->ignore_listeners = true;
HXDLIN( 441)				{
HXLINE( 441)					_this->x = _x;
HXDLIN( 441)					if (!(_this->_construct)) {
HXLINE( 441)						bool _hx_tmp;
HXDLIN( 441)						if (hx::IsNotNull( _this->listen_x )) {
HXLINE( 441)							_hx_tmp = !(_this->ignore_listeners);
            						}
            						else {
HXLINE( 441)							_hx_tmp = false;
            						}
HXDLIN( 441)						if (_hx_tmp) {
HXLINE( 441)							_this->listen_x(_x);
            						}
            					}
            				}
HXDLIN( 441)				{
HXLINE( 441)					_this->y = _y;
HXDLIN( 441)					if (!(_this->_construct)) {
HXLINE( 441)						bool _hx_tmp1;
HXDLIN( 441)						if (hx::IsNotNull( _this->listen_y )) {
HXLINE( 441)							_hx_tmp1 = !(_this->ignore_listeners);
            						}
            						else {
HXLINE( 441)							_hx_tmp1 = false;
            						}
HXDLIN( 441)						if (_hx_tmp1) {
HXLINE( 441)							_this->listen_y(_y);
            						}
            					}
            				}
HXDLIN( 441)				{
HXLINE( 441)					_this->z = _z;
HXDLIN( 441)					if (!(_this->_construct)) {
HXLINE( 441)						bool _hx_tmp2;
HXDLIN( 441)						if (hx::IsNotNull( _this->listen_z )) {
HXLINE( 441)							_hx_tmp2 = !(_this->ignore_listeners);
            						}
            						else {
HXLINE( 441)							_hx_tmp2 = false;
            						}
HXDLIN( 441)						if (_hx_tmp2) {
HXLINE( 441)							_this->listen_z(_z);
            						}
            					}
            				}
HXDLIN( 441)				_this->w = _w;
HXDLIN( 441)				_this->ignore_listeners = prev;
HXDLIN( 441)				bool _hx_tmp3;
HXDLIN( 441)				if (hx::IsNotNull( _this->listen_x )) {
HXLINE( 441)					_hx_tmp3 = !(_this->ignore_listeners);
            				}
            				else {
HXLINE( 441)					_hx_tmp3 = false;
            				}
HXDLIN( 441)				if (_hx_tmp3) {
HXLINE( 441)					_this->listen_x(_this->x);
            				}
HXDLIN( 441)				bool _hx_tmp4;
HXDLIN( 441)				if (hx::IsNotNull( _this->listen_y )) {
HXLINE( 441)					_hx_tmp4 = !(_this->ignore_listeners);
            				}
            				else {
HXLINE( 441)					_hx_tmp4 = false;
            				}
HXDLIN( 441)				if (_hx_tmp4) {
HXLINE( 441)					_this->listen_y(_this->y);
            				}
HXDLIN( 441)				bool _hx_tmp5;
HXDLIN( 441)				if (hx::IsNotNull( _this->listen_z )) {
HXLINE( 441)					_hx_tmp5 = !(_this->ignore_listeners);
            				}
            				else {
HXLINE( 441)					_hx_tmp5 = false;
            				}
HXDLIN( 441)				if (_hx_tmp5) {
HXLINE( 441)					_this->listen_z(_this->z);
            				}
            			}
            		}
HXLINE( 442)		{
HXLINE( 442)			 ::phoenix::Vector _this1 = this->graph_geometry->transform->local->pos;
HXDLIN( 442)			{
HXLINE( 442)				Float _x1 = _p->x;
HXDLIN( 442)				Float _y1 = _p->y;
HXDLIN( 442)				Float _z1 = _p->z;
HXDLIN( 442)				Float _w1 = _p->w;
HXDLIN( 442)				bool prev1 = _this1->ignore_listeners;
HXDLIN( 442)				_this1->ignore_listeners = true;
HXDLIN( 442)				{
HXLINE( 442)					_this1->x = _x1;
HXDLIN( 442)					if (!(_this1->_construct)) {
HXLINE( 442)						bool _hx_tmp6;
HXDLIN( 442)						if (hx::IsNotNull( _this1->listen_x )) {
HXLINE( 442)							_hx_tmp6 = !(_this1->ignore_listeners);
            						}
            						else {
HXLINE( 442)							_hx_tmp6 = false;
            						}
HXDLIN( 442)						if (_hx_tmp6) {
HXLINE( 442)							_this1->listen_x(_x1);
            						}
            					}
            				}
HXDLIN( 442)				{
HXLINE( 442)					_this1->y = _y1;
HXDLIN( 442)					if (!(_this1->_construct)) {
HXLINE( 442)						bool _hx_tmp7;
HXDLIN( 442)						if (hx::IsNotNull( _this1->listen_y )) {
HXLINE( 442)							_hx_tmp7 = !(_this1->ignore_listeners);
            						}
            						else {
HXLINE( 442)							_hx_tmp7 = false;
            						}
HXDLIN( 442)						if (_hx_tmp7) {
HXLINE( 442)							_this1->listen_y(_y1);
            						}
            					}
            				}
HXDLIN( 442)				{
HXLINE( 442)					_this1->z = _z1;
HXDLIN( 442)					if (!(_this1->_construct)) {
HXLINE( 442)						bool _hx_tmp8;
HXDLIN( 442)						if (hx::IsNotNull( _this1->listen_z )) {
HXLINE( 442)							_hx_tmp8 = !(_this1->ignore_listeners);
            						}
            						else {
HXLINE( 442)							_hx_tmp8 = false;
            						}
HXDLIN( 442)						if (_hx_tmp8) {
HXLINE( 442)							_this1->listen_z(_z1);
            						}
            					}
            				}
HXDLIN( 442)				_this1->w = _w1;
HXDLIN( 442)				_this1->ignore_listeners = prev1;
HXDLIN( 442)				bool _hx_tmp9;
HXDLIN( 442)				if (hx::IsNotNull( _this1->listen_x )) {
HXLINE( 442)					_hx_tmp9 = !(_this1->ignore_listeners);
            				}
            				else {
HXLINE( 442)					_hx_tmp9 = false;
            				}
HXDLIN( 442)				if (_hx_tmp9) {
HXLINE( 442)					_this1->listen_x(_this1->x);
            				}
HXDLIN( 442)				bool _hx_tmp10;
HXDLIN( 442)				if (hx::IsNotNull( _this1->listen_y )) {
HXLINE( 442)					_hx_tmp10 = !(_this1->ignore_listeners);
            				}
            				else {
HXLINE( 442)					_hx_tmp10 = false;
            				}
HXDLIN( 442)				if (_hx_tmp10) {
HXLINE( 442)					_this1->listen_y(_this1->y);
            				}
HXDLIN( 442)				bool _hx_tmp11;
HXDLIN( 442)				if (hx::IsNotNull( _this1->listen_z )) {
HXLINE( 442)					_hx_tmp11 = !(_this1->ignore_listeners);
            				}
            				else {
HXLINE( 442)					_hx_tmp11 = false;
            				}
HXDLIN( 442)				if (_hx_tmp11) {
HXLINE( 442)					_this1->listen_z(_this1->z);
            				}
            			}
            		}
HXLINE( 444)		return (this->pos = _p);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerGraph_obj,set_pos,return )


hx::ObjectPtr< ProfilerGraph_obj > ProfilerGraph_obj::__new(::String _name,hx::Null< bool >  __o__bg) {
	hx::ObjectPtr< ProfilerGraph_obj > __this = new ProfilerGraph_obj();
	__this->__construct(_name,__o__bg);
	return __this;
}

hx::ObjectPtr< ProfilerGraph_obj > ProfilerGraph_obj::__alloc(hx::Ctx *_hx_ctx,::String _name,hx::Null< bool >  __o__bg) {
	ProfilerGraph_obj *__this = (ProfilerGraph_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ProfilerGraph_obj), true, "luxe.debug._ProfilerDebugView.ProfilerGraph"));
	*(void **)__this = ProfilerGraph_obj::_hx_vtable;
	__this->__construct(_name,__o__bg);
	return __this;
}

ProfilerGraph_obj::ProfilerGraph_obj()
{
}

void ProfilerGraph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProfilerGraph);
	HX_MARK_MEMBER_NAME(graphbg_geometry,"graphbg_geometry");
	HX_MARK_MEMBER_NAME(graph_geometry,"graph_geometry");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(height2,"height2");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(ping,"ping");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(segment,"segment");
	HX_MARK_END_CLASS();
}

void ProfilerGraph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphbg_geometry,"graphbg_geometry");
	HX_VISIT_MEMBER_NAME(graph_geometry,"graph_geometry");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(height2,"height2");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(ping,"ping");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(segment,"segment");
}

hx::Val ProfilerGraph_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return hx::Val( bg ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return hx::Val( max ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"ping") ) { return hx::Val( ping ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return hx::Val( show_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"height2") ) { return hx::Val( height2 ); }
		if (HX_FIELD_EQ(inName,"history") ) { return hx::Val( history ); }
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible ); }
		if (HX_FIELD_EQ(inName,"segment") ) { return hx::Val( segment ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return hx::Val( set_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return hx::Val( set_pos_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_ping") ) { return hx::Val( set_ping_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graph_geometry") ) { return hx::Val( graph_geometry ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphbg_geometry") ) { return hx::Val( graphbg_geometry ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ProfilerGraph_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< bool >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_max(inValue.Cast< Float >()) );max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_pos(inValue.Cast<  ::phoenix::Vector >()) );pos=inValue.Cast<  ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ping") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_ping(inValue.Cast< Float >()) );ping=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"height2") ) { height2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"segment") ) { segment=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graph_geometry") ) { graph_geometry=inValue.Cast<  ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphbg_geometry") ) { graphbg_geometry=inValue.Cast<  ::phoenix::geometry::QuadGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProfilerGraph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("graphbg_geometry","\x1e","\xfb","\x6f","\x47"));
	outFields->push(HX_HCSTRING("graph_geometry","\x03","\x91","\xcb","\xe6"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("height2","\x6b","\xe2","\x3a","\x00"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("ping","\x72","\xf2","\x57","\x4a"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ProfilerGraph_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(ProfilerGraph_obj,graphbg_geometry),HX_HCSTRING("graphbg_geometry","\x1e","\xfb","\x6f","\x47")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(ProfilerGraph_obj,graph_geometry),HX_HCSTRING("graph_geometry","\x03","\x91","\xcb","\xe6")},
	{hx::fsString,(int)offsetof(ProfilerGraph_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(int)offsetof(ProfilerGraph_obj,bg),HX_HCSTRING("bg","\xc5","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,height2),HX_HCSTRING("height2","\x6b","\xe2","\x3a","\x00")},
	{hx::fsInt,(int)offsetof(ProfilerGraph_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsBool,(int)offsetof(ProfilerGraph_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(ProfilerGraph_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,ping),HX_HCSTRING("ping","\x72","\xf2","\x57","\x4a")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(ProfilerGraph_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,segment),HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ProfilerGraph_obj_sStaticStorageInfo = 0;
#endif

static ::String ProfilerGraph_obj_sMemberFields[] = {
	HX_HCSTRING("graphbg_geometry","\x1e","\xfb","\x6f","\x47"),
	HX_HCSTRING("graph_geometry","\x03","\x91","\xcb","\xe6"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("height2","\x6b","\xe2","\x3a","\x00"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("ping","\x72","\xf2","\x57","\x4a"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("set_ping","\x6f","\x07","\x70","\x78"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	::String(null()) };

static void ProfilerGraph_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProfilerGraph_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProfilerGraph_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProfilerGraph_obj::__mClass,"__mClass");
};

#endif

hx::Class ProfilerGraph_obj::__mClass;

void ProfilerGraph_obj::__register()
{
	hx::Object *dummy = new ProfilerGraph_obj;
	ProfilerGraph_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug._ProfilerDebugView.ProfilerGraph","\x1a","\x89","\xf3","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProfilerGraph_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProfilerGraph_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProfilerGraph_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProfilerGraph_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProfilerGraph_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProfilerGraph_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace debug
} // end namespace _ProfilerDebugView
