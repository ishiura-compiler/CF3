#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x15 = INT32_MAX;
static volatile int8_t x16 = 1;
int8_t x19 = -2;
volatile int32_t t1 = -125;
static volatile uint32_t t2 = 12U;
int8_t x53 = -19;
uint64_t t5 = 4695LLU;
int32_t t6 = -11662;
volatile int32_t x73 = INT32_MIN;
uint32_t x82 = 24442U;
int64_t x93 = INT64_MIN;
int16_t x98 = INT16_MAX;
uint32_t x103 = 85U;
int8_t x104 = INT8_MIN;
uint64_t t15 = 91378209LLU;
uint64_t x118 = 169482LLU;
volatile int32_t x123 = INT32_MIN;
static int64_t x125 = -1LL;
static volatile int64_t t18 = 6467LL;
int8_t x130 = INT8_MAX;
uint64_t x133 = 184066692005274LLU;
static volatile uint8_t x143 = 46U;
static uint8_t x144 = 6U;
static uint64_t x146 = 63318717066148772LLU;
uint8_t x149 = 86U;
static uint16_t x175 = 1165U;
uint8_t x178 = 61U;
static volatile uint64_t x182 = 1459542LLU;
int8_t x193 = INT8_MAX;
int16_t x197 = INT16_MIN;
static uint8_t x203 = 1U;
static volatile int64_t t30 = -57509759305279396LL;
uint16_t x210 = UINT16_MAX;
static int16_t x211 = INT16_MIN;
volatile int64_t x216 = INT64_MAX;
int16_t x220 = -1;
volatile int32_t x228 = 1;
int32_t x230 = 66418;
volatile int32_t x249 = INT32_MIN;
static int32_t x250 = INT32_MAX;
static int16_t x251 = INT16_MIN;
static volatile uint64_t x270 = UINT64_MAX;
static uint16_t x282 = 3U;
static int32_t x284 = INT32_MAX;
volatile int64_t x303 = INT64_MIN;
volatile uint64_t t43 = 349414LLU;
static volatile int32_t x314 = 10;
uint8_t x322 = 31U;
static int8_t x324 = -4;
volatile int8_t x337 = -1;
uint32_t x339 = UINT32_MAX;
int64_t x350 = 4263274LL;
static volatile int32_t x357 = -14477783;
uint16_t x358 = UINT16_MAX;
static volatile uint16_t x359 = UINT16_MAX;
volatile uint16_t x374 = 13U;
int8_t x376 = INT8_MIN;
static uint16_t x377 = UINT16_MAX;
static uint64_t x395 = 5701LLU;
static uint16_t x396 = 315U;
volatile int8_t x422 = 13;
volatile int32_t t57 = -59054;
volatile uint64_t x431 = UINT64_MAX;
int8_t x433 = INT8_MIN;
uint16_t x434 = UINT16_MAX;
int32_t x435 = 3;
static uint64_t x436 = 1338228203339LLU;
uint32_t x437 = UINT32_MAX;
int32_t x439 = INT32_MIN;
volatile uint32_t t60 = UINT32_MAX;
uint16_t x444 = 450U;
static volatile int32_t t61 = 2087911;
volatile uint64_t t63 = 4846894LLU;
uint16_t x453 = 1979U;
uint16_t x455 = 4879U;
uint16_t x463 = UINT16_MAX;
int64_t x495 = INT64_MIN;
static volatile int32_t t69 = -1;
volatile uint64_t t70 = 18723402115587LLU;
uint64_t x508 = 2043161394LLU;
uint32_t x509 = 54U;
uint32_t t72 = 5U;
static volatile uint8_t x527 = 2U;
int16_t x528 = 0;
int64_t x546 = INT64_MAX;
uint64_t x566 = 54015LLU;
volatile int64_t x595 = -80897LL;
volatile int32_t t84 = -40436560;
volatile int32_t x605 = INT32_MIN;
int8_t x612 = INT8_MIN;
int32_t x613 = INT32_MAX;
static int16_t x616 = INT16_MIN;
static int32_t t88 = INT32_MAX;
int16_t x641 = -1;
int64_t x646 = 232909564801787LL;
int64_t t92 = 2160187979562117700LL;
uint8_t x658 = UINT8_MAX;
int64_t x661 = -517705976829729468LL;
volatile int8_t x665 = -3;
int64_t x678 = INT64_MAX;
static int32_t x681 = -98;


void f0(void) {
	uint8_t x13 = UINT8_MAX;
	int16_t x14 = 1;
	static int32_t t0 = -12886273;

	t0 = (x13^(x14>>(x15<=x16)));

	if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = 0;
	uint16_t x18 = UINT16_MAX;
	int32_t x20 = 303;

	t1 = (x17^(x18>>(x19<=x20)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x25 = 5U;
	uint32_t x26 = UINT32_MAX;
	volatile int16_t x27 = -1;
	static int64_t x28 = INT64_MIN;

	t2 = (x25^(x26>>(x27<=x28)));

	if (t2 != 4294967290U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = INT32_MAX;
	int64_t x34 = INT64_MAX;
	int64_t x35 = INT64_MIN;
	int32_t x36 = -1;
	int64_t t3 = -2741415LL;

	t3 = (x33^(x34>>(x35<=x36)));

	if (t3 != 4611686016279904256LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MAX;
	int8_t x51 = INT8_MAX;
	static uint16_t x52 = UINT16_MAX;
	int32_t t4 = 3487;

	t4 = (x49^(x50>>(x51<=x52)));

	if (t4 != -1073709057) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x54 = 31701304437757LLU;
	volatile int16_t x55 = -3081;
	static volatile int32_t x56 = INT32_MAX;

	t5 = (x53^(x54>>(x55<=x56)));

	if (t5 != 18446728223057332755LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x57 = INT8_MAX;
	uint16_t x58 = 62U;
	volatile int16_t x59 = INT16_MIN;
	static int16_t x60 = -71;

	t6 = (x57^(x58>>(x59<=x60)));

	if (t6 != 96) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x69 = 748U;
	int8_t x70 = 1;
	uint8_t x71 = 11U;
	static int16_t x72 = -1;
	int32_t t7 = 1;

	t7 = (x69^(x70>>(x71<=x72)));

	if (t7 != 749) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x74 = 298U;
	int8_t x75 = INT8_MIN;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t8 = 0;

	t8 = (x73^(x74>>(x75<=x76)));

	if (t8 != -2147483499) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x81 = INT16_MAX;
	int16_t x83 = INT16_MIN;
	volatile int8_t x84 = -1;
	volatile uint32_t t9 = 491814832U;

	t9 = (x81^(x82>>(x83<=x84)));

	if (t9 != 20546U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x89 = 161253;
	int32_t x90 = 1233861;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t10 = 30348504;

	t10 = (x89^(x90>>(x91<=x92)));

	if (t10 != 728071) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x94 = 6;
	uint16_t x95 = 3691U;
	int64_t x96 = 11LL;
	static volatile int64_t t11 = 12450121LL;

	t11 = (x93^(x94>>(x95<=x96)));

	if (t11 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x97 = 167;
	volatile uint16_t x99 = 31U;
	int8_t x100 = -32;
	int32_t t12 = -4;

	t12 = (x97^(x98>>(x99<=x100)));

	if (t12 != 32600) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x101 = 19;
	int8_t x102 = 1;
	static int32_t t13 = 59255711;

	t13 = (x101^(x102>>(x103<=x104)));

	if (t13 != 19) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x105 = INT32_MIN;
	uint64_t x106 = 27723857766LLU;
	uint32_t x107 = 67U;
	static int64_t x108 = 1084814527179LL;
	volatile uint64_t t14 = 32590662LLU;

	t14 = (x105^(x106>>(x107<=x108)));

	if (t14 != 18446744059654193075LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x109 = INT32_MIN;
	uint64_t x110 = 18540LLU;
	uint16_t x111 = 19023U;
	volatile int16_t x112 = 14;

	t15 = (x109^(x110>>(x111<=x112)));

	if (t15 != 18446744071562086508LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x117 = -1;
	int64_t x119 = INT64_MAX;
	int16_t x120 = INT16_MAX;
	volatile uint64_t t16 = 636LLU;

	t16 = (x117^(x118>>(x119<=x120)));

	if (t16 != 18446744073709382133LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x121 = 7U;
	int8_t x122 = 1;
	int8_t x124 = INT8_MIN;
	volatile int32_t t17 = -484523;

	t17 = (x121^(x122>>(x123<=x124)));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x126 = 1230U;
	volatile uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MIN;

	t18 = (x125^(x126>>(x127<=x128)));

	if (t18 != -1231LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x129 = -1LL;
	uint16_t x131 = 228U;
	uint16_t x132 = 7U;
	int64_t t19 = 189431663654489LL;

	t19 = (x129^(x130>>(x131<=x132)));

	if (t19 != -128LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x134 = 60LL;
	int32_t x135 = -15372347;
	volatile int32_t x136 = INT32_MAX;
	uint64_t t20 = 2483LLU;

	t20 = (x133^(x134>>(x135<=x136)));

	if (t20 != 184066692005252LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MAX;
	int64_t t21 = -680950073769478640LL;

	t21 = (x141^(x142>>(x143<=x144)));

	if (t21 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x145 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	uint8_t x148 = 42U;
	volatile uint64_t t22 = 10123LLU;

	t22 = (x145^(x146>>(x147<=x148)));

	if (t22 != 18415084715176477266LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x150 = 24935620LLU;
	static uint8_t x151 = 3U;
	int32_t x152 = -11;
	static uint64_t t23 = 15845343LLU;

	t23 = (x149^(x150>>(x151<=x152)));

	if (t23 != 24935570LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = INT8_MIN;
	uint8_t x154 = 0U;
	static int16_t x155 = INT16_MIN;
	volatile int16_t x156 = -1;
	volatile int32_t t24 = 125;

	t24 = (x153^(x154>>(x155<=x156)));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x173 = 2177U;
	volatile uint32_t x174 = 2870783U;
	int8_t x176 = 1;
	volatile uint32_t t25 = 163U;

	t25 = (x173^(x174>>(x175<=x176)));

	if (t25 != 2868606U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x177 = UINT64_MAX;
	uint32_t x179 = 30U;
	uint64_t x180 = 281971306228LLU;
	uint64_t t26 = 7125369LLU;

	t26 = (x177^(x178>>(x179<=x180)));

	if (t26 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x181 = 1187987685688930110LL;
	int32_t x183 = 237438;
	int8_t x184 = 1;
	volatile uint64_t t27 = 12LLU;

	t27 = (x181^(x182>>(x183<=x184)));

	if (t27 != 1187987685689567848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x194 = UINT8_MAX;
	int64_t x195 = -86LL;
	int8_t x196 = INT8_MIN;
	volatile int32_t t28 = 156;

	t28 = (x193^(x194>>(x195<=x196)));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x198 = 3471U;
	static uint64_t x199 = UINT64_MAX;
	int32_t x200 = INT32_MIN;
	static int32_t t29 = -123;

	t29 = (x197^(x198>>(x199<=x200)));

	if (t29 != -29297) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x201 = INT64_MAX;
	uint16_t x202 = 20086U;
	int32_t x204 = INT32_MAX;

	t30 = (x201^(x202>>(x203<=x204)));

	if (t30 != 9223372036854765764LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x212 = 13LLU;
	volatile int64_t t31 = 1671327042503825828LL;

	t31 = (x209^(x210>>(x211<=x212)));

	if (t31 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int64_t x214 = 313892LL;
	int16_t x215 = INT16_MIN;
	uint64_t t32 = 940259460LLU;

	t32 = (x213^(x214>>(x215<=x216)));

	if (t32 != 18446744073709394669LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x217 = INT32_MIN;
	static uint64_t x218 = UINT64_MAX;
	int32_t x219 = 32136076;
	static volatile uint64_t t33 = 64065340579414LLU;

	t33 = (x217^(x218>>(x219<=x220)));

	if (t33 != 2147483647LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x226 = 3128227225956801LL;
	uint64_t x227 = 1941916064965682LLU;
	int64_t t34 = 608LL;

	t34 = (x225^(x226>>(x227<=x228)));

	if (t34 != 3128230159289918LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = 1;
	uint8_t x231 = UINT8_MAX;
	uint16_t x232 = 23U;
	volatile int32_t t35 = 3220;

	t35 = (x229^(x230>>(x231<=x232)));

	if (t35 != 66419) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x233 = 17U;
	uint64_t x234 = 39098105235LLU;
	uint8_t x235 = 77U;
	uint32_t x236 = 3371377U;
	static uint64_t t36 = 84549798620LLU;

	t36 = (x233^(x234>>(x235<=x236)));

	if (t36 != 19549052632LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x252 = 28797;
	static volatile int32_t t37 = -3410;

	t37 = (x249^(x250>>(x251<=x252)));

	if (t37 != -1073741825) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x257 = 13U;
	static uint32_t x258 = 56672U;
	volatile int32_t x259 = INT32_MIN;
	int64_t x260 = 914355432851689144LL;
	uint32_t t38 = 7383U;

	t38 = (x257^(x258>>(x259<=x260)));

	if (t38 != 28349U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int32_t x271 = 5809;
	static uint8_t x272 = 1U;
	volatile uint64_t t39 = 2LLU;

	t39 = (x269^(x270>>(x271<=x272)));

	if (t39 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x281 = INT8_MAX;
	uint16_t x283 = 1U;
	volatile int32_t t40 = -267108992;

	t40 = (x281^(x282>>(x283<=x284)));

	if (t40 != 126) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x297 = INT8_MIN;
	uint32_t x298 = 63559U;
	int8_t x299 = -43;
	uint32_t x300 = 25U;
	volatile uint32_t t41 = 90U;

	t41 = (x297^(x298>>(x299<=x300)));

	if (t41 != 4294903751U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x301 = 137543619707288232LLU;
	volatile int64_t x302 = INT64_MAX;
	uint8_t x304 = 14U;
	volatile uint64_t t42 = 16692007749LLU;

	t42 = (x301^(x302>>(x303<=x304)));

	if (t42 != 4474142398720099671LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x305 = 68647257U;
	static uint64_t x306 = 7LLU;
	volatile uint64_t x307 = 1479335491689LLU;
	int32_t x308 = INT32_MIN;

	t43 = (x305^(x306>>(x307<=x308)));

	if (t43 != 68647258LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x313 = INT64_MAX;
	volatile uint64_t x315 = UINT64_MAX;
	volatile int32_t x316 = 10;
	volatile int64_t t44 = -3711888104160LL;

	t44 = (x313^(x314>>(x315<=x316)));

	if (t44 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x317 = 0;
	uint32_t x318 = 973700191U;
	int16_t x319 = INT16_MIN;
	uint16_t x320 = 0U;
	uint32_t t45 = 1004235893U;

	t45 = (x317^(x318>>(x319<=x320)));

	if (t45 != 486850095U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x321 = INT16_MIN;
	int64_t x323 = INT64_MAX;
	static volatile int32_t t46 = 294810;

	t46 = (x321^(x322>>(x323<=x324)));

	if (t46 != -32737) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x325 = INT64_MAX;
	static int64_t x326 = 29438044472432163LL;
	uint8_t x327 = 4U;
	volatile uint32_t x328 = 0U;
	static volatile int64_t t47 = 34364547293709LL;

	t47 = (x325^(x326>>(x327<=x328)));

	if (t47 != 9193933992382343644LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x338 = 1U;
	int32_t x340 = 1;
	static int32_t t48 = -131594;

	t48 = (x337^(x338>>(x339<=x340)));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x349 = -168508;
	int8_t x351 = -1;
	volatile int32_t x352 = -1;
	volatile int64_t t49 = -31131LL;

	t49 = (x349^(x350>>(x351<=x352)));

	if (t49 != -2233487LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x353 = 0U;
	uint64_t x354 = 4044111153347639LLU;
	static int8_t x355 = -1;
	static int32_t x356 = -10247;
	uint64_t t50 = 107938LLU;

	t50 = (x353^(x354>>(x355<=x356)));

	if (t50 != 4044111153347639LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x360 = INT8_MIN;
	volatile int32_t t51 = -478059;

	t51 = (x357^(x358>>(x359<=x360)));

	if (t51 != -14423594) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x373 = -1;
	static int16_t x375 = INT16_MIN;
	static volatile int32_t t52 = 0;

	t52 = (x373^(x374>>(x375<=x376)));

	if (t52 != -7) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x378 = 33;
	int32_t x379 = -1;
	volatile uint64_t x380 = 62176814644053LLU;
	volatile int32_t t53 = -19505;

	t53 = (x377^(x378>>(x379<=x380)));

	if (t53 != 65502) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x393 = 117U;
	uint16_t x394 = 9U;
	int32_t t54 = 32;

	t54 = (x393^(x394>>(x395<=x396)));

	if (t54 != 124) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x405 = INT16_MAX;
	static uint8_t x406 = 21U;
	int8_t x407 = -1;
	int16_t x408 = INT16_MIN;
	volatile int32_t t55 = 19703;

	t55 = (x405^(x406>>(x407<=x408)));

	if (t55 != 32746) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x421 = INT8_MIN;
	volatile int16_t x423 = INT16_MIN;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t56 = -63996585;

	t56 = (x421^(x422>>(x423<=x424)));

	if (t56 != -122) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x425 = UINT16_MAX;
	static int32_t x426 = INT32_MAX;
	int8_t x427 = INT8_MAX;
	volatile uint8_t x428 = UINT8_MAX;

	t57 = (x425^(x426>>(x427<=x428)));

	if (t57 != 1073676288) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x429 = -1;
	int8_t x430 = INT8_MAX;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t58 = 502;

	t58 = (x429^(x430>>(x431<=x432)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t t59 = 1;

	t59 = (x433^(x434>>(x435<=x436)));

	if (t59 != -32641) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x438 = 1U;
	int8_t x440 = 0;

	t60 = (x437^(x438>>(x439<=x440)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MAX;
	static int64_t x443 = INT64_MIN;

	t61 = (x441^(x442>>(x443<=x444)));

	if (t61 != -1073709057) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x445 = 15309;
	int32_t x446 = 222825432;
	int8_t x447 = -1;
	int16_t x448 = INT16_MIN;
	volatile int32_t t62 = -468;

	t62 = (x445^(x446>>(x447<=x448)));

	if (t62 != 222834709) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x449 = INT32_MIN;
	static uint64_t x450 = UINT64_MAX;
	static volatile int64_t x451 = -300396LL;
	static int64_t x452 = INT64_MAX;

	t63 = (x449^(x450>>(x451<=x452)));

	if (t63 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x454 = 13U;
	static int8_t x456 = INT8_MIN;
	int32_t t64 = -1;

	t64 = (x453^(x454>>(x455<=x456)));

	if (t64 != 1974) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x461 = UINT32_MAX;
	int64_t x462 = INT64_MAX;
	uint8_t x464 = 26U;
	int64_t t65 = 206LL;

	t65 = (x461^(x462>>(x463<=x464)));

	if (t65 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x465 = INT32_MIN;
	uint32_t x466 = 8U;
	uint8_t x467 = UINT8_MAX;
	volatile int64_t x468 = INT64_MIN;
	uint32_t t66 = 3U;

	t66 = (x465^(x466>>(x467<=x468)));

	if (t66 != 2147483656U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x485 = -1;
	uint32_t x486 = 55U;
	uint16_t x487 = UINT16_MAX;
	int64_t x488 = INT64_MIN;
	volatile uint32_t t67 = 2863659U;

	t67 = (x485^(x486>>(x487<=x488)));

	if (t67 != 4294967240U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x489 = INT64_MAX;
	int8_t x490 = 1;
	uint32_t x491 = 52252U;
	uint8_t x492 = UINT8_MAX;
	volatile int64_t t68 = 145718714062LL;

	t68 = (x489^(x490>>(x491<=x492)));

	if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x493 = INT32_MIN;
	volatile uint8_t x494 = 6U;
	int32_t x496 = -20;

	t69 = (x493^(x494>>(x495<=x496)));

	if (t69 != -2147483645) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x501 = 5160U;
	static volatile uint64_t x502 = UINT64_MAX;
	uint8_t x503 = UINT8_MAX;
	int64_t x504 = INT64_MIN;

	t70 = (x501^(x502>>(x503<=x504)));

	if (t70 != 18446744073709546455LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x505 = INT64_MAX;
	volatile int32_t x506 = 56;
	int16_t x507 = INT16_MIN;
	int64_t t71 = 35516LL;

	t71 = (x505^(x506>>(x507<=x508)));

	if (t71 != 9223372036854775751LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x510 = 63855U;
	static int8_t x511 = INT8_MAX;
	int16_t x512 = INT16_MAX;

	t72 = (x509^(x510>>(x511<=x512)));

	if (t72 != 31873U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x517 = UINT64_MAX;
	int8_t x518 = 39;
	int64_t x519 = INT64_MIN;
	static int64_t x520 = -1LL;
	uint64_t t73 = 1LLU;

	t73 = (x517^(x518>>(x519<=x520)));

	if (t73 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x521 = -1;
	static uint64_t x522 = 3961LLU;
	uint8_t x523 = UINT8_MAX;
	int16_t x524 = -1;
	volatile uint64_t t74 = 2148781LLU;

	t74 = (x521^(x522>>(x523<=x524)));

	if (t74 != 18446744073709547654LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x525 = 3659644389902384LLU;
	int8_t x526 = INT8_MAX;
	static uint64_t t75 = 27LLU;

	t75 = (x525^(x526>>(x527<=x528)));

	if (t75 != 3659644389902415LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x529 = -1;
	uint32_t x530 = 1U;
	int64_t x531 = -1LL;
	int64_t x532 = -1087227001437585045LL;
	uint32_t t76 = 9U;

	t76 = (x529^(x530>>(x531<=x532)));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x537 = 0U;
	int64_t x538 = INT64_MAX;
	uint64_t x539 = UINT64_MAX;
	int64_t x540 = -195964563LL;
	volatile int64_t t77 = INT64_MAX;

	t77 = (x537^(x538>>(x539<=x540)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x541 = 3683641274LLU;
	int16_t x542 = INT16_MAX;
	volatile int16_t x543 = INT16_MIN;
	int32_t x544 = INT32_MIN;
	volatile uint64_t t78 = 656LLU;

	t78 = (x541^(x542>>(x543<=x544)));

	if (t78 != 3683620933LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x545 = -59369;
	static int64_t x547 = INT64_MAX;
	volatile int8_t x548 = -5;
	int64_t t79 = 26473888781387144LL;

	t79 = (x545^(x546>>(x547<=x548)));

	if (t79 != -9223372036854716440LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x553 = UINT64_MAX;
	uint8_t x554 = UINT8_MAX;
	uint64_t x555 = 9LLU;
	uint32_t x556 = 44U;
	uint64_t t80 = 9056049686095728067LLU;

	t80 = (x553^(x554>>(x555<=x556)));

	if (t80 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x561 = 4;
	volatile int64_t x562 = INT64_MAX;
	int32_t x563 = INT32_MIN;
	uint8_t x564 = 0U;
	int64_t t81 = 10088503068963LL;

	t81 = (x561^(x562>>(x563<=x564)));

	if (t81 != 4611686018427387899LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x565 = 7566;
	int32_t x567 = INT32_MIN;
	volatile int8_t x568 = INT8_MIN;
	uint64_t t82 = 688295LLU;

	t82 = (x565^(x566>>(x567<=x568)));

	if (t82 != 29937LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x569 = INT64_MAX;
	uint8_t x570 = 19U;
	int8_t x571 = -17;
	uint32_t x572 = 784851423U;
	int64_t t83 = -43877713LL;

	t83 = (x569^(x570>>(x571<=x572)));

	if (t83 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x593 = 0U;
	uint16_t x594 = 0U;
	uint8_t x596 = 2U;

	t84 = (x593^(x594>>(x595<=x596)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x597 = 54U;
	uint16_t x598 = 4558U;
	static int32_t x599 = INT32_MAX;
	static volatile int32_t x600 = -3;
	volatile int32_t t85 = -1029051;

	t85 = (x597^(x598>>(x599<=x600)));

	if (t85 != 4600) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x606 = 1233U;
	int8_t x607 = INT8_MAX;
	uint64_t x608 = 121863261374373LLU;
	volatile int32_t t86 = -6;

	t86 = (x605^(x606>>(x607<=x608)));

	if (t86 != -2147483032) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x609 = INT64_MIN;
	uint32_t x610 = 1U;
	int32_t x611 = 22065661;
	int64_t t87 = -11538452793082119LL;

	t87 = (x609^(x610>>(x611<=x612)));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x614 = 0;
	uint64_t x615 = 399666886144346LLU;

	t88 = (x613^(x614>>(x615<=x616)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x625 = INT32_MIN;
	volatile uint64_t x626 = 4062776509LLU;
	int16_t x627 = INT16_MIN;
	int64_t x628 = INT64_MAX;
	volatile uint64_t t89 = 309078286410LLU;

	t89 = (x625^(x626>>(x627<=x628)));

	if (t89 != 18446744073593456222LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x637 = UINT64_MAX;
	uint16_t x638 = 508U;
	uint16_t x639 = 1794U;
	static volatile uint8_t x640 = UINT8_MAX;
	volatile uint64_t t90 = 242151LLU;

	t90 = (x637^(x638>>(x639<=x640)));

	if (t90 != 18446744073709551107LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x642 = UINT64_MAX;
	uint64_t x643 = UINT64_MAX;
	int8_t x644 = 1;
	static uint64_t t91 = 31845070676796073LLU;

	t91 = (x641^(x642>>(x643<=x644)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x645 = -1;
	static uint8_t x647 = 1U;
	volatile int64_t x648 = 15904337268LL;

	t92 = (x645^(x646>>(x647<=x648)));

	if (t92 != -116454782400894LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x649 = 0U;
	uint32_t x650 = UINT32_MAX;
	int16_t x651 = 7327;
	uint64_t x652 = 15289111112303276LLU;
	volatile uint32_t t93 = 1879537U;

	t93 = (x649^(x650>>(x651<=x652)));

	if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x657 = 7232778644LLU;
	static uint32_t x659 = 2U;
	volatile int8_t x660 = INT8_MIN;
	uint64_t t94 = 3634518870840113LLU;

	t94 = (x657^(x658>>(x659<=x660)));

	if (t94 != 7232778731LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x662 = 17162U;
	int32_t x663 = 98798804;
	int32_t x664 = INT32_MIN;
	int64_t t95 = -10LL;

	t95 = (x661^(x662>>(x663<=x664)));

	if (t95 != -517705976829712818LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x666 = UINT16_MAX;
	uint16_t x667 = UINT16_MAX;
	int32_t x668 = INT32_MIN;
	int32_t t96 = -6;

	t96 = (x665^(x666>>(x667<=x668)));

	if (t96 != -65534) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x677 = -1;
	volatile int32_t x679 = -1;
	int8_t x680 = INT8_MIN;
	static volatile int64_t t97 = INT64_MIN;

	t97 = (x677^(x678>>(x679<=x680)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x682 = UINT32_MAX;
	int8_t x683 = -3;
	static uint64_t x684 = 4891545340LLU;
	volatile uint32_t t98 = 3228U;

	t98 = (x681^(x682>>(x683<=x684)));

	if (t98 != 97U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x693 = INT64_MIN;
	int64_t x694 = INT64_MAX;
	static uint8_t x695 = UINT8_MAX;
	int64_t x696 = INT64_MAX;
	volatile int64_t t99 = 8181971LL;

	t99 = (x693^(x694>>(x695<=x696)));

	if (t99 != -4611686018427387905LL) { NG(); } else { ; }
	
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

