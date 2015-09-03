#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
uint64_t t0 = 42LLU;
static uint32_t x5 = 3U;
volatile int8_t x14 = INT8_MIN;
int32_t x17 = INT32_MIN;
uint64_t t4 = 1113504811925LLU;
uint32_t x28 = UINT32_MAX;
uint64_t t5 = 16974LLU;
uint32_t x33 = UINT32_MAX;
int16_t x34 = -1;
int64_t x35 = 14LL;
volatile int64_t t6 = -33LL;
int8_t x37 = INT8_MIN;
uint64_t x38 = UINT64_MAX;
int8_t x39 = 29;
volatile int32_t x43 = INT32_MIN;
int8_t x45 = -1;
volatile int8_t x47 = INT8_MAX;
static uint16_t x49 = 4U;
int16_t x64 = INT16_MIN;
static volatile int32_t x72 = -1;
int32_t x75 = INT32_MIN;
uint8_t x79 = 0U;
int32_t x80 = INT32_MIN;
int8_t x82 = INT8_MAX;
int64_t x85 = -1LL;
uint8_t x89 = 0U;
volatile int64_t t26 = 1166544200847LL;
static volatile uint16_t x117 = 6U;
int16_t x127 = 3;
int16_t x128 = INT16_MIN;
uint8_t x133 = 0U;
volatile int16_t x144 = 8;
int8_t x151 = INT8_MIN;
uint32_t x156 = 835583U;
volatile int64_t t35 = 525LL;
int8_t x158 = INT8_MIN;
int8_t x159 = INT8_MAX;
uint32_t x162 = UINT32_MAX;
volatile int16_t x163 = INT16_MIN;
int8_t x167 = 1;
int64_t x168 = INT64_MIN;
int8_t x175 = INT8_MIN;
static volatile int8_t x182 = INT8_MIN;
volatile uint8_t x183 = 0U;
static int8_t x184 = INT8_MIN;
int32_t t42 = -14743377;
volatile uint16_t x187 = 0U;
static int64_t x194 = -38256125661806LL;
uint64_t x195 = 31085981149959LLU;
static volatile uint8_t x197 = UINT8_MAX;
uint8_t x199 = UINT8_MAX;
static int32_t x200 = INT32_MAX;
uint64_t t46 = 18642700179LLU;
uint8_t x205 = UINT8_MAX;
int16_t x211 = -3410;
int32_t x226 = INT32_MIN;
static volatile uint32_t x229 = 192355U;
uint32_t t52 = 246U;
uint8_t x240 = 11U;
int32_t x255 = INT32_MIN;
int16_t x259 = INT16_MAX;
int32_t x263 = 9523330;
int16_t x268 = -1;
static int32_t x269 = INT32_MAX;
static uint16_t x271 = 0U;
int64_t t60 = -66160425483LL;
static int16_t x276 = INT16_MIN;
int64_t t61 = 1625LL;
int16_t x278 = -1;
volatile int64_t t62 = 0LL;
static int16_t x295 = INT16_MIN;
static uint16_t x297 = 4U;
static uint64_t x298 = 15054278939LLU;
uint64_t x301 = UINT64_MAX;
volatile uint8_t x302 = 4U;
static uint64_t x303 = UINT64_MAX;
static int8_t x307 = -1;
static uint8_t x317 = 1U;
int32_t x319 = INT32_MIN;
volatile uint64_t t71 = 45854665126433LLU;
static uint32_t x343 = 899U;
int16_t x344 = INT16_MIN;
uint32_t t75 = 48U;
int8_t x346 = INT8_MAX;
static int16_t x351 = 1;
uint16_t x352 = UINT16_MAX;
uint32_t x353 = 536711U;
volatile int16_t x365 = INT16_MIN;
volatile int64_t t79 = 1642705090034LL;
volatile int64_t t81 = 33931861054539LL;
int8_t x382 = INT8_MIN;
volatile int8_t x386 = INT8_MIN;
int64_t x389 = 13253934203346LL;
int64_t t84 = 4LL;
volatile uint8_t x410 = 0U;
int16_t x420 = -3;
volatile int8_t x422 = 1;
volatile uint32_t t90 = 0U;
uint8_t x432 = UINT8_MAX;
volatile int8_t x433 = INT8_MAX;
static uint64_t t94 = 178596LLU;
static volatile int32_t x465 = 1959907;


void f0(void) {
	static uint16_t x1 = 2U;
	int32_t x2 = -491;
	volatile uint64_t x4 = 513592724743749LLU;

	t0 = ((x1*(x2&x3))%x4);

	if (t0 != 34179088317801LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = 138704850999289LLU;
	static volatile int16_t x7 = 7516;
	static uint64_t x8 = 16035LLU;
	uint64_t t1 = 744989877585275LLU;

	t1 = ((x5*(x6&x7))%x8);

	if (t1 != 357LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int32_t x10 = INT32_MAX;
	int64_t x11 = -1LL;
	int8_t x12 = -5;
	volatile int64_t t2 = 93815911904433LL;

	t2 = ((x9*(x10&x11))%x12);

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 156043737LLU;
	int16_t x15 = -1;
	int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 970616704657LLU;

	t3 = ((x13*(x14&x15))%x16);

	if (t3 != 9223372016881177472LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 2964688U;
	volatile uint64_t x19 = UINT64_MAX;
	volatile int8_t x20 = INT8_MIN;

	t4 = ((x17*(x18&x19))%x20);

	if (t4 != 18440377454708129792LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	static uint32_t x26 = 44481U;
	uint64_t x27 = UINT64_MAX;

	t5 = ((x25*(x26&x27))%x28);

	if (t5 != 4294922815LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x36 = INT64_MIN;

	t6 = ((x33*(x34&x35))%x36);

	if (t6 != 60129542130LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x40 = INT64_MIN;
	static uint64_t t7 = 562621LLU;

	t7 = ((x37*(x38&x39))%x40);

	if (t7 != 9223372036854772096LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 3923737;
	int8_t x42 = 1;
	int8_t x44 = -56;
	static volatile int32_t t8 = -45098;

	t8 = ((x41*(x42&x43))%x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x46 = UINT16_MAX;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t9 = 13529LLU;

	t9 = ((x45*(x46&x47))%x48);

	if (t9 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x50 = INT64_MIN;
	static int64_t x51 = INT64_MAX;
	volatile int16_t x52 = INT16_MAX;
	int64_t t10 = -3501814LL;

	t10 = ((x49*(x50&x51))%x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MAX;
	volatile int32_t x54 = 0;
	uint32_t x55 = UINT32_MAX;
	static uint32_t x56 = 1U;
	uint32_t t11 = 811U;

	t11 = ((x53*(x54&x55))%x56);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 6LL;
	volatile int64_t x58 = -1LL;
	int64_t x59 = -1LL;
	int32_t x60 = -2;
	volatile int64_t t12 = -9553292706137630LL;

	t12 = ((x57*(x58&x59))%x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	int32_t x62 = -1;
	static volatile int16_t x63 = -1797;
	int32_t t13 = -29958080;

	t13 = ((x61*(x62&x63))%x64);

	if (t13 != 1797) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x65 = 1U;
	uint64_t x66 = UINT64_MAX;
	static volatile uint32_t x67 = 10566101U;
	int8_t x68 = INT8_MIN;
	uint64_t t14 = 3175527546LLU;

	t14 = ((x65*(x66&x67))%x68);

	if (t14 != 10566101LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x69 = 8571181878081LLU;
	int16_t x70 = INT16_MIN;
	uint32_t x71 = 3441924U;
	volatile uint64_t t15 = 7280556LLU;

	t15 = ((x69*(x70&x71))%x72);

	if (t15 != 11043607143291060224LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = 53U;
	static int16_t x74 = 175;
	volatile uint8_t x76 = 4U;
	int32_t t16 = 82996432;

	t16 = ((x73*(x74&x75))%x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -1;
	uint16_t x78 = 0U;
	static volatile int32_t t17 = -1895516;

	t17 = ((x77*(x78&x79))%x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = 7549;
	static volatile uint64_t x83 = 6657LLU;
	uint16_t x84 = UINT16_MAX;
	uint64_t t18 = 2082583217LLU;

	t18 = ((x81*(x82&x83))%x84);

	if (t18 != 7549LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MAX;
	static int32_t x87 = 14;
	int64_t x88 = -9401063400LL;
	volatile int64_t t19 = 2370724292312150701LL;

	t19 = ((x85*(x86&x87))%x88);

	if (t19 != -14LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x90 = 368023LLU;
	int16_t x91 = INT16_MIN;
	static int32_t x92 = INT32_MIN;
	volatile uint64_t t20 = 62692450LLU;

	t20 = ((x89*(x90&x91))%x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 426U;
	static int8_t x94 = -53;
	int8_t x95 = INT8_MIN;
	volatile uint32_t x96 = 25U;
	volatile uint32_t t21 = 3320U;

	t21 = ((x93*(x94&x95))%x96);

	if (t21 != 18U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = -1;
	static uint32_t x100 = 1344529U;
	uint64_t t22 = 57381119647156853LLU;

	t22 = ((x97*(x98&x99))%x100);

	if (t22 != 128LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	uint8_t x102 = 5U;
	int64_t x103 = -1LL;
	static volatile uint32_t x104 = 28U;
	int64_t t23 = -2499385939384745563LL;

	t23 = ((x101*(x102&x103))%x104);

	if (t23 != -5LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	uint16_t x106 = 19U;
	int16_t x107 = 98;
	int64_t x108 = INT64_MAX;
	static volatile int64_t t24 = -5484LL;

	t24 = ((x105*(x106&x107))%x108);

	if (t24 != -65536LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 1U;
	int8_t x110 = INT8_MIN;
	int16_t x111 = 79;
	int8_t x112 = INT8_MAX;
	int32_t t25 = 52;

	t25 = ((x109*(x110&x111))%x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 121LL;
	int16_t x114 = 1;
	static int32_t x115 = -1;
	volatile int64_t x116 = -48768064103148338LL;

	t26 = ((x113*(x114&x115))%x116);

	if (t26 != 121LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x118 = UINT64_MAX;
	static volatile int32_t x119 = INT32_MIN;
	static int64_t x120 = -21128104938LL;
	static volatile uint64_t t27 = 11943063LLU;

	t27 = ((x117*(x118&x119))%x120);

	if (t27 != 8243203050LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 68U;
	int64_t x122 = -5138041381667LL;
	int8_t x123 = -1;
	uint32_t x124 = 241348U;
	int64_t t28 = 148LL;

	t28 = ((x121*(x122&x123))%x124);

	if (t28 != -86932LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = UINT32_MAX;
	volatile uint8_t x126 = 7U;
	uint32_t t29 = 25712097U;

	t29 = ((x125*(x126&x127))%x128);

	if (t29 != 32765U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = 623850LL;
	static uint32_t x130 = UINT32_MAX;
	static uint32_t x131 = 15627007U;
	int64_t x132 = 22978003916020021LL;
	volatile int64_t t30 = 91678LL;

	t30 = ((x129*(x130&x131))%x132);

	if (t30 != 9748908316950LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x134 = -1;
	static uint8_t x135 = 38U;
	static int8_t x136 = -1;
	static int32_t t31 = 1058;

	t31 = ((x133*(x134&x135))%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = UINT8_MAX;
	uint16_t x142 = UINT16_MAX;
	uint8_t x143 = 2U;
	static int32_t t32 = -5711278;

	t32 = ((x141*(x142&x143))%x144);

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = UINT64_MAX;
	volatile int32_t x146 = INT32_MIN;
	uint64_t x147 = UINT64_MAX;
	int8_t x148 = INT8_MAX;
	volatile uint64_t t33 = 0LLU;

	t33 = ((x145*(x146&x147))%x148);

	if (t33 != 8LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 5LLU;
	volatile uint8_t x150 = 0U;
	int8_t x152 = INT8_MIN;
	uint64_t t34 = 1100627867LLU;

	t34 = ((x149*(x150&x151))%x152);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x153 = INT32_MAX;
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 15558U;

	t35 = ((x153*(x154&x155))%x156);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = 30;
	int64_t x160 = -1LL;
	volatile int64_t t36 = -4864115170737484LL;

	t36 = ((x157*(x158&x159))%x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = UINT16_MAX;
	uint32_t x164 = 53264124U;
	uint32_t t37 = 6126446U;

	t37 = ((x161*(x162&x163))%x164);

	if (t37 != 16951456U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 60271LLU;
	uint32_t x166 = 31323256U;
	volatile uint64_t t38 = 37415LLU;

	t38 = ((x165*(x166&x167))%x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = 3;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MIN;
	uint64_t t39 = 1240040274300LLU;

	t39 = ((x169*(x170&x171))%x172);

	if (t39 != 18446744073709453312LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = 46U;
	int16_t x176 = -1;
	volatile int64_t t40 = -1551347579272LL;

	t40 = ((x173*(x174&x175))%x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MIN;
	volatile uint64_t x179 = 671280564725LLU;
	static uint8_t x180 = 104U;
	uint64_t t41 = 15272190299107401LLU;

	t41 = ((x177*(x178&x179))%x180);

	if (t41 != 48LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = 1U;

	t42 = ((x181*(x182&x183))%x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = 222;
	uint16_t x186 = UINT16_MAX;
	static int64_t x188 = -1LL;
	static volatile int64_t t43 = -155165191945675189LL;

	t43 = ((x185*(x186&x187))%x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 817U;
	int64_t x196 = INT64_MIN;
	uint64_t t44 = 23873LLU;

	t44 = ((x193*(x194&x195))%x196);

	if (t44 != 25169151812886370LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x198 = UINT8_MAX;
	static volatile int32_t t45 = 19;

	t45 = ((x197*(x198&x199))%x200);

	if (t45 != 65025) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = 32932630LL;
	static uint16_t x202 = UINT16_MAX;
	uint64_t x203 = 127748544997784LLU;
	int64_t x204 = INT64_MAX;

	t46 = ((x201*(x202&x203))%x204);

	if (t46 != 350666644240LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x206 = 59471LL;
	volatile uint8_t x207 = UINT8_MAX;
	volatile int16_t x208 = -1;
	static volatile int64_t t47 = 1415557787LL;

	t47 = ((x205*(x206&x207))%x208);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x209 = INT16_MIN;
	uint32_t x210 = 66U;
	uint8_t x212 = 18U;
	uint32_t t48 = 192U;

	t48 = ((x209*(x210&x211))%x212);

	if (t48 != 6U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = 292936370273LL;
	volatile int16_t x218 = INT16_MIN;
	int8_t x219 = 35;
	volatile int16_t x220 = -1;
	int64_t t49 = 200874843055293779LL;

	t49 = ((x217*(x218&x219))%x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x221 = 40787071831LLU;
	volatile uint32_t x222 = 9277353U;
	int64_t x223 = -574620669205103799LL;
	volatile uint64_t x224 = 99487310LLU;
	volatile uint64_t t50 = 375935601067719LLU;

	t50 = ((x221*(x222&x223))%x224);

	if (t50 != 15996855LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	int8_t x227 = INT8_MAX;
	int16_t x228 = -252;
	int32_t t51 = 463122132;

	t51 = ((x225*(x226&x227))%x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x230 = 148U;
	uint16_t x231 = UINT16_MAX;
	volatile uint32_t x232 = 285552U;

	t52 = ((x229*(x230&x231))%x232);

	if (t52 != 198892U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x237 = 2U;
	uint16_t x238 = 1861U;
	static int32_t x239 = INT32_MIN;
	volatile int32_t t53 = 0;

	t53 = ((x237*(x238&x239))%x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = 47U;
	uint8_t x248 = UINT8_MAX;
	uint64_t t54 = 4965671159LLU;

	t54 = ((x245*(x246&x247))%x248);

	if (t54 != 209LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x249 = 553;
	int64_t x250 = 0LL;
	int16_t x251 = -1;
	uint8_t x252 = 1U;
	volatile int64_t t55 = 83351017852779677LL;

	t55 = ((x249*(x250&x251))%x252);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = -1;
	static uint64_t x254 = UINT64_MAX;
	static int8_t x256 = INT8_MIN;
	volatile uint64_t t56 = 57608484927248LLU;

	t56 = ((x253*(x254&x255))%x256);

	if (t56 != 2147483648LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x257 = -3;
	static int16_t x258 = INT16_MIN;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t57 = 109244034;

	t57 = ((x257*(x258&x259))%x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = 3U;
	uint32_t x262 = 44U;
	static volatile int8_t x264 = INT8_MIN;
	uint32_t t58 = 4051806U;

	t58 = ((x261*(x262&x263))%x264);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 18604U;
	uint8_t x266 = 0U;
	uint32_t x267 = 17511771U;
	static volatile uint32_t t59 = 185361U;

	t59 = ((x265*(x266&x267))%x268);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x270 = -20;
	int64_t x272 = INT64_MIN;

	t60 = ((x269*(x270&x271))%x272);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x273 = -4774159;
	uint32_t x274 = 779985U;
	int64_t x275 = INT64_MIN;

	t61 = ((x273*(x274&x275))%x276);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = 94299U;
	volatile uint16_t x279 = 12U;
	int64_t x280 = INT64_MIN;

	t62 = ((x277*(x278&x279))%x280);

	if (t62 != 1131588LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = INT32_MIN;
	static uint32_t x290 = 105551754U;
	uint8_t x291 = 14U;
	int16_t x292 = INT16_MIN;
	uint32_t t63 = 18U;

	t63 = ((x289*(x290&x291))%x292);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x293 = 30U;
	static int32_t x294 = INT32_MAX;
	int32_t x296 = 47309;
	static volatile uint32_t t64 = 1236734614U;

	t64 = ((x293*(x294&x295))%x296);

	if (t64 != 30180U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x299 = INT32_MIN;
	uint16_t x300 = 267U;
	volatile uint64_t t65 = 17529334018468LLU;

	t65 = ((x297*(x298&x299))%x300);

	if (t65 != 185LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x304 = 78U;
	volatile uint64_t t66 = 1244934LLU;

	t66 = ((x301*(x302&x303))%x304);

	if (t66 != 12LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x305 = 2143425242LLU;
	uint16_t x306 = 17498U;
	int64_t x308 = -1LL;
	volatile uint64_t t67 = 36LLU;

	t67 = ((x305*(x306&x307))%x308);

	if (t67 != 37505654884516LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x309 = 1703198LLU;
	int16_t x310 = -27;
	uint8_t x311 = 1U;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t68 = 2233814978303LLU;

	t68 = ((x309*(x310&x311))%x312);

	if (t68 != 1703198LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x313 = 23LLU;
	int8_t x314 = INT8_MAX;
	volatile int64_t x315 = 618LL;
	int8_t x316 = -15;
	uint64_t t69 = 111LLU;

	t69 = ((x313*(x314&x315))%x316);

	if (t69 != 2438LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x318 = -37;
	int8_t x320 = -1;
	volatile int32_t t70 = 511;

	t70 = ((x317*(x318&x319))%x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x321 = UINT64_MAX;
	int32_t x322 = 1;
	int8_t x323 = -1;
	uint32_t x324 = 349977U;

	t71 = ((x321*(x322&x323))%x324);

	if (t71 != 312048LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x325 = 1555;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MIN;
	static int8_t x328 = -1;
	volatile int32_t t72 = -917;

	t72 = ((x325*(x326&x327))%x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MAX;
	volatile uint64_t x330 = 2LLU;
	static int8_t x331 = -1;
	int8_t x332 = 5;
	volatile uint64_t t73 = 9LLU;

	t73 = ((x329*(x330&x331))%x332);

	if (t73 != 4LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x333 = -1;
	static uint64_t x334 = 174781LLU;
	static int64_t x335 = -1LL;
	int16_t x336 = INT16_MAX;
	uint64_t t74 = 189053832LLU;

	t74 = ((x333*(x334&x335))%x336);

	if (t74 != 21837LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x341 = -1;
	volatile int8_t x342 = -1;

	t75 = ((x341*(x342&x343))%x344);

	if (t75 != 31869U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = INT64_MAX;
	volatile int8_t x347 = 0;
	int8_t x348 = -1;
	volatile int64_t t76 = 3940814LL;

	t76 = ((x345*(x346&x347))%x348);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x349 = -1;
	static int8_t x350 = -1;
	volatile int32_t t77 = -9095;

	t77 = ((x349*(x350&x351))%x352);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x354 = 4U;
	int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	int64_t t78 = -117953LL;

	t78 = ((x353*(x354&x355))%x356);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x366 = INT8_MIN;
	int8_t x367 = -1;
	int64_t x368 = INT64_MAX;

	t79 = ((x365*(x366&x367))%x368);

	if (t79 != 4194304LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = -1;
	int8_t x370 = INT8_MIN;
	uint32_t x371 = UINT32_MAX;
	static uint64_t x372 = 64076995494594LLU;
	uint64_t t80 = 57036707557234335LLU;

	t80 = ((x369*(x370&x371))%x372);

	if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x373 = -1;
	int64_t x374 = -830086704040508LL;
	int8_t x375 = INT8_MAX;
	uint8_t x376 = UINT8_MAX;

	t81 = ((x373*(x374&x375))%x376);

	if (t81 != -68LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = INT64_MAX;
	uint8_t x383 = 48U;
	volatile uint64_t x384 = 8LLU;
	uint64_t t82 = 2714288736267059LLU;

	t82 = ((x381*(x382&x383))%x384);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x387 = INT16_MAX;
	int8_t x388 = -29;
	int32_t t83 = -36;

	t83 = ((x385*(x386&x387))%x388);

	if (t83 != 12) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x390 = 622957U;
	int16_t x391 = 4;
	static int16_t x392 = -1226;

	t84 = ((x389*(x390&x391))%x392);

	if (t84 != 246LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x397 = 26247842233273LLU;
	int8_t x398 = -1;
	int8_t x399 = -1;
	static volatile int32_t x400 = INT32_MAX;
	uint64_t t85 = 1264937279163LLU;

	t85 = ((x397*(x398&x399))%x400);

	if (t85 != 850384012LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x409 = UINT32_MAX;
	int8_t x411 = 0;
	static int16_t x412 = INT16_MIN;
	volatile uint32_t t86 = 112844U;

	t86 = ((x409*(x410&x411))%x412);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x413 = 469154U;
	uint16_t x414 = 27527U;
	uint16_t x415 = 138U;
	int32_t x416 = INT32_MAX;
	uint32_t t87 = 2591858U;

	t87 = ((x413*(x414&x415))%x416);

	if (t87 != 60990020U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = INT8_MIN;
	int32_t x418 = -1;
	int8_t x419 = INT8_MIN;
	int32_t t88 = -15;

	t88 = ((x417*(x418&x419))%x420);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x421 = -31;
	int64_t x423 = INT64_MIN;
	uint64_t x424 = UINT64_MAX;
	static uint64_t t89 = 4509664LLU;

	t89 = ((x421*(x422&x423))%x424);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x425 = UINT8_MAX;
	uint16_t x426 = 24U;
	static volatile int32_t x427 = INT32_MIN;
	uint32_t x428 = 207U;

	t90 = ((x425*(x426&x427))%x428);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x429 = -22;
	int64_t x430 = INT64_MAX;
	int32_t x431 = INT32_MAX;
	volatile int64_t t91 = -346176744446201671LL;

	t91 = ((x429*(x430&x431))%x432);

	if (t91 != -244LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x434 = 2U;
	uint16_t x435 = 230U;
	uint32_t x436 = 204U;
	uint32_t t92 = 203U;

	t92 = ((x433*(x434&x435))%x436);

	if (t92 != 50U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x441 = INT64_MIN;
	int64_t x442 = INT64_MAX;
	static uint64_t x443 = 1883804615498363LLU;
	int64_t x444 = 2545457LL;
	uint64_t t93 = 1026005520LLU;

	t93 = ((x441*(x442&x443))%x444);

	if (t93 != 1459444LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x449 = 985;
	volatile int16_t x450 = INT16_MAX;
	int32_t x451 = INT32_MIN;
	uint64_t x452 = 12322114LLU;

	t94 = ((x449*(x450&x451))%x452);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x453 = UINT16_MAX;
	uint8_t x454 = UINT8_MAX;
	int8_t x455 = -1;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t95 = -1;

	t95 = ((x453*(x454&x455))%x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x457 = UINT8_MAX;
	uint32_t x458 = 126U;
	int8_t x459 = INT8_MAX;
	static uint64_t x460 = UINT64_MAX;
	uint64_t t96 = 99783657718LLU;

	t96 = ((x457*(x458&x459))%x460);

	if (t96 != 32130LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x461 = UINT64_MAX;
	uint16_t x462 = 7483U;
	int32_t x463 = -1;
	volatile int32_t x464 = 57;
	uint64_t t97 = 2132924002864LLU;

	t97 = ((x461*(x462&x463))%x464);

	if (t97 != 39LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x466 = UINT64_MAX;
	uint64_t x467 = UINT64_MAX;
	int32_t x468 = 1092;
	volatile uint64_t t98 = 1051373904LLU;

	t98 = ((x465*(x466&x467))%x468);

	if (t98 != 249LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x473 = UINT64_MAX;
	uint16_t x474 = 2682U;
	static int8_t x475 = 0;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t99 = 764357599545279273LLU;

	t99 = ((x473*(x474&x475))%x476);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

