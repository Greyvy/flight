// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_data_RayCollision
#include <luxe/collision/data/RayCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Ray
#include <luxe/collision/shapes/Ray.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92d0fb5da23458ba_9_new,"luxe.collision.data.RayCollision","new",0x600c134a,"luxe.collision.data.RayCollision.new","luxe/collision/data/RayCollision.hx",9,0x7e85e4c7)
HX_LOCAL_STACK_FRAME(_hx_pos_92d0fb5da23458ba_24_reset,"luxe.collision.data.RayCollision","reset",0xd7469b39,"luxe.collision.data.RayCollision.reset","luxe/collision/data/RayCollision.hx",24,0x7e85e4c7)
HX_LOCAL_STACK_FRAME(_hx_pos_92d0fb5da23458ba_35_copy_from,"luxe.collision.data.RayCollision","copy_from",0x6e95c3de,"luxe.collision.data.RayCollision.copy_from","luxe/collision/data/RayCollision.hx",35,0x7e85e4c7)
HX_LOCAL_STACK_FRAME(_hx_pos_92d0fb5da23458ba_44_clone,"luxe.collision.data.RayCollision","clone",0x38e164c7,"luxe.collision.data.RayCollision.clone","luxe/collision/data/RayCollision.hx",44,0x7e85e4c7)
namespace luxe{
namespace collision{
namespace data{

void RayCollision_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_92d0fb5da23458ba_9_new)
HXLINE(  19)		this->end = ((Float)0.0);
HXLINE(  17)		this->start = ((Float)0.0);
            	}

Dynamic RayCollision_obj::__CreateEmpty() { return new RayCollision_obj; }

void *RayCollision_obj::_hx_vtable = 0;

Dynamic RayCollision_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RayCollision_obj > _hx_result = new RayCollision_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RayCollision_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2fe5f04a;
}

 ::luxe::collision::data::RayCollision RayCollision_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_92d0fb5da23458ba_24_reset)
HXLINE(  26)		this->ray = null();
HXLINE(  27)		this->shape = null();
HXLINE(  28)		this->start = ((Float)0.0);
HXLINE(  29)		this->end = ((Float)0.0);
HXLINE(  31)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RayCollision_obj,reset,return )

void RayCollision_obj::copy_from( ::luxe::collision::data::RayCollision other){
            	HX_STACKFRAME(&_hx_pos_92d0fb5da23458ba_35_copy_from)
HXLINE(  37)		this->ray = other->ray;
HXLINE(  38)		this->shape = other->shape;
HXLINE(  39)		this->start = other->start;
HXLINE(  40)		this->end = other->end;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RayCollision_obj,copy_from,(void))

 ::luxe::collision::data::RayCollision RayCollision_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_92d0fb5da23458ba_44_clone)
HXLINE(  46)		 ::luxe::collision::data::RayCollision _clone =  ::luxe::collision::data::RayCollision_obj::__alloc( HX_CTX );
HXLINE(  48)		{
HXLINE(  48)			_clone->ray = this->ray;
HXDLIN(  48)			_clone->shape = this->shape;
HXDLIN(  48)			_clone->start = this->start;
HXDLIN(  48)			_clone->end = this->end;
            		}
HXLINE(  50)		return _clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RayCollision_obj,clone,return )


hx::ObjectPtr< RayCollision_obj > RayCollision_obj::__new() {
	hx::ObjectPtr< RayCollision_obj > __this = new RayCollision_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< RayCollision_obj > RayCollision_obj::__alloc(hx::Ctx *_hx_ctx) {
	RayCollision_obj *__this = (RayCollision_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RayCollision_obj), true, "luxe.collision.data.RayCollision"));
	*(void **)__this = RayCollision_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RayCollision_obj::RayCollision_obj()
{
}

void RayCollision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayCollision);
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(ray,"ray");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_END_CLASS();
}

void RayCollision_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(ray,"ray");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
}

hx::Val RayCollision_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return hx::Val( ray ); }
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return hx::Val( shape ); }
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copy_from") ) { return hx::Val( copy_from_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RayCollision_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { ray=inValue.Cast<  ::luxe::collision::shapes::Ray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast<  ::luxe::collision::shapes::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayCollision_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RayCollision_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(RayCollision_obj,shape),HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c")},
	{hx::fsObject /*::luxe::collision::shapes::Ray*/ ,(int)offsetof(RayCollision_obj,ray),HX_HCSTRING("ray","\xea","\xd5","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(RayCollision_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsFloat,(int)offsetof(RayCollision_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RayCollision_obj_sStaticStorageInfo = 0;
#endif

static ::String RayCollision_obj_sMemberFields[] = {
	HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"),
	HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("copy_from","\x74","\x75","\xa1","\xe9"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void RayCollision_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RayCollision_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RayCollision_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayCollision_obj::__mClass,"__mClass");
};

#endif

hx::Class RayCollision_obj::__mClass;

void RayCollision_obj::__register()
{
	hx::Object *dummy = new RayCollision_obj;
	RayCollision_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.data.RayCollision","\x58","\x66","\xe2","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RayCollision_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RayCollision_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RayCollision_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RayCollision_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RayCollision_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RayCollision_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace collision
} // end namespace data