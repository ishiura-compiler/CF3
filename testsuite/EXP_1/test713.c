#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = -486500113;
volatile int32_t t1 = 15002;
int8_t x11 = INT8_MIN;
volatile int32_t t2 = 0;
int8_t x22 = INT8_MIN;
int8_t x23 = 1;
uint16_t x24 = 104U;
static uint16_t x40 = UINT16_MAX;
int64_t t9 = 236LL;
int8_t x43 = INT8_MAX;
int32_t x44 = -1;
int32_t x45 = 1050878069;
uint16_t x47 = 58U;
int32_t t11 = 254;
uint8_t x52 = 1U;
static uint16_t x66 = UINT16_MAX;
int16_t x73 = -183;
static volatile uint32_t t18 = 15U;
int16_t x84 = INT16_MIN;
int64_t x87 = 60LL;
volatile int64_t t20 = 612550LL;
int64_t x89 = INT64_MIN;
int64_t x92 = INT64_MIN;
volatile uint64_t x94 = 426323499736LLU;
int32_t t23 = 6;
volatile uint16_t x101 = 131U;
uint32_t x103 = 0U;
int8_t x104 = -55;
uint8_t x106 = UINT8_MAX;
int16_t x110 = -3;
volatile uint32_t x112 = 249541551U;
static uint8_t x129 = UINT8_MAX;
int64_t x130 = -1LL;
volatile int16_t x137 = -1;
static int8_t x140 = INT8_MIN;
uint64_t x148 = UINT64_MAX;
volatile int8_t x152 = 3;
volatile int64_t x158 = 1739902326LL;
int16_t x161 = INT16_MIN;
volatile uint64_t t38 = 273334102822LLU;
int64_t x174 = -2612179736739569LL;
int64_t t41 = 7326139LL;
int8_t x186 = -1;
volatile uint8_t x191 = 114U;
int16_t x198 = INT16_MAX;
uint32_t x199 = UINT32_MAX;
static volatile int64_t t46 = 1LL;
int16_t x203 = -10;
int64_t x213 = INT64_MIN;
volatile int8_t x219 = INT8_MIN;
volatile int64_t x230 = -1LL;
uint64_t x232 = UINT64_MAX;
int8_t x234 = -1;
static uint64_t x237 = UINT64_MAX;
volatile int64_t x242 = -1809041822LL;
int32_t x244 = INT32_MIN;
int8_t x269 = -1;
int32_t x275 = INT32_MAX;
volatile int64_t x281 = INT64_MIN;
int8_t x291 = INT8_MIN;
volatile int16_t x313 = -1;
int8_t x317 = -1;
int32_t x320 = 21917;
int32_t t73 = 2;
volatile int64_t t76 = 246LL;
volatile int16_t x335 = INT16_MIN;
uint32_t t78 = 308341070U;
uint16_t x344 = 17040U;
volatile int32_t x346 = INT32_MIN;
volatile uint32_t t80 = 1017617U;
uint64_t x351 = 39149750LLU;
static int64_t x356 = -342729LL;
volatile uint64_t t82 = 187069519468600578LLU;
uint16_t x362 = UINT16_MAX;
uint8_t x365 = UINT8_MAX;
volatile uint64_t t85 = 31307883LLU;
volatile int64_t t86 = INT64_MIN;
volatile int8_t x374 = -16;
uint32_t x376 = 466742455U;
volatile uint32_t t87 = 89U;
int32_t x385 = -2648167;
int32_t x388 = -1;
int16_t x396 = -1;
static int32_t t92 = -56;
int32_t x399 = -1;
int8_t x401 = INT8_MIN;
uint64_t x403 = UINT64_MAX;
volatile int32_t x430 = -1;
static uint64_t x431 = 2893358458795LLU;
uint32_t x432 = 363036380U;
static int32_t x438 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint16_t x2 = 213U;
	uint64_t x3 = 356LLU;
	static int16_t x4 = -1;
	volatile uint64_t t0 = 396662307808084539LLU;

	t0 = (((x1%x2)*x3)&x4);

	if (t0 != 18446744073709506048LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = INT8_MAX;
	uint8_t x7 = 4U;
	int8_t x8 = -4;

	t1 = (((x5%x6)*x7)&x8);

	if (t1 != -280) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	int32_t x10 = -1;
	int32_t x12 = -1;

	t2 = (((x9%x10)*x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 3258619629338LLU;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = 40U;
	uint32_t x16 = UINT32_MAX;
	volatile uint64_t t3 = 251343486091964LLU;

	t3 = (((x13%x14)*x15)&x16);

	if (t3 != 2120LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 13U;
	uint8_t x18 = 20U;
	static int32_t x19 = -1;
	int64_t x20 = -1LL;
	volatile int64_t t4 = 2474215786LL;

	t4 = (((x17%x18)*x19)&x20);

	if (t4 != -13LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int32_t t5 = -161936466;

	t5 = (((x21%x22)*x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x26 = -1LL;
	int16_t x27 = -1;
	static int64_t x28 = INT64_MAX;
	int64_t t6 = -105776135704661LL;

	t6 = (((x25%x26)*x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = 453U;
	int32_t x30 = -85618;
	int64_t x31 = -35132LL;
	volatile int8_t x32 = -1;
	volatile int64_t t7 = -15375236868LL;

	t7 = (((x29%x30)*x31)&x32);

	if (t7 != -15914796LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 9339454;
	volatile uint8_t x34 = 15U;
	static uint8_t x35 = 8U;
	static int16_t x36 = -99;
	volatile int32_t t8 = -1;

	t8 = (((x33%x34)*x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	static uint32_t x38 = 401828U;
	int64_t x39 = -996LL;

	t9 = (((x37%x38)*x39)&x40);

	if (t9 != 692LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 374185U;
	int32_t x42 = INT32_MIN;
	uint32_t t10 = 13281082U;

	t10 = (((x41%x42)*x43)&x44);

	if (t10 != 47521495U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = -1;
	int32_t x48 = -249655;

	t11 = (((x45%x46)*x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MAX;
	int64_t x51 = INT64_MIN;
	volatile int64_t t12 = -20750446632021LL;

	t12 = (((x49%x50)*x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = -52;
	static volatile int8_t x59 = INT8_MAX;
	volatile uint32_t x60 = UINT32_MAX;
	volatile int64_t t13 = -3850359310LL;

	t13 = (((x57%x58)*x59)&x60);

	if (t13 != 4294966280LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 453540696896661888LLU;
	volatile int64_t x62 = -4609782111LL;
	volatile int32_t x63 = 2409;
	static volatile int64_t x64 = INT64_MIN;
	uint64_t t14 = 359213894752LLU;

	t14 = (((x61%x62)*x63)&x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	uint8_t x67 = 103U;
	int64_t x68 = 1741624564984926812LL;
	uint64_t t15 = 3936LLU;

	t15 = (((x65%x66)*x67)&x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 3890U;
	int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MAX;
	static volatile uint64_t x72 = 897701403191LLU;
	uint64_t t16 = 78023LLU;

	t16 = (((x69%x70)*x71)&x72);

	if (t16 != 264198LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = 173324787;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = 0U;
	int32_t t17 = 0;

	t17 = (((x73%x74)*x75)&x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = UINT16_MAX;
	uint32_t x78 = 3314U;
	int32_t x79 = -1018;
	int8_t x80 = -1;

	t18 = (((x77%x78)*x79)&x80);

	if (t18 != 4292352054U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = -2;
	static uint16_t x83 = 1338U;
	int64_t t19 = -70598922542LL;

	t19 = (((x81%x82)*x83)&x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = INT32_MIN;
	static int32_t x86 = INT32_MIN;
	static int64_t x88 = 4872859LL;

	t20 = (((x85%x86)*x87)&x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x90 = INT8_MAX;
	volatile int8_t x91 = 25;
	volatile int64_t t21 = INT64_MIN;

	t21 = (((x89%x90)*x91)&x92);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MAX;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MAX;
	volatile uint64_t t22 = 29441375835085LLU;

	t22 = (((x93%x94)*x95)&x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	volatile int16_t x98 = -1;
	static uint16_t x99 = 2U;
	int32_t x100 = INT32_MAX;

	t23 = (((x97%x98)*x99)&x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x102 = 3U;
	uint32_t t24 = 299608042U;

	t24 = (((x101%x102)*x103)&x104);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x105 = UINT8_MAX;
	volatile int64_t x107 = 146381414653LL;
	volatile int8_t x108 = -1;
	static volatile int64_t t25 = 87898401055LL;

	t25 = (((x105%x106)*x107)&x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile int8_t x111 = 9;
	uint32_t t26 = 10783U;

	t26 = (((x109%x110)*x111)&x112);

	if (t26 != 249541550U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 0;
	uint32_t x118 = 1U;
	int16_t x119 = 4312;
	int32_t x120 = INT32_MIN;
	volatile uint32_t t27 = 25869547U;

	t27 = (((x117%x118)*x119)&x120);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = 141U;
	int16_t x123 = INT16_MIN;
	static volatile int32_t x124 = 2780246;
	static volatile int32_t t28 = 801;

	t28 = (((x121%x122)*x123)&x124);

	if (t28 != 524288) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = 281209014803175201LL;
	uint16_t x126 = 2U;
	static int8_t x127 = INT8_MIN;
	volatile int64_t x128 = -1019213285009LL;
	volatile int64_t t29 = -1LL;

	t29 = (((x125%x126)*x127)&x128);

	if (t29 != -1019213285120LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x131 = 245349LL;
	int16_t x132 = INT16_MIN;
	volatile int64_t t30 = 260112029LL;

	t30 = (((x129%x130)*x131)&x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = INT64_MAX;
	static uint64_t x139 = 5182LLU;
	uint64_t t31 = 97285659456089LLU;

	t31 = (((x137%x138)*x139)&x140);

	if (t31 != 18446744073709546368LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int64_t x142 = INT64_MIN;
	static int8_t x143 = -1;
	int64_t x144 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = (((x141%x142)*x143)&x144);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	static int64_t x146 = -330804887LL;
	uint64_t x147 = 14697681170LLU;
	uint64_t t33 = 3LLU;

	t33 = (((x145%x146)*x147)&x148);

	if (t33 != 18446744059011870446LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = 10;
	volatile int8_t x150 = INT8_MIN;
	uint8_t x151 = UINT8_MAX;
	int32_t t34 = 19476010;

	t34 = (((x149%x150)*x151)&x152);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x153 = 48;
	volatile uint64_t x154 = 1LLU;
	static int32_t x155 = -22268692;
	static int16_t x156 = -1;
	volatile uint64_t t35 = 138354537134924915LLU;

	t35 = (((x153%x154)*x155)&x156);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x157 = 9904U;
	static uint32_t x159 = UINT32_MAX;
	int64_t x160 = INT64_MIN;
	int64_t t36 = -4567450894911LL;

	t36 = (((x157%x158)*x159)&x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x162 = INT8_MIN;
	uint16_t x163 = 3U;
	uint64_t x164 = 1918644440912LLU;
	uint64_t t37 = 13LLU;

	t37 = (((x161%x162)*x163)&x164);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	uint16_t x166 = 588U;
	uint32_t x167 = 234U;
	uint64_t x168 = 16283LLU;

	t38 = (((x165%x166)*x167)&x168);

	if (t38 != 2816LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x169 = 124U;
	uint16_t x170 = 2296U;
	static int8_t x171 = INT8_MIN;
	static volatile int8_t x172 = INT8_MIN;
	volatile int32_t t39 = 0;

	t39 = (((x169%x170)*x171)&x172);

	if (t39 != -15872) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = 55177;
	static volatile int32_t x175 = INT32_MIN;
	static int32_t x176 = -8883;
	int64_t t40 = 5344364LL;

	t40 = (((x173%x174)*x175)&x176);

	if (t40 != -118491705245696LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MIN;
	static uint32_t x178 = UINT32_MAX;
	static uint8_t x179 = 2U;
	volatile int64_t x180 = INT64_MAX;

	t41 = (((x177%x178)*x179)&x180);

	if (t41 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = INT32_MIN;
	volatile uint64_t x182 = UINT64_MAX;
	static int8_t x183 = -4;
	int16_t x184 = 3;
	volatile uint64_t t42 = 14985LLU;

	t42 = (((x181%x182)*x183)&x184);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = -1LL;
	int64_t x187 = INT64_MAX;
	volatile int32_t x188 = 3;
	volatile int64_t t43 = -3165900772216LL;

	t43 = (((x185%x186)*x187)&x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x189 = 111521017;
	uint32_t x190 = UINT32_MAX;
	volatile int32_t x192 = INT32_MIN;
	uint32_t t44 = 130528512U;

	t44 = (((x189%x190)*x191)&x192);

	if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -1;
	volatile int16_t x194 = INT16_MIN;
	int16_t x195 = -1;
	int64_t x196 = 2LL;
	int64_t t45 = -9908072344988594LL;

	t45 = (((x193%x194)*x195)&x196);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x197 = 43526465054LL;
	int8_t x200 = 1;

	t46 = (((x197%x198)*x199)&x200);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MIN;
	static uint8_t x204 = 11U;
	static int32_t t47 = 2831995;

	t47 = (((x201%x202)*x203)&x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MIN;
	static uint8_t x206 = 3U;
	volatile int32_t x207 = -512200;
	uint8_t x208 = 1U;
	int64_t t48 = 451493LL;

	t48 = (((x205%x206)*x207)&x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x209 = -1LL;
	static uint8_t x210 = 2U;
	int64_t x211 = INT64_MAX;
	static uint64_t x212 = 6186505252378416128LLU;
	static uint64_t t49 = 33551188408LLU;

	t49 = (((x209%x210)*x211)&x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	int64_t t50 = 1LL;

	t50 = (((x213%x214)*x215)&x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = INT8_MIN;
	volatile int32_t x218 = INT32_MAX;
	static uint32_t x220 = 673U;
	uint32_t t51 = 1289388464U;

	t51 = (((x217%x218)*x219)&x220);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x221 = UINT8_MAX;
	int64_t x222 = -1LL;
	int64_t x223 = -1LL;
	int64_t x224 = INT64_MAX;
	int64_t t52 = -1355870525208LL;

	t52 = (((x221%x222)*x223)&x224);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -6003;
	int64_t x231 = INT64_MIN;
	volatile uint64_t t53 = 89382LLU;

	t53 = (((x229%x230)*x231)&x232);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x233 = 96;
	uint32_t x235 = 2078118118U;
	int64_t x236 = 6104409641LL;
	volatile int64_t t54 = 396896643910074257LL;

	t54 = (((x233%x234)*x235)&x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x238 = INT64_MAX;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = -1;
	volatile uint64_t t55 = 13165LLU;

	t55 = (((x237%x238)*x239)&x240);

	if (t55 != 255LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x241 = -1843984495174237685LL;
	uint16_t x243 = 664U;
	volatile int64_t t56 = -4986783LL;

	t56 = (((x241%x242)*x243)&x244);

	if (t56 != -689342251008LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	volatile int16_t x246 = -1;
	int64_t x247 = INT64_MAX;
	static int16_t x248 = INT16_MIN;
	int64_t t57 = -41LL;

	t57 = (((x245%x246)*x247)&x248);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	volatile int64_t x250 = INT64_MIN;
	volatile int16_t x251 = 1;
	uint32_t x252 = 28U;
	int64_t t58 = 47LL;

	t58 = (((x249%x250)*x251)&x252);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x257 = 3LLU;
	int64_t x258 = -1LL;
	int16_t x259 = INT16_MIN;
	int64_t x260 = 179876255278LL;
	volatile uint64_t t59 = 155243611LLU;

	t59 = (((x257%x258)*x259)&x260);

	if (t59 != 179876167680LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = 79201060475LL;
	int16_t x262 = -678;
	uint16_t x263 = 1U;
	volatile int16_t x264 = INT16_MAX;
	static volatile int64_t t60 = 257324286620LL;

	t60 = (((x261%x262)*x263)&x264);

	if (t60 != 281LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x265 = 280004161793LLU;
	static int64_t x266 = 89592122LL;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = 528337183U;
	uint64_t t61 = 285758565407308892LLU;

	t61 = (((x265%x266)*x267)&x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = 10;
	static volatile int64_t x271 = -1009354LL;
	int32_t x272 = -1;
	int64_t t62 = -25707956423530640LL;

	t62 = (((x269%x270)*x271)&x272);

	if (t62 != 1009354LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = 1;
	uint32_t x274 = 1194U;
	volatile uint8_t x276 = UINT8_MAX;
	volatile uint32_t t63 = 199138039U;

	t63 = (((x273%x274)*x275)&x276);

	if (t63 != 255U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x277 = 175LLU;
	int64_t x278 = INT64_MAX;
	uint16_t x279 = 367U;
	static volatile int32_t x280 = -1;
	volatile uint64_t t64 = 16404956108790LLU;

	t64 = (((x277%x278)*x279)&x280);

	if (t64 != 64225LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x282 = INT16_MAX;
	static int64_t x283 = -1LL;
	int32_t x284 = INT32_MAX;
	int64_t t65 = -39969770124326249LL;

	t65 = (((x281%x282)*x283)&x284);

	if (t65 != 8LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x285 = 2U;
	uint64_t x286 = UINT64_MAX;
	uint32_t x287 = UINT32_MAX;
	static int64_t x288 = -1LL;
	volatile uint64_t t66 = 169600047273LLU;

	t66 = (((x285%x286)*x287)&x288);

	if (t66 != 8589934590LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 7LLU;
	static int8_t x290 = INT8_MIN;
	int32_t x292 = 215455571;
	volatile uint64_t t67 = 60178432569777507LLU;

	t67 = (((x289%x290)*x291)&x292);

	if (t67 != 215454720LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = 3601;
	int8_t x294 = INT8_MIN;
	int8_t x295 = -11;
	volatile int8_t x296 = -1;
	volatile int32_t t68 = -3931970;

	t68 = (((x293%x294)*x295)&x296);

	if (t68 != -187) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x297 = 3716188LL;
	volatile uint16_t x298 = UINT16_MAX;
	static int32_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	int64_t t69 = -1881199340LL;

	t69 = (((x297%x298)*x299)&x300);

	if (t69 != 19308LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = -1;
	int64_t x302 = -5645071836674LL;
	volatile int16_t x303 = -1;
	int8_t x304 = INT8_MIN;
	volatile int64_t t70 = -211180278929761LL;

	t70 = (((x301%x302)*x303)&x304);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = 5232237;
	uint8_t x307 = 0U;
	int64_t x308 = -1LL;
	static volatile int64_t t71 = 5911091LL;

	t71 = (((x305%x306)*x307)&x308);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x314 = -1LL;
	int64_t x315 = INT64_MIN;
	static int8_t x316 = INT8_MIN;
	static volatile int64_t t72 = 38LL;

	t72 = (((x313%x314)*x315)&x316);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x318 = -1;
	int16_t x319 = -1;

	t73 = (((x317%x318)*x319)&x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = INT8_MIN;
	static uint32_t x322 = 1203U;
	static uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 24795U;
	volatile uint64_t t74 = 126951LLU;

	t74 = (((x321%x322)*x323)&x324);

	if (t74 != 24667LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x325 = 1348LLU;
	int32_t x326 = -1;
	int16_t x327 = 4571;
	int8_t x328 = INT8_MAX;
	static volatile uint64_t t75 = 2LLU;

	t75 = (((x325%x326)*x327)&x328);

	if (t75 != 44LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	volatile int16_t x331 = INT16_MAX;
	static int16_t x332 = INT16_MIN;

	t76 = (((x329%x330)*x331)&x332);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 1773U;
	int32_t x334 = INT32_MAX;
	volatile int8_t x336 = -11;
	static int32_t t77 = -11779;

	t77 = (((x333%x334)*x335)&x336);

	if (t77 != -58097664) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = 15537U;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 1603U;
	volatile int32_t x340 = INT32_MIN;

	t78 = (((x337%x338)*x339)&x340);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x341 = 316952423238288LLU;
	static uint16_t x342 = 9717U;
	int16_t x343 = INT16_MIN;
	volatile uint64_t t79 = 1714397354LLU;

	t79 = (((x341%x342)*x343)&x344);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x345 = -26;
	uint32_t x347 = 4227U;
	int8_t x348 = 63;

	t80 = (((x345%x346)*x347)&x348);

	if (t80 != 50U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x349 = INT16_MIN;
	volatile uint32_t x350 = 93U;
	int16_t x352 = INT16_MIN;
	volatile uint64_t t81 = 117672507775LLU;

	t81 = (((x349%x350)*x351)&x352);

	if (t81 != 2544730112LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MIN;
	int8_t x355 = -1;

	t82 = (((x353%x354)*x355)&x356);

	if (t82 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = INT8_MIN;
	static uint32_t x358 = UINT32_MAX;
	uint16_t x359 = 3U;
	volatile int32_t x360 = -1;
	static uint32_t t83 = 7U;

	t83 = (((x357%x358)*x359)&x360);

	if (t83 != 4294966912U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = -1;
	volatile int8_t x363 = 1;
	int64_t x364 = INT64_MAX;
	volatile int64_t t84 = INT64_MAX;

	t84 = (((x361%x362)*x363)&x364);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x366 = 11729571134LLU;
	uint32_t x367 = 15U;
	volatile uint16_t x368 = 3578U;

	t85 = (((x365%x366)*x367)&x368);

	if (t85 != 3312LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x369 = INT16_MIN;
	static uint16_t x370 = 167U;
	int8_t x371 = 1;
	static int64_t x372 = INT64_MIN;

	t86 = (((x369%x370)*x371)&x372);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x373 = -57;
	static int8_t x375 = 10;

	t87 = (((x373%x374)*x375)&x376);

	if (t87 != 466742438U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = 0;
	int32_t x378 = -1;
	volatile int32_t x379 = INT32_MAX;
	int8_t x380 = INT8_MAX;
	static volatile int32_t t88 = -17205922;

	t88 = (((x377%x378)*x379)&x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x381 = UINT16_MAX;
	uint64_t x382 = 1135LLU;
	uint64_t x383 = 305LLU;
	static int16_t x384 = INT16_MIN;
	volatile uint64_t t89 = 26778972907LLU;

	t89 = (((x381%x382)*x383)&x384);

	if (t89 != 229376LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x386 = -3;
	uint32_t x387 = UINT32_MAX;
	volatile uint32_t t90 = 320210550U;

	t90 = (((x385%x386)*x387)&x388);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = INT8_MAX;
	volatile uint32_t x390 = UINT32_MAX;
	int16_t x391 = INT16_MAX;
	volatile uint8_t x392 = 8U;
	static uint32_t t91 = 26U;

	t91 = (((x389%x390)*x391)&x392);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x393 = -1;
	uint16_t x394 = 12057U;
	int16_t x395 = INT16_MAX;

	t92 = (((x393%x394)*x395)&x396);

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = UINT8_MAX;
	uint16_t x398 = UINT16_MAX;
	static uint8_t x400 = 0U;
	int32_t t93 = 11;

	t93 = (((x397%x398)*x399)&x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x402 = 206;
	volatile int16_t x404 = -1;
	volatile uint64_t t94 = 210336578487030073LLU;

	t94 = (((x401%x402)*x403)&x404);

	if (t94 != 128LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x409 = 9U;
	int64_t x410 = INT64_MIN;
	volatile uint8_t x411 = UINT8_MAX;
	int32_t x412 = INT32_MAX;
	volatile int64_t t95 = -24122347906LL;

	t95 = (((x409%x410)*x411)&x412);

	if (t95 != 2295LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x417 = -1LL;
	volatile int32_t x418 = INT32_MIN;
	int16_t x419 = -1638;
	volatile uint64_t x420 = 37395278548LLU;
	volatile uint64_t t96 = 19097207LLU;

	t96 = (((x417%x418)*x419)&x420);

	if (t96 != 580LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = 0;
	uint64_t t97 = 7LLU;

	t97 = (((x429%x430)*x431)&x432);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = -8LL;
	volatile uint8_t x434 = UINT8_MAX;
	int16_t x435 = INT16_MIN;
	int32_t x436 = INT32_MAX;
	volatile int64_t t98 = -3408682109742494290LL;

	t98 = (((x433%x434)*x435)&x436);

	if (t98 != 262144LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x437 = -1;
	int16_t x439 = INT16_MIN;
	int32_t x440 = INT32_MAX;
	volatile int32_t t99 = -384118;

	t99 = (((x437%x438)*x439)&x440);

	if (t99 != 32768) { NG(); } else { ; }
	
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

