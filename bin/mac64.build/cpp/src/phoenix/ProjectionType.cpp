// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_phoenix_ProjectionType
#include <phoenix/ProjectionType.h>
#endif
namespace phoenix{

::phoenix::ProjectionType ProjectionType_obj::custom;

::phoenix::ProjectionType ProjectionType_obj::ortho;

::phoenix::ProjectionType ProjectionType_obj::perspective;

bool ProjectionType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("custom",b1,87,92,3f)) { outValue = ProjectionType_obj::custom; return true; }
	if (inName==HX_("ortho",38,17,2d,35)) { outValue = ProjectionType_obj::ortho; return true; }
	if (inName==HX_("perspective",7c,e5,f1,c0)) { outValue = ProjectionType_obj::perspective; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ProjectionType_obj)

int ProjectionType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("custom",b1,87,92,3f)) return 2;
	if (inName==HX_("ortho",38,17,2d,35)) return 0;
	if (inName==HX_("perspective",7c,e5,f1,c0)) return 1;
	return super::__FindIndex(inName);
}

int ProjectionType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("custom",b1,87,92,3f)) return 0;
	if (inName==HX_("ortho",38,17,2d,35)) return 0;
	if (inName==HX_("perspective",7c,e5,f1,c0)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val ProjectionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("custom",b1,87,92,3f)) return custom;
	if (inName==HX_("ortho",38,17,2d,35)) return ortho;
	if (inName==HX_("perspective",7c,e5,f1,c0)) return perspective;
	return super::__Field(inName,inCallProp);
}

static ::String ProjectionType_obj_sStaticFields[] = {
	HX_("ortho",38,17,2d,35),
	HX_("perspective",7c,e5,f1,c0),
	HX_("custom",b1,87,92,3f),
	::String(null())
};

static void ProjectionType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProjectionType_obj::custom,"custom");
	HX_MARK_MEMBER_NAME(ProjectionType_obj::ortho,"ortho");
	HX_MARK_MEMBER_NAME(ProjectionType_obj::perspective,"perspective");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProjectionType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProjectionType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProjectionType_obj::custom,"custom");
	HX_VISIT_MEMBER_NAME(ProjectionType_obj::ortho,"ortho");
	HX_VISIT_MEMBER_NAME(ProjectionType_obj::perspective,"perspective");
};
#endif

hx::Class ProjectionType_obj::__mClass;

Dynamic __Create_ProjectionType_obj() { return new ProjectionType_obj; }

void ProjectionType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("phoenix.ProjectionType","\x08","\x7d","\xde","\x51"), hx::TCanCast< ProjectionType_obj >,ProjectionType_obj_sStaticFields,0,
	&__Create_ProjectionType_obj, &__Create,
	&super::__SGetClass(), &CreateProjectionType_obj, ProjectionType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , ProjectionType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ProjectionType_obj::__GetStatic;
}

void ProjectionType_obj::__boot()
{
custom = hx::CreateEnum< ProjectionType_obj >(HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"),2,0);
ortho = hx::CreateEnum< ProjectionType_obj >(HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35"),0,0);
perspective = hx::CreateEnum< ProjectionType_obj >(HX_HCSTRING("perspective","\x7c","\xe5","\xf1","\xc0"),1,0);
}


} // end namespace phoenix