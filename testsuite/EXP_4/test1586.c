#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x8 = 2U;
int32_t t1 = 2402;
uint8_t x18 = UINT8_MAX;
int64_t t3 = -14017361LL;
int32_t x46 = 849520707;
static uint16_t x47 = 1212U;
int32_t x52 = -1;
uint8_t x78 = UINT8_MAX;
int8_t x92 = -1;
volatile uint64_t t10 = 271302461977LLU;
volatile int8_t x97 = INT8_MIN;
int32_t x105 = 44607754;
static int64_t x106 = INT64_MAX;
int32_t t13 = 224;
uint32_t x131 = 1020407843U;
volatile uint64_t x132 = UINT64_MAX;
int64_t x136 = -1LL;
volatile int64_t x149 = INT64_MAX;
static volatile uint16_t x152 = UINT16_MAX;
volatile uint64_t t18 = 1724904711LLU;
uint32_t x161 = 491512U;
int32_t x163 = INT32_MIN;
int16_t x164 = INT16_MIN;
uint8_t x183 = 1U;
static int16_t x204 = INT16_MAX;
volatile uint8_t x214 = 51U;
int16_t x220 = INT16_MIN;
static int32_t t26 = 8251;
volatile int8_t x258 = INT8_MIN;
static int64_t x277 = INT64_MIN;
int8_t x286 = INT8_MAX;
volatile int16_t x288 = INT16_MIN;
uint64_t x298 = UINT64_MAX;
uint64_t t36 = 11569283876LLU;
int8_t x305 = INT8_MIN;
int64_t x307 = INT64_MIN;
int32_t t40 = 0;
uint32_t x350 = 231U;
static int64_t x362 = INT64_MIN;
static int64_t t44 = 11LL;
int64_t x395 = INT64_MIN;
uint64_t x398 = 22163325599154743LLU;
uint64_t x400 = 20154807811LLU;
static int16_t x411 = INT16_MAX;
volatile uint32_t x438 = UINT32_MAX;
uint16_t x446 = 4764U;
int16_t x463 = INT16_MAX;
static uint32_t x474 = 153U;
static volatile int64_t x487 = -1LL;
uint32_t x489 = UINT32_MAX;
int64_t x506 = INT64_MIN;
int32_t x508 = 947548;
int16_t x514 = -362;
static uint32_t x524 = 576611U;
uint16_t x543 = 11364U;
static volatile uint32_t t64 = 46U;
static int8_t x557 = INT8_MIN;
int64_t x590 = -1LL;
int64_t x592 = INT64_MAX;
int16_t x599 = INT16_MAX;
int64_t t69 = 44510352078LL;
static volatile int64_t x602 = -1LL;
uint8_t x622 = 0U;
volatile int16_t x626 = -5;
uint8_t x628 = 0U;
uint8_t x637 = UINT8_MAX;
uint64_t x642 = 9316LLU;
int32_t x649 = INT32_MAX;
int32_t t77 = INT32_MAX;
int16_t x660 = INT16_MAX;
static int8_t x685 = -6;
uint8_t x692 = 5U;
volatile uint64_t t81 = 379957965377698720LLU;
int16_t x698 = -3580;
int64_t x700 = 16416522LL;
static volatile int64_t t82 = 10LL;
int32_t t83 = 56310869;
volatile uint16_t x735 = UINT16_MAX;
int8_t x737 = -8;
uint16_t x738 = 24049U;
static int8_t x744 = INT8_MIN;
volatile uint64_t x750 = 5585634560695216LLU;
int8_t x763 = INT8_MIN;
volatile int16_t x771 = INT16_MIN;
int64_t t91 = 8793383334LL;
volatile int32_t x785 = INT32_MIN;
uint64_t t93 = 5805LLU;
static int32_t x802 = INT32_MAX;
int64_t x810 = 92LL;
static volatile int8_t x811 = INT8_MAX;
volatile int16_t x817 = -1;
volatile int64_t x818 = -1LL;
uint16_t x819 = 1U;
static volatile int32_t t98 = -3469937;
volatile int8_t x859 = INT8_MIN;


void f0(void) {
	uint32_t x5 = 11702U;
	static int32_t x6 = INT32_MIN;
	volatile int16_t x7 = -238;
	volatile uint32_t t0 = 763U;

	t0 = (x5^(x6%(x7<=x8)));

	if (t0 != 11702U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x9 = UINT16_MAX;
	volatile int16_t x10 = -1;
	int32_t x11 = INT32_MIN;
	volatile int8_t x12 = INT8_MAX;

	t1 = (x9^(x10%(x11<=x12)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	volatile uint32_t x19 = 1U;
	static uint32_t x20 = 27915U;
	volatile int32_t t2 = -11249;

	t2 = (x17^(x18%(x19<=x20)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x41 = -14;
	int64_t x42 = INT64_MAX;
	int64_t x43 = -80382402616LL;
	uint16_t x44 = 1U;

	t3 = (x41^(x42%(x43<=x44)));

	if (t3 != -14LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x48 = 235693023590LL;
	uint64_t t4 = UINT64_MAX;

	t4 = (x45^(x46%(x47<=x48)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x49 = -196504587868354LL;
	int64_t x50 = INT64_MAX;
	volatile int32_t x51 = INT32_MIN;
	static volatile int64_t t5 = 524LL;

	t5 = (x49^(x50%(x51<=x52)));

	if (t5 != -196504587868354LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x57 = UINT16_MAX;
	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	int64_t t6 = 1725496497647391965LL;

	t6 = (x57^(x58%(x59<=x60)));

	if (t6 != 65535LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x65 = INT8_MAX;
	static int16_t x66 = -1;
	volatile int32_t x67 = -1;
	static int8_t x68 = 1;
	static volatile int32_t t7 = -3;

	t7 = (x65^(x66%(x67<=x68)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x77 = 364LL;
	int8_t x79 = -1;
	int32_t x80 = INT32_MAX;
	int64_t t8 = -10948763768521LL;

	t8 = (x77^(x78%(x79<=x80)));

	if (t8 != 364LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x89 = UINT16_MAX;
	static volatile int8_t x90 = -4;
	int64_t x91 = -1LL;
	int32_t t9 = 426;

	t9 = (x89^(x90%(x91<=x92)));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x93 = 0;
	uint64_t x94 = 501272LLU;
	int64_t x95 = -13LL;
	uint8_t x96 = 5U;

	t10 = (x93^(x94%(x95<=x96)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x98 = 116139530921LLU;
	uint32_t x99 = 3182U;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t11 = 18436120156129775LLU;

	t11 = (x97^(x98%(x99<=x100)));

	if (t11 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x107 = UINT8_MAX;
	uint64_t x108 = UINT64_MAX;
	int64_t t12 = 267840152066798LL;

	t12 = (x105^(x106%(x107<=x108)));

	if (t12 != 44607754LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x113 = INT16_MIN;
	volatile int32_t x114 = INT32_MIN;
	static int16_t x115 = INT16_MAX;
	static int32_t x116 = 48599951;

	t13 = (x113^(x114%(x115<=x116)));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x117 = 472U;
	int64_t x118 = -1LL;
	static volatile uint32_t x119 = UINT32_MAX;
	static int16_t x120 = -1;
	static int64_t t14 = -2617LL;

	t14 = (x117^(x118%(x119<=x120)));

	if (t14 != 472LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x129 = UINT16_MAX;
	volatile uint32_t x130 = UINT32_MAX;
	volatile uint32_t t15 = 124U;

	t15 = (x129^(x130%(x131<=x132)));

	if (t15 != 65535U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x133 = 4U;
	int32_t x134 = INT32_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	int32_t t16 = -15166;

	t16 = (x133^(x134%(x135<=x136)));

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x145 = INT64_MAX;
	volatile int8_t x146 = -4;
	int32_t x147 = INT32_MAX;
	uint32_t x148 = UINT32_MAX;
	int64_t t17 = INT64_MAX;

	t17 = (x145^(x146%(x147<=x148)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x150 = 53116307LLU;
	static int8_t x151 = 1;

	t18 = (x149^(x150%(x151<=x152)));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x162 = UINT16_MAX;
	static uint32_t t19 = 1969U;

	t19 = (x161^(x162%(x163<=x164)));

	if (t19 != 491512U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x169 = INT16_MIN;
	static int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	int8_t x172 = 1;
	volatile int64_t t20 = 2261648LL;

	t20 = (x169^(x170%(x171<=x172)));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x181 = 176U;
	static int64_t x182 = -142649355506474LL;
	volatile uint32_t x184 = UINT32_MAX;
	static int64_t t21 = -40398414215085519LL;

	t21 = (x181^(x182%(x183<=x184)));

	if (t21 != 176LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x201 = INT8_MIN;
	volatile uint32_t x202 = UINT32_MAX;
	int16_t x203 = INT16_MIN;
	volatile uint32_t t22 = 1784752U;

	t22 = (x201^(x202%(x203<=x204)));

	if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x213 = INT16_MAX;
	static int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t23 = -7;

	t23 = (x213^(x214%(x215<=x216)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x217 = 15;
	volatile int64_t x218 = 1135026451702044LL;
	int32_t x219 = INT32_MIN;
	static volatile int64_t t24 = 3363081960318554118LL;

	t24 = (x217^(x218%(x219<=x220)));

	if (t24 != 15LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x221 = INT16_MAX;
	int32_t x222 = -107;
	uint8_t x223 = 17U;
	volatile uint8_t x224 = 29U;
	static volatile int32_t t25 = -364502777;

	t25 = (x221^(x222%(x223<=x224)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x229 = 1;
	int8_t x230 = INT8_MAX;
	int64_t x231 = -91569LL;
	uint16_t x232 = 12U;

	t26 = (x229^(x230%(x231<=x232)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x233 = 93;
	int32_t x234 = INT32_MIN;
	static int32_t x235 = INT32_MIN;
	int64_t x236 = -1LL;
	int32_t t27 = -14395;

	t27 = (x233^(x234%(x235<=x236)));

	if (t27 != 93) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 451037852550LLU;
	uint64_t x244 = UINT64_MAX;
	int32_t t28 = 166829657;

	t28 = (x241^(x242%(x243<=x244)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x249 = 30652475418411972LLU;
	int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MIN;
	volatile int8_t x252 = -63;
	static volatile uint64_t t29 = 500331333424LLU;

	t29 = (x249^(x250%(x251<=x252)));

	if (t29 != 30652475418411972LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x257 = -1;
	uint8_t x259 = 58U;
	static int32_t x260 = 1834;
	volatile int32_t t30 = 190;

	t30 = (x257^(x258%(x259<=x260)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = UINT8_MAX;
	int64_t t31 = INT64_MIN;

	t31 = (x277^(x278%(x279<=x280)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x281 = -1;
	int64_t x282 = INT64_MIN;
	volatile uint32_t x283 = 30019819U;
	int32_t x284 = INT32_MIN;
	volatile int64_t t32 = -3106865860506940656LL;

	t32 = (x281^(x282%(x283<=x284)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x285 = -13;
	int64_t x287 = INT64_MIN;
	int32_t t33 = 0;

	t33 = (x285^(x286%(x287<=x288)));

	if (t33 != -13) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x293 = 1U;
	int64_t x294 = INT64_MIN;
	int32_t x295 = -35895806;
	int32_t x296 = INT32_MAX;
	volatile int64_t t34 = 2753475628384850LL;

	t34 = (x293^(x294%(x295<=x296)));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x297 = INT16_MIN;
	static int16_t x299 = INT16_MIN;
	static int32_t x300 = -1;
	uint64_t t35 = 353378118995875408LLU;

	t35 = (x297^(x298%(x299<=x300)));

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x301 = 2;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = 110245;
	int32_t x304 = 236795674;

	t36 = (x301^(x302%(x303<=x304)));

	if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x306 = -1;
	uint64_t x308 = UINT64_MAX;
	static volatile int32_t t37 = 1092288;

	t37 = (x305^(x306%(x307<=x308)));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x329 = -13;
	uint8_t x330 = 25U;
	volatile int16_t x331 = -8;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t38 = 2217;

	t38 = (x329^(x330%(x331<=x332)));

	if (t38 != -13) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = -2;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t39 = -6476650;

	t39 = (x333^(x334%(x335<=x336)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x337 = -10656;
	int8_t x338 = INT8_MIN;
	static uint16_t x339 = 20U;
	int16_t x340 = INT16_MAX;

	t40 = (x337^(x338%(x339<=x340)));

	if (t40 != -10656) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x341 = -20;
	int64_t x342 = -4902LL;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile int64_t t41 = -30229045867LL;

	t41 = (x341^(x342%(x343<=x344)));

	if (t41 != -20LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = -665759743343382LL;
	static uint32_t x348 = UINT32_MAX;
	static int32_t t42 = INT32_MIN;

	t42 = (x345^(x346%(x347<=x348)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x349 = 31LLU;
	int16_t x351 = -1;
	static uint16_t x352 = 1921U;
	volatile uint64_t t43 = 260966433LLU;

	t43 = (x349^(x350%(x351<=x352)));

	if (t43 != 31LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x361 = INT16_MIN;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;

	t44 = (x361^(x362%(x363<=x364)));

	if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x393 = UINT64_MAX;
	volatile uint64_t x394 = 7687621464LLU;
	int8_t x396 = 0;
	uint64_t t45 = UINT64_MAX;

	t45 = (x393^(x394%(x395<=x396)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x397 = -3794;
	uint16_t x399 = 1U;
	uint64_t t46 = 246565852532062216LLU;

	t46 = (x397^(x398%(x399<=x400)));

	if (t46 != 18446744073709547822LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x405 = -1;
	volatile int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	uint8_t x408 = UINT8_MAX;
	static int32_t t47 = 28810;

	t47 = (x405^(x406%(x407<=x408)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x409 = UINT32_MAX;
	uint8_t x410 = 116U;
	static uint32_t x412 = 1165058U;
	uint32_t t48 = UINT32_MAX;

	t48 = (x409^(x410%(x411<=x412)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x425 = 8938U;
	uint8_t x426 = 86U;
	int32_t x427 = -1;
	uint16_t x428 = 808U;
	volatile uint32_t t49 = 28525U;

	t49 = (x425^(x426%(x427<=x428)));

	if (t49 != 8938U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x437 = 28U;
	uint8_t x439 = 7U;
	int16_t x440 = 6609;
	static volatile uint32_t t50 = 11236322U;

	t50 = (x437^(x438%(x439<=x440)));

	if (t50 != 28U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x445 = 5403394U;
	int8_t x447 = INT8_MIN;
	volatile int16_t x448 = -1;
	volatile uint32_t t51 = 9753871U;

	t51 = (x445^(x446%(x447<=x448)));

	if (t51 != 5403394U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x449 = INT8_MIN;
	int32_t x450 = 1;
	int32_t x451 = -1;
	uint8_t x452 = 15U;
	int32_t t52 = 36379083;

	t52 = (x449^(x450%(x451<=x452)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x461 = -4;
	static volatile int64_t x462 = -1LL;
	uint32_t x464 = 3536775U;
	volatile int64_t t53 = -1141534209549842430LL;

	t53 = (x461^(x462%(x463<=x464)));

	if (t53 != -4LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x473 = INT16_MIN;
	static volatile int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MAX;
	uint32_t t54 = 813U;

	t54 = (x473^(x474%(x475<=x476)));

	if (t54 != 4294934528U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x485 = UINT64_MAX;
	uint8_t x486 = 52U;
	volatile uint8_t x488 = 15U;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x485^(x486%(x487<=x488)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x490 = UINT32_MAX;
	int8_t x491 = INT8_MIN;
	volatile uint8_t x492 = 54U;
	uint32_t t56 = UINT32_MAX;

	t56 = (x489^(x490%(x491<=x492)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x493 = UINT64_MAX;
	static uint64_t x494 = 15996LLU;
	static volatile int32_t x495 = -1;
	uint8_t x496 = 27U;
	uint64_t t57 = UINT64_MAX;

	t57 = (x493^(x494%(x495<=x496)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x497 = INT64_MIN;
	volatile uint32_t x498 = 20U;
	int8_t x499 = INT8_MIN;
	int32_t x500 = INT32_MAX;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x497^(x498%(x499<=x500)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x505 = -1LL;
	uint16_t x507 = 828U;
	volatile int64_t t59 = 4228124165LL;

	t59 = (x505^(x506%(x507<=x508)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x509 = INT64_MIN;
	static int64_t x510 = INT64_MAX;
	int64_t x511 = -1LL;
	int64_t x512 = 1LL;
	volatile int64_t t60 = INT64_MIN;

	t60 = (x509^(x510%(x511<=x512)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x513 = 2697U;
	int32_t x515 = -1;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t61 = 0;

	t61 = (x513^(x514%(x515<=x516)));

	if (t61 != 2697) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x521 = 106107LL;
	int16_t x522 = INT16_MIN;
	volatile uint16_t x523 = UINT16_MAX;
	volatile int64_t t62 = 9647587LL;

	t62 = (x521^(x522%(x523<=x524)));

	if (t62 != 106107LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x533 = 0U;
	volatile uint8_t x534 = 41U;
	static int8_t x535 = -3;
	int16_t x536 = -1;
	int32_t t63 = -17074705;

	t63 = (x533^(x534%(x535<=x536)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x541 = 700U;
	int32_t x542 = 184254;
	uint64_t x544 = 8412402273LLU;

	t64 = (x541^(x542%(x543<=x544)));

	if (t64 != 700U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x558 = INT8_MAX;
	volatile uint8_t x559 = 16U;
	uint16_t x560 = 5855U;
	volatile int32_t t65 = 1476041;

	t65 = (x557^(x558%(x559<=x560)));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x573 = -1;
	int32_t x574 = INT32_MIN;
	int8_t x575 = INT8_MIN;
	int32_t x576 = INT32_MAX;
	int32_t t66 = 7;

	t66 = (x573^(x574%(x575<=x576)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x589 = UINT64_MAX;
	volatile int8_t x591 = INT8_MIN;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = (x589^(x590%(x591<=x592)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x593 = 0;
	int32_t x594 = -4654;
	int32_t x595 = INT32_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t68 = 28;

	t68 = (x593^(x594%(x595<=x596)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x597 = UINT8_MAX;
	int64_t x598 = 18746841999137LL;
	int32_t x600 = 968478704;

	t69 = (x597^(x598%(x599<=x600)));

	if (t69 != 255LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x601 = UINT8_MAX;
	volatile int8_t x603 = INT8_MIN;
	int32_t x604 = 102277;
	int64_t t70 = 34299463887106LL;

	t70 = (x601^(x602%(x603<=x604)));

	if (t70 != 255LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x605 = -1;
	static volatile int16_t x606 = -14819;
	static uint64_t x607 = 9844514620128LLU;
	uint64_t x608 = UINT64_MAX;
	static volatile int32_t t71 = -557;

	t71 = (x605^(x606%(x607<=x608)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x621 = 5925997598LLU;
	volatile uint8_t x623 = UINT8_MAX;
	static int32_t x624 = 531068265;
	static volatile uint64_t t72 = 33698058179876LLU;

	t72 = (x621^(x622%(x623<=x624)));

	if (t72 != 5925997598LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x625 = -13;
	int8_t x627 = -1;
	volatile int32_t t73 = -3;

	t73 = (x625^(x626%(x627<=x628)));

	if (t73 != -13) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x629 = -26317847171128799LL;
	static volatile int32_t x630 = -1;
	int64_t x631 = INT64_MIN;
	uint32_t x632 = 14194U;
	int64_t t74 = -3LL;

	t74 = (x629^(x630%(x631<=x632)));

	if (t74 != -26317847171128799LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x638 = 221U;
	volatile uint64_t x639 = 18259LLU;
	int16_t x640 = -1;
	static int32_t t75 = 87;

	t75 = (x637^(x638%(x639<=x640)));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x641 = -1;
	int64_t x643 = INT64_MIN;
	uint16_t x644 = 891U;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x641^(x642%(x643<=x644)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x650 = -1;
	uint32_t x651 = 23U;
	static int32_t x652 = 24;

	t77 = (x649^(x650%(x651<=x652)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x657 = 243U;
	static uint8_t x658 = UINT8_MAX;
	int32_t x659 = INT32_MIN;
	int32_t t78 = -2476301;

	t78 = (x657^(x658%(x659<=x660)));

	if (t78 != 243) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x677 = INT64_MIN;
	uint64_t x678 = UINT64_MAX;
	volatile int8_t x679 = INT8_MIN;
	volatile uint16_t x680 = 1U;
	uint64_t t79 = 0LLU;

	t79 = (x677^(x678%(x679<=x680)));

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x686 = INT32_MIN;
	int16_t x687 = INT16_MIN;
	uint16_t x688 = UINT16_MAX;
	int32_t t80 = -31101;

	t80 = (x685^(x686%(x687<=x688)));

	if (t80 != -6) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x689 = 4043LLU;
	int32_t x690 = INT32_MIN;
	int16_t x691 = -417;

	t81 = (x689^(x690%(x691<=x692)));

	if (t81 != 4043LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x697 = -339315664386599119LL;
	uint16_t x699 = UINT16_MAX;

	t82 = (x697^(x698%(x699<=x700)));

	if (t82 != -339315664386599119LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x701 = -1;
	static int32_t x702 = INT32_MAX;
	static int8_t x703 = 2;
	uint64_t x704 = 14LLU;

	t83 = (x701^(x702%(x703<=x704)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x713 = INT32_MIN;
	uint32_t x714 = UINT32_MAX;
	int8_t x715 = -1;
	static volatile int8_t x716 = -1;
	volatile uint32_t t84 = 860986U;

	t84 = (x713^(x714%(x715<=x716)));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x733 = -1;
	volatile uint16_t x734 = 4U;
	int32_t x736 = 76467;
	int32_t t85 = 43491611;

	t85 = (x733^(x734%(x735<=x736)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x739 = INT32_MIN;
	int64_t x740 = 7944862LL;
	int32_t t86 = 1051;

	t86 = (x737^(x738%(x739<=x740)));

	if (t86 != -8) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x741 = INT16_MIN;
	int16_t x742 = -61;
	int64_t x743 = -12486995855254465LL;
	int32_t t87 = -1655574;

	t87 = (x741^(x742%(x743<=x744)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x745 = 1U;
	volatile int16_t x746 = -1;
	static int16_t x747 = 214;
	int64_t x748 = 15842162LL;
	volatile int32_t t88 = 86627;

	t88 = (x745^(x746%(x747<=x748)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x749 = -3289;
	int8_t x751 = INT8_MIN;
	int16_t x752 = -1;
	static uint64_t t89 = 2796727LLU;

	t89 = (x749^(x750%(x751<=x752)));

	if (t89 != 18446744073709548327LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x761 = 7U;
	static uint16_t x762 = 3451U;
	int8_t x764 = INT8_MIN;
	volatile int32_t t90 = 1;

	t90 = (x761^(x762%(x763<=x764)));

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x769 = -1;
	int64_t x770 = INT64_MAX;
	volatile int64_t x772 = 18415054331775280LL;

	t91 = (x769^(x770%(x771<=x772)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x773 = -1;
	uint16_t x774 = 31U;
	int32_t x775 = 329;
	int64_t x776 = INT64_MAX;
	int32_t t92 = 1;

	t92 = (x773^(x774%(x775<=x776)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x786 = UINT64_MAX;
	static uint8_t x787 = 22U;
	volatile uint32_t x788 = 2199379U;

	t93 = (x785^(x786%(x787<=x788)));

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x801 = -1LL;
	int16_t x803 = -578;
	uint8_t x804 = UINT8_MAX;
	static int64_t t94 = -12617637716436LL;

	t94 = (x801^(x802%(x803<=x804)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x809 = 256U;
	int32_t x812 = INT32_MAX;
	volatile int64_t t95 = -356LL;

	t95 = (x809^(x810%(x811<=x812)));

	if (t95 != 256LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x820 = INT8_MAX;
	int64_t t96 = 1LL;

	t96 = (x817^(x818%(x819<=x820)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x841 = -166LL;
	int16_t x842 = INT16_MAX;
	static int16_t x843 = INT16_MIN;
	volatile int16_t x844 = -2173;
	volatile int64_t t97 = 485212732982LL;

	t97 = (x841^(x842%(x843<=x844)));

	if (t97 != -166LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x845 = -519;
	uint16_t x846 = 1964U;
	int64_t x847 = 470215LL;
	static volatile uint64_t x848 = 672296LLU;

	t98 = (x845^(x846%(x847<=x848)));

	if (t98 != -519) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x857 = 225667627308440448LL;
	uint32_t x858 = 135131038U;
	uint8_t x860 = 17U;
	int64_t t99 = 209014103621709LL;

	t99 = (x857^(x858%(x859<=x860)));

	if (t99 != 225667627308440448LL) { NG(); } else { ; }
	
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

