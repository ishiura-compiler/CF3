#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int64_t t0 = 41LL;
volatile uint32_t x6 = UINT32_MAX;
int64_t x7 = -237509878647047LL;
uint64_t x9 = 60305905524415LLU;
static volatile uint32_t t3 = 40207U;
int32_t x21 = -1;
volatile uint32_t t5 = 1414U;
int16_t x25 = -304;
int8_t x26 = 11;
int64_t x32 = INT64_MIN;
volatile int32_t x42 = -1;
uint16_t x44 = 7U;
volatile int16_t x45 = -1;
volatile uint8_t x52 = 57U;
static int64_t t12 = 496090447714LL;
static int32_t x78 = -1;
uint32_t x79 = 603U;
uint32_t x87 = UINT32_MAX;
int16_t x91 = 99;
static int16_t x94 = 3267;
volatile int64_t x107 = -5854657824469LL;
volatile uint32_t x108 = 431U;
static uint16_t x114 = UINT16_MAX;
int8_t x121 = -40;
static int32_t x123 = -1;
uint32_t x130 = UINT32_MAX;
int8_t x131 = INT8_MAX;
volatile uint8_t x132 = UINT8_MAX;
uint8_t x134 = UINT8_MAX;
static volatile int16_t x136 = INT16_MIN;
int32_t t31 = 423021898;
volatile int32_t t33 = -4178674;
int32_t t34 = -1;
volatile int64_t x157 = INT64_MIN;
int32_t t36 = 1;
uint32_t x182 = UINT32_MAX;
volatile uint64_t t40 = 968027674481800LLU;
int8_t x185 = INT8_MIN;
uint64_t t43 = 308918929644574LLU;
uint16_t x202 = 8U;
uint8_t x203 = UINT8_MAX;
uint16_t x205 = 0U;
static uint16_t x206 = 2022U;
int32_t t47 = 0;
static int64_t x214 = INT64_MAX;
volatile int32_t t49 = -118;
volatile int64_t x221 = -1LL;
volatile int16_t x222 = -1;
static int64_t x223 = -1LL;
volatile uint32_t x239 = UINT32_MAX;
int16_t x240 = INT16_MIN;
volatile int32_t x261 = -1;
uint64_t x264 = 83268945LLU;
int32_t t58 = 20;
int8_t x271 = INT8_MIN;
static int32_t t63 = -26799;
int64_t x289 = 13735456063LL;
uint32_t t64 = 86U;
int8_t x294 = INT8_MIN;
uint32_t x296 = 5U;
int8_t x298 = INT8_MAX;
int32_t x299 = -1;
static volatile uint32_t t66 = 123U;
int32_t t70 = 4231;
int64_t x317 = INT64_MAX;
int16_t x318 = INT16_MIN;
volatile int32_t t73 = 7813999;
volatile uint64_t x333 = UINT64_MAX;
volatile int32_t x339 = INT32_MIN;
uint64_t t77 = 2216914205562339446LLU;
uint8_t x347 = 1U;
static int8_t x358 = 0;
volatile int32_t t80 = 21655328;
int32_t x362 = INT32_MAX;
static int16_t x363 = 18;
volatile uint64_t x370 = 108329969128LLU;
uint8_t x372 = 7U;
volatile int32_t t82 = -481447058;
int32_t x379 = 4823104;
static volatile int32_t t85 = 47;
static int16_t x386 = INT16_MIN;
int16_t x387 = INT16_MAX;
int64_t t87 = -4085682LL;
volatile int64_t t90 = 4722428720LL;
uint64_t x409 = 873387LLU;
uint32_t x410 = 9954U;
uint32_t x411 = 6474174U;
static int64_t x414 = INT64_MIN;
static int64_t x415 = 3888374641632LL;
volatile int64_t t93 = 7264786501268168LL;
static int64_t t94 = -2662LL;
static volatile int16_t x434 = INT16_MIN;
uint8_t x440 = UINT8_MAX;
static int32_t x442 = 224;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MIN;

	t0 = ((x1<=x2)|(x3-x4));

	if (t0 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 48405461836393296LLU;
	uint32_t x8 = 1852099U;
	int64_t t1 = -1LL;

	t1 = ((x5<=x6)|(x7-x8));

	if (t1 != -237509880499146LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 23594282U;
	uint32_t x11 = 8893U;
	int64_t x12 = 12359976800LL;
	volatile int64_t t2 = 1215LL;

	t2 = ((x9<=x10)|(x11-x12));

	if (t2 != -12359967907LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 104U;
	int16_t x14 = -626;
	static int8_t x15 = INT8_MIN;
	uint32_t x16 = UINT32_MAX;

	t3 = ((x13<=x14)|(x15-x16));

	if (t3 != 4294967169U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MAX;
	static int16_t x19 = INT16_MIN;
	uint32_t x20 = 32638996U;
	volatile uint32_t t4 = 55150U;

	t4 = ((x17<=x18)|(x19-x20));

	if (t4 != 4262295533U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = INT64_MAX;
	static int8_t x23 = 3;
	uint32_t x24 = 0U;

	t5 = ((x21<=x22)|(x23-x24));

	if (t5 != 3U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x27 = 7690809223448363268LLU;
	volatile int16_t x28 = -3697;
	uint64_t t6 = 8084182875797LLU;

	t6 = ((x25<=x26)|(x27-x28));

	if (t6 != 7690809223448366965LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 187;
	static int32_t x30 = -513;
	static int16_t x31 = INT16_MIN;
	volatile int64_t t7 = -7641583LL;

	t7 = ((x29<=x30)|(x31-x32));

	if (t7 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	uint16_t x34 = 156U;
	volatile int16_t x35 = INT16_MAX;
	uint16_t x36 = 7461U;
	int32_t t8 = 69035299;

	t8 = ((x33<=x34)|(x35-x36));

	if (t8 != 25306) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MAX;
	int32_t t9 = -1;

	t9 = ((x37<=x38)|(x39-x40));

	if (t9 != -255) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	volatile int16_t x43 = INT16_MAX;
	volatile int32_t t10 = 961517466;

	t10 = ((x41<=x42)|(x43-x44));

	if (t10 != 32761) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	uint64_t x47 = 16021535994268638LLU;
	volatile uint16_t x48 = 680U;
	volatile uint64_t t11 = 230012070542569970LLU;

	t11 = ((x45<=x46)|(x47-x48));

	if (t11 != 16021535994267958LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 0;
	uint64_t x50 = UINT64_MAX;
	static int64_t x51 = INT64_MAX;

	t12 = ((x49<=x50)|(x51-x52));

	if (t12 != 9223372036854775751LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 940078309950LLU;
	volatile int64_t x54 = -1LL;
	uint8_t x55 = 7U;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = -561;

	t13 = ((x53<=x54)|(x55-x56));

	if (t13 != 135) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 56U;
	uint16_t x62 = 186U;
	int8_t x63 = -1;
	int16_t x64 = 651;
	static int32_t t14 = -523217;

	t14 = ((x61<=x62)|(x63-x64));

	if (t14 != -651) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = 22U;
	volatile uint32_t x66 = 7394546U;
	volatile uint64_t x67 = UINT64_MAX;
	uint32_t x68 = UINT32_MAX;
	static uint64_t t15 = 110374LLU;

	t15 = ((x65<=x66)|(x67-x68));

	if (t15 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -1;
	uint8_t x74 = 0U;
	uint16_t x75 = 60U;
	int64_t x76 = INT64_MAX;
	int64_t t16 = 5889110118802LL;

	t16 = ((x73<=x74)|(x75-x76));

	if (t16 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MAX;
	uint8_t x80 = 3U;
	uint32_t t17 = 12120U;

	t17 = ((x77<=x78)|(x79-x80));

	if (t17 != 600U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 0;
	int64_t x82 = 1LL;
	static uint64_t x83 = UINT64_MAX;
	volatile int64_t x84 = INT64_MIN;
	volatile uint64_t t18 = 72377755LLU;

	t18 = ((x81<=x82)|(x83-x84));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 79313586LL;
	int8_t x86 = INT8_MIN;
	uint32_t x88 = 142958671U;
	volatile uint32_t t19 = 5U;

	t19 = ((x85<=x86)|(x87-x88));

	if (t19 != 4152008624U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -18823227LL;
	uint16_t x90 = 35U;
	static int16_t x92 = -1484;
	int32_t t20 = 152;

	t20 = ((x89<=x90)|(x91-x92));

	if (t20 != 1583) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = INT32_MIN;
	int8_t x95 = -1;
	uint8_t x96 = 27U;
	int32_t t21 = -696;

	t21 = ((x93<=x94)|(x95-x96));

	if (t21 != -27) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = -1;
	int64_t x98 = -1LL;
	uint8_t x99 = 1U;
	int16_t x100 = INT16_MAX;
	static int32_t t22 = -465121;

	t22 = ((x97<=x98)|(x99-x100));

	if (t22 != -32765) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = 36476LL;
	uint64_t x102 = 2262235181826LLU;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MAX;
	volatile uint64_t t23 = 2007592LLU;

	t23 = ((x101<=x102)|(x103-x104));

	if (t23 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	uint8_t x106 = 15U;
	int64_t t24 = -170667LL;

	t24 = ((x105<=x106)|(x107-x108));

	if (t24 != -5854657824899LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 3;
	int16_t x110 = INT16_MAX;
	static int32_t x111 = 14;
	uint16_t x112 = 7U;
	int32_t t25 = 1201728;

	t25 = ((x109<=x110)|(x111-x112));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 1852750435LLU;
	uint8_t x115 = 14U;
	uint64_t x116 = 28803LLU;
	static uint64_t t26 = 627254514497847890LLU;

	t26 = ((x113<=x114)|(x115-x116));

	if (t26 != 18446744073709522827LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = INT8_MIN;
	int64_t x118 = -1LL;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 13U;
	uint32_t t27 = 25367U;

	t27 = ((x117<=x118)|(x119-x120));

	if (t27 != 4294967155U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = 66277454095LL;
	volatile int16_t x124 = 8;
	static volatile int32_t t28 = -1252;

	t28 = ((x121<=x122)|(x123-x124));

	if (t28 != -9) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	int8_t x126 = -1;
	static int64_t x127 = -1LL;
	volatile int16_t x128 = 85;
	int64_t t29 = -3LL;

	t29 = ((x125<=x126)|(x127-x128));

	if (t29 != -85LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = UINT32_MAX;
	int32_t t30 = -29;

	t30 = ((x129<=x130)|(x131-x132));

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	int32_t x135 = -459889;

	t31 = ((x133<=x134)|(x135-x136));

	if (t31 != -427121) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = INT16_MIN;
	static volatile int64_t x139 = -1LL;
	int64_t x140 = -1830452977296LL;
	int64_t t32 = 11436356280526LL;

	t32 = ((x137<=x138)|(x139-x140));

	if (t32 != 1830452977295LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 1654278304167543LLU;
	static int8_t x142 = -1;
	static volatile uint16_t x143 = 235U;
	int16_t x144 = INT16_MIN;

	t33 = ((x141<=x142)|(x143-x144));

	if (t33 != 33003) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = 21;
	int8_t x154 = 2;
	int8_t x155 = INT8_MAX;
	int32_t x156 = -1;

	t34 = ((x153<=x154)|(x155-x156));

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x158 = INT64_MIN;
	int8_t x159 = -1;
	int64_t x160 = 178781597LL;
	static volatile int64_t t35 = 40031341744607622LL;

	t35 = ((x157<=x158)|(x159-x160));

	if (t35 != -178781597LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = 836893LL;
	static uint64_t x162 = 23400237990672353LLU;
	uint16_t x163 = UINT16_MAX;
	volatile uint16_t x164 = 764U;

	t36 = ((x161<=x162)|(x163-x164));

	if (t36 != 64771) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -1LL;
	static int16_t x170 = -1;
	volatile int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MIN;
	static int32_t t37 = 520758;

	t37 = ((x169<=x170)|(x171-x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -5901;
	static int64_t x174 = 25055668880202712LL;
	int16_t x175 = INT16_MAX;
	uint32_t x176 = 77U;
	volatile uint32_t t38 = 60U;

	t38 = ((x173<=x174)|(x175-x176));

	if (t38 != 32691U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x177 = 78LLU;
	int32_t x178 = INT32_MAX;
	volatile int16_t x179 = -5;
	uint16_t x180 = 62U;
	volatile int32_t t39 = -41;

	t39 = ((x177<=x178)|(x179-x180));

	if (t39 != -67) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MAX;
	int16_t x183 = 3;
	uint64_t x184 = 10062086185044655LLU;

	t40 = ((x181<=x182)|(x183-x184));

	if (t40 != 18436681987524506965LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x186 = UINT8_MAX;
	volatile uint8_t x187 = 99U;
	static volatile uint32_t x188 = UINT32_MAX;
	volatile uint32_t t41 = 3236U;

	t41 = ((x185<=x186)|(x187-x188));

	if (t41 != 101U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MAX;
	volatile int8_t x191 = 1;
	volatile uint8_t x192 = 0U;
	volatile int32_t t42 = -140;

	t42 = ((x189<=x190)|(x191-x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = 1;
	int16_t x194 = INT16_MIN;
	uint64_t x195 = 116381LLU;
	uint32_t x196 = 1438956U;

	t43 = ((x193<=x194)|(x195-x196));

	if (t43 != 18446744073708229041LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = 3LL;
	int64_t x198 = 8868626645LL;
	uint16_t x199 = 1715U;
	uint32_t x200 = 7U;
	volatile uint32_t t44 = 1541126424U;

	t44 = ((x197<=x198)|(x199-x200));

	if (t44 != 1709U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -3152425LL;
	int64_t x204 = -32343634LL;
	static volatile int64_t t45 = 308735745LL;

	t45 = ((x201<=x202)|(x203-x204));

	if (t45 != 32343889LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = -13549;
	uint32_t t46 = 6648U;

	t46 = ((x205<=x206)|(x207-x208));

	if (t46 != 13549U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 45LLU;
	int8_t x210 = -1;
	int16_t x211 = INT16_MAX;
	uint8_t x212 = 13U;

	t47 = ((x209<=x210)|(x211-x212));

	if (t47 != 32755) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -1LL;
	int32_t x215 = -22;
	int16_t x216 = INT16_MAX;
	static volatile int32_t t48 = 486;

	t48 = ((x213<=x214)|(x215-x216));

	if (t48 != -32789) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -125;
	volatile int64_t x218 = INT64_MIN;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;

	t49 = ((x217<=x218)|(x219-x220));

	if (t49 != -65663) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x224 = 5;
	static volatile int64_t t50 = 3743390195934577LL;

	t50 = ((x221<=x222)|(x223-x224));

	if (t50 != -5LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = 33927U;
	static uint64_t x227 = UINT64_MAX;
	volatile int32_t x228 = -101703;
	uint64_t t51 = 9305536577234LLU;

	t51 = ((x225<=x226)|(x227-x228));

	if (t51 != 101702LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = 5U;
	int32_t x230 = INT32_MAX;
	volatile uint64_t x231 = UINT64_MAX;
	static uint8_t x232 = UINT8_MAX;
	volatile uint64_t t52 = 171310618530688LLU;

	t52 = ((x229<=x230)|(x231-x232));

	if (t52 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = 11576448LL;
	volatile int8_t x238 = -15;
	static uint32_t t53 = 4028657U;

	t53 = ((x237<=x238)|(x239-x240));

	if (t53 != 32767U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = INT32_MIN;
	uint16_t x250 = 0U;
	static volatile int8_t x251 = INT8_MIN;
	uint32_t x252 = 111U;
	static uint32_t t54 = 230732106U;

	t54 = ((x249<=x250)|(x251-x252));

	if (t54 != 4294967057U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x253 = 43635116649631199LL;
	volatile int64_t x254 = INT64_MIN;
	static volatile uint16_t x255 = 0U;
	uint8_t x256 = UINT8_MAX;
	int32_t t55 = -28;

	t55 = ((x253<=x254)|(x255-x256));

	if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x257 = 35;
	static int8_t x258 = INT8_MIN;
	volatile int32_t x259 = -4570;
	uint32_t x260 = 501U;
	volatile uint32_t t56 = 174601561U;

	t56 = ((x257<=x258)|(x259-x260));

	if (t56 != 4294962225U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x262 = INT64_MAX;
	uint8_t x263 = 71U;
	static uint64_t t57 = 4267002863LLU;

	t57 = ((x261<=x262)|(x263-x264));

	if (t57 != 18446744073626282743LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x265 = UINT8_MAX;
	uint16_t x266 = UINT16_MAX;
	static int8_t x267 = INT8_MAX;
	int16_t x268 = 3;

	t58 = ((x265<=x266)|(x267-x268));

	if (t58 != 125) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x269 = -1LL;
	uint8_t x270 = 41U;
	static int16_t x272 = -1836;
	int32_t t59 = -791922855;

	t59 = ((x269<=x270)|(x271-x272));

	if (t59 != 1709) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x273 = -668LL;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int8_t x276 = -4;
	static int32_t t60 = -13;

	t60 = ((x273<=x274)|(x275-x276));

	if (t60 != -32764) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x277 = 58434868934506LL;
	int8_t x278 = -1;
	uint16_t x279 = 0U;
	int32_t x280 = -13338;
	volatile int32_t t61 = 117797296;

	t61 = ((x277<=x278)|(x279-x280));

	if (t61 != 13338) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x281 = INT8_MAX;
	static int8_t x282 = -24;
	int64_t x283 = INT64_MIN;
	volatile uint64_t x284 = UINT64_MAX;
	volatile uint64_t t62 = 443189354093643LLU;

	t62 = ((x281<=x282)|(x283-x284));

	if (t62 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = 1;
	static volatile int16_t x286 = INT16_MAX;
	static int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;

	t63 = ((x285<=x286)|(x287-x288));

	if (t63 != 2147483521) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x290 = -1;
	int8_t x291 = -1;
	uint32_t x292 = 136548801U;

	t64 = ((x289<=x290)|(x291-x292));

	if (t64 != 4158418494U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = -75640;
	uint8_t x295 = UINT8_MAX;
	volatile uint32_t t65 = 629U;

	t65 = ((x293<=x294)|(x295-x296));

	if (t65 != 251U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x297 = 10U;
	uint32_t x300 = 3U;

	t66 = ((x297<=x298)|(x299-x300));

	if (t66 != 4294967293U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x301 = 18U;
	int32_t x302 = INT32_MAX;
	int8_t x303 = -1;
	static uint32_t x304 = 32299145U;
	uint32_t t67 = 4185713U;

	t67 = ((x301<=x302)|(x303-x304));

	if (t67 != 4262668151U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x305 = UINT64_MAX;
	static volatile int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t68 = 42266;

	t68 = ((x305<=x306)|(x307-x308));

	if (t68 != -32640) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x310 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = -30054386;
	static volatile uint64_t t69 = 325611900766818LLU;

	t69 = ((x309<=x310)|(x311-x312));

	if (t69 != 30054385LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -2;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = -1;

	t70 = ((x313<=x314)|(x315-x316));

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x319 = INT32_MIN;
	volatile int64_t x320 = INT64_MIN;
	static int64_t t71 = 265889721387LL;

	t71 = ((x317<=x318)|(x319-x320));

	if (t71 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MAX;
	uint64_t x323 = 467459LLU;
	static int64_t x324 = -1LL;
	uint64_t t72 = 2658394584LLU;

	t72 = ((x321<=x322)|(x323-x324));

	if (t72 != 467461LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = -1;
	int32_t x326 = -1;
	uint16_t x327 = 181U;
	int16_t x328 = INT16_MAX;

	t73 = ((x325<=x326)|(x327-x328));

	if (t73 != -32585) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x329 = UINT16_MAX;
	int64_t x330 = -1LL;
	volatile int64_t x331 = -9246389210LL;
	volatile uint16_t x332 = 150U;
	int64_t t74 = 34002LL;

	t74 = ((x329<=x330)|(x331-x332));

	if (t74 != -9246389360LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x334 = 139090266LLU;
	int16_t x335 = 3056;
	static int16_t x336 = -1;
	volatile int32_t t75 = 28005;

	t75 = ((x333<=x334)|(x335-x336));

	if (t75 != 3057) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x337 = INT16_MIN;
	uint32_t x338 = UINT32_MAX;
	volatile int32_t x340 = INT32_MIN;
	int32_t t76 = 4;

	t76 = ((x337<=x338)|(x339-x340));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	uint64_t x343 = 27991381242959LLU;
	uint64_t x344 = 9630261773594859LLU;

	t77 = ((x341<=x342)|(x343-x344));

	if (t77 != 18437141803317199716LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = 9;
	static volatile int8_t x346 = -23;
	int8_t x348 = -1;
	int32_t t78 = -16734;

	t78 = ((x345<=x346)|(x347-x348));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = 3401U;
	uint64_t x352 = 99406518138686634LLU;
	volatile uint64_t t79 = 118LLU;

	t79 = ((x349<=x350)|(x351-x352));

	if (t79 != 18347337555570868383LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x357 = UINT32_MAX;
	uint8_t x359 = 122U;
	volatile uint16_t x360 = 17485U;

	t80 = ((x357<=x358)|(x359-x360));

	if (t80 != -17363) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = -1030397608LL;
	int8_t x364 = INT8_MAX;
	int32_t t81 = 22;

	t81 = ((x361<=x362)|(x363-x364));

	if (t81 != -109) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = 0;
	int8_t x371 = INT8_MAX;

	t82 = ((x369<=x370)|(x371-x372));

	if (t82 != 121) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MAX;
	int16_t x375 = 0;
	int32_t x376 = INT32_MAX;
	static int32_t t83 = 1810811;

	t83 = ((x373<=x374)|(x375-x376));

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x377 = UINT8_MAX;
	static uint64_t x378 = 492957981059934LLU;
	int8_t x380 = -1;
	int32_t t84 = 66543;

	t84 = ((x377<=x378)|(x379-x380));

	if (t84 != 4823105) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = INT64_MAX;
	uint8_t x382 = 1U;
	int8_t x383 = 0;
	volatile int16_t x384 = 14412;

	t85 = ((x381<=x382)|(x383-x384));

	if (t85 != -14412) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = INT32_MIN;
	int64_t x388 = -1995819363515LL;
	int64_t t86 = -932287092LL;

	t86 = ((x385<=x386)|(x387-x388));

	if (t86 != 1995819396283LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x390 = UINT8_MAX;
	static int16_t x391 = 238;
	static int64_t x392 = -7556328LL;

	t87 = ((x389<=x390)|(x391-x392));

	if (t87 != 7556567LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = 98625539LL;
	uint32_t x394 = 271081U;
	int64_t x395 = -69189736638148LL;
	volatile int8_t x396 = INT8_MIN;
	int64_t t88 = 133LL;

	t88 = ((x393<=x394)|(x395-x396));

	if (t88 != -69189736638020LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x397 = 1U;
	static volatile int32_t x398 = 330135;
	volatile int64_t x399 = -1LL;
	int32_t x400 = INT32_MIN;
	int64_t t89 = -692385884519LL;

	t89 = ((x397<=x398)|(x399-x400));

	if (t89 != 2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x405 = -1;
	static int8_t x406 = -1;
	static int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;

	t90 = ((x405<=x406)|(x407-x408));

	if (t90 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x412 = INT8_MIN;
	uint32_t t91 = 167724U;

	t91 = ((x409<=x410)|(x411-x412));

	if (t91 != 6474302U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = 113U;
	uint64_t x416 = 512293429262948LLU;
	volatile uint64_t t92 = 844LLU;

	t92 = ((x413<=x414)|(x415-x416));

	if (t92 != 18446235668654930300LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x421 = INT16_MIN;
	uint32_t x422 = 17991U;
	static int8_t x423 = INT8_MIN;
	volatile int64_t x424 = INT64_MIN;

	t93 = ((x421<=x422)|(x423-x424));

	if (t93 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = INT64_MIN;
	volatile int8_t x426 = INT8_MAX;
	int32_t x427 = -4077443;
	int64_t x428 = -15977686007LL;

	t94 = ((x425<=x426)|(x427-x428));

	if (t94 != 15973608565LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = INT64_MIN;
	uint32_t x430 = 22729885U;
	int32_t x431 = -50;
	static uint16_t x432 = 199U;
	volatile int32_t t95 = 0;

	t95 = ((x429<=x430)|(x431-x432));

	if (t95 != -249) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x433 = INT32_MIN;
	int64_t x435 = -1LL;
	int64_t x436 = 125LL;
	volatile int64_t t96 = 3709620466LL;

	t96 = ((x433<=x434)|(x435-x436));

	if (t96 != -125LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = INT8_MIN;
	static int32_t x438 = INT32_MIN;
	static volatile int16_t x439 = INT16_MIN;
	int32_t t97 = 1;

	t97 = ((x437<=x438)|(x439-x440));

	if (t97 != -33023) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MAX;
	static uint64_t x443 = 16LLU;
	int32_t x444 = -1;
	volatile uint64_t t98 = 2854235943LLU;

	t98 = ((x441<=x442)|(x443-x444));

	if (t98 != 17LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x445 = 80U;
	int32_t x446 = -81083;
	static uint64_t x447 = 12LLU;
	static volatile int8_t x448 = INT8_MAX;
	volatile uint64_t t99 = 68640337LLU;

	t99 = ((x445<=x446)|(x447-x448));

	if (t99 != 18446744073709551501LLU) { NG(); } else { ; }
	
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

