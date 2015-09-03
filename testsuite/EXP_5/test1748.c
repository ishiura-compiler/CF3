#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x26 = 0U;
int32_t x27 = 56486619;
volatile uint64_t t0 = UINT64_MAX;
volatile int64_t x32 = INT64_MIN;
uint16_t x35 = 529U;
int32_t x59 = -1;
volatile uint64_t x61 = 18LLU;
int64_t x93 = 889399309LL;
volatile int16_t x96 = INT16_MAX;
static int64_t x111 = INT64_MIN;
int32_t x116 = INT32_MAX;
static volatile uint32_t x125 = UINT32_MAX;
uint8_t x150 = 8U;
int8_t x151 = INT8_MIN;
int16_t x152 = -1;
int16_t x153 = INT16_MAX;
static uint8_t x154 = 83U;
int8_t x189 = INT8_MAX;
static int32_t t16 = -2981990;
uint16_t x229 = UINT16_MAX;
uint32_t x261 = UINT32_MAX;
int64_t x262 = INT64_MIN;
volatile uint16_t x282 = 2U;
int32_t x284 = INT32_MAX;
int32_t x337 = INT32_MAX;
volatile int32_t t24 = INT32_MAX;
int32_t x359 = -7453716;
int32_t x382 = INT32_MIN;
uint8_t x409 = UINT8_MAX;
static int16_t x446 = INT16_MIN;
static uint32_t x458 = 1546U;
int8_t x466 = -1;
uint8_t x467 = 4U;
volatile int32_t x468 = INT32_MIN;
int32_t t34 = -686;
static volatile int32_t x485 = INT32_MAX;
int32_t x487 = INT32_MIN;
int32_t t36 = INT32_MAX;
volatile int8_t x517 = INT8_MAX;
int8_t x518 = 10;
static int64_t x525 = 8499631178370874LL;
int8_t x549 = INT8_MAX;
uint64_t x551 = UINT64_MAX;
int16_t x552 = 881;
uint8_t x577 = UINT8_MAX;
volatile uint64_t x581 = 73LLU;
uint8_t x582 = 2U;
volatile int32_t x583 = 13;
static uint64_t x585 = 512326736187LLU;
int8_t x586 = -1;
int16_t x597 = 3;
volatile int64_t x602 = -1LL;
int16_t x603 = INT16_MAX;
int8_t x625 = 1;
static int32_t x626 = INT32_MIN;
volatile int64_t x628 = 3931571LL;
volatile int32_t x631 = INT32_MAX;
uint16_t x651 = 770U;
static volatile int32_t x655 = -193381;
int32_t x656 = INT32_MIN;
int64_t x695 = -1LL;
int32_t x749 = INT32_MAX;
uint64_t x774 = UINT64_MAX;
volatile uint8_t x789 = UINT8_MAX;
volatile uint8_t x791 = 9U;
static int32_t t61 = 259468745;
volatile int16_t x798 = -1;
volatile uint8_t x799 = 13U;
static uint32_t x833 = 363944785U;
uint8_t x834 = 2U;
volatile uint32_t t63 = 915906U;
int64_t x894 = -1LL;
int64_t x925 = INT64_MAX;
uint8_t x926 = 59U;
int64_t x929 = 1002674117173LL;
int16_t x932 = INT16_MAX;
uint16_t x947 = UINT16_MAX;
uint8_t x950 = 102U;
volatile uint64_t x951 = 961039LLU;
volatile uint8_t x957 = 14U;
uint32_t x978 = 211120U;
uint64_t x989 = UINT64_MAX;
uint32_t x990 = 1491U;
volatile int16_t x1001 = INT16_MAX;
static int8_t x1037 = INT8_MAX;
static int32_t x1076 = -1;
uint64_t x1113 = 10648464924LLU;
int16_t x1114 = INT16_MAX;
uint16_t x1115 = UINT16_MAX;
int32_t x1152 = 1829519;
uint64_t x1161 = 566LLU;
int16_t x1163 = 1;
int8_t x1164 = INT8_MIN;
static uint64_t x1177 = 1LLU;
int8_t x1259 = INT8_MIN;
uint32_t t90 = 117432508U;
uint16_t x1269 = 210U;
uint16_t x1273 = UINT16_MAX;
int64_t x1279 = INT64_MIN;
static uint64_t x1280 = UINT64_MAX;
int8_t x1296 = -1;
volatile uint32_t t97 = 3235U;
volatile uint32_t t98 = 46935U;
static int16_t x1385 = INT16_MAX;
volatile int64_t x1386 = INT64_MAX;


void f0(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x28 = -2;

	t0 = (x25<<((x26&x27)%x28));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x29 = INT16_MAX;
	int32_t x30 = INT32_MIN;
	uint32_t x31 = 160830U;
	int32_t t1 = -18;

	t1 = (x29<<((x30&x31)%x32));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x33 = UINT16_MAX;
	int64_t x34 = INT64_MIN;
	static int64_t x36 = -2LL;
	static int32_t t2 = -23515;

	t2 = (x33<<((x34&x35)%x36));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x45 = 5532;
	static volatile uint64_t x46 = 0LLU;
	int32_t x47 = 3;
	uint16_t x48 = UINT16_MAX;
	int32_t t3 = 2870;

	t3 = (x45<<((x46&x47)%x48));

	if (t3 != 5532) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x57 = 1013368LLU;
	static int32_t x58 = 54;
	int64_t x60 = -1LL;
	static uint64_t t4 = 4120LLU;

	t4 = (x57<<((x58&x59)%x60));

	if (t4 != 1013368LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x62 = 51U;
	int64_t x63 = -5592637930073302LL;
	volatile uint8_t x64 = 85U;
	volatile uint64_t t5 = 235449LLU;

	t5 = (x61<<((x62&x63)%x64));

	if (t5 != 309237645312LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = INT8_MIN;
	volatile int16_t x71 = 12831;
	volatile uint8_t x72 = 17U;
	int32_t t6 = -2;

	t6 = (x69<<((x70&x71)%x72));

	if (t6 != 2147418112) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x94 = INT64_MIN;
	uint16_t x95 = 173U;
	volatile int64_t t7 = -3475386LL;

	t7 = (x93<<((x94&x95)%x96));

	if (t7 != 889399309LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x109 = 3U;
	uint8_t x110 = 0U;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t8 = -35884690;

	t8 = (x109<<((x110&x111)%x112));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x113 = UINT8_MAX;
	uint8_t x114 = 4U;
	uint8_t x115 = UINT8_MAX;
	static volatile int32_t t9 = -523494;

	t9 = (x113<<((x114&x115)%x116));

	if (t9 != 4080) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x126 = 3U;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = -1;
	volatile uint32_t t10 = 31351571U;

	t10 = (x125<<((x126&x127)%x128));

	if (t10 != 4294967288U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = INT8_MIN;
	static int64_t x131 = 103LL;
	int64_t x132 = 1LL;
	int32_t t11 = 1689426;

	t11 = (x129<<((x130&x131)%x132));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x149 = 991U;
	static int32_t t12 = 5223208;

	t12 = (x149<<((x150&x151)%x152));

	if (t12 != 991) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x155 = 1U;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t13 = -28959;

	t13 = (x153<<((x154&x155)%x156));

	if (t13 != 65534) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x161 = 18U;
	static uint8_t x162 = 0U;
	int64_t x163 = -18260439016969LL;
	uint32_t x164 = 51172755U;
	int32_t t14 = -81252;

	t14 = (x161<<((x162&x163)%x164));

	if (t14 != 18) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x177 = INT32_MAX;
	static int64_t x178 = INT64_MIN;
	static uint16_t x179 = 7476U;
	int16_t x180 = 961;
	volatile int32_t t15 = INT32_MAX;

	t15 = (x177<<((x178&x179)%x180));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x190 = INT64_MAX;
	int8_t x191 = -1;
	int8_t x192 = INT8_MAX;

	t16 = (x189<<((x190&x191)%x192));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x230 = 14;
	int16_t x231 = INT16_MAX;
	int8_t x232 = -1;
	int32_t t17 = 51051737;

	t17 = (x229<<((x230&x231)%x232));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x233 = 1374U;
	uint32_t x234 = 19064464U;
	static volatile uint16_t x235 = 22538U;
	uint8_t x236 = 1U;
	int32_t t18 = 15027139;

	t18 = (x233<<((x234&x235)%x236));

	if (t18 != 1374) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	int16_t x251 = -1;
	static int8_t x252 = INT8_MIN;
	static volatile uint32_t t19 = UINT32_MAX;

	t19 = (x249<<((x250&x251)%x252));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x263 = UINT8_MAX;
	int32_t x264 = 1747243;
	static volatile uint32_t t20 = UINT32_MAX;

	t20 = (x261<<((x262&x263)%x264));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x281 = 3U;
	uint16_t x283 = 7U;
	int32_t t21 = -146506360;

	t21 = (x281<<((x282&x283)%x284));

	if (t21 != 12) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x313 = INT8_MAX;
	int32_t x314 = INT32_MIN;
	int32_t x315 = -1;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t22 = 0;

	t22 = (x313<<((x314&x315)%x316));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x317 = 0U;
	static volatile int32_t x318 = -1;
	static uint8_t x319 = 121U;
	static int8_t x320 = 1;
	volatile int32_t t23 = -393;

	t23 = (x317<<((x318&x319)%x320));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x338 = INT8_MIN;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = INT8_MIN;

	t24 = (x337<<((x338&x339)%x340));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x349 = INT64_MAX;
	static int64_t x350 = INT64_MAX;
	static int16_t x351 = INT16_MIN;
	volatile int8_t x352 = -1;
	int64_t t25 = INT64_MAX;

	t25 = (x349<<((x350&x351)%x352));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x357 = 44;
	uint8_t x358 = 1U;
	int32_t x360 = INT32_MIN;
	static volatile int32_t t26 = -379;

	t26 = (x357<<((x358&x359)%x360));

	if (t26 != 44) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x377 = 15U;
	int8_t x378 = 1;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = 287262896720655519LLU;
	int32_t t27 = -3;

	t27 = (x377<<((x378&x379)%x380));

	if (t27 != 15) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x381 = 655037U;
	static int32_t x383 = INT32_MAX;
	int32_t x384 = INT32_MIN;
	uint32_t t28 = 0U;

	t28 = (x381<<((x382&x383)%x384));

	if (t28 != 655037U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x401 = 871LLU;
	uint16_t x402 = UINT16_MAX;
	static int64_t x403 = INT64_MIN;
	static int8_t x404 = INT8_MAX;
	volatile uint64_t t29 = 70575LLU;

	t29 = (x401<<((x402&x403)%x404));

	if (t29 != 871LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x410 = INT16_MAX;
	volatile int16_t x411 = INT16_MIN;
	volatile int16_t x412 = 985;
	volatile int32_t t30 = 1981955;

	t30 = (x409<<((x410&x411)%x412));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x417 = 112LLU;
	int32_t x418 = -332;
	static int32_t x419 = 1;
	volatile int64_t x420 = -22927560103LL;
	volatile uint64_t t31 = 197807736LLU;

	t31 = (x417<<((x418&x419)%x420));

	if (t31 != 112LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x445 = 3356518356942509LL;
	volatile int32_t x447 = 617171554;
	int8_t x448 = -1;
	volatile int64_t t32 = 1716LL;

	t32 = (x445<<((x446&x447)%x448));

	if (t32 != 3356518356942509LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x457 = INT32_MAX;
	uint8_t x459 = 1U;
	volatile int8_t x460 = INT8_MIN;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x457<<((x458&x459)%x460));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x465 = 0U;

	t34 = (x465<<((x466&x467)%x468));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x486 = -647561227;
	int32_t x488 = INT32_MIN;
	int32_t t35 = INT32_MAX;

	t35 = (x485<<((x486&x487)%x488));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x497 = INT32_MAX;
	int32_t x498 = -6514;
	int64_t x499 = -1LL;
	int32_t x500 = -1;

	t36 = (x497<<((x498&x499)%x500));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x519 = -1;
	int16_t x520 = INT16_MIN;
	volatile int32_t t37 = 42062522;

	t37 = (x517<<((x518&x519)%x520));

	if (t37 != 130048) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x526 = -1;
	volatile int64_t x527 = INT64_MIN;
	int8_t x528 = -1;
	static int64_t t38 = 1LL;

	t38 = (x525<<((x526&x527)%x528));

	if (t38 != 8499631178370874LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x533 = 20U;
	uint8_t x534 = 4U;
	int64_t x535 = -6963966LL;
	uint64_t x536 = UINT64_MAX;
	int32_t t39 = 7;

	t39 = (x533<<((x534&x535)%x536));

	if (t39 != 20) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x550 = 7;
	int32_t t40 = 136;

	t40 = (x549<<((x550&x551)%x552));

	if (t40 != 16256) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x565 = UINT32_MAX;
	int64_t x566 = -1LL;
	int16_t x567 = INT16_MAX;
	int16_t x568 = -1;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x565<<((x566&x567)%x568));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x578 = UINT64_MAX;
	uint8_t x579 = 0U;
	static uint16_t x580 = UINT16_MAX;
	volatile int32_t t42 = -14;

	t42 = (x577<<((x578&x579)%x580));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x584 = 20LLU;
	volatile uint64_t t43 = 4405889819LLU;

	t43 = (x581<<((x582&x583)%x584));

	if (t43 != 73LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x587 = INT8_MIN;
	static int8_t x588 = INT8_MIN;
	volatile uint64_t t44 = 10432639115LLU;

	t44 = (x585<<((x586&x587)%x588));

	if (t44 != 512326736187LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x593 = 15U;
	volatile uint32_t x594 = 84U;
	int64_t x595 = INT64_MIN;
	int8_t x596 = -1;
	volatile int32_t t45 = -3285;

	t45 = (x593<<((x594&x595)%x596));

	if (t45 != 15) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x598 = 7902;
	int16_t x599 = INT16_MIN;
	int64_t x600 = 26072LL;
	volatile int32_t t46 = 1;

	t46 = (x597<<((x598&x599)%x600));

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x601 = 347;
	volatile int8_t x604 = -1;
	int32_t t47 = 314;

	t47 = (x601<<((x602&x603)%x604));

	if (t47 != 347) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x627 = INT32_MAX;
	volatile int32_t t48 = 14;

	t48 = (x625<<((x626&x627)%x628));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x629 = UINT16_MAX;
	int64_t x630 = INT64_MIN;
	uint16_t x632 = UINT16_MAX;
	int32_t t49 = 31237;

	t49 = (x629<<((x630&x631)%x632));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x637 = 31;
	int16_t x638 = INT16_MIN;
	uint64_t x639 = 617LLU;
	static int16_t x640 = -350;
	volatile int32_t t50 = 14760;

	t50 = (x637<<((x638&x639)%x640));

	if (t50 != 31) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x649 = UINT32_MAX;
	uint8_t x650 = UINT8_MAX;
	int16_t x652 = 5581;
	volatile uint32_t t51 = 4612U;

	t51 = (x649<<((x650&x651)%x652));

	if (t51 != 4294967292U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x653 = 250546157793404LL;
	int64_t x654 = INT64_MIN;
	int64_t t52 = 73474557404LL;

	t52 = (x653<<((x654&x655)%x656));

	if (t52 != 250546157793404LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x693 = 757U;
	int16_t x694 = INT16_MAX;
	volatile uint8_t x696 = 2U;
	uint32_t t53 = 6U;

	t53 = (x693<<((x694&x695)%x696));

	if (t53 != 1514U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x705 = 9;
	uint8_t x706 = 0U;
	int64_t x707 = 3460935LL;
	int16_t x708 = 1543;
	int32_t t54 = 8372171;

	t54 = (x705<<((x706&x707)%x708));

	if (t54 != 9) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x709 = 22633300281LL;
	static uint32_t x710 = 244672U;
	uint8_t x711 = 7U;
	volatile uint64_t x712 = 4LLU;
	static volatile int64_t t55 = 3826008585599369LL;

	t55 = (x709<<((x710&x711)%x712));

	if (t55 != 22633300281LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x733 = 0;
	static volatile int16_t x734 = 5;
	uint8_t x735 = 59U;
	int32_t x736 = INT32_MIN;
	int32_t t56 = -5;

	t56 = (x733<<((x734&x735)%x736));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x750 = 53U;
	uint8_t x751 = 32U;
	int8_t x752 = 2;
	static volatile int32_t t57 = INT32_MAX;

	t57 = (x749<<((x750&x751)%x752));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x757 = 171526LLU;
	uint32_t x758 = UINT32_MAX;
	static int32_t x759 = 121633372;
	int8_t x760 = INT8_MAX;
	static volatile uint64_t t58 = 8388474103554786LLU;

	t58 = (x757<<((x758&x759)%x760));

	if (t58 != 351285248LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x773 = UINT8_MAX;
	int64_t x775 = INT64_MIN;
	volatile int8_t x776 = INT8_MAX;
	int32_t t59 = 156090250;

	t59 = (x773<<((x774&x775)%x776));

	if (t59 != 510) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x785 = INT8_MAX;
	int8_t x786 = INT8_MAX;
	int64_t x787 = -1LL;
	int16_t x788 = -1;
	int32_t t60 = -175724;

	t60 = (x785<<((x786&x787)%x788));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x790 = UINT16_MAX;
	int8_t x792 = 1;

	t61 = (x789<<((x790&x791)%x792));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x797 = UINT64_MAX;
	int32_t x800 = 36069598;
	volatile uint64_t t62 = 10LLU;

	t62 = (x797<<((x798&x799)%x800));

	if (t62 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x835 = -13;
	int64_t x836 = 115489925482LL;

	t63 = (x833<<((x834&x835)%x836));

	if (t63 != 1455779140U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x861 = 25384235LLU;
	int16_t x862 = 10;
	static int32_t x863 = INT32_MIN;
	int64_t x864 = -1LL;
	uint64_t t64 = 2333491105579LLU;

	t64 = (x861<<((x862&x863)%x864));

	if (t64 != 25384235LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x865 = 1;
	volatile uint32_t x866 = 534979235U;
	int32_t x867 = INT32_MIN;
	static int32_t x868 = INT32_MAX;
	static volatile int32_t t65 = 5949574;

	t65 = (x865<<((x866&x867)%x868));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x869 = 151;
	static volatile int64_t x870 = -1LL;
	uint32_t x871 = UINT32_MAX;
	int16_t x872 = -1;
	int32_t t66 = -1;

	t66 = (x869<<((x870&x871)%x872));

	if (t66 != 151) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x893 = 0U;
	uint64_t x895 = 14LLU;
	volatile int16_t x896 = -21;
	volatile int32_t t67 = -3;

	t67 = (x893<<((x894&x895)%x896));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x927 = -62176364;
	int8_t x928 = 2;
	volatile int64_t t68 = INT64_MAX;

	t68 = (x925<<((x926&x927)%x928));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x930 = -1;
	uint8_t x931 = 0U;
	volatile int64_t t69 = -8942560LL;

	t69 = (x929<<((x930&x931)%x932));

	if (t69 != 1002674117173LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x945 = 19;
	int32_t x946 = -1;
	int8_t x948 = -1;
	static int32_t t70 = 2057182;

	t70 = (x945<<((x946&x947)%x948));

	if (t70 != 19) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x949 = 209U;
	volatile int8_t x952 = INT8_MAX;
	volatile uint32_t t71 = 86484U;

	t71 = (x949<<((x950&x951)%x952));

	if (t71 != 13376U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x958 = 316838902539LL;
	uint32_t x959 = 15959612U;
	static uint16_t x960 = 7U;
	int32_t t72 = -37178;

	t72 = (x957<<((x958&x959)%x960));

	if (t72 != 56) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x961 = 16779188;
	uint16_t x962 = 3U;
	int64_t x963 = -1LL;
	int16_t x964 = INT16_MIN;
	volatile int32_t t73 = -107815;

	t73 = (x961<<((x962&x963)%x964));

	if (t73 != 134233504) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x977 = 7735295U;
	static int16_t x979 = 8;
	int32_t x980 = INT32_MIN;
	volatile uint32_t t74 = 10876U;

	t74 = (x977<<((x978&x979)%x980));

	if (t74 != 7735295U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x991 = 2;
	int8_t x992 = INT8_MAX;
	volatile uint64_t t75 = 15LLU;

	t75 = (x989<<((x990&x991)%x992));

	if (t75 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1002 = INT64_MIN;
	uint16_t x1003 = 0U;
	int16_t x1004 = -1;
	int32_t t76 = -484;

	t76 = (x1001<<((x1002&x1003)%x1004));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x1033 = 2;
	int32_t x1034 = INT32_MIN;
	int32_t x1035 = INT32_MAX;
	volatile int64_t x1036 = INT64_MAX;
	volatile int32_t t77 = -17;

	t77 = (x1033<<((x1034&x1035)%x1036));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x1038 = INT64_MAX;
	volatile int64_t x1039 = INT64_MAX;
	uint8_t x1040 = 1U;
	static volatile int32_t t78 = -13;

	t78 = (x1037<<((x1038&x1039)%x1040));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1073 = 0U;
	int16_t x1074 = 2;
	int16_t x1075 = INT16_MIN;
	int32_t t79 = 348804;

	t79 = (x1073<<((x1074&x1075)%x1076));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1089 = 0;
	int32_t x1090 = INT32_MAX;
	int32_t x1091 = INT32_MAX;
	int32_t x1092 = -1;
	static volatile int32_t t80 = 9096;

	t80 = (x1089<<((x1090&x1091)%x1092));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x1109 = UINT32_MAX;
	volatile int32_t x1110 = -59;
	uint8_t x1111 = 80U;
	int64_t x1112 = -1LL;
	uint32_t t81 = UINT32_MAX;

	t81 = (x1109<<((x1110&x1111)%x1112));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x1116 = -1;
	uint64_t t82 = 534208LLU;

	t82 = (x1113<<((x1114&x1115)%x1116));

	if (t82 != 10648464924LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1141 = 1;
	static uint32_t x1142 = 0U;
	int8_t x1143 = INT8_MAX;
	volatile uint32_t x1144 = 13828U;
	volatile int32_t t83 = -11206189;

	t83 = (x1141<<((x1142&x1143)%x1144));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x1145 = 1LLU;
	static volatile int8_t x1146 = INT8_MIN;
	volatile int16_t x1147 = INT16_MIN;
	static volatile int8_t x1148 = -1;
	volatile uint64_t t84 = 1138672323845LLU;

	t84 = (x1145<<((x1146&x1147)%x1148));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x1149 = UINT16_MAX;
	uint32_t x1150 = 214U;
	int64_t x1151 = INT64_MIN;
	int32_t t85 = -33059059;

	t85 = (x1149<<((x1150&x1151)%x1152));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1162 = UINT32_MAX;
	uint64_t t86 = 30043640590LLU;

	t86 = (x1161<<((x1162&x1163)%x1164));

	if (t86 != 1132LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x1165 = 11216U;
	uint16_t x1166 = UINT16_MAX;
	static volatile int8_t x1167 = -1;
	int32_t x1168 = -1;
	volatile int32_t t87 = 254343530;

	t87 = (x1165<<((x1166&x1167)%x1168));

	if (t87 != 11216) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1169 = 21U;
	int8_t x1170 = 8;
	volatile int32_t x1171 = INT32_MIN;
	uint32_t x1172 = 440U;
	volatile int32_t t88 = -3438175;

	t88 = (x1169<<((x1170&x1171)%x1172));

	if (t88 != 21) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1178 = 3;
	int32_t x1179 = 249205;
	static int8_t x1180 = INT8_MAX;
	volatile uint64_t t89 = 34216304379069302LLU;

	t89 = (x1177<<((x1178&x1179)%x1180));

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x1257 = 0U;
	int64_t x1258 = INT64_MAX;
	int8_t x1260 = INT8_MAX;

	t90 = (x1257<<((x1258&x1259)%x1260));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x1261 = 207U;
	static int32_t x1262 = -1;
	volatile int32_t x1263 = INT32_MIN;
	int32_t x1264 = INT32_MIN;
	static volatile int32_t t91 = -22671;

	t91 = (x1261<<((x1262&x1263)%x1264));

	if (t91 != 207) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1270 = INT32_MAX;
	int16_t x1271 = -1;
	static int8_t x1272 = -1;
	volatile int32_t t92 = 32;

	t92 = (x1269<<((x1270&x1271)%x1272));

	if (t92 != 210) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1274 = UINT32_MAX;
	volatile int8_t x1275 = -1;
	int8_t x1276 = 3;
	static volatile int32_t t93 = 0;

	t93 = (x1273<<((x1274&x1275)%x1276));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1277 = INT8_MAX;
	static int32_t x1278 = 10557;
	volatile int32_t t94 = 28;

	t94 = (x1277<<((x1278&x1279)%x1280));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1293 = 5836LLU;
	uint8_t x1294 = 0U;
	volatile uint16_t x1295 = 836U;
	static uint64_t t95 = 1370814679558886LLU;

	t95 = (x1293<<((x1294&x1295)%x1296));

	if (t95 != 5836LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1321 = 5U;
	int8_t x1322 = 4;
	static uint32_t x1323 = UINT32_MAX;
	int64_t x1324 = -187468695284071168LL;
	int32_t t96 = -260211241;

	t96 = (x1321<<((x1322&x1323)%x1324));

	if (t96 != 80) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1349 = 174588772U;
	int16_t x1350 = INT16_MIN;
	int16_t x1351 = 0;
	volatile int64_t x1352 = INT64_MAX;

	t97 = (x1349<<((x1350&x1351)%x1352));

	if (t97 != 174588772U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x1357 = 28359U;
	int32_t x1358 = INT32_MAX;
	int32_t x1359 = INT32_MIN;
	int32_t x1360 = INT32_MIN;

	t98 = (x1357<<((x1358&x1359)%x1360));

	if (t98 != 28359U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1387 = -954413307936775LL;
	int8_t x1388 = -3;
	int32_t t99 = -3675;

	t99 = (x1385<<((x1386&x1387)%x1388));

	if (t99 != 65534) { NG(); } else { ; }
	
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

