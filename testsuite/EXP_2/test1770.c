#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 3462U;
int64_t x25 = 1634268476964LL;
int8_t x66 = 1;
int64_t x67 = -714LL;
uint64_t t5 = 9258LLU;
volatile int32_t t6 = -4929446;
static int32_t x118 = 294;
uint8_t x120 = UINT8_MAX;
static volatile uint64_t x123 = 996700LLU;
uint8_t x145 = 6U;
int16_t x147 = INT16_MIN;
int64_t x188 = -4567LL;
uint8_t x303 = 6U;
uint16_t x331 = UINT16_MAX;
uint8_t x351 = 1U;
volatile uint64_t t15 = 29609262902812LLU;
static uint16_t x363 = 19U;
static uint8_t x364 = 0U;
int32_t t16 = 257477;
int64_t x377 = 3000712495890147783LL;
volatile uint8_t x386 = UINT8_MAX;
volatile int32_t x387 = 28;
int32_t t20 = 184659429;
uint8_t x450 = 2U;
static volatile int16_t x451 = INT16_MIN;
uint64_t x473 = 1356453408368394663LLU;
static volatile uint64_t t24 = 971226513836LLU;
int16_t x503 = 299;
uint32_t x536 = UINT32_MAX;
volatile uint32_t t27 = 20U;
uint32_t x545 = 25429U;
volatile uint32_t t30 = 654188U;
int64_t x601 = 216786202415128LL;
volatile int32_t x639 = INT32_MIN;
uint16_t x719 = UINT16_MAX;
volatile int64_t t37 = 25131591359936660LL;
int32_t x804 = 978;
volatile int64_t t38 = 26187LL;
int8_t x806 = -56;
volatile uint8_t x843 = 1U;
static int64_t x856 = -1LL;
uint16_t x857 = UINT16_MAX;
int32_t x942 = INT32_MIN;
int16_t x944 = -2701;
uint8_t x1057 = 73U;
volatile int32_t t51 = 113;
int8_t x1073 = INT8_MAX;
volatile uint16_t x1123 = 7286U;
uint8_t x1125 = UINT8_MAX;
uint8_t x1138 = 3U;
int32_t x1139 = INT32_MIN;
volatile int64_t x1152 = -3743LL;
static uint64_t x1221 = UINT64_MAX;
static int64_t x1222 = 8LL;
int8_t x1267 = 30;
volatile uint16_t x1270 = 0U;
static uint16_t x1278 = 3U;
uint64_t x1364 = 106791414604284LLU;
uint8_t x1383 = 2U;
int64_t t69 = 912262626000LL;
volatile int64_t t70 = -108501829125604LL;
uint16_t x1413 = 1U;
static int64_t x1414 = INT64_MIN;
uint16_t x1497 = 11402U;
int8_t x1512 = 0;
int32_t x1536 = 4314;
int16_t x1541 = 0;
volatile int64_t x1543 = INT64_MIN;
volatile uint8_t x1545 = 1U;
int8_t x1560 = 54;
int64_t x1604 = INT64_MAX;
volatile int64_t x1618 = INT64_MIN;
uint8_t x1640 = UINT8_MAX;
uint8_t x1645 = 25U;
uint8_t x1646 = 1U;
static int16_t x1675 = 3451;
int32_t t88 = 131676095;
int16_t x1678 = 1869;
volatile uint32_t x1679 = 85889087U;
uint16_t x1682 = 7U;
uint8_t x1730 = UINT8_MAX;
int64_t x1731 = -396339581746559693LL;
volatile uint64_t t91 = 52LLU;
int8_t x1750 = 5;
static int32_t t93 = -3166263;
int8_t x1793 = 9;
int32_t t94 = -30552089;
uint32_t t96 = 2597158U;
uint8_t x1848 = 2U;
uint32_t x1850 = 3U;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int16_t x3 = 1;
	uint8_t x4 = 15U;
	int32_t t0 = 25980;

	t0 = ((x1>>(x2&x3))-x4);

	if (t0 != 3447) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x26 = INT32_MAX;
	int8_t x27 = 1;
	static volatile uint32_t x28 = UINT32_MAX;
	static volatile int64_t t1 = -6549865LL;

	t1 = ((x25>>(x26&x27))-x28);

	if (t1 != 812839271187LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x41 = 83210U;
	int8_t x42 = INT8_MAX;
	int64_t x43 = INT64_MIN;
	int8_t x44 = 1;
	volatile uint32_t t2 = 1844207U;

	t2 = ((x41>>(x42&x43))-x44);

	if (t2 != 83209U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x65 = INT16_MAX;
	static uint16_t x68 = 21U;
	volatile int32_t t3 = 5739;

	t3 = ((x65>>(x66&x67))-x68);

	if (t3 != 32746) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x77 = UINT8_MAX;
	int64_t x78 = INT64_MIN;
	int8_t x79 = 28;
	int32_t x80 = INT32_MAX;
	static int32_t t4 = 4126938;

	t4 = ((x77>>(x78&x79))-x80);

	if (t4 != -2147483392) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x89 = UINT64_MAX;
	uint16_t x90 = 10549U;
	static uint16_t x91 = 62U;
	int64_t x92 = INT64_MIN;

	t5 = ((x89>>(x90&x91))-x92);

	if (t5 != 9223372036854779903LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x97 = UINT8_MAX;
	uint8_t x98 = 22U;
	int8_t x99 = 2;
	int16_t x100 = -1;

	t6 = ((x97>>(x98&x99))-x100);

	if (t6 != 64) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x117 = 4788338;
	uint64_t x119 = 7030437255851029LLU;
	volatile int32_t t7 = 35;

	t7 = ((x117>>(x118&x119))-x120);

	if (t7 != 299016) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x121 = 11466;
	uint16_t x122 = 3U;
	int8_t x124 = 0;
	int32_t t8 = 3;

	t8 = ((x121>>(x122&x123))-x124);

	if (t8 != 11466) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x146 = 8573;
	int8_t x148 = 0;
	static volatile int32_t t9 = 179;

	t9 = ((x145>>(x146&x147))-x148);

	if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x157 = 24167263662294LL;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 0U;
	int64_t t10 = 2LL;

	t10 = ((x157>>(x158&x159))-x160);

	if (t10 != 24167263662294LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	int64_t t11 = -9370LL;

	t11 = ((x185>>(x186&x187))-x188);

	if (t11 != 4822LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x301 = INT32_MAX;
	int16_t x302 = -1;
	int64_t x304 = -7148844067678LL;
	volatile int64_t t12 = -3691608988LL;

	t12 = ((x301>>(x302&x303))-x304);

	if (t12 != 7148877622109LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x329 = 630217487338LLU;
	int8_t x330 = 1;
	int32_t x332 = INT32_MIN;
	static volatile uint64_t t13 = 94266LLU;

	t13 = ((x329>>(x330&x331))-x332);

	if (t13 != 317256227317LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x349 = 44U;
	int16_t x350 = INT16_MIN;
	int8_t x352 = -1;
	volatile int32_t t14 = -1946;

	t14 = ((x349>>(x350&x351))-x352);

	if (t14 != 45) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x353 = 1LLU;
	uint8_t x354 = 0U;
	int32_t x355 = -11276;
	static uint64_t x356 = UINT64_MAX;

	t15 = ((x353>>(x354&x355))-x356);

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x361 = INT16_MAX;
	uint64_t x362 = 125503LLU;

	t16 = ((x361>>(x362&x363))-x364);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x373 = INT8_MAX;
	static int64_t x374 = INT64_MIN;
	static uint32_t x375 = 65373U;
	uint64_t x376 = 195770062LLU;
	uint64_t t17 = 2328LLU;

	t17 = ((x373>>(x374&x375))-x376);

	if (t17 != 18446744073513781681LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x378 = 1LL;
	int64_t x379 = INT64_MIN;
	static uint16_t x380 = 29213U;
	int64_t t18 = -354660LL;

	t18 = ((x377>>(x378&x379))-x380);

	if (t18 != 3000712495890118570LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x381 = 16U;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 11901U;
	volatile int64_t x384 = INT64_MAX;
	static int64_t t19 = -63209153701960LL;

	t19 = ((x381>>(x382&x383))-x384);

	if (t19 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x385 = INT16_MAX;
	uint16_t x388 = 0U;

	t20 = ((x385>>(x386&x387))-x388);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x401 = INT16_MAX;
	uint32_t x402 = 10U;
	int8_t x403 = -5;
	int32_t x404 = -1;
	int32_t t21 = 7794624;

	t21 = ((x401>>(x402&x403))-x404);

	if (t21 != 32) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x429 = 56U;
	uint64_t x430 = 13301836117574LLU;
	int64_t x431 = INT64_MIN;
	uint8_t x432 = UINT8_MAX;
	int32_t t22 = -183684;

	t22 = ((x429>>(x430&x431))-x432);

	if (t22 != -199) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x449 = 291U;
	int32_t x452 = -78157;
	int32_t t23 = 148077626;

	t23 = ((x449>>(x450&x451))-x452);

	if (t23 != 78448) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x474 = INT32_MIN;
	int32_t x475 = INT32_MAX;
	uint16_t x476 = 13283U;

	t24 = ((x473>>(x474&x475))-x476);

	if (t24 != 1356453408368381380LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x501 = 510691619849LL;
	int32_t x502 = -10230;
	static uint16_t x504 = 18196U;
	static volatile int64_t t25 = 477049512746808435LL;

	t25 = ((x501>>(x502&x503))-x504);

	if (t25 != 498704089LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x509 = UINT16_MAX;
	int8_t x510 = INT8_MAX;
	int16_t x511 = INT16_MIN;
	static int8_t x512 = INT8_MIN;
	int32_t t26 = -4698;

	t26 = ((x509>>(x510&x511))-x512);

	if (t26 != 65663) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x533 = 0;
	volatile int32_t x534 = INT32_MIN;
	int16_t x535 = 12;

	t27 = ((x533>>(x534&x535))-x536);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x546 = INT64_MIN;
	uint16_t x547 = 57U;
	volatile int32_t x548 = INT32_MAX;
	uint32_t t28 = 332U;

	t28 = ((x545>>(x546&x547))-x548);

	if (t28 != 2147509078U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x553 = 19420436LLU;
	static uint32_t x554 = UINT32_MAX;
	volatile int64_t x555 = INT64_MIN;
	int64_t x556 = INT64_MIN;
	volatile uint64_t t29 = 253780707118577024LLU;

	t29 = ((x553>>(x554&x555))-x556);

	if (t29 != 9223372036874196244LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x557 = 232873U;
	int8_t x558 = INT8_MIN;
	int16_t x559 = 4;
	volatile int16_t x560 = 0;

	t30 = ((x557>>(x558&x559))-x560);

	if (t30 != 232873U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x573 = UINT8_MAX;
	volatile int32_t x574 = INT32_MIN;
	static uint16_t x575 = UINT16_MAX;
	uint16_t x576 = UINT16_MAX;
	static int32_t t31 = -24454;

	t31 = ((x573>>(x574&x575))-x576);

	if (t31 != -65280) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x585 = 580026976U;
	volatile int8_t x586 = 3;
	static uint32_t x587 = UINT32_MAX;
	uint8_t x588 = 18U;
	uint32_t t32 = 6U;

	t32 = ((x585>>(x586&x587))-x588);

	if (t32 != 72503354U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x602 = 62U;
	int64_t x603 = INT64_MIN;
	volatile int32_t x604 = -1;
	static volatile int64_t t33 = 12LL;

	t33 = ((x601>>(x602&x603))-x604);

	if (t33 != 216786202415129LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x637 = INT32_MAX;
	uint8_t x638 = UINT8_MAX;
	static uint8_t x640 = UINT8_MAX;
	volatile int32_t t34 = -6;

	t34 = ((x637>>(x638&x639))-x640);

	if (t34 != 2147483392) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x717 = 110;
	static uint64_t x718 = 0LLU;
	volatile uint64_t x720 = 134554853617LLU;
	uint64_t t35 = 11414928389693376LLU;

	t35 = ((x717>>(x718&x719))-x720);

	if (t35 != 18446743939154698109LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x729 = 9835;
	uint8_t x730 = 2U;
	static uint8_t x731 = 0U;
	volatile int32_t x732 = 8131;
	int32_t t36 = -118884001;

	t36 = ((x729>>(x730&x731))-x732);

	if (t36 != 1704) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x737 = 598005377LL;
	volatile uint32_t x738 = 2U;
	uint16_t x739 = 7436U;
	uint32_t x740 = UINT32_MAX;

	t37 = ((x737>>(x738&x739))-x740);

	if (t37 != -3696961918LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x801 = INT64_MAX;
	volatile int32_t x802 = INT32_MIN;
	static volatile uint64_t x803 = 221688LLU;

	t38 = ((x801>>(x802&x803))-x804);

	if (t38 != 9223372036854774829LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x805 = 1;
	static uint16_t x807 = 2U;
	volatile int16_t x808 = INT16_MIN;
	int32_t t39 = 27;

	t39 = ((x805>>(x806&x807))-x808);

	if (t39 != 32769) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x817 = 456911LLU;
	volatile int64_t x818 = 284640060749LL;
	uint8_t x819 = 3U;
	int64_t x820 = INT64_MAX;
	volatile uint64_t t40 = 192575108995338060LLU;

	t40 = ((x817>>(x818&x819))-x820);

	if (t40 != 9223372036855004264LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x841 = 1;
	int32_t x842 = -55179;
	int16_t x844 = 3715;
	int32_t t41 = -52569688;

	t41 = ((x841>>(x842&x843))-x844);

	if (t41 != -3715) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x853 = 17;
	int8_t x854 = 25;
	int8_t x855 = -1;
	volatile int64_t t42 = -335690222429LL;

	t42 = ((x853>>(x854&x855))-x856);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x858 = 11U;
	int8_t x859 = INT8_MIN;
	int16_t x860 = INT16_MIN;
	int32_t t43 = -121031;

	t43 = ((x857>>(x858&x859))-x860);

	if (t43 != 98303) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x889 = INT8_MAX;
	volatile int16_t x890 = INT16_MAX;
	int16_t x891 = INT16_MIN;
	uint64_t x892 = 3116889628LLU;
	uint64_t t44 = 226550021341LLU;

	t44 = ((x889>>(x890&x891))-x892);

	if (t44 != 18446744070592662115LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x913 = 1066677497174769273LLU;
	static int32_t x914 = -1;
	volatile uint8_t x915 = 17U;
	int16_t x916 = -5;
	volatile uint64_t t45 = 2395873542152611261LLU;

	t45 = ((x913>>(x914&x915))-x916);

	if (t45 != 8138103463557LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x941 = 191U;
	volatile int64_t x943 = 1LL;
	int32_t t46 = 1870;

	t46 = ((x941>>(x942&x943))-x944);

	if (t46 != 2892) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x961 = 3U;
	int16_t x962 = INT16_MAX;
	int64_t x963 = INT64_MIN;
	volatile uint64_t x964 = 909858205LLU;
	static volatile uint64_t t47 = 126904844403579087LLU;

	t47 = ((x961>>(x962&x963))-x964);

	if (t47 != 18446744072799693414LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x965 = UINT16_MAX;
	uint8_t x966 = 3U;
	int8_t x967 = INT8_MIN;
	volatile int64_t x968 = 530LL;
	volatile int64_t t48 = 161815045531966LL;

	t48 = ((x965>>(x966&x967))-x968);

	if (t48 != 65005LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x981 = INT8_MAX;
	int8_t x982 = -1;
	uint8_t x983 = 1U;
	int64_t x984 = 188242365421257319LL;
	int64_t t49 = -35995247417807756LL;

	t49 = ((x981>>(x982&x983))-x984);

	if (t49 != -188242365421257256LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1058 = 1U;
	uint8_t x1059 = 15U;
	uint8_t x1060 = 123U;
	int32_t t50 = 31755;

	t50 = ((x1057>>(x1058&x1059))-x1060);

	if (t50 != -87) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1061 = 3U;
	int8_t x1062 = 17;
	uint64_t x1063 = UINT64_MAX;
	int8_t x1064 = -1;

	t51 = ((x1061>>(x1062&x1063))-x1064);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1074 = 595U;
	int64_t x1075 = INT64_MIN;
	static volatile int16_t x1076 = -1;
	volatile int32_t t52 = 10636;

	t52 = ((x1073>>(x1074&x1075))-x1076);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x1089 = 1;
	int64_t x1090 = INT64_MIN;
	static volatile uint8_t x1091 = 0U;
	int16_t x1092 = -479;
	volatile int32_t t53 = 3;

	t53 = ((x1089>>(x1090&x1091))-x1092);

	if (t53 != 480) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x1109 = 9052;
	int8_t x1110 = 4;
	int8_t x1111 = -62;
	int8_t x1112 = INT8_MAX;
	volatile int32_t t54 = -30;

	t54 = ((x1109>>(x1110&x1111))-x1112);

	if (t54 != 8925) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1121 = 15940488LLU;
	int16_t x1122 = INT16_MIN;
	uint32_t x1124 = 330772116U;
	uint64_t t55 = 51311250186045382LLU;

	t55 = ((x1121>>(x1122&x1123))-x1124);

	if (t55 != 18446744073394719988LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1126 = -1;
	volatile int8_t x1127 = 6;
	int16_t x1128 = -8;
	volatile int32_t t56 = 196318605;

	t56 = ((x1125>>(x1126&x1127))-x1128);

	if (t56 != 11) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1129 = 117006635739LLU;
	int32_t x1130 = -4374001;
	uint8_t x1131 = 107U;
	int32_t x1132 = INT32_MIN;
	volatile uint64_t t57 = 7996394LLU;

	t57 = ((x1129>>(x1130&x1131))-x1132);

	if (t57 != 2204615794LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x1137 = UINT64_MAX;
	static uint8_t x1140 = 0U;
	uint64_t t58 = UINT64_MAX;

	t58 = ((x1137>>(x1138&x1139))-x1140);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x1149 = 260653315894LL;
	uint16_t x1150 = 783U;
	int64_t x1151 = INT64_MIN;
	volatile int64_t t59 = -5075LL;

	t59 = ((x1149>>(x1150&x1151))-x1152);

	if (t59 != 260653319637LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x1223 = INT8_MIN;
	int16_t x1224 = -105;
	volatile uint64_t t60 = 117973845LLU;

	t60 = ((x1221>>(x1222&x1223))-x1224);

	if (t60 != 104LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1225 = UINT8_MAX;
	int8_t x1226 = 0;
	int32_t x1227 = -1;
	static int8_t x1228 = INT8_MAX;
	int32_t t61 = 289;

	t61 = ((x1225>>(x1226&x1227))-x1228);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x1265 = 29;
	uint64_t x1266 = 4000955931429124415LLU;
	volatile int16_t x1268 = INT16_MAX;
	volatile int32_t t62 = -128071320;

	t62 = ((x1265>>(x1266&x1267))-x1268);

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x1269 = 675589996;
	volatile int64_t x1271 = INT64_MAX;
	uint8_t x1272 = 10U;
	volatile int32_t t63 = -238406441;

	t63 = ((x1269>>(x1270&x1271))-x1272);

	if (t63 != 675589986) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1277 = INT16_MAX;
	static uint32_t x1279 = 61U;
	static uint32_t x1280 = 195531083U;
	uint32_t t64 = 391332414U;

	t64 = ((x1277>>(x1278&x1279))-x1280);

	if (t64 != 4099452596U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1281 = 3U;
	int32_t x1282 = 0;
	volatile int8_t x1283 = INT8_MIN;
	int16_t x1284 = INT16_MIN;
	int32_t t65 = -24816;

	t65 = ((x1281>>(x1282&x1283))-x1284);

	if (t65 != 32771) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x1289 = UINT32_MAX;
	int32_t x1290 = -50030;
	uint8_t x1291 = 55U;
	volatile uint8_t x1292 = 1U;
	volatile uint32_t t66 = 206U;

	t66 = ((x1289>>(x1290&x1291))-x1292);

	if (t66 != 16382U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x1297 = 274U;
	uint32_t x1298 = 10960018U;
	int32_t x1299 = INT32_MIN;
	int16_t x1300 = INT16_MAX;
	int32_t t67 = -8;

	t67 = ((x1297>>(x1298&x1299))-x1300);

	if (t67 != -32493) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1361 = 2U;
	static uint16_t x1362 = 282U;
	int64_t x1363 = -6505427859LL;
	uint64_t t68 = 150562023468024568LLU;

	t68 = ((x1361>>(x1362&x1363))-x1364);

	if (t68 != 18446637282294947332LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x1381 = INT16_MAX;
	static int32_t x1382 = -1;
	int64_t x1384 = -113589LL;

	t69 = ((x1381>>(x1382&x1383))-x1384);

	if (t69 != 121780LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x1385 = 1U;
	static int8_t x1386 = INT8_MIN;
	uint16_t x1387 = 4U;
	static int64_t x1388 = INT64_MAX;

	t70 = ((x1385>>(x1386&x1387))-x1388);

	if (t70 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x1415 = 590879LLU;
	volatile uint8_t x1416 = 11U;
	volatile int32_t t71 = -4116;

	t71 = ((x1413>>(x1414&x1415))-x1416);

	if (t71 != -10) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1417 = 78U;
	int32_t x1418 = INT32_MIN;
	uint16_t x1419 = UINT16_MAX;
	static uint16_t x1420 = 262U;
	uint32_t t72 = 998706U;

	t72 = ((x1417>>(x1418&x1419))-x1420);

	if (t72 != 4294967112U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x1449 = 8U;
	uint8_t x1450 = UINT8_MAX;
	int64_t x1451 = INT64_MIN;
	volatile uint16_t x1452 = UINT16_MAX;
	volatile int32_t t73 = -513073315;

	t73 = ((x1449>>(x1450&x1451))-x1452);

	if (t73 != -65527) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x1473 = INT32_MAX;
	static int16_t x1474 = INT16_MIN;
	static uint16_t x1475 = 217U;
	int16_t x1476 = 2249;
	int32_t t74 = 711;

	t74 = ((x1473>>(x1474&x1475))-x1476);

	if (t74 != 2147481398) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x1498 = 4;
	int32_t x1499 = -1;
	int32_t x1500 = 2013;
	int32_t t75 = 2;

	t75 = ((x1497>>(x1498&x1499))-x1500);

	if (t75 != -1301) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1509 = 38U;
	uint64_t x1510 = 3516299533164LLU;
	int16_t x1511 = 0;
	int32_t t76 = 1;

	t76 = ((x1509>>(x1510&x1511))-x1512);

	if (t76 != 38) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1521 = UINT32_MAX;
	uint64_t x1522 = 11LLU;
	int64_t x1523 = -9323235896295547LL;
	static uint64_t x1524 = 459516246696LLU;
	uint64_t t77 = 6698751616088LLU;

	t77 = ((x1521>>(x1522&x1523))-x1524);

	if (t77 != 18446743616340788567LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x1533 = 0;
	int8_t x1534 = INT8_MAX;
	volatile uint8_t x1535 = 2U;
	int32_t t78 = -429590;

	t78 = ((x1533>>(x1534&x1535))-x1536);

	if (t78 != -4314) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x1542 = 0U;
	int8_t x1544 = INT8_MAX;
	volatile int32_t t79 = -21272326;

	t79 = ((x1541>>(x1542&x1543))-x1544);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1546 = 10U;
	int64_t x1547 = INT64_MAX;
	static uint64_t x1548 = UINT64_MAX;
	static uint64_t t80 = 148832371425LLU;

	t80 = ((x1545>>(x1546&x1547))-x1548);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x1557 = 3897LL;
	int16_t x1558 = INT16_MIN;
	int8_t x1559 = 0;
	int64_t t81 = 45440962370166LL;

	t81 = ((x1557>>(x1558&x1559))-x1560);

	if (t81 != 3843LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x1569 = UINT64_MAX;
	uint16_t x1570 = 1U;
	int64_t x1571 = INT64_MIN;
	int64_t x1572 = -539421069216975682LL;
	static uint64_t t82 = 136371585376817534LLU;

	t82 = ((x1569>>(x1570&x1571))-x1572);

	if (t82 != 539421069216975681LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1601 = INT8_MAX;
	int8_t x1602 = 11;
	static uint8_t x1603 = 3U;
	volatile int64_t t83 = -3176192LL;

	t83 = ((x1601>>(x1602&x1603))-x1604);

	if (t83 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1617 = UINT32_MAX;
	int16_t x1619 = 314;
	uint16_t x1620 = 342U;
	uint32_t t84 = 26764U;

	t84 = ((x1617>>(x1618&x1619))-x1620);

	if (t84 != 4294966953U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1637 = 28733189U;
	int64_t x1638 = INT64_MAX;
	int8_t x1639 = 5;
	uint32_t t85 = 40828011U;

	t85 = ((x1637>>(x1638&x1639))-x1640);

	if (t85 != 897657U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x1647 = UINT64_MAX;
	volatile uint8_t x1648 = UINT8_MAX;
	volatile int32_t t86 = 11864649;

	t86 = ((x1645>>(x1646&x1647))-x1648);

	if (t86 != -243) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1649 = UINT8_MAX;
	uint64_t x1650 = 219LLU;
	volatile int32_t x1651 = 7190;
	static int16_t x1652 = INT16_MIN;
	int32_t t87 = -346337269;

	t87 = ((x1649>>(x1650&x1651))-x1652);

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1673 = 10U;
	int16_t x1674 = INT16_MIN;
	int32_t x1676 = -1;

	t88 = ((x1673>>(x1674&x1675))-x1676);

	if (t88 != 11) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1677 = 6U;
	int8_t x1680 = INT8_MAX;
	int32_t t89 = -10;

	t89 = ((x1677>>(x1678&x1679))-x1680);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1681 = 4;
	volatile int64_t x1683 = 84LL;
	volatile int32_t x1684 = -106;
	int32_t t90 = 6774143;

	t90 = ((x1681>>(x1682&x1683))-x1684);

	if (t90 != 106) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x1729 = 3714934814LLU;
	static int16_t x1732 = -1;

	t91 = ((x1729>>(x1730&x1731))-x1732);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1749 = 139954583730432LL;
	int8_t x1751 = INT8_MAX;
	uint8_t x1752 = 1U;
	int64_t t92 = 177604671510LL;

	t92 = ((x1749>>(x1750&x1751))-x1752);

	if (t92 != 4373580741575LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1789 = INT8_MAX;
	static int8_t x1790 = INT8_MAX;
	static uint32_t x1791 = 3467U;
	int16_t x1792 = -1;

	t93 = ((x1789>>(x1790&x1791))-x1792);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1794 = 4;
	int32_t x1795 = INT32_MAX;
	int8_t x1796 = 2;

	t94 = ((x1793>>(x1794&x1795))-x1796);

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1797 = 0;
	static int16_t x1798 = 3561;
	int8_t x1799 = 0;
	volatile uint8_t x1800 = 0U;
	volatile int32_t t95 = 18532876;

	t95 = ((x1797>>(x1798&x1799))-x1800);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x1833 = 1469;
	uint32_t x1834 = 2070U;
	int8_t x1835 = INT8_MAX;
	volatile uint32_t x1836 = 1741U;

	t96 = ((x1833>>(x1834&x1835))-x1836);

	if (t96 != 4294965555U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x1841 = 4U;
	int8_t x1842 = 62;
	int16_t x1843 = INT16_MIN;
	static volatile uint8_t x1844 = 0U;
	int32_t t97 = -1807;

	t97 = ((x1841>>(x1842&x1843))-x1844);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1845 = INT64_MAX;
	static uint8_t x1846 = 0U;
	int8_t x1847 = -1;
	volatile int64_t t98 = 291433190831LL;

	t98 = ((x1845>>(x1846&x1847))-x1848);

	if (t98 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1849 = 173954LLU;
	int32_t x1851 = -11;
	uint32_t x1852 = 21576040U;
	volatile uint64_t t99 = 94994278394687LLU;

	t99 = ((x1849>>(x1850&x1851))-x1852);

	if (t99 != 18446744073688062553LLU) { NG(); } else { ; }
	
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

