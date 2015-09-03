#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x20 = -1;
uint8_t x21 = UINT8_MAX;
int32_t x22 = INT32_MIN;
volatile uint32_t x24 = UINT32_MAX;
volatile uint64_t x26 = UINT64_MAX;
static int16_t x34 = 0;
int16_t x41 = INT16_MIN;
uint64_t x43 = UINT64_MAX;
uint32_t x52 = 225U;
static volatile int16_t x59 = -1;
static uint32_t x60 = 4731U;
volatile int32_t t11 = 108139948;
int8_t x89 = -1;
int32_t x94 = INT32_MIN;
int32_t x105 = INT32_MIN;
volatile int8_t x108 = -22;
int8_t x111 = INT8_MAX;
static int16_t x112 = -3094;
int16_t x115 = INT16_MIN;
static uint8_t x119 = 1U;
int8_t x120 = INT8_MIN;
uint8_t x121 = 0U;
int16_t x125 = -1;
uint8_t x134 = 86U;
int32_t x138 = 1;
int16_t x142 = -1;
volatile int32_t x143 = INT32_MIN;
volatile uint32_t x163 = 453U;
uint32_t t26 = 9U;
volatile int8_t x172 = -1;
volatile uint64_t t29 = 648150626249LLU;
volatile uint32_t x181 = UINT32_MAX;
volatile int8_t x182 = 1;
volatile uint32_t t30 = 502693558U;
int64_t x194 = 0LL;
uint32_t x198 = UINT32_MAX;
uint64_t x214 = 1553264830465894806LLU;
uint32_t x220 = UINT32_MAX;
int16_t x222 = INT16_MIN;
static volatile int32_t t35 = 596;
int16_t x230 = INT16_MIN;
static uint64_t t37 = 6732LLU;
volatile uint64_t t38 = 23251192LLU;
uint8_t x243 = UINT8_MAX;
volatile uint32_t t40 = 1090U;
volatile int16_t x249 = 107;
volatile uint32_t x262 = 456723042U;
uint64_t x263 = 37LLU;
volatile uint64_t t44 = 91851376902LLU;
int16_t x273 = -1;
uint32_t x277 = UINT32_MAX;
uint64_t t47 = 87947137243046792LLU;
int32_t x292 = -190;
static int8_t x293 = -1;
volatile int32_t x305 = INT32_MAX;
static volatile int16_t x308 = INT16_MIN;
uint64_t t50 = 3328341382436985740LLU;
int8_t x312 = 1;
uint32_t x319 = 741968U;
uint64_t x332 = 134605649695891835LLU;
int64_t x335 = INT64_MIN;
int32_t x336 = INT32_MAX;
volatile int64_t t55 = -10664LL;
int32_t x342 = INT32_MIN;
int64_t x353 = INT64_MIN;
int16_t x357 = INT16_MIN;
uint64_t x360 = 523471902LLU;
static uint8_t x386 = 27U;
volatile uint64_t t64 = 8338LLU;
uint16_t x390 = 206U;
uint32_t x406 = UINT32_MAX;
uint16_t x414 = UINT16_MAX;
static uint8_t x415 = 1U;
volatile uint64_t t69 = 509479LLU;
uint64_t x423 = 29LLU;
static int32_t x424 = 958679269;
uint32_t x442 = 7464402U;
int8_t x457 = INT8_MAX;
volatile int32_t x459 = INT32_MIN;
int16_t x460 = 8532;
volatile uint16_t x461 = 186U;
uint16_t x479 = UINT16_MAX;
volatile uint64_t t77 = 1124207759LLU;
static int16_t x482 = INT16_MIN;
static uint32_t x484 = UINT32_MAX;
static volatile uint16_t x493 = UINT16_MAX;
uint32_t x509 = 1307262U;
int16_t x514 = 0;
static uint64_t x550 = 747063140049LLU;
int64_t t86 = -697LL;
static uint8_t x558 = 51U;
static int64_t t88 = -103447786507123LL;
int16_t x582 = INT16_MIN;
volatile uint32_t t91 = 55683605U;
int16_t x588 = INT16_MIN;
static uint16_t x591 = 1550U;
int32_t x598 = -2380650;
volatile uint32_t t95 = 26U;
static int8_t x611 = INT8_MIN;


void f0(void) {
	volatile int32_t x5 = INT32_MIN;
	uint32_t x6 = UINT32_MAX;
	int64_t x7 = -1LL;
	int32_t x8 = -1;
	volatile int64_t t0 = 386671413023694LL;

	t0 = (x5*(x6^(x7+x8)));

	if (t0 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = INT32_MAX;
	uint64_t x14 = UINT64_MAX;
	static uint32_t x15 = UINT32_MAX;
	int32_t x16 = INT32_MIN;
	uint64_t t1 = 5929LLU;

	t1 = (x13*(x14^(x15+x16)));

	if (t1 != 13835058057429647360LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -79;
	static int16_t x18 = 1818;
	static uint64_t x19 = 156LLU;
	volatile uint64_t t2 = 5930182496LLU;

	t2 = (x17*(x18^(x19+x20)));

	if (t2 != 18446744073709399857LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x23 = -1LL;
	int64_t t3 = -3253719993930696LL;

	t3 = (x21*(x22^(x23+x24)));

	if (t3 != -547608330750LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 54U;
	uint8_t x27 = 11U;
	int64_t x28 = INT64_MIN;
	uint64_t t4 = 102950LLU;

	t4 = (x25*(x26^(x27+x28)));

	if (t4 != 18446744073709550968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = 3787989;
	static uint64_t x35 = UINT64_MAX;
	int8_t x36 = 1;
	uint64_t t5 = 5LLU;

	t5 = (x33*(x34^(x35+x36)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x37 = 282270728416LLU;
	int32_t x38 = 768639;
	int64_t x39 = INT64_MAX;
	int64_t x40 = -1LL;
	volatile uint64_t t6 = 2691LLU;

	t6 = (x37*(x38^(x39+x40)));

	if (t6 != 18229779783290605792LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = -7407;
	static int16_t x44 = 1263;
	uint64_t t7 = 40303508945681LLU;

	t7 = (x41*(x42^(x43+x44)));

	if (t7 != 201359360LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = UINT16_MAX;
	int32_t x50 = INT32_MIN;
	uint64_t x51 = 2086644538343181578LLU;
	static uint64_t t8 = 0LLU;

	t8 = (x49*(x50^(x51+x52)));

	if (t8 != 15910848712733536789LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = INT8_MAX;
	int8_t x58 = INT8_MIN;
	uint32_t t9 = 2U;

	t9 = (x57*(x58^(x59+x60)));

	if (t9 != 4294381318U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = UINT8_MAX;
	int32_t x66 = -1;
	uint8_t x67 = 70U;
	int16_t x68 = INT16_MAX;
	volatile int32_t t10 = -261586;

	t10 = (x65*(x66^(x67+x68)));

	if (t10 != -8373690) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x77 = -1;
	int8_t x78 = INT8_MIN;
	uint8_t x79 = 4U;
	static int16_t x80 = INT16_MAX;

	t11 = (x77*(x78^(x79+x80)));

	if (t11 != 32893) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x90 = INT8_MAX;
	volatile int16_t x91 = INT16_MIN;
	uint64_t x92 = 26589852LLU;
	uint64_t t12 = 15082665LLU;

	t12 = (x89*(x90^(x91+x92)));

	if (t12 != 18446744073682994461LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x93 = -1LL;
	int64_t x95 = -373219720433760948LL;
	int64_t x96 = 304452898635189893LL;
	int64_t t13 = 182474246LL;

	t13 = (x93*(x94^(x95+x96)));

	if (t13 != -68766820669920209LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x101 = 50976;
	int16_t x102 = -438;
	volatile int16_t x103 = -403;
	int8_t x104 = 2;
	static int32_t t14 = -385496;

	t14 = (x101*(x102^(x103+x104)));

	if (t14 != 1886112) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x106 = INT16_MIN;
	static uint32_t x107 = 400282U;
	uint32_t t15 = 13917466U;

	t15 = (x105*(x106^(x107+x108)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x109 = UINT16_MAX;
	int64_t x110 = -1LL;
	int64_t t16 = -301LL;

	t16 = (x109*(x110^(x111+x112)));

	if (t16 != 194376810LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x113 = 1U;
	static int64_t x114 = -12614LL;
	volatile int16_t x116 = -627;
	int64_t t17 = -42505766486946LL;

	t17 = (x113*(x114^(x115+x116)));

	if (t17 != 45879LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x117 = 806195LLU;
	uint16_t x118 = UINT16_MAX;
	uint64_t t18 = 7LLU;

	t18 = (x117*(x118^(x119+x120)));

	if (t18 != 18446744020976336666LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x122 = INT32_MIN;
	int32_t x123 = -1;
	int64_t x124 = 9LL;
	volatile int64_t t19 = -785585767855782LL;

	t19 = (x121*(x122^(x123+x124)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x126 = INT8_MAX;
	static int8_t x127 = INT8_MIN;
	volatile int32_t x128 = -1;
	volatile int32_t t20 = 1900;

	t20 = (x125*(x126^(x127+x128)));

	if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x133 = INT32_MIN;
	int16_t x135 = -3390;
	uint64_t x136 = 1023539204309LLU;
	uint64_t t21 = 1169126937LLU;

	t21 = (x133*(x134^(x135+x136)));

	if (t21 != 15575591694412808192LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = INT8_MIN;
	static int8_t x139 = -1;
	static int8_t x140 = INT8_MAX;
	volatile int32_t t22 = 2109;

	t22 = (x137*(x138^(x139+x140)));

	if (t22 != -16256) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x141 = -1;
	int16_t x144 = 0;
	volatile int32_t t23 = -32390;

	t23 = (x141*(x142^(x143+x144)));

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x145 = 0;
	int16_t x146 = -6;
	uint64_t x147 = 959737779009690661LLU;
	static int64_t x148 = INT64_MIN;
	static uint64_t t24 = 306051LLU;

	t24 = (x145*(x146^(x147+x148)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x157 = 37;
	volatile int8_t x158 = -1;
	int64_t x159 = -1LL;
	volatile uint8_t x160 = 7U;
	int64_t t25 = -14696LL;

	t25 = (x157*(x158^(x159+x160)));

	if (t25 != -259LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x161 = INT32_MAX;
	int16_t x162 = -1;
	uint16_t x164 = 10966U;

	t26 = (x161*(x162^(x163+x164)));

	if (t26 != 11420U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x165 = INT32_MIN;
	static volatile uint32_t x166 = 3306761U;
	uint8_t x167 = 1U;
	static int32_t x168 = -188;
	uint32_t t27 = 123384669U;

	t27 = (x165*(x166^(x167+x168)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x169 = -1LL;
	static uint64_t x170 = UINT64_MAX;
	static uint64_t x171 = 1006141LLU;
	uint64_t t28 = 405LLU;

	t28 = (x169*(x170^(x171+x172)));

	if (t28 != 1006141LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x173 = 1;
	volatile int16_t x174 = INT16_MIN;
	uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 3745782778146LLU;

	t29 = (x173*(x174^(x175+x176)));

	if (t29 != 18446740323631810849LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x183 = 126U;
	static uint32_t x184 = UINT32_MAX;

	t30 = (x181*(x182^(x183+x184)));

	if (t30 != 4294967172U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x193 = INT64_MIN;
	uint64_t x195 = 229975172640423625LLU;
	int8_t x196 = INT8_MIN;
	static volatile uint64_t t31 = 608700020429LLU;

	t31 = (x193*(x194^(x195+x196)));

	if (t31 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x197 = -3134821794518488LL;
	volatile int8_t x199 = -1;
	int16_t x200 = -3;
	int64_t t32 = 1LL;

	t32 = (x197*(x198^(x199+x200)));

	if (t32 != -9404465383555464LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x213 = 3602331U;
	volatile int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MAX;
	uint64_t t33 = 15049592526895LLU;

	t33 = (x213*(x214^(x215+x216)));

	if (t33 != 12258541076085072019LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x217 = UINT32_MAX;
	static int8_t x218 = 0;
	int16_t x219 = INT16_MIN;
	static uint32_t t34 = 5679U;

	t34 = (x217*(x218^(x219+x220)));

	if (t34 != 32769U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x221 = -2;
	int32_t x223 = 2673977;
	int8_t x224 = INT8_MAX;

	t35 = (x221*(x222^(x223+x224)));

	if (t35 != 5334160) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x225 = 1U;
	volatile int32_t x226 = -1;
	uint16_t x227 = 0U;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t36 = 22;

	t36 = (x225*(x226^(x227+x228)));

	if (t36 != -65536) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x229 = 259535U;
	static uint64_t x231 = 1275198663281737LLU;
	volatile uint32_t x232 = 329936444U;

	t37 = (x229*(x230^(x231+x232)));

	if (t37 != 1082622621163068043LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x233 = -3453109693562LL;
	int32_t x234 = -645229;
	int32_t x235 = 17491673;
	uint64_t x236 = UINT64_MAX;

	t38 = (x233*(x234^(x235+x236)));

	if (t38 != 3327676739997417026LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x237 = 0U;
	uint64_t x238 = UINT64_MAX;
	int32_t x239 = INT32_MIN;
	volatile uint64_t x240 = 168903152152807LLU;
	uint64_t t39 = 2496818720125853LLU;

	t39 = (x237*(x238^(x239+x240)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x241 = UINT32_MAX;
	int8_t x242 = -6;
	int16_t x244 = -1;

	t40 = (x241*(x242^(x243+x244)));

	if (t40 != 252U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x246 = -3360383506LL;
	volatile uint64_t x247 = UINT64_MAX;
	volatile int32_t x248 = -22363;
	static volatile uint64_t t41 = 24941264708LLU;

	t41 = (x245*(x246^(x247+x248)));

	if (t41 != 11230400062318182400LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -4;
	int32_t t42 = -51;

	t42 = (x249*(x250^(x251+x252)));

	if (t42 != -13375) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x261 = 2U;
	int64_t x264 = INT64_MAX;
	uint64_t t43 = 722962LLU;

	t43 = (x261*(x262^(x263+x264)));

	if (t43 != 913446028LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x265 = INT32_MAX;
	volatile uint64_t x266 = 17154616LLU;
	uint8_t x267 = 5U;
	static uint8_t x268 = 1U;

	t44 = (x265*(x266^(x267+x268)));

	if (t44 != 36839270215466434LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x274 = 748856469911LL;
	static int16_t x275 = 1;
	int16_t x276 = 12;
	int64_t t45 = -1LL;

	t45 = (x273*(x274^(x275+x276)));

	if (t45 != -748856469914LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x278 = 1;
	uint16_t x279 = 8276U;
	static volatile int32_t x280 = INT32_MIN;
	uint32_t t46 = 6U;

	t46 = (x277*(x278^(x279+x280)));

	if (t46 != 2147475371U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x281 = INT16_MIN;
	static int16_t x282 = INT16_MIN;
	volatile int16_t x283 = INT16_MIN;
	uint64_t x284 = 7LLU;

	t47 = (x281*(x282^(x283+x284)));

	if (t47 != 18446744073709322240LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x289 = 4174U;
	static int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MAX;
	static volatile uint32_t t48 = 5912U;

	t48 = (x289*(x290^(x291+x292)));

	if (t48 != 135976398U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x294 = -3;
	uint8_t x295 = 14U;
	volatile int32_t x296 = 56108087;
	static int32_t t49 = 14969279;

	t49 = (x293*(x294^(x295+x296)));

	if (t49 != 56108104) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x306 = 7LLU;
	static int32_t x307 = -1;

	t50 = (x305*(x306^(x307+x308)));

	if (t50 != 18446673687785537544LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x309 = 21;
	volatile int16_t x310 = INT16_MIN;
	int8_t x311 = -1;
	volatile int32_t t51 = 14871784;

	t51 = (x309*(x310^(x311+x312)));

	if (t51 != -688128) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x317 = -1;
	volatile uint64_t x318 = 45701LLU;
	uint8_t x320 = 105U;
	uint64_t t52 = 43382173LLU;

	t52 = (x317*(x318^(x319+x320)));

	if (t52 != 18446744073708773316LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x325 = 0;
	volatile uint8_t x326 = UINT8_MAX;
	uint16_t x327 = 2U;
	static uint64_t x328 = UINT64_MAX;
	volatile uint64_t t53 = 7LLU;

	t53 = (x325*(x326^(x327+x328)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x329 = 522151409U;
	static int8_t x330 = INT8_MIN;
	int64_t x331 = 888426079606075LL;
	uint64_t t54 = 754604517364LLU;

	t54 = (x329*(x330^(x331+x332)));

	if (t54 != 6033687757295729110LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x333 = -1LL;
	int32_t x334 = -196166;

	t55 = (x333*(x334^(x335+x336)));

	if (t55 != -9223372034707488325LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x337 = 1645U;
	volatile int8_t x338 = INT8_MIN;
	uint8_t x339 = 4U;
	static volatile uint16_t x340 = UINT16_MAX;
	volatile uint32_t t56 = 394731083U;

	t56 = (x337*(x338^(x339+x340)));

	if (t56 != 4186954951U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x341 = INT64_MIN;
	static uint64_t x343 = 18410945555352LLU;
	int32_t x344 = -1;
	volatile uint64_t t57 = 351267763808241170LLU;

	t57 = (x341*(x342^(x343+x344)));

	if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x345 = 2454;
	static int16_t x346 = INT16_MIN;
	volatile uint64_t x347 = 788117977003LLU;
	volatile uint8_t x348 = 1U;
	uint64_t t58 = 3197418292LLU;

	t58 = (x345*(x346^(x347+x348)));

	if (t58 != 18444810032263932616LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x354 = 106U;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = -1025082765;
	volatile uint64_t t59 = 3553472634846945LLU;

	t59 = (x353*(x354^(x355+x356)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x358 = 0;
	int64_t x359 = INT64_MAX;
	uint64_t t60 = 170175790753226LLU;

	t60 = (x357*(x358^(x359+x360)));

	if (t60 != 18446726920582299648LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	static int16_t x363 = INT16_MIN;
	int16_t x364 = -1;
	volatile int32_t t61 = -19821;

	t61 = (x361*(x362^(x363+x364)));

	if (t61 != -8388480) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x365 = -1LL;
	int64_t x366 = -557925285519180LL;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = -4;
	uint64_t t62 = 1852651636777410260LLU;

	t62 = (x365*(x366^(x367+x368)));

	if (t62 != 18446186148424032433LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x377 = 1748LLU;
	int16_t x378 = 79;
	static int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	static uint64_t t63 = 508148542518264LLU;

	t63 = (x377*(x378^(x379+x380)));

	if (t63 != 18446744073709411776LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x385 = -244;
	uint64_t x387 = 14339775612325383LLU;
	static int32_t x388 = INT32_MIN;

	t64 = (x385*(x386^(x387+x388)));

	if (t64 != 14947839348288163152LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x389 = -1;
	static volatile int32_t x391 = INT32_MIN;
	uint64_t x392 = 273846988280261551LLU;
	uint64_t t65 = 114075072897LLU;

	t65 = (x389*(x390^(x391+x392)));

	if (t65 != 18172897087576773791LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x393 = -1LL;
	static int8_t x394 = INT8_MAX;
	int16_t x395 = INT16_MIN;
	static int8_t x396 = INT8_MIN;
	static volatile int64_t t66 = -22225329LL;

	t66 = (x393*(x394^(x395+x396)));

	if (t66 != 32769LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x405 = -1;
	uint64_t x407 = 13483712LLU;
	int8_t x408 = 0;
	uint64_t t67 = 10491LLU;

	t67 = (x405*(x406^(x407+x408)));

	if (t67 != 18446744069428068033LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x409 = INT8_MIN;
	volatile uint64_t x410 = 49886051075LLU;
	uint8_t x411 = 1U;
	volatile int32_t x412 = INT32_MIN;
	static uint64_t t68 = 206LLU;

	t68 = (x409*(x410^(x411+x412)));

	if (t68 != 6533847088896LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x413 = INT8_MIN;
	volatile uint64_t x416 = UINT64_MAX;

	t69 = (x413*(x414^(x415+x416)));

	if (t69 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x417 = -1;
	int64_t x418 = -1LL;
	volatile int8_t x419 = INT8_MAX;
	int16_t x420 = INT16_MIN;
	int64_t t70 = 54916607LL;

	t70 = (x417*(x418^(x419+x420)));

	if (t70 != -32640LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x421 = UINT32_MAX;
	uint64_t x422 = 58367LLU;
	volatile uint64_t t71 = 15222666077LLU;

	t71 = (x421*(x422^(x423+x424)));

	if (t71 != 4117603961968219395LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x441 = INT32_MIN;
	uint64_t x443 = 37279177216280LLU;
	static volatile int16_t x444 = INT16_MIN;
	volatile uint64_t t72 = 1645724963983040LLU;

	t72 = (x441*(x442^(x443+x444)));

	if (t72 != 2434623974336888832LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x449 = 10U;
	uint32_t x450 = UINT32_MAX;
	int8_t x451 = -1;
	int32_t x452 = -1;
	uint32_t t73 = 146U;

	t73 = (x449*(x450^(x451+x452)));

	if (t73 != 10U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x458 = 1037486012303LL;
	volatile int64_t t74 = -34806971LL;

	t74 = (x457*(x458^(x459+x460)));

	if (t74 != -131969596827995LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x462 = 9U;
	int16_t x463 = -1;
	int64_t x464 = 1970934321624988LL;
	volatile int64_t t75 = 59772LL;

	t75 = (x461*(x462^(x463+x464)));

	if (t75 != 366593783822245908LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x473 = INT32_MIN;
	uint16_t x474 = 3U;
	uint32_t x475 = 32143895U;
	volatile int8_t x476 = INT8_MAX;
	static volatile uint32_t t76 = 1548214332U;

	t76 = (x473*(x474^(x475+x476)));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x477 = 27380U;
	static int64_t x478 = -59LL;
	uint64_t x480 = UINT64_MAX;

	t77 = (x477*(x478^(x479+x480)));

	if (t77 != 18446744071916791356LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x481 = UINT8_MAX;
	uint32_t x483 = UINT32_MAX;
	volatile uint32_t t78 = 411258U;

	t78 = (x481*(x482^(x483+x484)));

	if (t78 != 8355330U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x485 = -1LL;
	int16_t x486 = INT16_MIN;
	volatile int64_t x487 = -854770LL;
	uint64_t x488 = 90311297507LLU;
	volatile uint64_t t79 = 514459LLU;

	t79 = (x485*(x486^(x487+x488)));

	if (t79 != 90310410511LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x494 = -1;
	int16_t x495 = 2541;
	int16_t x496 = 205;
	volatile int32_t t80 = 15919813;

	t80 = (x493*(x494^(x495+x496)));

	if (t80 != -180024645) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x510 = -258;
	int16_t x511 = -1;
	volatile int64_t x512 = -1LL;
	int64_t t81 = 372441046468997787LL;

	t81 = (x509*(x510^(x511+x512)));

	if (t81 != 334659072LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x513 = 518976289U;
	int32_t x515 = -1;
	volatile uint16_t x516 = 99U;
	volatile uint32_t t82 = 1U;

	t82 = (x513*(x514^(x515+x516)));

	if (t82 != 3615036066U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x525 = -2;
	int8_t x526 = INT8_MAX;
	static int8_t x527 = INT8_MIN;
	int32_t x528 = 238774370;
	volatile int32_t t83 = 371;

	t83 = (x525*(x526^(x527+x528)));

	if (t83 != -477548346) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x529 = 2495366176LLU;
	uint32_t x530 = 1U;
	int16_t x531 = INT16_MIN;
	int64_t x532 = -52156130LL;
	volatile uint64_t t84 = 654122239684LLU;

	t84 = (x529*(x530^(x531+x532)));

	if (t84 != 18316513665373003744LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x549 = -568LL;
	int8_t x551 = INT8_MIN;
	static int64_t x552 = -1LL;
	uint64_t t85 = 293691902710LLU;

	t85 = (x549*(x550^(x551+x552)));

	if (t85 != 424331863475696LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x553 = 4952U;
	uint32_t x554 = 393387059U;
	int8_t x555 = INT8_MAX;
	int64_t x556 = -1LL;

	t86 = (x553*(x554^(x555+x556)));

	if (t86 != 1948052844920LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x557 = 1410LL;
	static uint8_t x559 = UINT8_MAX;
	int16_t x560 = INT16_MIN;
	volatile int64_t t87 = -11890LL;

	t87 = (x557*(x558^(x559+x560)));

	if (t87 != -45915240LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x561 = -1002324;
	int8_t x562 = 60;
	uint16_t x563 = UINT16_MAX;
	int64_t x564 = -1LL;

	t88 = (x561*(x562^(x563+x564)));

	if (t88 != -65626161576LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x569 = INT8_MIN;
	int16_t x570 = 511;
	static int64_t x571 = -1LL;
	int32_t x572 = INT32_MIN;
	int64_t t89 = 147743205964531LL;

	t89 = (x569*(x570^(x571+x572)));

	if (t89 != 274877972480LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x577 = 382387398U;
	int32_t x578 = 57668;
	volatile int32_t x579 = INT32_MAX;
	int8_t x580 = -1;
	volatile uint32_t t90 = 71142U;

	t90 = (x577*(x578^(x579+x580)));

	if (t90 != 2375822300U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x581 = UINT8_MAX;
	static int16_t x583 = -134;
	uint32_t x584 = 57581U;

	t91 = (x581*(x582^(x583+x584)));

	if (t91 != 4284548761U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x585 = 46428669U;
	uint16_t x586 = 12U;
	volatile uint8_t x587 = 31U;
	static uint32_t t92 = 1904760U;

	t92 = (x585*(x586^(x587+x588)));

	if (t92 != 4220908999U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x589 = 118346737935291LLU;
	uint32_t x590 = 10252U;
	volatile int8_t x592 = 1;
	uint64_t t93 = 749094LLU;

	t93 = (x589*(x590^(x591+x592)));

	if (t93 != 1394006226139792689LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x593 = INT32_MIN;
	int64_t x594 = 7LL;
	uint8_t x595 = UINT8_MAX;
	uint16_t x596 = 19941U;
	int64_t t94 = -107966917243LL;

	t94 = (x593*(x594^(x595+x596)));

	if (t94 != -43368432271360LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x597 = -190524069;
	int8_t x599 = -1;
	uint32_t x600 = 15807U;

	t95 = (x597*(x598^(x599+x600)));

	if (t95 != 3228754232U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x609 = -32151133LL;
	static int64_t x610 = INT64_MIN;
	uint64_t x612 = UINT64_MAX;
	uint64_t t96 = 12LLU;

	t96 = (x609*(x610^(x611+x612)));

	if (t96 != 9223372041002271965LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x613 = 63755;
	int16_t x614 = -1;
	volatile int16_t x615 = INT16_MIN;
	static uint8_t x616 = 8U;
	volatile int32_t t97 = 18;

	t97 = (x613*(x614^(x615+x616)));

	if (t97 != 2088550045) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x637 = 41;
	int32_t x638 = -1;
	volatile int64_t x639 = INT64_MAX;
	volatile int64_t x640 = INT64_MIN;
	int64_t t98 = -4LL;

	t98 = (x637*(x638^(x639+x640)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x653 = -1LL;
	int16_t x654 = INT16_MAX;
	uint64_t x655 = 350159LLU;
	uint16_t x656 = UINT16_MAX;
	uint64_t t99 = 50LLU;

	t99 = (x653*(x654^(x655+x656)));

	if (t99 != 18446744073709148111LLU) { NG(); } else { ; }
	
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

