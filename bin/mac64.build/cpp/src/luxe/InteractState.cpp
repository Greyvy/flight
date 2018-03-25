// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
namespace luxe{

::luxe::InteractState InteractState_obj::axis;

::luxe::InteractState InteractState_obj::down;

::luxe::InteractState InteractState_obj::move;

::luxe::InteractState InteractState_obj::none;

::luxe::InteractState InteractState_obj::unknown;

::luxe::InteractState InteractState_obj::up;

::luxe::InteractState InteractState_obj::wheel;

bool InteractState_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("axis",a1,1c,79,40)) { outValue = InteractState_obj::axis; return true; }
	if (inName==HX_("down",62,f8,6d,42)) { outValue = InteractState_obj::down; return true; }
	if (inName==HX_("move",11,e3,60,48)) { outValue = InteractState_obj::move; return true; }
	if (inName==HX_("none",b8,12,0a,49)) { outValue = InteractState_obj::none; return true; }
	if (inName==HX_("unknown",8a,23,7b,e1)) { outValue = InteractState_obj::unknown; return true; }
	if (inName==HX_("up",5b,66,00,00)) { outValue = InteractState_obj::up; return true; }
	if (inName==HX_("wheel",9b,34,ba,c9)) { outValue = InteractState_obj::wheel; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(InteractState_obj)

int InteractState_obj::__FindIndex(::String inName)
{
	if (inName==HX_("axis",a1,1c,79,40)) return 6;
	if (inName==HX_("down",62,f8,6d,42)) return 2;
	if (inName==HX_("move",11,e3,60,48)) return 4;
	if (inName==HX_("none",b8,12,0a,49)) return 1;
	if (inName==HX_("unknown",8a,23,7b,e1)) return 0;
	if (inName==HX_("up",5b,66,00,00)) return 3;
	if (inName==HX_("wheel",9b,34,ba,c9)) return 5;
	return super::__FindIndex(inName);
}

int InteractState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("axis",a1,1c,79,40)) return 0;
	if (inName==HX_("down",62,f8,6d,42)) return 0;
	if (inName==HX_("move",11,e3,60,48)) return 0;
	if (inName==HX_("none",b8,12,0a,49)) return 0;
	if (inName==HX_("unknown",8a,23,7b,e1)) return 0;
	if (inName==HX_("up",5b,66,00,00)) return 0;
	if (inName==HX_("wheel",9b,34,ba,c9)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val InteractState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("axis",a1,1c,79,40)) return axis;
	if (inName==HX_("down",62,f8,6d,42)) return down;
	if (inName==HX_("move",11,e3,60,48)) return move;
	if (inName==HX_("none",b8,12,0a,49)) return none;
	if (inName==HX_("unknown",8a,23,7b,e1)) return unknown;
	if (inName==HX_("up",5b,66,00,00)) return up;
	if (inName==HX_("wheel",9b,34,ba,c9)) return wheel;
	return super::__Field(inName,inCallProp);
}

static ::String InteractState_obj_sStaticFields[] = {
	HX_("unknown",8a,23,7b,e1),
	HX_("none",b8,12,0a,49),
	HX_("down",62,f8,6d,42),
	HX_("up",5b,66,00,00),
	HX_("move",11,e3,60,48),
	HX_("wheel",9b,34,ba,c9),
	HX_("axis",a1,1c,79,40),
	::String(null())
};

static void InteractState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractState_obj::axis,"axis");
	HX_MARK_MEMBER_NAME(InteractState_obj::down,"down");
	HX_MARK_MEMBER_NAME(InteractState_obj::move,"move");
	HX_MARK_MEMBER_NAME(InteractState_obj::none,"none");
	HX_MARK_MEMBER_NAME(InteractState_obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(InteractState_obj::up,"up");
	HX_MARK_MEMBER_NAME(InteractState_obj::wheel,"wheel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InteractState_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InteractState_obj::axis,"axis");
	HX_VISIT_MEMBER_NAME(InteractState_obj::down,"down");
	HX_VISIT_MEMBER_NAME(InteractState_obj::move,"move");
	HX_VISIT_MEMBER_NAME(InteractState_obj::none,"none");
	HX_VISIT_MEMBER_NAME(InteractState_obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(InteractState_obj::up,"up");
	HX_VISIT_MEMBER_NAME(InteractState_obj::wheel,"wheel");
};
#endif

hx::Class InteractState_obj::__mClass;

Dynamic __Create_InteractState_obj() { return new InteractState_obj; }

void InteractState_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("luxe.InteractState","\xa3","\x7f","\xee","\x4b"), hx::TCanCast< InteractState_obj >,InteractState_obj_sStaticFields,0,
	&__Create_InteractState_obj, &__Create,
	&super::__SGetClass(), &CreateInteractState_obj, InteractState_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , InteractState_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &InteractState_obj::__GetStatic;
}

void InteractState_obj::__boot()
{
axis = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),6,0);
down = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),2,0);
move = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),4,0);
none = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),1,0);
unknown = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),0,0);
up = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),3,0);
wheel = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"),5,0);
}


} // end namespace luxe