#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x26 = INT16_MIN;
int16_t x27 = 41;
volatile uint16_t x35 = 13U;
static int16_t x69 = INT16_MIN;
int32_t t5 = -10;
volatile int32_t t7 = -2;
int16_t x91 = INT16_MIN;
uint32_t x104 = 123808735U;
int16_t x107 = 37;
volatile uint32_t x108 = UINT32_MAX;
static volatile uint32_t t13 = 18598846U;
static volatile uint16_t x134 = UINT16_MAX;
int32_t x143 = INT32_MIN;
uint8_t x144 = 48U;
int64_t x146 = INT64_MIN;
uint64_t x147 = 1881763373LLU;
static int32_t x155 = -1534;
volatile uint8_t x160 = 28U;
int16_t x163 = INT16_MIN;
static int8_t x164 = INT8_MIN;
int16_t x170 = -1;
uint8_t x171 = 5U;
static int32_t t20 = -40;
volatile uint64_t t22 = 16208457698387553LLU;
static volatile int32_t t23 = -69;
static volatile int8_t x228 = -2;
static uint32_t t25 = 2U;
int16_t x241 = -174;
int32_t t27 = -248979;
int16_t x249 = INT16_MIN;
static uint32_t x255 = UINT32_MAX;
uint32_t t30 = 476464094U;
int8_t x268 = -1;
int16_t x269 = -1;
int8_t x271 = -12;
int32_t t32 = -47;
int64_t t33 = INT64_MIN;
int16_t x280 = -1;
static uint8_t x281 = 14U;
volatile uint32_t t37 = 18U;
uint32_t x305 = 0U;
uint32_t x307 = 15251251U;
int32_t x308 = -5372;
volatile uint32_t t38 = 562U;
int32_t x312 = INT32_MAX;
volatile int32_t t40 = -428588542;
uint64_t x318 = 48984805LLU;
int16_t x334 = INT16_MIN;
int8_t x346 = INT8_MIN;
int64_t x350 = INT64_MIN;
volatile int64_t x351 = INT64_MIN;
static uint64_t x357 = UINT64_MAX;
static int8_t x386 = INT8_MIN;
int16_t x387 = INT16_MAX;
int64_t x389 = INT64_MIN;
int64_t x390 = -22LL;
int64_t x391 = -5278LL;
uint64_t x396 = UINT64_MAX;
int8_t x404 = 10;
int32_t x428 = -1;
static volatile uint16_t x450 = 46U;
int32_t x452 = 23526249;
volatile int8_t x458 = INT8_MIN;
uint16_t x460 = 8218U;
int16_t x464 = INT16_MAX;
int64_t t58 = INT64_MIN;
volatile int64_t x465 = -158729210LL;
int64_t x466 = -44052LL;
volatile int8_t x478 = 1;
int32_t t62 = -15;
uint32_t t64 = 8568752U;
int64_t x502 = INT64_MIN;
static volatile int64_t t65 = -266427788308LL;
volatile int32_t t68 = -1;
uint8_t x534 = UINT8_MAX;
uint64_t x550 = UINT64_MAX;
uint64_t t70 = 21297960296LLU;
volatile int8_t x556 = INT8_MIN;
int64_t x562 = -7LL;
static volatile int64_t t75 = INT64_MIN;
uint32_t x618 = 2760U;
uint64_t t78 = 35428569384619LLU;
uint8_t x627 = 100U;
static int64_t x639 = INT64_MIN;
static uint8_t x640 = UINT8_MAX;
volatile int64_t t82 = -50630847205205LL;
static volatile uint8_t x654 = 2U;
volatile int32_t x656 = INT32_MAX;
uint32_t x661 = UINT32_MAX;
volatile int16_t x664 = INT16_MIN;
int32_t x668 = 48621945;
int32_t t85 = -2829;
volatile int16_t x683 = -771;
volatile uint64_t x693 = 19096248391401LLU;
int32_t x696 = INT32_MIN;
int64_t x707 = INT64_MIN;
int8_t x734 = INT8_MIN;
int32_t t91 = -113772;
uint16_t x742 = 11U;
int64_t x743 = INT64_MIN;
volatile int64_t x767 = -1LL;
static uint8_t x770 = UINT8_MAX;
int64_t x790 = INT64_MAX;


void f0(void) {
	int64_t x1 = -56746LL;
	int16_t x2 = -1;
	uint8_t x3 = UINT8_MAX;
	volatile int32_t x4 = 181148473;
	volatile int64_t t0 = -1135LL;

	t0 = (x1^(x2%(x3<x4)));

	if (t0 != -56746LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = -684132363;
	volatile int32_t x18 = 7692;
	int64_t x19 = -1LL;
	uint16_t x20 = 410U;
	volatile int32_t t1 = -653772721;

	t1 = (x17^(x18%(x19<x20)));

	if (t1 != -684132363) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = -97688033974081180LL;
	int64_t x28 = INT64_MAX;
	int64_t t2 = -6579LL;

	t2 = (x25^(x26%(x27<x28)));

	if (t2 != -97688033974081180LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = -1;
	static int8_t x34 = -31;
	uint64_t x36 = 40003078LLU;
	static volatile int32_t t3 = 10;

	t3 = (x33^(x34%(x35<x36)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = -1;
	volatile int32_t x67 = INT32_MIN;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t4 = INT32_MIN;

	t4 = (x65^(x66%(x67<x68)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x70 = 2;
	volatile int64_t x71 = -1LL;
	uint32_t x72 = 1U;

	t5 = (x69^(x70%(x71<x72)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x73 = UINT32_MAX;
	volatile int8_t x74 = 5;
	static int32_t x75 = INT32_MIN;
	static int8_t x76 = -18;
	static volatile uint32_t t6 = UINT32_MAX;

	t6 = (x73^(x74%(x75<x76)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	int32_t x79 = 441;
	uint32_t x80 = UINT32_MAX;

	t7 = (x77^(x78%(x79<x80)));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x89 = -1LL;
	static volatile int8_t x90 = INT8_MIN;
	uint16_t x92 = 1558U;
	static volatile int64_t t8 = 146LL;

	t8 = (x89^(x90%(x91<x92)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x93 = 3342U;
	volatile int16_t x94 = INT16_MIN;
	static volatile uint8_t x95 = 0U;
	int32_t x96 = 2915299;
	volatile int32_t t9 = 37227650;

	t9 = (x93^(x94%(x95<x96)));

	if (t9 != 3342) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x101 = -1;
	volatile int8_t x102 = 51;
	uint16_t x103 = 23U;
	int32_t t10 = 75855;

	t10 = (x101^(x102%(x103<x104)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x105 = -1;
	int16_t x106 = INT16_MAX;
	volatile int32_t t11 = 48105;

	t11 = (x105^(x106%(x107<x108)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x109 = 28;
	int16_t x110 = 0;
	int64_t x111 = INT64_MIN;
	volatile int16_t x112 = -1;
	int32_t t12 = -1;

	t12 = (x109^(x110%(x111<x112)));

	if (t12 != 28) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x125 = 29U;
	static uint8_t x126 = UINT8_MAX;
	volatile int16_t x127 = INT16_MAX;
	uint32_t x128 = UINT32_MAX;

	t13 = (x125^(x126%(x127<x128)));

	if (t13 != 29U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x133 = -24;
	int8_t x135 = 1;
	static uint32_t x136 = 14U;
	static volatile int32_t t14 = 101493472;

	t14 = (x133^(x134%(x135<x136)));

	if (t14 != -24) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x141 = INT32_MAX;
	int8_t x142 = -32;
	static int32_t t15 = INT32_MAX;

	t15 = (x141^(x142%(x143<x144)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x145 = INT32_MIN;
	int16_t x148 = -10832;
	volatile int64_t t16 = 18486325752LL;

	t16 = (x145^(x146%(x147<x148)));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x153 = 8087377744322391LLU;
	volatile int32_t x154 = INT32_MIN;
	static volatile int64_t x156 = INT64_MAX;
	static uint64_t t17 = 207116779LLU;

	t17 = (x153^(x154%(x155<x156)));

	if (t17 != 8087377744322391LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x157 = 1U;
	uint16_t x158 = 473U;
	int64_t x159 = INT64_MIN;
	static int32_t t18 = 503574;

	t18 = (x157^(x158%(x159<x160)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x161 = -1;
	int8_t x162 = 1;
	volatile int32_t t19 = 14;

	t19 = (x161^(x162%(x163<x164)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x169 = 23U;
	static int8_t x172 = INT8_MAX;

	t20 = (x169^(x170%(x171<x172)));

	if (t20 != 23) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x213 = UINT32_MAX;
	int8_t x214 = -1;
	uint32_t x215 = 32U;
	int32_t x216 = 21096;
	static uint32_t t21 = UINT32_MAX;

	t21 = (x213^(x214%(x215<x216)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x217 = INT16_MAX;
	volatile uint64_t x218 = 7LLU;
	int8_t x219 = INT8_MIN;
	int64_t x220 = 2281LL;

	t22 = (x217^(x218%(x219<x220)));

	if (t22 != 32767LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x221 = -1;
	static volatile int16_t x222 = INT16_MAX;
	int64_t x223 = -1LL;
	uint32_t x224 = UINT32_MAX;

	t23 = (x221^(x222%(x223<x224)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x225 = INT16_MIN;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = INT16_MIN;
	uint32_t t24 = 50023610U;

	t24 = (x225^(x226%(x227<x228)));

	if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x230 = 4976037U;
	static int32_t x231 = -358641;
	int64_t x232 = -1LL;

	t25 = (x229^(x230%(x231<x232)));

	if (t25 != 4294934528U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x237 = 1473;
	volatile uint32_t x238 = UINT32_MAX;
	int64_t x239 = -138307LL;
	volatile int64_t x240 = -1LL;
	volatile uint32_t t26 = 114U;

	t26 = (x237^(x238%(x239<x240)));

	if (t26 != 1473U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x242 = -1518730;
	int16_t x243 = 19;
	static uint64_t x244 = 60780510285435LLU;

	t27 = (x241^(x242%(x243<x244)));

	if (t27 != -174) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MIN;
	volatile int32_t x252 = INT32_MIN;
	static volatile int32_t t28 = 11;

	t28 = (x249^(x250%(x251<x252)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x253 = 814;
	int8_t x254 = INT8_MIN;
	int64_t x256 = INT64_MAX;
	volatile int32_t t29 = -118;

	t29 = (x253^(x254%(x255<x256)));

	if (t29 != 814) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x257 = 106631U;
	int8_t x258 = INT8_MAX;
	uint8_t x259 = UINT8_MAX;
	volatile int64_t x260 = INT64_MAX;

	t30 = (x257^(x258%(x259<x260)));

	if (t30 != 106631U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x265 = -1LL;
	volatile uint16_t x266 = 15U;
	int16_t x267 = INT16_MIN;
	volatile int64_t t31 = -267873730121190LL;

	t31 = (x265^(x266%(x267<x268)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x270 = -125;
	int8_t x272 = 0;

	t32 = (x269^(x270%(x271<x272)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x273 = INT64_MIN;
	static int32_t x274 = 7;
	int8_t x275 = INT8_MIN;
	static int16_t x276 = -1;

	t33 = (x273^(x274%(x275<x276)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x277 = 49U;
	volatile int64_t x278 = 15367598LL;
	uint64_t x279 = 615533614983362LLU;
	volatile int64_t t34 = 6543LL;

	t34 = (x277^(x278%(x279<x280)));

	if (t34 != 49LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x282 = INT8_MIN;
	volatile int32_t x283 = INT32_MIN;
	int8_t x284 = -1;
	int32_t t35 = 761013;

	t35 = (x281^(x282%(x283<x284)));

	if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x289 = 92787U;
	uint8_t x290 = 3U;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;
	uint32_t t36 = 116U;

	t36 = (x289^(x290%(x291<x292)));

	if (t36 != 92787U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x297 = 19U;
	uint32_t x298 = UINT32_MAX;
	static volatile uint64_t x299 = 2034LLU;
	uint16_t x300 = 14356U;

	t37 = (x297^(x298%(x299<x300)));

	if (t37 != 19U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x306 = 0;

	t38 = (x305^(x306%(x307<x308)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x309 = 815799947U;
	int16_t x310 = -9;
	volatile int64_t x311 = 12706419LL;
	static uint32_t t39 = 31U;

	t39 = (x309^(x310%(x311<x312)));

	if (t39 != 815799947U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x313 = INT16_MIN;
	static int8_t x314 = -2;
	int8_t x315 = -3;
	volatile uint32_t x316 = UINT32_MAX;

	t40 = (x313^(x314%(x315<x316)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x317 = -924;
	int64_t x319 = -1103393579846630LL;
	int16_t x320 = INT16_MAX;
	volatile uint64_t t41 = 58133276LLU;

	t41 = (x317^(x318%(x319<x320)));

	if (t41 != 18446744073709550692LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x325 = -1;
	int8_t x326 = -1;
	volatile int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MAX;
	int32_t t42 = 21;

	t42 = (x325^(x326%(x327<x328)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x333 = 60U;
	static volatile int32_t x335 = INT32_MIN;
	int32_t x336 = -2779;
	static uint32_t t43 = 194U;

	t43 = (x333^(x334%(x335<x336)));

	if (t43 != 60U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x345 = -1;
	static volatile uint16_t x347 = 1U;
	int32_t x348 = INT32_MAX;
	volatile int32_t t44 = -340801145;

	t44 = (x345^(x346%(x347<x348)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x349 = 2U;
	int16_t x352 = -1;
	volatile int64_t t45 = -5816LL;

	t45 = (x349^(x350%(x351<x352)));

	if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x358 = INT8_MAX;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	uint64_t t46 = UINT64_MAX;

	t46 = (x357^(x358%(x359<x360)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MIN;
	int16_t x383 = -62;
	static int32_t x384 = INT32_MAX;
	uint64_t t47 = UINT64_MAX;

	t47 = (x381^(x382%(x383<x384)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x385 = 604U;
	static volatile uint32_t x388 = 1900000U;
	volatile uint32_t t48 = 12606U;

	t48 = (x385^(x386%(x387<x388)));

	if (t48 != 604U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x392 = INT8_MIN;
	static int64_t t49 = INT64_MIN;

	t49 = (x389^(x390%(x391<x392)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x393 = 159913U;
	uint64_t x394 = 41802416660062LLU;
	int8_t x395 = INT8_MIN;
	volatile uint64_t t50 = 51447748792751LLU;

	t50 = (x393^(x394%(x395<x396)));

	if (t50 != 159913LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x397 = 25357U;
	uint8_t x398 = 9U;
	int8_t x399 = 1;
	int8_t x400 = INT8_MAX;
	uint32_t t51 = 105538735U;

	t51 = (x397^(x398%(x399<x400)));

	if (t51 != 25357U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x401 = 1LL;
	volatile uint8_t x402 = 15U;
	int8_t x403 = -1;
	int64_t t52 = 63545677LL;

	t52 = (x401^(x402%(x403<x404)));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x421 = 0;
	static int64_t x422 = 7430LL;
	static int64_t x423 = INT64_MIN;
	static uint16_t x424 = 0U;
	int64_t t53 = 1LL;

	t53 = (x421^(x422%(x423<x424)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x425 = UINT16_MAX;
	volatile uint32_t x426 = 2933U;
	int64_t x427 = INT64_MIN;
	static volatile uint32_t t54 = 53U;

	t54 = (x425^(x426%(x427<x428)));

	if (t54 != 65535U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x441 = UINT16_MAX;
	int32_t x442 = INT32_MIN;
	volatile uint32_t x443 = 838264U;
	int64_t x444 = INT64_MAX;
	int32_t t55 = -72043343;

	t55 = (x441^(x442%(x443<x444)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x449 = UINT32_MAX;
	volatile int16_t x451 = INT16_MIN;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x449^(x450%(x451<x452)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x457 = 21;
	int16_t x459 = 0;
	int32_t t57 = 1;

	t57 = (x457^(x458%(x459<x460)));

	if (t57 != 21) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x461 = INT64_MIN;
	static uint32_t x462 = UINT32_MAX;
	int64_t x463 = INT64_MIN;

	t58 = (x461^(x462%(x463<x464)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MAX;
	int64_t t59 = 16405297731864LL;

	t59 = (x465^(x466%(x467<x468)));

	if (t59 != -158729210LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x469 = 13U;
	int32_t x470 = -1;
	static int64_t x471 = 19124529249LL;
	uint64_t x472 = 18525964464976LLU;
	int32_t t60 = 20;

	t60 = (x469^(x470%(x471<x472)));

	if (t60 != 13) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x473 = 3U;
	uint32_t x474 = 8739731U;
	uint16_t x475 = 14824U;
	static uint16_t x476 = UINT16_MAX;
	uint32_t t61 = 1609990U;

	t61 = (x473^(x474%(x475<x476)));

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x477 = 30269U;
	volatile int16_t x479 = INT16_MIN;
	uint16_t x480 = 2U;

	t62 = (x477^(x478%(x479<x480)));

	if (t62 != 30269) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x481 = INT32_MIN;
	volatile uint16_t x482 = UINT16_MAX;
	int16_t x483 = -84;
	uint64_t x484 = UINT64_MAX;
	volatile int32_t t63 = INT32_MIN;

	t63 = (x481^(x482%(x483<x484)));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x489 = 0U;
	static int8_t x490 = 1;
	volatile uint32_t x491 = 150628642U;
	int8_t x492 = INT8_MIN;

	t64 = (x489^(x490%(x491<x492)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x501 = INT32_MIN;
	int64_t x503 = INT64_MIN;
	volatile int16_t x504 = INT16_MAX;

	t65 = (x501^(x502%(x503<x504)));

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x505 = INT64_MIN;
	volatile uint8_t x506 = UINT8_MAX;
	int64_t x507 = 382083400334220871LL;
	int64_t x508 = 2399946793589480548LL;
	static int64_t t66 = INT64_MIN;

	t66 = (x505^(x506%(x507<x508)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x509 = UINT8_MAX;
	uint32_t x510 = 1U;
	int8_t x511 = -1;
	int32_t x512 = INT32_MAX;
	volatile uint32_t t67 = 1208851033U;

	t67 = (x509^(x510%(x511<x512)));

	if (t67 != 255U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x529 = 15U;
	uint8_t x530 = 7U;
	int32_t x531 = INT32_MIN;
	static int8_t x532 = INT8_MAX;

	t68 = (x529^(x530%(x531<x532)));

	if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x533 = INT32_MIN;
	int16_t x535 = 5;
	static uint8_t x536 = 107U;
	int32_t t69 = INT32_MIN;

	t69 = (x533^(x534%(x535<x536)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x549 = INT32_MIN;
	static volatile uint32_t x551 = 139220U;
	int16_t x552 = -1;

	t70 = (x549^(x550%(x551<x552)));

	if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x553 = -1;
	static volatile uint8_t x554 = 0U;
	static int16_t x555 = INT16_MIN;
	int32_t t71 = 12219213;

	t71 = (x553^(x554%(x555<x556)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x561 = INT8_MIN;
	volatile int64_t x563 = -1725848417LL;
	int64_t x564 = -1LL;
	volatile int64_t t72 = -3975199LL;

	t72 = (x561^(x562%(x563<x564)));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x565 = -1;
	int16_t x566 = INT16_MIN;
	static uint32_t x567 = 0U;
	int32_t x568 = INT32_MIN;
	int32_t t73 = -7;

	t73 = (x565^(x566%(x567<x568)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x589 = -1;
	volatile int32_t x590 = INT32_MAX;
	int64_t x591 = INT64_MIN;
	uint8_t x592 = 15U;
	int32_t t74 = 334;

	t74 = (x589^(x590%(x591<x592)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x593 = INT64_MIN;
	uint32_t x594 = 41162U;
	volatile uint16_t x595 = 1U;
	int32_t x596 = INT32_MAX;

	t75 = (x593^(x594%(x595<x596)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x613 = 15933U;
	uint32_t x614 = UINT32_MAX;
	uint64_t x615 = 61932LLU;
	uint16_t x616 = UINT16_MAX;
	static volatile uint32_t t76 = 64434U;

	t76 = (x613^(x614%(x615<x616)));

	if (t76 != 15933U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x617 = -1423;
	static int64_t x619 = -7942816142896LL;
	static volatile uint16_t x620 = 78U;
	uint32_t t77 = 228U;

	t77 = (x617^(x618%(x619<x620)));

	if (t77 != 4294965873U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x621 = 1287390488341420LLU;
	int32_t x622 = 9196;
	volatile uint8_t x623 = 3U;
	int64_t x624 = 451471806321174065LL;

	t78 = (x621^(x622%(x623<x624)));

	if (t78 != 1287390488341420LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x625 = UINT64_MAX;
	int32_t x626 = -1;
	uint8_t x628 = UINT8_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = (x625^(x626%(x627<x628)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x629 = INT16_MIN;
	uint16_t x630 = 2467U;
	static uint32_t x631 = 1U;
	static volatile uint64_t x632 = 3LLU;
	int32_t t80 = -196;

	t80 = (x629^(x630%(x631<x632)));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x637 = UINT16_MAX;
	static uint64_t x638 = 5LLU;
	volatile uint64_t t81 = 33038969856675LLU;

	t81 = (x637^(x638%(x639<x640)));

	if (t81 != 65535LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x641 = 4326LL;
	volatile int16_t x642 = INT16_MAX;
	int32_t x643 = INT32_MIN;
	uint8_t x644 = 99U;

	t82 = (x641^(x642%(x643<x644)));

	if (t82 != 4326LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x653 = -1;
	static int8_t x655 = -1;
	int32_t t83 = 20758057;

	t83 = (x653^(x654%(x655<x656)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x662 = -1;
	uint64_t x663 = 2981440770992LLU;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x661^(x662%(x663<x664)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x665 = INT16_MIN;
	int32_t x666 = 223930;
	int16_t x667 = INT16_MIN;

	t85 = (x665^(x666%(x667<x668)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x677 = INT16_MIN;
	static int8_t x678 = INT8_MIN;
	uint64_t x679 = 19271417124912LLU;
	static int16_t x680 = INT16_MIN;
	static volatile int32_t t86 = 6764;

	t86 = (x677^(x678%(x679<x680)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x681 = -5;
	int8_t x682 = INT8_MAX;
	int8_t x684 = 1;
	volatile int32_t t87 = -361253;

	t87 = (x681^(x682%(x683<x684)));

	if (t87 != -5) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x694 = 11U;
	static volatile uint64_t x695 = 232521261204950862LLU;
	uint64_t t88 = 4773648669361350821LLU;

	t88 = (x693^(x694%(x695<x696)));

	if (t88 != 19096248391401LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x705 = INT8_MIN;
	int8_t x706 = -3;
	uint32_t x708 = 1360958U;
	static volatile int32_t t89 = 2;

	t89 = (x705^(x706%(x707<x708)));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x709 = 9;
	int32_t x710 = INT32_MIN;
	static int32_t x711 = -1;
	volatile uint8_t x712 = 2U;
	static int32_t t90 = -351967;

	t90 = (x709^(x710%(x711<x712)));

	if (t90 != 9) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x733 = 14U;
	uint64_t x735 = 6LLU;
	static int8_t x736 = -29;

	t91 = (x733^(x734%(x735<x736)));

	if (t91 != 14) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x741 = UINT64_MAX;
	int64_t x744 = 84332297433305LL;
	uint64_t t92 = UINT64_MAX;

	t92 = (x741^(x742%(x743<x744)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x745 = INT16_MIN;
	uint16_t x746 = 175U;
	int16_t x747 = INT16_MAX;
	static volatile int32_t x748 = 182606;
	volatile int32_t t93 = -10274;

	t93 = (x745^(x746%(x747<x748)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x757 = INT16_MIN;
	int64_t x758 = INT64_MIN;
	static int64_t x759 = INT64_MIN;
	int16_t x760 = -49;
	volatile int64_t t94 = -658766175351263LL;

	t94 = (x757^(x758%(x759<x760)));

	if (t94 != -32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x765 = INT32_MIN;
	int32_t x766 = INT32_MIN;
	uint8_t x768 = UINT8_MAX;
	int32_t t95 = INT32_MIN;

	t95 = (x765^(x766%(x767<x768)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x769 = INT16_MIN;
	static int16_t x771 = INT16_MIN;
	int8_t x772 = INT8_MAX;
	int32_t t96 = -250273;

	t96 = (x769^(x770%(x771<x772)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x781 = INT64_MAX;
	uint16_t x782 = UINT16_MAX;
	uint32_t x783 = 1U;
	uint16_t x784 = 1865U;
	volatile int64_t t97 = INT64_MAX;

	t97 = (x781^(x782%(x783<x784)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x789 = 20092;
	int16_t x791 = INT16_MIN;
	uint16_t x792 = 90U;
	static int64_t t98 = -373045160454303LL;

	t98 = (x789^(x790%(x791<x792)));

	if (t98 != 20092LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x809 = 2468336755LL;
	int64_t x810 = INT64_MIN;
	int32_t x811 = -1;
	int64_t x812 = 15830679365LL;
	volatile int64_t t99 = -113864194385LL;

	t99 = (x809^(x810%(x811<x812)));

	if (t99 != 2468336755LL) { NG(); } else { ; }
	
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

