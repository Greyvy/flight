// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap
#include <luxe/structural/OrderedMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator
#include <luxe/structural/OrderedMapIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_39d4e11ef6ef0743_32_new,"luxe.structural.OrderedMap","new",0x58ad39fa,"luxe.structural.OrderedMap.new","luxe/structural/OrderedMap.hx",32,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_39d4e11ef6ef0743_45_set,"luxe.structural.OrderedMap","set",0x58b1053c,"luxe.structural.OrderedMap.set","luxe/structural/OrderedMap.hx",45,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_39d4e11ef6ef0743_50_toString,"luxe.structural.OrderedMap","toString",0x094e58d2,"luxe.structural.OrderedMap.toString","luxe/structural/OrderedMap.hx",50,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_39d4e11ef6ef0743_56_iterator,"luxe.structural.OrderedMap","iterator",0x6479d214,"luxe.structural.OrderedMap.iterator","luxe/structural/OrderedMap.hx",56,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_39d4e11ef6ef0743_57_remove,"luxe.structural.OrderedMap","remove",0x7701aeea,"luxe.structural.OrderedMap.remove","luxe/structural/OrderedMap.hx",57,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_39d4e11ef6ef0743_58_exists,"luxe.structural.OrderedMap","exists",0x32593082,"luxe.structural.OrderedMap.exists","luxe/structural/OrderedMap.hx",58,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_39d4e11ef6ef0743_59_get,"luxe.structural.OrderedMap","get",0x58a7ea30,"luxe.structural.OrderedMap.get","luxe/structural/OrderedMap.hx",59,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_39d4e11ef6ef0743_60_keys,"luxe.structural.OrderedMap","keys",0x3ce9df1a,"luxe.structural.OrderedMap.keys","luxe/structural/OrderedMap.hx",60,0x2ffa3116)
namespace luxe{
namespace structural{

void OrderedMap_obj::__construct(::Dynamic _map){
            	HX_STACKFRAME(&_hx_pos_39d4e11ef6ef0743_32_new)
HXLINE(  35)		this->idx = (int)0;
HXLINE(  41)		this->_keys = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  42)		this->map = _map;
            	}

Dynamic OrderedMap_obj::__CreateEmpty() { return new OrderedMap_obj; }

void *OrderedMap_obj::_hx_vtable = 0;

Dynamic OrderedMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OrderedMap_obj > _hx_result = new OrderedMap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OrderedMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c3b0ec6;
}

static ::haxe::IMap_obj _hx_luxe_structural_OrderedMap__hx_haxe_IMap= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::luxe::structural::OrderedMap_obj::get,
	( void (hx::Object::*)( ::Dynamic, ::Dynamic))&::luxe::structural::OrderedMap_obj::set_41d0cb46,
	( bool (hx::Object::*)( ::Dynamic))&::luxe::structural::OrderedMap_obj::exists,
	( bool (hx::Object::*)( ::Dynamic))&::luxe::structural::OrderedMap_obj::remove,
	(  ::Dynamic (hx::Object::*)())&::luxe::structural::OrderedMap_obj::iterator_8b3ae2fb,
};

 ::Dynamic OrderedMap_obj::iterator_8b3ae2fb() {
			return iterator();
}

void OrderedMap_obj::set_41d0cb46( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *OrderedMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_luxe_structural_OrderedMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void OrderedMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_39d4e11ef6ef0743_45_set)
HXLINE(  46)		if (!(::haxe::IMap_obj::exists(this->map,key))) {
HXLINE(  46)			this->_keys->push(key);
            		}
HXLINE(  47)		::haxe::IMap_obj::set(this->map,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OrderedMap_obj,set,(void))

::String OrderedMap_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_39d4e11ef6ef0743_50_toString)
HXLINE(  51)		::String _ret = HX_("",00,00,00,00);
HXDLIN(  51)		int _cnt = (int)0;
HXDLIN(  51)		int _len = this->_keys->get_length();
HXLINE(  52)		{
HXLINE(  52)			int _g = (int)0;
HXDLIN(  52)			::cpp::VirtualArray _g1 = this->_keys;
HXDLIN(  52)			while((_g < _g1->get_length())){
HXLINE(  52)				 ::Dynamic k = _g1->__get(_g);
HXDLIN(  52)				_g = (_g + (int)1);
HXDLIN(  52)				::String _ret1 = ((HX_("",00,00,00,00) + ::Std_obj::string(k)) + HX_(" => ",7f,53,55,15));
HXDLIN(  52)				::String _ret2 = (_ret1 + ::Std_obj::string(::haxe::IMap_obj::get(this->map,k)));
HXDLIN(  52)				::String _ret3;
HXDLIN(  52)				_cnt = (_cnt + (int)1);
HXDLIN(  52)				int _ret4 = (_cnt - (int)1);
HXDLIN(  52)				if ((_ret4 < (_len - (int)1))) {
HXLINE(  52)					_ret3 = HX_(", ",74,26,00,00);
            				}
            				else {
HXLINE(  52)					_ret3 = HX_("",00,00,00,00);
            				}
HXDLIN(  52)				_ret = (_ret + (_ret2 + _ret3));
            			}
            		}
HXLINE(  53)		return ((HX_("{",7b,00,00,00) + _ret) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_obj,toString,return )

 ::luxe::structural::OrderedMapIterator OrderedMap_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_39d4e11ef6ef0743_56_iterator)
HXDLIN(  56)		return  ::luxe::structural::OrderedMapIterator_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_obj,iterator,return )

bool OrderedMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_39d4e11ef6ef0743_57_remove)
HXDLIN(  57)		if (::haxe::IMap_obj::remove(this->map,key)) {
HXDLIN(  57)			return this->_keys->remove(key);
            		}
            		else {
HXDLIN(  57)			return false;
            		}
HXDLIN(  57)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_obj,remove,return )

bool OrderedMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_39d4e11ef6ef0743_58_exists)
HXDLIN(  58)		return ::haxe::IMap_obj::exists(this->map,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_obj,exists,return )

 ::Dynamic OrderedMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_39d4e11ef6ef0743_59_get)
HXDLIN(  59)		return ::haxe::IMap_obj::get(this->map,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_obj,get,return )

 ::Dynamic OrderedMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_39d4e11ef6ef0743_60_keys)
HXDLIN(  60)		return this->_keys->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_obj,keys,return )


hx::ObjectPtr< OrderedMap_obj > OrderedMap_obj::__new(::Dynamic _map) {
	hx::ObjectPtr< OrderedMap_obj > __this = new OrderedMap_obj();
	__this->__construct(_map);
	return __this;
}

hx::ObjectPtr< OrderedMap_obj > OrderedMap_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic _map) {
	OrderedMap_obj *__this = (OrderedMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OrderedMap_obj), true, "luxe.structural.OrderedMap"));
	*(void **)__this = OrderedMap_obj::_hx_vtable;
	__this->__construct(_map);
	return __this;
}

OrderedMap_obj::OrderedMap_obj()
{
}

void OrderedMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrderedMap);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_END_CLASS();
}

void OrderedMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(idx,"idx");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
}

hx::Val OrderedMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return hx::Val( map ); }
		if (HX_FIELD_EQ(inName,"idx") ) { return hx::Val( idx ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return hx::Val( _keys ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OrderedMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OrderedMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("idx","\x3d","\x04","\x50","\x00"));
	outFields->push(HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OrderedMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::IMap*/ ,(int)offsetof(OrderedMap_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(OrderedMap_obj,idx),HX_HCSTRING("idx","\x3d","\x04","\x50","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(OrderedMap_obj,_keys),HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OrderedMap_obj_sStaticStorageInfo = 0;
#endif

static ::String OrderedMap_obj_sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("idx","\x3d","\x04","\x50","\x00"),
	HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	::String(null()) };

static void OrderedMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OrderedMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OrderedMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OrderedMap_obj::__mClass,"__mClass");
};

#endif

hx::Class OrderedMap_obj::__mClass;

void OrderedMap_obj::__register()
{
	hx::Object *dummy = new OrderedMap_obj;
	OrderedMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.OrderedMap","\x08","\x75","\xde","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OrderedMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OrderedMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OrderedMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OrderedMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OrderedMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OrderedMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace structural