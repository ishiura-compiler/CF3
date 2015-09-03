#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MIN;
volatile int64_t t2 = 544741225428833239LL;
volatile uint32_t t3 = 173567293U;
static volatile int32_t t5 = -3824719;
int16_t x31 = INT16_MIN;
int32_t x32 = -2;
int32_t t7 = 989552754;
static uint16_t x46 = 31208U;
int8_t x48 = -10;
static int16_t x120 = INT16_MIN;
int32_t x139 = INT32_MIN;
int8_t x152 = INT8_MAX;
int16_t x166 = -1;
int32_t x183 = -1;
static uint32_t t24 = 2605395U;
static volatile int32_t x198 = 377771380;
volatile uint64_t t27 = 1409798681786885LLU;
uint64_t x206 = UINT64_MAX;
static volatile uint32_t x208 = 56U;
int32_t x226 = INT32_MIN;
uint16_t x273 = UINT16_MAX;
int32_t x279 = 182476;
volatile int32_t x286 = 14;
static int32_t x305 = INT32_MAX;
static int32_t x308 = -14717;
uint64_t x319 = UINT64_MAX;
volatile int64_t x346 = INT64_MIN;
uint8_t x350 = 78U;
uint64_t x351 = UINT64_MAX;
uint64_t t42 = 33861712552620879LLU;
int32_t t43 = 82025;
uint64_t x363 = 7537899198LLU;
static volatile uint8_t x408 = UINT8_MAX;
uint8_t x409 = UINT8_MAX;
uint32_t x411 = UINT32_MAX;
int64_t x413 = -2320840133LL;
uint32_t x418 = 4U;
static volatile int8_t x425 = INT8_MIN;
volatile uint64_t t52 = 36922LLU;
volatile int8_t x433 = -5;
int8_t x436 = INT8_MAX;
int16_t x442 = INT16_MIN;
uint64_t x444 = UINT64_MAX;
int64_t x446 = -1LL;
int32_t x457 = -4075073;
volatile int16_t x458 = -1;
uint64_t t56 = 104208629LLU;
int64_t x465 = INT64_MAX;
int8_t x476 = -1;
uint16_t x481 = UINT16_MAX;
uint16_t x484 = UINT16_MAX;
static int32_t t59 = 691;
uint32_t x490 = 104201U;
volatile uint32_t x491 = UINT32_MAX;
volatile int32_t x501 = INT32_MIN;
volatile uint64_t t61 = 1070153231684618359LLU;
int32_t x505 = INT32_MIN;
uint64_t t64 = 21LLU;
static volatile int16_t x549 = -9206;
uint64_t t66 = 29144324243350432LLU;
int32_t x575 = 295785;
int32_t x588 = -1;
volatile int32_t x603 = 92815;
int32_t x604 = -1;
int8_t x608 = INT8_MIN;
static volatile int64_t t74 = -2LL;
int16_t x681 = -1;
int64_t x698 = INT64_MAX;
volatile int32_t x704 = INT32_MAX;
volatile uint64_t x714 = 1823038994LLU;
volatile uint64_t x725 = 62219582064427133LLU;
uint32_t x730 = 39771534U;
int8_t x731 = INT8_MAX;
int64_t x732 = -1LL;
uint64_t x733 = 2LLU;
int16_t x736 = INT16_MAX;
int8_t x749 = INT8_MIN;
static volatile int64_t t88 = -585489436LL;
int64_t t89 = -137154094161LL;
uint32_t x782 = 6319U;
int64_t x789 = -1LL;
static int32_t x791 = -1;
volatile uint16_t x825 = 4013U;
uint64_t t96 = 648697LLU;
static volatile uint8_t x844 = 37U;
volatile int64_t t97 = 12891527LL;
volatile int16_t x864 = INT16_MAX;


void f0(void) {
	int32_t x6 = -1;
	uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 22U;
	uint64_t t0 = 835574252985807781LLU;

	t0 = ((x5%x6)/(x7/x8));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -210057;
	int32_t x10 = INT32_MIN;
	volatile int32_t x11 = INT32_MIN;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t1 = -739715;

	t1 = ((x9%x10)/(x11/x12));

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MAX;
	int16_t x14 = -1997;
	static int32_t x15 = INT32_MAX;
	uint8_t x16 = 5U;

	t2 = ((x13%x14)/(x15/x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -242;
	uint32_t x18 = 586U;
	static int32_t x19 = INT32_MAX;
	int16_t x20 = INT16_MIN;

	t3 = ((x17%x18)/(x19/x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int64_t x22 = -1LL;
	volatile int16_t x23 = -1;
	uint64_t x24 = 4958517327572939232LLU;
	uint64_t t4 = 316010014473LLU;

	t4 = ((x21%x22)/(x23/x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;

	t5 = ((x25%x26)/(x27/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 1100U;
	int32_t x30 = 33;
	int32_t t6 = 533177864;

	t6 = ((x29%x30)/(x31/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 6558U;
	int16_t x34 = 6;
	uint16_t x35 = 1U;
	int16_t x36 = -1;

	t7 = ((x33%x34)/(x35/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = 1;
	int32_t x43 = INT32_MIN;
	int64_t x44 = -25496722LL;
	int64_t t8 = -4187129974LL;

	t8 = ((x41%x42)/(x43/x44));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = -1;
	volatile uint32_t x47 = UINT32_MAX;
	uint32_t t9 = UINT32_MAX;

	t9 = ((x45%x46)/(x47/x48));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = 77U;
	int8_t x70 = -1;
	static int64_t x71 = INT64_MAX;
	volatile uint16_t x72 = 12614U;
	int64_t t10 = 1735827522LL;

	t10 = ((x69%x70)/(x71/x72));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	int64_t x75 = -156894977LL;
	static int8_t x76 = INT8_MIN;
	int64_t t11 = -6781608LL;

	t11 = ((x73%x74)/(x75/x76));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x81 = -1;
	volatile int64_t x82 = -1LL;
	static int16_t x83 = INT16_MIN;
	volatile int16_t x84 = -1;
	volatile int64_t t12 = 19365887LL;

	t12 = ((x81%x82)/(x83/x84));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x109 = -1;
	int8_t x110 = INT8_MAX;
	volatile int8_t x111 = INT8_MIN;
	uint32_t x112 = 66216252U;
	uint32_t t13 = 209684099U;

	t13 = ((x109%x110)/(x111/x112));

	if (t13 != 67108863U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x117 = UINT64_MAX;
	uint64_t x118 = UINT64_MAX;
	static int64_t x119 = INT64_MIN;
	static uint64_t t14 = 520377341LLU;

	t14 = ((x117%x118)/(x119/x120));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x125 = 2784U;
	int8_t x126 = INT8_MIN;
	static uint16_t x127 = 493U;
	uint8_t x128 = UINT8_MAX;
	static uint32_t t15 = 48U;

	t15 = ((x125%x126)/(x127/x128));

	if (t15 != 2784U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x129 = -1;
	int8_t x130 = INT8_MIN;
	static uint64_t x131 = 15153529870624LLU;
	static uint8_t x132 = UINT8_MAX;
	uint64_t t16 = 1029464364150683782LLU;

	t16 = ((x129%x130)/(x131/x132));

	if (t16 != 310417426LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x133 = -883;
	uint16_t x134 = 10U;
	int64_t x135 = -185475123LL;
	uint16_t x136 = UINT16_MAX;
	volatile int64_t t17 = 11012397888LL;

	t17 = ((x133%x134)/(x135/x136));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x137 = UINT16_MAX;
	int64_t x138 = INT64_MAX;
	uint16_t x140 = 13U;
	static int64_t t18 = -964817247325886513LL;

	t18 = ((x137%x138)/(x139/x140));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x145 = 6843U;
	uint32_t x146 = 56399U;
	static int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MIN;
	uint32_t t19 = 227U;

	t19 = ((x145%x146)/(x147/x148));

	if (t19 != 6843U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x149 = INT16_MIN;
	uint64_t x150 = 98221394LLU;
	uint16_t x151 = UINT16_MAX;
	uint64_t t20 = 17737237886440528LLU;

	t20 = ((x149%x150)/(x151/x152));

	if (t20 != 34997LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x153 = INT32_MIN;
	volatile uint8_t x154 = 1U;
	volatile int32_t x155 = INT32_MIN;
	static int32_t x156 = INT32_MAX;
	volatile int32_t t21 = 0;

	t21 = ((x153%x154)/(x155/x156));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x157 = 7042124LL;
	static volatile uint32_t x158 = 109975U;
	int8_t x159 = INT8_MIN;
	volatile int32_t x160 = -1;
	static int64_t t22 = 9LL;

	t22 = ((x157%x158)/(x159/x160));

	if (t22 != 29LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x165 = -1;
	volatile int8_t x167 = INT8_MAX;
	int8_t x168 = INT8_MAX;
	int32_t t23 = 401;

	t23 = ((x165%x166)/(x167/x168));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x181 = 111U;
	uint32_t x182 = UINT32_MAX;
	uint32_t x184 = UINT32_MAX;

	t24 = ((x181%x182)/(x183/x184));

	if (t24 != 111U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x193 = INT32_MAX;
	int16_t x194 = -14;
	volatile int64_t x195 = -1LL;
	uint64_t x196 = 1268458LLU;
	static volatile uint64_t t25 = 8299410902LLU;

	t25 = ((x193%x194)/(x195/x196));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x197 = 5600743160946120942LLU;
	int32_t x199 = INT32_MAX;
	int8_t x200 = INT8_MAX;
	volatile uint64_t t26 = 61LLU;

	t26 = ((x197%x198)/(x199/x200));

	if (t26 != 20LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x201 = UINT32_MAX;
	int16_t x202 = -1;
	volatile int64_t x203 = INT64_MIN;
	uint64_t x204 = 406592893248LLU;

	t27 = ((x201%x202)/(x203/x204));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x205 = INT32_MIN;
	int32_t x207 = 5571;
	uint64_t t28 = 62LLU;

	t28 = ((x205%x206)/(x207/x208));

	if (t28 != 186330748197596646LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x217 = 74655425078363806LL;
	static int16_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	uint8_t x220 = 95U;
	volatile int64_t t29 = 318486031LL;

	t29 = ((x217%x218)/(x219/x220));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x225 = 38126LLU;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MIN;
	volatile uint64_t t30 = 2013LLU;

	t30 = ((x225%x226)/(x227/x228));

	if (t30 != 148LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x229 = UINT8_MAX;
	uint8_t x230 = 7U;
	int8_t x231 = INT8_MIN;
	volatile uint32_t x232 = 9U;
	volatile uint32_t t31 = 952779U;

	t31 = ((x229%x230)/(x231/x232));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x269 = -1LL;
	int32_t x270 = -1;
	volatile int8_t x271 = INT8_MAX;
	int32_t x272 = -1;
	int64_t t32 = -2025015LL;

	t32 = ((x269%x270)/(x271/x272));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x274 = 779U;
	volatile int64_t x275 = -989444688771LL;
	static uint32_t x276 = 849294U;
	volatile int64_t t33 = 6876399LL;

	t33 = ((x273%x274)/(x275/x276));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x277 = UINT32_MAX;
	static int16_t x278 = INT16_MAX;
	volatile int8_t x280 = -3;
	uint32_t t34 = 255U;

	t34 = ((x277%x278)/(x279/x280));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x281 = 80753U;
	static int32_t x282 = -143;
	int32_t x283 = INT32_MAX;
	static int8_t x284 = 63;
	volatile uint32_t t35 = 4147261U;

	t35 = ((x281%x282)/(x283/x284));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x285 = 1;
	volatile int16_t x287 = INT16_MIN;
	uint32_t x288 = 1976615U;
	volatile uint32_t t36 = 764U;

	t36 = ((x285%x286)/(x287/x288));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = INT16_MIN;
	uint64_t x299 = UINT64_MAX;
	uint32_t x300 = 1227239781U;
	uint64_t t37 = 1543LLU;

	t37 = ((x297%x298)/(x299/x300));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x306 = INT8_MIN;
	int64_t x307 = 496423143718LL;
	int64_t t38 = -1527432381656598LL;

	t38 = ((x305%x306)/(x307/x308));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x313 = 5;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = UINT64_MAX;
	uint64_t x316 = 1288470342580LLU;
	volatile uint64_t t39 = 31642629502151LLU;

	t39 = ((x313%x314)/(x315/x316));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x317 = 1;
	int16_t x318 = INT16_MIN;
	volatile int16_t x320 = INT16_MIN;
	uint64_t t40 = 31422240578LLU;

	t40 = ((x317%x318)/(x319/x320));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int8_t x347 = -1;
	int16_t x348 = -1;
	int64_t t41 = 1164285026563288LL;

	t41 = ((x345%x346)/(x347/x348));

	if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x349 = 20LLU;
	uint32_t x352 = UINT32_MAX;

	t42 = ((x349%x350)/(x351/x352));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x353 = -1;
	uint8_t x354 = 1U;
	uint8_t x355 = UINT8_MAX;
	static int16_t x356 = 13;

	t43 = ((x353%x354)/(x355/x356));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MIN;
	int16_t x364 = INT16_MAX;
	volatile uint64_t t44 = 0LLU;

	t44 = ((x361%x362)/(x363/x364));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x389 = INT16_MAX;
	uint32_t x390 = 1U;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MAX;
	volatile uint64_t t45 = 829811361LLU;

	t45 = ((x389%x390)/(x391/x392));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x397 = INT32_MIN;
	uint32_t x398 = 557765413U;
	uint16_t x399 = 3898U;
	int8_t x400 = INT8_MIN;
	uint32_t t46 = 7251U;

	t46 = ((x397%x398)/(x399/x400));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x405 = 21U;
	volatile int64_t x406 = 99512121451303394LL;
	static int16_t x407 = 4484;
	static int64_t t47 = -857609443657994324LL;

	t47 = ((x405%x406)/(x407/x408));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x410 = 3157U;
	int16_t x412 = INT16_MIN;
	volatile uint32_t t48 = 1107630809U;

	t48 = ((x409%x410)/(x411/x412));

	if (t48 != 255U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x414 = INT16_MIN;
	uint64_t x415 = UINT64_MAX;
	volatile int64_t x416 = INT64_MAX;
	volatile uint64_t t49 = 8777717678272748LLU;

	t49 = ((x413%x414)/(x415/x416));

	if (t49 != 9223372036854768925LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x417 = -17961932;
	static int32_t x419 = 5032335;
	int8_t x420 = INT8_MIN;
	uint32_t t50 = 267778U;

	t50 = ((x417%x418)/(x419/x420));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x426 = INT64_MAX;
	volatile int16_t x427 = INT16_MAX;
	static int16_t x428 = -3116;
	int64_t t51 = 921460854LL;

	t51 = ((x425%x426)/(x427/x428));

	if (t51 != 12LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x429 = INT16_MIN;
	static volatile int32_t x430 = 98184565;
	uint64_t x431 = 9036643440406927784LLU;
	static uint16_t x432 = 215U;

	t52 = ((x429%x430)/(x431/x432));

	if (t52 != 438LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x434 = 49;
	int32_t x435 = INT32_MAX;
	int32_t t53 = -519116;

	t53 = ((x433%x434)/(x435/x436));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x441 = -1472805772129127775LL;
	int16_t x443 = -1;
	volatile uint64_t t54 = 114829285896603495LLU;

	t54 = ((x441%x442)/(x443/x444));

	if (t54 != 18446744073709531809LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x445 = 200U;
	uint64_t x447 = 184723610693421081LLU;
	static uint16_t x448 = UINT16_MAX;
	static volatile uint64_t t55 = 51183757939626LLU;

	t55 = ((x445%x446)/(x447/x448));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x459 = INT32_MIN;
	uint64_t x460 = 1865LLU;

	t56 = ((x457%x458)/(x459/x460));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x466 = INT64_MIN;
	static int64_t x467 = INT64_MAX;
	uint8_t x468 = 2U;
	volatile int64_t t57 = 1LL;

	t57 = ((x465%x466)/(x467/x468));

	if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x473 = INT8_MIN;
	int16_t x474 = -1;
	int16_t x475 = INT16_MAX;
	volatile int32_t t58 = -9;

	t58 = ((x473%x474)/(x475/x476));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x482 = 91U;
	volatile int32_t x483 = INT32_MAX;

	t59 = ((x481%x482)/(x483/x484));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x489 = 10U;
	uint8_t x492 = 4U;
	volatile uint32_t t60 = 1515700911U;

	t60 = ((x489%x490)/(x491/x492));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x502 = INT64_MIN;
	volatile uint64_t x503 = UINT64_MAX;
	int16_t x504 = INT16_MIN;

	t61 = ((x501%x502)/(x503/x504));

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x506 = -1;
	int8_t x507 = -1;
	uint64_t x508 = UINT64_MAX;
	uint64_t t62 = 253124340021398899LLU;

	t62 = ((x505%x506)/(x507/x508));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x509 = UINT32_MAX;
	int8_t x510 = INT8_MAX;
	volatile uint8_t x511 = UINT8_MAX;
	static volatile int64_t x512 = -1LL;
	volatile int64_t t63 = -405459731490076LL;

	t63 = ((x509%x510)/(x511/x512));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x533 = -1LL;
	int16_t x534 = -1;
	static int32_t x535 = INT32_MAX;
	static uint64_t x536 = 25326LLU;

	t64 = ((x533%x534)/(x535/x536));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x550 = INT16_MAX;
	int8_t x551 = INT8_MAX;
	int16_t x552 = 10;
	int32_t t65 = 63140;

	t65 = ((x549%x550)/(x551/x552));

	if (t65 != -767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x565 = 52284361LLU;
	int32_t x566 = INT32_MIN;
	static uint32_t x567 = UINT32_MAX;
	int8_t x568 = -1;

	t66 = ((x565%x566)/(x567/x568));

	if (t66 != 52284361LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x569 = 1052U;
	int8_t x570 = 51;
	int16_t x571 = -14287;
	uint64_t x572 = 296912839LLU;
	uint64_t t67 = 4610LLU;

	t67 = ((x569%x570)/(x571/x572));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x573 = INT16_MIN;
	int16_t x574 = INT16_MIN;
	volatile int64_t x576 = 1LL;
	volatile int64_t t68 = 542314LL;

	t68 = ((x573%x574)/(x575/x576));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x577 = -14;
	static uint32_t x578 = UINT32_MAX;
	volatile int32_t x579 = INT32_MAX;
	volatile int8_t x580 = INT8_MIN;
	uint32_t t69 = 0U;

	t69 = ((x577%x578)/(x579/x580));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x585 = UINT16_MAX;
	int32_t x586 = -7;
	int64_t x587 = 12649752249986150LL;
	volatile int64_t t70 = 546807802283LL;

	t70 = ((x585%x586)/(x587/x588));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x593 = 0;
	volatile int32_t x594 = -371;
	int32_t x595 = INT32_MAX;
	uint16_t x596 = 3U;
	int32_t t71 = -29;

	t71 = ((x593%x594)/(x595/x596));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x601 = INT32_MAX;
	uint64_t x602 = 8169LLU;
	volatile uint64_t t72 = 450428771020509075LLU;

	t72 = ((x601%x602)/(x603/x604));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x605 = 2539U;
	int16_t x606 = INT16_MAX;
	static int32_t x607 = INT32_MAX;
	volatile int32_t t73 = 42;

	t73 = ((x605%x606)/(x607/x608));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x625 = INT64_MIN;
	volatile uint8_t x626 = UINT8_MAX;
	uint16_t x627 = 1265U;
	int8_t x628 = INT8_MIN;

	t74 = ((x625%x626)/(x627/x628));

	if (t74 != 14LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x633 = INT64_MAX;
	uint64_t x634 = UINT64_MAX;
	uint32_t x635 = 33679619U;
	int8_t x636 = 2;
	volatile uint64_t t75 = 66376833185LLU;

	t75 = ((x633%x634)/(x635/x636));

	if (t75 != 547712390137LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x649 = 2007U;
	int64_t x650 = INT64_MIN;
	int64_t x651 = INT64_MAX;
	static int8_t x652 = 1;
	volatile int64_t t76 = 1960098192628514LL;

	t76 = ((x649%x650)/(x651/x652));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x657 = 6;
	volatile uint32_t x658 = UINT32_MAX;
	int16_t x659 = -1;
	uint32_t x660 = 129U;
	static uint32_t t77 = 751404U;

	t77 = ((x657%x658)/(x659/x660));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x661 = -11465;
	static int16_t x662 = INT16_MAX;
	uint16_t x663 = UINT16_MAX;
	int8_t x664 = INT8_MAX;
	int32_t t78 = 56192445;

	t78 = ((x661%x662)/(x663/x664));

	if (t78 != -22) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x682 = INT64_MIN;
	uint8_t x683 = 56U;
	int8_t x684 = -1;
	int64_t t79 = 300427201821369071LL;

	t79 = ((x681%x682)/(x683/x684));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x685 = INT32_MIN;
	static int64_t x686 = 318367LL;
	int32_t x687 = INT32_MIN;
	volatile int8_t x688 = INT8_MAX;
	int64_t t80 = 4551938186LL;

	t80 = ((x685%x686)/(x687/x688));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x697 = INT64_MIN;
	uint64_t x699 = UINT64_MAX;
	int8_t x700 = INT8_MAX;
	volatile uint64_t t81 = 548889599539053LLU;

	t81 = ((x697%x698)/(x699/x700));

	if (t81 != 127LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x701 = -13;
	volatile uint32_t x702 = 245126630U;
	volatile int32_t x703 = INT32_MIN;
	volatile uint32_t t82 = 315300U;

	t82 = ((x701%x702)/(x703/x704));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x713 = UINT32_MAX;
	int32_t x715 = 9;
	int32_t x716 = -1;
	volatile uint64_t t83 = 1454073039989546LLU;

	t83 = ((x713%x714)/(x715/x716));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x721 = 0U;
	int16_t x722 = -1;
	int16_t x723 = -1;
	uint64_t x724 = 304493LLU;
	volatile uint64_t t84 = 68315376LLU;

	t84 = ((x721%x722)/(x723/x724));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x726 = INT64_MIN;
	int32_t x727 = INT32_MIN;
	volatile int16_t x728 = 11;
	volatile uint64_t t85 = 44LLU;

	t85 = ((x725%x726)/(x727/x728));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x729 = 1U;
	volatile int64_t t86 = -65608316995700964LL;

	t86 = ((x729%x730)/(x731/x732));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x734 = 59U;
	volatile uint32_t x735 = UINT32_MAX;
	volatile uint64_t t87 = 45LLU;

	t87 = ((x733%x734)/(x735/x736));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x750 = 370222306163801403LL;
	int8_t x751 = -1;
	int16_t x752 = -1;

	t88 = ((x749%x750)/(x751/x752));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x757 = 4920769300073LL;
	int8_t x758 = -1;
	uint16_t x759 = 112U;
	int8_t x760 = 7;

	t89 = ((x757%x758)/(x759/x760));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x765 = -96570172045LL;
	int64_t x766 = INT64_MIN;
	volatile int16_t x767 = INT16_MIN;
	volatile uint8_t x768 = 6U;
	volatile int64_t t90 = -27791699219166541LL;

	t90 = ((x765%x766)/(x767/x768));

	if (t90 != 17683605LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x773 = INT8_MIN;
	int16_t x774 = INT16_MIN;
	int64_t x775 = -1265001406103352097LL;
	volatile int16_t x776 = -1;
	volatile int64_t t91 = 67976067946029LL;

	t91 = ((x773%x774)/(x775/x776));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x781 = UINT16_MAX;
	volatile int8_t x783 = INT8_MIN;
	uint64_t x784 = 636LLU;
	volatile uint64_t t92 = 3434699470815LLU;

	t92 = ((x781%x782)/(x783/x784));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x790 = UINT64_MAX;
	uint16_t x792 = 1U;
	volatile uint64_t t93 = 133689436551743428LLU;

	t93 = ((x789%x790)/(x791/x792));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x805 = INT64_MAX;
	int64_t x806 = -1LL;
	static volatile int32_t x807 = INT32_MIN;
	volatile int16_t x808 = 7;
	int64_t t94 = -269612LL;

	t94 = ((x805%x806)/(x807/x808));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x821 = 13634873U;
	uint16_t x822 = 219U;
	static int32_t x823 = 304758620;
	static volatile int8_t x824 = -1;
	static volatile uint32_t t95 = 660492589U;

	t95 = ((x821%x822)/(x823/x824));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x826 = UINT64_MAX;
	volatile uint64_t x827 = UINT64_MAX;
	uint8_t x828 = 3U;

	t96 = ((x825%x826)/(x827/x828));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x841 = 50LL;
	uint32_t x842 = 282566135U;
	int64_t x843 = INT64_MIN;

	t97 = ((x841%x842)/(x843/x844));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x853 = 43;
	int32_t x854 = -49294936;
	int16_t x855 = INT16_MAX;
	int16_t x856 = -1;
	volatile int32_t t98 = 31097966;

	t98 = ((x853%x854)/(x855/x856));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x861 = -10;
	int16_t x862 = INT16_MIN;
	uint64_t x863 = 409349172186LLU;
	static uint64_t t99 = 99188675350LLU;

	t99 = ((x861%x862)/(x863/x864));

	if (t99 != 1476598788263LLU) { NG(); } else { ; }
	
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

