// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_data_ShapeCollision
#include <luxe/collision/data/ShapeCollision.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68e6845e8ce82e27_9_new,"luxe.collision.data.ShapeCollision","new",0xe15b7bb3,"luxe.collision.data.ShapeCollision.new","luxe/collision/data/ShapeCollision.hx",9,0xa28f16be)
HX_LOCAL_STACK_FRAME(_hx_pos_68e6845e8ce82e27_40_reset,"luxe.collision.data.ShapeCollision","reset",0xd98fafe2,"luxe.collision.data.ShapeCollision.reset","luxe/collision/data/ShapeCollision.hx",40,0xa28f16be)
HX_LOCAL_STACK_FRAME(_hx_pos_68e6845e8ce82e27_50_clone,"luxe.collision.data.ShapeCollision","clone",0x3b2a7970,"luxe.collision.data.ShapeCollision.clone","luxe/collision/data/ShapeCollision.hx",50,0xa28f16be)
HX_LOCAL_STACK_FRAME(_hx_pos_68e6845e8ce82e27_60_copy_from,"luxe.collision.data.ShapeCollision","copy_from",0x1bb0e107,"luxe.collision.data.ShapeCollision.copy_from","luxe/collision/data/ShapeCollision.hx",60,0xa28f16be)
namespace luxe{
namespace collision{
namespace data{

void ShapeCollision_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_68e6845e8ce82e27_9_new)
HXLINE(  28)		this->otherUnitVectorY = ((Float)0.0);
HXLINE(  27)		this->otherUnitVectorX = ((Float)0.0);
HXLINE(  26)		this->otherSeparationY = ((Float)0.0);
HXLINE(  25)		this->otherSeparationX = ((Float)0.0);
HXLINE(  24)		this->otherOverlap = ((Float)0.0);
HXLINE(  22)		this->unitVectorY = ((Float)0.0);
HXLINE(  20)		this->unitVectorX = ((Float)0.0);
HXLINE(  18)		this->separationY = ((Float)0.0);
HXLINE(  16)		this->separationX = ((Float)0.0);
HXLINE(  14)		this->overlap = ((Float)0.0);
            	}

Dynamic ShapeCollision_obj::__CreateEmpty() { return new ShapeCollision_obj; }

void *ShapeCollision_obj::_hx_vtable = 0;

Dynamic ShapeCollision_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShapeCollision_obj > _hx_result = new ShapeCollision_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShapeCollision_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x078e8b97;
}

 ::luxe::collision::data::ShapeCollision ShapeCollision_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_68e6845e8ce82e27_40_reset)
HXLINE(  42)		this->shape1 = (this->shape2 = null());
HXLINE(  43)		this->overlap = (this->separationX = (this->separationY = (this->unitVectorX = (this->unitVectorY = ((Float)0.0)))));
HXLINE(  44)		this->otherOverlap = (this->otherSeparationX = (this->otherSeparationY = (this->otherUnitVectorX = (this->otherUnitVectorY = ((Float)0.0)))));
HXLINE(  46)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShapeCollision_obj,reset,return )

 ::luxe::collision::data::ShapeCollision ShapeCollision_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_68e6845e8ce82e27_50_clone)
HXLINE(  52)		 ::luxe::collision::data::ShapeCollision _clone =  ::luxe::collision::data::ShapeCollision_obj::__alloc( HX_CTX );
HXLINE(  54)		{
HXLINE(  54)			_clone->overlap = this->overlap;
HXDLIN(  54)			_clone->separationX = this->separationX;
HXDLIN(  54)			_clone->separationY = this->separationY;
HXDLIN(  54)			_clone->unitVectorX = this->unitVectorX;
HXDLIN(  54)			_clone->unitVectorY = this->unitVectorY;
HXDLIN(  54)			_clone->otherOverlap = this->otherOverlap;
HXDLIN(  54)			_clone->otherSeparationX = this->otherSeparationX;
HXDLIN(  54)			_clone->otherSeparationY = this->otherSeparationY;
HXDLIN(  54)			_clone->otherUnitVectorX = this->otherUnitVectorX;
HXDLIN(  54)			_clone->otherUnitVectorY = this->otherUnitVectorY;
HXDLIN(  54)			_clone->shape1 = this->shape1;
HXDLIN(  54)			_clone->shape2 = this->shape2;
            		}
HXLINE(  56)		return _clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShapeCollision_obj,clone,return )

void ShapeCollision_obj::copy_from( ::luxe::collision::data::ShapeCollision _other){
            	HX_STACKFRAME(&_hx_pos_68e6845e8ce82e27_60_copy_from)
HXLINE(  62)		this->overlap = _other->overlap;
HXLINE(  63)		this->separationX = _other->separationX;
HXLINE(  64)		this->separationY = _other->separationY;
HXLINE(  65)		this->unitVectorX = _other->unitVectorX;
HXLINE(  66)		this->unitVectorY = _other->unitVectorY;
HXLINE(  67)		this->otherOverlap = _other->otherOverlap;
HXLINE(  68)		this->otherSeparationX = _other->otherSeparationX;
HXLINE(  69)		this->otherSeparationY = _other->otherSeparationY;
HXLINE(  70)		this->otherUnitVectorX = _other->otherUnitVectorX;
HXLINE(  71)		this->otherUnitVectorY = _other->otherUnitVectorY;
HXLINE(  72)		this->shape1 = _other->shape1;
HXLINE(  73)		this->shape2 = _other->shape2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShapeCollision_obj,copy_from,(void))


hx::ObjectPtr< ShapeCollision_obj > ShapeCollision_obj::__new() {
	hx::ObjectPtr< ShapeCollision_obj > __this = new ShapeCollision_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ShapeCollision_obj > ShapeCollision_obj::__alloc(hx::Ctx *_hx_ctx) {
	ShapeCollision_obj *__this = (ShapeCollision_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ShapeCollision_obj), true, "luxe.collision.data.ShapeCollision"));
	*(void **)__this = ShapeCollision_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShapeCollision_obj::ShapeCollision_obj()
{
}

void ShapeCollision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeCollision);
	HX_MARK_MEMBER_NAME(overlap,"overlap");
	HX_MARK_MEMBER_NAME(separationX,"separationX");
	HX_MARK_MEMBER_NAME(separationY,"separationY");
	HX_MARK_MEMBER_NAME(unitVectorX,"unitVectorX");
	HX_MARK_MEMBER_NAME(unitVectorY,"unitVectorY");
	HX_MARK_MEMBER_NAME(otherOverlap,"otherOverlap");
	HX_MARK_MEMBER_NAME(otherSeparationX,"otherSeparationX");
	HX_MARK_MEMBER_NAME(otherSeparationY,"otherSeparationY");
	HX_MARK_MEMBER_NAME(otherUnitVectorX,"otherUnitVectorX");
	HX_MARK_MEMBER_NAME(otherUnitVectorY,"otherUnitVectorY");
	HX_MARK_MEMBER_NAME(shape1,"shape1");
	HX_MARK_MEMBER_NAME(shape2,"shape2");
	HX_MARK_END_CLASS();
}

void ShapeCollision_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(overlap,"overlap");
	HX_VISIT_MEMBER_NAME(separationX,"separationX");
	HX_VISIT_MEMBER_NAME(separationY,"separationY");
	HX_VISIT_MEMBER_NAME(unitVectorX,"unitVectorX");
	HX_VISIT_MEMBER_NAME(unitVectorY,"unitVectorY");
	HX_VISIT_MEMBER_NAME(otherOverlap,"otherOverlap");
	HX_VISIT_MEMBER_NAME(otherSeparationX,"otherSeparationX");
	HX_VISIT_MEMBER_NAME(otherSeparationY,"otherSeparationY");
	HX_VISIT_MEMBER_NAME(otherUnitVectorX,"otherUnitVectorX");
	HX_VISIT_MEMBER_NAME(otherUnitVectorY,"otherUnitVectorY");
	HX_VISIT_MEMBER_NAME(shape1,"shape1");
	HX_VISIT_MEMBER_NAME(shape2,"shape2");
}

hx::Val ShapeCollision_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { return hx::Val( shape1 ); }
		if (HX_FIELD_EQ(inName,"shape2") ) { return hx::Val( shape2 ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return hx::Val( overlap ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copy_from") ) { return hx::Val( copy_from_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"separationX") ) { return hx::Val( separationX ); }
		if (HX_FIELD_EQ(inName,"separationY") ) { return hx::Val( separationY ); }
		if (HX_FIELD_EQ(inName,"unitVectorX") ) { return hx::Val( unitVectorX ); }
		if (HX_FIELD_EQ(inName,"unitVectorY") ) { return hx::Val( unitVectorY ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"otherOverlap") ) { return hx::Val( otherOverlap ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"otherSeparationX") ) { return hx::Val( otherSeparationX ); }
		if (HX_FIELD_EQ(inName,"otherSeparationY") ) { return hx::Val( otherSeparationY ); }
		if (HX_FIELD_EQ(inName,"otherUnitVectorX") ) { return hx::Val( otherUnitVectorX ); }
		if (HX_FIELD_EQ(inName,"otherUnitVectorY") ) { return hx::Val( otherUnitVectorY ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ShapeCollision_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { shape1=inValue.Cast<  ::luxe::collision::shapes::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape2") ) { shape2=inValue.Cast<  ::luxe::collision::shapes::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { overlap=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"separationX") ) { separationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"separationY") ) { separationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unitVectorX") ) { unitVectorX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unitVectorY") ) { unitVectorY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"otherOverlap") ) { otherOverlap=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"otherSeparationX") ) { otherSeparationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"otherSeparationY") ) { otherSeparationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"otherUnitVectorX") ) { otherUnitVectorX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"otherUnitVectorY") ) { otherUnitVectorY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeCollision_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("separationX","\x52","\xd5","\x6a","\x14"));
	outFields->push(HX_HCSTRING("separationY","\x53","\xd5","\x6a","\x14"));
	outFields->push(HX_HCSTRING("unitVectorX","\x11","\x70","\x74","\x9d"));
	outFields->push(HX_HCSTRING("unitVectorY","\x12","\x70","\x74","\x9d"));
	outFields->push(HX_HCSTRING("otherOverlap","\x97","\x7e","\x20","\x2d"));
	outFields->push(HX_HCSTRING("otherSeparationX","\x62","\xd8","\x1d","\xbb"));
	outFields->push(HX_HCSTRING("otherSeparationY","\x63","\xd8","\x1d","\xbb"));
	outFields->push(HX_HCSTRING("otherUnitVectorX","\x21","\x73","\x27","\x44"));
	outFields->push(HX_HCSTRING("otherUnitVectorY","\x22","\x73","\x27","\x44"));
	outFields->push(HX_HCSTRING("shape1","\xf0","\xd9","\x29","\x1d"));
	outFields->push(HX_HCSTRING("shape2","\xf1","\xd9","\x29","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ShapeCollision_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,overlap),HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,separationX),HX_HCSTRING("separationX","\x52","\xd5","\x6a","\x14")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,separationY),HX_HCSTRING("separationY","\x53","\xd5","\x6a","\x14")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,unitVectorX),HX_HCSTRING("unitVectorX","\x11","\x70","\x74","\x9d")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,unitVectorY),HX_HCSTRING("unitVectorY","\x12","\x70","\x74","\x9d")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,otherOverlap),HX_HCSTRING("otherOverlap","\x97","\x7e","\x20","\x2d")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,otherSeparationX),HX_HCSTRING("otherSeparationX","\x62","\xd8","\x1d","\xbb")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,otherSeparationY),HX_HCSTRING("otherSeparationY","\x63","\xd8","\x1d","\xbb")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,otherUnitVectorX),HX_HCSTRING("otherUnitVectorX","\x21","\x73","\x27","\x44")},
	{hx::fsFloat,(int)offsetof(ShapeCollision_obj,otherUnitVectorY),HX_HCSTRING("otherUnitVectorY","\x22","\x73","\x27","\x44")},
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(ShapeCollision_obj,shape1),HX_HCSTRING("shape1","\xf0","\xd9","\x29","\x1d")},
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(ShapeCollision_obj,shape2),HX_HCSTRING("shape2","\xf1","\xd9","\x29","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShapeCollision_obj_sStaticStorageInfo = 0;
#endif

static ::String ShapeCollision_obj_sMemberFields[] = {
	HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"),
	HX_HCSTRING("separationX","\x52","\xd5","\x6a","\x14"),
	HX_HCSTRING("separationY","\x53","\xd5","\x6a","\x14"),
	HX_HCSTRING("unitVectorX","\x11","\x70","\x74","\x9d"),
	HX_HCSTRING("unitVectorY","\x12","\x70","\x74","\x9d"),
	HX_HCSTRING("otherOverlap","\x97","\x7e","\x20","\x2d"),
	HX_HCSTRING("otherSeparationX","\x62","\xd8","\x1d","\xbb"),
	HX_HCSTRING("otherSeparationY","\x63","\xd8","\x1d","\xbb"),
	HX_HCSTRING("otherUnitVectorX","\x21","\x73","\x27","\x44"),
	HX_HCSTRING("otherUnitVectorY","\x22","\x73","\x27","\x44"),
	HX_HCSTRING("shape1","\xf0","\xd9","\x29","\x1d"),
	HX_HCSTRING("shape2","\xf1","\xd9","\x29","\x1d"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copy_from","\x74","\x75","\xa1","\xe9"),
	::String(null()) };

static void ShapeCollision_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeCollision_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShapeCollision_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeCollision_obj::__mClass,"__mClass");
};

#endif

hx::Class ShapeCollision_obj::__mClass;

void ShapeCollision_obj::__register()
{
	hx::Object *dummy = new ShapeCollision_obj;
	ShapeCollision_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.collision.data.ShapeCollision","\x41","\x26","\x09","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShapeCollision_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShapeCollision_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShapeCollision_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShapeCollision_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShapeCollision_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShapeCollision_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace collision
} // end namespace data