#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = -1;
volatile int32_t t0 = -66679;
uint16_t x5 = 14234U;
volatile int64_t x6 = -1LL;
uint8_t x11 = UINT8_MAX;
int16_t x13 = -1;
uint64_t x14 = 78724LLU;
static volatile int16_t x17 = 1;
uint8_t x20 = 3U;
volatile uint32_t x21 = 77U;
int64_t x24 = INT64_MIN;
volatile int64_t t5 = -66451395LL;
static volatile uint16_t x29 = 342U;
int8_t x37 = -20;
int64_t x57 = INT64_MIN;
uint32_t x63 = 190983348U;
int16_t x64 = INT16_MAX;
uint64_t x67 = 4017978473594180LLU;
uint32_t x70 = 545090U;
uint16_t x72 = 1276U;
int32_t x76 = -1;
uint16_t x82 = 1U;
static int32_t t17 = 8811438;
static uint64_t x88 = 359596479540044712LLU;
int32_t x91 = -1;
static int32_t x98 = INT32_MIN;
uint8_t x99 = UINT8_MAX;
volatile uint64_t t23 = 199415861LLU;
volatile int64_t x114 = INT64_MIN;
int32_t x115 = 114;
uint8_t x127 = 22U;
int64_t t28 = -9856LL;
int8_t x137 = -25;
uint8_t x138 = UINT8_MAX;
int16_t x140 = INT16_MIN;
uint8_t x147 = 7U;
volatile int64_t t32 = -11141347044636LL;
volatile int32_t x151 = 552;
volatile uint64_t t35 = 227151061591427775LLU;
volatile int32_t x164 = -1;
static volatile int32_t x166 = 8;
volatile int8_t x167 = INT8_MIN;
static volatile int32_t t37 = 776637;
static uint64_t t38 = 313LLU;
int8_t x173 = -1;
int64_t x175 = -1LL;
int8_t x176 = INT8_MIN;
int16_t x183 = -172;
volatile uint32_t x187 = 264666485U;
volatile int8_t x196 = INT8_MIN;
volatile uint8_t x198 = 6U;
static int64_t x200 = INT64_MIN;
uint8_t x206 = 6U;
int32_t x209 = -1;
int16_t x212 = INT16_MIN;
volatile int8_t x213 = 13;
int32_t t49 = 228216;
uint32_t x217 = UINT32_MAX;
int16_t x220 = -1;
static volatile int64_t t50 = 9156381775502259LL;
volatile int8_t x223 = 3;
int64_t t52 = 11548LL;
uint64_t x229 = 722407364LLU;
static int16_t x236 = 2;
int8_t x239 = -7;
int32_t x244 = -1;
volatile int32_t x246 = INT32_MIN;
volatile uint64_t t60 = 483590111578LLU;
int16_t x271 = INT16_MAX;
uint16_t x273 = 0U;
int32_t t64 = -31711311;
volatile uint8_t x280 = 58U;
static int16_t x281 = INT16_MIN;
static volatile uint16_t x282 = UINT16_MAX;
static volatile int32_t x290 = -1;
uint16_t x294 = 0U;
uint8_t x299 = 46U;
volatile int64_t t71 = 51LL;
uint64_t x311 = UINT64_MAX;
volatile int8_t x315 = INT8_MIN;
static int32_t x317 = -61082510;
int32_t x324 = -1;
static volatile int32_t t76 = 61;
uint64_t t77 = 2LLU;
int8_t x337 = INT8_MAX;
int8_t x340 = INT8_MIN;
int8_t x345 = INT8_MIN;
int64_t x354 = 13231153LL;
int16_t x361 = INT16_MIN;
static volatile int64_t t86 = -92399984263400LL;
static uint16_t x381 = 20919U;
int8_t x384 = 9;
static uint16_t x388 = 46U;
int64_t x396 = INT64_MIN;
static volatile uint16_t x397 = 13U;
volatile uint16_t x401 = 157U;
uint64_t x410 = 287538750012715307LLU;
volatile uint64_t x412 = UINT64_MAX;
int32_t x417 = 26279023;
int8_t x418 = 4;
static volatile int64_t t97 = -12006073687514689LL;
static int16_t x425 = -1;


void f0(void) {
	static int32_t x1 = -1027636037;
	volatile int32_t x2 = -285230317;
	int16_t x3 = INT16_MAX;

	t0 = (((x1&x2)+x3)|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = INT64_MIN;
	int32_t x8 = -5384;
	int64_t t1 = -52LL;

	t1 = (((x5&x6)+x7)|x8);

	if (t1 != -6LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -126075919;
	uint32_t x10 = 58884181U;
	int16_t x12 = 7504;
	uint32_t t2 = 6782547U;

	t2 = (((x9&x10)+x11)|x12);

	if (t2 != 7504U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = 841;
	volatile int32_t x16 = 1466;
	volatile uint64_t t3 = 300LLU;

	t3 = (((x13&x14)+x15)|x16);

	if (t3 != 79871LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x18 = 22U;
	volatile uint16_t x19 = 364U;
	static int32_t t4 = -413402315;

	t4 = (((x17&x18)+x19)|x20);

	if (t4 != 367) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = UINT8_MAX;
	int32_t x23 = INT32_MAX;

	t5 = (((x21&x22)+x23)|x24);

	if (t5 != -9223372034707292084LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = 5459216601LLU;
	int8_t x31 = -3;
	int64_t x32 = INT64_MIN;
	static uint64_t t6 = 3783LLU;

	t6 = (((x29&x30)+x31)|x32);

	if (t6 != 9223372036854775885LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	static uint16_t x35 = 57U;
	int32_t x36 = INT32_MAX;
	volatile uint64_t t7 = 479992242712901LLU;

	t7 = (((x33&x34)+x35)|x36);

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = INT64_MAX;
	static volatile uint64_t x39 = UINT64_MAX;
	int16_t x40 = INT16_MIN;
	uint64_t t8 = 6LLU;

	t8 = (((x37&x38)+x39)|x40);

	if (t8 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 412534227U;
	static int64_t x46 = INT64_MAX;
	int16_t x47 = -1;
	static uint8_t x48 = 1U;
	volatile int64_t t9 = -1541710389LL;

	t9 = (((x45&x46)+x47)|x48);

	if (t9 != 412534227LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = 9;
	volatile int16_t x50 = -1;
	int8_t x51 = 1;
	static int64_t x52 = INT64_MAX;
	int64_t t10 = INT64_MAX;

	t10 = (((x49&x50)+x51)|x52);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x58 = INT8_MIN;
	uint16_t x59 = 1U;
	int16_t x60 = -66;
	volatile int64_t t11 = 100068LL;

	t11 = (((x57&x58)+x59)|x60);

	if (t11 != -65LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 1U;
	volatile int8_t x62 = INT8_MIN;
	volatile uint32_t t12 = 0U;

	t12 = (((x61&x62)+x63)|x64);

	if (t12 != 191004671U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x65 = 13U;
	int16_t x66 = INT16_MAX;
	uint64_t x68 = UINT64_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x65&x66)+x67)|x68);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 517319433277697LLU;
	static volatile int64_t x71 = INT64_MIN;
	volatile uint64_t t14 = 934543LLU;

	t14 = (((x69&x70)+x71)|x72);

	if (t14 != 9223372036855322108LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x73 = 341175207378LLU;
	int64_t x74 = -1LL;
	uint16_t x75 = UINT16_MAX;
	static volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x73&x74)+x75)|x76);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = UINT16_MAX;
	static volatile int64_t x79 = INT64_MIN;
	static int32_t x80 = -1200626;
	static int64_t t16 = 1LL;

	t16 = (((x77&x78)+x79)|x80);

	if (t16 != -1200626LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -1;
	int16_t x83 = INT16_MIN;
	static int32_t x84 = INT32_MIN;

	t17 = (((x81&x82)+x83)|x84);

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 128346U;
	int64_t x86 = -242673800LL;
	static int64_t x87 = INT64_MIN;
	volatile uint64_t t18 = 2250410LLU;

	t18 = (((x85&x86)+x87)|x88);

	if (t18 != 9582968516394825720LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = INT16_MAX;
	int64_t x90 = INT64_MAX;
	uint8_t x92 = 2U;
	volatile int64_t t19 = -46955LL;

	t19 = (((x89&x90)+x91)|x92);

	if (t19 != 32766LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = -15252831;
	static volatile uint16_t x94 = 123U;
	static uint8_t x95 = UINT8_MAX;
	int8_t x96 = -1;
	volatile int32_t t20 = -17;

	t20 = (((x93&x94)+x95)|x96);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 124357U;
	uint32_t x100 = 453218231U;
	uint32_t t21 = 2496U;

	t21 = (((x97&x98)+x99)|x100);

	if (t21 != 453218303U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 62U;
	volatile uint32_t x102 = 7U;
	uint64_t x103 = 3740614745LLU;
	uint16_t x104 = 22879U;
	uint64_t t22 = 382LLU;

	t22 = (((x101&x102)+x103)|x104);

	if (t22 != 3740621151LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 782266949LLU;
	volatile int16_t x110 = INT16_MAX;
	int32_t x111 = -265915115;
	static volatile uint8_t x112 = UINT8_MAX;

	t23 = (((x109&x110)+x111)|x112);

	if (t23 != 18446744073443665919LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	static uint32_t x116 = UINT32_MAX;
	volatile int64_t t24 = -31658058284253LL;

	t24 = (((x113&x114)+x115)|x116);

	if (t24 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 275;
	int16_t x118 = INT16_MAX;
	static uint64_t x119 = 38LLU;
	int64_t x120 = -1LL;
	static volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x117&x118)+x119)|x120);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -1;
	volatile uint16_t x122 = 26U;
	int8_t x123 = INT8_MAX;
	volatile int32_t x124 = -1;
	int32_t t26 = -4606904;

	t26 = (((x121&x122)+x123)|x124);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 406354LL;
	static int8_t x126 = INT8_MIN;
	int8_t x128 = INT8_MIN;
	int64_t t27 = -52789151302293LL;

	t27 = (((x125&x126)+x127)|x128);

	if (t27 != -106LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x129 = INT64_MAX;
	uint8_t x130 = 3U;
	static uint8_t x131 = 3U;
	int8_t x132 = INT8_MIN;

	t28 = (((x129&x130)+x131)|x132);

	if (t28 != -122LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x133 = -1LL;
	static volatile int64_t x134 = -6574264717LL;
	int32_t x135 = -60249;
	uint64_t x136 = 909630662LLU;
	static volatile uint64_t t29 = 569933754177LLU;

	t29 = (((x133&x134)+x135)|x136);

	if (t29 != 18446744067237208030LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x139 = INT8_MIN;
	int32_t t30 = 11130333;

	t30 = (((x137&x138)+x139)|x140);

	if (t30 != -32665) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 29U;
	volatile uint8_t x142 = 1U;
	volatile int64_t x143 = INT64_MIN;
	static uint8_t x144 = 25U;
	volatile int64_t t31 = 1LL;

	t31 = (((x141&x142)+x143)|x144);

	if (t31 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = UINT16_MAX;
	static int64_t x146 = -1LL;
	uint16_t x148 = UINT16_MAX;

	t32 = (((x145&x146)+x147)|x148);

	if (t32 != 131071LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 4LLU;
	int32_t x150 = INT32_MIN;
	int8_t x152 = INT8_MAX;
	static uint64_t t33 = 330468045901149LLU;

	t33 = (((x149&x150)+x151)|x152);

	if (t33 != 639LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x153 = 35547LL;
	int32_t x154 = -2640485;
	volatile uint64_t x155 = UINT64_MAX;
	int32_t x156 = INT32_MIN;
	static volatile uint64_t t34 = 901736LLU;

	t34 = (((x153&x154)+x155)|x156);

	if (t34 != 18446744071562100890LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MIN;
	uint8_t x159 = 0U;
	uint64_t x160 = 772864492735907LLU;

	t35 = (((x157&x158)+x159)|x160);

	if (t35 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 394;
	int32_t x162 = INT32_MAX;
	uint64_t x163 = 10854482062852743LLU;
	static uint64_t t36 = UINT64_MAX;

	t36 = (((x161&x162)+x163)|x164);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MAX;
	int8_t x168 = INT8_MIN;

	t37 = (((x165&x166)+x167)|x168);

	if (t37 != -120) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 39U;
	int32_t x170 = -44;
	uint64_t x171 = UINT64_MAX;
	static int64_t x172 = INT64_MIN;

	t38 = (((x169&x170)+x171)|x172);

	if (t38 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x174 = INT8_MAX;
	static volatile int64_t t39 = -26429582LL;

	t39 = (((x173&x174)+x175)|x176);

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 14U;
	uint32_t x178 = 33085U;
	static volatile int32_t x179 = 40698;
	static volatile int8_t x180 = 5;
	volatile uint32_t t40 = 208499009U;

	t40 = (((x177&x178)+x179)|x180);

	if (t40 != 40711U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x181 = INT16_MIN;
	int64_t x182 = -1LL;
	static int64_t x184 = INT64_MIN;
	static int64_t t41 = 179263257766LL;

	t41 = (((x181&x182)+x183)|x184);

	if (t41 != -32940LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MAX;
	static int32_t x188 = -195821966;
	volatile uint32_t t42 = 173819533U;

	t42 = (((x185&x186)+x187)|x188);

	if (t42 != 4292345719U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x189 = UINT32_MAX;
	static int32_t x190 = 165340;
	volatile uint16_t x191 = 79U;
	int32_t x192 = INT32_MAX;
	uint32_t t43 = 917509U;

	t43 = (((x189&x190)+x191)|x192);

	if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = -1;
	volatile uint16_t x195 = 32U;
	int32_t t44 = -108;

	t44 = (((x193&x194)+x195)|x196);

	if (t44 != -97) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MAX;
	int8_t x199 = -1;
	volatile int64_t t45 = 433869079941LL;

	t45 = (((x197&x198)+x199)|x200);

	if (t45 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 1LLU;
	static int8_t x202 = INT8_MIN;
	int64_t x203 = -41055651352662507LL;
	int16_t x204 = -56;
	volatile uint64_t t46 = 45LLU;

	t46 = (((x201&x202)+x203)|x204);

	if (t46 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MIN;
	int32_t x207 = -1;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (((x205&x206)+x207)|x208);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x210 = INT32_MAX;
	uint64_t x211 = 902298745889LLU;
	uint64_t t48 = 747003243538194LLU;

	t48 = (((x209&x210)+x211)|x212);

	if (t48 != 18446744073709534240LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = INT8_MAX;
	volatile int16_t x215 = -1;
	int16_t x216 = INT16_MAX;

	t49 = (((x213&x214)+x215)|x216);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x218 = 56624LL;
	uint32_t x219 = 2U;

	t50 = (((x217&x218)+x219)|x220);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MAX;
	int32_t x224 = -1;
	int32_t t51 = -25;

	t51 = (((x221&x222)+x223)|x224);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 169U;
	int8_t x226 = INT8_MIN;
	static int64_t x227 = -9830290023196951LL;
	int32_t x228 = -1;

	t52 = (((x225&x226)+x227)|x228);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x230 = 26654;
	int16_t x231 = INT16_MIN;
	int16_t x232 = 134;
	volatile uint64_t t53 = 18LLU;

	t53 = (((x229&x230)+x231)|x232);

	if (t53 != 18446744073709521030LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = 1;
	int16_t x234 = INT16_MIN;
	int8_t x235 = 31;
	int32_t t54 = 36718;

	t54 = (((x233&x234)+x235)|x236);

	if (t54 != 31) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -741LL;
	uint32_t x238 = 2786U;
	static uint64_t x240 = 32LLU;
	volatile uint64_t t55 = 186403LLU;

	t55 = (((x237&x238)+x239)|x240);

	if (t55 != 2043LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x241 = -2;
	int16_t x242 = INT16_MIN;
	int8_t x243 = INT8_MIN;
	int32_t t56 = 12935236;

	t56 = (((x241&x242)+x243)|x244);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 29U;
	static uint8_t x247 = 72U;
	int64_t x248 = -4LL;
	volatile int64_t t57 = 2119285288LL;

	t57 = (((x245&x246)+x247)|x248);

	if (t57 != -4LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x249 = 62860U;
	static int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MIN;
	volatile int32_t x252 = 0;
	volatile int64_t t58 = 4533030LL;

	t58 = (((x249&x250)+x251)|x252);

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int8_t x254 = -50;
	static int16_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (((x253&x254)+x255)|x256);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	volatile uint64_t x259 = UINT64_MAX;
	int16_t x260 = INT16_MAX;

	t60 = (((x257&x258)+x259)|x260);

	if (t60 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 549618103LLU;
	int64_t x262 = 380060175547LL;
	int64_t x263 = -1LL;
	uint16_t x264 = UINT16_MAX;
	volatile uint64_t t61 = 523793LLU;

	t61 = (((x261&x262)+x263)|x264);

	if (t61 != 541261823LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MIN;
	volatile uint8_t x266 = 61U;
	int32_t x267 = -16;
	int32_t x268 = INT32_MIN;
	volatile int32_t t62 = 51;

	t62 = (((x265&x266)+x267)|x268);

	if (t62 != -16) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MAX;
	volatile int16_t x270 = 0;
	int16_t x272 = -3;
	int32_t t63 = -9534;

	t63 = (((x269&x270)+x271)|x272);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x274 = -4;
	int8_t x275 = -8;
	int8_t x276 = INT8_MIN;

	t64 = (((x273&x274)+x275)|x276);

	if (t64 != -8) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 2U;
	uint8_t x278 = 0U;
	int32_t x279 = INT32_MAX;
	static volatile int32_t t65 = INT32_MAX;

	t65 = (((x277&x278)+x279)|x280);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	volatile int32_t t66 = INT32_MIN;

	t66 = (((x281&x282)+x283)|x284);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x285 = 11U;
	uint64_t x286 = 17866639842350948LLU;
	volatile int16_t x287 = 30;
	int64_t x288 = INT64_MAX;
	uint64_t t67 = 5LLU;

	t67 = (((x285&x286)+x287)|x288);

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = UINT32_MAX;
	static uint16_t x291 = 0U;
	static uint16_t x292 = 4U;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (((x289&x290)+x291)|x292);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x293 = INT32_MIN;
	static uint16_t x295 = UINT16_MAX;
	int16_t x296 = -916;
	volatile int32_t t69 = -237;

	t69 = (((x293&x294)+x295)|x296);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = 2700163469LLU;
	uint32_t x298 = 487836U;
	static int32_t x300 = INT32_MAX;
	uint64_t t70 = 7602790241671LLU;

	t70 = (((x297&x298)+x299)|x300);

	if (t70 != 2147483647LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1LL;
	int8_t x302 = -1;
	volatile int32_t x303 = 9462248;
	int64_t x304 = 464075102520LL;

	t71 = (((x301&x302)+x303)|x304);

	if (t71 != 464084564479LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	static int16_t x307 = INT16_MAX;
	int16_t x308 = -1;
	int64_t t72 = -114LL;

	t72 = (((x305&x306)+x307)|x308);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = 1410U;
	static int8_t x310 = INT8_MIN;
	uint16_t x312 = UINT16_MAX;
	uint64_t t73 = 2131310052147850LLU;

	t73 = (((x309&x310)+x311)|x312);

	if (t73 != 65535LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -1;
	int64_t x314 = -55LL;
	uint64_t x316 = 6051929164147813384LLU;
	static volatile uint64_t t74 = 1748251LLU;

	t74 = (((x313&x314)+x315)|x316);

	if (t74 != 18446744073709551433LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x318 = -1;
	uint64_t x319 = 109357352LLU;
	volatile uint64_t x320 = 484134303931LLU;
	uint64_t t75 = 717027839LLU;

	t75 = (((x317&x318)+x319)|x320);

	if (t75 != 484172086715LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x321 = -1;
	int32_t x322 = INT32_MAX;
	static int32_t x323 = INT32_MIN;

	t76 = (((x321&x322)+x323)|x324);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = 190002476;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -11605;
	static uint8_t x328 = 56U;

	t77 = (((x325&x326)+x327)|x328);

	if (t77 != 189990911LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MAX;
	uint32_t x330 = 38600526U;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MIN;
	int64_t t78 = 1LL;

	t78 = (((x329&x330)+x331)|x332);

	if (t78 != -9223372034707259570LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x333 = -1;
	uint64_t x334 = 2896182530LLU;
	int64_t x335 = -1LL;
	volatile int8_t x336 = -1;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (((x333&x334)+x335)|x336);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x338 = 63936215LLU;
	volatile int16_t x339 = INT16_MIN;
	static volatile uint64_t t80 = 81968LLU;

	t80 = (((x337&x338)+x339)|x340);

	if (t80 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = 206960LL;
	static uint8_t x342 = 7U;
	static int32_t x343 = 104;
	uint32_t x344 = 48455U;
	static volatile int64_t t81 = -35171285LL;

	t81 = (((x341&x342)+x343)|x344);

	if (t81 != 48495LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x346 = 1600U;
	uint64_t x347 = UINT64_MAX;
	static volatile uint16_t x348 = UINT16_MAX;
	uint64_t t82 = 12185LLU;

	t82 = (((x345&x346)+x347)|x348);

	if (t82 != 65535LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = 3145449U;
	static uint32_t x350 = 3U;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (((x349&x350)+x351)|x352);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MIN;
	static int64_t x355 = -154890590899LL;
	static int64_t x356 = -1LL;
	static volatile int64_t t84 = -3042978814960565427LL;

	t84 = (((x353&x354)+x355)|x356);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = -255913;
	static int64_t x359 = INT64_MIN;
	static volatile int64_t x360 = 96295LL;
	volatile int64_t t85 = -445077039314278460LL;

	t85 = (((x357&x358)+x359)|x360);

	if (t85 != -9223372036854679433LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x362 = INT8_MIN;
	int16_t x363 = 1;
	static int64_t x364 = -1LL;

	t86 = (((x361&x362)+x363)|x364);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MAX;
	static int8_t x366 = INT8_MAX;
	uint32_t x367 = 371966U;
	static int32_t x368 = INT32_MAX;
	volatile int64_t t87 = -74058926568709LL;

	t87 = (((x365&x366)+x367)|x368);

	if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MIN;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = INT8_MIN;
	static volatile int64_t t88 = -3732LL;

	t88 = (((x369&x370)+x371)|x372);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = 0;
	uint16_t x378 = 51U;
	volatile int8_t x379 = -1;
	uint16_t x380 = 3461U;
	volatile int32_t t89 = -9937;

	t89 = (((x377&x378)+x379)|x380);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x382 = -143;
	static int32_t x383 = -4;
	static volatile int32_t t90 = -5922;

	t90 = (((x381&x382)+x383)|x384);

	if (t90 != 20781) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MAX;
	static volatile int8_t x386 = 39;
	volatile uint8_t x387 = 0U;
	volatile int32_t t91 = 6;

	t91 = (((x385&x386)+x387)|x388);

	if (t91 != 47) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x393 = -1;
	static uint8_t x394 = 17U;
	int64_t x395 = INT64_MIN;
	volatile int64_t t92 = -2703635LL;

	t92 = (((x393&x394)+x395)|x396);

	if (t92 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x398 = 33;
	volatile uint64_t x399 = 94874537435LLU;
	int16_t x400 = 4049;
	volatile uint64_t t93 = 1842144756472LLU;

	t93 = (((x397&x398)+x399)|x400);

	if (t93 != 94874537949LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x402 = INT64_MIN;
	uint32_t x403 = 4023832U;
	int8_t x404 = 48;
	int64_t t94 = -160276333047363234LL;

	t94 = (((x401&x402)+x403)|x404);

	if (t94 != 4023864LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = 0;
	static uint32_t x411 = 436989U;
	uint64_t t95 = UINT64_MAX;

	t95 = (((x409&x410)+x411)|x412);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = INT32_MIN;
	uint16_t x414 = 11605U;
	int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MIN;
	static int64_t t96 = -3456577972483LL;

	t96 = (((x413&x414)+x415)|x416);

	if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x419 = 59U;
	static int64_t x420 = INT64_MIN;

	t97 = (((x417&x418)+x419)|x420);

	if (t97 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x421 = 0;
	int32_t x422 = INT32_MAX;
	static int32_t x423 = INT32_MIN;
	int64_t x424 = INT64_MAX;
	volatile int64_t t98 = 1622501821089456LL;

	t98 = (((x421&x422)+x423)|x424);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x426 = -237453851960818LL;
	volatile int64_t x427 = -1LL;
	int64_t x428 = 15663LL;
	int64_t t99 = -3948136203385722LL;

	t99 = (((x425&x426)+x427)|x428);

	if (t99 != -237453851951313LL) { NG(); } else { ; }
	
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

