#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
int8_t x21 = -3;
int16_t x24 = INT16_MIN;
volatile int32_t t3 = -1247150;
uint8_t x57 = 4U;
volatile int32_t t6 = -14318;
volatile uint64_t t7 = 1385843553683198LLU;
static int32_t t8 = -24991992;
int16_t x94 = -4047;
int8_t x95 = INT8_MIN;
int32_t x96 = -1;
int32_t x98 = 0;
volatile uint64_t x100 = 285712824LLU;
int16_t x107 = -16145;
uint8_t x133 = UINT8_MAX;
volatile int16_t x134 = INT16_MIN;
int8_t x141 = 3;
int32_t x143 = 157184;
int32_t t15 = 1028827341;
int16_t x154 = INT16_MIN;
int32_t t18 = -17595;
int32_t x162 = INT32_MIN;
static int16_t x166 = -3;
uint32_t x180 = UINT32_MAX;
volatile int32_t t27 = -15349979;
int64_t x220 = INT64_MIN;
int64_t x236 = INT64_MAX;
static int32_t x237 = INT32_MIN;
int64_t x241 = -6LL;
volatile int16_t x242 = -3292;
uint8_t x245 = 0U;
uint64_t x248 = UINT64_MAX;
volatile int32_t x252 = INT32_MIN;
int32_t t35 = INT32_MAX;
volatile int64_t x279 = -17881815731LL;
uint32_t x291 = 4U;
volatile int32_t t38 = -49015;
static volatile uint8_t x297 = 29U;
uint64_t x312 = UINT64_MAX;
uint64_t x324 = 21LLU;
int8_t x330 = -1;
uint8_t x345 = 1U;
int16_t x355 = -1;
int32_t x365 = INT32_MIN;
static int16_t x393 = INT16_MIN;
static volatile int32_t t50 = 7;
int32_t x413 = 10;
uint16_t x419 = 1U;
static volatile int16_t x425 = INT16_MAX;
static int16_t x427 = INT16_MAX;
volatile int32_t t54 = -6;
uint64_t x429 = 789371670548LLU;
uint32_t x448 = 7280U;
uint64_t x451 = UINT64_MAX;
int64_t t59 = -52032LL;
volatile uint16_t x464 = UINT16_MAX;
static int64_t x469 = INT64_MIN;
volatile int64_t t61 = INT64_MIN;
uint16_t x477 = 92U;
int32_t x479 = 1;
uint64_t x484 = 3931602579LLU;
int16_t x521 = INT16_MAX;
uint8_t x531 = UINT8_MAX;
int8_t x548 = INT8_MIN;
int32_t x556 = INT32_MIN;
static int64_t x563 = INT64_MIN;
volatile uint8_t x635 = UINT8_MAX;
int64_t x649 = -173251253735715840LL;
uint16_t x651 = 484U;
int16_t x658 = INT16_MIN;
uint64_t t79 = 106098052261LLU;
static uint8_t x663 = UINT8_MAX;
volatile int32_t t80 = -1142074;
volatile int32_t t81 = INT32_MAX;
int8_t x678 = INT8_MIN;
static int32_t t82 = 2;
uint32_t x685 = 18238U;
uint8_t x688 = 23U;
int32_t x718 = -1;
int64_t x725 = 122LL;
static int16_t x738 = 0;
volatile int32_t t87 = -25043269;
int8_t x745 = INT8_MIN;
static volatile int32_t t88 = -296410;
int64_t x778 = -1LL;
static volatile int64_t x800 = INT64_MIN;
int16_t x818 = -3568;
uint64_t x829 = UINT64_MAX;
volatile int64_t t97 = INT64_MAX;
volatile uint16_t x867 = 30111U;
volatile int32_t t98 = 0;


void f0(void) {
	static int64_t x5 = -1LL;
	int64_t x6 = -1LL;
	int64_t x7 = -40LL;
	volatile int64_t t0 = -1026891263167298LL;

	t0 = (x5/(x6<=(x7<=x8)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x17 = INT32_MIN;
	volatile int16_t x18 = -1;
	static volatile uint64_t x19 = 57372394635191342LLU;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t1 = INT32_MIN;

	t1 = (x17/(x18<=(x19<=x20)));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x22 = -1;
	int8_t x23 = INT8_MAX;
	static volatile int32_t t2 = -233;

	t2 = (x21/(x22<=(x23<=x24)));

	if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = -1;
	int16_t x38 = INT16_MIN;
	volatile int64_t x39 = -1LL;
	static int64_t x40 = 45466881077LL;

	t3 = (x37/(x38<=(x39<=x40)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = UINT64_MAX;
	uint64_t x48 = 1096025628LLU;
	volatile int32_t t4 = 1557;

	t4 = (x45/(x46<=(x47<=x48)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x58 = INT32_MIN;
	int64_t x59 = 152673LL;
	volatile uint16_t x60 = UINT16_MAX;
	int32_t t5 = 196;

	t5 = (x57/(x58<=(x59<=x60)));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x61 = INT8_MIN;
	volatile int64_t x62 = INT64_MIN;
	static int64_t x63 = INT64_MAX;
	uint16_t x64 = 18U;

	t6 = (x61/(x62<=(x63<=x64)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x65 = 1666912045812LLU;
	int32_t x66 = -1893;
	static int16_t x67 = -1;
	int64_t x68 = INT64_MIN;

	t7 = (x65/(x66<=(x67<=x68)));

	if (t7 != 1666912045812LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MIN;
	uint16_t x75 = 0U;
	uint8_t x76 = 8U;

	t8 = (x73/(x74<=(x75<=x76)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x85 = 19536462898LL;
	int64_t x86 = -1LL;
	uint64_t x87 = 52597938987990LLU;
	static int16_t x88 = -1;
	volatile int64_t t9 = 16478853806407638LL;

	t9 = (x85/(x86<=(x87<=x88)));

	if (t9 != 19536462898LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x89 = -1;
	volatile int64_t x90 = INT64_MIN;
	uint8_t x91 = 3U;
	int64_t x92 = INT64_MAX;
	volatile int32_t t10 = 0;

	t10 = (x89/(x90<=(x91<=x92)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x93 = 2;
	static volatile int32_t t11 = -19225111;

	t11 = (x93/(x94<=(x95<=x96)));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x97 = INT16_MIN;
	int32_t x99 = INT32_MIN;
	static int32_t t12 = -2675;

	t12 = (x97/(x98<=(x99<=x100)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x105 = -132805555LL;
	static int64_t x106 = 1LL;
	uint16_t x108 = 15U;
	static int64_t t13 = -383LL;

	t13 = (x105/(x106<=(x107<=x108)));

	if (t13 != -132805555LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x135 = UINT8_MAX;
	int16_t x136 = -407;
	int32_t t14 = -20084828;

	t14 = (x133/(x134<=(x135<=x136)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x142 = -1;
	static int16_t x144 = -2544;

	t15 = (x141/(x142<=(x143<=x144)));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x149 = 7;
	int16_t x150 = INT16_MIN;
	int16_t x151 = -1;
	int8_t x152 = INT8_MAX;
	volatile int32_t t16 = -51;

	t16 = (x149/(x150<=(x151<=x152)));

	if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x153 = -15723;
	int16_t x155 = 3;
	int8_t x156 = 16;
	volatile int32_t t17 = 37;

	t17 = (x153/(x154<=(x155<=x156)));

	if (t17 != -15723) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x157 = -1;
	static int32_t x158 = INT32_MIN;
	int64_t x159 = -1LL;
	uint8_t x160 = 111U;

	t18 = (x157/(x158<=(x159<=x160)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x161 = 0U;
	uint8_t x163 = UINT8_MAX;
	int64_t x164 = 286700458LL;
	int32_t t19 = 3342;

	t19 = (x161/(x162<=(x163<=x164)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x165 = -122;
	static int16_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t20 = -244622713;

	t20 = (x165/(x166<=(x167<=x168)));

	if (t20 != -122) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x177 = UINT64_MAX;
	static int16_t x178 = INT16_MIN;
	int32_t x179 = -31820;
	static volatile uint64_t t21 = UINT64_MAX;

	t21 = (x177/(x178<=(x179<=x180)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x181 = 84558210903917347LL;
	volatile int8_t x182 = INT8_MIN;
	uint16_t x183 = 11362U;
	int16_t x184 = 347;
	static int64_t t22 = -17287735834LL;

	t22 = (x181/(x182<=(x183<=x184)));

	if (t22 != 84558210903917347LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x189 = INT16_MAX;
	static int8_t x190 = INT8_MIN;
	static int16_t x191 = INT16_MAX;
	int64_t x192 = INT64_MAX;
	static volatile int32_t t23 = -121643285;

	t23 = (x189/(x190<=(x191<=x192)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x201 = 15768U;
	int8_t x202 = 0;
	int16_t x203 = 27;
	int64_t x204 = INT64_MAX;
	int32_t t24 = -1;

	t24 = (x201/(x202<=(x203<=x204)));

	if (t24 != 15768) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x205 = -7;
	static volatile int16_t x206 = -10;
	static int32_t x207 = 27990;
	int8_t x208 = 0;
	int32_t t25 = -2060951;

	t25 = (x205/(x206<=(x207<=x208)));

	if (t25 != -7) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x209 = 36U;
	int64_t x210 = INT64_MIN;
	static int32_t x211 = 32477;
	static int64_t x212 = INT64_MAX;
	uint32_t t26 = 393406U;

	t26 = (x209/(x210<=(x211<=x212)));

	if (t26 != 36U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x213 = 10;
	int16_t x214 = -31;
	volatile uint8_t x215 = 1U;
	int16_t x216 = -1;

	t27 = (x213/(x214<=(x215<=x216)));

	if (t27 != 10) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x217 = INT8_MAX;
	int8_t x218 = INT8_MIN;
	volatile int64_t x219 = INT64_MAX;
	static int32_t t28 = -132;

	t28 = (x217/(x218<=(x219<=x220)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x221 = 0U;
	int64_t x222 = INT64_MIN;
	uint32_t x223 = 9553390U;
	static volatile int64_t x224 = 85169614651LL;
	int32_t t29 = 71;

	t29 = (x221/(x222<=(x223<=x224)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x233 = INT32_MIN;
	volatile int32_t x234 = INT32_MIN;
	int64_t x235 = 31622584428815LL;
	volatile int32_t t30 = INT32_MIN;

	t30 = (x233/(x234<=(x235<=x236)));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x238 = -1;
	static volatile int16_t x239 = -1;
	uint16_t x240 = 0U;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x237/(x238<=(x239<=x240)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x243 = -74643408235LL;
	uint16_t x244 = 7U;
	volatile int64_t t32 = -52243805057685LL;

	t32 = (x241/(x242<=(x243<=x244)));

	if (t32 != -6LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MAX;
	static int32_t t33 = -2;

	t33 = (x245/(x246<=(x247<=x248)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x249 = -794273LL;
	int64_t x250 = INT64_MIN;
	uint32_t x251 = UINT32_MAX;
	int64_t t34 = -6854456064LL;

	t34 = (x249/(x250<=(x251<=x252)));

	if (t34 != -794273LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x253 = INT32_MAX;
	int32_t x254 = INT32_MIN;
	int8_t x255 = -1;
	uint8_t x256 = UINT8_MAX;

	t35 = (x253/(x254<=(x255<=x256)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile int64_t x270 = INT64_MIN;
	static int64_t x271 = -43LL;
	uint64_t x272 = 1925007560558709241LLU;
	volatile int32_t t36 = -9620;

	t36 = (x269/(x270<=(x271<=x272)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x277 = 2755U;
	int16_t x278 = -1;
	uint64_t x280 = 23552912436283426LLU;
	volatile int32_t t37 = -112;

	t37 = (x277/(x278<=(x279<=x280)));

	if (t37 != 2755) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x289 = -1;
	int16_t x290 = INT16_MIN;
	volatile uint8_t x292 = UINT8_MAX;

	t38 = (x289/(x290<=(x291<=x292)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x298 = 0LLU;
	static int64_t x299 = -1LL;
	int64_t x300 = -1LL;
	int32_t t39 = 21449;

	t39 = (x297/(x298<=(x299<=x300)));

	if (t39 != 29) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x309 = INT64_MAX;
	int32_t x310 = INT32_MIN;
	volatile int32_t x311 = 254716;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x309/(x310<=(x311<=x312)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x321 = 2044;
	volatile int8_t x322 = -42;
	uint32_t x323 = 2U;
	static int32_t t41 = -155368655;

	t41 = (x321/(x322<=(x323<=x324)));

	if (t41 != 2044) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x325 = -1;
	int16_t x326 = -16;
	uint32_t x327 = 7U;
	uint64_t x328 = UINT64_MAX;
	int32_t t42 = 42;

	t42 = (x325/(x326<=(x327<=x328)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x329 = INT64_MIN;
	volatile int64_t x331 = INT64_MIN;
	int32_t x332 = -1;
	volatile int64_t t43 = INT64_MIN;

	t43 = (x329/(x330<=(x331<=x332)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x346 = INT64_MIN;
	int8_t x347 = 0;
	volatile uint64_t x348 = 259635LLU;
	int32_t t44 = -297364;

	t44 = (x345/(x346<=(x347<=x348)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int16_t x354 = INT16_MIN;
	int8_t x356 = -1;
	volatile int32_t t45 = -13;

	t45 = (x353/(x354<=(x355<=x356)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x366 = -3922840414107663494LL;
	int16_t x367 = -1;
	int32_t x368 = -4122;
	volatile int32_t t46 = INT32_MIN;

	t46 = (x365/(x366<=(x367<=x368)));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x369 = -171573015104223LL;
	int16_t x370 = INT16_MIN;
	volatile uint32_t x371 = 3U;
	static volatile int64_t x372 = -1LL;
	int64_t t47 = 432445820391643LL;

	t47 = (x369/(x370<=(x371<=x372)));

	if (t47 != -171573015104223LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x377 = INT16_MIN;
	int16_t x378 = -1;
	uint16_t x379 = 0U;
	int16_t x380 = 608;
	int32_t t48 = 3808892;

	t48 = (x377/(x378<=(x379<=x380)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = -1LL;
	int8_t x387 = INT8_MAX;
	static volatile uint32_t x388 = UINT32_MAX;
	static int32_t t49 = 13493716;

	t49 = (x385/(x386<=(x387<=x388)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x394 = INT16_MIN;
	volatile uint64_t x395 = 65427789754789LLU;
	volatile int32_t x396 = INT32_MIN;

	t50 = (x393/(x394<=(x395<=x396)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x397 = -1;
	int64_t x398 = -728LL;
	static uint32_t x399 = 135560U;
	int64_t x400 = -1LL;
	static int32_t t51 = 118457694;

	t51 = (x397/(x398<=(x399<=x400)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x414 = -343982;
	static volatile uint32_t x415 = 255U;
	uint64_t x416 = UINT64_MAX;
	static int32_t t52 = -109;

	t52 = (x413/(x414<=(x415<=x416)));

	if (t52 != 10) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x417 = 9;
	int32_t x418 = -10;
	int8_t x420 = INT8_MIN;
	int32_t t53 = 8;

	t53 = (x417/(x418<=(x419<=x420)));

	if (t53 != 9) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x426 = INT32_MIN;
	int8_t x428 = -1;

	t54 = (x425/(x426<=(x427<=x428)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x430 = INT32_MIN;
	uint8_t x431 = 45U;
	int8_t x432 = -1;
	volatile uint64_t t55 = 1954330936510024992LLU;

	t55 = (x429/(x430<=(x431<=x432)));

	if (t55 != 789371670548LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x441 = INT16_MIN;
	int16_t x442 = INT16_MIN;
	uint8_t x443 = 1U;
	int16_t x444 = 773;
	static int32_t t56 = 0;

	t56 = (x441/(x442<=(x443<=x444)));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x445 = 2;
	int8_t x446 = INT8_MIN;
	static volatile int32_t x447 = 7;
	int32_t t57 = 4;

	t57 = (x445/(x446<=(x447<=x448)));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x449 = INT32_MIN;
	int64_t x450 = INT64_MIN;
	static int64_t x452 = -341154296479851412LL;
	int32_t t58 = INT32_MIN;

	t58 = (x449/(x450<=(x451<=x452)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x457 = 3LL;
	volatile int64_t x458 = -602716556LL;
	static uint8_t x459 = 0U;
	int8_t x460 = -1;

	t59 = (x457/(x458<=(x459<=x460)));

	if (t59 != 3LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x461 = 1938579302LLU;
	static uint8_t x462 = 1U;
	uint8_t x463 = UINT8_MAX;
	static volatile uint64_t t60 = 2226182815506919LLU;

	t60 = (x461/(x462<=(x463<=x464)));

	if (t60 != 1938579302LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x470 = INT64_MIN;
	static volatile uint16_t x471 = 536U;
	uint64_t x472 = 4313978703825806LLU;

	t61 = (x469/(x470<=(x471<=x472)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x478 = -1;
	int8_t x480 = INT8_MIN;
	volatile int32_t t62 = -939894;

	t62 = (x477/(x478<=(x479<=x480)));

	if (t62 != 92) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x481 = UINT16_MAX;
	int64_t x482 = INT64_MIN;
	uint64_t x483 = UINT64_MAX;
	static int32_t t63 = 528069;

	t63 = (x481/(x482<=(x483<=x484)));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x501 = INT64_MIN;
	int16_t x502 = -1;
	int16_t x503 = -43;
	int64_t x504 = INT64_MAX;
	int64_t t64 = INT64_MIN;

	t64 = (x501/(x502<=(x503<=x504)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x522 = -24;
	int64_t x523 = INT64_MIN;
	int64_t x524 = INT64_MIN;
	static int32_t t65 = 479944840;

	t65 = (x521/(x522<=(x523<=x524)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x529 = 7U;
	static volatile int32_t x530 = -1;
	int16_t x532 = 4;
	int32_t t66 = -1;

	t66 = (x529/(x530<=(x531<=x532)));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x545 = INT8_MAX;
	volatile int64_t x546 = INT64_MIN;
	static volatile int64_t x547 = 1882898158172564LL;
	int32_t t67 = 203;

	t67 = (x545/(x546<=(x547<=x548)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x549 = UINT16_MAX;
	int8_t x550 = INT8_MIN;
	uint16_t x551 = 1U;
	uint8_t x552 = 3U;
	int32_t t68 = -419;

	t68 = (x549/(x550<=(x551<=x552)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x553 = INT16_MAX;
	int32_t x554 = -1;
	int8_t x555 = INT8_MAX;
	volatile int32_t t69 = -49320;

	t69 = (x553/(x554<=(x555<=x556)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x557 = 17U;
	int8_t x558 = INT8_MIN;
	int16_t x559 = INT16_MIN;
	int32_t x560 = -1;
	int32_t t70 = -106598;

	t70 = (x557/(x558<=(x559<=x560)));

	if (t70 != 17) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x561 = INT64_MIN;
	int16_t x562 = -1;
	static int8_t x564 = INT8_MAX;
	int64_t t71 = INT64_MIN;

	t71 = (x561/(x562<=(x563<=x564)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x565 = -405;
	volatile int32_t x566 = -1;
	uint32_t x567 = 1152466732U;
	static volatile int32_t x568 = INT32_MAX;
	static volatile int32_t t72 = 106050;

	t72 = (x565/(x566<=(x567<=x568)));

	if (t72 != -405) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x585 = 1;
	int64_t x586 = INT64_MIN;
	uint16_t x587 = 31U;
	uint16_t x588 = 83U;
	int32_t t73 = 36974;

	t73 = (x585/(x586<=(x587<=x588)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x589 = -1;
	int32_t x590 = INT32_MIN;
	static uint8_t x591 = 25U;
	int8_t x592 = -51;
	static volatile int32_t t74 = -872;

	t74 = (x589/(x590<=(x591<=x592)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x617 = 1180149252U;
	uint8_t x618 = 0U;
	int64_t x619 = INT64_MAX;
	uint64_t x620 = UINT64_MAX;
	volatile uint32_t t75 = 50U;

	t75 = (x617/(x618<=(x619<=x620)));

	if (t75 != 1180149252U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x633 = INT32_MAX;
	int64_t x634 = INT64_MIN;
	volatile int32_t x636 = INT32_MIN;
	static int32_t t76 = INT32_MAX;

	t76 = (x633/(x634<=(x635<=x636)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x641 = -20;
	int8_t x642 = -5;
	volatile int16_t x643 = 700;
	static int32_t x644 = INT32_MIN;
	int32_t t77 = -382;

	t77 = (x641/(x642<=(x643<=x644)));

	if (t77 != -20) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x650 = -1;
	volatile int32_t x652 = -9;
	int64_t t78 = -2036832128LL;

	t78 = (x649/(x650<=(x651<=x652)));

	if (t78 != -173251253735715840LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x657 = 118527LLU;
	volatile int16_t x659 = INT16_MIN;
	int32_t x660 = INT32_MAX;

	t79 = (x657/(x658<=(x659<=x660)));

	if (t79 != 118527LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x661 = 6U;
	int16_t x662 = -4;
	static volatile int8_t x664 = 0;

	t80 = (x661/(x662<=(x663<=x664)));

	if (t80 != 6) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x673 = INT32_MAX;
	volatile int16_t x674 = -1;
	volatile uint64_t x675 = 1LLU;
	int32_t x676 = INT32_MIN;

	t81 = (x673/(x674<=(x675<=x676)));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x677 = INT16_MIN;
	int32_t x679 = -1;
	int16_t x680 = INT16_MIN;

	t82 = (x677/(x678<=(x679<=x680)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x681 = -3;
	int64_t x682 = -14769749856LL;
	int8_t x683 = 1;
	static uint64_t x684 = 1651301LLU;
	int32_t t83 = -65118957;

	t83 = (x681/(x682<=(x683<=x684)));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x686 = -1;
	uint64_t x687 = 1LLU;
	volatile uint32_t t84 = 11381790U;

	t84 = (x685/(x686<=(x687<=x688)));

	if (t84 != 18238U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x717 = -1;
	int16_t x719 = INT16_MAX;
	int8_t x720 = 0;
	volatile int32_t t85 = 52365;

	t85 = (x717/(x718<=(x719<=x720)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x726 = INT64_MIN;
	int8_t x727 = -1;
	int8_t x728 = -1;
	volatile int64_t t86 = -266136715LL;

	t86 = (x725/(x726<=(x727<=x728)));

	if (t86 != 122LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x737 = INT8_MAX;
	int8_t x739 = -58;
	int64_t x740 = -40821756299LL;

	t87 = (x737/(x738<=(x739<=x740)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x746 = INT64_MIN;
	volatile uint32_t x747 = 654U;
	volatile uint8_t x748 = 41U;

	t88 = (x745/(x746<=(x747<=x748)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x777 = -12;
	uint32_t x779 = 1U;
	uint64_t x780 = UINT64_MAX;
	int32_t t89 = -73793;

	t89 = (x777/(x778<=(x779<=x780)));

	if (t89 != -12) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x797 = -1LL;
	int8_t x798 = INT8_MIN;
	uint8_t x799 = UINT8_MAX;
	volatile int64_t t90 = 35274334LL;

	t90 = (x797/(x798<=(x799<=x800)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x805 = INT8_MIN;
	static volatile int16_t x806 = -787;
	int16_t x807 = 1889;
	static volatile int64_t x808 = -1LL;
	int32_t t91 = 867;

	t91 = (x805/(x806<=(x807<=x808)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x809 = INT64_MIN;
	int64_t x810 = INT64_MIN;
	uint64_t x811 = 722246LLU;
	uint32_t x812 = UINT32_MAX;
	static volatile int64_t t92 = INT64_MIN;

	t92 = (x809/(x810<=(x811<=x812)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x813 = UINT64_MAX;
	int32_t x814 = -943;
	static int64_t x815 = 266092617791864LL;
	int32_t x816 = 3711;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x813/(x814<=(x815<=x816)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x817 = 0;
	int64_t x819 = INT64_MIN;
	uint64_t x820 = 131786236099LLU;
	static volatile int32_t t94 = 42949782;

	t94 = (x817/(x818<=(x819<=x820)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x830 = INT64_MIN;
	static int16_t x831 = 302;
	int32_t x832 = -1;
	uint64_t t95 = UINT64_MAX;

	t95 = (x829/(x830<=(x831<=x832)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x833 = INT64_MIN;
	int16_t x834 = INT16_MIN;
	int8_t x835 = INT8_MAX;
	int64_t x836 = 55445693301839456LL;
	static int64_t t96 = INT64_MIN;

	t96 = (x833/(x834<=(x835<=x836)));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x849 = INT64_MAX;
	volatile int8_t x850 = -32;
	volatile uint16_t x851 = 697U;
	uint64_t x852 = 1210812101811586LLU;

	t97 = (x849/(x850<=(x851<=x852)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x865 = INT8_MAX;
	int64_t x866 = -1LL;
	static volatile int8_t x868 = -1;

	t98 = (x865/(x866<=(x867<=x868)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x877 = INT64_MIN;
	int16_t x878 = INT16_MIN;
	uint16_t x879 = UINT16_MAX;
	uint16_t x880 = 7U;
	int64_t t99 = INT64_MIN;

	t99 = (x877/(x878<=(x879<=x880)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

