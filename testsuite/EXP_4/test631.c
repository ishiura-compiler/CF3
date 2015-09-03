#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 6606;
uint16_t x12 = UINT16_MAX;
uint8_t x14 = UINT8_MAX;
uint16_t x16 = 2669U;
int32_t x50 = INT32_MAX;
uint16_t x58 = UINT16_MAX;
volatile uint16_t x72 = 212U;
int16_t x83 = INT16_MIN;
static uint16_t x90 = 212U;
volatile int32_t t12 = -78578;
int32_t x102 = INT32_MIN;
int16_t x112 = -1;
uint64_t t15 = UINT64_MAX;
uint64_t x126 = 2485269016653341993LLU;
static int32_t x144 = -1;
int32_t x153 = INT32_MAX;
int32_t t23 = INT32_MAX;
int64_t x162 = INT64_MIN;
int16_t x168 = 671;
int8_t x183 = 0;
int8_t x210 = -1;
volatile int32_t t31 = 75324;
uint16_t x221 = 113U;
static uint16_t x233 = 16311U;
static volatile uint64_t x245 = UINT64_MAX;
int16_t x248 = INT16_MIN;
int64_t x250 = -65542LL;
uint16_t x251 = 725U;
volatile uint64_t x257 = UINT64_MAX;
int64_t x278 = INT64_MAX;
volatile int32_t x280 = INT32_MIN;
uint64_t x297 = UINT64_MAX;
int8_t x298 = -1;
int32_t x311 = -177101110;
uint8_t x315 = 1U;
uint16_t x316 = 20U;
uint64_t t44 = 4424795506874213016LLU;
int32_t x328 = INT32_MIN;
uint16_t x378 = UINT16_MAX;
int32_t t50 = 1;
volatile int32_t x396 = -10042095;
static volatile int32_t t53 = 13107;
int32_t x424 = INT32_MIN;
uint64_t x432 = 603909254LLU;
int32_t t55 = 407;
int64_t x435 = INT64_MIN;
static int8_t x444 = INT8_MIN;
int16_t x459 = -12116;
volatile int32_t t58 = 1;
int32_t x465 = INT32_MAX;
int16_t x467 = -1;
volatile int32_t t60 = INT32_MAX;
int32_t x478 = INT32_MIN;
static int16_t x503 = 5123;
uint64_t x504 = 20385133571320LLU;
uint32_t x517 = 26U;
uint8_t x520 = 5U;
volatile uint32_t t66 = 884908479U;
volatile int64_t x529 = INT64_MAX;
uint32_t x541 = UINT32_MAX;
uint8_t x549 = 7U;
volatile int64_t x550 = INT64_MAX;
static int64_t x555 = INT64_MIN;
int64_t t73 = INT64_MAX;
int8_t x557 = INT8_MAX;
int32_t x570 = -1;
uint32_t t76 = 13709U;
volatile int32_t t78 = 0;
int8_t x587 = INT8_MIN;
static volatile int16_t x603 = INT16_MIN;
int32_t t80 = 0;
uint8_t x606 = 0U;
int8_t x607 = INT8_MAX;
volatile int32_t t81 = 165993996;
int32_t x610 = -1;
static uint16_t x619 = 59U;
static uint8_t x621 = 1U;
uint32_t x629 = 146U;
static uint8_t x646 = UINT8_MAX;
int32_t x658 = 0;
int64_t x659 = 5379116702008741LL;
int8_t x678 = INT8_MAX;
int32_t x698 = INT32_MAX;
int16_t x701 = 1;
int16_t x706 = -44;
volatile int32_t t97 = 2;
uint16_t x725 = UINT16_MAX;
int32_t x726 = -1;
int8_t x736 = -15;
volatile int64_t t99 = -1285481002149572072LL;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -1;
	volatile int8_t x4 = -1;

	t0 = (x1>>(x2<=(x3/x4)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 49;
	int64_t x10 = -2LL;
	int64_t x11 = -202467387376141659LL;
	volatile int32_t t1 = 16022830;

	t1 = (x9>>(x10<=(x11/x12)));

	if (t1 != 49) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = 2U;
	int16_t x15 = INT16_MIN;
	volatile int32_t t2 = 7;

	t2 = (x13>>(x14<=(x15/x16)));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 8U;
	int8_t x18 = -1;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = UINT8_MAX;
	static volatile int32_t t3 = 1311940;

	t3 = (x17>>(x18<=(x19/x20)));

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = INT16_MAX;
	uint8_t x26 = UINT8_MAX;
	volatile int32_t x27 = INT32_MIN;
	uint32_t x28 = 1U;
	static int32_t t4 = -1;

	t4 = (x25>>(x26<=(x27/x28)));

	if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = 0U;
	volatile int32_t x30 = 6;
	static uint64_t x31 = 120952373271421147LLU;
	int8_t x32 = INT8_MIN;
	volatile int32_t t5 = 2032680;

	t5 = (x29>>(x30<=(x31/x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = UINT16_MAX;
	volatile int16_t x42 = INT16_MAX;
	static int16_t x43 = -1;
	int32_t x44 = -118;
	int32_t t6 = 696;

	t6 = (x41>>(x42<=(x43/x44)));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x49 = 138151U;
	static int64_t x51 = -1LL;
	volatile int16_t x52 = INT16_MIN;
	static uint32_t t7 = 173259791U;

	t7 = (x49>>(x50<=(x51/x52)));

	if (t7 != 138151U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x57 = UINT8_MAX;
	volatile uint8_t x59 = 58U;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t8 = 0;

	t8 = (x57>>(x58<=(x59/x60)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x69 = 21519685424484LLU;
	int64_t x70 = 51284117712978225LL;
	uint8_t x71 = 67U;
	uint64_t t9 = 440388629393195LLU;

	t9 = (x69>>(x70<=(x71/x72)));

	if (t9 != 21519685424484LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x73 = 23U;
	int32_t x74 = 585;
	int64_t x75 = 16942020767LL;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t10 = 484;

	t10 = (x73>>(x74<=(x75/x76)));

	if (t10 != 23) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = INT16_MAX;
	int64_t x82 = 2816751459902LL;
	static int16_t x84 = -16;
	volatile int32_t t11 = 72;

	t11 = (x81>>(x82<=(x83/x84)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x89 = 2U;
	volatile uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MIN;

	t12 = (x89>>(x90<=(x91/x92)));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x93 = 1913U;
	static int64_t x94 = -10826162LL;
	volatile uint8_t x95 = 7U;
	int32_t x96 = -55900155;
	uint32_t t13 = 871U;

	t13 = (x93>>(x94<=(x95/x96)));

	if (t13 != 956U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x101 = INT16_MAX;
	int16_t x103 = -1;
	int16_t x104 = 1;
	int32_t t14 = -9315;

	t14 = (x101>>(x102<=(x103/x104)));

	if (t14 != 16383) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x109 = UINT64_MAX;
	int32_t x110 = INT32_MAX;
	volatile uint32_t x111 = 1385711U;

	t15 = (x109>>(x110<=(x111/x112)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x113 = UINT8_MAX;
	int64_t x114 = INT64_MAX;
	volatile int64_t x115 = -1LL;
	static uint32_t x116 = 130611U;
	static volatile int32_t t16 = 16744530;

	t16 = (x113>>(x114<=(x115/x116)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x121 = 39219532077918LL;
	int16_t x122 = -1;
	volatile int32_t x123 = INT32_MAX;
	int16_t x124 = -343;
	volatile int64_t t17 = -919158722LL;

	t17 = (x121>>(x122<=(x123/x124)));

	if (t17 != 39219532077918LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x125 = 2003U;
	int16_t x127 = 2;
	uint8_t x128 = 6U;
	volatile int32_t t18 = -5;

	t18 = (x125>>(x126<=(x127/x128)));

	if (t18 != 2003) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x137 = INT32_MAX;
	uint32_t x138 = 16U;
	static uint16_t x139 = 3437U;
	volatile int64_t x140 = -1LL;
	int32_t t19 = INT32_MAX;

	t19 = (x137>>(x138<=(x139/x140)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x141 = 64U;
	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = 11435LLU;
	int32_t t20 = -12570;

	t20 = (x141>>(x142<=(x143/x144)));

	if (t20 != 64) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MIN;
	int16_t x147 = -1;
	int64_t x148 = INT64_MAX;
	uint32_t t21 = 2207059U;

	t21 = (x145>>(x146<=(x147/x148)));

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x149 = 27U;
	volatile int64_t x150 = INT64_MAX;
	static uint32_t x151 = UINT32_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t22 = 77052;

	t22 = (x149>>(x150<=(x151/x152)));

	if (t22 != 27) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x154 = UINT32_MAX;
	static int32_t x155 = INT32_MAX;
	uint32_t x156 = 1U;

	t23 = (x153>>(x154<=(x155/x156)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MIN;
	int8_t x159 = -8;
	int32_t x160 = INT32_MAX;
	volatile uint32_t t24 = 3059U;

	t24 = (x157>>(x158<=(x159/x160)));

	if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x161 = 0;
	int16_t x163 = -1;
	static int8_t x164 = INT8_MAX;
	volatile int32_t t25 = 11701332;

	t25 = (x161>>(x162<=(x163/x164)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x165 = INT32_MAX;
	int8_t x166 = 0;
	volatile int16_t x167 = INT16_MAX;
	static volatile int32_t t26 = -835970717;

	t26 = (x165>>(x166<=(x167/x168)));

	if (t26 != 1073741823) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x177 = 195643956407002387LLU;
	volatile int16_t x178 = -2;
	int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	uint64_t t27 = 377015937692647562LLU;

	t27 = (x177>>(x178<=(x179/x180)));

	if (t27 != 97821978203501193LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = -1;
	volatile uint8_t x184 = UINT8_MAX;
	static volatile int32_t t28 = 494;

	t28 = (x181>>(x182<=(x183/x184)));

	if (t28 != 1073741823) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x197 = 0U;
	int8_t x198 = 0;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	int32_t t29 = 1;

	t29 = (x197>>(x198<=(x199/x200)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x201 = INT64_MAX;
	uint16_t x202 = 271U;
	uint16_t x203 = 2U;
	volatile int32_t x204 = INT32_MAX;
	int64_t t30 = INT64_MAX;

	t30 = (x201>>(x202<=(x203/x204)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x209 = INT8_MAX;
	uint8_t x211 = UINT8_MAX;
	uint64_t x212 = 57484778152253537LLU;

	t31 = (x209>>(x210<=(x211/x212)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MIN;
	uint32_t x215 = 356184656U;
	int64_t x216 = INT64_MIN;
	static int32_t t32 = -36078;

	t32 = (x213>>(x214<=(x215/x216)));

	if (t32 != 16383) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x222 = 2U;
	int64_t x223 = -2789690610902LL;
	uint8_t x224 = 1U;
	static volatile int32_t t33 = 870;

	t33 = (x221>>(x222<=(x223/x224)));

	if (t33 != 113) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x234 = -15063842920767LL;
	int32_t x235 = -882312930;
	static int8_t x236 = -1;
	int32_t t34 = 7108;

	t34 = (x233>>(x234<=(x235/x236)));

	if (t34 != 8155) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x246 = 24890511033LLU;
	static volatile int64_t x247 = 382057LL;
	volatile uint64_t t35 = 443LLU;

	t35 = (x245>>(x246<=(x247/x248)));

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x249 = 40999603324641756LLU;
	int8_t x252 = -48;
	uint64_t t36 = 441595264513LLU;

	t36 = (x249>>(x250<=(x251/x252)));

	if (t36 != 20499801662320878LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x258 = -151597610654480276LL;
	volatile uint64_t x259 = 1909LLU;
	int8_t x260 = -1;
	uint64_t t37 = UINT64_MAX;

	t37 = (x257>>(x258<=(x259/x260)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x277 = 6U;
	uint64_t x279 = 16870LLU;
	static int32_t t38 = -50196;

	t38 = (x277>>(x278<=(x279/x280)));

	if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x281 = 2;
	static volatile int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	int8_t x284 = 42;
	int32_t t39 = -1701839;

	t39 = (x281>>(x282<=(x283/x284)));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x289 = 14064260193539LLU;
	int16_t x290 = -1;
	static int32_t x291 = INT32_MIN;
	volatile int8_t x292 = INT8_MIN;
	volatile uint64_t t40 = 43LLU;

	t40 = (x289>>(x290<=(x291/x292)));

	if (t40 != 7032130096769LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x299 = -1;
	volatile int32_t x300 = -1;
	volatile uint64_t t41 = 500724970354182LLU;

	t41 = (x297>>(x298<=(x299/x300)));

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x305 = 0;
	static volatile int32_t x306 = -4187;
	int16_t x307 = INT16_MAX;
	uint16_t x308 = 605U;
	int32_t t42 = 818899501;

	t42 = (x305>>(x306<=(x307/x308)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x309 = 1607LLU;
	volatile int8_t x310 = INT8_MIN;
	uint32_t x312 = 2641942U;
	static uint64_t t43 = 12580051047995116LLU;

	t43 = (x309>>(x310<=(x311/x312)));

	if (t43 != 1607LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x313 = UINT64_MAX;
	static volatile int8_t x314 = -34;

	t44 = (x313>>(x314<=(x315/x316)));

	if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x317 = 172473763631106LLU;
	int32_t x318 = -462750;
	uint64_t x319 = UINT64_MAX;
	static int16_t x320 = -1875;
	static volatile uint64_t t45 = 7001995095864LLU;

	t45 = (x317>>(x318<=(x319/x320)));

	if (t45 != 172473763631106LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x325 = 957115297U;
	volatile int8_t x326 = 45;
	static uint64_t x327 = 2411779776097734970LLU;
	volatile uint32_t t46 = 2322U;

	t46 = (x325>>(x326<=(x327/x328)));

	if (t46 != 957115297U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x329 = 21;
	int16_t x330 = 30;
	static volatile int32_t x331 = INT32_MIN;
	uint8_t x332 = 38U;
	volatile int32_t t47 = -547132348;

	t47 = (x329>>(x330<=(x331/x332)));

	if (t47 != 21) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x349 = INT16_MAX;
	volatile uint8_t x350 = 1U;
	int8_t x351 = -1;
	volatile int64_t x352 = INT64_MAX;
	int32_t t48 = -14135;

	t48 = (x349>>(x350<=(x351/x352)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MIN;
	volatile int64_t x359 = INT64_MIN;
	volatile int32_t x360 = 50533526;
	uint64_t t49 = UINT64_MAX;

	t49 = (x357>>(x358<=(x359/x360)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x377 = INT16_MAX;
	static int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MAX;

	t50 = (x377>>(x378<=(x379/x380)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = -1;
	int32_t x395 = -126551760;
	uint64_t t51 = 1370907463LLU;

	t51 = (x393>>(x394<=(x395/x396)));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x397 = UINT64_MAX;
	static volatile int16_t x398 = -1;
	static int64_t x399 = INT64_MIN;
	uint64_t x400 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = (x397>>(x398<=(x399/x400)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x409 = 5512U;
	int16_t x410 = INT16_MIN;
	static int8_t x411 = -1;
	static int8_t x412 = INT8_MIN;

	t53 = (x409>>(x410<=(x411/x412)));

	if (t53 != 2756) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x421 = 268U;
	int8_t x422 = INT8_MAX;
	int64_t x423 = -31534641113LL;
	int32_t t54 = 7;

	t54 = (x421>>(x422<=(x423/x424)));

	if (t54 != 268) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x429 = 25U;
	int32_t x430 = -2;
	int8_t x431 = -1;

	t55 = (x429>>(x430<=(x431/x432)));

	if (t55 != 25) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x433 = 2;
	static int8_t x434 = -2;
	volatile uint8_t x436 = 7U;
	int32_t t56 = 39;

	t56 = (x433>>(x434<=(x435/x436)));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x441 = 2;
	int8_t x442 = INT8_MAX;
	static volatile int64_t x443 = -1LL;
	static volatile int32_t t57 = 3172277;

	t57 = (x441>>(x442<=(x443/x444)));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x457 = 4U;
	int64_t x458 = INT64_MIN;
	volatile int64_t x460 = -1LL;

	t58 = (x457>>(x458<=(x459/x460)));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x461 = 659392001549364473LL;
	static volatile int8_t x462 = INT8_MAX;
	uint8_t x463 = 10U;
	static volatile int64_t x464 = INT64_MAX;
	static int64_t t59 = 920LL;

	t59 = (x461>>(x462<=(x463/x464)));

	if (t59 != 659392001549364473LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x466 = 1348U;
	static uint8_t x468 = 5U;

	t60 = (x465>>(x466<=(x467/x468)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x473 = UINT16_MAX;
	volatile uint64_t x474 = 332273589LLU;
	static int16_t x475 = -7;
	static int64_t x476 = 1LL;
	volatile int32_t t61 = -18;

	t61 = (x473>>(x474<=(x475/x476)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x477 = 7;
	int16_t x479 = -1;
	uint16_t x480 = 13443U;
	static volatile int32_t t62 = -2004730;

	t62 = (x477>>(x478<=(x479/x480)));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x489 = INT64_MAX;
	int64_t x490 = -2984978017LL;
	int16_t x491 = INT16_MIN;
	static uint8_t x492 = UINT8_MAX;
	int64_t t63 = -75243181891488LL;

	t63 = (x489>>(x490<=(x491/x492)));

	if (t63 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x501 = 120LLU;
	static int16_t x502 = 243;
	uint64_t t64 = 82669756273LLU;

	t64 = (x501>>(x502<=(x503/x504)));

	if (t64 != 120LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x509 = UINT16_MAX;
	int8_t x510 = INT8_MAX;
	int32_t x511 = 7409944;
	int64_t x512 = INT64_MAX;
	volatile int32_t t65 = 136576399;

	t65 = (x509>>(x510<=(x511/x512)));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x518 = -1LL;
	uint32_t x519 = 111397U;

	t66 = (x517>>(x518<=(x519/x520)));

	if (t66 != 13U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x521 = INT8_MAX;
	int32_t x522 = INT32_MIN;
	int8_t x523 = -1;
	static int64_t x524 = INT64_MIN;
	int32_t t67 = 0;

	t67 = (x521>>(x522<=(x523/x524)));

	if (t67 != 63) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x530 = INT8_MAX;
	uint32_t x531 = UINT32_MAX;
	static int8_t x532 = -1;
	volatile int64_t t68 = INT64_MAX;

	t68 = (x529>>(x530<=(x531/x532)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x537 = UINT32_MAX;
	static uint64_t x538 = 0LLU;
	int32_t x539 = -1;
	volatile int64_t x540 = 19LL;
	volatile uint32_t t69 = 6877U;

	t69 = (x537>>(x538<=(x539/x540)));

	if (t69 != 2147483647U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x542 = -13194;
	int16_t x543 = -3491;
	int8_t x544 = INT8_MIN;
	uint32_t t70 = 5771U;

	t70 = (x541>>(x542<=(x543/x544)));

	if (t70 != 2147483647U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x545 = 0;
	volatile uint8_t x546 = UINT8_MAX;
	static uint64_t x547 = 72484559404177460LLU;
	int32_t x548 = 23;
	volatile int32_t t71 = -3;

	t71 = (x545>>(x546<=(x547/x548)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x551 = UINT32_MAX;
	int8_t x552 = 22;
	volatile int32_t t72 = 3462;

	t72 = (x549>>(x550<=(x551/x552)));

	if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x553 = INT64_MAX;
	int8_t x554 = -2;
	volatile int16_t x556 = 517;

	t73 = (x553>>(x554<=(x555/x556)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x558 = 3513;
	uint32_t x559 = UINT32_MAX;
	int16_t x560 = -1;
	int32_t t74 = -59957288;

	t74 = (x557>>(x558<=(x559/x560)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x565 = INT8_MAX;
	uint32_t x566 = 17U;
	uint8_t x567 = 3U;
	static uint32_t x568 = 243026449U;
	static int32_t t75 = -1137677;

	t75 = (x565>>(x566<=(x567/x568)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x569 = UINT32_MAX;
	volatile int16_t x571 = INT16_MIN;
	int32_t x572 = INT32_MIN;

	t76 = (x569>>(x570<=(x571/x572)));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x577 = 35U;
	static int16_t x578 = -1;
	int16_t x579 = -1;
	int16_t x580 = -1;
	static int32_t t77 = 122;

	t77 = (x577>>(x578<=(x579/x580)));

	if (t77 != 17) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x581 = 469U;
	uint8_t x582 = UINT8_MAX;
	static volatile int32_t x583 = 791483244;
	static int16_t x584 = 1;

	t78 = (x581>>(x582<=(x583/x584)));

	if (t78 != 234) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x585 = 37U;
	volatile uint64_t x586 = UINT64_MAX;
	uint8_t x588 = 29U;
	volatile uint32_t t79 = 10U;

	t79 = (x585>>(x586<=(x587/x588)));

	if (t79 != 37U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x601 = 1;
	uint32_t x602 = UINT32_MAX;
	static uint16_t x604 = 2836U;

	t80 = (x601>>(x602<=(x603/x604)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x605 = 124U;
	uint32_t x608 = 126290U;

	t81 = (x605>>(x606<=(x607/x608)));

	if (t81 != 62) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x609 = UINT16_MAX;
	volatile int32_t x611 = INT32_MIN;
	static uint8_t x612 = UINT8_MAX;
	int32_t t82 = 761813730;

	t82 = (x609>>(x610<=(x611/x612)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x617 = 9U;
	uint32_t x618 = 2533614U;
	int32_t x620 = -1682535;
	uint32_t t83 = 2481U;

	t83 = (x617>>(x618<=(x619/x620)));

	if (t83 != 9U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x622 = 0U;
	uint8_t x623 = UINT8_MAX;
	static int8_t x624 = 1;
	volatile int32_t t84 = 182;

	t84 = (x621>>(x622<=(x623/x624)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x625 = 150;
	static int64_t x626 = INT64_MIN;
	int8_t x627 = INT8_MAX;
	int8_t x628 = -1;
	volatile int32_t t85 = 434317;

	t85 = (x625>>(x626<=(x627/x628)));

	if (t85 != 75) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x630 = UINT16_MAX;
	int64_t x631 = 1127082600264964337LL;
	int16_t x632 = 157;
	volatile uint32_t t86 = 3731270U;

	t86 = (x629>>(x630<=(x631/x632)));

	if (t86 != 73U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x641 = 147U;
	uint64_t x642 = 12182375LLU;
	uint16_t x643 = UINT16_MAX;
	static int16_t x644 = INT16_MAX;
	int32_t t87 = 0;

	t87 = (x641>>(x642<=(x643/x644)));

	if (t87 != 147) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x645 = 21U;
	int64_t x647 = INT64_MIN;
	int16_t x648 = INT16_MAX;
	int32_t t88 = -165700;

	t88 = (x645>>(x646<=(x647/x648)));

	if (t88 != 21) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x657 = 0U;
	int64_t x660 = -264909530LL;
	volatile int32_t t89 = -2;

	t89 = (x657>>(x658<=(x659/x660)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x661 = 0U;
	static int8_t x662 = -19;
	int64_t x663 = -16888293391842LL;
	static int16_t x664 = INT16_MIN;
	int32_t t90 = 13236;

	t90 = (x661>>(x662<=(x663/x664)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x669 = INT32_MAX;
	int64_t x670 = -1LL;
	static volatile uint8_t x671 = 5U;
	int32_t x672 = -1;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x669>>(x670<=(x671/x672)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x677 = 2593196739174475LL;
	int8_t x679 = -53;
	static int16_t x680 = 15275;
	static volatile int64_t t92 = -328529048313LL;

	t92 = (x677>>(x678<=(x679/x680)));

	if (t92 != 2593196739174475LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x693 = 2U;
	int8_t x694 = INT8_MIN;
	int16_t x695 = -16206;
	static uint16_t x696 = UINT16_MAX;
	static int32_t t93 = -150660;

	t93 = (x693>>(x694<=(x695/x696)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x697 = 1;
	int32_t x699 = -14974414;
	volatile uint32_t x700 = UINT32_MAX;
	static volatile int32_t t94 = -5094;

	t94 = (x697>>(x698<=(x699/x700)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x702 = 24U;
	static int64_t x703 = INT64_MAX;
	int64_t x704 = INT64_MAX;
	int32_t t95 = 9;

	t95 = (x701>>(x702<=(x703/x704)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x705 = INT8_MAX;
	volatile uint64_t x707 = 2412258339920LLU;
	int8_t x708 = -1;
	int32_t t96 = -4060921;

	t96 = (x705>>(x706<=(x707/x708)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x713 = 30U;
	static int64_t x714 = -1LL;
	int8_t x715 = INT8_MIN;
	uint32_t x716 = UINT32_MAX;

	t97 = (x713>>(x714<=(x715/x716)));

	if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x727 = INT32_MIN;
	int16_t x728 = INT16_MIN;
	volatile int32_t t98 = 839;

	t98 = (x725>>(x726<=(x727/x728)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x733 = 2005046916254351466LL;
	int32_t x734 = -71;
	volatile int16_t x735 = 5778;

	t99 = (x733>>(x734<=(x735/x736)));

	if (t99 != 2005046916254351466LL) { NG(); } else { ; }
	
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

