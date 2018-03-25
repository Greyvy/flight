// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural_BalancedBST
#include <luxe/structural/BalancedBST.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTIterator
#include <luxe/structural/BalancedBSTIterator.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode
#include <luxe/structural/BalancedBSTNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6dac780c2ff06bb4_681_new,"luxe.structural.BalancedBSTIterator","new",0x7f6104a2,"luxe.structural.BalancedBSTIterator.new","luxe/structural/BalancedBST.hx",681,0xa0b365fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6dac780c2ff06bb4_692_hasNext,"luxe.structural.BalancedBSTIterator","hasNext",0x787022af,"luxe.structural.BalancedBSTIterator.hasNext","luxe/structural/BalancedBST.hx",692,0xa0b365fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6dac780c2ff06bb4_700_next,"luxe.structural.BalancedBSTIterator","next",0xf5830a71,"luxe.structural.BalancedBSTIterator.next","luxe/structural/BalancedBST.hx",700,0xa0b365fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6dac780c2ff06bb4_706_update_next,"luxe.structural.BalancedBSTIterator","update_next",0x8e1ce06b,"luxe.structural.BalancedBSTIterator.update_next","luxe/structural/BalancedBST.hx",706,0xa0b365fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6dac780c2ff06bb4_732__min,"luxe.structural.BalancedBSTIterator","_min",0xeb9edc11,"luxe.structural.BalancedBSTIterator._min","luxe/structural/BalancedBST.hx",732,0xa0b365fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6dac780c2ff06bb4_740__max,"luxe.structural.BalancedBSTIterator","_max",0xeb9ed523,"luxe.structural.BalancedBSTIterator._max","luxe/structural/BalancedBST.hx",740,0xa0b365fc)
namespace luxe{
namespace structural{

void BalancedBSTIterator_obj::__construct( ::luxe::structural::BalancedBST _tree){
            	HX_STACKFRAME(&_hx_pos_6dac780c2ff06bb4_681_new)
HXLINE( 683)		if (hx::IsNull( _tree )) {
HXLINE( 683)			return;
            		}
HXLINE( 684)		if (hx::IsNull( _tree->root )) {
HXLINE( 684)			return;
            		}
HXLINE( 686)		this->tree = _tree;
HXLINE( 687)		 ::luxe::structural::BalancedBSTNode _node = this->tree->root;
HXDLIN( 687)		while(hx::IsNotNull( _node->left )){
HXLINE( 687)			_node = _node->left;
            		}
HXDLIN( 687)		this->current = _node;
HXLINE( 688)		 ::luxe::structural::BalancedBSTNode _node1 = this->tree->root;
HXDLIN( 688)		while(hx::IsNotNull( _node1->right )){
HXLINE( 688)			_node1 = _node1->right;
            		}
HXDLIN( 688)		this->rightest = _node1;
            	}

Dynamic BalancedBSTIterator_obj::__CreateEmpty() { return new BalancedBSTIterator_obj; }

void *BalancedBSTIterator_obj::_hx_vtable = 0;

Dynamic BalancedBSTIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BalancedBSTIterator_obj > _hx_result = new BalancedBSTIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BalancedBSTIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a010516;
}

bool BalancedBSTIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_6dac780c2ff06bb4_692_hasNext)
HXLINE( 694)		bool _hx_tmp;
HXDLIN( 694)		if (hx::IsNotNull( this->current )) {
HXLINE( 694)			_hx_tmp = hx::IsNull( this->rightest );
            		}
            		else {
HXLINE( 694)			_hx_tmp = true;
            		}
HXDLIN( 694)		if (_hx_tmp) {
HXLINE( 694)			return false;
            		}
HXLINE( 696)		return (( (int)(this->tree->compare(this->current->key,this->rightest->key)) ) <= (int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBSTIterator_obj,hasNext,return )

 ::Dynamic BalancedBSTIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_6dac780c2ff06bb4_700_next)
HXLINE( 701)		 ::luxe::structural::BalancedBSTNode _temp = this->current;
HXLINE( 702)		 ::luxe::structural::BalancedBSTNode _hx_tmp;
HXDLIN( 702)		bool _hx_tmp1;
HXDLIN( 702)		bool _hx_tmp2;
HXDLIN( 702)		if (hx::IsNotNull( this->current )) {
HXLINE( 702)			_hx_tmp2 = hx::IsNull( this->rightest );
            		}
            		else {
HXLINE( 702)			_hx_tmp2 = true;
            		}
HXDLIN( 702)		if (_hx_tmp2) {
HXLINE( 702)			_hx_tmp1 = false;
            		}
            		else {
HXLINE( 702)			_hx_tmp1 = (( (int)(this->tree->compare(this->current->key,this->rightest->key)) ) <= (int)0);
            		}
HXDLIN( 702)		if (!(_hx_tmp1)) {
HXLINE( 702)			_hx_tmp = null();
            		}
            		else {
HXLINE( 702)			if (hx::IsNotNull( this->current->right )) {
HXLINE( 702)				 ::luxe::structural::BalancedBSTNode _node = this->current->right;
HXDLIN( 702)				while(hx::IsNotNull( _node->left )){
HXLINE( 702)					_node = _node->left;
            				}
HXDLIN( 702)				_hx_tmp = _node;
            			}
            			else {
HXLINE( 702)				 ::luxe::structural::BalancedBSTNode _next = null();
HXDLIN( 702)				 ::luxe::structural::BalancedBSTNode _temp1 = this->tree->root;
HXDLIN( 702)				while(hx::IsNotNull( _temp1 )){
HXLINE( 702)					int _comp = ( (int)(this->tree->compare(this->current->key,_temp1->key)) );
HXDLIN( 702)					if ((_comp < (int)0)) {
HXLINE( 702)						_next = _temp1;
HXDLIN( 702)						_temp1 = _temp1->left;
            					}
            					else {
HXLINE( 702)						if ((_comp > (int)0)) {
HXLINE( 702)							_temp1 = _temp1->right;
            						}
            						else {
HXLINE( 702)							this->current = _next;
HXDLIN( 702)							goto _hx_goto_5;
            						}
            					}
            				}
            				_hx_goto_5:;
HXDLIN( 702)				_hx_tmp = _next;
            			}
            		}
HXDLIN( 702)		this->current = _hx_tmp;
HXLINE( 703)		return _temp->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBSTIterator_obj,next,return )

 ::luxe::structural::BalancedBSTNode BalancedBSTIterator_obj::update_next(){
            	HX_STACKFRAME(&_hx_pos_6dac780c2ff06bb4_706_update_next)
HXLINE( 708)		bool _hx_tmp;
HXDLIN( 708)		bool _hx_tmp1;
HXDLIN( 708)		if (hx::IsNotNull( this->current )) {
HXLINE( 708)			_hx_tmp1 = hx::IsNull( this->rightest );
            		}
            		else {
HXLINE( 708)			_hx_tmp1 = true;
            		}
HXDLIN( 708)		if (_hx_tmp1) {
HXLINE( 708)			_hx_tmp = false;
            		}
            		else {
HXLINE( 708)			_hx_tmp = (( (int)(this->tree->compare(this->current->key,this->rightest->key)) ) <= (int)0);
            		}
HXDLIN( 708)		if (!(_hx_tmp)) {
HXLINE( 708)			return null();
            		}
HXLINE( 709)		if (hx::IsNotNull( this->current->right )) {
HXLINE( 709)			 ::luxe::structural::BalancedBSTNode _node = this->current->right;
HXDLIN( 709)			while(hx::IsNotNull( _node->left )){
HXLINE( 709)				_node = _node->left;
            			}
HXDLIN( 709)			return _node;
            		}
HXLINE( 711)		 ::luxe::structural::BalancedBSTNode _next = null();
HXLINE( 712)		 ::luxe::structural::BalancedBSTNode _temp = this->tree->root;
HXLINE( 713)		while(hx::IsNotNull( _temp )){
HXLINE( 715)			int _comp = ( (int)(this->tree->compare(this->current->key,_temp->key)) );
HXLINE( 716)			if ((_comp < (int)0)) {
HXLINE( 717)				_next = _temp;
HXLINE( 718)				_temp = _temp->left;
            			}
            			else {
HXLINE( 719)				if ((_comp > (int)0)) {
HXLINE( 720)					_temp = _temp->right;
            				}
            				else {
HXLINE( 722)					this->current = _next;
HXLINE( 723)					goto _hx_goto_8;
            				}
            			}
            		}
            		_hx_goto_8:;
HXLINE( 728)		return _next;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBSTIterator_obj,update_next,return )

 ::luxe::structural::BalancedBSTNode BalancedBSTIterator_obj::_min( ::luxe::structural::BalancedBSTNode _node){
            	HX_STACKFRAME(&_hx_pos_6dac780c2ff06bb4_732__min)
HXLINE( 734)		while(hx::IsNotNull( _node->left )){
HXLINE( 734)			_node = _node->left;
            		}
HXLINE( 736)		return _node;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBSTIterator_obj,_min,return )

 ::luxe::structural::BalancedBSTNode BalancedBSTIterator_obj::_max( ::luxe::structural::BalancedBSTNode _node){
            	HX_STACKFRAME(&_hx_pos_6dac780c2ff06bb4_740__max)
HXLINE( 742)		while(hx::IsNotNull( _node->right )){
HXLINE( 742)			_node = _node->right;
            		}
HXLINE( 744)		return _node;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBSTIterator_obj,_max,return )


hx::ObjectPtr< BalancedBSTIterator_obj > BalancedBSTIterator_obj::__new( ::luxe::structural::BalancedBST _tree) {
	hx::ObjectPtr< BalancedBSTIterator_obj > __this = new BalancedBSTIterator_obj();
	__this->__construct(_tree);
	return __this;
}

hx::ObjectPtr< BalancedBSTIterator_obj > BalancedBSTIterator_obj::__alloc(hx::Ctx *_hx_ctx, ::luxe::structural::BalancedBST _tree) {
	BalancedBSTIterator_obj *__this = (BalancedBSTIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BalancedBSTIterator_obj), true, "luxe.structural.BalancedBSTIterator"));
	*(void **)__this = BalancedBSTIterator_obj::_hx_vtable;
	__this->__construct(_tree);
	return __this;
}

BalancedBSTIterator_obj::BalancedBSTIterator_obj()
{
}

void BalancedBSTIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedBSTIterator);
	HX_MARK_MEMBER_NAME(tree,"tree");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(rightest,"rightest");
	HX_MARK_END_CLASS();
}

void BalancedBSTIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tree,"tree");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(rightest,"rightest");
}

hx::Val BalancedBSTIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return hx::Val( tree ); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn() ); }
		if (HX_FIELD_EQ(inName,"_min") ) { return hx::Val( _min_dyn() ); }
		if (HX_FIELD_EQ(inName,"_max") ) { return hx::Val( _max_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightest") ) { return hx::Val( rightest ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_next") ) { return hx::Val( update_next_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BalancedBSTIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast<  ::luxe::structural::BalancedBST >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast<  ::luxe::structural::BalancedBSTNode >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightest") ) { rightest=inValue.Cast<  ::luxe::structural::BalancedBSTNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedBSTIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"));
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("rightest","\xea","\xcd","\x2c","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BalancedBSTIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::BalancedBST*/ ,(int)offsetof(BalancedBSTIterator_obj,tree),HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d")},
	{hx::fsObject /*::luxe::structural::BalancedBSTNode*/ ,(int)offsetof(BalancedBSTIterator_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*::luxe::structural::BalancedBSTNode*/ ,(int)offsetof(BalancedBSTIterator_obj,rightest),HX_HCSTRING("rightest","\xea","\xcd","\x2c","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BalancedBSTIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String BalancedBSTIterator_obj_sMemberFields[] = {
	HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("rightest","\xea","\xcd","\x2c","\xe4"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("update_next","\x29","\x9a","\x7e","\x4e"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	::String(null()) };

static void BalancedBSTIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBSTIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BalancedBSTIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBSTIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class BalancedBSTIterator_obj::__mClass;

void BalancedBSTIterator_obj::__register()
{
	hx::Object *dummy = new BalancedBSTIterator_obj;
	BalancedBSTIterator_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.BalancedBSTIterator","\xb0","\xcb","\xdd","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BalancedBSTIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BalancedBSTIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BalancedBSTIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BalancedBSTIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BalancedBSTIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BalancedBSTIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace structural
