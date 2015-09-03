#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x15 = 7828U;
volatile int32_t t2 = -26546;
int16_t x35 = 531;
uint64_t x69 = UINT64_MAX;
int64_t x80 = -62102202887789837LL;
static int16_t x90 = 130;
int16_t x99 = INT16_MAX;
int8_t x109 = 10;
int8_t x118 = -1;
uint32_t t15 = 11968878U;
int32_t x124 = INT32_MAX;
static int32_t x133 = 3;
static volatile int64_t x136 = INT64_MAX;
int16_t x167 = 3034;
volatile uint8_t x173 = 1U;
static int64_t x175 = -1LL;
uint16_t x181 = UINT16_MAX;
int8_t x183 = -1;
int32_t x184 = INT32_MIN;
static volatile int32_t t21 = 27958;
int32_t x191 = INT32_MIN;
volatile int64_t x198 = -1LL;
uint8_t x199 = UINT8_MAX;
int32_t t23 = 229;
uint16_t x204 = UINT16_MAX;
static int8_t x213 = INT8_MAX;
int32_t t27 = -4859;
int16_t x220 = -1;
int16_t x246 = INT16_MIN;
volatile uint64_t x261 = UINT64_MAX;
uint32_t x264 = 29278015U;
int16_t x265 = INT16_MAX;
int64_t x277 = 7406078054740349LL;
volatile int8_t x282 = INT8_MAX;
uint8_t x284 = UINT8_MAX;
static volatile uint64_t x297 = 11847144971315LLU;
static int32_t x313 = INT32_MAX;
int64_t x318 = INT64_MIN;
uint32_t x355 = 3235882U;
volatile uint32_t x356 = 12307344U;
static int32_t t44 = INT32_MAX;
int16_t x382 = -1;
volatile uint64_t t45 = UINT64_MAX;
int32_t x395 = -1;
int64_t x398 = INT64_MIN;
int8_t x434 = -40;
static int64_t x436 = -2095135LL;
uint8_t x455 = 16U;
static volatile int32_t t53 = 0;
static int8_t x469 = 0;
static volatile int32_t x471 = -1;
int32_t t54 = -2968092;
static int32_t x483 = -64039625;
static uint8_t x506 = UINT8_MAX;
static int8_t x521 = 0;
static int8_t x526 = 1;
int64_t x528 = INT64_MIN;
static uint64_t x531 = UINT64_MAX;
uint32_t t61 = 3U;
int32_t x543 = -1;
volatile uint16_t x553 = 1U;
int32_t x554 = INT32_MIN;
static int8_t x555 = -1;
int16_t x558 = INT16_MAX;
static volatile uint16_t x585 = 1U;
volatile int32_t x586 = INT32_MAX;
static int16_t x588 = INT16_MIN;
uint64_t x641 = UINT64_MAX;
volatile int8_t x642 = INT8_MAX;
int16_t x655 = INT16_MIN;
volatile int32_t x656 = INT32_MIN;
int32_t t69 = -36270;
uint8_t x657 = 41U;
uint16_t x658 = 12U;
int32_t t70 = -1788;
uint16_t x673 = UINT16_MAX;
uint8_t x674 = UINT8_MAX;
static int8_t x675 = INT8_MIN;
int8_t x682 = 1;
uint8_t x703 = UINT8_MAX;
int32_t x704 = -15800261;
int32_t t74 = -125733802;
int32_t x715 = INT32_MIN;
int8_t x721 = INT8_MAX;
int64_t x724 = INT64_MIN;
volatile int32_t t76 = 641;
volatile uint8_t x756 = 3U;
volatile int32_t t79 = -1443515;
uint8_t x778 = 0U;
int32_t t80 = 1160633;
int16_t x781 = 514;
volatile int8_t x783 = -10;
uint16_t x786 = 1710U;
static volatile int32_t t82 = 3553;
int64_t x794 = 1LL;
volatile int32_t x824 = INT32_MIN;
volatile uint64_t x828 = 165481754LLU;
int16_t x830 = INT16_MIN;
int64_t x839 = -13037690434133047LL;
static int8_t x843 = INT8_MIN;
int16_t x844 = INT16_MIN;
int64_t x849 = INT64_MAX;
uint8_t x850 = 90U;
int16_t x863 = INT16_MIN;
static int32_t x894 = INT32_MAX;
int8_t x896 = INT8_MIN;
volatile int64_t x909 = 6454049LL;
int16_t x911 = -1;
static volatile uint32_t x914 = 72U;
volatile int8_t x916 = INT8_MAX;
int32_t x924 = INT32_MIN;
volatile uint32_t x941 = 1568441047U;
volatile int64_t x944 = 49968936004LL;
int16_t x967 = -134;
static int16_t x968 = INT16_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int8_t x2 = 44;
	int16_t x3 = INT16_MAX;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -5;

	t0 = (x1>>((x2%x3)/x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	static int32_t x10 = -203;
	int32_t x11 = 5;
	int32_t x12 = -6;
	int32_t t1 = -55583;

	t1 = (x9>>((x10%x11)/x12));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MIN;
	volatile uint32_t x16 = UINT32_MAX;

	t2 = (x13>>((x14%x15)/x16));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x33 = UINT16_MAX;
	int64_t x34 = 316331LL;
	static int32_t x36 = INT32_MAX;
	int32_t t3 = -26331;

	t3 = (x33>>((x34%x35)/x36));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x41 = INT32_MAX;
	int64_t x42 = INT64_MIN;
	volatile int16_t x43 = 410;
	static uint32_t x44 = UINT32_MAX;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x41>>((x42%x43)/x44));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x53 = 14LL;
	int32_t x54 = INT32_MAX;
	uint8_t x55 = 40U;
	int16_t x56 = -954;
	volatile int64_t t5 = 1029LL;

	t5 = (x53>>((x54%x55)/x56));

	if (t5 != 14LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x57 = 311949U;
	volatile int16_t x58 = INT16_MAX;
	static int16_t x59 = INT16_MIN;
	volatile int64_t x60 = INT64_MAX;
	volatile uint32_t t6 = 230350856U;

	t6 = (x57>>((x58%x59)/x60));

	if (t6 != 311949U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x65 = 0;
	volatile int64_t x66 = -1LL;
	static volatile int64_t x67 = -1LL;
	uint32_t x68 = UINT32_MAX;
	static volatile int32_t t7 = -3;

	t7 = (x65>>((x66%x67)/x68));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x70 = INT8_MAX;
	volatile uint16_t x71 = 832U;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x69>>((x70%x71)/x72));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x77 = 0;
	uint8_t x78 = 40U;
	static int8_t x79 = -1;
	static int32_t t9 = 31266320;

	t9 = (x77>>((x78%x79)/x80));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x81 = UINT8_MAX;
	uint16_t x82 = 1444U;
	volatile int8_t x83 = -1;
	int16_t x84 = INT16_MAX;
	volatile int32_t t10 = 18173;

	t10 = (x81>>((x82%x83)/x84));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x89 = 2984U;
	uint64_t x91 = 3287LLU;
	int32_t x92 = INT32_MIN;
	uint32_t t11 = 63374U;

	t11 = (x89>>((x90%x91)/x92));

	if (t11 != 2984U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x97 = 2361898LLU;
	static uint16_t x98 = 24U;
	int32_t x100 = INT32_MAX;
	uint64_t t12 = 3LLU;

	t12 = (x97>>((x98%x99)/x100));

	if (t12 != 2361898LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x101 = UINT32_MAX;
	volatile uint32_t x102 = 850U;
	int8_t x103 = -1;
	uint64_t x104 = UINT64_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x101>>((x102%x103)/x104));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x110 = 6U;
	static int32_t x111 = INT32_MAX;
	int8_t x112 = INT8_MAX;
	volatile int32_t t14 = 0;

	t14 = (x109>>((x110%x111)/x112));

	if (t14 != 10) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x117 = 126U;
	int16_t x119 = INT16_MAX;
	uint8_t x120 = 54U;

	t15 = (x117>>((x118%x119)/x120));

	if (t15 != 126U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x121 = 13U;
	int64_t x122 = -1LL;
	volatile int64_t x123 = INT64_MIN;
	int32_t t16 = 321100;

	t16 = (x121>>((x122%x123)/x124));

	if (t16 != 13) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x129 = 13414998005877LL;
	int64_t x130 = -1LL;
	uint16_t x131 = UINT16_MAX;
	volatile int8_t x132 = -22;
	int64_t t17 = -227LL;

	t17 = (x129>>((x130%x131)/x132));

	if (t17 != 13414998005877LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x134 = INT32_MAX;
	int64_t x135 = 746458LL;
	int32_t t18 = -13363435;

	t18 = (x133>>((x134%x135)/x136));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x165 = 2505;
	uint32_t x166 = 247705U;
	int8_t x168 = INT8_MIN;
	int32_t t19 = 32738;

	t19 = (x165>>((x166%x167)/x168));

	if (t19 != 2505) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x174 = -1LL;
	int16_t x176 = -7;
	static volatile int32_t t20 = 1582082;

	t20 = (x173>>((x174%x175)/x176));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x182 = 14346U;

	t21 = (x181>>((x182%x183)/x184));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x189 = 6U;
	volatile int16_t x190 = -1;
	int8_t x192 = INT8_MIN;
	int32_t t22 = 129282425;

	t22 = (x189>>((x190%x191)/x192));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x197 = 0;
	int8_t x200 = INT8_MIN;

	t23 = (x197>>((x198%x199)/x200));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x201 = 19566483LLU;
	int16_t x202 = -1;
	int16_t x203 = -1;
	uint64_t t24 = 119926LLU;

	t24 = (x201>>((x202%x203)/x204));

	if (t24 != 19566483LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x205 = UINT8_MAX;
	volatile int32_t x206 = INT32_MIN;
	int64_t x207 = -2LL;
	volatile int16_t x208 = INT16_MAX;
	int32_t t25 = 49716063;

	t25 = (x205>>((x206%x207)/x208));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x209 = UINT32_MAX;
	volatile uint32_t x210 = 709271365U;
	volatile int16_t x211 = INT16_MAX;
	int32_t x212 = -507;
	uint32_t t26 = UINT32_MAX;

	t26 = (x209>>((x210%x211)/x212));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x214 = -1LL;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;

	t27 = (x213>>((x214%x215)/x216));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x217 = 4528736937538764764LLU;
	int32_t x218 = -1;
	int8_t x219 = 5;
	volatile uint64_t t28 = 123491402676170248LLU;

	t28 = (x217>>((x218%x219)/x220));

	if (t28 != 2264368468769382382LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x245 = INT16_MAX;
	uint8_t x247 = UINT8_MAX;
	static int16_t x248 = INT16_MIN;
	static int32_t t29 = -61781;

	t29 = (x245>>((x246%x247)/x248));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x249 = 562050321122601LLU;
	uint64_t x250 = UINT64_MAX;
	int32_t x251 = INT32_MAX;
	uint32_t x252 = UINT32_MAX;
	static uint64_t t30 = 425448LLU;

	t30 = (x249>>((x250%x251)/x252));

	if (t30 != 562050321122601LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x262 = INT32_MIN;
	int64_t x263 = -1LL;
	uint64_t t31 = UINT64_MAX;

	t31 = (x261>>((x262%x263)/x264));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x266 = INT64_MIN;
	int16_t x267 = -1;
	static uint16_t x268 = 7069U;
	volatile int32_t t32 = -2026844;

	t32 = (x265>>((x266%x267)/x268));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x273 = 20716924311475LLU;
	volatile uint32_t x274 = 150870U;
	static int32_t x275 = INT32_MAX;
	static int16_t x276 = -43;
	volatile uint64_t t33 = 141524818352LLU;

	t33 = (x273>>((x274%x275)/x276));

	if (t33 != 20716924311475LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x278 = UINT64_MAX;
	static int64_t x279 = INT64_MAX;
	uint64_t x280 = UINT64_MAX;
	static int64_t t34 = -383141LL;

	t34 = (x277>>((x278%x279)/x280));

	if (t34 != 7406078054740349LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x281 = INT8_MAX;
	uint16_t x283 = 7892U;
	volatile int32_t t35 = 0;

	t35 = (x281>>((x282%x283)/x284));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x289 = 11114454313760601LLU;
	int8_t x290 = INT8_MIN;
	static int8_t x291 = INT8_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile uint64_t t36 = 235234905535105LLU;

	t36 = (x289>>((x290%x291)/x292));

	if (t36 != 11114454313760601LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x293 = INT16_MAX;
	int64_t x294 = -1LL;
	static int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MIN;
	int32_t t37 = 129752;

	t37 = (x293>>((x294%x295)/x296));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = -29;
	int16_t x300 = INT16_MIN;
	uint64_t t38 = 342330588441LLU;

	t38 = (x297>>((x298%x299)/x300));

	if (t38 != 11847144971315LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x309 = 3;
	int16_t x310 = INT16_MIN;
	int16_t x311 = -1;
	static uint64_t x312 = 2LLU;
	int32_t t39 = -1132;

	t39 = (x309>>((x310%x311)/x312));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x314 = 4496363063634372050LL;
	volatile int16_t x315 = -1;
	static int8_t x316 = -25;
	volatile int32_t t40 = INT32_MAX;

	t40 = (x313>>((x314%x315)/x316));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x317 = UINT16_MAX;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t41 = -135963;

	t41 = (x317>>((x318%x319)/x320));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x349 = UINT64_MAX;
	uint8_t x350 = UINT8_MAX;
	int8_t x351 = INT8_MAX;
	uint64_t x352 = 453436753194LLU;
	uint64_t t42 = UINT64_MAX;

	t42 = (x349>>((x350%x351)/x352));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MIN;
	uint64_t t43 = UINT64_MAX;

	t43 = (x353>>((x354%x355)/x356));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x369 = INT32_MAX;
	uint16_t x370 = 0U;
	uint16_t x371 = 4383U;
	int16_t x372 = -1;

	t44 = (x369>>((x370%x371)/x372));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x383 = -1;
	int32_t x384 = INT32_MIN;

	t45 = (x381>>((x382%x383)/x384));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x393 = INT64_MAX;
	uint64_t x394 = UINT64_MAX;
	int8_t x396 = -62;
	volatile int64_t t46 = INT64_MAX;

	t46 = (x393>>((x394%x395)/x396));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x397 = 4U;
	uint8_t x399 = 116U;
	volatile int16_t x400 = 541;
	int32_t t47 = 60;

	t47 = (x397>>((x398%x399)/x400));

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x413 = 54;
	int8_t x414 = INT8_MAX;
	int32_t x415 = INT32_MAX;
	int8_t x416 = INT8_MIN;
	int32_t t48 = 6858946;

	t48 = (x413>>((x414%x415)/x416));

	if (t48 != 54) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x429 = INT8_MAX;
	static uint16_t x430 = 3U;
	int64_t x431 = 25409113862LL;
	int8_t x432 = 55;
	int32_t t49 = 1;

	t49 = (x429>>((x430%x431)/x432));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x433 = UINT64_MAX;
	volatile uint8_t x435 = 19U;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x433>>((x434%x435)/x436));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x441 = UINT32_MAX;
	static volatile uint16_t x442 = UINT16_MAX;
	static int64_t x443 = -1LL;
	uint8_t x444 = 13U;
	uint32_t t51 = UINT32_MAX;

	t51 = (x441>>((x442%x443)/x444));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x449 = 6LL;
	static volatile uint64_t x450 = 1774817LLU;
	volatile int32_t x451 = INT32_MIN;
	int16_t x452 = -1;
	static volatile int64_t t52 = 129468LL;

	t52 = (x449>>((x450%x451)/x452));

	if (t52 != 6LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x453 = 7U;
	uint64_t x454 = 1240805557LLU;
	uint16_t x456 = 2010U;

	t53 = (x453>>((x454%x455)/x456));

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x470 = 0;
	int16_t x472 = INT16_MIN;

	t54 = (x469>>((x470%x471)/x472));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x473 = 2U;
	int8_t x474 = 1;
	static volatile int32_t x475 = INT32_MIN;
	static int8_t x476 = INT8_MIN;
	int32_t t55 = 2;

	t55 = (x473>>((x474%x475)/x476));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x481 = INT32_MAX;
	volatile int32_t x482 = INT32_MIN;
	int32_t x484 = INT32_MAX;
	static volatile int32_t t56 = INT32_MAX;

	t56 = (x481>>((x482%x483)/x484));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x505 = 3;
	uint16_t x507 = 8U;
	uint64_t x508 = 100201044615182889LLU;
	int32_t t57 = -1;

	t57 = (x505>>((x506%x507)/x508));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x509 = 8538U;
	int8_t x510 = INT8_MAX;
	int8_t x511 = INT8_MAX;
	int32_t x512 = INT32_MIN;
	volatile int32_t t58 = -12;

	t58 = (x509>>((x510%x511)/x512));

	if (t58 != 8538) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x522 = INT16_MAX;
	static uint8_t x523 = 81U;
	int16_t x524 = INT16_MAX;
	volatile int32_t t59 = -106;

	t59 = (x521>>((x522%x523)/x524));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x525 = 0U;
	int8_t x527 = 4;
	volatile int32_t t60 = 44026;

	t60 = (x525>>((x526%x527)/x528));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x529 = 1629U;
	int64_t x530 = -1LL;
	int32_t x532 = -1;

	t61 = (x529>>((x530%x531)/x532));

	if (t61 != 1629U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x541 = 32526929373837LL;
	volatile int16_t x542 = INT16_MAX;
	int32_t x544 = INT32_MIN;
	volatile int64_t t62 = 7356410280194LL;

	t62 = (x541>>((x542%x543)/x544));

	if (t62 != 32526929373837LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x556 = INT32_MAX;
	int32_t t63 = -17515;

	t63 = (x553>>((x554%x555)/x556));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x557 = INT32_MAX;
	int8_t x559 = INT8_MAX;
	int64_t x560 = INT64_MAX;
	int32_t t64 = INT32_MAX;

	t64 = (x557>>((x558%x559)/x560));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x573 = 20U;
	volatile int8_t x574 = 0;
	int16_t x575 = INT16_MIN;
	int64_t x576 = INT64_MIN;
	volatile uint32_t t65 = 2849U;

	t65 = (x573>>((x574%x575)/x576));

	if (t65 != 20U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x587 = -1;
	volatile int32_t t66 = -5;

	t66 = (x585>>((x586%x587)/x588));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x613 = INT64_MAX;
	int16_t x614 = INT16_MIN;
	static int16_t x615 = 5;
	int32_t x616 = INT32_MIN;
	int64_t t67 = INT64_MAX;

	t67 = (x613>>((x614%x615)/x616));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x643 = 1U;
	uint32_t x644 = 4978U;
	static volatile uint64_t t68 = UINT64_MAX;

	t68 = (x641>>((x642%x643)/x644));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x653 = 419;
	uint8_t x654 = 67U;

	t69 = (x653>>((x654%x655)/x656));

	if (t69 != 419) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x659 = -1LL;
	int64_t x660 = 2156074702469LL;

	t70 = (x657>>((x658%x659)/x660));

	if (t70 != 41) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x676 = INT16_MIN;
	int32_t t71 = -5;

	t71 = (x673>>((x674%x675)/x676));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x681 = UINT8_MAX;
	int32_t x683 = INT32_MIN;
	int16_t x684 = INT16_MAX;
	int32_t t72 = -15;

	t72 = (x681>>((x682%x683)/x684));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x685 = UINT8_MAX;
	int8_t x686 = -1;
	uint8_t x687 = UINT8_MAX;
	int32_t x688 = 132307;
	volatile int32_t t73 = -47;

	t73 = (x685>>((x686%x687)/x688));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x701 = 18U;
	static int64_t x702 = INT64_MIN;

	t74 = (x701>>((x702%x703)/x704));

	if (t74 != 18) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x713 = 3U;
	static int64_t x714 = -1LL;
	int32_t x716 = INT32_MAX;
	int32_t t75 = 408;

	t75 = (x713>>((x714%x715)/x716));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x722 = INT8_MIN;
	int16_t x723 = INT16_MIN;

	t76 = (x721>>((x722%x723)/x724));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x749 = INT16_MAX;
	int16_t x750 = INT16_MIN;
	int32_t x751 = -823540392;
	int32_t x752 = INT32_MIN;
	volatile int32_t t77 = 56;

	t77 = (x749>>((x750%x751)/x752));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x753 = 0U;
	int16_t x754 = -1;
	int16_t x755 = INT16_MAX;
	uint32_t t78 = 2U;

	t78 = (x753>>((x754%x755)/x756));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x757 = 3;
	int16_t x758 = INT16_MIN;
	static int32_t x759 = INT32_MAX;
	int32_t x760 = INT32_MIN;

	t79 = (x757>>((x758%x759)/x760));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x777 = 12U;
	uint16_t x779 = 1U;
	uint16_t x780 = UINT16_MAX;

	t80 = (x777>>((x778%x779)/x780));

	if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x782 = INT64_MIN;
	int64_t x784 = -1LL;
	int32_t t81 = -1005091429;

	t81 = (x781>>((x782%x783)/x784));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x785 = 125463;
	volatile int8_t x787 = 33;
	volatile int16_t x788 = INT16_MIN;

	t82 = (x785>>((x786%x787)/x788));

	if (t82 != 125463) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x793 = INT16_MAX;
	static volatile int8_t x795 = -1;
	int16_t x796 = INT16_MIN;
	int32_t t83 = 1935318;

	t83 = (x793>>((x794%x795)/x796));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x801 = 8493;
	uint32_t x802 = 90033131U;
	uint8_t x803 = UINT8_MAX;
	static int16_t x804 = INT16_MIN;
	static int32_t t84 = -28421;

	t84 = (x801>>((x802%x803)/x804));

	if (t84 != 8493) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x821 = 82955U;
	int16_t x822 = INT16_MIN;
	static uint16_t x823 = 15U;
	static volatile uint32_t t85 = 670U;

	t85 = (x821>>((x822%x823)/x824));

	if (t85 != 82955U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x825 = 2U;
	static int32_t x826 = INT32_MIN;
	int16_t x827 = INT16_MIN;
	volatile int32_t t86 = 523;

	t86 = (x825>>((x826%x827)/x828));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x829 = INT8_MAX;
	volatile uint16_t x831 = 29U;
	volatile int64_t x832 = 20488700092LL;
	int32_t t87 = -1;

	t87 = (x829>>((x830%x831)/x832));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x837 = 18908U;
	volatile int8_t x838 = 7;
	uint64_t x840 = UINT64_MAX;
	int32_t t88 = -6;

	t88 = (x837>>((x838%x839)/x840));

	if (t88 != 18908) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x841 = 436082U;
	uint8_t x842 = 2U;
	volatile uint32_t t89 = 220700U;

	t89 = (x841>>((x842%x843)/x844));

	if (t89 != 436082U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x851 = -1;
	static int32_t x852 = -1699;
	static int64_t t90 = INT64_MAX;

	t90 = (x849>>((x850%x851)/x852));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x861 = UINT8_MAX;
	int64_t x862 = INT64_MIN;
	uint16_t x864 = UINT16_MAX;
	volatile int32_t t91 = 6839;

	t91 = (x861>>((x862%x863)/x864));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x885 = 602073467684LL;
	uint64_t x886 = 125282LLU;
	uint32_t x887 = UINT32_MAX;
	volatile int16_t x888 = -172;
	volatile int64_t t92 = 653292700301654045LL;

	t92 = (x885>>((x886%x887)/x888));

	if (t92 != 602073467684LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x893 = INT8_MAX;
	int16_t x895 = 1;
	volatile int32_t t93 = 224928157;

	t93 = (x893>>((x894%x895)/x896));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x910 = UINT64_MAX;
	static volatile int16_t x912 = 12992;
	volatile int64_t t94 = 1024LL;

	t94 = (x909>>((x910%x911)/x912));

	if (t94 != 6454049LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x913 = 70U;
	volatile int16_t x915 = INT16_MIN;
	int32_t t95 = -2158476;

	t95 = (x913>>((x914%x915)/x916));

	if (t95 != 70) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x921 = INT32_MAX;
	int16_t x922 = INT16_MAX;
	uint16_t x923 = 1397U;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x921>>((x922%x923)/x924));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x929 = INT32_MAX;
	int32_t x930 = 14622;
	int32_t x931 = INT32_MIN;
	static volatile uint32_t x932 = 36789401U;
	int32_t t97 = INT32_MAX;

	t97 = (x929>>((x930%x931)/x932));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x942 = 96LLU;
	uint32_t x943 = UINT32_MAX;
	uint32_t t98 = 57991U;

	t98 = (x941>>((x942%x943)/x944));

	if (t98 != 1568441047U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x965 = UINT8_MAX;
	static volatile uint8_t x966 = UINT8_MAX;
	int32_t t99 = -2526033;

	t99 = (x965>>((x966%x967)/x968));

	if (t99 != 255) { NG(); } else { ; }
	
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

