#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int16_t x6 = INT16_MAX;
int16_t x7 = -6;
int16_t x9 = 265;
int32_t t2 = 896572114;
static int64_t x13 = 294267LL;
int8_t x14 = -1;
volatile int64_t t3 = -523289261LL;
uint16_t x23 = 185U;
int32_t x44 = -1;
static uint32_t t6 = 1023118048U;
int8_t x58 = 59;
int32_t x63 = INT32_MAX;
static int32_t x65 = 2;
uint64_t x77 = 68790310641836LLU;
uint32_t x85 = UINT32_MAX;
volatile int64_t x95 = 3219988076259708LL;
static uint32_t x105 = 687848088U;
static uint16_t x109 = 0U;
int32_t t16 = 421;
int64_t x120 = -1LL;
volatile int32_t t20 = -1801370;
uint8_t x139 = 12U;
volatile uint64_t x153 = 9339646664760618LLU;
static int32_t x155 = -1;
volatile int8_t x180 = 8;
static int8_t x184 = 1;
int8_t x186 = INT8_MIN;
static uint32_t x202 = UINT32_MAX;
int16_t x204 = INT16_MIN;
volatile int32_t t29 = 1;
volatile uint8_t x221 = 98U;
static int32_t x229 = 259;
static int32_t t33 = -30;
volatile int32_t t35 = 1;
static uint8_t x257 = 4U;
uint8_t x258 = 114U;
int32_t t37 = -2154;
int64_t x266 = -1LL;
volatile uint8_t x280 = UINT8_MAX;
volatile int16_t x281 = INT16_MAX;
uint16_t x295 = UINT16_MAX;
uint16_t x302 = 540U;
int8_t x304 = INT8_MAX;
uint8_t x309 = 31U;
int8_t x321 = 0;
static volatile uint8_t x333 = 17U;
volatile uint32_t x345 = 1454704701U;
int32_t x346 = INT32_MIN;
static int32_t x348 = 0;
int64_t x351 = -1LL;
volatile int32_t t53 = -34287095;
uint8_t x374 = 4U;
uint64_t x376 = 104LLU;
uint8_t x385 = UINT8_MAX;
static int32_t x392 = -23;
int16_t x400 = INT16_MIN;
int32_t x426 = INT32_MIN;
static volatile int64_t t58 = 186LL;
int64_t x439 = -1745201702964739LL;
int64_t x448 = -376301708LL;
int32_t x452 = -1;
uint16_t x457 = 6948U;
static uint8_t x458 = 5U;
static int8_t x499 = -2;
static int32_t t64 = 4317;
static int16_t x502 = INT16_MAX;
volatile int32_t t66 = 36853004;
volatile int32_t x516 = -1;
volatile uint8_t x522 = UINT8_MAX;
static int32_t t69 = -1389519;
volatile int64_t t70 = INT64_MAX;
volatile uint32_t x537 = 371228130U;
int64_t x541 = 2799661LL;
static uint32_t x546 = 206839236U;
volatile int32_t x549 = 61;
int8_t x550 = -1;
static uint16_t x552 = 366U;
uint32_t x564 = 1919U;
uint64_t t78 = 19309931850827797LLU;
uint64_t t79 = 360265934114556516LLU;
uint64_t x597 = 629524LLU;
uint16_t x607 = 1876U;
volatile int16_t x616 = -1365;
volatile int64_t x642 = INT64_MAX;
static volatile uint32_t x659 = 117702U;
int8_t x676 = -1;
uint32_t t93 = 52U;
uint64_t x677 = 126565LLU;
int32_t x680 = 26396101;
uint16_t x688 = 51U;
int32_t x710 = INT32_MIN;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = 2;

	t0 = (x1>>((x2%x3)<=x4));

	if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 28;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = -951;

	t1 = (x5>>((x6%x7)<=x8));

	if (t1 != 14) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	volatile int8_t x11 = INT8_MAX;
	uint32_t x12 = 447589251U;

	t2 = (x9>>((x10%x11)<=x12));

	if (t2 != 132) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = -1;

	t3 = (x13>>((x14%x15)<=x16));

	if (t3 != 147133LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	static uint64_t x22 = 360392148406684406LLU;
	int8_t x24 = 62;
	uint64_t t4 = UINT64_MAX;

	t4 = (x21>>((x22%x23)<=x24));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MIN;
	static volatile int8_t x35 = INT8_MIN;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t5 = -5553;

	t5 = (x33>>((x34%x35)<=x36));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 625U;
	int8_t x42 = INT8_MIN;
	uint16_t x43 = UINT16_MAX;

	t6 = (x41>>((x42%x43)<=x44));

	if (t6 != 312U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x53 = 72U;
	int32_t x54 = INT32_MAX;
	int64_t x55 = INT64_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile uint32_t t7 = 1U;

	t7 = (x53>>((x54%x55)<=x56));

	if (t7 != 72U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x57 = INT16_MAX;
	uint32_t x59 = UINT32_MAX;
	volatile int64_t x60 = INT64_MIN;
	int32_t t8 = -65903614;

	t8 = (x57>>((x58%x59)<=x60));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x61 = 3828LLU;
	uint32_t x62 = UINT32_MAX;
	int32_t x64 = INT32_MIN;
	volatile uint64_t t9 = 186557242157081LLU;

	t9 = (x61>>((x62%x63)<=x64));

	if (t9 != 1914LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x66 = 412483U;
	uint64_t x67 = 60593834621165LLU;
	int64_t x68 = INT64_MIN;
	int32_t t10 = 1670655;

	t10 = (x65>>((x66%x67)<=x68));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x78 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	volatile int16_t x80 = -1;
	volatile uint64_t t11 = 2849LLU;

	t11 = (x77>>((x78%x79)<=x80));

	if (t11 != 68790310641836LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 91U;
	volatile uint64_t x88 = 24521LLU;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x85>>((x86%x87)<=x88));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = 2;
	int8_t x94 = -1;
	int8_t x96 = INT8_MIN;
	int32_t t13 = 346844057;

	t13 = (x93>>((x94%x95)<=x96));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = 102;
	int32_t x98 = 11559;
	int64_t x99 = INT64_MIN;
	volatile uint64_t x100 = UINT64_MAX;
	static int32_t t14 = 17051;

	t14 = (x97>>((x98%x99)<=x100));

	if (t14 != 51) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x106 = INT64_MIN;
	volatile int16_t x107 = 5;
	uint16_t x108 = 2034U;
	uint32_t t15 = 1813292U;

	t15 = (x105>>((x106%x107)<=x108));

	if (t15 != 343924044U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x110 = -1;
	uint64_t x111 = 14038770056689LLU;
	int32_t x112 = INT32_MIN;

	t16 = (x109>>((x110%x111)<=x112));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x117 = 11349847U;
	int64_t x118 = -1LL;
	int8_t x119 = 2;
	static volatile uint32_t t17 = 620069580U;

	t17 = (x117>>((x118%x119)<=x120));

	if (t17 != 5674923U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x121 = INT64_MAX;
	static int16_t x122 = INT16_MAX;
	int32_t x123 = INT32_MAX;
	uint64_t x124 = 281112519011503LLU;
	volatile int64_t t18 = -125LL;

	t18 = (x121>>((x122%x123)<=x124));

	if (t18 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x125 = UINT64_MAX;
	volatile uint8_t x126 = 11U;
	volatile int32_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	uint64_t t19 = 14311LLU;

	t19 = (x125>>((x126%x127)<=x128));

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x129 = 3023U;
	int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MAX;
	static int32_t x132 = -6;

	t20 = (x129>>((x130%x131)<=x132));

	if (t20 != 1511) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x137 = 15194872053792LLU;
	static int8_t x138 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	uint64_t t21 = 976710957974LLU;

	t21 = (x137>>((x138%x139)<=x140));

	if (t21 != 15194872053792LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x141 = UINT16_MAX;
	int64_t x142 = -1720543071503086960LL;
	int16_t x143 = 9;
	volatile int8_t x144 = INT8_MIN;
	volatile int32_t t22 = -1;

	t22 = (x141>>((x142%x143)<=x144));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x154 = UINT64_MAX;
	uint64_t x156 = UINT64_MAX;
	uint64_t t23 = 8528603382533415975LLU;

	t23 = (x153>>((x154%x155)<=x156));

	if (t23 != 4669823332380309LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x177 = 19LL;
	volatile int32_t x178 = -1283;
	volatile int32_t x179 = INT32_MIN;
	static int64_t t24 = 4473508911889469866LL;

	t24 = (x177>>((x178%x179)<=x180));

	if (t24 != 9LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x181 = UINT8_MAX;
	int16_t x182 = -1;
	int8_t x183 = -1;
	int32_t t25 = 0;

	t25 = (x181>>((x182%x183)<=x184));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x185 = 1998;
	uint64_t x187 = UINT64_MAX;
	static int32_t x188 = -1;
	static volatile int32_t t26 = -6020783;

	t26 = (x185>>((x186%x187)<=x188));

	if (t26 != 999) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x197 = 8;
	uint64_t x198 = 3409389015792LLU;
	static volatile uint64_t x199 = 592LLU;
	uint16_t x200 = 3U;
	int32_t t27 = -62707;

	t27 = (x197>>((x198%x199)<=x200));

	if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x201 = 1U;
	volatile int16_t x203 = 6917;
	int32_t t28 = 22242378;

	t28 = (x201>>((x202%x203)<=x204));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x209 = UINT16_MAX;
	static int32_t x210 = 407325;
	int64_t x211 = 2103937039LL;
	int32_t x212 = INT32_MAX;

	t29 = (x209>>((x210%x211)<=x212));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x217 = INT32_MAX;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = -1;
	volatile int32_t x220 = -1;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x217>>((x218%x219)<=x220));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x222 = -6;
	volatile uint16_t x223 = 267U;
	int8_t x224 = INT8_MIN;
	static int32_t t31 = -1025338655;

	t31 = (x221>>((x222%x223)<=x224));

	if (t31 != 98) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x225 = 3291U;
	uint8_t x226 = 0U;
	static uint32_t x227 = UINT32_MAX;
	static volatile uint8_t x228 = 7U;
	volatile int32_t t32 = -1;

	t32 = (x225>>((x226%x227)<=x228));

	if (t32 != 1645) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x230 = INT16_MIN;
	uint16_t x231 = 229U;
	int8_t x232 = INT8_MAX;

	t33 = (x229>>((x230%x231)<=x232));

	if (t33 != 129) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x233 = UINT16_MAX;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = UINT8_MAX;
	uint16_t x236 = UINT16_MAX;
	int32_t t34 = 27;

	t34 = (x233>>((x234%x235)<=x236));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x245 = 93U;
	int16_t x246 = INT16_MIN;
	uint64_t x247 = 29294LLU;
	int16_t x248 = 1173;

	t35 = (x245>>((x246%x247)<=x248));

	if (t35 != 93) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x249 = INT16_MAX;
	static int16_t x250 = -1;
	static volatile int64_t x251 = INT64_MIN;
	uint64_t x252 = 1LLU;
	int32_t t36 = -126257;

	t36 = (x249>>((x250%x251)<=x252));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x259 = 710U;
	volatile int32_t x260 = 2090858;

	t37 = (x257>>((x258%x259)<=x260));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x265 = 99U;
	int32_t x267 = 1;
	int8_t x268 = 0;
	int32_t t38 = -127;

	t38 = (x265>>((x266%x267)<=x268));

	if (t38 != 49) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x277 = 2U;
	int64_t x278 = INT64_MAX;
	uint16_t x279 = UINT16_MAX;
	static uint32_t t39 = 145213934U;

	t39 = (x277>>((x278%x279)<=x280));

	if (t39 != 2U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x282 = UINT8_MAX;
	int8_t x283 = INT8_MIN;
	volatile int64_t x284 = INT64_MAX;
	int32_t t40 = -4996;

	t40 = (x281>>((x282%x283)<=x284));

	if (t40 != 16383) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x285 = 4;
	int64_t x286 = INT64_MIN;
	uint16_t x287 = 27702U;
	int32_t x288 = INT32_MIN;
	int32_t t41 = 151067596;

	t41 = (x285>>((x286%x287)<=x288));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x289 = INT16_MAX;
	static int16_t x290 = -1090;
	int16_t x291 = -79;
	uint16_t x292 = 158U;
	static int32_t t42 = -57271;

	t42 = (x289>>((x290%x291)<=x292));

	if (t42 != 16383) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x293 = UINT32_MAX;
	static volatile int16_t x294 = INT16_MIN;
	uint16_t x296 = 7U;
	uint32_t t43 = 168U;

	t43 = (x293>>((x294%x295)<=x296));

	if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x297 = 243U;
	int64_t x298 = INT64_MIN;
	static int64_t x299 = INT64_MAX;
	int64_t x300 = INT64_MAX;
	volatile int32_t t44 = 26138576;

	t44 = (x297>>((x298%x299)<=x300));

	if (t44 != 121) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x301 = 181136U;
	int32_t x303 = -3;
	volatile uint32_t t45 = 250155U;

	t45 = (x301>>((x302%x303)<=x304));

	if (t45 != 90568U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x305 = 2U;
	int8_t x306 = INT8_MAX;
	uint16_t x307 = 77U;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t46 = -90572;

	t46 = (x305>>((x306%x307)<=x308));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x310 = 636645391902LL;
	static int32_t x311 = INT32_MIN;
	static uint32_t x312 = 12757786U;
	static int32_t t47 = -22621367;

	t47 = (x309>>((x310%x311)<=x312));

	if (t47 != 31) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x322 = -1;
	volatile int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MAX;
	volatile int32_t t48 = 3812;

	t48 = (x321>>((x322%x323)<=x324));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x329 = 715;
	volatile uint16_t x330 = 409U;
	volatile int64_t x331 = 3485LL;
	volatile int32_t x332 = INT32_MIN;
	static volatile int32_t t49 = 1;

	t49 = (x329>>((x330%x331)<=x332));

	if (t49 != 715) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x334 = -3694;
	uint64_t x335 = 1LLU;
	static int8_t x336 = -1;
	int32_t t50 = 52;

	t50 = (x333>>((x334%x335)<=x336));

	if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x347 = 256860658U;
	uint32_t t51 = 43520U;

	t51 = (x345>>((x346%x347)<=x348));

	if (t51 != 1454704701U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x349 = 40U;
	int64_t x350 = INT64_MIN;
	static uint16_t x352 = 423U;
	int32_t t52 = -82631369;

	t52 = (x349>>((x350%x351)<=x352));

	if (t52 != 20) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x353 = UINT16_MAX;
	uint8_t x354 = 12U;
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = 2125;

	t53 = (x353>>((x354%x355)<=x356));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x373 = 5U;
	int16_t x375 = INT16_MIN;
	int32_t t54 = -4966;

	t54 = (x373>>((x374%x375)<=x376));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x386 = INT16_MIN;
	uint16_t x387 = 4U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t55 = 18;

	t55 = (x385>>((x386%x387)<=x388));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x389 = 349899155U;
	volatile uint8_t x390 = 3U;
	int64_t x391 = INT64_MIN;
	uint32_t t56 = 1903529466U;

	t56 = (x389>>((x390%x391)<=x392));

	if (t56 != 349899155U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x397 = 2U;
	static volatile int64_t x398 = INT64_MIN;
	int64_t x399 = -11615LL;
	int32_t t57 = -3494750;

	t57 = (x397>>((x398%x399)<=x400));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x425 = 95164619065933LL;
	volatile uint8_t x427 = UINT8_MAX;
	static uint32_t x428 = 7U;

	t58 = (x425>>((x426%x427)<=x428));

	if (t58 != 95164619065933LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x437 = UINT32_MAX;
	uint16_t x438 = UINT16_MAX;
	volatile uint64_t x440 = 7862889495082LLU;
	volatile uint32_t t59 = 589974U;

	t59 = (x437>>((x438%x439)<=x440));

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x445 = 11555;
	uint64_t x446 = UINT64_MAX;
	int32_t x447 = INT32_MIN;
	volatile int32_t t60 = 51622;

	t60 = (x445>>((x446%x447)<=x448));

	if (t60 != 5777) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x449 = UINT16_MAX;
	uint8_t x450 = UINT8_MAX;
	int64_t x451 = 484343LL;
	int32_t t61 = -31689;

	t61 = (x449>>((x450%x451)<=x452));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x459 = -1;
	static volatile int32_t x460 = -1;
	int32_t t62 = 86;

	t62 = (x457>>((x458%x459)<=x460));

	if (t62 != 6948) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x461 = 895;
	volatile int32_t x462 = INT32_MIN;
	static volatile int8_t x463 = -1;
	volatile int8_t x464 = -1;
	int32_t t63 = 914;

	t63 = (x461>>((x462%x463)<=x464));

	if (t63 != 895) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x497 = INT8_MAX;
	volatile int16_t x498 = -1672;
	int16_t x500 = -1;

	t64 = (x497>>((x498%x499)<=x500));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x501 = 2261;
	uint32_t x503 = UINT32_MAX;
	static volatile int32_t x504 = -1;
	static int32_t t65 = 110024927;

	t65 = (x501>>((x502%x503)<=x504));

	if (t65 != 1130) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x505 = 14938U;
	int8_t x506 = INT8_MAX;
	int8_t x507 = 7;
	uint16_t x508 = UINT16_MAX;

	t66 = (x505>>((x506%x507)<=x508));

	if (t66 != 7469) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x513 = 122495;
	int8_t x514 = -1;
	uint64_t x515 = 20875521495301LLU;
	volatile int32_t t67 = 4048;

	t67 = (x513>>((x514%x515)<=x516));

	if (t67 != 61247) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x517 = 8686796LL;
	int32_t x518 = INT32_MIN;
	volatile uint64_t x519 = 8433828931865728555LLU;
	int16_t x520 = INT16_MIN;
	volatile int64_t t68 = -26713LL;

	t68 = (x517>>((x518%x519)<=x520));

	if (t68 != 4343398LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x521 = 21U;
	int16_t x523 = -980;
	uint8_t x524 = 1U;

	t69 = (x521>>((x522%x523)<=x524));

	if (t69 != 21) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x529 = INT64_MAX;
	volatile int32_t x530 = -562087891;
	int16_t x531 = -1;
	int64_t x532 = INT64_MIN;

	t70 = (x529>>((x530%x531)<=x532));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x533 = INT8_MAX;
	static uint16_t x534 = 0U;
	volatile uint8_t x535 = 103U;
	int8_t x536 = INT8_MIN;
	static volatile int32_t t71 = -24106832;

	t71 = (x533>>((x534%x535)<=x536));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x538 = 124U;
	int64_t x539 = 84947077LL;
	uint8_t x540 = UINT8_MAX;
	uint32_t t72 = 48U;

	t72 = (x537>>((x538%x539)<=x540));

	if (t72 != 185614065U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x542 = UINT8_MAX;
	uint64_t x543 = 1758499425LLU;
	int32_t x544 = INT32_MIN;
	int64_t t73 = -13703LL;

	t73 = (x541>>((x542%x543)<=x544));

	if (t73 != 1399830LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x545 = 11797U;
	uint32_t x547 = UINT32_MAX;
	uint8_t x548 = 9U;
	static int32_t t74 = -7240439;

	t74 = (x545>>((x546%x547)<=x548));

	if (t74 != 11797) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x551 = 211920495LLU;
	static volatile int32_t t75 = -133;

	t75 = (x549>>((x550%x551)<=x552));

	if (t75 != 61) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x561 = INT16_MAX;
	uint64_t x562 = 153LLU;
	static int32_t x563 = INT32_MAX;
	int32_t t76 = -4004449;

	t76 = (x561>>((x562%x563)<=x564));

	if (t76 != 16383) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x569 = 2073054737263153LL;
	uint64_t x570 = 47478009363843LLU;
	int8_t x571 = -1;
	static int8_t x572 = INT8_MIN;
	volatile int64_t t77 = 12LL;

	t77 = (x569>>((x570%x571)<=x572));

	if (t77 != 1036527368631576LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x581 = 8847006662LLU;
	int32_t x582 = INT32_MIN;
	int32_t x583 = 492183260;
	int16_t x584 = -119;

	t78 = (x581>>((x582%x583)<=x584));

	if (t78 != 4423503331LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x593 = 65LLU;
	int64_t x594 = 1376LL;
	int64_t x595 = INT64_MIN;
	int64_t x596 = INT64_MIN;

	t79 = (x593>>((x594%x595)<=x596));

	if (t79 != 65LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x598 = INT16_MAX;
	int32_t x599 = INT32_MIN;
	static uint16_t x600 = 5U;
	uint64_t t80 = 23LLU;

	t80 = (x597>>((x598%x599)<=x600));

	if (t80 != 629524LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x601 = 974;
	int32_t x602 = INT32_MIN;
	uint16_t x603 = 35U;
	int32_t x604 = -1;
	volatile int32_t t81 = -6;

	t81 = (x601>>((x602%x603)<=x604));

	if (t81 != 487) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x605 = 44U;
	volatile uint8_t x606 = 93U;
	int8_t x608 = INT8_MIN;
	volatile int32_t t82 = 981748346;

	t82 = (x605>>((x606%x607)<=x608));

	if (t82 != 44) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x613 = 60804603272LLU;
	int32_t x614 = -1;
	uint16_t x615 = UINT16_MAX;
	static uint64_t t83 = 301953628381LLU;

	t83 = (x613>>((x614%x615)<=x616));

	if (t83 != 60804603272LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x621 = 333U;
	int32_t x622 = INT32_MIN;
	volatile int32_t x623 = INT32_MIN;
	int64_t x624 = -11LL;
	volatile int32_t t84 = 623562466;

	t84 = (x621>>((x622%x623)<=x624));

	if (t84 != 333) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x625 = UINT16_MAX;
	int16_t x626 = 587;
	static int16_t x627 = INT16_MAX;
	int8_t x628 = INT8_MIN;
	int32_t t85 = -251;

	t85 = (x625>>((x626%x627)<=x628));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x633 = 167565LL;
	volatile uint64_t x634 = 393385LLU;
	uint32_t x635 = 588024U;
	volatile int16_t x636 = -1;
	int64_t t86 = -18471889957689505LL;

	t86 = (x633>>((x634%x635)<=x636));

	if (t86 != 83782LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x637 = 6U;
	int64_t x638 = INT64_MIN;
	int8_t x639 = INT8_MIN;
	int64_t x640 = INT64_MAX;
	volatile int32_t t87 = -214221;

	t87 = (x637>>((x638%x639)<=x640));

	if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x641 = UINT32_MAX;
	int64_t x643 = INT64_MIN;
	int64_t x644 = INT64_MIN;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x641>>((x642%x643)<=x644));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x645 = INT64_MAX;
	static uint64_t x646 = 108894476LLU;
	int32_t x647 = INT32_MAX;
	uint16_t x648 = 743U;
	int64_t t89 = INT64_MAX;

	t89 = (x645>>((x646%x647)<=x648));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x653 = 125U;
	static volatile uint16_t x654 = 353U;
	int8_t x655 = INT8_MIN;
	static int32_t x656 = INT32_MIN;
	int32_t t90 = 59036255;

	t90 = (x653>>((x654%x655)<=x656));

	if (t90 != 125) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x657 = INT8_MAX;
	int16_t x658 = INT16_MIN;
	volatile int32_t x660 = INT32_MIN;
	static int32_t t91 = 9883931;

	t91 = (x657>>((x658%x659)<=x660));

	if (t91 != 63) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x665 = 192643631LLU;
	static volatile int8_t x666 = 1;
	static uint32_t x667 = 253133U;
	uint8_t x668 = 0U;
	volatile uint64_t t92 = 41858711570371LLU;

	t92 = (x665>>((x666%x667)<=x668));

	if (t92 != 192643631LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x673 = UINT32_MAX;
	int8_t x674 = -1;
	uint8_t x675 = 22U;

	t93 = (x673>>((x674%x675)<=x676));

	if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x678 = UINT64_MAX;
	int64_t x679 = -1LL;
	uint64_t t94 = 0LLU;

	t94 = (x677>>((x678%x679)<=x680));

	if (t94 != 63282LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x685 = UINT32_MAX;
	uint32_t x686 = UINT32_MAX;
	int64_t x687 = -1LL;
	volatile uint32_t t95 = 53786497U;

	t95 = (x685>>((x686%x687)<=x688));

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x689 = 10680U;
	static uint16_t x690 = UINT16_MAX;
	uint32_t x691 = UINT32_MAX;
	int64_t x692 = 57295512009223LL;
	int32_t t96 = 0;

	t96 = (x689>>((x690%x691)<=x692));

	if (t96 != 5340) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x697 = 7U;
	uint16_t x698 = 2071U;
	int8_t x699 = INT8_MIN;
	volatile int64_t x700 = INT64_MIN;
	int32_t t97 = 8136;

	t97 = (x697>>((x698%x699)<=x700));

	if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x705 = 182;
	uint32_t x706 = UINT32_MAX;
	int8_t x707 = -27;
	static uint16_t x708 = 7U;
	volatile int32_t t98 = 0;

	t98 = (x705>>((x706%x707)<=x708));

	if (t98 != 182) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x709 = INT64_MAX;
	volatile int16_t x711 = 114;
	static uint32_t x712 = UINT32_MAX;
	int64_t t99 = -466032683775LL;

	t99 = (x709>>((x710%x711)<=x712));

	if (t99 != 4611686018427387903LL) { NG(); } else { ; }
	
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

