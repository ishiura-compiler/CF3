#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x29 = -28421686949609866LL;
static int16_t x30 = INT16_MIN;
int64_t x43 = -1LL;
volatile int32_t x44 = -1;
int32_t t1 = 37661487;
int8_t x86 = INT8_MIN;
volatile int32_t t2 = 9;
int64_t x236 = INT64_MIN;
static uint64_t x247 = UINT64_MAX;
uint64_t x248 = 492770310883LLU;
int64_t x401 = INT64_MIN;
static uint64_t x429 = UINT64_MAX;
uint8_t x481 = 50U;
int32_t x615 = 0;
volatile int32_t t11 = -74485;
static int16_t x689 = INT16_MIN;
int32_t x691 = -1;
static uint64_t x843 = UINT64_MAX;
uint32_t t17 = 1201390U;
int64_t x993 = -373915183LL;
uint64_t x994 = UINT64_MAX;
int64_t x996 = 1LL;
static int16_t x1018 = INT16_MIN;
uint32_t x1074 = UINT32_MAX;
static int32_t x1076 = INT32_MIN;
volatile int32_t x1175 = INT32_MIN;
static int16_t x1213 = -7710;
volatile int32_t x1362 = INT32_MIN;
int32_t x1363 = INT32_MIN;
uint64_t x1382 = UINT64_MAX;
static int32_t x1384 = INT32_MIN;
uint32_t x1457 = 1037714468U;
static int16_t x1460 = INT16_MIN;
uint64_t x2082 = UINT64_MAX;
uint32_t t31 = 653U;
volatile int32_t t32 = 4366;
int32_t x2426 = -1;
static volatile int32_t t34 = -33886182;
static int8_t x2690 = INT8_MIN;
int64_t t37 = 52LL;
int8_t x3131 = -1;
uint16_t x3233 = UINT16_MAX;
volatile int32_t x3442 = -1;
int64_t x3443 = -1LL;
uint64_t x3469 = UINT64_MAX;
static int16_t x3470 = -1;
static uint64_t t43 = 1417090821057529851LLU;
volatile int32_t x3477 = 19;
int8_t x3478 = INT8_MIN;
int8_t x3479 = INT8_MIN;
static int16_t x3783 = INT16_MIN;
volatile int64_t t46 = -1724LL;
int8_t x3922 = -1;
int64_t x3977 = INT64_MIN;
uint32_t x3978 = UINT32_MAX;
int16_t x4042 = -1;
static int32_t x4115 = INT32_MIN;
static uint64_t t50 = 4326LLU;
static volatile int64_t x4362 = -1LL;
int32_t x4369 = INT32_MAX;
int16_t x4371 = INT16_MIN;
static int8_t x4372 = 1;
int64_t t53 = 1342LL;
int16_t x4595 = -1;
int32_t x4700 = INT32_MIN;
uint8_t x4837 = 0U;
int64_t t59 = -253607LL;
static int64_t x5171 = -1LL;
uint32_t x5273 = UINT32_MAX;
volatile int32_t t63 = -134635;
static uint64_t x5374 = UINT64_MAX;
volatile uint64_t t65 = 401132LLU;
static int32_t x5425 = 6770081;
static int8_t x5428 = INT8_MIN;
int32_t x5509 = INT32_MIN;
static uint8_t x5511 = 0U;
int32_t x5521 = -1;
uint16_t x5580 = 22042U;
volatile uint64_t x5627 = UINT64_MAX;
int16_t x5659 = -1;
static uint64_t x5727 = UINT64_MAX;
static uint64_t x5941 = 21944463LLU;
static volatile uint64_t t76 = 132413758788LLU;
int8_t x6015 = -1;
static int32_t t77 = -1572112;
static int16_t x6301 = INT16_MIN;
static uint32_t x6303 = UINT32_MAX;
int64_t x6557 = -1661788105142646LL;
static int64_t x6790 = -1LL;
int8_t x6791 = -1;
int16_t x6829 = -1;
volatile int32_t x6830 = INT32_MIN;
volatile uint64_t x6873 = 1LLU;
static uint64_t x6876 = UINT64_MAX;
static uint64_t x7217 = UINT64_MAX;
volatile int32_t x7220 = INT32_MAX;
int32_t x7230 = -1;
static volatile int32_t t89 = 288952;
static int8_t x7396 = -3;
int32_t x7458 = -1;
volatile int32_t t93 = -23523;
int8_t x7562 = -1;
int8_t x7718 = -1;
static int8_t x7758 = -1;
volatile uint64_t x7759 = UINT64_MAX;


void f0(void) {
	static int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MAX;
	volatile int64_t t0 = 122205707745603728LL;

	t0 = (x29/((x30==x31)*x32));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x41 = INT32_MAX;
	int64_t x42 = -1LL;

	t1 = (x41/((x42==x43)*x44));

	if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x85 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	int32_t x88 = 119;

	t2 = (x85/((x86==x87)*x88));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MAX;
	int32_t x235 = INT32_MAX;
	uint64_t t3 = 1LLU;

	t3 = (x233/((x234==x235)*x236));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x245 = INT64_MIN;
	static volatile int8_t x246 = -1;
	volatile uint64_t t4 = 231531LLU;

	t4 = (x245/((x246==x247)*x248));

	if (t4 != 18717385LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x289 = 86285547237096306LL;
	int8_t x290 = -1;
	static uint64_t x291 = UINT64_MAX;
	static uint64_t x292 = 44636851679936LLU;
	static volatile uint64_t t5 = 16208LLU;

	t5 = (x289/((x290==x291)*x292));

	if (t5 != 1933LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x301 = INT32_MIN;
	volatile int8_t x302 = -1;
	static int32_t x303 = -1;
	int64_t x304 = INT64_MIN;
	volatile int64_t t6 = 28298015LL;

	t6 = (x301/((x302==x303)*x304));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x402 = INT16_MIN;
	volatile int16_t x403 = INT16_MIN;
	uint8_t x404 = 64U;
	volatile int64_t t7 = -788572701264LL;

	t7 = (x401/((x402==x403)*x404));

	if (t7 != -144115188075855872LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x430 = -1;
	static int16_t x431 = -1;
	int32_t x432 = INT32_MAX;
	volatile uint64_t t8 = 538745611LLU;

	t8 = (x429/((x430==x431)*x432));

	if (t8 != 8589934596LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x482 = -1;
	static volatile int16_t x483 = -1;
	uint8_t x484 = UINT8_MAX;
	int32_t t9 = -12506;

	t9 = (x481/((x482==x483)*x484));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x509 = 170782431;
	static uint16_t x510 = UINT16_MAX;
	uint16_t x511 = UINT16_MAX;
	int8_t x512 = -1;
	volatile int32_t t10 = -180561;

	t10 = (x509/((x510==x511)*x512));

	if (t10 != -170782431) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x613 = UINT8_MAX;
	volatile uint16_t x614 = 0U;
	int16_t x616 = -8629;

	t11 = (x613/((x614==x615)*x616));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x649 = -789;
	static int8_t x650 = -1;
	int32_t x651 = -1;
	static int32_t x652 = -1;
	int32_t t12 = 409;

	t12 = (x649/((x650==x651)*x652));

	if (t12 != 789) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x690 = -1;
	int32_t x692 = INT32_MIN;
	volatile int32_t t13 = -4513;

	t13 = (x689/((x690==x691)*x692));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x713 = UINT64_MAX;
	int16_t x714 = -1;
	static int32_t x715 = -1;
	static int16_t x716 = -1;
	uint64_t t14 = 814053901759758LLU;

	t14 = (x713/((x714==x715)*x716));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x841 = -1;
	uint64_t x842 = UINT64_MAX;
	int16_t x844 = INT16_MIN;
	int32_t t15 = 216;

	t15 = (x841/((x842==x843)*x844));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x853 = UINT32_MAX;
	int32_t x854 = -1;
	static int32_t x855 = -1;
	int16_t x856 = INT16_MIN;
	static volatile uint32_t t16 = 596409185U;

	t16 = (x853/((x854==x855)*x856));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x949 = 6943U;
	static uint32_t x950 = UINT32_MAX;
	uint32_t x951 = UINT32_MAX;
	int16_t x952 = -2401;

	t17 = (x949/((x950==x951)*x952));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x995 = -1;
	int64_t t18 = -9007651404121470LL;

	t18 = (x993/((x994==x995)*x996));

	if (t18 != -373915183LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x1017 = UINT8_MAX;
	volatile int16_t x1019 = INT16_MIN;
	int64_t x1020 = -2716LL;
	int64_t t19 = 45789629369518LL;

	t19 = (x1017/((x1018==x1019)*x1020));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1073 = INT16_MIN;
	int8_t x1075 = -1;
	volatile int32_t t20 = 8540233;

	t20 = (x1073/((x1074==x1075)*x1076));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1149 = INT64_MAX;
	static int16_t x1150 = -1;
	uint32_t x1151 = UINT32_MAX;
	static int16_t x1152 = INT16_MAX;
	volatile int64_t t21 = -150784139LL;

	t21 = (x1149/((x1150==x1151)*x1152));

	if (t21 != 281483566907400LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1173 = 6;
	int32_t x1174 = INT32_MIN;
	uint16_t x1176 = UINT16_MAX;
	volatile int32_t t22 = 107034131;

	t22 = (x1173/((x1174==x1175)*x1176));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1214 = -1;
	volatile uint32_t x1215 = UINT32_MAX;
	uint64_t x1216 = UINT64_MAX;
	volatile uint64_t t23 = 2820LLU;

	t23 = (x1213/((x1214==x1215)*x1216));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1241 = INT32_MAX;
	int8_t x1242 = 1;
	int8_t x1243 = 1;
	int8_t x1244 = INT8_MIN;
	static volatile int32_t t24 = -16694336;

	t24 = (x1241/((x1242==x1243)*x1244));

	if (t24 != -16777215) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1361 = 16;
	int32_t x1364 = INT32_MIN;
	int32_t t25 = -1;

	t25 = (x1361/((x1362==x1363)*x1364));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1381 = 70U;
	int8_t x1383 = -1;
	static int32_t t26 = 442;

	t26 = (x1381/((x1382==x1383)*x1384));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1458 = -1LL;
	int64_t x1459 = -1LL;
	uint32_t t27 = 868U;

	t27 = (x1457/((x1458==x1459)*x1460));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1537 = -7530;
	volatile int8_t x1538 = INT8_MIN;
	int8_t x1539 = INT8_MIN;
	uint64_t x1540 = 265981915674LLU;
	volatile uint64_t t28 = 256631347LLU;

	t28 = (x1537/((x1538==x1539)*x1540));

	if (t28 != 69353377LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1817 = INT32_MAX;
	int32_t x1818 = INT32_MIN;
	int32_t x1819 = INT32_MIN;
	int8_t x1820 = -1;
	volatile int32_t t29 = -5;

	t29 = (x1817/((x1818==x1819)*x1820));

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1857 = INT32_MAX;
	static volatile int8_t x1858 = -1;
	volatile int64_t x1859 = -1LL;
	int16_t x1860 = INT16_MAX;
	volatile int32_t t30 = 1;

	t30 = (x1857/((x1858==x1859)*x1860));

	if (t30 != 65538) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2081 = UINT32_MAX;
	static uint64_t x2083 = UINT64_MAX;
	volatile uint8_t x2084 = 57U;

	t31 = (x2081/((x2082==x2083)*x2084));

	if (t31 != 75350303U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2225 = 4U;
	uint32_t x2226 = UINT32_MAX;
	volatile uint32_t x2227 = UINT32_MAX;
	volatile uint16_t x2228 = UINT16_MAX;

	t32 = (x2225/((x2226==x2227)*x2228));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2389 = -1LL;
	static int32_t x2390 = -1;
	static int64_t x2391 = -1LL;
	int32_t x2392 = 4271847;
	static volatile int64_t t33 = 1116171296291LL;

	t33 = (x2389/((x2390==x2391)*x2392));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2425 = 1;
	int8_t x2427 = -1;
	static int32_t x2428 = INT32_MIN;

	t34 = (x2425/((x2426==x2427)*x2428));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2513 = INT8_MIN;
	static volatile int32_t x2514 = -1;
	static uint64_t x2515 = UINT64_MAX;
	uint8_t x2516 = UINT8_MAX;
	volatile int32_t t35 = 4091;

	t35 = (x2513/((x2514==x2515)*x2516));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2689 = -1;
	int8_t x2691 = INT8_MIN;
	int32_t x2692 = -1;
	int32_t t36 = 282;

	t36 = (x2689/((x2690==x2691)*x2692));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2989 = 5074;
	int32_t x2990 = -1;
	int32_t x2991 = -1;
	static int64_t x2992 = INT64_MAX;

	t37 = (x2989/((x2990==x2991)*x2992));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3121 = -119;
	int8_t x3122 = -1;
	static volatile uint64_t x3123 = UINT64_MAX;
	uint16_t x3124 = 1009U;
	volatile int32_t t38 = 5448;

	t38 = (x3121/((x3122==x3123)*x3124));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x3129 = 28U;
	uint64_t x3130 = UINT64_MAX;
	uint16_t x3132 = 4220U;
	static volatile int32_t t39 = 28865602;

	t39 = (x3129/((x3130==x3131)*x3132));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x3234 = UINT32_MAX;
	static uint32_t x3235 = UINT32_MAX;
	uint32_t x3236 = 11522837U;
	uint32_t t40 = 460294612U;

	t40 = (x3233/((x3234==x3235)*x3236));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x3337 = INT16_MIN;
	int8_t x3338 = -1;
	int32_t x3339 = -1;
	uint8_t x3340 = UINT8_MAX;
	int32_t t41 = 368;

	t41 = (x3337/((x3338==x3339)*x3340));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x3441 = -1LL;
	int8_t x3444 = INT8_MIN;
	volatile int64_t t42 = 2992148140892LL;

	t42 = (x3441/((x3442==x3443)*x3444));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x3471 = -1LL;
	int8_t x3472 = INT8_MIN;

	t43 = (x3469/((x3470==x3471)*x3472));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3480 = 794813U;
	static uint32_t t44 = 1885U;

	t44 = (x3477/((x3478==x3479)*x3480));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x3781 = 38U;
	static int16_t x3782 = INT16_MIN;
	int8_t x3784 = INT8_MIN;
	static uint32_t t45 = 111824U;

	t45 = (x3781/((x3782==x3783)*x3784));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3825 = INT64_MIN;
	static int16_t x3826 = -1;
	int16_t x3827 = -1;
	static int8_t x3828 = INT8_MIN;

	t46 = (x3825/((x3826==x3827)*x3828));

	if (t46 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x3921 = UINT16_MAX;
	volatile int16_t x3923 = -1;
	volatile int8_t x3924 = INT8_MIN;
	static int32_t t47 = -6499;

	t47 = (x3921/((x3922==x3923)*x3924));

	if (t47 != -511) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3979 = -1;
	int32_t x3980 = INT32_MAX;
	int64_t t48 = 8556524675939LL;

	t48 = (x3977/((x3978==x3979)*x3980));

	if (t48 != -4294967298LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x4041 = 1U;
	volatile int32_t x4043 = -1;
	volatile int8_t x4044 = 4;
	volatile uint32_t t49 = 841U;

	t49 = (x4041/((x4042==x4043)*x4044));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x4113 = 80949833LLU;
	static volatile int32_t x4114 = INT32_MIN;
	int64_t x4116 = INT64_MIN;

	t50 = (x4113/((x4114==x4115)*x4116));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x4361 = 30;
	volatile uint64_t x4363 = UINT64_MAX;
	static uint8_t x4364 = UINT8_MAX;
	int32_t t51 = -64814195;

	t51 = (x4361/((x4362==x4363)*x4364));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x4370 = INT16_MIN;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x4369/((x4370==x4371)*x4372));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4445 = UINT8_MAX;
	volatile int64_t x4446 = INT64_MAX;
	int64_t x4447 = INT64_MAX;
	int64_t x4448 = INT64_MIN;

	t53 = (x4445/((x4446==x4447)*x4448));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x4521 = -1LL;
	volatile int64_t x4522 = INT64_MIN;
	volatile int64_t x4523 = INT64_MIN;
	int64_t x4524 = -1LL;
	volatile int64_t t54 = -123711160077328LL;

	t54 = (x4521/((x4522==x4523)*x4524));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x4593 = UINT32_MAX;
	uint64_t x4594 = UINT64_MAX;
	static int16_t x4596 = -2;
	volatile uint32_t t55 = 1581426103U;

	t55 = (x4593/((x4594==x4595)*x4596));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4697 = 0;
	int64_t x4698 = -1LL;
	int16_t x4699 = -1;
	int32_t t56 = 16647315;

	t56 = (x4697/((x4698==x4699)*x4700));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x4838 = -1LL;
	int16_t x4839 = -1;
	volatile int16_t x4840 = 1;
	volatile int32_t t57 = -26;

	t57 = (x4837/((x4838==x4839)*x4840));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4913 = 0U;
	static int64_t x4914 = -1LL;
	int8_t x4915 = -1;
	uint16_t x4916 = UINT16_MAX;
	int32_t t58 = -153;

	t58 = (x4913/((x4914==x4915)*x4916));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4921 = UINT16_MAX;
	volatile int64_t x4922 = INT64_MIN;
	static int64_t x4923 = INT64_MIN;
	int64_t x4924 = 13469389226855484LL;

	t59 = (x4921/((x4922==x4923)*x4924));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x5041 = INT32_MIN;
	static uint32_t x5042 = UINT32_MAX;
	int16_t x5043 = -1;
	int8_t x5044 = INT8_MIN;
	int32_t t60 = 3374;

	t60 = (x5041/((x5042==x5043)*x5044));

	if (t60 != 16777216) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x5169 = 873419LLU;
	int8_t x5170 = -1;
	static uint64_t x5172 = 22627LLU;
	volatile uint64_t t61 = 6345531325LLU;

	t61 = (x5169/((x5170==x5171)*x5172));

	if (t61 != 38LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x5274 = -1;
	int8_t x5275 = -1;
	int16_t x5276 = INT16_MIN;
	volatile uint32_t t62 = 485U;

	t62 = (x5273/((x5274==x5275)*x5276));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x5325 = -1;
	int8_t x5326 = -1;
	int32_t x5327 = -1;
	int16_t x5328 = INT16_MIN;

	t63 = (x5325/((x5326==x5327)*x5328));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x5345 = INT64_MIN;
	uint8_t x5346 = UINT8_MAX;
	uint8_t x5347 = UINT8_MAX;
	int64_t x5348 = INT64_MIN;
	static int64_t t64 = 3906914025895LL;

	t64 = (x5345/((x5346==x5347)*x5348));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x5373 = INT32_MIN;
	static int16_t x5375 = -1;
	uint64_t x5376 = 43155475702LLU;

	t65 = (x5373/((x5374==x5375)*x5376));

	if (t65 != 427448516LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x5417 = -1LL;
	int16_t x5418 = -1;
	int32_t x5419 = -1;
	int32_t x5420 = 5191;
	int64_t t66 = 847566124532010993LL;

	t66 = (x5417/((x5418==x5419)*x5420));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x5426 = -1;
	uint64_t x5427 = UINT64_MAX;
	int32_t t67 = 62874;

	t67 = (x5425/((x5426==x5427)*x5428));

	if (t67 != -52891) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x5510 = 0;
	static int8_t x5512 = INT8_MIN;
	volatile int32_t t68 = -282;

	t68 = (x5509/((x5510==x5511)*x5512));

	if (t68 != 16777216) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5522 = -1;
	int16_t x5523 = -1;
	uint16_t x5524 = UINT16_MAX;
	int32_t t69 = -26220;

	t69 = (x5521/((x5522==x5523)*x5524));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x5577 = 0U;
	uint32_t x5578 = UINT32_MAX;
	int8_t x5579 = -1;
	int32_t t70 = 145;

	t70 = (x5577/((x5578==x5579)*x5580));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x5585 = -247;
	uint64_t x5586 = UINT64_MAX;
	int64_t x5587 = -1LL;
	int16_t x5588 = INT16_MIN;
	static int32_t t71 = 14436;

	t71 = (x5585/((x5586==x5587)*x5588));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x5625 = 15886841763LL;
	static uint64_t x5626 = UINT64_MAX;
	int64_t x5628 = -1LL;
	static volatile int64_t t72 = -2922914LL;

	t72 = (x5625/((x5626==x5627)*x5628));

	if (t72 != -15886841763LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x5657 = 12U;
	int16_t x5658 = -1;
	volatile int32_t x5660 = -106001962;
	volatile int32_t t73 = 8834;

	t73 = (x5657/((x5658==x5659)*x5660));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5725 = INT32_MAX;
	uint64_t x5726 = UINT64_MAX;
	volatile int64_t x5728 = -1LL;
	volatile int64_t t74 = -6195LL;

	t74 = (x5725/((x5726==x5727)*x5728));

	if (t74 != -2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5877 = -6;
	static int32_t x5878 = -1;
	static int32_t x5879 = -1;
	static int16_t x5880 = 2012;
	volatile int32_t t75 = -6795770;

	t75 = (x5877/((x5878==x5879)*x5880));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5942 = UINT64_MAX;
	int64_t x5943 = -1LL;
	int8_t x5944 = INT8_MIN;

	t76 = (x5941/((x5942==x5943)*x5944));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x6013 = INT8_MIN;
	int8_t x6014 = -1;
	int8_t x6016 = -1;

	t77 = (x6013/((x6014==x6015)*x6016));

	if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x6065 = 3U;
	int32_t x6066 = -1;
	static int64_t x6067 = -1LL;
	uint16_t x6068 = UINT16_MAX;
	volatile int32_t t78 = 800302925;

	t78 = (x6065/((x6066==x6067)*x6068));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x6302 = UINT32_MAX;
	volatile uint8_t x6304 = 1U;
	volatile int32_t t79 = 12;

	t79 = (x6301/((x6302==x6303)*x6304));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x6401 = INT32_MIN;
	int16_t x6402 = INT16_MIN;
	int16_t x6403 = INT16_MIN;
	int64_t x6404 = INT64_MAX;
	static int64_t t80 = -3589593601LL;

	t80 = (x6401/((x6402==x6403)*x6404));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x6558 = INT8_MIN;
	int8_t x6559 = INT8_MIN;
	volatile uint32_t x6560 = 1984038U;
	int64_t t81 = 3481173222003006LL;

	t81 = (x6557/((x6558==x6559)*x6560));

	if (t81 != -837578768LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x6593 = INT64_MAX;
	int32_t x6594 = INT32_MIN;
	static int32_t x6595 = INT32_MIN;
	int8_t x6596 = INT8_MIN;
	int64_t t82 = 608619LL;

	t82 = (x6593/((x6594==x6595)*x6596));

	if (t82 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x6677 = 1;
	uint8_t x6678 = UINT8_MAX;
	volatile uint8_t x6679 = UINT8_MAX;
	static int32_t x6680 = INT32_MIN;
	volatile int32_t t83 = 31;

	t83 = (x6677/((x6678==x6679)*x6680));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x6789 = INT64_MIN;
	uint8_t x6792 = UINT8_MAX;
	int64_t t84 = -2468LL;

	t84 = (x6789/((x6790==x6791)*x6792));

	if (t84 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x6831 = INT32_MIN;
	volatile uint64_t x6832 = 1785747221027161538LLU;
	static volatile uint64_t t85 = 127000LLU;

	t85 = (x6829/((x6830==x6831)*x6832));

	if (t85 != 10LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x6874 = INT32_MIN;
	int32_t x6875 = INT32_MIN;
	uint64_t t86 = 45927LLU;

	t86 = (x6873/((x6874==x6875)*x6876));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x6981 = 468386613;
	volatile int64_t x6982 = INT64_MIN;
	static int64_t x6983 = INT64_MIN;
	uint16_t x6984 = 2U;
	int32_t t87 = -65041576;

	t87 = (x6981/((x6982==x6983)*x6984));

	if (t87 != 234193306) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x7218 = INT32_MIN;
	volatile int32_t x7219 = INT32_MIN;
	uint64_t t88 = 1411135876330720LLU;

	t88 = (x7217/((x7218==x7219)*x7220));

	if (t88 != 8589934596LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x7229 = 10148U;
	int16_t x7231 = -1;
	int8_t x7232 = -5;

	t89 = (x7229/((x7230==x7231)*x7232));

	if (t89 != -2029) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x7393 = INT8_MIN;
	volatile int32_t x7394 = -1;
	static volatile int64_t x7395 = -1LL;
	int32_t t90 = -120034;

	t90 = (x7393/((x7394==x7395)*x7396));

	if (t90 != 42) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x7405 = INT32_MIN;
	int64_t x7406 = -1LL;
	int16_t x7407 = -1;
	int64_t x7408 = INT64_MAX;
	static int64_t t91 = 1292LL;

	t91 = (x7405/((x7406==x7407)*x7408));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x7457 = 68U;
	int8_t x7459 = -1;
	int16_t x7460 = 4;
	volatile int32_t t92 = 12737;

	t92 = (x7457/((x7458==x7459)*x7460));

	if (t92 != 17) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x7513 = 21U;
	static uint32_t x7514 = UINT32_MAX;
	int8_t x7515 = -1;
	int8_t x7516 = INT8_MIN;

	t93 = (x7513/((x7514==x7515)*x7516));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x7545 = 421258785;
	int16_t x7546 = INT16_MIN;
	static int16_t x7547 = INT16_MIN;
	static int32_t x7548 = INT32_MIN;
	static volatile int32_t t94 = -126194;

	t94 = (x7545/((x7546==x7547)*x7548));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x7561 = -38532372LL;
	static uint64_t x7563 = UINT64_MAX;
	int16_t x7564 = INT16_MAX;
	static volatile int64_t t95 = -1202866554046LL;

	t95 = (x7561/((x7562==x7563)*x7564));

	if (t95 != -1175LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x7581 = 27228;
	static uint32_t x7582 = 1U;
	uint16_t x7583 = 1U;
	volatile int8_t x7584 = -1;
	int32_t t96 = 1;

	t96 = (x7581/((x7582==x7583)*x7584));

	if (t96 != -27228) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x7717 = INT32_MIN;
	static uint64_t x7719 = UINT64_MAX;
	int16_t x7720 = INT16_MAX;
	volatile int32_t t97 = -14922;

	t97 = (x7717/((x7718==x7719)*x7720));

	if (t97 != -65538) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x7737 = 522U;
	static int8_t x7738 = -1;
	static int16_t x7739 = -1;
	int16_t x7740 = -1;
	int32_t t98 = -11772237;

	t98 = (x7737/((x7738==x7739)*x7740));

	if (t98 != -522) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x7757 = INT64_MIN;
	int32_t x7760 = -2;
	int64_t t99 = 759814452140LL;

	t99 = (x7757/((x7758==x7759)*x7760));

	if (t99 != 4611686018427387904LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

