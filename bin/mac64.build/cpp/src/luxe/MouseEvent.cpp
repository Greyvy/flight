// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3002ae1c7667da5a_890_new,"luxe.MouseEvent","new",0x65d584ff,"luxe.MouseEvent.new","luxe/Input.hx",890,0x19edc1cd)
HX_LOCAL_STACK_FRAME(_hx_pos_3002ae1c7667da5a_916_set_press,"luxe.MouseEvent","set_press",0xd71811c5,"luxe.MouseEvent.set_press","luxe/Input.hx",916,0x19edc1cd)
HX_LOCAL_STACK_FRAME(_hx_pos_3002ae1c7667da5a_932_set_move,"luxe.MouseEvent","set_move",0x4d09230f,"luxe.MouseEvent.set_move","luxe/Input.hx",932,0x19edc1cd)
HX_LOCAL_STACK_FRAME(_hx_pos_3002ae1c7667da5a_948_set_wheel,"luxe.MouseEvent","set_wheel",0xd849f2dd,"luxe.MouseEvent.set_wheel","luxe/Input.hx",948,0x19edc1cd)
namespace luxe{

void MouseEvent_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3002ae1c7667da5a_890_new)
HXLINE( 911)		this->y_rel = (int)0;
HXLINE( 909)		this->x_rel = (int)0;
HXLINE( 907)		this->y = (int)0;
HXLINE( 905)		this->x = (int)0;
HXLINE( 899)		this->window_id = (int)1;
HXLINE( 897)		this->timestamp = ((Float)0.0);
HXLINE( 893)		this->pos =  ::phoenix::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}

Dynamic MouseEvent_obj::__CreateEmpty() { return new MouseEvent_obj; }

void *MouseEvent_obj::_hx_vtable = 0;

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MouseEvent_obj > _hx_result = new MouseEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MouseEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x247ff8db;
}

void MouseEvent_obj::set_press(int _x,int _y,int _button, ::luxe::InteractState _state,Float _timestamp,int _window_id){
            	HX_STACKFRAME(&_hx_pos_3002ae1c7667da5a_916_set_press)
HXLINE( 918)		this->x = _x;
HXLINE( 919)		this->y = _y;
HXLINE( 920)		this->x_rel = (int)0;
HXLINE( 921)		this->y_rel = (int)0;
HXLINE( 922)		this->state = _state;
HXLINE( 923)		this->button = _button;
HXLINE( 924)		this->window_id = _window_id;
HXLINE( 925)		this->timestamp = _timestamp;
HXLINE( 927)		{
HXLINE( 927)			 ::phoenix::Vector _this = this->pos;
HXDLIN( 927)			bool prev = _this->ignore_listeners;
HXDLIN( 927)			_this->ignore_listeners = true;
HXDLIN( 927)			{
HXLINE( 927)				_this->x = _x;
HXDLIN( 927)				if (!(_this->_construct)) {
HXLINE( 927)					bool _hx_tmp;
HXDLIN( 927)					if (hx::IsNotNull( _this->listen_x )) {
HXLINE( 927)						_hx_tmp = !(_this->ignore_listeners);
            					}
            					else {
HXLINE( 927)						_hx_tmp = false;
            					}
HXDLIN( 927)					if (_hx_tmp) {
HXLINE( 927)						_this->listen_x(_x);
            					}
            				}
            			}
HXDLIN( 927)			{
HXLINE( 927)				_this->y = _y;
HXDLIN( 927)				if (!(_this->_construct)) {
HXLINE( 927)					bool _hx_tmp1;
HXDLIN( 927)					if (hx::IsNotNull( _this->listen_y )) {
HXLINE( 927)						_hx_tmp1 = !(_this->ignore_listeners);
            					}
            					else {
HXLINE( 927)						_hx_tmp1 = false;
            					}
HXDLIN( 927)					if (_hx_tmp1) {
HXLINE( 927)						_this->listen_y(_y);
            					}
            				}
            			}
HXDLIN( 927)			_this->ignore_listeners = prev;
HXDLIN( 927)			bool _hx_tmp2;
HXDLIN( 927)			if (hx::IsNotNull( _this->listen_x )) {
HXLINE( 927)				_hx_tmp2 = !(_this->ignore_listeners);
            			}
            			else {
HXLINE( 927)				_hx_tmp2 = false;
            			}
HXDLIN( 927)			if (_hx_tmp2) {
HXLINE( 927)				_this->listen_x(_this->x);
            			}
HXDLIN( 927)			bool _hx_tmp3;
HXDLIN( 927)			if (hx::IsNotNull( _this->listen_y )) {
HXLINE( 927)				_hx_tmp3 = !(_this->ignore_listeners);
            			}
            			else {
HXLINE( 927)				_hx_tmp3 = false;
            			}
HXDLIN( 927)			if (_hx_tmp3) {
HXLINE( 927)				_this->listen_y(_this->y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(MouseEvent_obj,set_press,(void))

void MouseEvent_obj::set_move(int _x,int _y,int _x_rel,int _y_rel,Float _timestamp,int _window_id){
            	HX_STACKFRAME(&_hx_pos_3002ae1c7667da5a_932_set_move)
HXLINE( 934)		this->x = _x;
HXLINE( 935)		this->y = _y;
HXLINE( 936)		this->x_rel = _x_rel;
HXLINE( 937)		this->y_rel = _y_rel;
HXLINE( 938)		this->state = ::luxe::InteractState_obj::move_dyn();
HXLINE( 939)		this->button = (int)0;
HXLINE( 940)		this->window_id = _window_id;
HXLINE( 941)		this->timestamp = _timestamp;
HXLINE( 943)		{
HXLINE( 943)			 ::phoenix::Vector _this = this->pos;
HXDLIN( 943)			bool prev = _this->ignore_listeners;
HXDLIN( 943)			_this->ignore_listeners = true;
HXDLIN( 943)			{
HXLINE( 943)				_this->x = _x;
HXDLIN( 943)				if (!(_this->_construct)) {
HXLINE( 943)					bool _hx_tmp;
HXDLIN( 943)					if (hx::IsNotNull( _this->listen_x )) {
HXLINE( 943)						_hx_tmp = !(_this->ignore_listeners);
            					}
            					else {
HXLINE( 943)						_hx_tmp = false;
            					}
HXDLIN( 943)					if (_hx_tmp) {
HXLINE( 943)						_this->listen_x(_x);
            					}
            				}
            			}
HXDLIN( 943)			{
HXLINE( 943)				_this->y = _y;
HXDLIN( 943)				if (!(_this->_construct)) {
HXLINE( 943)					bool _hx_tmp1;
HXDLIN( 943)					if (hx::IsNotNull( _this->listen_y )) {
HXLINE( 943)						_hx_tmp1 = !(_this->ignore_listeners);
            					}
            					else {
HXLINE( 943)						_hx_tmp1 = false;
            					}
HXDLIN( 943)					if (_hx_tmp1) {
HXLINE( 943)						_this->listen_y(_y);
            					}
            				}
            			}
HXDLIN( 943)			_this->ignore_listeners = prev;
HXDLIN( 943)			bool _hx_tmp2;
HXDLIN( 943)			if (hx::IsNotNull( _this->listen_x )) {
HXLINE( 943)				_hx_tmp2 = !(_this->ignore_listeners);
            			}
            			else {
HXLINE( 943)				_hx_tmp2 = false;
            			}
HXDLIN( 943)			if (_hx_tmp2) {
HXLINE( 943)				_this->listen_x(_this->x);
            			}
HXDLIN( 943)			bool _hx_tmp3;
HXDLIN( 943)			if (hx::IsNotNull( _this->listen_y )) {
HXLINE( 943)				_hx_tmp3 = !(_this->ignore_listeners);
            			}
            			else {
HXLINE( 943)				_hx_tmp3 = false;
            			}
HXDLIN( 943)			if (_hx_tmp3) {
HXLINE( 943)				_this->listen_y(_this->y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(MouseEvent_obj,set_move,(void))

void MouseEvent_obj::set_wheel(Float _x,Float _y,Float _timestamp,int _window_id){
            	HX_STACKFRAME(&_hx_pos_3002ae1c7667da5a_948_set_wheel)
HXLINE( 951)		this->x = ::Math_obj::floor(_x);
HXLINE( 952)		this->y = ::Math_obj::floor(_y);
HXLINE( 953)		this->x_rel = (int)0;
HXLINE( 954)		this->y_rel = (int)0;
HXLINE( 955)		this->state = ::luxe::InteractState_obj::wheel_dyn();
HXLINE( 956)		this->button = (int)0;
HXLINE( 957)		this->window_id = _window_id;
HXLINE( 958)		this->timestamp = _timestamp;
            	}


HX_DEFINE_DYNAMIC_FUNC4(MouseEvent_obj,set_wheel,(void))


hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new() {
	hx::ObjectPtr< MouseEvent_obj > __this = new MouseEvent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__alloc(hx::Ctx *_hx_ctx) {
	MouseEvent_obj *__this = (MouseEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MouseEvent_obj), true, "luxe.MouseEvent"));
	*(void **)__this = MouseEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(window_id,"window_id");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x_rel,"x_rel");
	HX_MARK_MEMBER_NAME(y_rel,"y_rel");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(window_id,"window_id");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x_rel,"x_rel");
	HX_VISIT_MEMBER_NAME(y_rel,"y_rel");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

hx::Val MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"x_rel") ) { return hx::Val( x_rel ); }
		if (HX_FIELD_EQ(inName,"y_rel") ) { return hx::Val( y_rel ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return hx::Val( button ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_move") ) { return hx::Val( set_move_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return hx::Val( timestamp ); }
		if (HX_FIELD_EQ(inName,"window_id") ) { return hx::Val( window_id ); }
		if (HX_FIELD_EQ(inName,"set_press") ) { return hx::Val( set_press_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wheel") ) { return hx::Val( set_wheel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MouseEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast<  ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::luxe::InteractState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x_rel") ) { x_rel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y_rel") ) { y_rel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_id") ) { window_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57"));
	outFields->push(HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MouseEvent_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,window_id),HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96")},
	{hx::fsObject /*::luxe::InteractState*/ ,(int)offsetof(MouseEvent_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,x_rel),HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,y_rel),HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(MouseEvent_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MouseEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String MouseEvent_obj_sMemberFields[] = {
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("x_rel","\xd2","\xba","\x37","\x57"),
	HX_HCSTRING("y_rel","\x53","\x4f","\x9e","\xea"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("set_press","\xe6","\x9b","\x82","\xef"),
	HX_HCSTRING("set_move","\x0e","\xf8","\x78","\x76"),
	HX_HCSTRING("set_wheel","\xfe","\x7c","\xb4","\xf0"),
	::String(null()) };

static void MouseEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class MouseEvent_obj::__mClass;

void MouseEvent_obj::__register()
{
	hx::Object *dummy = new MouseEvent_obj;
	MouseEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.MouseEvent","\x8d","\x99","\x59","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MouseEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MouseEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
