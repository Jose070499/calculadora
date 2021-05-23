/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADOR_H_RPCGEN
#define _CALCULADOR_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct inputs {
	float num1;
	float num2;
	char operador;
};
typedef struct inputs inputs;

#define calculador_pro 0x2fffffff
#define calculador_x 1

#if defined(__STDC__) || defined(__cplusplus)
#define Sum 1
extern  float * sum_1(inputs *, CLIENT *);
extern  float * sum_1_svc(inputs *, struct svc_req *);
#define Res 2
extern  float * res_1(inputs *, CLIENT *);
extern  float * res_1_svc(inputs *, struct svc_req *);
#define Mul 3
extern  float * mul_1(inputs *, CLIENT *);
extern  float * mul_1_svc(inputs *, struct svc_req *);
#define Div 4
extern  float * div_1(inputs *, CLIENT *);
extern  float * div_1_svc(inputs *, struct svc_req *);
extern int calculador_pro_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define Sum 1
extern  float * sum_1();
extern  float * sum_1_svc();
#define Res 2
extern  float * res_1();
extern  float * res_1_svc();
#define Mul 3
extern  float * mul_1();
extern  float * mul_1_svc();
#define Div 4
extern  float * div_1();
extern  float * div_1_svc();
extern int calculador_pro_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_inputs (XDR *, inputs*);

#else /* K&R C */
extern bool_t xdr_inputs ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADOR_H_RPCGEN */
