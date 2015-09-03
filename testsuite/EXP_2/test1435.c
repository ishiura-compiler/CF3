#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
int32_t x7 = INT32_MIN;
static int32_t x8 = INT32_MIN;
volatile int32_t t0 = -56079171;
volatile int32_t x12 = INT32_MAX;
int8_t x22 = -1;
int32_t t3 = -833277;
uint64_t x33 = 3623115945788523396LLU;
uint32_t x34 = 71U;
uint8_t x45 = 0U;
volatile int32_t t6 = 91095057;
int16_t x64 = INT16_MAX;
volatile uint32_t t7 = 1654990965U;
int64_t x70 = -16151LL;
uint32_t t8 = 59U;
int64_t x82 = INT64_MIN;
int16_t x83 = INT16_MIN;
volatile int8_t x90 = INT8_MIN;
uint32_t x93 = 63670503U;
uint8_t x104 = UINT8_MAX;
uint64_t t12 = 827245795LLU;
uint64_t x115 = 559081109128LLU;
uint8_t x125 = UINT8_MAX;
volatile int32_t x151 = INT32_MIN;
int32_t t19 = 962;
uint32_t x161 = 63525338U;
volatile int16_t x170 = INT16_MIN;
volatile uint16_t x171 = 1U;
int16_t x172 = INT16_MAX;
volatile int16_t x189 = INT16_MAX;
uint32_t x201 = UINT32_MAX;
uint8_t x205 = 69U;
int32_t x207 = INT32_MIN;
int32_t x208 = 1;
volatile int32_t t28 = -4;
int8_t x218 = -1;
int64_t x220 = -1LL;
volatile uint64_t t30 = 715878LLU;
int32_t x226 = 14;
volatile int8_t x231 = INT8_MIN;
int32_t t32 = -40411;
volatile int8_t x252 = INT8_MAX;
int32_t t34 = 17;
uint32_t x253 = 5U;
volatile int8_t x254 = INT8_MIN;
uint16_t x260 = 6433U;
uint64_t x261 = UINT64_MAX;
int64_t x263 = INT64_MIN;
static volatile int8_t x266 = INT8_MIN;
static volatile uint64_t t38 = 12923800747LLU;
static int8_t x291 = 34;
int64_t x302 = -3020LL;
int64_t x303 = INT64_MAX;
static uint16_t x305 = 32665U;
uint8_t x306 = 10U;
int64_t x308 = 93789807179LL;
int64_t t42 = 25855LL;
uint64_t t43 = 113674232280LLU;
static volatile int16_t x323 = -1;
uint32_t x341 = 106U;
int8_t x342 = -4;
static volatile int32_t x343 = INT32_MAX;
int16_t x344 = 2609;
volatile uint32_t t46 = 79082963U;
uint16_t x355 = UINT16_MAX;
volatile int16_t x356 = -1;
static int8_t x361 = 8;
static volatile int8_t x362 = INT8_MIN;
static int8_t x364 = INT8_MAX;
volatile int32_t t49 = -59160937;
int16_t x369 = INT16_MAX;
int32_t t50 = -25668507;
static volatile int8_t x376 = 14;
int64_t t52 = 3219053LL;
static int64_t x388 = INT64_MIN;
volatile int64_t t53 = -1LL;
int32_t x412 = INT32_MIN;
uint64_t t56 = 24735441187LLU;
uint32_t x438 = UINT32_MAX;
int8_t x462 = 12;
uint32_t x463 = 80U;
volatile uint64_t x482 = 2380345395LLU;
static int64_t x494 = 225366406LL;
uint16_t x505 = UINT16_MAX;
int32_t x520 = INT32_MAX;
static uint32_t t66 = 79819428U;
uint32_t x542 = UINT32_MAX;
uint32_t x553 = 8U;
int32_t x554 = INT32_MIN;
static uint8_t x555 = 7U;
uint32_t t68 = 0U;
int64_t t69 = 39776LL;
volatile int8_t x567 = -1;
int16_t x583 = -1;
static volatile uint32_t t73 = 992005U;
static volatile int8_t x585 = INT8_MAX;
static int32_t x588 = -21785;
volatile int32_t t76 = 1;
uint16_t x597 = UINT16_MAX;
int64_t t78 = 67737636261733845LL;
int8_t x612 = INT8_MAX;
uint32_t x622 = 832774684U;
uint8_t x634 = UINT8_MAX;
volatile uint64_t t81 = 2LLU;
int8_t x655 = INT8_MIN;
int8_t x656 = INT8_MIN;
int64_t x660 = INT64_MIN;
volatile int64_t t84 = 1259564950LL;
int32_t x671 = 45934;
uint8_t x678 = 79U;
volatile int8_t x680 = INT8_MAX;
int16_t x686 = 31;
int64_t t88 = -3803921LL;
int64_t t90 = 162642266708594LL;
uint32_t x705 = 5U;
uint32_t x715 = UINT32_MAX;
volatile int64_t t92 = 1135330LL;
uint64_t x717 = 50691057365837LLU;
static int8_t x742 = INT8_MAX;
uint16_t x743 = 40U;
static volatile int64_t t96 = -23346739210LL;
int8_t x745 = INT8_MAX;
static int32_t x748 = INT32_MIN;
static int32_t x750 = 144;
static uint64_t t99 = 24940738LLU;


void f0(void) {
	volatile uint16_t x6 = 86U;

	t0 = ((x5>>(x6<x7))%x8);

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 12850U;
	int8_t x10 = INT8_MIN;
	uint64_t x11 = UINT64_MAX;
	volatile uint32_t t1 = 2077U;

	t1 = ((x9>>(x10<x11))%x12);

	if (t1 != 6425U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 43;
	volatile int64_t x14 = -1LL;
	volatile int16_t x15 = -63;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t2 = 577796;

	t2 = ((x13>>(x14<x15))%x16);

	if (t2 != 43) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = 1;
	uint16_t x23 = 7U;
	int8_t x24 = INT8_MIN;

	t3 = ((x21>>(x22<x23))%x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = INT16_MIN;
	uint64_t t4 = 8LLU;

	t4 = ((x33>>(x34<x35))%x36);

	if (t4 != 1811557972894261698LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x46 = INT8_MAX;
	int8_t x47 = -1;
	uint8_t x48 = 4U;
	volatile int32_t t5 = 3;

	t5 = ((x45>>(x46<x47))%x48);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x57 = UINT8_MAX;
	static volatile uint16_t x58 = UINT16_MAX;
	int32_t x59 = INT32_MAX;
	volatile uint8_t x60 = 21U;

	t6 = ((x57>>(x58<x59))%x60);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x61 = 26466356U;
	int64_t x62 = INT64_MIN;
	static int32_t x63 = -1;

	t7 = ((x61>>(x62<x63))%x64);

	if (t7 != 28077U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;

	t8 = ((x69>>(x70<x71))%x72);

	if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x81 = 20;
	static uint8_t x84 = UINT8_MAX;
	int32_t t9 = -243;

	t9 = ((x81>>(x82<x83))%x84);

	if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x89 = INT16_MAX;
	static int32_t x91 = INT32_MAX;
	int64_t x92 = 3880232402542989LL;
	int64_t t10 = 26936815LL;

	t10 = ((x89>>(x90<x91))%x92);

	if (t10 != 16383LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MAX;
	static int16_t x96 = -1;
	volatile uint32_t t11 = 61385843U;

	t11 = ((x93>>(x94<x95))%x96);

	if (t11 != 31835251U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x102 = INT16_MIN;
	static uint16_t x103 = 6666U;

	t12 = ((x101>>(x102<x103))%x104);

	if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x109 = UINT32_MAX;
	static int16_t x110 = -1;
	static volatile int32_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t13 = 1941959U;

	t13 = ((x109>>(x110<x111))%x112);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x113 = 51U;
	int8_t x114 = INT8_MIN;
	int16_t x116 = INT16_MAX;
	int32_t t14 = 2257614;

	t14 = ((x113>>(x114<x115))%x116);

	if (t14 != 51) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x121 = INT32_MAX;
	volatile int8_t x122 = -1;
	int32_t x123 = -1;
	uint32_t x124 = 554U;
	volatile uint32_t t15 = 162610031U;

	t15 = ((x121>>(x122<x123))%x124);

	if (t15 != 151U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x126 = 2;
	volatile int64_t x127 = INT64_MAX;
	static uint8_t x128 = UINT8_MAX;
	volatile int32_t t16 = 503;

	t16 = ((x125>>(x126<x127))%x128);

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x133 = 30U;
	int16_t x134 = INT16_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	uint32_t t17 = 3554518U;

	t17 = ((x133>>(x134<x135))%x136);

	if (t17 != 15U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x145 = 1U;
	uint16_t x146 = 5U;
	static int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t18 = 3;

	t18 = ((x145>>(x146<x147))%x148);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x149 = INT16_MAX;
	int8_t x150 = -18;
	int32_t x152 = 1008305;

	t19 = ((x149>>(x150<x151))%x152);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 5U;
	int8_t x156 = INT8_MAX;
	int32_t t20 = -18387985;

	t20 = ((x153>>(x154<x155))%x156);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x157 = INT32_MAX;
	int16_t x158 = 1408;
	static uint8_t x159 = 3U;
	uint8_t x160 = 7U;
	int32_t t21 = -998575859;

	t21 = ((x157>>(x158<x159))%x160);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x162 = INT32_MIN;
	static int32_t x163 = -1;
	uint8_t x164 = UINT8_MAX;
	volatile uint32_t t22 = 864410098U;

	t22 = ((x161>>(x162<x163))%x164);

	if (t22 != 124U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x165 = INT64_MAX;
	volatile uint8_t x166 = UINT8_MAX;
	int64_t x167 = 1023LL;
	int32_t x168 = -3;
	int64_t t23 = -5382540288LL;

	t23 = ((x165>>(x166<x167))%x168);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x169 = 7328U;
	uint32_t t24 = 5737427U;

	t24 = ((x169>>(x170<x171))%x172);

	if (t24 != 3664U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x173 = 58;
	int64_t x174 = -1LL;
	uint8_t x175 = 43U;
	uint32_t x176 = UINT32_MAX;
	uint32_t t25 = 12168U;

	t25 = ((x173>>(x174<x175))%x176);

	if (t25 != 29U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x190 = INT16_MIN;
	static volatile int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t26 = 15932387;

	t26 = ((x189>>(x190<x191))%x192);

	if (t26 != 16383) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x202 = 1;
	int8_t x203 = INT8_MIN;
	static volatile int32_t x204 = INT32_MAX;
	uint32_t t27 = 2U;

	t27 = ((x201>>(x202<x203))%x204);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x206 = -15;

	t28 = ((x205>>(x206<x207))%x208);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x217 = 194LLU;
	int64_t x219 = -73971618428593666LL;
	static uint64_t t29 = 3LLU;

	t29 = ((x217>>(x218<x219))%x220);

	if (t29 != 194LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x221 = 24LLU;
	uint16_t x222 = 3208U;
	uint16_t x223 = 1U;
	int16_t x224 = INT16_MIN;

	t30 = ((x221>>(x222<x223))%x224);

	if (t30 != 24LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x225 = 14LLU;
	int32_t x227 = -1;
	uint64_t x228 = 2237751781532920965LLU;
	volatile uint64_t t31 = 932428640694019463LLU;

	t31 = ((x225>>(x226<x227))%x228);

	if (t31 != 14LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x229 = 1U;
	int16_t x230 = 941;
	static uint16_t x232 = 458U;

	t32 = ((x229>>(x230<x231))%x232);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x233 = 1;
	int64_t x234 = INT64_MIN;
	int8_t x235 = 30;
	uint8_t x236 = UINT8_MAX;
	int32_t t33 = 60859;

	t33 = ((x233>>(x234<x235))%x236);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x249 = INT8_MAX;
	uint64_t x250 = 15363LLU;
	int16_t x251 = -1;

	t34 = ((x249>>(x250<x251))%x252);

	if (t34 != 63) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x255 = 5286639LLU;
	int8_t x256 = -1;
	volatile uint32_t t35 = 6547U;

	t35 = ((x253>>(x254<x255))%x256);

	if (t35 != 5U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x257 = 87538597399780449LLU;
	int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MIN;
	uint64_t t36 = 100418629202138LLU;

	t36 = ((x257>>(x258<x259))%x260);

	if (t36 != 4598LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x262 = 0;
	int16_t x264 = -1;
	volatile uint64_t t37 = 1396925188666LLU;

	t37 = ((x261>>(x262<x263))%x264);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x265 = 407012452632040LLU;
	int32_t x267 = -1;
	static volatile uint16_t x268 = UINT16_MAX;

	t38 = ((x265>>(x266<x267))%x268);

	if (t38 != 30815LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x289 = 176415176280841997LL;
	static volatile uint8_t x290 = 60U;
	int32_t x292 = INT32_MIN;
	int64_t t39 = 1LL;

	t39 = ((x289>>(x290<x291))%x292);

	if (t39 != 188030733LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x301 = UINT64_MAX;
	static volatile int32_t x304 = INT32_MIN;
	volatile uint64_t t40 = 239409LLU;

	t40 = ((x301>>(x302<x303))%x304);

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x307 = 57U;
	int64_t t41 = 9130090510LL;

	t41 = ((x305>>(x306<x307))%x308);

	if (t41 != 16332LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x313 = 0LL;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = 21014106978LLU;
	uint32_t x316 = UINT32_MAX;

	t42 = ((x313>>(x314<x315))%x316);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x317 = INT16_MAX;
	int8_t x318 = 3;
	uint16_t x319 = 2U;
	uint64_t x320 = 6735769879853243529LLU;

	t43 = ((x317>>(x318<x319))%x320);

	if (t43 != 32767LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x321 = INT64_MAX;
	volatile uint64_t x322 = 1LLU;
	static volatile int16_t x324 = -402;
	static volatile int64_t t44 = -491875372663278412LL;

	t44 = ((x321>>(x322<x323))%x324);

	if (t44 != 87LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x329 = INT64_MAX;
	int16_t x330 = 21;
	volatile uint8_t x331 = 1U;
	int64_t x332 = -1LL;
	static volatile int64_t t45 = -294613363672LL;

	t45 = ((x329>>(x330<x331))%x332);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {


	t46 = ((x341>>(x342<x343))%x344);

	if (t46 != 53U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x353 = 1U;
	int8_t x354 = INT8_MIN;
	volatile int32_t t47 = 5892726;

	t47 = ((x353>>(x354<x355))%x356);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x357 = 6;
	int32_t x358 = -489141781;
	uint64_t x359 = 26890850773732LLU;
	int8_t x360 = INT8_MAX;
	int32_t t48 = 3835522;

	t48 = ((x357>>(x358<x359))%x360);

	if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x363 = INT64_MIN;

	t49 = ((x361>>(x362<x363))%x364);

	if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x370 = -1LL;
	static int64_t x371 = 139307044320470LL;
	int32_t x372 = INT32_MAX;

	t50 = ((x369>>(x370<x371))%x372);

	if (t50 != 16383) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 112U;
	int32_t x375 = 78;
	uint64_t t51 = 23LLU;

	t51 = ((x373>>(x374<x375))%x376);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x377 = 0LL;
	volatile int16_t x378 = INT16_MAX;
	static uint32_t x379 = 11360981U;
	static volatile int8_t x380 = 52;

	t52 = ((x377>>(x378<x379))%x380);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x385 = 282U;
	volatile int16_t x386 = INT16_MIN;
	int64_t x387 = 66653081741991LL;

	t53 = ((x385>>(x386<x387))%x388);

	if (t53 != 141LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x393 = 12507U;
	uint16_t x394 = UINT16_MAX;
	static volatile int32_t x395 = INT32_MIN;
	int16_t x396 = -2606;
	volatile int32_t t54 = 3522010;

	t54 = ((x393>>(x394<x395))%x396);

	if (t54 != 2083) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x401 = 6514U;
	uint64_t x402 = 1565902180583966530LLU;
	int32_t x403 = INT32_MIN;
	int64_t x404 = -1LL;
	volatile int64_t t55 = 996385612790805LL;

	t55 = ((x401>>(x402<x403))%x404);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x409 = UINT64_MAX;
	uint64_t x410 = UINT64_MAX;
	int64_t x411 = -1LL;

	t56 = ((x409>>(x410<x411))%x412);

	if (t56 != 2147483647LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x413 = 33913380637LLU;
	int32_t x414 = 72;
	volatile uint16_t x415 = 0U;
	int8_t x416 = INT8_MIN;
	uint64_t t57 = 39705LLU;

	t57 = ((x413>>(x414<x415))%x416);

	if (t57 != 33913380637LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x417 = 256477994LLU;
	volatile uint16_t x418 = UINT16_MAX;
	uint16_t x419 = 13U;
	uint16_t x420 = 2U;
	static volatile uint64_t t58 = 3451719399413887LLU;

	t58 = ((x417>>(x418<x419))%x420);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x437 = 40U;
	uint64_t x439 = 13139564798LLU;
	static int64_t x440 = INT64_MAX;
	volatile int64_t t59 = 15814LL;

	t59 = ((x437>>(x438<x439))%x440);

	if (t59 != 20LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x449 = 70U;
	int8_t x450 = INT8_MIN;
	int32_t x451 = 214592;
	int16_t x452 = -217;
	volatile int32_t t60 = -1;

	t60 = ((x449>>(x450<x451))%x452);

	if (t60 != 35) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x461 = 0U;
	uint16_t x464 = 3355U;
	int32_t t61 = -31;

	t61 = ((x461>>(x462<x463))%x464);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x465 = 13U;
	int8_t x466 = INT8_MAX;
	volatile int32_t x467 = -1;
	int16_t x468 = -1;
	int32_t t62 = -53;

	t62 = ((x465>>(x466<x467))%x468);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x481 = 49360U;
	int32_t x483 = 1862940;
	int32_t x484 = -28236016;
	static uint32_t t63 = 4192U;

	t63 = ((x481>>(x482<x483))%x484);

	if (t63 != 49360U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x493 = 786899921630557LLU;
	int64_t x495 = -1LL;
	int16_t x496 = -13957;
	volatile uint64_t t64 = 98714LLU;

	t64 = ((x493>>(x494<x495))%x496);

	if (t64 != 786899921630557LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x506 = 1364323792791LL;
	int32_t x507 = INT32_MIN;
	int32_t x508 = INT32_MIN;
	volatile int32_t t65 = 8750;

	t65 = ((x505>>(x506<x507))%x508);

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x517 = 3893956U;
	int32_t x518 = -1;
	int64_t x519 = INT64_MIN;

	t66 = ((x517>>(x518<x519))%x520);

	if (t66 != 3893956U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x541 = 248U;
	int16_t x543 = INT16_MIN;
	volatile uint32_t x544 = 138887U;
	volatile uint32_t t67 = 902U;

	t67 = ((x541>>(x542<x543))%x544);

	if (t67 != 248U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x556 = 1758335;

	t68 = ((x553>>(x554<x555))%x556);

	if (t68 != 4U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x557 = INT64_MAX;
	uint8_t x558 = 10U;
	int64_t x559 = -731169526978086319LL;
	static int16_t x560 = INT16_MIN;

	t69 = ((x557>>(x558<x559))%x560);

	if (t69 != 32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x561 = 1552451993LLU;
	int32_t x562 = INT32_MIN;
	uint16_t x563 = UINT16_MAX;
	uint32_t x564 = 528U;
	static volatile uint64_t t70 = 16293LLU;

	t70 = ((x561>>(x562<x563))%x564);

	if (t70 != 524LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x565 = 3U;
	volatile int32_t x566 = -1;
	uint8_t x568 = UINT8_MAX;
	volatile int32_t t71 = 22167;

	t71 = ((x565>>(x566<x567))%x568);

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x569 = UINT8_MAX;
	int64_t x570 = 25LL;
	int16_t x571 = INT16_MIN;
	uint64_t x572 = 75762659LLU;
	volatile uint64_t t72 = 14087901598LLU;

	t72 = ((x569>>(x570<x571))%x572);

	if (t72 != 255LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x581 = INT16_MAX;
	volatile int64_t x582 = INT64_MIN;
	uint32_t x584 = UINT32_MAX;

	t73 = ((x581>>(x582<x583))%x584);

	if (t73 != 16383U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x586 = INT32_MAX;
	int16_t x587 = 1119;
	volatile int32_t t74 = -55382;

	t74 = ((x585>>(x586<x587))%x588);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x589 = INT8_MAX;
	volatile int8_t x590 = INT8_MAX;
	volatile int64_t x591 = INT64_MAX;
	int16_t x592 = 4;
	int32_t t75 = -9609;

	t75 = ((x589>>(x590<x591))%x592);

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x593 = UINT16_MAX;
	static int8_t x594 = INT8_MIN;
	int64_t x595 = -3LL;
	int32_t x596 = -1;

	t76 = ((x593>>(x594<x595))%x596);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x598 = INT64_MAX;
	static uint64_t x599 = 10384821887357968LLU;
	volatile int32_t x600 = INT32_MIN;
	int32_t t77 = -16112;

	t77 = ((x597>>(x598<x599))%x600);

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x601 = 825772779228LL;
	uint32_t x602 = 217860249U;
	int8_t x603 = INT8_MIN;
	int64_t x604 = INT64_MIN;

	t78 = ((x601>>(x602<x603))%x604);

	if (t78 != 412886389614LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x609 = UINT8_MAX;
	int16_t x610 = INT16_MIN;
	static int32_t x611 = INT32_MIN;
	volatile int32_t t79 = -22;

	t79 = ((x609>>(x610<x611))%x612);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x621 = INT8_MAX;
	static uint32_t x623 = 458U;
	int8_t x624 = -1;
	int32_t t80 = -912900;

	t80 = ((x621>>(x622<x623))%x624);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x633 = 1221956489745LL;
	static int32_t x635 = INT32_MIN;
	volatile uint64_t x636 = UINT64_MAX;

	t81 = ((x633>>(x634<x635))%x636);

	if (t81 != 1221956489745LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x653 = INT8_MAX;
	volatile uint32_t x654 = 101183473U;
	static volatile int32_t t82 = -1016799;

	t82 = ((x653>>(x654<x655))%x656);

	if (t82 != 63) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x657 = UINT32_MAX;
	static volatile uint32_t x658 = 112U;
	static int64_t x659 = -1LL;
	static volatile int64_t t83 = -292055567841LL;

	t83 = ((x657>>(x658<x659))%x660);

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x661 = UINT32_MAX;
	static int64_t x662 = -86989846315133911LL;
	uint64_t x663 = UINT64_MAX;
	int64_t x664 = -1LL;

	t84 = ((x661>>(x662<x663))%x664);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x669 = 9LL;
	volatile uint32_t x670 = UINT32_MAX;
	int64_t x672 = -178LL;
	volatile int64_t t85 = 28396458425LL;

	t85 = ((x669>>(x670<x671))%x672);

	if (t85 != 9LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x673 = 1U;
	uint8_t x674 = 1U;
	static uint16_t x675 = UINT16_MAX;
	uint32_t x676 = UINT32_MAX;
	static volatile uint32_t t86 = 31473741U;

	t86 = ((x673>>(x674<x675))%x676);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x677 = 29132;
	int32_t x679 = INT32_MIN;
	volatile int32_t t87 = 7830377;

	t87 = ((x677>>(x678<x679))%x680);

	if (t87 != 49) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x685 = 1674153LL;
	static int32_t x687 = INT32_MAX;
	volatile uint8_t x688 = UINT8_MAX;

	t88 = ((x685>>(x686<x687))%x688);

	if (t88 != 166LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x693 = UINT32_MAX;
	int8_t x694 = -1;
	uint8_t x695 = 0U;
	static int16_t x696 = INT16_MAX;
	static volatile uint32_t t89 = 896254404U;

	t89 = ((x693>>(x694<x695))%x696);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x701 = INT16_MAX;
	int16_t x702 = -1;
	volatile int8_t x703 = INT8_MAX;
	int64_t x704 = INT64_MAX;

	t90 = ((x701>>(x702<x703))%x704);

	if (t90 != 16383LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x706 = 103U;
	static uint8_t x707 = UINT8_MAX;
	volatile int16_t x708 = INT16_MIN;
	static volatile uint32_t t91 = 239892U;

	t91 = ((x705>>(x706<x707))%x708);

	if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x713 = UINT16_MAX;
	int8_t x714 = INT8_MIN;
	static int64_t x716 = -1LL;

	t92 = ((x713>>(x714<x715))%x716);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x718 = -15741087;
	int64_t x719 = -8026113LL;
	int64_t x720 = INT64_MIN;
	volatile uint64_t t93 = 256872651814911LLU;

	t93 = ((x717>>(x718<x719))%x720);

	if (t93 != 25345528682918LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x725 = UINT8_MAX;
	int8_t x726 = -1;
	int64_t x727 = INT64_MIN;
	static volatile int8_t x728 = INT8_MAX;
	static volatile int32_t t94 = -1061957310;

	t94 = ((x725>>(x726<x727))%x728);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x729 = 20U;
	int32_t x730 = -1;
	int8_t x731 = INT8_MIN;
	int16_t x732 = -1520;
	static int32_t t95 = 38330799;

	t95 = ((x729>>(x730<x731))%x732);

	if (t95 != 20) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x741 = 29182107LL;
	static int8_t x744 = INT8_MAX;

	t96 = ((x741>>(x742<x743))%x744);

	if (t96 != 47LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x746 = -1LL;
	int64_t x747 = 6509711633LL;
	int32_t t97 = -94;

	t97 = ((x745>>(x746<x747))%x748);

	if (t97 != 63) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x749 = UINT32_MAX;
	uint32_t x751 = 4311791U;
	int16_t x752 = -1;
	volatile uint32_t t98 = 374U;

	t98 = ((x749>>(x750<x751))%x752);

	if (t98 != 2147483647U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x753 = 313309148254419LLU;
	int64_t x754 = INT64_MIN;
	int32_t x755 = -1;
	uint64_t x756 = 1063711299661908552LLU;

	t99 = ((x753>>(x754<x755))%x756);

	if (t99 != 156654574127209LLU) { NG(); } else { ; }
	
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

