#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 15300U;
int64_t x16 = -14168770193936LL;
int32_t x17 = -1;
int32_t t5 = 1402845;
static int32_t x26 = INT32_MIN;
static volatile int32_t t6 = 222;
uint32_t x34 = UINT32_MAX;
uint32_t x38 = 1U;
uint64_t x43 = 2LLU;
volatile int32_t t11 = 1;
static volatile uint8_t x49 = 125U;
static int8_t x55 = -1;
static int8_t x59 = INT8_MIN;
static int32_t t15 = -522;
int8_t x74 = INT8_MIN;
volatile int32_t t18 = 2292;
volatile int32_t t19 = -30166;
int16_t x84 = 2726;
uint64_t x87 = UINT64_MAX;
int32_t t21 = 120;
int32_t x96 = INT32_MAX;
int16_t x97 = INT16_MAX;
int32_t x102 = INT32_MIN;
uint16_t x103 = 32U;
volatile int32_t t26 = 253141;
static volatile int32_t x112 = INT32_MIN;
int32_t t27 = 1;
int64_t x119 = -1LL;
volatile int32_t t29 = 160002;
int16_t x127 = 176;
int64_t x132 = -1094911LL;
int32_t t32 = 576054;
int8_t x133 = INT8_MAX;
static int64_t x134 = 1142385988518688898LL;
uint64_t x135 = 8102614769858856868LLU;
int16_t x138 = -15910;
static volatile int8_t x143 = -1;
int64_t x147 = -13LL;
int16_t x148 = -1;
volatile int16_t x161 = -2231;
int32_t x164 = 1;
uint16_t x165 = 19873U;
int32_t t41 = -4762;
int32_t t42 = -25363859;
int64_t x175 = -22306713259240007LL;
static int32_t x179 = -118421;
uint8_t x180 = UINT8_MAX;
volatile int32_t t44 = -38;
static int64_t x186 = INT64_MIN;
static int64_t x188 = INT64_MAX;
int64_t x194 = INT64_MAX;
volatile int32_t t49 = -820038205;
int64_t x206 = -1LL;
int16_t x212 = -1;
int32_t x213 = -110776;
int8_t x217 = 1;
int8_t x218 = 1;
uint64_t x227 = UINT64_MAX;
uint32_t x229 = UINT32_MAX;
int8_t x232 = -12;
int16_t x234 = 4;
uint8_t x235 = 51U;
volatile int64_t x237 = 1LL;
static uint16_t x244 = 6129U;
uint16_t x245 = 12U;
uint32_t x247 = 2U;
volatile int32_t t62 = -1190;
int64_t x253 = -1LL;
int8_t x268 = 1;
static int8_t x269 = INT8_MIN;
int32_t x274 = INT32_MAX;
int64_t x275 = -1LL;
uint8_t x276 = 14U;
static uint64_t x280 = 22LLU;
volatile int16_t x281 = -1;
int16_t x284 = INT16_MIN;
uint8_t x293 = 115U;
uint16_t x302 = 1743U;
int32_t t75 = 1750356;
volatile uint16_t x307 = UINT16_MAX;
static int8_t x316 = -1;
int64_t x318 = INT64_MAX;
uint16_t x324 = 4U;
int32_t t80 = 2528;
int64_t x329 = INT64_MIN;
int32_t t82 = -40928;
int32_t x334 = -1;
uint16_t x339 = UINT16_MAX;
static uint64_t x363 = 112230LLU;
int64_t x364 = -1LL;
int32_t t91 = 62495;
uint64_t x369 = UINT64_MAX;
int8_t x372 = -2;
volatile int32_t x373 = -515829;
uint32_t x376 = 3272U;
volatile int32_t t93 = -8;
int16_t x378 = INT16_MIN;
int16_t x383 = 0;
uint16_t x387 = 7754U;
int32_t t96 = 1416;
int8_t x390 = -1;
static int32_t x395 = -1;
uint8_t x396 = UINT8_MAX;
volatile int32_t t98 = -70;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static uint8_t x2 = UINT8_MAX;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 57;

	t0 = (((x1<=x2)*x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int32_t x6 = -487966581;
	int16_t x7 = -1;
	volatile int16_t x8 = 189;
	volatile int32_t t1 = 179972;

	t1 = (((x5<=x6)*x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static int16_t x10 = -1;
	uint8_t x11 = 19U;
	uint64_t x12 = 235099LLU;
	int32_t t2 = 464625;

	t2 = (((x9<=x10)*x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 100U;
	int64_t x14 = -1LL;
	int32_t x15 = -1;
	int32_t t3 = -12;

	t3 = (((x13<=x14)*x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -1;
	static int64_t x19 = INT64_MAX;
	uint8_t x20 = 1U;
	volatile int32_t t4 = -22;

	t4 = (((x17<=x18)*x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 247U;
	uint8_t x22 = 14U;
	int32_t x23 = INT32_MIN;
	static int8_t x24 = INT8_MAX;

	t5 = (((x21<=x22)*x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -3;
	int32_t x27 = INT32_MAX;
	int64_t x28 = -31990LL;

	t6 = (((x25<=x26)*x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int32_t x30 = -2469;
	int32_t x31 = INT32_MIN;
	int8_t x32 = -22;
	volatile int32_t t7 = -31410638;

	t7 = (((x29<=x30)*x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 250054085304827LLU;
	uint8_t x35 = 60U;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -2;

	t8 = (((x33<=x34)*x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 8U;
	int16_t x39 = INT16_MIN;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 167409084;

	t9 = (((x37<=x38)*x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	volatile int16_t x42 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = 26;

	t10 = (((x41<=x42)*x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	static int8_t x46 = INT8_MAX;
	static int32_t x47 = -1;
	uint32_t x48 = 53U;

	t11 = (((x45<=x46)*x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	volatile int16_t x52 = -1;
	volatile int32_t t12 = 984;

	t12 = (((x49<=x50)*x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int32_t x54 = -257187;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 921167960;

	t13 = (((x53<=x54)*x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	volatile uint16_t x58 = 18U;
	static uint32_t x60 = 2705U;
	volatile int32_t t14 = 10494466;

	t14 = (((x57<=x58)*x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	static volatile int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MAX;
	int8_t x64 = INT8_MIN;

	t15 = (((x61<=x62)*x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1595239;
	int64_t x66 = 3817LL;
	uint16_t x67 = 6031U;
	uint8_t x68 = 1U;
	volatile int32_t t16 = -7618663;

	t16 = (((x65<=x66)*x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -643743606528804873LL;
	volatile int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MAX;
	static volatile int64_t x72 = INT64_MIN;
	int32_t t17 = 3494460;

	t17 = (((x69<=x70)*x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 5250222081271914LLU;
	volatile uint64_t x75 = 533596837316080586LLU;
	int16_t x76 = 2918;

	t18 = (((x73<=x74)*x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	static int8_t x78 = INT8_MAX;
	int64_t x79 = 913913924723710LL;
	static uint8_t x80 = 6U;

	t19 = (((x77<=x78)*x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 59797;
	int64_t x82 = INT64_MAX;
	static int64_t x83 = -347365769757016468LL;
	static int32_t t20 = -1;

	t20 = (((x81<=x82)*x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 0;
	uint8_t x86 = UINT8_MAX;
	uint16_t x88 = 8U;

	t21 = (((x85<=x86)*x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int64_t x90 = -4000775416639627LL;
	uint32_t x91 = 5U;
	uint64_t x92 = 4141759248LLU;
	volatile int32_t t22 = -47822;

	t22 = (((x89<=x90)*x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -1;
	int64_t x94 = -1LL;
	int32_t x95 = 2;
	volatile int32_t t23 = 2872;

	t23 = (((x93<=x94)*x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -102926;

	t24 = (((x97<=x98)*x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 761384725;
	uint32_t x104 = 71224790U;
	int32_t t25 = -79;

	t25 = (((x101<=x102)*x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -1;
	uint32_t x106 = 294U;
	static int64_t x107 = INT64_MAX;
	static int64_t x108 = 1232259LL;

	t26 = (((x105<=x106)*x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	volatile int8_t x110 = -9;
	uint16_t x111 = 15U;

	t27 = (((x109<=x110)*x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 294LL;
	static uint16_t x114 = 2U;
	uint32_t x115 = 1136942052U;
	int64_t x116 = -1LL;
	volatile int32_t t28 = 13;

	t28 = (((x113<=x114)*x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 181703910752314LLU;
	uint16_t x118 = 1U;
	int64_t x120 = INT64_MIN;

	t29 = (((x117<=x118)*x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int32_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	int32_t x124 = 789337770;
	volatile int32_t t30 = -1;

	t30 = (((x121<=x122)*x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 6U;
	int16_t x126 = -1;
	int32_t x128 = INT32_MAX;
	static int32_t t31 = 5;

	t31 = (((x125<=x126)*x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 18076U;
	int16_t x130 = INT16_MIN;
	int16_t x131 = -1;

	t32 = (((x129<=x130)*x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x136 = 57U;
	int32_t t33 = 238;

	t33 = (((x133<=x134)*x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int16_t x139 = -1;
	static int8_t x140 = INT8_MIN;
	int32_t t34 = 1809338;

	t34 = (((x137<=x138)*x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	static int64_t x142 = -1LL;
	int64_t x144 = 127118948LL;
	volatile int32_t t35 = -7393415;

	t35 = (((x141<=x142)*x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = -1;
	int32_t t36 = -1;

	t36 = (((x145<=x146)*x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int8_t x150 = 1;
	static int64_t x151 = INT64_MAX;
	uint32_t x152 = UINT32_MAX;
	int32_t t37 = 81433;

	t37 = (((x149<=x150)*x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MAX;
	int64_t x154 = -41612LL;
	int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	int32_t t38 = 60;

	t38 = (((x153<=x154)*x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	volatile uint64_t x158 = UINT64_MAX;
	static int8_t x159 = 32;
	uint8_t x160 = 50U;
	volatile int32_t t39 = 216;

	t39 = (((x157<=x158)*x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 8U;
	volatile int16_t x163 = INT16_MAX;
	static volatile int32_t t40 = 252;

	t40 = (((x161<=x162)*x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = INT64_MIN;
	static uint32_t x168 = 271678934U;

	t41 = (((x165<=x166)*x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MAX;
	int16_t x171 = -9;
	volatile int64_t x172 = 3129844LL;

	t42 = (((x169<=x170)*x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 61061LLU;
	uint16_t x174 = 26U;
	int32_t x176 = INT32_MIN;
	int32_t t43 = 21319;

	t43 = (((x173<=x174)*x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -3780516LL;
	volatile int16_t x178 = -2434;

	t44 = (((x177<=x178)*x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t45 = -3;

	t45 = (((x181<=x182)*x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 1;
	volatile uint32_t x187 = 4017U;
	volatile int32_t t46 = -171318222;

	t46 = (((x185<=x186)*x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 12160362LLU;
	uint16_t x190 = 27481U;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 28190U;
	volatile int32_t t47 = -17;

	t47 = (((x189<=x190)*x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 1;
	static int64_t x195 = -1LL;
	int8_t x196 = INT8_MIN;
	static int32_t t48 = 7;

	t48 = (((x193<=x194)*x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	static uint64_t x199 = 71743952LLU;
	uint8_t x200 = 0U;

	t49 = (((x197<=x198)*x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 219U;
	int16_t x202 = 9451;
	int8_t x203 = 41;
	static int32_t x204 = INT32_MIN;
	static int32_t t50 = 2071551;

	t50 = (((x201<=x202)*x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -1;
	volatile int16_t x207 = 491;
	static volatile int64_t x208 = -38142960147LL;
	volatile int32_t t51 = -7;

	t51 = (((x205<=x206)*x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	static int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	static int32_t t52 = 2;

	t52 = (((x209<=x210)*x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MAX;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = -1;
	volatile int32_t t53 = 15008900;

	t53 = (((x213<=x214)*x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x219 = UINT8_MAX;
	uint8_t x220 = UINT8_MAX;
	int32_t t54 = -62989;

	t54 = (((x217<=x218)*x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -375453;
	uint32_t x222 = 1989663U;
	static uint8_t x223 = UINT8_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 102975414;

	t55 = (((x221<=x222)*x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x225 = 10U;
	volatile int64_t x226 = INT64_MIN;
	uint16_t x228 = 128U;
	static int32_t t56 = 497860174;

	t56 = (((x225<=x226)*x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = -17;
	static uint64_t x231 = UINT64_MAX;
	int32_t t57 = -32032;

	t57 = (((x229<=x230)*x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MAX;
	static uint8_t x236 = 102U;
	static volatile int32_t t58 = 15;

	t58 = (((x233<=x234)*x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x238 = INT64_MAX;
	int64_t x239 = -14807805LL;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 40205;

	t59 = (((x237<=x238)*x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 4U;
	static int32_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	volatile int32_t t60 = -4;

	t60 = (((x241<=x242)*x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -8;
	uint8_t x248 = 121U;
	static volatile int32_t t61 = -1552676;

	t61 = (((x245<=x246)*x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 1155361;
	static volatile int32_t x250 = INT32_MAX;
	uint8_t x251 = 1U;
	volatile int16_t x252 = -4;

	t62 = (((x249<=x250)*x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = INT32_MIN;
	int8_t x255 = -1;
	static int16_t x256 = -1;
	volatile int32_t t63 = 566517852;

	t63 = (((x253<=x254)*x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	uint8_t x258 = 84U;
	int8_t x259 = 22;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = -18923;

	t64 = (((x257<=x258)*x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	static int8_t x262 = -13;
	static int16_t x263 = -1;
	volatile uint16_t x264 = 0U;
	int32_t t65 = 489;

	t65 = (((x261<=x262)*x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	volatile uint8_t x267 = 1U;
	int32_t t66 = -589222246;

	t66 = (((x265<=x266)*x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	static int16_t x271 = INT16_MAX;
	static int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 611941668;

	t67 = (((x269<=x270)*x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t t68 = 282304608;

	t68 = (((x273<=x274)*x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MAX;
	uint16_t x279 = 26728U;
	volatile int32_t t69 = 0;

	t69 = (((x277<=x278)*x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MIN;
	int16_t x283 = -12;
	volatile int32_t t70 = -25082;

	t70 = (((x281<=x282)*x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MAX;
	uint64_t x288 = 76LLU;
	static volatile int32_t t71 = -681872748;

	t71 = (((x285<=x286)*x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -1LL;
	volatile uint64_t x290 = 1236205LLU;
	int16_t x291 = -2;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 3479236;

	t72 = (((x289<=x290)*x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x294 = 195394762100015LLU;
	uint64_t x295 = 73865811991LLU;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = -217;

	t73 = (((x293<=x294)*x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 16;
	uint8_t x298 = UINT8_MAX;
	static int16_t x299 = INT16_MAX;
	int32_t x300 = -7;
	int32_t t74 = -348;

	t74 = (((x297<=x298)*x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 917625369866794LL;
	int32_t x303 = INT32_MIN;
	static volatile uint32_t x304 = 255133919U;

	t75 = (((x301<=x302)*x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	int32_t x306 = -164621;
	uint64_t x308 = 10201754487917755LLU;
	volatile int32_t t76 = 3;

	t76 = (((x305<=x306)*x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = -1LL;
	int64_t x311 = -4095195092700570LL;
	uint64_t x312 = 397LLU;
	static volatile int32_t t77 = -1;

	t77 = (((x309<=x310)*x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x313 = -11LL;
	uint16_t x314 = UINT16_MAX;
	static int16_t x315 = -18;
	int32_t t78 = 33334654;

	t78 = (((x313<=x314)*x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	uint8_t x319 = UINT8_MAX;
	static int32_t x320 = -4061699;
	int32_t t79 = 153657339;

	t79 = (((x317<=x318)*x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1371;
	int32_t x322 = -1;
	uint64_t x323 = 230LLU;

	t80 = (((x321<=x322)*x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	static int64_t x326 = 1994912691LL;
	volatile int8_t x327 = INT8_MIN;
	int8_t x328 = 8;
	static volatile int32_t t81 = 146;

	t81 = (((x325<=x326)*x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = -2;
	uint32_t x331 = 11U;
	static int64_t x332 = -24LL;

	t82 = (((x329<=x330)*x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	uint32_t x335 = 0U;
	int32_t x336 = 15202744;
	volatile int32_t t83 = 11;

	t83 = (((x333<=x334)*x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	uint32_t x340 = 3555311U;
	volatile int32_t t84 = 1;

	t84 = (((x337<=x338)*x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 19;
	static volatile int16_t x342 = INT16_MIN;
	uint64_t x343 = 317503733565818LLU;
	uint32_t x344 = UINT32_MAX;
	static int32_t t85 = 830493;

	t85 = (((x341<=x342)*x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MAX;
	int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile int32_t t86 = -704;

	t86 = (((x345<=x346)*x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 1U;
	uint64_t x350 = 25159LLU;
	uint64_t x351 = 802308912LLU;
	int64_t x352 = -21255420004LL;
	int32_t t87 = 392250821;

	t87 = (((x349<=x350)*x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 128206U;
	uint16_t x354 = 106U;
	int32_t x355 = -1;
	static int8_t x356 = INT8_MIN;
	int32_t t88 = 7704;

	t88 = (((x353<=x354)*x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -15531;
	int8_t x358 = INT8_MAX;
	uint64_t x359 = 68050501057981112LLU;
	static int16_t x360 = -1;
	int32_t t89 = 1;

	t89 = (((x357<=x358)*x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = -112819LL;
	volatile int8_t x362 = INT8_MIN;
	int32_t t90 = 201905;

	t90 = (((x361<=x362)*x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 397438263818LLU;
	uint32_t x366 = 5U;
	volatile int8_t x367 = -1;
	uint32_t x368 = 185976900U;

	t91 = (((x365<=x366)*x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	uint8_t x371 = 1U;
	int32_t t92 = 14;

	t92 = (((x369<=x370)*x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x374 = 0;
	volatile int8_t x375 = INT8_MIN;

	t93 = (((x373<=x374)*x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = 17U;
	int32_t x379 = 4734;
	int64_t x380 = INT64_MIN;
	int32_t t94 = 31660237;

	t94 = (((x377<=x378)*x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = UINT64_MAX;
	int16_t x382 = -1;
	int32_t x384 = -1;
	int32_t t95 = -670374932;

	t95 = (((x381<=x382)*x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MAX;
	static uint32_t x386 = 72U;
	static int16_t x388 = 1;

	t96 = (((x385<=x386)*x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 3U;
	int32_t t97 = 4;

	t97 = (((x389<=x390)*x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = 117940U;
	int32_t x394 = -6103;

	t98 = (((x393<=x394)*x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x397 = -1;
	static int16_t x398 = 342;
	static int64_t x399 = INT64_MIN;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = -231;

	t99 = (((x397<=x398)*x399)<x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

