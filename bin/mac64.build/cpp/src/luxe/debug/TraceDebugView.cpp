// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_TraceDebugView
#include <luxe/debug/TraceDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_be40ac00a5f72361_5_new,"luxe.debug.TraceDebugView","new",0x1ecd5698,"luxe.debug.TraceDebugView.new","luxe/debug/TraceDebugView.hx",5,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_29_on_trace,"luxe.debug.TraceDebugView","on_trace",0xbe5c46ed,"luxe.debug.TraceDebugView.on_trace","luxe/debug/TraceDebugView.hx",29,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_33_create,"luxe.debug.TraceDebugView","create",0xa6d193c4,"luxe.debug.TraceDebugView.create","luxe/debug/TraceDebugView.hx",33,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_59_onwindowsized,"luxe.debug.TraceDebugView","onwindowsized",0x45ba300c,"luxe.debug.TraceDebugView.onwindowsized","luxe/debug/TraceDebugView.hx",59,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_71_add_line,"luxe.debug.TraceDebugView","add_line",0xe230d8da,"luxe.debug.TraceDebugView.add_line","luxe/debug/TraceDebugView.hx",71,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_90_refresh_lines,"luxe.debug.TraceDebugView","refresh_lines",0x2713d193,"luxe.debug.TraceDebugView.refresh_lines","luxe/debug/TraceDebugView.hx",90,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_126_refresh,"luxe.debug.TraceDebugView","refresh",0x2c45dc13,"luxe.debug.TraceDebugView.refresh","luxe/debug/TraceDebugView.hx",126,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_130_process,"luxe.debug.TraceDebugView","process",0x306fa4a7,"luxe.debug.TraceDebugView.process","luxe/debug/TraceDebugView.hx",130,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_134_show,"luxe.debug.TraceDebugView","show",0xd82ebfc5,"luxe.debug.TraceDebugView.show","luxe/debug/TraceDebugView.hx",134,0x3d0b52d6)
HX_LOCAL_STACK_FRAME(_hx_pos_be40ac00a5f72361_140_hide,"luxe.debug.TraceDebugView","hide",0xd0ea1f8a,"luxe.debug.TraceDebugView.hide","luxe/debug/TraceDebugView.hx",140,0x3d0b52d6)
namespace luxe{
namespace debug{

void TraceDebugView_obj::__construct( ::luxe::Debug _debug){
            	HX_STACKFRAME(&_hx_pos_be40ac00a5f72361_5_new)
HXLINE(  89)		this->_last_logged_length = (int)0;
HXLINE(  10)		this->max_lines = (int)35;
HXLINE(  14)		super::__construct(_debug);
HXLINE(  16)		this->set_name(HX_("Log",64,0c,3a,00));
HXLINE(  18)		::luxe::Debug_obj::trace_callbacks->push(this->on_trace_dyn());
HXLINE(  20)		this->logged = ::Array_obj< ::String >::__new(0);
HXLINE(  22)		 ::luxe::Engine _this = this->debug->app;
HXDLIN(  22)		::String _hx_tmp = ((HX_("",00,00,00,00) + _this->build) + HX_(" / debug:",78,a2,67,75));
HXDLIN(  22)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(_this->app->debug)) + HX_(" / os:",05,42,bc,f0));
HXDLIN(  22)		this->add_line((HX_("luxe version ",b2,0b,3b,f4) + (((_hx_tmp1 + _this->app->os) + HX_(" / platform:",d6,0a,95,7c)) + _this->app->platform)));
            	}

Dynamic TraceDebugView_obj::__CreateEmpty() { return new TraceDebugView_obj; }

void *TraceDebugView_obj::_hx_vtable = 0;

Dynamic TraceDebugView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TraceDebugView_obj > _hx_result = new TraceDebugView_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TraceDebugView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0bbca018) {
		if (inClassId<=(int)0x099ca90a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x099ca90a;
		} else {
			return inClassId==(int)0x0bbca018;
		}
	} else {
		return inClassId==(int)0x463efe90 || inClassId==(int)0x5fb4b7fb;
	}
}

void TraceDebugView_obj::on_trace( ::Dynamic v, ::Dynamic inf){
            	HX_STACKFRAME(&_hx_pos_be40ac00a5f72361_29_on_trace)
HXDLIN(  29)		::String _hx_tmp = (((( (::String)(inf->__Field(HX_("fileName",e7,5a,43,62),hx::paccDynamic)) ) + HX_(":",3a,00,00,00)) + ( (int)(inf->__Field(HX_("lineNumber",dd,81,22,76),hx::paccDynamic)) )) + HX_(" ",20,00,00,00));
HXDLIN(  29)		this->add_line((_hx_tmp + ::Std_obj::string(v)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(TraceDebugView_obj,on_trace,(void))

void TraceDebugView_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_be40ac00a5f72361_33_create)
HXLINE(  35)		Float text_bounds = (this->debug->padding->x + (int)20);
HXDLIN(  35)		Float text_bounds1 = (this->debug->padding->y + (int)40);
HXDLIN(  35)		int text_bounds2 = ::Luxe_obj::core->screen->get_w();
HXDLIN(  35)		Float text_bounds3 = ((text_bounds2 - (this->debug->padding->x * (int)2)) - (int)20);
HXDLIN(  35)		int text_bounds4 = ::Luxe_obj::core->screen->get_h();
HXDLIN(  35)		 ::phoenix::Rectangle text_bounds5 =  ::phoenix::Rectangle_obj::__alloc( HX_CTX ,text_bounds,text_bounds1,text_bounds3,((text_bounds4 - (this->debug->padding->y * (int)2)) - (int)40));
HXLINE(  41)		 ::phoenix::Color _hx_tmp =  ::phoenix::Color_obj::__alloc( HX_CTX ,null(),null(),null(),null())->rgb((int)8947848);
HXLINE(  37)		this->lines =  ::luxe::Text_obj::__alloc( HX_CTX , ::Dynamic(hx::Anon_obj::Create(12)
            			->setFixed(0,HX_("visible",72,78,24,a3),false)
            			->setFixed(1,HX_("batcher",a7,22,10,c0),this->debug->batcher)
            			->setFixed(2,HX_("depth",03,f1,29,d7),((Float)999.3))
            			->setFixed(3,HX_("bounds_wrap",14,47,ee,ec),true)
            			->setFixed(4,HX_("no_scene",8e,a7,34,10),true)
            			->setFixed(5,HX_("font",cf,5d,c0,43),::Luxe_obj::renderer->font)
            			->setFixed(6,HX_("name",4b,72,ff,48),HX_("debug.log.text",52,72,2d,08))
            			->setFixed(7,HX_("color",63,71,5c,4a),_hx_tmp)
            			->setFixed(8,HX_("point_size",50,66,f5,4b),(int)12)
            			->setFixed(9,HX_("text",ad,cc,f9,4c),HX_("",00,00,00,00))
            			->setFixed(10,HX_("align_vertical",70,dc,8d,53),(int)4)
            			->setFixed(11,HX_("bounds",75,86,1d,66),text_bounds5)));
HXLINE(  52)		if (hx::IsNotNull( this->lines->geometry )) {
HXLINE(  53)			this->lines->geometry->set_clip_rect(text_bounds5);
HXLINE(  54)			this->lines->geometry->set_locked(true);
HXLINE(  55)			this->lines->geometry->id = HX_("debug.log.text.geometry",4e,94,78,85);
            		}
            	}


void TraceDebugView_obj::onwindowsized( ::snow::types::WindowEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_be40ac00a5f72361_59_onwindowsized)
HXLINE(  60)		 ::luxe::Debug debug = ::Luxe_obj::debug;
HXLINE(  61)		Float text_bounds = (debug->padding->x + (int)20);
HXDLIN(  61)		Float text_bounds1 = (debug->padding->y + (int)40);
HXDLIN(  61)		int text_bounds2 = ::Luxe_obj::core->screen->get_w();
HXDLIN(  61)		Float text_bounds3 = ((text_bounds2 - (debug->padding->x * (int)2)) - (int)20);
HXDLIN(  61)		int text_bounds4 = ::Luxe_obj::core->screen->get_h();
HXDLIN(  61)		 ::phoenix::Rectangle text_bounds5 =  ::phoenix::Rectangle_obj::__alloc( HX_CTX ,text_bounds,text_bounds1,text_bounds3,((text_bounds4 - (debug->padding->y * (int)2)) - (int)40));
HXLINE(  62)		this->lines->set_bounds(text_bounds5);
HXLINE(  63)		this->lines->set_clip_rect(text_bounds5);
HXLINE(  65)		if (hx::IsNotNull( this->lines->geometry )) {
HXLINE(  66)			this->lines->geometry->set_locked(true);
HXLINE(  67)			this->lines->geometry->set_dirty(true);
            		}
            	}


void TraceDebugView_obj::add_line(::String _t){
            	HX_STACKFRAME(&_hx_pos_be40ac00a5f72361_71_add_line)
HXLINE(  73)		if (hx::IsNull( this->logged )) {
HXLINE(  74)			return;
            		}
HXLINE(  78)		this->logged->push(_t);
HXLINE(  81)		if (!(this->visible)) {
HXLINE(  82)			return;
            		}
HXLINE(  85)		this->refresh_lines();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TraceDebugView_obj,add_line,(void))

void TraceDebugView_obj::refresh_lines(){
            	HX_STACKFRAME(&_hx_pos_be40ac00a5f72361_90_refresh_lines)
HXLINE(  92)		if ((this->_last_logged_length == this->logged->length)) {
HXLINE(  93)			return;
            		}
HXLINE(  99)		::String _final = HX_("",00,00,00,00);
HXLINE( 101)		if ((this->logged->length <= this->max_lines)) {
HXLINE( 102)			int _g = (int)0;
HXDLIN( 102)			::Array< ::String > _g1 = this->logged;
HXDLIN( 102)			while((_g < _g1->length)){
HXLINE( 102)				::String _line = _g1->__get(_g);
HXDLIN( 102)				_g = (_g + (int)1);
HXLINE( 103)				_final = (_final + (_line + HX_("\n",0a,00,00,00)));
            			}
            		}
            		else {
HXLINE( 106)			int _start = (this->logged->length - this->max_lines);
HXLINE( 107)			int _total = this->logged->length;
HXLINE( 108)			{
HXLINE( 108)				int _g11 = _start;
HXDLIN( 108)				int _g2 = this->logged->length;
HXDLIN( 108)				while((_g11 < _g2)){
HXLINE( 108)					_g11 = (_g11 + (int)1);
HXDLIN( 108)					int i = (_g11 - (int)1);
HXLINE( 109)					::String _line1 = this->logged->__get(i);
HXLINE( 110)					_final = (_final + (_line1 + HX_("\n",0a,00,00,00)));
            				}
            			}
            		}
HXLINE( 114)		this->lines->set_text(_final);
HXLINE( 116)		if (hx::IsNotNull( this->lines->geometry )) {
HXLINE( 117)			this->lines->geometry->set_locked(true);
HXLINE( 118)			this->lines->geometry->set_dirty(true);
            		}
HXLINE( 121)		this->_last_logged_length = this->logged->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TraceDebugView_obj,refresh_lines,(void))

void TraceDebugView_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_be40ac00a5f72361_126_refresh)
            	}


void TraceDebugView_obj::process(){
            	HX_STACKFRAME(&_hx_pos_be40ac00a5f72361_130_process)
            	}


void TraceDebugView_obj::show(){
            	HX_STACKFRAME(&_hx_pos_be40ac00a5f72361_134_show)
HXLINE( 135)		this->super::show();
HXLINE( 136)		this->refresh_lines();
HXLINE( 137)		this->lines->set_visible(true);
            	}


void TraceDebugView_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_be40ac00a5f72361_140_hide)
HXLINE( 141)		this->super::hide();
HXLINE( 142)		this->lines->set_visible(false);
            	}



hx::ObjectPtr< TraceDebugView_obj > TraceDebugView_obj::__new( ::luxe::Debug _debug) {
	hx::ObjectPtr< TraceDebugView_obj > __this = new TraceDebugView_obj();
	__this->__construct(_debug);
	return __this;
}

hx::ObjectPtr< TraceDebugView_obj > TraceDebugView_obj::__alloc(hx::Ctx *_hx_ctx, ::luxe::Debug _debug) {
	TraceDebugView_obj *__this = (TraceDebugView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TraceDebugView_obj), true, "luxe.debug.TraceDebugView"));
	*(void **)__this = TraceDebugView_obj::_hx_vtable;
	__this->__construct(_debug);
	return __this;
}

TraceDebugView_obj::TraceDebugView_obj()
{
}

void TraceDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TraceDebugView);
	HX_MARK_MEMBER_NAME(logged,"logged");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(max_lines,"max_lines");
	HX_MARK_MEMBER_NAME(_last_logged_length,"_last_logged_length");
	 ::luxe::debug::DebugView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TraceDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(logged,"logged");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(max_lines,"max_lines");
	HX_VISIT_MEMBER_NAME(_last_logged_length,"_last_logged_length");
	 ::luxe::debug::DebugView_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TraceDebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hx::Val( hide_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return hx::Val( lines ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logged") ) { return hx::Val( logged ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return hx::Val( refresh_dyn() ); }
		if (HX_FIELD_EQ(inName,"process") ) { return hx::Val( process_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_trace") ) { return hx::Val( on_trace_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_line") ) { return hx::Val( add_line_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_lines") ) { return hx::Val( max_lines ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return hx::Val( onwindowsized_dyn() ); }
		if (HX_FIELD_EQ(inName,"refresh_lines") ) { return hx::Val( refresh_lines_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_last_logged_length") ) { return hx::Val( _last_logged_length ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TraceDebugView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast<  ::luxe::Text >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logged") ) { logged=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_lines") ) { max_lines=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_last_logged_length") ) { _last_logged_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TraceDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c"));
	outFields->push(HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"));
	outFields->push(HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b"));
	outFields->push(HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TraceDebugView_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TraceDebugView_obj,logged),HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(TraceDebugView_obj,lines),HX_HCSTRING("lines","\xff","\xdd","\x01","\x75")},
	{hx::fsInt,(int)offsetof(TraceDebugView_obj,max_lines),HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b")},
	{hx::fsInt,(int)offsetof(TraceDebugView_obj,_last_logged_length),HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TraceDebugView_obj_sStaticStorageInfo = 0;
#endif

static ::String TraceDebugView_obj_sMemberFields[] = {
	HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c"),
	HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"),
	HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b"),
	HX_HCSTRING("on_trace","\x25","\x58","\x1f","\xbd"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("add_line","\x12","\xea","\xf3","\xe0"),
	HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40"),
	HX_HCSTRING("refresh_lines","\x5b","\x55","\x8f","\x3a"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	::String(null()) };

static void TraceDebugView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TraceDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TraceDebugView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TraceDebugView_obj::__mClass,"__mClass");
};

#endif

hx::Class TraceDebugView_obj::__mClass;

void TraceDebugView_obj::__register()
{
	hx::Object *dummy = new TraceDebugView_obj;
	TraceDebugView_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.TraceDebugView","\xa6","\x6a","\x10","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TraceDebugView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TraceDebugView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TraceDebugView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TraceDebugView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TraceDebugView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TraceDebugView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace debug
