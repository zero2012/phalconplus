
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/array.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(PhalconPlus_Base_SimpleRequest) {

	ZEPHIR_REGISTER_CLASS_EX(PhalconPlus\\Base, SimpleRequest, phalconplus, base_simplerequest, phalconplus_base_protobuffer_ce, phalconplus_base_simplerequest_method_entry, 0);

	zend_declare_property_null(phalconplus_base_simplerequest_ce, SL("params"), ZEND_ACC_PRIVATE TSRMLS_CC);

	phalconplus_base_simplerequest_ce->create_object = zephir_init_properties_PhalconPlus_Base_SimpleRequest;
	return SUCCESS;

}

PHP_METHOD(PhalconPlus_Base_SimpleRequest, getParam) {

	zval *idx, idx_sub, val, _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&idx_sub);
	ZVAL_UNDEF(&val);
	ZVAL_UNDEF(&_0);

	zephir_fetch_params(0, 1, 0, &idx);



	zephir_read_property(&_0, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
	if (zephir_array_isset_fetch(&val, &_0, idx, 1 TSRMLS_CC)) {
		RETURN_CTORW(val);
	}

}

PHP_METHOD(PhalconPlus_Base_SimpleRequest, setParams) {

	zval *params_param = NULL;
	zval params;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&params);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &params_param);

	zephir_get_arrval(&params, params_param);


	zephir_update_property_zval(this_ptr, SL("params"), &params);
	RETURN_THIS();

}

PHP_METHOD(PhalconPlus_Base_SimpleRequest, setParam) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *val, val_sub, *key = NULL, key_sub, __$null, _0$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&val_sub);
	ZVAL_UNDEF(&key_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &val, &key);

	if (!key) {
		key = &key_sub;
		key = &__$null;
	}


	if (!(Z_TYPE_P(key) == IS_NULL)) {
		zephir_update_property_array(this_ptr, SL("params"), key, val TSRMLS_CC);
	} else {
		zephir_read_property(&_0$$4, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_MAKE_REF(&_0$$4);
		ZEPHIR_CALL_FUNCTION(NULL, "array_push", NULL, 33, &_0$$4, val);
		ZEPHIR_UNREF(&_0$$4);
		zephir_check_call_status();
	}
	RETURN_THIS();

}

PHP_METHOD(PhalconPlus_Base_SimpleRequest, getParams) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "params");

}

zend_object *zephir_init_properties_PhalconPlus_Base_SimpleRequest(zend_class_entry *class_type TSRMLS_DC) {

		zval _0, _1$$3;
		ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);

		ZEPHIR_MM_GROW();
	
	{
		zval local_this_ptr, *this_ptr = &local_this_ptr;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		zephir_read_property(&_0, this_ptr, SL("params"), PH_NOISY_CC | PH_READONLY);
		if (Z_TYPE_P(&_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(&_1$$3);
			array_init(&_1$$3);
			zephir_update_property_zval(this_ptr, SL("params"), &_1$$3);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJ_P(this_ptr);
	}

}

