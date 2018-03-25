// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_core_Runtime
#define INCLUDED_snow_core_Runtime

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,core,Runtime)

namespace snow{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Runtime_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_ready)(); 
		static inline void ready( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::snow::core::Runtime_obj *>(_hx_.mPtr->_hx_getInterface(0x9fe29ed6)))->_hx_ready)();
		}
		bool (hx::Object :: *_hx_run)(); 
		static inline bool run( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::snow::core::Runtime_obj *>(_hx_.mPtr->_hx_getInterface(0x9fe29ed6)))->_hx_run)();
		}
		void (hx::Object :: *_hx_shutdown)( ::Dynamic _immediate); 
		static inline void shutdown( ::Dynamic _hx_, ::Dynamic _immediate) {
			(_hx_.mPtr->*( static_cast< ::snow::core::Runtime_obj *>(_hx_.mPtr->_hx_getInterface(0x9fe29ed6)))->_hx_shutdown)(_immediate);
		}
		bool (hx::Object :: *_hx_window_grab)(bool enable); 
		static inline bool window_grab( ::Dynamic _hx_,bool enable) {
			return (_hx_.mPtr->*( static_cast< ::snow::core::Runtime_obj *>(_hx_.mPtr->_hx_getInterface(0x9fe29ed6)))->_hx_window_grab)(enable);
		}
		bool (hx::Object :: *_hx_window_fullscreen)(bool enable, ::Dynamic true_fullscreen); 
		static inline bool window_fullscreen( ::Dynamic _hx_,bool enable, ::Dynamic true_fullscreen) {
			return (_hx_.mPtr->*( static_cast< ::snow::core::Runtime_obj *>(_hx_.mPtr->_hx_getInterface(0x9fe29ed6)))->_hx_window_fullscreen)(enable,true_fullscreen);
		}
		Float (hx::Object :: *_hx_window_device_pixel_ratio)(); 
		static inline Float window_device_pixel_ratio( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::snow::core::Runtime_obj *>(_hx_.mPtr->_hx_getInterface(0x9fe29ed6)))->_hx_window_device_pixel_ratio)();
		}
		int (hx::Object :: *_hx_window_width)(); 
		static inline int window_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::snow::core::Runtime_obj *>(_hx_.mPtr->_hx_getInterface(0x9fe29ed6)))->_hx_window_width)();
		}
		int (hx::Object :: *_hx_window_height)(); 
		static inline int window_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::snow::core::Runtime_obj *>(_hx_.mPtr->_hx_getInterface(0x9fe29ed6)))->_hx_window_height)();
		}
};

} // end namespace snow
} // end namespace core

#endif /* INCLUDED_snow_core_Runtime */ 
