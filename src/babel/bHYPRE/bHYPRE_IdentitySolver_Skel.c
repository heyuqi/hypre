/*
 * File:          bHYPRE_IdentitySolver_Skel.c
 * Symbol:        bHYPRE.IdentitySolver-v1.0.0
 * Symbol Type:   class
 * Babel Version: 1.0.0
 * Description:   Server-side glue code for bHYPRE.IdentitySolver
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#include "bHYPRE_IdentitySolver_IOR.h"
#include "bHYPRE_IdentitySolver.h"
#include <stddef.h>

extern
void
impl_bHYPRE_IdentitySolver__load(
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_bHYPRE_IdentitySolver__ctor(
  /* in */ bHYPRE_IdentitySolver self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_bHYPRE_IdentitySolver__ctor2(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_bHYPRE_IdentitySolver__dtor(
  /* in */ bHYPRE_IdentitySolver self,
  /* out */ sidl_BaseInterface *_ex);

extern
bHYPRE_IdentitySolver
impl_bHYPRE_IdentitySolver_Create(
  /* in */ bHYPRE_MPICommunicator mpi_comm,
  /* out */ sidl_BaseInterface *_ex);

extern struct bHYPRE_IdentitySolver__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_IdentitySolver(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_IdentitySolver__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_IdentitySolver(void* bi,
  sidl_BaseInterface* _ex);
extern struct bHYPRE_MPICommunicator__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_MPICommunicator(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_MPICommunicator__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_MPICommunicator(void* bi,
  sidl_BaseInterface* _ex);
extern struct bHYPRE_Operator__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Operator(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_Operator__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Operator(void* bi,
  sidl_BaseInterface* _ex);
extern struct bHYPRE_Solver__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Solver(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_Solver__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Solver(void* bi,
  sidl_BaseInterface* _ex);
extern struct bHYPRE_Vector__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Vector(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_Vector__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Vector(void* bi,
  sidl_BaseInterface* _ex);
extern struct sidl_BaseClass__object* 
  impl_bHYPRE_IdentitySolver_fconnect_sidl_BaseClass(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseClass__object* 
  impl_bHYPRE_IdentitySolver_fcast_sidl_BaseClass(void* bi,
  sidl_BaseInterface* _ex);
extern struct sidl_BaseInterface__object* 
  impl_bHYPRE_IdentitySolver_fconnect_sidl_BaseInterface(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_bHYPRE_IdentitySolver_fcast_sidl_BaseInterface(void* bi,
  sidl_BaseInterface* _ex);
extern struct sidl_ClassInfo__object* 
  impl_bHYPRE_IdentitySolver_fconnect_sidl_ClassInfo(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_ClassInfo__object* 
  impl_bHYPRE_IdentitySolver_fcast_sidl_ClassInfo(void* bi,
  sidl_BaseInterface* _ex);
extern struct sidl_RuntimeException__object* 
  impl_bHYPRE_IdentitySolver_fconnect_sidl_RuntimeException(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_RuntimeException__object* 
  impl_bHYPRE_IdentitySolver_fcast_sidl_RuntimeException(void* bi,
  sidl_BaseInterface* _ex);
extern
int32_t
impl_bHYPRE_IdentitySolver_SetOperator(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ bHYPRE_Operator A,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetTolerance(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ double tolerance,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetMaxIterations(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ int32_t max_iterations,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetLogging(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ int32_t level,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetPrintLevel(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ int32_t level,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_GetNumIterations(
  /* in */ bHYPRE_IdentitySolver self,
  /* out */ int32_t* num_iterations,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_GetRelResidualNorm(
  /* in */ bHYPRE_IdentitySolver self,
  /* out */ double* norm,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetCommunicator(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ bHYPRE_MPICommunicator mpi_comm,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_bHYPRE_IdentitySolver_Destroy(
  /* in */ bHYPRE_IdentitySolver self,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetIntParameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in */ int32_t value,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetDoubleParameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in */ double value,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetStringParameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in */ const char* value,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetIntArray1Parameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in rarray[nvalues] */ int32_t* value,
  /* in */ int32_t nvalues,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetIntArray2Parameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in array<int,2,column-major> */ struct sidl_int__array* value,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetDoubleArray1Parameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in rarray[nvalues] */ double* value,
  /* in */ int32_t nvalues,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_SetDoubleArray2Parameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in array<double,2,column-major> */ struct sidl_double__array* value,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_GetIntValue(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* out */ int32_t* value,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_GetDoubleValue(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* out */ double* value,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_Setup(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ bHYPRE_Vector b,
  /* in */ bHYPRE_Vector x,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_Apply(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ bHYPRE_Vector b,
  /* inout */ bHYPRE_Vector* x,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_IdentitySolver_ApplyAdjoint(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ bHYPRE_Vector b,
  /* inout */ bHYPRE_Vector* x,
  /* out */ sidl_BaseInterface *_ex);

extern struct bHYPRE_IdentitySolver__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_IdentitySolver(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_IdentitySolver__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_IdentitySolver(void* bi,
  sidl_BaseInterface* _ex);
extern struct bHYPRE_MPICommunicator__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_MPICommunicator(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_MPICommunicator__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_MPICommunicator(void* bi,
  sidl_BaseInterface* _ex);
extern struct bHYPRE_Operator__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Operator(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_Operator__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Operator(void* bi,
  sidl_BaseInterface* _ex);
extern struct bHYPRE_Solver__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Solver(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_Solver__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Solver(void* bi,
  sidl_BaseInterface* _ex);
extern struct bHYPRE_Vector__object* 
  impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Vector(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_Vector__object* 
  impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Vector(void* bi,
  sidl_BaseInterface* _ex);
extern struct sidl_BaseClass__object* 
  impl_bHYPRE_IdentitySolver_fconnect_sidl_BaseClass(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseClass__object* 
  impl_bHYPRE_IdentitySolver_fcast_sidl_BaseClass(void* bi,
  sidl_BaseInterface* _ex);
extern struct sidl_BaseInterface__object* 
  impl_bHYPRE_IdentitySolver_fconnect_sidl_BaseInterface(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_bHYPRE_IdentitySolver_fcast_sidl_BaseInterface(void* bi,
  sidl_BaseInterface* _ex);
extern struct sidl_ClassInfo__object* 
  impl_bHYPRE_IdentitySolver_fconnect_sidl_ClassInfo(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_ClassInfo__object* 
  impl_bHYPRE_IdentitySolver_fcast_sidl_ClassInfo(void* bi,
  sidl_BaseInterface* _ex);
extern struct sidl_RuntimeException__object* 
  impl_bHYPRE_IdentitySolver_fconnect_sidl_RuntimeException(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_RuntimeException__object* 
  impl_bHYPRE_IdentitySolver_fcast_sidl_RuntimeException(void* bi,
  sidl_BaseInterface* _ex);
static int32_t
skel_bHYPRE_IdentitySolver_SetIntArray1Parameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in rarray[nvalues] */ struct sidl_int__array* value,
/* out */ sidl_BaseInterface *_ex)
{
  int32_t _return;
  struct sidl_int__array* value_proxy = sidl_int__array_ensure(value, 1,
    sidl_column_major_order);
  int32_t* value_tmp = value_proxy->d_firstElement;
  int32_t nvalues = sidlLength(value_proxy,0);
  _return =
    impl_bHYPRE_IdentitySolver_SetIntArray1Parameter(
      self,
      name,
      value_tmp,
      nvalues,
      _ex);
  return _return;
}

static int32_t
skel_bHYPRE_IdentitySolver_SetIntArray2Parameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in array<int,2,column-major> */ struct sidl_int__array* value,
/* out */ sidl_BaseInterface *_ex)
{
  int32_t _return;
  struct sidl_int__array* value_proxy = sidl_int__array_ensure(value, 2,
    sidl_column_major_order);
  _return =
    impl_bHYPRE_IdentitySolver_SetIntArray2Parameter(
      self,
      name,
      value_proxy,
      _ex);
  sidl_int__array_deleteRef(value_proxy);
  return _return;
}

static int32_t
skel_bHYPRE_IdentitySolver_SetDoubleArray1Parameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in rarray[nvalues] */ struct sidl_double__array* value,
/* out */ sidl_BaseInterface *_ex)
{
  int32_t _return;
  struct sidl_double__array* value_proxy = sidl_double__array_ensure(value, 1,
    sidl_column_major_order);
  double* value_tmp = value_proxy->d_firstElement;
  int32_t nvalues = sidlLength(value_proxy,0);
  _return =
    impl_bHYPRE_IdentitySolver_SetDoubleArray1Parameter(
      self,
      name,
      value_tmp,
      nvalues,
      _ex);
  return _return;
}

static int32_t
skel_bHYPRE_IdentitySolver_SetDoubleArray2Parameter(
  /* in */ bHYPRE_IdentitySolver self,
  /* in */ const char* name,
  /* in array<double,2,column-major> */ struct sidl_double__array* value,
/* out */ sidl_BaseInterface *_ex)
{
  int32_t _return;
  struct sidl_double__array* value_proxy = sidl_double__array_ensure(value, 2,
    sidl_column_major_order);
  _return =
    impl_bHYPRE_IdentitySolver_SetDoubleArray2Parameter(
      self,
      name,
      value_proxy,
      _ex);
  sidl_double__array_deleteRef(value_proxy);
  return _return;
}

#ifdef __cplusplus
extern "C" {
#endif

void
bHYPRE_IdentitySolver__set_epv(struct bHYPRE_IdentitySolver__epv *epv)
{
  epv->f__ctor = impl_bHYPRE_IdentitySolver__ctor;
  epv->f__ctor2 = impl_bHYPRE_IdentitySolver__ctor2;
  epv->f__dtor = impl_bHYPRE_IdentitySolver__dtor;
  epv->f_SetOperator = impl_bHYPRE_IdentitySolver_SetOperator;
  epv->f_SetTolerance = impl_bHYPRE_IdentitySolver_SetTolerance;
  epv->f_SetMaxIterations = impl_bHYPRE_IdentitySolver_SetMaxIterations;
  epv->f_SetLogging = impl_bHYPRE_IdentitySolver_SetLogging;
  epv->f_SetPrintLevel = impl_bHYPRE_IdentitySolver_SetPrintLevel;
  epv->f_GetNumIterations = impl_bHYPRE_IdentitySolver_GetNumIterations;
  epv->f_GetRelResidualNorm = impl_bHYPRE_IdentitySolver_GetRelResidualNorm;
  epv->f_SetCommunicator = impl_bHYPRE_IdentitySolver_SetCommunicator;
  epv->f_Destroy = impl_bHYPRE_IdentitySolver_Destroy;
  epv->f_SetIntParameter = impl_bHYPRE_IdentitySolver_SetIntParameter;
  epv->f_SetDoubleParameter = impl_bHYPRE_IdentitySolver_SetDoubleParameter;
  epv->f_SetStringParameter = impl_bHYPRE_IdentitySolver_SetStringParameter;
  epv->f_SetIntArray1Parameter = 
    skel_bHYPRE_IdentitySolver_SetIntArray1Parameter;
  epv->f_SetIntArray2Parameter = 
    skel_bHYPRE_IdentitySolver_SetIntArray2Parameter;
  epv->f_SetDoubleArray1Parameter = 
    skel_bHYPRE_IdentitySolver_SetDoubleArray1Parameter;
  epv->f_SetDoubleArray2Parameter = 
    skel_bHYPRE_IdentitySolver_SetDoubleArray2Parameter;
  epv->f_GetIntValue = impl_bHYPRE_IdentitySolver_GetIntValue;
  epv->f_GetDoubleValue = impl_bHYPRE_IdentitySolver_GetDoubleValue;
  epv->f_Setup = impl_bHYPRE_IdentitySolver_Setup;
  epv->f_Apply = impl_bHYPRE_IdentitySolver_Apply;
  epv->f_ApplyAdjoint = impl_bHYPRE_IdentitySolver_ApplyAdjoint;

}
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void
bHYPRE_IdentitySolver__set_sepv(struct bHYPRE_IdentitySolver__sepv *sepv)
{
  sepv->f_Create = impl_bHYPRE_IdentitySolver_Create;
}
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void bHYPRE_IdentitySolver__call_load(void) { 
  sidl_BaseInterface _throwaway_exception = NULL;
  impl_bHYPRE_IdentitySolver__load(&_throwaway_exception);
}
struct bHYPRE_IdentitySolver__object* 
  skel_bHYPRE_IdentitySolver_fconnect_bHYPRE_IdentitySolver(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_IdentitySolver(url, ar,
    _ex);
}

struct bHYPRE_IdentitySolver__object* 
  skel_bHYPRE_IdentitySolver_fcast_bHYPRE_IdentitySolver(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_bHYPRE_IdentitySolver(bi, _ex);
}

struct bHYPRE_MPICommunicator__object* 
  skel_bHYPRE_IdentitySolver_fconnect_bHYPRE_MPICommunicator(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_MPICommunicator(url, ar,
    _ex);
}

struct bHYPRE_MPICommunicator__object* 
  skel_bHYPRE_IdentitySolver_fcast_bHYPRE_MPICommunicator(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_bHYPRE_MPICommunicator(bi, _ex);
}

struct bHYPRE_Operator__object* 
  skel_bHYPRE_IdentitySolver_fconnect_bHYPRE_Operator(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Operator(url, ar, _ex);
}

struct bHYPRE_Operator__object* 
  skel_bHYPRE_IdentitySolver_fcast_bHYPRE_Operator(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Operator(bi, _ex);
}

struct bHYPRE_Solver__object* 
  skel_bHYPRE_IdentitySolver_fconnect_bHYPRE_Solver(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Solver(url, ar, _ex);
}

struct bHYPRE_Solver__object* 
  skel_bHYPRE_IdentitySolver_fcast_bHYPRE_Solver(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Solver(bi, _ex);
}

struct bHYPRE_Vector__object* 
  skel_bHYPRE_IdentitySolver_fconnect_bHYPRE_Vector(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_bHYPRE_Vector(url, ar, _ex);
}

struct bHYPRE_Vector__object* 
  skel_bHYPRE_IdentitySolver_fcast_bHYPRE_Vector(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_bHYPRE_Vector(bi, _ex);
}

struct sidl_BaseClass__object* 
  skel_bHYPRE_IdentitySolver_fconnect_sidl_BaseClass(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_sidl_BaseClass(url, ar, _ex);
}

struct sidl_BaseClass__object* 
  skel_bHYPRE_IdentitySolver_fcast_sidl_BaseClass(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_sidl_BaseClass(bi, _ex);
}

struct sidl_BaseInterface__object* 
  skel_bHYPRE_IdentitySolver_fconnect_sidl_BaseInterface(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_sidl_BaseInterface(url, ar, _ex);
}

struct sidl_BaseInterface__object* 
  skel_bHYPRE_IdentitySolver_fcast_sidl_BaseInterface(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_sidl_BaseInterface(bi, _ex);
}

struct sidl_ClassInfo__object* 
  skel_bHYPRE_IdentitySolver_fconnect_sidl_ClassInfo(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_sidl_ClassInfo(url, ar, _ex);
}

struct sidl_ClassInfo__object* 
  skel_bHYPRE_IdentitySolver_fcast_sidl_ClassInfo(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_sidl_ClassInfo(bi, _ex);
}

struct sidl_RuntimeException__object* 
  skel_bHYPRE_IdentitySolver_fconnect_sidl_RuntimeException(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fconnect_sidl_RuntimeException(url, ar,
    _ex);
}

struct sidl_RuntimeException__object* 
  skel_bHYPRE_IdentitySolver_fcast_sidl_RuntimeException(void* bi,
  sidl_BaseInterface *_ex) { 
  return impl_bHYPRE_IdentitySolver_fcast_sidl_RuntimeException(bi, _ex);
}

struct bHYPRE_IdentitySolver__data*
bHYPRE_IdentitySolver__get_data(bHYPRE_IdentitySolver self)
{
  return (struct bHYPRE_IdentitySolver__data*)(self ? self->d_data : NULL);
}

void bHYPRE_IdentitySolver__set_data(
  bHYPRE_IdentitySolver self,
  struct bHYPRE_IdentitySolver__data* data)
{
  if (self) {
    self->d_data = data;
  }
}
#ifdef __cplusplus
}
#endif