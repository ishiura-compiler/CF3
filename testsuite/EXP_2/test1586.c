#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 1;
static volatile int64_t t1 = 2LL;
volatile int8_t x18 = INT8_MIN;
static int8_t x41 = INT8_MAX;
int16_t x42 = INT16_MIN;
static int8_t x43 = 0;
uint32_t x68 = 6951147U;
int32_t x91 = -1;
int16_t x102 = -1;
uint64_t x103 = UINT64_MAX;
volatile int64_t t13 = 2887459788349496LL;
int16_t x123 = INT16_MIN;
int32_t x128 = -1;
uint32_t x134 = 508002800U;
int16_t x136 = INT16_MAX;
static int32_t x142 = -61;
int8_t x143 = -1;
volatile int64_t x155 = INT64_MAX;
uint8_t x175 = 0U;
uint16_t x180 = 3994U;
volatile int32_t t20 = 4;
static int16_t x200 = 2529;
volatile uint64_t t22 = 1000LLU;
static int32_t x206 = 7136;
int32_t x211 = -1;
static uint32_t x226 = 7970U;
volatile uint64_t x232 = 2139974526LLU;
volatile int32_t t27 = 14;
int64_t x259 = -22LL;
static int32_t x261 = INT32_MIN;
int32_t t31 = -120;
uint16_t x267 = 110U;
int64_t x297 = -1LL;
int16_t x298 = -1;
int16_t x299 = INT16_MAX;
int64_t t36 = -223252667241153874LL;
static volatile uint64_t t37 = 1685008338369943254LLU;
int32_t x374 = INT32_MIN;
uint64_t x376 = 18841343200645LLU;
volatile int64_t x382 = INT64_MIN;
volatile int64_t t44 = 779756729712903LL;
uint8_t x396 = 18U;
static volatile int32_t t45 = -37;
int8_t x402 = INT8_MIN;
uint64_t x433 = 895884265LLU;
volatile int32_t x436 = -89;
uint8_t x439 = 14U;
int64_t x440 = INT64_MAX;
volatile int64_t t51 = INT64_MAX;
int32_t x470 = INT32_MIN;
static int8_t x486 = 11;
int8_t x488 = -1;
uint8_t x493 = 5U;
uint32_t x503 = 7640U;
volatile int8_t x526 = -1;
int32_t x527 = -1;
int64_t x529 = INT64_MIN;
static int16_t x542 = -8121;
static volatile int64_t x563 = INT64_MAX;
int64_t t66 = 93668521LL;
int32_t x570 = -492506817;
uint32_t x579 = 338812U;
uint64_t x601 = 1588543LLU;
static int8_t x602 = -1;
int8_t x604 = -1;
uint64_t t69 = UINT64_MAX;
int16_t x608 = -1;
volatile int64_t x609 = INT64_MIN;
int16_t x616 = INT16_MAX;
int64_t x621 = -547LL;
uint16_t x624 = UINT16_MAX;
int16_t x628 = -1762;
int8_t x629 = 0;
int64_t t76 = -982LL;
static int16_t x645 = INT16_MIN;
int64_t x646 = 540455342LL;
static volatile int8_t x648 = INT8_MIN;
uint64_t x653 = UINT64_MAX;
static int32_t x655 = INT32_MAX;
int16_t x659 = INT16_MAX;
int16_t x661 = INT16_MIN;
int32_t t80 = INT32_MIN;
volatile int32_t x706 = 19521168;
int32_t t86 = INT32_MAX;
static volatile uint32_t x730 = 53800980U;
int8_t x735 = INT8_MAX;
int16_t x738 = INT16_MIN;
int32_t x765 = -1204026;
int64_t x767 = 19533845LL;
volatile uint32_t x768 = UINT32_MAX;
uint64_t x771 = 152670917436041225LLU;
volatile uint32_t t94 = UINT32_MAX;
static uint64_t t95 = UINT64_MAX;
int8_t x810 = 0;
uint8_t x813 = 7U;
int16_t x820 = INT16_MIN;


void f0(void) {
	int8_t x6 = INT8_MIN;
	int8_t x7 = -1;
	int64_t x8 = -5632887886607144LL;
	int64_t t0 = 102416398541068924LL;

	t0 = ((x5%(x6<=x7))^x8);

	if (t0 != -5632887886607144LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = 20;
	volatile int64_t x14 = -531264369LL;
	uint8_t x15 = 6U;
	volatile int64_t x16 = 795LL;

	t1 = ((x13%(x14<=x15))^x16);

	if (t1 != 795LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 11U;
	uint8_t x19 = 11U;
	static uint8_t x20 = 85U;
	int32_t t2 = -1048177581;

	t2 = ((x17%(x18<=x19))^x20);

	if (t2 != 85) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	uint32_t x24 = 202497U;
	uint64_t t3 = 1157684652LLU;

	t3 = ((x21%(x22<=x23))^x24);

	if (t3 != 202497LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x29 = 0;
	static int8_t x30 = INT8_MIN;
	int8_t x31 = -1;
	int32_t x32 = -1;
	volatile int32_t t4 = 0;

	t4 = ((x29%(x30<=x31))^x32);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x44 = -1;
	static volatile int32_t t5 = -994355294;

	t5 = ((x41%(x42<=x43))^x44);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x53 = -133989765881LL;
	int16_t x54 = INT16_MIN;
	uint64_t x55 = UINT64_MAX;
	uint32_t x56 = 2U;
	int64_t t6 = 2295917298833LL;

	t6 = ((x53%(x54<=x55))^x56);

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x65 = 40033896413LLU;
	int16_t x66 = 623;
	volatile uint32_t x67 = 2702761U;
	static volatile uint64_t t7 = 2636267010186LLU;

	t7 = ((x65%(x66<=x67))^x68);

	if (t7 != 6951147LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x89 = -1256967LL;
	static uint32_t x90 = 3649477U;
	uint16_t x92 = 55U;
	int64_t t8 = 2863LL;

	t8 = ((x89%(x90<=x91))^x92);

	if (t8 != 55LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x93 = -1;
	int64_t x94 = INT64_MIN;
	int16_t x95 = 1;
	volatile int8_t x96 = INT8_MAX;
	int32_t t9 = 234368990;

	t9 = ((x93%(x94<=x95))^x96);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	static uint32_t x100 = UINT32_MAX;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = ((x97%(x98<=x99))^x100);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x101 = UINT32_MAX;
	int64_t x104 = -1LL;
	int64_t t11 = -5171437277037609LL;

	t11 = ((x101%(x102<=x103))^x104);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x109 = INT32_MAX;
	static int8_t x110 = -1;
	int64_t x111 = INT64_MAX;
	int64_t x112 = -1LL;
	int64_t t12 = -133751539322LL;

	t12 = ((x109%(x110<=x111))^x112);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x113 = -834004233398999143LL;
	int8_t x114 = INT8_MAX;
	static int64_t x115 = 21347689394026LL;
	int16_t x116 = 10;

	t13 = ((x113%(x114<=x115))^x116);

	if (t13 != 10LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x121 = 21U;
	int64_t x122 = -3359155182989391LL;
	uint8_t x124 = UINT8_MAX;
	int32_t t14 = 6540;

	t14 = ((x121%(x122<=x123))^x124);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x125 = -3;
	static int16_t x126 = INT16_MIN;
	int64_t x127 = -1LL;
	static volatile int32_t t15 = 6;

	t15 = ((x125%(x126<=x127))^x128);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x133 = UINT8_MAX;
	int32_t x135 = -233;
	volatile int32_t t16 = -7989;

	t16 = ((x133%(x134<=x135))^x136);

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x141 = INT16_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t17 = INT32_MIN;

	t17 = ((x141%(x142<=x143))^x144);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x153 = 120500458175LL;
	static int16_t x154 = INT16_MIN;
	volatile int8_t x156 = INT8_MIN;
	int64_t t18 = 2455LL;

	t18 = ((x153%(x154<=x155))^x156);

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x173 = 66U;
	static int64_t x174 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t19 = -6857034;

	t19 = ((x173%(x174<=x175))^x176);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x177 = INT32_MAX;
	uint64_t x178 = UINT64_MAX;
	static volatile int16_t x179 = -1;

	t20 = ((x177%(x178<=x179))^x180);

	if (t20 != 3994) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x189 = UINT32_MAX;
	int8_t x190 = INT8_MIN;
	int64_t x191 = 908368LL;
	int64_t x192 = 0LL;
	int64_t t21 = -110008338LL;

	t21 = ((x189%(x190<=x191))^x192);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x197 = 67731LLU;
	uint16_t x198 = 153U;
	static uint32_t x199 = 389436598U;

	t22 = ((x197%(x198<=x199))^x200);

	if (t22 != 2529LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x205 = 13970509223587LLU;
	static uint32_t x207 = UINT32_MAX;
	volatile int32_t x208 = INT32_MIN;
	static uint64_t t23 = 14155LLU;

	t23 = ((x205%(x206<=x207))^x208);

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x209 = INT8_MIN;
	static volatile int8_t x210 = INT8_MIN;
	static int16_t x212 = -1;
	volatile int32_t t24 = 2686;

	t24 = ((x209%(x210<=x211))^x212);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x225 = -1;
	static int32_t x227 = INT32_MIN;
	int64_t x228 = -220551002866333LL;
	volatile int64_t t25 = -1253362049739LL;

	t25 = ((x225%(x226<=x227))^x228);

	if (t25 != -220551002866333LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	static int16_t x231 = -1;
	uint64_t t26 = 542377910722121LLU;

	t26 = ((x229%(x230<=x231))^x232);

	if (t26 != 2139974526LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x233 = INT16_MIN;
	volatile int16_t x234 = 1;
	volatile int8_t x235 = INT8_MAX;
	int8_t x236 = 1;

	t27 = ((x233%(x234<=x235))^x236);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x241 = INT64_MIN;
	uint32_t x242 = 6U;
	int32_t x243 = -64207089;
	static int64_t x244 = -1LL;
	volatile int64_t t28 = -29834958111LL;

	t28 = ((x241%(x242<=x243))^x244);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x253 = INT8_MIN;
	static uint64_t x254 = UINT64_MAX;
	int8_t x255 = -1;
	volatile uint16_t x256 = 130U;
	int32_t t29 = -1;

	t29 = ((x253%(x254<=x255))^x256);

	if (t29 != 130) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x257 = 9;
	int32_t x258 = INT32_MIN;
	volatile uint64_t x260 = 11605LLU;
	uint64_t t30 = 552509LLU;

	t30 = ((x257%(x258<=x259))^x260);

	if (t30 != 11605LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MAX;
	int32_t x264 = -829950;

	t31 = ((x261%(x262<=x263))^x264);

	if (t31 != -829950) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x265 = 0;
	static int8_t x266 = INT8_MIN;
	volatile int16_t x268 = INT16_MAX;
	volatile int32_t t32 = -94;

	t32 = ((x265%(x266<=x267))^x268);

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MIN;
	static volatile uint16_t x275 = 96U;
	int16_t x276 = 13;
	int32_t t33 = -63;

	t33 = ((x273%(x274<=x275))^x276);

	if (t33 != 13) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x277 = INT8_MAX;
	int32_t x278 = -1;
	static int32_t x279 = -1;
	int32_t x280 = 79;
	volatile int32_t t34 = 527767;

	t34 = ((x277%(x278<=x279))^x280);

	if (t34 != 79) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x285 = 22U;
	volatile int64_t x286 = -1LL;
	int8_t x287 = INT8_MAX;
	volatile int64_t x288 = INT64_MAX;
	volatile int64_t t35 = INT64_MAX;

	t35 = ((x285%(x286<=x287))^x288);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x300 = 1;

	t36 = ((x297%(x298<=x299))^x300);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x309 = -1;
	static int16_t x310 = INT16_MIN;
	uint16_t x311 = 0U;
	uint64_t x312 = 507574LLU;

	t37 = ((x309%(x310<=x311))^x312);

	if (t37 != 507574LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x313 = 25U;
	int32_t x314 = -1;
	int64_t x315 = -1LL;
	int64_t x316 = INT64_MIN;
	int64_t t38 = INT64_MIN;

	t38 = ((x313%(x314<=x315))^x316);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x321 = 381936600LLU;
	int16_t x322 = -4763;
	static uint8_t x323 = 4U;
	int32_t x324 = 57039513;
	volatile uint64_t t39 = 1722456238LLU;

	t39 = ((x321%(x322<=x323))^x324);

	if (t39 != 57039513LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x357 = -78612548657LL;
	uint8_t x358 = 0U;
	volatile uint8_t x359 = 3U;
	int64_t x360 = INT64_MAX;
	static volatile int64_t t40 = INT64_MAX;

	t40 = ((x357%(x358<=x359))^x360);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x365 = -51481339515950846LL;
	uint32_t x366 = 1854987783U;
	int64_t x367 = 14242973879LL;
	int8_t x368 = -1;
	volatile int64_t t41 = -406016268786461LL;

	t41 = ((x365%(x366<=x367))^x368);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x375 = INT32_MIN;
	uint64_t t42 = 11672153544394599LLU;

	t42 = ((x373%(x374<=x375))^x376);

	if (t42 != 18841343200645LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x381 = INT16_MAX;
	uint16_t x383 = UINT16_MAX;
	uint8_t x384 = 1U;
	volatile int32_t t43 = 50618247;

	t43 = ((x381%(x382<=x383))^x384);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = -1LL;
	volatile uint8_t x391 = 15U;
	uint32_t x392 = 13141U;

	t44 = ((x389%(x390<=x391))^x392);

	if (t44 != 13141LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = -1;
	static uint8_t x395 = 13U;

	t45 = ((x393%(x394<=x395))^x396);

	if (t45 != 18) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x401 = INT32_MIN;
	uint32_t x403 = UINT32_MAX;
	static uint64_t x404 = 400643LLU;
	volatile uint64_t t46 = 30258915LLU;

	t46 = ((x401%(x402<=x403))^x404);

	if (t46 != 400643LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	int32_t x408 = -4052223;
	volatile int32_t t47 = 52718302;

	t47 = ((x405%(x406<=x407))^x408);

	if (t47 != -4052223) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x417 = 7U;
	uint8_t x418 = 115U;
	int32_t x419 = INT32_MAX;
	int64_t x420 = INT64_MIN;
	volatile int64_t t48 = INT64_MIN;

	t48 = ((x417%(x418<=x419))^x420);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x429 = 7U;
	uint64_t x430 = 47LLU;
	static volatile int8_t x431 = INT8_MAX;
	static uint32_t x432 = 1012260U;
	volatile uint32_t t49 = 687U;

	t49 = ((x429%(x430<=x431))^x432);

	if (t49 != 1012260U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x434 = INT64_MIN;
	uint8_t x435 = UINT8_MAX;
	uint64_t t50 = 6163177896698075LLU;

	t50 = ((x433%(x434<=x435))^x436);

	if (t50 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x437 = -1;
	int64_t x438 = -109825276903520LL;

	t51 = ((x437%(x438<=x439))^x440);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x461 = 6;
	static volatile int64_t x462 = -499954105LL;
	volatile int64_t x463 = -1LL;
	int32_t x464 = 37;
	int32_t t52 = 3898023;

	t52 = ((x461%(x462<=x463))^x464);

	if (t52 != 37) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x469 = INT8_MIN;
	volatile int32_t x471 = INT32_MAX;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t53 = 437;

	t53 = ((x469%(x470<=x471))^x472);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x477 = 12558U;
	uint32_t x478 = 1749U;
	int8_t x479 = INT8_MIN;
	int64_t x480 = -1LL;
	int64_t t54 = 3597373097663585034LL;

	t54 = ((x477%(x478<=x479))^x480);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x481 = INT32_MAX;
	uint64_t x482 = UINT64_MAX;
	int16_t x483 = -1;
	int64_t x484 = INT64_MIN;
	static int64_t t55 = INT64_MIN;

	t55 = ((x481%(x482<=x483))^x484);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x485 = INT16_MIN;
	int8_t x487 = INT8_MAX;
	volatile int32_t t56 = -1706;

	t56 = ((x485%(x486<=x487))^x488);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x494 = 7429268355762LLU;
	int8_t x495 = INT8_MIN;
	uint64_t x496 = UINT64_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x493%(x494<=x495))^x496);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x501 = 42106097U;
	static int64_t x502 = INT64_MIN;
	static int64_t x504 = INT64_MIN;
	volatile int64_t t58 = INT64_MIN;

	t58 = ((x501%(x502<=x503))^x504);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x525 = UINT16_MAX;
	int64_t x528 = INT64_MIN;
	volatile int64_t t59 = INT64_MIN;

	t59 = ((x525%(x526<=x527))^x528);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x530 = -1;
	int16_t x531 = -1;
	uint32_t x532 = 26690U;
	static int64_t t60 = 358141372350872LL;

	t60 = ((x529%(x530<=x531))^x532);

	if (t60 != 26690LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x541 = 7U;
	int16_t x543 = -1;
	static uint8_t x544 = 81U;
	static volatile int32_t t61 = -775370967;

	t61 = ((x541%(x542<=x543))^x544);

	if (t61 != 81) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x545 = 0;
	int64_t x546 = INT64_MIN;
	static uint32_t x547 = UINT32_MAX;
	int64_t x548 = -54212424474573925LL;
	volatile int64_t t62 = -14197LL;

	t62 = ((x545%(x546<=x547))^x548);

	if (t62 != -54212424474573925LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x549 = INT16_MIN;
	int32_t x550 = -1;
	uint32_t x551 = UINT32_MAX;
	uint64_t x552 = 299LLU;
	uint64_t t63 = 47088LLU;

	t63 = ((x549%(x550<=x551))^x552);

	if (t63 != 299LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x553 = INT64_MIN;
	uint32_t x554 = UINT32_MAX;
	volatile uint64_t x555 = UINT64_MAX;
	int64_t x556 = -22580443LL;
	volatile int64_t t64 = -1LL;

	t64 = ((x553%(x554<=x555))^x556);

	if (t64 != -22580443LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x557 = -1;
	static uint32_t x558 = 64485132U;
	static volatile int32_t x559 = INT32_MIN;
	int16_t x560 = -1;
	static volatile int32_t t65 = 2662;

	t65 = ((x557%(x558<=x559))^x560);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x561 = -37044;
	int64_t x562 = INT64_MIN;
	int64_t x564 = -593566980971LL;

	t66 = ((x561%(x562<=x563))^x564);

	if (t66 != -593566980971LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x569 = INT32_MIN;
	int16_t x571 = -1;
	uint32_t x572 = 747U;
	volatile uint32_t t67 = 1U;

	t67 = ((x569%(x570<=x571))^x572);

	if (t67 != 747U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x577 = INT16_MIN;
	uint16_t x578 = UINT16_MAX;
	volatile int32_t x580 = 2666;
	static volatile int32_t t68 = 225939;

	t68 = ((x577%(x578<=x579))^x580);

	if (t68 != 2666) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x603 = INT8_MAX;

	t69 = ((x601%(x602<=x603))^x604);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x605 = 232575U;
	static uint32_t x606 = 457U;
	uint16_t x607 = UINT16_MAX;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = ((x605%(x606<=x607))^x608);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x610 = -1LL;
	int32_t x611 = INT32_MAX;
	int64_t x612 = INT64_MIN;
	int64_t t71 = INT64_MIN;

	t71 = ((x609%(x610<=x611))^x612);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x613 = INT8_MIN;
	static int64_t x614 = INT64_MIN;
	int16_t x615 = 50;
	volatile int32_t t72 = 2;

	t72 = ((x613%(x614<=x615))^x616);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x622 = -1;
	int8_t x623 = 31;
	int64_t t73 = -320967478885LL;

	t73 = ((x621%(x622<=x623))^x624);

	if (t73 != 65535LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x625 = UINT64_MAX;
	static uint8_t x626 = 15U;
	uint32_t x627 = 58U;
	volatile uint64_t t74 = 26791582625LLU;

	t74 = ((x625%(x626<=x627))^x628);

	if (t74 != 18446744073709549854LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x630 = UINT32_MAX;
	int64_t x631 = INT64_MAX;
	int8_t x632 = INT8_MIN;
	volatile int32_t t75 = -639149;

	t75 = ((x629%(x630<=x631))^x632);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x637 = INT64_MAX;
	int8_t x638 = INT8_MIN;
	static uint8_t x639 = UINT8_MAX;
	uint32_t x640 = UINT32_MAX;

	t76 = ((x637%(x638<=x639))^x640);

	if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x647 = 860839181U;
	int32_t t77 = 5623808;

	t77 = ((x645%(x646<=x647))^x648);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x654 = INT32_MIN;
	static int32_t x656 = -4396;
	static uint64_t t78 = 19957LLU;

	t78 = ((x653%(x654<=x655))^x656);

	if (t78 != 18446744073709547220LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x657 = INT32_MIN;
	int8_t x658 = INT8_MIN;
	int8_t x660 = INT8_MAX;
	int32_t t79 = -123932;

	t79 = ((x657%(x658<=x659))^x660);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x662 = INT16_MIN;
	volatile int16_t x663 = 1905;
	volatile int32_t x664 = INT32_MIN;

	t80 = ((x661%(x662<=x663))^x664);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x669 = -1LL;
	volatile int16_t x670 = INT16_MIN;
	int64_t x671 = -1LL;
	int16_t x672 = 1;
	volatile int64_t t81 = 40825623386169LL;

	t81 = ((x669%(x670<=x671))^x672);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x677 = -51;
	int8_t x678 = INT8_MIN;
	uint8_t x679 = 1U;
	uint32_t x680 = 61U;
	volatile uint32_t t82 = 3639U;

	t82 = ((x677%(x678<=x679))^x680);

	if (t82 != 61U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x685 = INT32_MIN;
	uint32_t x686 = 135855U;
	uint32_t x687 = UINT32_MAX;
	static int64_t x688 = -1230583LL;
	volatile int64_t t83 = -1479277221418767710LL;

	t83 = ((x685%(x686<=x687))^x688);

	if (t83 != -1230583LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x693 = -1;
	int8_t x694 = -1;
	int64_t x695 = 172LL;
	int64_t x696 = INT64_MAX;
	int64_t t84 = INT64_MAX;

	t84 = ((x693%(x694<=x695))^x696);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x705 = INT64_MAX;
	int64_t x707 = INT64_MAX;
	static int8_t x708 = INT8_MIN;
	volatile int64_t t85 = 32545LL;

	t85 = ((x705%(x706<=x707))^x708);

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x717 = UINT8_MAX;
	uint32_t x718 = 15111U;
	uint64_t x719 = 9114675216336829899LLU;
	int32_t x720 = INT32_MAX;

	t86 = ((x717%(x718<=x719))^x720);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x729 = INT32_MAX;
	static int16_t x731 = INT16_MIN;
	volatile int64_t x732 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

	t87 = ((x729%(x730<=x731))^x732);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x733 = INT8_MAX;
	static int32_t x734 = 13;
	int32_t x736 = INT32_MIN;
	int32_t t88 = INT32_MIN;

	t88 = ((x733%(x734<=x735))^x736);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x737 = -131;
	static volatile int64_t x739 = 626610050344369LL;
	int8_t x740 = 14;
	int32_t t89 = 17503;

	t89 = ((x737%(x738<=x739))^x740);

	if (t89 != 14) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x749 = INT64_MAX;
	static int16_t x750 = -1;
	uint8_t x751 = 1U;
	uint8_t x752 = UINT8_MAX;
	static volatile int64_t t90 = -820623931907330LL;

	t90 = ((x749%(x750<=x751))^x752);

	if (t90 != 255LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x766 = 3;
	uint32_t t91 = UINT32_MAX;

	t91 = ((x765%(x766<=x767))^x768);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x769 = INT32_MIN;
	uint8_t x770 = UINT8_MAX;
	static int8_t x772 = 0;
	volatile int32_t t92 = -15;

	t92 = ((x769%(x770<=x771))^x772);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x781 = -1;
	static int32_t x782 = INT32_MIN;
	uint16_t x783 = 1U;
	uint16_t x784 = 848U;
	volatile int32_t t93 = -13721;

	t93 = ((x781%(x782<=x783))^x784);

	if (t93 != 848) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x797 = INT16_MIN;
	int16_t x798 = INT16_MIN;
	uint16_t x799 = 7609U;
	volatile uint32_t x800 = UINT32_MAX;

	t94 = ((x797%(x798<=x799))^x800);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x805 = 3566005377243LLU;
	volatile int64_t x806 = INT64_MIN;
	uint32_t x807 = 5616969U;
	static volatile int8_t x808 = -1;

	t95 = ((x805%(x806<=x807))^x808);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x809 = UINT16_MAX;
	uint8_t x811 = UINT8_MAX;
	int32_t x812 = 4313;
	volatile int32_t t96 = 1;

	t96 = ((x809%(x810<=x811))^x812);

	if (t96 != 4313) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x814 = INT32_MIN;
	volatile uint32_t x815 = UINT32_MAX;
	uint32_t x816 = UINT32_MAX;
	uint32_t t97 = UINT32_MAX;

	t97 = ((x813%(x814<=x815))^x816);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x817 = UINT16_MAX;
	int64_t x818 = -2075342LL;
	static int32_t x819 = -32;
	int32_t t98 = 3067;

	t98 = ((x817%(x818<=x819))^x820);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x825 = UINT16_MAX;
	int8_t x826 = -13;
	uint32_t x827 = UINT32_MAX;
	static int8_t x828 = -4;
	volatile int32_t t99 = 3026750;

	t99 = ((x825%(x826<=x827))^x828);

	if (t99 != -4) { NG(); } else { ; }
	
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

