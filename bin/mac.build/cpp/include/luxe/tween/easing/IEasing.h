// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_tween_easing_IEasing
#define INCLUDED_luxe_tween_easing_IEasing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)

namespace luxe{
namespace tween{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES IEasing_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Float (hx::Object :: *_hx_calculate)(Float k); 
		static inline Float calculate( ::Dynamic _hx_,Float k) {
			return (_hx_.mPtr->*( static_cast< ::luxe::tween::easing::IEasing_obj *>(_hx_.mPtr->_hx_getInterface(0xd1e8cbf4)))->_hx_calculate)(k);
		}
		Float (hx::Object :: *_hx_ease)(Float t,Float b,Float c,Float d); 
		static inline Float ease( ::Dynamic _hx_,Float t,Float b,Float c,Float d) {
			return (_hx_.mPtr->*( static_cast< ::luxe::tween::easing::IEasing_obj *>(_hx_.mPtr->_hx_getInterface(0xd1e8cbf4)))->_hx_ease)(t,b,c,d);
		}
};

} // end namespace luxe
} // end namespace tween
} // end namespace easing

#endif /* INCLUDED_luxe_tween_easing_IEasing */ 