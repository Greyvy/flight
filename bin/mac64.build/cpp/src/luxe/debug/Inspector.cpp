// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_772f1eb90284c670_25_new,"luxe.debug.Inspector","new",0x11b57a36,"luxe.debug.Inspector.new","luxe/debug/Inspector.hx",25,0x41b2cfbc)
HX_LOCAL_STACK_FRAME(_hx_pos_772f1eb90284c670_43_refresh,"luxe.debug.Inspector","refresh",0xb2cb26b1,"luxe.debug.Inspector.refresh","luxe/debug/Inspector.hx",43,0x41b2cfbc)
HX_LOCAL_STACK_FRAME(_hx_pos_772f1eb90284c670_55_show,"luxe.debug.Inspector","show",0x7065c667,"luxe.debug.Inspector.show","luxe/debug/Inspector.hx",55,0x41b2cfbc)
HX_LOCAL_STACK_FRAME(_hx_pos_772f1eb90284c670_62_hide,"luxe.debug.Inspector","hide",0x6921262c,"luxe.debug.Inspector.hide","luxe/debug/Inspector.hx",62,0x41b2cfbc)
HX_LOCAL_STACK_FRAME(_hx_pos_772f1eb90284c670_68_set_size,"luxe.debug.Inspector","set_size",0xa9c4a428,"luxe.debug.Inspector.set_size","luxe/debug/Inspector.hx",68,0x41b2cfbc)
HX_LOCAL_STACK_FRAME(_hx_pos_772f1eb90284c670_83_set_pos,"luxe.debug.Inspector","set_pos",0xdf76040d,"luxe.debug.Inspector.set_pos","luxe/debug/Inspector.hx",83,0x41b2cfbc)
HX_LOCAL_STACK_FRAME(_hx_pos_772f1eb90284c670_102_create_window,"luxe.debug.Inspector","create_window",0x5f51e769,"luxe.debug.Inspector.create_window","luxe/debug/Inspector.hx",102,0x41b2cfbc)
namespace luxe{
namespace debug{

void Inspector_obj::__construct( ::Dynamic _options){
            	HX_GC_STACKFRAME(&_hx_pos_772f1eb90284c670_25_new)
HXLINE(  27)		int _hx_tmp = ::Std_obj::_hx_int((::Luxe_obj::core->screen->get_w() * ((Float)0.2)));
HXDLIN(  27)		this->set_size( ::phoenix::Vector_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int((::Luxe_obj::core->screen->get_h() * ((Float)0.6))),null(),null()));
HXLINE(  28)		Float _hx_tmp1 = ((Float)::Luxe_obj::core->screen->get_w() / (Float)(int)2);
HXDLIN(  28)		Float _hx_tmp2 = (_hx_tmp1 - ((Float)this->size->x / (Float)(int)2));
HXDLIN(  28)		Float _hx_tmp3 = ((Float)::Luxe_obj::core->screen->get_h() / (Float)(int)2);
HXDLIN(  28)		this->set_pos( ::phoenix::Vector_obj::__alloc( HX_CTX ,_hx_tmp2,(_hx_tmp3 - ((Float)this->size->y / (Float)(int)2)),null(),null()));
HXLINE(  31)		this->batcher = ::Luxe_obj::renderer->batcher;
HXLINE(  33)		if (hx::IsNotNull( _options )) {
HXLINE(  35)			if (hx::IsNotNull( ( ( ::phoenix::Batcher)(_options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) ) )) {
HXLINE(  35)				this->batcher = ( ( ::phoenix::Batcher)(_options->__Field(HX_("batcher",a7,22,10,c0),hx::paccDynamic)) );
            			}
HXLINE(  36)			if (hx::IsNotNull( ( ( ::phoenix::Vector)(_options->__Field(HX_("size",c1,a0,53,4c),hx::paccDynamic)) ) )) {
HXLINE(  36)				this->set_size(( ( ::phoenix::Vector)(_options->__Field(HX_("size",c1,a0,53,4c),hx::paccDynamic)) ));
            			}
HXLINE(  37)			if (hx::IsNotNull( ( ( ::phoenix::Vector)(_options->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) )) {
HXLINE(  37)				this->set_pos(( ( ::phoenix::Vector)(_options->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ));
            			}
            		}
            	}

Dynamic Inspector_obj::__CreateEmpty() { return new Inspector_obj; }

void *Inspector_obj::_hx_vtable = 0;

Dynamic Inspector_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Inspector_obj > _hx_result = new Inspector_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Inspector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2628db9a;
}

void Inspector_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_772f1eb90284c670_43_refresh)
HXLINE(  45)		if (hx::IsNull( this->window )) {
HXLINE(  46)			this->create_window();
            		}
HXLINE(  49)		if (hx::IsNotNull( this->onrefresh )) {
HXLINE(  50)			this->onrefresh();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,refresh,(void))

void Inspector_obj::show(){
            	HX_STACKFRAME(&_hx_pos_772f1eb90284c670_55_show)
HXLINE(  56)		this->refresh();
HXLINE(  57)		this->window->set_visible(true);
HXLINE(  58)		this->title->set_visible(true);
HXLINE(  59)		this->version->set_visible(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,show,(void))

void Inspector_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_772f1eb90284c670_62_hide)
HXLINE(  63)		this->window->set_visible(false);
HXLINE(  64)		this->title->set_visible(false);
HXLINE(  65)		this->version->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,hide,(void))

 ::phoenix::Vector Inspector_obj::set_size( ::phoenix::Vector _size){
            	HX_GC_STACKFRAME(&_hx_pos_772f1eb90284c670_68_set_size)
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		if (hx::IsNotNull( _size )) {
HXLINE(  70)			_hx_tmp = hx::IsNotNull( this->window );
            		}
            		else {
HXLINE(  70)			_hx_tmp = false;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			this->window->set_size(_size);
HXLINE(  72)			this->window->geometry->set_dirty(true);
            		}
HXLINE(  75)		if (hx::IsNotNull( this->version )) {
HXLINE(  76)			 ::luxe::Text _hx_tmp1 = this->version;
HXDLIN(  76)			Float _hx_tmp2 = this->pos->x;
HXDLIN(  76)			Float _hx_tmp3 = (_hx_tmp2 + (_size->x - (int)14));
HXDLIN(  76)			_hx_tmp1->set_pos( ::phoenix::Vector_obj::__alloc( HX_CTX ,_hx_tmp3,(this->pos->y + (int)6),null(),null()));
            		}
HXLINE(  79)		return (this->size = _size);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Inspector_obj,set_size,return )

 ::phoenix::Vector Inspector_obj::set_pos( ::phoenix::Vector _pos){
            	HX_GC_STACKFRAME(&_hx_pos_772f1eb90284c670_83_set_pos)
HXLINE(  85)		bool _hx_tmp;
HXDLIN(  85)		if (hx::IsNotNull( _pos )) {
HXLINE(  85)			_hx_tmp = hx::IsNotNull( this->window );
            		}
            		else {
HXLINE(  85)			_hx_tmp = false;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  86)			this->window->set_pos(_pos);
HXLINE(  87)			this->window->geometry->set_dirty(true);
            		}
HXLINE(  90)		if (hx::IsNotNull( this->title )) {
HXLINE(  91)			 ::luxe::Text _hx_tmp1 = this->title;
HXDLIN(  91)			Float _hx_tmp2 = (_pos->x + (int)14);
HXDLIN(  91)			_hx_tmp1->set_pos( ::phoenix::Vector_obj::__alloc( HX_CTX ,_hx_tmp2,(_pos->y + (int)6),null(),null()));
            		}
HXLINE(  94)		if (hx::IsNotNull( this->version )) {
HXLINE(  95)			 ::luxe::Text _hx_tmp3 = this->version;
HXDLIN(  95)			Float _pos1 = _pos->x;
HXDLIN(  95)			Float _hx_tmp4 = (_pos1 + (this->size->x - (int)14));
HXDLIN(  95)			_hx_tmp3->set_pos( ::phoenix::Vector_obj::__alloc( HX_CTX ,_hx_tmp4,(_pos->y + (int)6),null(),null()));
            		}
HXLINE(  98)		return (this->pos = _pos);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Inspector_obj,set_pos,return )

void Inspector_obj::create_window(){
            	HX_GC_STACKFRAME(&_hx_pos_772f1eb90284c670_102_create_window)
HXLINE( 106)		 ::phoenix::Batcher _hx_tmp = this->batcher;
HXLINE( 110)		 ::phoenix::Color _hx_tmp1 =  ::phoenix::Color_obj::__alloc( HX_CTX ,null(),null(),null(),null())->rgb((int)1447449);
HXLINE( 104)		this->window =  ::luxe::Sprite_obj::__alloc( HX_CTX , ::Dynamic(hx::Anon_obj::Create(9)
            			->setFixed(0,HX_("centered",74,5d,50,8f),false)
            			->setFixed(1,HX_("visible",72,78,24,a3),false)
            			->setFixed(2,HX_("batcher",a7,22,10,c0),_hx_tmp)
            			->setFixed(3,HX_("depth",03,f1,29,d7),((Float)999.1))
            			->setFixed(4,HX_("pos",94,5d,55,00),this->pos)
            			->setFixed(5,HX_("no_scene",8e,a7,34,10),true)
            			->setFixed(6,HX_("name",4b,72,ff,48),HX_("debug.window",ab,d8,11,5a))
            			->setFixed(7,HX_("color",63,71,5c,4a),_hx_tmp1)
            			->setFixed(8,HX_("size",c1,a0,53,4c),this->size)));
HXLINE( 118)		 ::phoenix::Batcher _hx_tmp2 = this->batcher;
HXLINE( 122)		 ::phoenix::Color _hx_tmp3 =  ::phoenix::Color_obj::__alloc( HX_CTX ,null(),null(),null(),null())->rgb((int)16121979);
HXLINE( 123)		Float _hx_tmp4 = (this->pos->x + (int)14);
HXLINE( 116)		this->title =  ::luxe::Text_obj::__alloc( HX_CTX , ::Dynamic(hx::Anon_obj::Create(10)
            			->setFixed(0,HX_("visible",72,78,24,a3),false)
            			->setFixed(1,HX_("batcher",a7,22,10,c0),_hx_tmp2)
            			->setFixed(2,HX_("depth",03,f1,29,d7),((Float)999.2))
            			->setFixed(3,HX_("pos",94,5d,55,00), ::phoenix::Vector_obj::__alloc( HX_CTX ,_hx_tmp4,(this->pos->y + (int)6),null(),null()))
            			->setFixed(4,HX_("no_scene",8e,a7,34,10),true)
            			->setFixed(5,HX_("align",c5,56,91,21),(int)0)
            			->setFixed(6,HX_("name",4b,72,ff,48),HX_("debug.title",3d,01,84,48))
            			->setFixed(7,HX_("color",63,71,5c,4a),_hx_tmp3)
            			->setFixed(8,HX_("point_size",50,66,f5,4b),(int)15)
            			->setFixed(9,HX_("text",ad,cc,f9,4c),HX_("Inspector",d7,d9,e1,99))));
HXLINE( 132)		 ::phoenix::Batcher _hx_tmp5 = this->batcher;
HXLINE( 136)		 ::phoenix::Color _hx_tmp6 =  ::phoenix::Color_obj::__alloc( HX_CTX ,null(),null(),null(),null())->rgb((int)5526617);
HXLINE( 137)		Float _hx_tmp7 = this->pos->x;
HXDLIN( 137)		Float _hx_tmp8 = (_hx_tmp7 + (this->size->x - (int)14));
HXDLIN( 137)		 ::phoenix::Vector _hx_tmp9 =  ::phoenix::Vector_obj::__alloc( HX_CTX ,_hx_tmp8,(this->pos->y + (int)6),null(),null());
HXLINE( 139)		 ::luxe::Engine _this = ::Luxe_obj::core;
HXDLIN( 139)		::String _hx_tmp10 = ((HX_("",00,00,00,00) + _this->build) + HX_(" / debug:",78,a2,67,75));
HXDLIN( 139)		::String _hx_tmp11 = ((_hx_tmp10 + ::Std_obj::string(_this->app->debug)) + HX_(" / os:",05,42,bc,f0));
HXLINE( 130)		this->version =  ::luxe::Text_obj::__alloc( HX_CTX , ::Dynamic(hx::Anon_obj::Create(10)
            			->setFixed(0,HX_("visible",72,78,24,a3),false)
            			->setFixed(1,HX_("batcher",a7,22,10,c0),_hx_tmp5)
            			->setFixed(2,HX_("depth",03,f1,29,d7),((Float)999.2))
            			->setFixed(3,HX_("pos",94,5d,55,00),_hx_tmp9)
            			->setFixed(4,HX_("no_scene",8e,a7,34,10),true)
            			->setFixed(5,HX_("align",c5,56,91,21),(int)1)
            			->setFixed(6,HX_("name",4b,72,ff,48),HX_("debug.version",fd,c5,08,0a))
            			->setFixed(7,HX_("color",63,71,5c,4a),_hx_tmp6)
            			->setFixed(8,HX_("point_size",50,66,f5,4b),(int)13)
            			->setFixed(9,HX_("text",ad,cc,f9,4c),(HX_("",00,00,00,00) + (((_hx_tmp11 + _this->app->os) + HX_(" / platform:",d6,0a,95,7c)) + _this->app->platform)))));
HXLINE( 144)		this->window->set_locked(true);
HXLINE( 145)		this->window->geometry->id = HX_("debug.Inspector",fc,fb,99,c1);
HXLINE( 146)		this->title->geometry->id = HX_("debug.title.text",7e,dd,85,e1);
HXLINE( 147)		this->version->geometry->id = HX_("debug.version.text",be,e0,bf,d8);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,create_window,(void))


hx::ObjectPtr< Inspector_obj > Inspector_obj::__new( ::Dynamic _options) {
	hx::ObjectPtr< Inspector_obj > __this = new Inspector_obj();
	__this->__construct(_options);
	return __this;
}

hx::ObjectPtr< Inspector_obj > Inspector_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic _options) {
	Inspector_obj *__this = (Inspector_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Inspector_obj), true, "luxe.debug.Inspector"));
	*(void **)__this = Inspector_obj::_hx_vtable;
	__this->__construct(_options);
	return __this;
}

Inspector_obj::Inspector_obj()
{
}

void Inspector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Inspector);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(onrefresh,"onrefresh");
	HX_MARK_END_CLASS();
}

void Inspector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(onrefresh,"onrefresh");
}

hx::Val Inspector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"show") ) { return hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hx::Val( hide_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return hx::Val( title ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return hx::Val( window ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"batcher") ) { return hx::Val( batcher ); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return hx::Val( refresh_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return hx::Val( set_pos_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_size") ) { return hx::Val( set_size_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onrefresh") ) { return hx::Val( onrefresh ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"create_window") ) { return hx::Val( create_window_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Inspector_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_pos(inValue.Cast<  ::phoenix::Vector >()) );pos=inValue.Cast<  ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_size(inValue.Cast<  ::phoenix::Vector >()) );size=inValue.Cast<  ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast<  ::luxe::Text >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::luxe::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast<  ::luxe::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast<  ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onrefresh") ) { onrefresh=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Inspector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Inspector_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Inspector_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Inspector_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Inspector_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Inspector_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Inspector_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Inspector_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Inspector_obj,onrefresh),HX_HCSTRING("onrefresh","\x9c","\x6a","\x7a","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Inspector_obj_sStaticStorageInfo = 0;
#endif

static ::String Inspector_obj_sMemberFields[] = {
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("onrefresh","\x9c","\x6a","\x7a","\xf7"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("create_window","\x13","\x56","\xf5","\xdb"),
	::String(null()) };

static void Inspector_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Inspector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Inspector_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Inspector_obj::__mClass,"__mClass");
};

#endif

hx::Class Inspector_obj::__mClass;

void Inspector_obj::__register()
{
	hx::Object *dummy = new Inspector_obj;
	Inspector_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.Inspector","\x44","\xe7","\xba","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Inspector_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Inspector_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Inspector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Inspector_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Inspector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Inspector_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace debug