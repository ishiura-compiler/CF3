#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
int32_t x12 = INT32_MAX;
uint32_t x18 = 17U;
int16_t x54 = INT16_MIN;
int64_t x66 = -592LL;
static uint16_t x74 = 13382U;
static int32_t x79 = INT32_MIN;
int32_t x90 = 1;
int64_t x92 = -174760LL;
static int8_t x98 = 1;
int16_t x99 = INT16_MAX;
volatile int16_t x102 = INT16_MIN;
static int64_t x127 = INT64_MAX;
static uint16_t x129 = 1U;
int64_t x130 = 6542159LL;
int64_t t20 = -43LL;
int64_t x137 = INT64_MAX;
volatile uint32_t t24 = 1252930U;
uint8_t x169 = UINT8_MAX;
int32_t t27 = -419302470;
int8_t x188 = -28;
uint32_t x189 = 292011U;
int64_t x203 = INT64_MAX;
static int64_t x204 = INT64_MIN;
volatile int32_t x206 = -1;
uint32_t x217 = 21278U;
uint32_t x219 = 98018430U;
static int16_t x229 = INT16_MIN;
volatile int32_t x230 = INT32_MAX;
uint8_t x237 = UINT8_MAX;
int8_t x256 = INT8_MIN;
static int8_t x270 = 1;
int8_t x284 = INT8_MIN;
static int64_t t48 = 0LL;
uint64_t t49 = 893LLU;
static volatile uint64_t x312 = UINT64_MAX;
volatile int16_t x316 = INT16_MIN;
uint64_t x320 = 26444587LLU;
uint16_t x322 = UINT16_MAX;
volatile uint64_t x326 = 236055LLU;
volatile int16_t x327 = INT16_MIN;
static volatile uint8_t x328 = 13U;
int8_t x329 = INT8_MIN;
static int32_t x331 = INT32_MAX;
uint8_t x349 = 1U;
int32_t x352 = INT32_MIN;
static volatile uint16_t x365 = 51U;
uint16_t x366 = 17U;
uint64_t x376 = 134LLU;
uint32_t x377 = 1U;
int8_t x378 = INT8_MIN;
int64_t x381 = -7565038818866008LL;
int64_t t65 = -1330913091415578691LL;
static uint16_t x387 = UINT16_MAX;
uint64_t t66 = 43491086760LLU;
volatile int64_t x393 = INT64_MIN;
int32_t x399 = 7;
uint64_t x402 = UINT64_MAX;
int64_t x403 = -175493LL;
volatile uint64_t t69 = 500LLU;
static int16_t x410 = 1;
int16_t x411 = INT16_MIN;
int64_t t70 = 1LL;
static int64_t x419 = INT64_MIN;
volatile int64_t t71 = 7287175975726LL;
uint64_t t73 = 30484677LLU;
static volatile int32_t x433 = -1;
static uint16_t x436 = UINT16_MAX;
int64_t x437 = INT64_MIN;
int64_t t75 = 155LL;
int32_t x444 = -1;
volatile int64_t t77 = 7LL;
int64_t x453 = INT64_MAX;
int16_t x460 = INT16_MAX;
int32_t x471 = INT32_MIN;
volatile int32_t x494 = INT32_MIN;
int64_t t82 = -2101854LL;
int16_t x513 = 2732;
uint8_t x516 = UINT8_MAX;
static int32_t x526 = INT32_MAX;
static int16_t x530 = INT16_MIN;
int8_t x533 = -1;
int32_t x534 = -4338;
volatile int64_t x535 = INT64_MAX;
uint8_t x536 = 45U;
int64_t x549 = -1LL;
int64_t x551 = INT64_MIN;
int32_t x559 = 10;
int32_t x566 = INT32_MIN;
static volatile uint64_t t95 = 1LLU;
static int8_t x577 = 61;
uint8_t x587 = 59U;
uint32_t x588 = 3920U;
int16_t x589 = INT16_MIN;
int16_t x593 = INT16_MIN;
volatile int16_t x594 = INT16_MAX;


void f0(void) {
	int64_t x1 = 34748644094LL;
	int32_t x2 = INT32_MIN;
	int32_t x3 = -1453546;
	volatile int64_t x4 = 10073011538550LL;
	volatile int64_t t0 = -51533429387104707LL;

	t0 = (x1%((x2%x3)%x4));

	if (t0 != 566002LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1085605177315756LL;
	int32_t x6 = -1;
	int64_t x8 = INT64_MAX;
	volatile int64_t t1 = 59914411895518LL;

	t1 = (x5%((x6%x7)%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = -1;
	int32_t x11 = INT32_MAX;
	volatile int32_t t2 = 95350;

	t2 = (x9%((x10%x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	static uint32_t x20 = 51U;
	volatile int64_t t3 = 22662019908383LL;

	t3 = (x17%((x18%x19)%x20));

	if (t3 != -9LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = UINT8_MAX;
	volatile uint32_t x23 = UINT32_MAX;
	uint16_t x24 = 24U;
	static int64_t t4 = 268763249094176706LL;

	t4 = (x21%((x22%x23)%x24));

	if (t4 != -8LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int64_t x30 = INT64_MIN;
	volatile int8_t x31 = INT8_MAX;
	static volatile int64_t x32 = INT64_MAX;
	volatile int64_t t5 = -16333811980295919LL;

	t5 = (x29%((x30%x31)%x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x53 = INT16_MIN;
	static volatile uint64_t x55 = UINT64_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile uint64_t t6 = 1549310LLU;

	t6 = (x53%((x54%x55)%x56));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x62 = 576436699U;
	int8_t x63 = INT8_MAX;
	static int8_t x64 = INT8_MIN;
	static volatile uint32_t t7 = 13U;

	t7 = (x61%((x62%x63)%x64));

	if (t7 != 80U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x65 = INT64_MIN;
	uint16_t x67 = 2763U;
	uint32_t x68 = 23550U;
	int64_t t8 = 1289LL;

	t8 = (x65%((x66%x67)%x68));

	if (t8 != -80LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x69 = -407;
	int16_t x70 = -1;
	int8_t x71 = -14;
	int8_t x72 = INT8_MIN;
	int32_t t9 = -30;

	t9 = (x69%((x70%x71)%x72));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x73 = INT16_MAX;
	int8_t x75 = INT8_MAX;
	static uint16_t x76 = 6U;
	volatile int32_t t10 = 0;

	t10 = (x73%((x74%x75)%x76));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x77 = -1;
	int16_t x78 = -2597;
	int8_t x80 = 54;
	static volatile int32_t t11 = 31;

	t11 = (x77%((x78%x79)%x80));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x89 = 14U;
	uint32_t x91 = 33U;
	static volatile int64_t t12 = 1LL;

	t12 = (x89%((x90%x91)%x92));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x97 = UINT64_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t13 = 168LLU;

	t13 = (x97%((x98%x99)%x100));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x101 = INT32_MAX;
	static uint8_t x103 = UINT8_MAX;
	volatile int8_t x104 = 51;
	volatile int32_t t14 = 1894;

	t14 = (x101%((x102%x103)%x104));

	if (t14 != 23) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = -18;
	int32_t x106 = INT32_MAX;
	static int32_t x107 = -46696017;
	static uint32_t x108 = UINT32_MAX;
	uint32_t t15 = 11184U;

	t15 = (x105%((x106%x107)%x108));

	if (t15 != 1819252U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x109 = 57U;
	uint8_t x110 = 1U;
	static int16_t x111 = 302;
	static int16_t x112 = 5;
	volatile int32_t t16 = 1;

	t16 = (x109%((x110%x111)%x112));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x117 = INT16_MAX;
	uint64_t x118 = 17140142351LLU;
	uint64_t x119 = UINT64_MAX;
	static int8_t x120 = 63;
	uint64_t t17 = 82LLU;

	t17 = (x117%((x118%x119)%x120));

	if (t17 != 11LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x121 = 4U;
	static int8_t x122 = -1;
	volatile int8_t x123 = -49;
	int32_t x124 = -49765517;
	volatile int32_t t18 = -7442;

	t18 = (x121%((x122%x123)%x124));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x125 = 2;
	static int32_t x126 = INT32_MIN;
	volatile uint64_t x128 = 50096382477LLU;
	uint64_t t19 = 934523337263LLU;

	t19 = (x125%((x126%x127)%x128));

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x131 = -3489;
	int8_t x132 = INT8_MIN;

	t20 = (x129%((x130%x131)%x132));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x133 = 5U;
	volatile int8_t x134 = 40;
	int16_t x135 = INT16_MIN;
	static int8_t x136 = INT8_MIN;
	int32_t t21 = 897;

	t21 = (x133%((x134%x135)%x136));

	if (t21 != 5) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t22 = 8555101053106692LL;

	t22 = (x137%((x138%x139)%x140));

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = -44;
	uint64_t x142 = 2699570LLU;
	int64_t x143 = INT64_MIN;
	int64_t x144 = INT64_MAX;
	static volatile uint64_t t23 = 60994LLU;

	t23 = (x141%((x142%x143)%x144));

	if (t23 != 9252LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x154 = INT8_MAX;
	volatile uint32_t x155 = UINT32_MAX;
	static int16_t x156 = -56;

	t24 = (x153%((x154%x155)%x156));

	if (t24 != 15U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x161 = UINT16_MAX;
	int16_t x162 = 11;
	int16_t x163 = INT16_MAX;
	static int64_t x164 = INT64_MIN;
	int64_t t25 = -20LL;

	t25 = (x161%((x162%x163)%x164));

	if (t25 != 8LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x165 = UINT64_MAX;
	static int16_t x166 = INT16_MIN;
	int32_t x167 = -29;
	static int8_t x168 = INT8_MIN;
	uint64_t t26 = 18LLU;

	t26 = (x165%((x166%x167)%x168));

	if (t26 != 26LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MAX;
	int16_t x172 = INT16_MIN;

	t27 = (x169%((x170%x171)%x172));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x177 = 2787LLU;
	uint32_t x178 = UINT32_MAX;
	int32_t x179 = 2533400;
	int16_t x180 = 3355;
	uint64_t t28 = 7LLU;

	t28 = (x177%((x178%x179)%x180));

	if (t28 != 662LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x181 = 2115968890785203207LLU;
	uint16_t x182 = 3U;
	int8_t x183 = 21;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t29 = 51LLU;

	t29 = (x181%((x182%x183)%x184));

	if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MIN;
	uint32_t x187 = 13011355U;
	int64_t t30 = 112325LL;

	t30 = (x185%((x186%x187)%x188));

	if (t30 != -588306LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x190 = -2;
	static int16_t x191 = INT16_MIN;
	static int16_t x192 = INT16_MAX;
	uint32_t t31 = 30764U;

	t31 = (x189%((x190%x191)%x192));

	if (t31 != 292011U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MAX;
	volatile int64_t t32 = -2779308607338259861LL;

	t32 = (x201%((x202%x203)%x204));

	if (t32 != -8LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x205 = 30;
	static int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	volatile int32_t t33 = -1001968334;

	t33 = (x205%((x206%x207)%x208));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x213 = -1;
	uint16_t x214 = 1484U;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = 1153;
	volatile uint64_t t34 = 16615935380985LLU;

	t34 = (x213%((x214%x215)%x216));

	if (t34 != 15LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x218 = 8307976145623645LLU;
	uint8_t x220 = 2U;
	static volatile uint64_t t35 = 806530017379354273LLU;

	t35 = (x217%((x218%x219)%x220));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x231 = 5U;
	int16_t x232 = INT16_MIN;
	int32_t t36 = 1;

	t36 = (x229%((x230%x231)%x232));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x233 = UINT64_MAX;
	int16_t x234 = -41;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = 26U;
	uint64_t t37 = 134621252532836378LLU;

	t37 = (x233%((x234%x235)%x236));

	if (t37 != 14LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x238 = 1934685881LLU;
	volatile int64_t x239 = 557756677LL;
	uint16_t x240 = 60U;
	uint64_t t38 = 4916919163971842288LLU;

	t38 = (x237%((x238%x239)%x240));

	if (t38 != 5LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x241 = 128493956005LLU;
	volatile int64_t x242 = -1LL;
	static int16_t x243 = 127;
	int64_t x244 = INT64_MIN;
	uint64_t t39 = 107865352297LLU;

	t39 = (x241%((x242%x243)%x244));

	if (t39 != 128493956005LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x249 = 1U;
	int16_t x250 = INT16_MAX;
	volatile uint64_t x251 = 35LLU;
	uint8_t x252 = UINT8_MAX;
	volatile uint64_t t40 = 8285158016724277LLU;

	t40 = (x249%((x250%x251)%x252));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x253 = 15;
	static volatile int64_t x254 = INT64_MAX;
	uint8_t x255 = 11U;
	volatile int64_t t41 = -5094915990LL;

	t41 = (x253%((x254%x255)%x256));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = 53;
	int64_t x259 = INT64_MIN;
	volatile int64_t x260 = INT64_MAX;
	int64_t t42 = 6261825818740586LL;

	t42 = (x257%((x258%x259)%x260));

	if (t42 != -22LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x269 = INT32_MIN;
	static int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MAX;
	int64_t t43 = -182039189LL;

	t43 = (x269%((x270%x271)%x272));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x273 = -1;
	static uint32_t x274 = 21U;
	volatile int64_t x275 = INT64_MIN;
	uint16_t x276 = UINT16_MAX;
	volatile int64_t t44 = -64348297LL;

	t44 = (x273%((x274%x275)%x276));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MAX;
	static int8_t x283 = 2;
	static volatile int32_t t45 = 1;

	t45 = (x281%((x282%x283)%x284));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x285 = INT8_MAX;
	volatile int16_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	uint64_t x288 = 3961449331621087140LLU;
	static volatile uint64_t t46 = 5127343977LLU;

	t46 = (x285%((x286%x287)%x288));

	if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x293 = -1LL;
	uint32_t x294 = 18100298U;
	static uint64_t x295 = UINT64_MAX;
	static int16_t x296 = INT16_MIN;
	volatile uint64_t t47 = 33681104867LLU;

	t47 = (x293%((x294%x295)%x296));

	if (t47 != 5977369LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x297 = 8U;
	int64_t x298 = -1LL;
	volatile uint8_t x299 = 25U;
	int8_t x300 = -26;

	t48 = (x297%((x298%x299)%x300));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x301 = -1;
	static volatile uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 1779261119444546LLU;
	int32_t x304 = INT32_MIN;

	t49 = (x301%((x302%x303)%x304));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x305 = INT32_MIN;
	static int64_t x306 = INT64_MIN;
	int16_t x307 = 5;
	volatile int32_t x308 = 78;
	int64_t t50 = -257505804842LL;

	t50 = (x305%((x306%x307)%x308));

	if (t50 != -2LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x309 = INT8_MAX;
	static int8_t x310 = INT8_MAX;
	volatile int64_t x311 = INT64_MIN;
	uint64_t t51 = 446882565LLU;

	t51 = (x309%((x310%x311)%x312));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x313 = 639040474;
	uint16_t x314 = 57U;
	static int32_t x315 = INT32_MAX;
	static int32_t t52 = -326201100;

	t52 = (x313%((x314%x315)%x316));

	if (t52 != 22) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x317 = INT8_MIN;
	static int32_t x318 = -1;
	static int64_t x319 = INT64_MAX;
	uint64_t t53 = 551068LLU;

	t53 = (x317%((x318%x319)%x320));

	if (t53 != 146894LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x321 = -1;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t x324 = INT32_MAX;
	volatile uint64_t t54 = 4255LLU;

	t54 = (x321%((x322%x323)%x324));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x325 = INT64_MIN;
	volatile uint64_t t55 = 958189309640LLU;

	t55 = (x325%((x326%x327)%x328));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x330 = INT16_MIN;
	int32_t x332 = 10047;
	int32_t t56 = 5672;

	t56 = (x329%((x330%x331)%x332));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x333 = 1U;
	int8_t x334 = -1;
	static int64_t x335 = INT64_MAX;
	volatile uint64_t x336 = 1146801999746151889LLU;
	static volatile uint64_t t57 = 1402483302887873LLU;

	t57 = (x333%((x334%x335)%x336));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x345 = 0;
	uint32_t x346 = 1036556042U;
	static volatile uint16_t x347 = UINT16_MAX;
	static int32_t x348 = -5;
	volatile uint32_t t58 = 191085839U;

	t58 = (x345%((x346%x347)%x348));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x350 = 1067317742071333LLU;
	volatile int8_t x351 = INT8_MIN;
	volatile uint64_t t59 = 25663LLU;

	t59 = (x349%((x350%x351)%x352));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x361 = 501U;
	uint64_t x362 = 1514178LLU;
	int8_t x363 = INT8_MIN;
	static int32_t x364 = 11774;
	uint64_t t60 = 28712201988795489LLU;

	t60 = (x361%((x362%x363)%x364));

	if (t60 != 501LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x367 = -21578;
	int16_t x368 = 7593;
	int32_t t61 = 107694;

	t61 = (x365%((x366%x367)%x368));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x369 = -4018LL;
	volatile int16_t x370 = INT16_MIN;
	volatile uint64_t x371 = 3069308831LLU;
	static int16_t x372 = 54;
	uint64_t t62 = 14LLU;

	t62 = (x369%((x370%x371)%x372));

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x373 = -1;
	static int32_t x374 = 8004;
	static uint8_t x375 = 16U;
	volatile uint64_t t63 = 134981133205584LLU;

	t63 = (x373%((x374%x375)%x376));

	if (t63 != 3LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MAX;
	volatile int64_t t64 = 874757343449LL;

	t64 = (x377%((x378%x379)%x380));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x382 = UINT32_MAX;
	volatile uint32_t x383 = 1569351U;
	volatile int64_t x384 = 1537850LL;

	t65 = (x381%((x382%x383)%x384));

	if (t65 != -766201LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x385 = 403667566171LLU;
	int32_t x386 = -30;
	static int64_t x388 = 867LL;

	t66 = (x385%((x386%x387)%x388));

	if (t66 != 403667566171LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x394 = 52243126309861939LLU;
	static volatile int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	uint64_t t67 = 52133007431962LLU;

	t67 = (x393%((x394%x395)%x396));

	if (t67 != 28581806319074544LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x397 = INT16_MIN;
	static volatile int32_t x398 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t68 = 181244LLU;

	t68 = (x397%((x398%x399)%x400));

	if (t68 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x401 = 56361481555494197LLU;
	int64_t x404 = -1LL;

	t69 = (x401%((x402%x403)%x404));

	if (t69 != 110257LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x409 = INT64_MIN;
	int32_t x412 = 338;

	t70 = (x409%((x410%x411)%x412));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x417 = -38744949451426608LL;
	int8_t x418 = -25;
	volatile int32_t x420 = INT32_MIN;

	t71 = (x417%((x418%x419)%x420));

	if (t71 != -8LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x421 = UINT16_MAX;
	int64_t x422 = INT64_MIN;
	volatile uint8_t x423 = 9U;
	int64_t x424 = -6966LL;
	volatile int64_t t72 = 884339LL;

	t72 = (x421%((x422%x423)%x424));

	if (t72 != 7LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x425 = 21U;
	int8_t x426 = 10;
	static uint64_t x427 = 261690829403804231LLU;
	int16_t x428 = INT16_MIN;

	t73 = (x425%((x426%x427)%x428));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x434 = 1;
	uint8_t x435 = UINT8_MAX;
	int32_t t74 = 205739721;

	t74 = (x433%((x434%x435)%x436));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x438 = 1U;
	int16_t x439 = INT16_MIN;
	static volatile int16_t x440 = INT16_MAX;

	t75 = (x437%((x438%x439)%x440));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x441 = 13495;
	int8_t x442 = INT8_MIN;
	static uint64_t x443 = UINT64_MAX;
	static volatile uint64_t t76 = 8480756215LLU;

	t76 = (x441%((x442%x443)%x444));

	if (t76 != 13495LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x445 = -15570487LL;
	int8_t x446 = 39;
	volatile int8_t x447 = INT8_MIN;
	volatile uint32_t x448 = 64062U;

	t77 = (x445%((x446%x447)%x448));

	if (t77 != -10LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x454 = UINT64_MAX;
	volatile int32_t x455 = -435073591;
	int16_t x456 = -1;
	uint64_t t78 = 1976912125826436418LLU;

	t78 = (x453%((x454%x455)%x456));

	if (t78 != 290893057LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x457 = INT64_MAX;
	int8_t x458 = -1;
	int8_t x459 = INT8_MAX;
	int64_t t79 = 13978932LL;

	t79 = (x457%((x458%x459)%x460));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x461 = -61;
	static int32_t x462 = INT32_MIN;
	int64_t x463 = INT64_MIN;
	uint8_t x464 = 120U;
	volatile int64_t t80 = 3313LL;

	t80 = (x461%((x462%x463)%x464));

	if (t80 != -5LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x469 = INT32_MIN;
	int64_t x470 = 16195180LL;
	uint32_t x472 = UINT32_MAX;
	volatile int64_t t81 = 3640LL;

	t81 = (x469%((x470%x471)%x472));

	if (t81 != -9719888LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x493 = 0;
	int64_t x495 = 1933109604LL;
	volatile uint8_t x496 = 72U;

	t82 = (x493%((x494%x495)%x496));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x501 = 0LL;
	uint16_t x502 = 1018U;
	int32_t x503 = INT32_MAX;
	uint8_t x504 = UINT8_MAX;
	static volatile int64_t t83 = 3882009494013958942LL;

	t83 = (x501%((x502%x503)%x504));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x505 = -2387169229LL;
	int16_t x506 = -8666;
	uint64_t x507 = 1986977296104395LLU;
	volatile uint16_t x508 = 427U;
	static uint64_t t84 = 2659LLU;

	t84 = (x505%((x506%x507)%x508));

	if (t84 != 307LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x514 = -298166927;
	static volatile int16_t x515 = -4;
	volatile int32_t t85 = 386;

	t85 = (x513%((x514%x515)%x516));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x517 = UINT32_MAX;
	int64_t x518 = INT64_MAX;
	uint32_t x519 = UINT32_MAX;
	static int8_t x520 = 4;
	volatile int64_t t86 = -1465931551195166LL;

	t86 = (x517%((x518%x519)%x520));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x525 = -70799507107597132LL;
	int8_t x527 = INT8_MIN;
	uint64_t x528 = 1096632535LLU;
	uint64_t t87 = 56643LLU;

	t87 = (x525%((x526%x527)%x528));

	if (t87 != 46LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x529 = -12;
	int32_t x531 = -1510856;
	volatile int64_t x532 = INT64_MIN;
	int64_t t88 = 111379639263320540LL;

	t88 = (x529%((x530%x531)%x532));

	if (t88 != -12LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t t89 = -14533543LL;

	t89 = (x533%((x534%x535)%x536));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x545 = INT32_MIN;
	int16_t x546 = -105;
	int32_t x547 = INT32_MIN;
	uint16_t x548 = UINT16_MAX;
	int32_t t90 = 600126970;

	t90 = (x545%((x546%x547)%x548));

	if (t90 != -23) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x550 = 673;
	static volatile uint64_t x552 = UINT64_MAX;
	volatile uint64_t t91 = 0LLU;

	t91 = (x549%((x550%x551)%x552));

	if (t91 != 254LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x557 = UINT8_MAX;
	static int16_t x558 = -1;
	static uint16_t x560 = 173U;
	volatile int32_t t92 = -42973;

	t92 = (x557%((x558%x559)%x560));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x565 = INT16_MAX;
	static volatile uint64_t x567 = UINT64_MAX;
	uint8_t x568 = UINT8_MAX;
	volatile uint64_t t93 = 2LLU;

	t93 = (x565%((x566%x567)%x568));

	if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x569 = INT64_MIN;
	static volatile int8_t x570 = -14;
	static volatile int64_t x571 = INT64_MAX;
	static int64_t x572 = INT64_MAX;
	static int64_t t94 = -19917819242701169LL;

	t94 = (x569%((x570%x571)%x572));

	if (t94 != -8LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x573 = 0;
	uint8_t x574 = 5U;
	uint64_t x575 = UINT64_MAX;
	uint8_t x576 = 2U;

	t95 = (x573%((x574%x575)%x576));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x578 = UINT16_MAX;
	static int8_t x579 = INT8_MIN;
	static volatile uint16_t x580 = UINT16_MAX;
	static int32_t t96 = -33071296;

	t96 = (x577%((x578%x579)%x580));

	if (t96 != 61) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x585 = INT64_MAX;
	volatile uint16_t x586 = 876U;
	volatile int64_t t97 = 2626380926525929209LL;

	t97 = (x585%((x586%x587)%x588));

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x590 = INT64_MIN;
	uint64_t x591 = UINT64_MAX;
	volatile uint32_t x592 = UINT32_MAX;
	uint64_t t98 = 8950797150257577165LLU;

	t98 = (x589%((x590%x591)%x592));

	if (t98 != 2147450880LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x595 = INT32_MAX;
	static uint64_t x596 = 2685334305420LLU;
	uint64_t t99 = 134221624777LLU;

	t99 = (x593%((x594%x595)%x596));

	if (t99 != 15LLU) { NG(); } else { ; }
	
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

