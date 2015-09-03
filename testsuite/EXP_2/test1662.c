#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = -1;
int32_t x7 = INT32_MIN;
int64_t x11 = -1125593963056282LL;
volatile int64_t t2 = -1033275986216244236LL;
int32_t x17 = -94;
uint64_t x19 = UINT64_MAX;
volatile uint16_t x20 = UINT16_MAX;
int8_t x22 = INT8_MAX;
volatile int64_t t6 = 17709LL;
int32_t x29 = 66054529;
uint64_t x30 = 213631LLU;
int16_t x31 = -1;
static volatile int8_t x38 = 1;
static uint8_t x42 = UINT8_MAX;
int32_t x43 = 64909803;
static int16_t x45 = INT16_MIN;
static uint32_t x50 = UINT32_MAX;
int8_t x51 = -1;
int32_t x54 = INT32_MIN;
int64_t x57 = INT64_MAX;
uint8_t x66 = 7U;
int64_t x68 = -5786LL;
volatile int64_t x77 = 478124684LL;
int16_t x78 = -108;
volatile int8_t x82 = INT8_MIN;
volatile int16_t x87 = 1399;
volatile uint32_t x91 = UINT32_MAX;
volatile int32_t t22 = 48895493;
int8_t x94 = 2;
volatile int32_t x98 = 0;
int64_t x101 = INT64_MIN;
volatile uint32_t x104 = 116386853U;
int16_t x106 = INT16_MAX;
int64_t x120 = 824773931003785646LL;
int64_t t29 = 45363723372LL;
int8_t x124 = -2;
int32_t x127 = 79264;
int8_t x132 = INT8_MIN;
static volatile int32_t t33 = -2986255;
int16_t x137 = INT16_MAX;
int16_t x139 = 446;
uint8_t x140 = UINT8_MAX;
static int32_t t34 = 2;
int32_t x142 = INT32_MIN;
int64_t x156 = -540941076LL;
uint16_t x161 = 12200U;
int32_t x162 = INT32_MIN;
int64_t x165 = INT64_MIN;
uint64_t x170 = 464326975533LLU;
int32_t x173 = -15848;
static uint32_t x180 = UINT32_MAX;
int16_t x182 = INT16_MIN;
volatile int32_t t45 = 36427;
volatile uint32_t t46 = 7371U;
int64_t x196 = INT64_MAX;
volatile int64_t t49 = 1083056138575542LL;
uint64_t x204 = 2LLU;
static uint64_t t50 = 11517LLU;
int8_t x206 = 5;
int16_t x213 = INT16_MIN;
static int8_t x220 = 0;
static volatile uint32_t t54 = 17773724U;
uint64_t x223 = UINT64_MAX;
volatile int32_t x227 = INT32_MIN;
uint16_t x230 = 575U;
static volatile uint16_t x234 = UINT16_MAX;
volatile int16_t x238 = 1307;
int16_t x260 = -1;
volatile int32_t t65 = 8;
int32_t x265 = 8;
int16_t x275 = -1;
volatile int64_t x276 = INT64_MAX;
static int64_t t68 = 676631785LL;
int8_t x279 = -39;
int8_t x280 = INT8_MIN;
volatile int16_t x282 = INT16_MIN;
static volatile int32_t x284 = -1;
int8_t x287 = -3;
static volatile int8_t x291 = 7;
int64_t x299 = INT64_MAX;
uint64_t t74 = 445794605369247394LLU;
volatile int16_t x313 = INT16_MAX;
volatile uint32_t t78 = 969118U;
static int32_t x324 = INT32_MIN;
static uint16_t x326 = 0U;
static volatile uint32_t t81 = 9760621U;
volatile int64_t t82 = -1737844766073056LL;
volatile int64_t t83 = -39LL;
int8_t x337 = -1;
static volatile int64_t t85 = 79404389243LL;
volatile int32_t t88 = -3303928;
volatile uint32_t x359 = 175484860U;
volatile uint64_t t91 = 2139413LLU;
volatile uint64_t x373 = UINT64_MAX;
int16_t x377 = -374;
int64_t x379 = INT64_MAX;
int8_t x385 = -1;
uint32_t x386 = UINT32_MAX;
static uint64_t x387 = UINT64_MAX;
int64_t x390 = INT64_MIN;
static volatile uint64_t t97 = 182699137344LLU;
int64_t x399 = INT64_MAX;


void f0(void) {
	int64_t x1 = -4127693LL;
	uint8_t x2 = UINT8_MAX;
	volatile int16_t x4 = INT16_MAX;
	static volatile int64_t t0 = 245686LL;

	t0 = ((x1&(x2<=x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int8_t x6 = -2;
	volatile int64_t x8 = INT64_MIN;
	int64_t t1 = -1883227967LL;

	t1 = ((x5&(x6<=x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	static volatile int32_t x10 = -7665;
	volatile int64_t x12 = -75671961LL;

	t2 = ((x9&(x10<=x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 143476053881LLU;
	int32_t x14 = INT32_MAX;
	static volatile uint32_t x15 = 3215U;
	int8_t x16 = 2;
	volatile uint64_t t3 = 161956843278202LLU;

	t3 = ((x13&(x14<=x15))&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	static volatile int32_t t4 = 2514034;

	t4 = ((x17&(x18<=x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 7565U;
	uint64_t x23 = 2LLU;
	uint64_t x24 = 2691734245857842LLU;
	static uint64_t t5 = 1152991LLU;

	t5 = ((x21&(x22<=x23))&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 3U;
	int64_t x26 = -1LL;
	int16_t x27 = 1;
	int64_t x28 = INT64_MAX;

	t6 = ((x25&(x26<=x27))&x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x32 = -1;
	static int32_t t7 = -124758711;

	t7 = ((x29&(x30<=x31))&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	uint8_t x34 = UINT8_MAX;
	static volatile int8_t x35 = INT8_MAX;
	uint32_t x36 = UINT32_MAX;
	uint32_t t8 = 240733203U;

	t8 = ((x33&(x34<=x35))&x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int32_t x39 = INT32_MAX;
	volatile int16_t x40 = -3;
	int32_t t9 = -411;

	t9 = ((x37&(x38<=x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 29888U;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = -46762379578581648LL;

	t10 = ((x41&(x42<=x43))&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 442U;
	static uint16_t x48 = 20U;
	static int32_t t11 = -20102902;

	t11 = ((x45&(x46<=x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = 362534432;

	t12 = ((x49&(x50<=x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 195976;
	int64_t x55 = INT64_MIN;
	static volatile int8_t x56 = INT8_MIN;
	int32_t t13 = -488093;

	t13 = ((x53&(x54<=x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x58 = 34U;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MAX;
	int64_t t14 = -5LL;

	t14 = ((x57&(x58<=x59))&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = 2;
	int16_t x62 = INT16_MIN;
	static volatile int64_t x63 = 3211LL;
	int64_t x64 = -1LL;
	volatile int64_t t15 = 228802986032LL;

	t15 = ((x61&(x62<=x63))&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int32_t x67 = 2;
	volatile int64_t t16 = 24LL;

	t16 = ((x65&(x66<=x67))&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int32_t x70 = INT32_MAX;
	volatile int64_t x71 = INT64_MIN;
	static volatile int32_t x72 = INT32_MAX;
	static int64_t t17 = 122LL;

	t17 = ((x69&(x70<=x71))&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = -1858629798100LL;
	volatile uint8_t x75 = UINT8_MAX;
	static volatile uint16_t x76 = 24474U;
	static volatile uint64_t t18 = 3002126LLU;

	t18 = ((x73&(x74<=x75))&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x79 = -1;
	int64_t x80 = INT64_MAX;
	int64_t t19 = -1263549LL;

	t19 = ((x77&(x78<=x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int16_t x83 = INT16_MAX;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 14155386;

	t20 = ((x81&(x82<=x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 0LL;
	int8_t x86 = -23;
	int16_t x88 = INT16_MIN;
	static int64_t t21 = 21717LL;

	t21 = ((x85&(x86<=x87))&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 25U;
	static int16_t x90 = -1;
	volatile int8_t x92 = -34;

	t22 = ((x89&(x90<=x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int8_t x95 = -12;
	uint8_t x96 = UINT8_MAX;
	int32_t t23 = 33408;

	t23 = ((x93&(x94<=x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int8_t x99 = 5;
	int32_t x100 = -1;
	volatile int32_t t24 = -410823;

	t24 = ((x97&(x98<=x99))&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int64_t t25 = 1272371699916LL;

	t25 = ((x101&(x102<=x103))&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x105 = 15U;
	static int16_t x107 = 707;
	int64_t x108 = -1LL;
	volatile int64_t t26 = -30446330013LL;

	t26 = ((x105&(x106<=x107))&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 54872460616349770LLU;
	int64_t x110 = -20187127LL;
	int64_t x111 = INT64_MAX;
	int64_t x112 = 227919LL;
	static volatile uint64_t t27 = 940LLU;

	t27 = ((x109&(x110<=x111))&x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = UINT32_MAX;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	uint32_t t28 = 2198024U;

	t28 = ((x113&(x114<=x115))&x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	volatile int16_t x118 = -1958;
	uint64_t x119 = 178629LLU;

	t29 = ((x117&(x118<=x119))&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	static int64_t x122 = -56LL;
	int32_t x123 = -1191;
	volatile int32_t t30 = 0;

	t30 = ((x121&(x122<=x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 3U;
	int16_t x126 = INT16_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = -1021591;

	t31 = ((x125&(x126<=x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -45;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = 175LL;
	volatile int32_t t32 = -3177;

	t32 = ((x129&(x130<=x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = 1690744;
	uint8_t x135 = UINT8_MAX;
	int16_t x136 = INT16_MAX;

	t33 = ((x133&(x134<=x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;

	t34 = ((x137&(x138<=x139))&x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -1;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = 32809LLU;
	volatile uint64_t t35 = 10585634832820LLU;

	t35 = ((x141&(x142<=x143))&x144);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	static int64_t x146 = -1LL;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = 1;
	volatile int32_t t36 = 55302;

	t36 = ((x145&(x146<=x147))&x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int8_t x150 = -1;
	int32_t x151 = -1;
	int64_t x152 = INT64_MAX;
	int64_t t37 = -189163631137189LL;

	t37 = ((x149&(x150<=x151))&x152);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	static uint64_t x154 = 4066LLU;
	uint16_t x155 = UINT16_MAX;
	int64_t t38 = -3378996LL;

	t38 = ((x153&(x154<=x155))&x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -12;
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MIN;
	static int32_t t39 = 7294;

	t39 = ((x157&(x158<=x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x163 = 1U;
	int64_t x164 = INT64_MAX;
	int64_t t40 = -2021875682887828LL;

	t40 = ((x161&(x162<=x163))&x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x166 = 41217267795LLU;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 15U;
	volatile int64_t t41 = 2518562LL;

	t41 = ((x165&(x166<=x167))&x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	volatile int8_t x171 = INT8_MIN;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -99;

	t42 = ((x169&(x170<=x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 29U;
	uint64_t x175 = 0LLU;
	volatile uint16_t x176 = 31U;
	int32_t t43 = -794;

	t43 = ((x173&(x174<=x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = UINT64_MAX;
	volatile uint64_t x178 = 363521142301793583LLU;
	static int32_t x179 = INT32_MIN;
	volatile uint64_t t44 = 66330LLU;

	t44 = ((x177&(x178<=x179))&x180);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = UINT8_MAX;

	t45 = ((x181&(x182<=x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint64_t x186 = UINT64_MAX;
	static int32_t x187 = -36;
	int32_t x188 = INT32_MIN;

	t46 = ((x185&(x186<=x187))&x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 239U;
	volatile int16_t x190 = -1;
	static int64_t x191 = INT64_MAX;
	static int64_t x192 = -13639209299724808LL;
	volatile int64_t t47 = -119460024140LL;

	t47 = ((x189&(x190<=x191))&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 24U;
	uint64_t x194 = UINT64_MAX;
	int8_t x195 = INT8_MIN;
	int64_t t48 = 135860323161746LL;

	t48 = ((x193&(x194<=x195))&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 171512597376654162LL;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 29989U;
	static uint8_t x200 = UINT8_MAX;

	t49 = ((x197&(x198<=x199))&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = 1;
	static int32_t x202 = INT32_MIN;
	static uint32_t x203 = 96223168U;

	t50 = ((x201&(x202<=x203))&x204);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = UINT16_MAX;
	static volatile int64_t x207 = INT64_MIN;
	int16_t x208 = -1;
	volatile int32_t t51 = -253939344;

	t51 = ((x205&(x206<=x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -1LL;
	uint32_t x210 = 75U;
	int64_t x211 = 454307LL;
	static uint8_t x212 = UINT8_MAX;
	int64_t t52 = -139211189203228LL;

	t52 = ((x209&(x210<=x211))&x212);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 3U;
	int16_t x215 = -1;
	static int16_t x216 = INT16_MIN;
	int32_t t53 = 11;

	t53 = ((x213&(x214<=x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int16_t x218 = INT16_MAX;
	static int16_t x219 = 46;

	t54 = ((x217&(x218<=x219))&x220);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -1;
	volatile int64_t x222 = -1LL;
	int8_t x224 = -61;
	int32_t t55 = -422244122;

	t55 = ((x221&(x222<=x223))&x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	static int16_t x226 = INT16_MIN;
	int8_t x228 = -1;
	int32_t t56 = -446;

	t56 = ((x225&(x226<=x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	volatile int16_t x231 = INT16_MIN;
	uint64_t x232 = 290019993LLU;
	volatile uint64_t t57 = 736797406LLU;

	t57 = ((x229&(x230<=x231))&x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	int64_t x235 = 19137257474722824LL;
	int32_t x236 = INT32_MAX;
	int32_t t58 = -7210;

	t58 = ((x233&(x234<=x235))&x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -1LL;
	volatile int32_t x239 = INT32_MIN;
	volatile int16_t x240 = -44;
	int64_t t59 = -420031LL;

	t59 = ((x237&(x238<=x239))&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 0U;
	volatile int8_t x242 = INT8_MIN;
	uint32_t x243 = 99881643U;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -76931;

	t60 = ((x241&(x242<=x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 2LLU;
	int64_t x246 = INT64_MAX;
	uint64_t x247 = UINT64_MAX;
	volatile int64_t x248 = 40LL;
	static volatile uint64_t t61 = 210000LLU;

	t61 = ((x245&(x246<=x247))&x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 46366;
	int64_t x250 = 2LL;
	uint64_t x251 = 96388065831262115LLU;
	static int32_t x252 = INT32_MIN;
	int32_t t62 = 22090553;

	t62 = ((x249&(x250<=x251))&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	uint16_t x254 = 79U;
	uint64_t x255 = 647495814587412499LLU;
	static int32_t x256 = 3858927;
	int32_t t63 = 12175;

	t63 = ((x253&(x254<=x255))&x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	uint32_t x258 = 1760388U;
	int16_t x259 = INT16_MIN;
	static int32_t t64 = 18;

	t64 = ((x257&(x258<=x259))&x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	static volatile int8_t x262 = INT8_MAX;
	int32_t x263 = INT32_MIN;
	static int32_t x264 = -1;

	t65 = ((x261&(x262<=x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = 3;
	int32_t x267 = -151;
	volatile uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t66 = 5603324274793042LLU;

	t66 = ((x265&(x266<=x267))&x268);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	static uint8_t x270 = 1U;
	static int16_t x271 = -1;
	int8_t x272 = 0;
	static int64_t t67 = -244614136962898113LL;

	t67 = ((x269&(x270<=x271))&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 0;
	volatile int64_t x274 = -18LL;

	t68 = ((x273&(x274<=x275))&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = INT8_MAX;
	int16_t x278 = -2173;
	volatile int32_t t69 = -1099194;

	t69 = ((x277&(x278<=x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -1;
	uint32_t x283 = UINT32_MAX;
	int32_t t70 = 4776069;

	t70 = ((x281&(x282<=x283))&x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	volatile uint64_t x286 = 635LLU;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t71 = 52531U;

	t71 = ((x285&(x286<=x287))&x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = -21;
	static int64_t x292 = -27135924342838696LL;
	int64_t t72 = 7LL;

	t72 = ((x289&(x290<=x291))&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 47;
	static int32_t x294 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	static int32_t x296 = -1;
	volatile int32_t t73 = -9;

	t73 = ((x293&(x294<=x295))&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = UINT64_MAX;
	uint32_t x298 = UINT32_MAX;
	static uint8_t x300 = 71U;

	t74 = ((x297&(x298<=x299))&x300);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	static int16_t x302 = 6204;
	int8_t x303 = -2;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t75 = 123259U;

	t75 = ((x301&(x302<=x303))&x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MAX;
	volatile int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = UINT16_MAX;
	volatile int64_t t76 = -4LL;

	t76 = ((x305&(x306<=x307))&x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -5537645;
	volatile int16_t x310 = INT16_MIN;
	volatile uint16_t x311 = 22820U;
	int8_t x312 = -1;
	int32_t t77 = 12;

	t77 = ((x309&(x310<=x311))&x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = -1;
	uint32_t x315 = 207850U;
	static uint32_t x316 = 7440123U;

	t78 = ((x313&(x314<=x315))&x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = 910310809205961LL;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = 274U;
	volatile int16_t x320 = INT16_MAX;
	volatile int64_t t79 = -1LL;

	t79 = ((x317&(x318<=x319))&x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = -31;
	int64_t x322 = INT64_MAX;
	uint16_t x323 = 3U;
	int32_t t80 = -53786;

	t80 = ((x321&(x322<=x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	uint32_t x328 = 4442U;

	t81 = ((x325&(x326<=x327))&x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 1;
	int32_t x330 = 19728347;
	uint64_t x331 = UINT64_MAX;
	volatile int64_t x332 = 42766LL;

	t82 = ((x329&(x330<=x331))&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	uint32_t x334 = UINT32_MAX;
	int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;

	t83 = ((x333&(x334<=x335))&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = UINT16_MAX;
	int64_t x339 = -1LL;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = 426610;

	t84 = ((x337&(x338<=x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MIN;
	uint8_t x342 = 15U;
	int16_t x343 = INT16_MAX;
	int16_t x344 = INT16_MIN;

	t85 = ((x341&(x342<=x343))&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;
	int8_t x346 = INT8_MAX;
	static int8_t x347 = INT8_MIN;
	uint16_t x348 = 22U;
	volatile int32_t t86 = -64592299;

	t86 = ((x345&(x346<=x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 149377710002983013LLU;
	int64_t x350 = INT64_MAX;
	uint8_t x351 = 0U;
	int32_t x352 = INT32_MIN;
	static volatile uint64_t t87 = 23100990LLU;

	t87 = ((x349&(x350<=x351))&x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -2;
	volatile int16_t x354 = INT16_MAX;
	static int8_t x355 = 1;
	volatile int8_t x356 = INT8_MIN;

	t88 = ((x353&(x354<=x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 36U;
	int32_t x358 = -1;
	volatile uint64_t x360 = 50200LLU;
	uint64_t t89 = 4844LLU;

	t89 = ((x357&(x358<=x359))&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	volatile int64_t x362 = -1LL;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = 79748LLU;

	t90 = ((x361&(x362<=x363))&x364);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 48449064LLU;
	static int64_t x366 = -1LL;
	static int64_t x367 = -70319027995650LL;
	int32_t x368 = -1;

	t91 = ((x365&(x366<=x367))&x368);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	volatile int64_t x370 = INT64_MAX;
	int64_t x371 = INT64_MIN;
	static volatile int32_t x372 = -116120;
	int64_t t92 = -17200852LL;

	t92 = ((x369&(x370<=x371))&x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	int8_t x376 = 6;
	uint64_t t93 = 690648150060906569LLU;

	t93 = ((x373&(x374<=x375))&x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = INT32_MIN;
	volatile uint64_t x380 = 7605LLU;
	static uint64_t t94 = 130952341443LLU;

	t94 = ((x377&(x378<=x379))&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 0;
	volatile int16_t x382 = 40;
	static int8_t x383 = INT8_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = 132492;

	t95 = ((x381&(x382<=x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x388 = 6;
	static int32_t t96 = 1775;

	t96 = ((x385&(x386<=x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1023889;
	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = 87746088744LLU;

	t97 = ((x389&(x390<=x391))&x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 71;
	uint16_t x394 = 1035U;
	volatile int64_t x395 = INT64_MIN;
	volatile int16_t x396 = -1;
	int32_t t98 = -118;

	t98 = ((x393&(x394<=x395))&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = -1211816;
	uint8_t x400 = 16U;
	volatile int32_t t99 = 19403543;

	t99 = ((x397&(x398<=x399))&x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

