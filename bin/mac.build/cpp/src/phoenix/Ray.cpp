// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Ray
#include <phoenix/Ray.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_98c9f6e3df1c5ac4_17_new,"phoenix.Ray","new",0xbe8943dd,"phoenix.Ray.new","phoenix/Ray.hx",17,0x66221cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_98c9f6e3df1c5ac4_32_refresh,"phoenix.Ray","refresh",0x77a24fd8,"phoenix.Ray.refresh","phoenix/Ray.hx",32,0x66221cf4)
namespace phoenix{

void Ray_obj::__construct( ::phoenix::Vector _screen_pos, ::phoenix::Camera _camera, ::phoenix::Rectangle _viewport){
            	HX_GC_STACKFRAME(&_hx_pos_98c9f6e3df1c5ac4_17_new)
HXLINE(  19)		if (hx::IsNull( _viewport )) {
HXLINE(  20)			int _viewport1 = ::Luxe_obj::core->screen->get_w();
HXDLIN(  20)			_viewport =  ::phoenix::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,_viewport1,::Luxe_obj::core->screen->get_h());
            		}
HXLINE(  23)		if (hx::IsNull( _camera )) {
HXLINE(  23)			HX_STACK_DO_THROW(HX_("Camera required for a ray!",93,2f,73,fe));
            		}
HXLINE(  25)		this->camera = _camera;
HXLINE(  26)		this->viewport = _viewport;
HXLINE(  28)		this->refresh(_screen_pos);
            	}

Dynamic Ray_obj::__CreateEmpty() { return new Ray_obj; }

void *Ray_obj::_hx_vtable = 0;

Dynamic Ray_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Ray_obj > _hx_result = new Ray_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Ray_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f75937f;
}

void Ray_obj::refresh( ::phoenix::Vector _screen_pos){
            	HX_GC_STACKFRAME(&_hx_pos_98c9f6e3df1c5ac4_32_refresh)
HXLINE(  35)		Float ndc_x = ((((Float)_screen_pos->x / (Float)this->viewport->w) - ((Float)0.5)) * ((Float)2.0));
HXLINE(  36)		Float ndc_y = ((((Float)(this->viewport->h - _screen_pos->y) / (Float)this->viewport->h) - ((Float)0.5)) * ((Float)2.0));
HXLINE(  39)		 ::phoenix::Vector start_ndc =  ::phoenix::Vector_obj::__alloc( HX_CTX ,ndc_x,ndc_y,((Float)0.0),((Float)1.0));
HXLINE(  40)		 ::phoenix::Vector end_ndc =  ::phoenix::Vector_obj::__alloc( HX_CTX ,ndc_x,ndc_y,((Float)1.0),((Float)1.0));
HXLINE(  42)		this->origin = this->camera->unproject(start_ndc);
HXLINE(  43)		this->end = this->camera->unproject(end_ndc);
HXLINE(  44)		 ::phoenix::Vector a = this->end;
HXDLIN(  44)		 ::phoenix::Vector b = this->origin;
HXDLIN(  44)		Float _hx_tmp = (a->x - b->x);
HXDLIN(  44)		Float _hx_tmp1 = (a->y - b->y);
HXDLIN(  44)		this->dir =  ::phoenix::Vector_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,(a->z - b->z),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,refresh,(void))


hx::ObjectPtr< Ray_obj > Ray_obj::__new( ::phoenix::Vector _screen_pos, ::phoenix::Camera _camera, ::phoenix::Rectangle _viewport) {
	hx::ObjectPtr< Ray_obj > __this = new Ray_obj();
	__this->__construct(_screen_pos,_camera,_viewport);
	return __this;
}

hx::ObjectPtr< Ray_obj > Ray_obj::__alloc(hx::Ctx *_hx_ctx, ::phoenix::Vector _screen_pos, ::phoenix::Camera _camera, ::phoenix::Rectangle _viewport) {
	Ray_obj *__this = (Ray_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Ray_obj), true, "phoenix.Ray"));
	*(void **)__this = Ray_obj::_hx_vtable;
	__this->__construct(_screen_pos,_camera,_viewport);
	return __this;
}

Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
}

hx::Val Ray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end ); }
		if (HX_FIELD_EQ(inName,"dir") ) { return hx::Val( dir ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"camera") ) { return hx::Val( camera ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return hx::Val( refresh_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return hx::Val( viewport ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Ray_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast<  ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast<  ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast<  ::phoenix::Camera >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { viewport=inValue.Cast<  ::phoenix::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Ray_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Ray_obj,camera),HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Ray_obj,viewport),HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Ray_obj_sStaticStorageInfo = 0;
#endif

static ::String Ray_obj_sMemberFields[] = {
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	::String(null()) };

static void Ray_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Ray_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#endif

hx::Class Ray_obj::__mClass;

void Ray_obj::__register()
{
	hx::Object *dummy = new Ray_obj;
	Ray_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Ray","\x6b","\x11","\x91","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Ray_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Ray_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ray_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Ray_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ray_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace phoenix