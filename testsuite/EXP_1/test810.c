#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -3326;
int64_t x8 = INT64_MIN;
volatile int64_t t1 = -41762202478251752LL;
volatile int16_t x11 = -1;
int32_t x16 = 36;
volatile uint8_t x22 = UINT8_MAX;
static volatile int8_t x35 = INT8_MIN;
static int32_t x36 = INT32_MAX;
int16_t x39 = INT16_MIN;
int16_t x41 = -1;
uint32_t x44 = 41U;
uint64_t t9 = 457LLU;
static int64_t x48 = 617157788138515346LL;
static int32_t x56 = -5132;
int32_t x65 = INT32_MIN;
static volatile int32_t x75 = INT32_MIN;
int8_t x79 = INT8_MIN;
volatile int32_t t18 = 989133;
volatile uint64_t t19 = 10129332LLU;
static volatile uint16_t x88 = 3U;
static int64_t x90 = 3081639131LL;
static int8_t x92 = INT8_MIN;
int32_t x93 = 0;
static volatile int8_t x94 = INT8_MAX;
int64_t x95 = -993805165231337952LL;
volatile int32_t x100 = INT32_MAX;
int16_t x101 = 294;
volatile uint16_t x108 = UINT16_MAX;
int32_t t25 = -7;
int16_t x115 = INT16_MIN;
static volatile int16_t x116 = INT16_MIN;
int8_t x125 = INT8_MAX;
int32_t x131 = INT32_MIN;
static int32_t x135 = INT32_MIN;
static volatile int32_t t32 = 274245223;
int64_t t33 = 42477270731681LL;
uint32_t x143 = 111507590U;
uint32_t x144 = UINT32_MAX;
volatile int8_t x158 = INT8_MIN;
int64_t t37 = 76704004971943LL;
volatile uint32_t t38 = 451626U;
volatile int8_t x178 = -1;
static int32_t x180 = -1;
uint32_t x182 = UINT32_MAX;
int64_t x191 = INT64_MIN;
static int32_t x194 = INT32_MIN;
int32_t x199 = -2;
int64_t x211 = INT64_MAX;
volatile int8_t x213 = 4;
int32_t x214 = INT32_MIN;
uint32_t x217 = 76216U;
static uint64_t t53 = 403696615613027LLU;
static int32_t x245 = 42179313;
static int16_t x246 = 342;
int64_t x247 = INT64_MIN;
int64_t x248 = INT64_MAX;
static volatile int8_t x254 = -1;
static uint64_t x260 = UINT64_MAX;
int8_t x263 = INT8_MIN;
uint32_t x265 = 1023107795U;
int8_t x267 = INT8_MIN;
uint64_t t60 = 366105993387LLU;
volatile uint16_t x269 = UINT16_MAX;
volatile int64_t x271 = INT64_MAX;
volatile int32_t x273 = INT32_MIN;
volatile uint32_t x283 = 482555U;
uint64_t x288 = UINT64_MAX;
static int8_t x293 = INT8_MIN;
int16_t x295 = 0;
int16_t x302 = INT16_MAX;
volatile int16_t x303 = -529;
static int64_t x305 = INT64_MAX;
volatile int8_t x309 = INT8_MIN;
volatile uint16_t x312 = UINT16_MAX;
uint64_t x318 = 788245648821461477LLU;
int64_t t74 = -5968LL;
volatile int8_t x344 = INT8_MIN;
volatile uint64_t t79 = 11746LLU;
int64_t x351 = INT64_MIN;
uint64_t x363 = UINT64_MAX;
static int64_t x365 = INT64_MIN;
volatile uint8_t x366 = 46U;
static uint8_t x370 = 28U;
uint64_t x373 = UINT64_MAX;
volatile int8_t x381 = INT8_MIN;
volatile uint32_t t88 = 243136U;
uint64_t t89 = 24460168918LLU;
static uint16_t x391 = UINT16_MAX;
int64_t x401 = INT64_MIN;
static uint64_t x420 = 842953921LLU;
int64_t t97 = 12459814058835LL;
int64_t x425 = -102339933571LL;
uint64_t t98 = 80LLU;
uint32_t x431 = 184U;


void f0(void) {
	int64_t x1 = -3928782457LL;
	static volatile int8_t x3 = 11;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 1343LL;

	t0 = (((x1%x2)&x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	uint8_t x6 = 2U;
	int32_t x7 = 26687;

	t1 = (((x5%x6)&x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 2U;
	int64_t x10 = INT64_MAX;
	uint8_t x12 = UINT8_MAX;
	int64_t t2 = 294836592721177922LL;

	t2 = (((x9%x10)&x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MIN;
	int64_t t3 = 492LL;

	t3 = (((x13%x14)&x15)/x16);

	if (t3 != -3LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int64_t x18 = -1LL;
	uint64_t x19 = UINT64_MAX;
	static int16_t x20 = 2;
	static uint64_t t4 = 802192LLU;

	t4 = (((x17%x18)&x19)/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MAX;
	int32_t t5 = -21804289;

	t5 = (((x21%x22)&x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 133428798157LL;
	int8_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	volatile uint32_t x28 = 96830U;
	uint64_t t6 = 108451383237672580LLU;

	t6 = (((x25%x26)&x27)/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MIN;
	uint64_t x34 = 1108033LLU;
	volatile uint64_t t7 = 326616LLU;

	t7 = (((x33%x34)&x35)/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MIN;
	uint16_t x38 = 102U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -6167;

	t8 = (((x37%x38)&x39)/x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = 27U;
	uint64_t x43 = 137970472LLU;

	t9 = (((x41%x42)&x43)/x44);

	if (t9 != 3365133LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MAX;
	static int64_t x46 = INT64_MIN;
	volatile uint16_t x47 = 0U;
	volatile int64_t t10 = 93626840512657680LL;

	t10 = (((x45%x46)&x47)/x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 2U;
	uint32_t x50 = 304574572U;
	uint8_t x51 = UINT8_MAX;
	int64_t x52 = 353626663934414LL;
	volatile int64_t t11 = 1504015639028LL;

	t11 = (((x49%x50)&x51)/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	int64_t x54 = INT64_MIN;
	int64_t x55 = -2192658265LL;
	volatile int64_t t12 = -3509261667625245LL;

	t12 = (((x53%x54)&x55)/x56);

	if (t12 != -409647LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	int64_t x58 = -7363633084LL;
	int8_t x59 = -1;
	volatile int32_t x60 = -1;
	volatile int64_t t13 = 7894941857LL;

	t13 = (((x57%x58)&x59)/x60);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 1U;
	static int8_t x62 = INT8_MIN;
	int16_t x63 = -1;
	int32_t x64 = INT32_MIN;
	int32_t t14 = 42;

	t14 = (((x61%x62)&x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 3807U;
	volatile int64_t x67 = INT64_MIN;
	uint32_t x68 = 1731U;
	volatile int64_t t15 = 194027415545LL;

	t15 = (((x65%x66)&x67)/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = -1959;
	static volatile uint8_t x70 = UINT8_MAX;
	int64_t x71 = INT64_MIN;
	uint32_t x72 = UINT32_MAX;
	volatile int64_t t16 = 1436LL;

	t16 = (((x69%x70)&x71)/x72);

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 95348416LLU;
	uint64_t x74 = 3439643913LLU;
	int8_t x76 = INT8_MAX;
	volatile uint64_t t17 = 384162LLU;

	t17 = (((x73%x74)&x75)/x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 27;
	int8_t x78 = INT8_MIN;
	int8_t x80 = INT8_MIN;

	t18 = (((x77%x78)&x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 7U;
	int64_t x82 = INT64_MAX;
	int32_t x83 = 6593;
	static uint64_t x84 = 4228759906LLU;

	t19 = (((x81%x82)&x83)/x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	int64_t x86 = -1LL;
	static int8_t x87 = -48;
	int64_t t20 = 21304135LL;

	t20 = (((x85%x86)&x87)/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = 21;
	int16_t x91 = INT16_MAX;
	int64_t t21 = 3408792959512195LL;

	t21 = (((x89%x90)&x91)/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x96 = -4058477;
	volatile int64_t t22 = -10461797808035LL;

	t22 = (((x93%x94)&x95)/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MIN;
	uint16_t x99 = 73U;
	volatile int32_t t23 = -22;

	t23 = (((x97%x98)&x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x102 = 112LLU;
	int32_t x103 = INT32_MIN;
	static uint64_t x104 = 291LLU;
	uint64_t t24 = 66729235796LLU;

	t24 = (((x101%x102)&x103)/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x105 = 3U;
	int8_t x106 = -1;
	int32_t x107 = INT32_MIN;

	t25 = (((x105%x106)&x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	uint32_t x110 = UINT32_MAX;
	volatile int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MAX;
	volatile uint32_t t26 = 1025145255U;

	t26 = (((x109%x110)&x111)/x112);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	volatile int32_t t27 = -21404;

	t27 = (((x113%x114)&x115)/x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -1LL;
	uint16_t x120 = 6U;
	static volatile uint64_t t28 = 10784362864852LLU;

	t28 = (((x117%x118)&x119)/x120);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	int16_t x122 = INT16_MAX;
	volatile int32_t x123 = 26332149;
	uint8_t x124 = 1U;
	int32_t t29 = 10487;

	t29 = (((x121%x122)&x123)/x124);

	if (t29 != 26332149) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = 1279LLU;
	static int8_t x127 = 10;
	int16_t x128 = INT16_MAX;
	static volatile uint64_t t30 = 1047598784817LLU;

	t30 = (((x125%x126)&x127)/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t31 = -191;

	t31 = (((x129%x130)&x131)/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -2;
	volatile int32_t x134 = INT32_MAX;
	volatile int8_t x136 = INT8_MIN;

	t32 = (((x133%x134)&x135)/x136);

	if (t32 != 16777216) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = -1LL;
	int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MAX;

	t33 = (((x137%x138)&x139)/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 6452U;
	int32_t x142 = -11977;
	volatile uint32_t t34 = 1740U;

	t34 = (((x141%x142)&x143)/x144);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = 16917957;
	uint16_t x146 = 10U;
	int8_t x147 = 0;
	uint16_t x148 = 246U;
	static int32_t t35 = 24657;

	t35 = (((x145%x146)&x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = -4LL;
	uint64_t x150 = 216690LLU;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	volatile uint64_t t36 = 48681865630669199LLU;

	t36 = (((x149%x150)&x151)/x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = 40467751;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = INT64_MAX;

	t37 = (((x157%x158)&x159)/x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = -1;
	static uint32_t x162 = UINT32_MAX;
	uint16_t x163 = 54U;
	static int32_t x164 = INT32_MIN;

	t38 = (((x161%x162)&x163)/x164);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = -1;
	int32_t x166 = 46897116;
	volatile int64_t x167 = INT64_MAX;
	static int16_t x168 = -1;
	int64_t t39 = 5LL;

	t39 = (((x165%x166)&x167)/x168);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 2151U;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = 4083090688405462701LLU;
	int8_t x172 = 1;
	uint64_t t40 = 112920009504958LLU;

	t40 = (((x169%x170)&x171)/x172);

	if (t40 != 2085LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x177 = -59;
	uint64_t x179 = 0LLU;
	static volatile uint64_t t41 = 211778LLU;

	t41 = (((x177%x178)&x179)/x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x181 = -1LL;
	int32_t x183 = INT32_MAX;
	int8_t x184 = 5;
	volatile int64_t t42 = 20566761LL;

	t42 = (((x181%x182)&x183)/x184);

	if (t42 != 429496729LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = 118U;
	static int8_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	static int64_t x188 = INT64_MIN;
	static int64_t t43 = 1LL;

	t43 = (((x185%x186)&x187)/x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 81631286U;
	int8_t x190 = INT8_MAX;
	uint8_t x192 = 53U;
	static volatile int64_t t44 = 674308273LL;

	t44 = (((x189%x190)&x191)/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x193 = -3582493;
	volatile int8_t x195 = INT8_MIN;
	int32_t x196 = -1;
	int32_t t45 = 2039;

	t45 = (((x193%x194)&x195)/x196);

	if (t45 != 3582592) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x197 = INT16_MAX;
	static volatile int16_t x198 = -9015;
	int32_t x200 = 101554622;
	static int32_t t46 = -7469;

	t46 = (((x197%x198)&x199)/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x201 = 26267712U;
	int8_t x202 = INT8_MIN;
	int64_t x203 = 681294557187939294LL;
	static int32_t x204 = -1;
	volatile int64_t t47 = -40LL;

	t47 = (((x201%x202)&x203)/x204);

	if (t47 != -9441344LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = 797575068181872LLU;
	static int64_t x206 = -1LL;
	uint16_t x207 = 0U;
	static volatile int32_t x208 = INT32_MAX;
	static volatile uint64_t t48 = 112491LLU;

	t48 = (((x205%x206)&x207)/x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = -1;
	int32_t x210 = -2437840;
	uint8_t x212 = 119U;
	volatile int64_t t49 = -7910LL;

	t49 = (((x209%x210)&x211)/x212);

	if (t49 != 77507328040796435LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x215 = INT32_MAX;
	static volatile int8_t x216 = -1;
	static int32_t t50 = 745769;

	t50 = (((x213%x214)&x215)/x216);

	if (t50 != -4) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	static int32_t x220 = INT32_MIN;
	int64_t t51 = 21LL;

	t51 = (((x217%x218)&x219)/x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x221 = 3U;
	int16_t x222 = -1;
	static int64_t x223 = 113616470879976151LL;
	uint16_t x224 = 2U;
	volatile int64_t t52 = 91807445156181LL;

	t52 = (((x221%x222)&x223)/x224);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x230 = 49056LLU;
	static int64_t x231 = INT64_MIN;
	volatile int32_t x232 = -1;

	t53 = (((x229%x230)&x231)/x232);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x233 = 15708;
	int32_t x234 = -10376530;
	static volatile int64_t x235 = INT64_MIN;
	int32_t x236 = 7810640;
	volatile int64_t t54 = 13769735LL;

	t54 = (((x233%x234)&x235)/x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = UINT8_MAX;
	int64_t x242 = -91656747402657337LL;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = 22U;
	int64_t t55 = -5288334653625LL;

	t55 = (((x241%x242)&x243)/x244);

	if (t55 != 5LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t t56 = -63642318215310LL;

	t56 = (((x245%x246)&x247)/x248);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x253 = -58;
	volatile int8_t x255 = INT8_MIN;
	volatile int64_t x256 = INT64_MAX;
	int64_t t57 = -29358724LL;

	t57 = (((x253%x254)&x255)/x256);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = 6144;
	int32_t x258 = -25492;
	int32_t x259 = -12;
	uint64_t t58 = 2297LLU;

	t58 = (((x257%x258)&x259)/x260);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x261 = 5U;
	int32_t x262 = 37;
	volatile int16_t x264 = -1;
	volatile int32_t t59 = -155;

	t59 = (((x261%x262)&x263)/x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x266 = UINT64_MAX;
	int16_t x268 = INT16_MIN;

	t60 = (((x265%x266)&x267)/x268);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x270 = UINT8_MAX;
	int8_t x272 = INT8_MIN;
	volatile int64_t t61 = -25586832LL;

	t61 = (((x269%x270)&x271)/x272);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x274 = INT32_MAX;
	static uint8_t x275 = 5U;
	volatile uint8_t x276 = 6U;
	volatile int32_t t62 = 159;

	t62 = (((x273%x274)&x275)/x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x277 = INT32_MIN;
	static volatile uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	int32_t x280 = -104;
	uint32_t t63 = 28840U;

	t63 = (((x277%x278)&x279)/x280);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = 2;
	int32_t x282 = -1;
	int64_t x284 = INT64_MAX;
	int64_t t64 = 18702LL;

	t64 = (((x281%x282)&x283)/x284);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x285 = 84800989479704LLU;
	int8_t x286 = INT8_MIN;
	static int8_t x287 = INT8_MIN;
	volatile uint64_t t65 = 14366LLU;

	t65 = (((x285%x286)&x287)/x288);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x294 = UINT8_MAX;
	static uint8_t x296 = 62U;
	int32_t t66 = 243490;

	t66 = (((x293%x294)&x295)/x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -11;
	volatile int16_t x298 = -1;
	int16_t x299 = 0;
	volatile int16_t x300 = -1;
	int32_t t67 = 0;

	t67 = (((x297%x298)&x299)/x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = 1LL;
	volatile uint16_t x304 = 21983U;
	int64_t t68 = -94LL;

	t68 = (((x301%x302)&x303)/x304);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x306 = UINT32_MAX;
	volatile uint8_t x307 = 60U;
	volatile int32_t x308 = INT32_MIN;
	volatile int64_t t69 = -7043796062LL;

	t69 = (((x305%x306)&x307)/x308);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x310 = -59;
	int16_t x311 = -50;
	int32_t t70 = -50057;

	t70 = (((x309%x310)&x311)/x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = 0;
	volatile int16_t x314 = INT16_MIN;
	uint8_t x315 = 4U;
	int64_t x316 = -1LL;
	int64_t t71 = 22638842817LL;

	t71 = (((x313%x314)&x315)/x316);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = 14983LL;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	volatile uint64_t t72 = 11260LLU;

	t72 = (((x317%x318)&x319)/x320);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	uint16_t x322 = UINT16_MAX;
	int8_t x323 = 1;
	volatile int64_t x324 = -1LL;
	int64_t t73 = 25427493LL;

	t73 = (((x321%x322)&x323)/x324);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = -17151090;
	int64_t x327 = INT64_MAX;
	static int8_t x328 = INT8_MIN;

	t74 = (((x325%x326)&x327)/x328);

	if (t74 != -72057594037899831LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = -1LL;
	uint16_t x331 = 263U;
	int64_t x332 = INT64_MIN;
	volatile int64_t t75 = 15915LL;

	t75 = (((x329%x330)&x331)/x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x333 = INT64_MIN;
	int64_t x334 = -190976865345780LL;
	int32_t x335 = INT32_MIN;
	int16_t x336 = -209;
	volatile int64_t t76 = 37007424754359LL;

	t76 = (((x333%x334)&x335)/x336);

	if (t76 != 690554705890LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = -1;
	int64_t x338 = 147421739LL;
	static volatile int16_t x339 = -1;
	int32_t x340 = INT32_MIN;
	volatile int64_t t77 = -23LL;

	t77 = (((x337%x338)&x339)/x340);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = -1;
	int8_t x343 = INT8_MIN;
	volatile int64_t t78 = 1354782205LL;

	t78 = (((x341%x342)&x343)/x344);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x345 = -1;
	int8_t x346 = INT8_MIN;
	static volatile uint32_t x347 = UINT32_MAX;
	uint64_t x348 = 1996LLU;

	t79 = (((x345%x346)&x347)/x348);

	if (t79 != 2151787LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = 15;
	int8_t x350 = INT8_MIN;
	static volatile int16_t x352 = -38;
	static int64_t t80 = 1903LL;

	t80 = (((x349%x350)&x351)/x352);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = 678;
	int32_t x354 = INT32_MIN;
	uint16_t x355 = 16380U;
	volatile int64_t x356 = -2178739077439LL;
	int64_t t81 = -13LL;

	t81 = (((x353%x354)&x355)/x356);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = INT8_MAX;
	static volatile int64_t x358 = INT64_MIN;
	int8_t x359 = 0;
	uint16_t x360 = 826U;
	volatile int64_t t82 = 121050475992LL;

	t82 = (((x357%x358)&x359)/x360);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x361 = 3U;
	int64_t x362 = INT64_MAX;
	volatile uint8_t x364 = 13U;
	volatile uint64_t t83 = 22123802093840LLU;

	t83 = (((x361%x362)&x363)/x364);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x367 = -28136268LL;
	static int32_t x368 = INT32_MAX;
	int64_t t84 = 119946150262864863LL;

	t84 = (((x365%x366)&x367)/x368);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = -8;
	int32_t x371 = INT32_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t85 = 124;

	t85 = (((x369%x370)&x371)/x372);

	if (t85 != -16777215) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = INT64_MIN;
	static int16_t x376 = -1;
	uint64_t t86 = 270465604002513LLU;

	t86 = (((x373%x374)&x375)/x376);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x377 = 4U;
	int64_t x378 = 25859085LL;
	static uint8_t x379 = 52U;
	int32_t x380 = -50627650;
	volatile int64_t t87 = 3684301958834234187LL;

	t87 = (((x377%x378)&x379)/x380);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x382 = INT8_MAX;
	volatile uint32_t x383 = 1U;
	static volatile int8_t x384 = INT8_MAX;

	t88 = (((x381%x382)&x383)/x384);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = INT64_MIN;
	uint32_t x386 = 946U;
	static uint64_t x387 = 1LLU;
	volatile int64_t x388 = INT64_MIN;

	t89 = (((x385%x386)&x387)/x388);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x389 = 482U;
	int16_t x390 = INT16_MIN;
	static uint32_t x392 = 2906064U;
	static volatile uint32_t t90 = 29922529U;

	t90 = (((x389%x390)&x391)/x392);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x397 = INT32_MAX;
	int16_t x398 = INT16_MAX;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MAX;
	int64_t t91 = -87914LL;

	t91 = (((x397%x398)&x399)/x400);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x402 = 1U;
	uint64_t x403 = UINT64_MAX;
	volatile uint16_t x404 = 1U;
	static uint64_t t92 = 1LLU;

	t92 = (((x401%x402)&x403)/x404);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	static uint32_t x407 = UINT32_MAX;
	uint16_t x408 = 23U;
	volatile uint32_t t93 = 25246013U;

	t93 = (((x405%x406)&x407)/x408);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MAX;
	volatile uint64_t x410 = 480341LLU;
	int8_t x411 = -1;
	uint16_t x412 = 2U;
	uint64_t t94 = 276545784826600242LLU;

	t94 = (((x409%x410)&x411)/x412);

	if (t94 != 179688LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = 30U;
	uint64_t x414 = 409229084938LLU;
	int16_t x415 = INT16_MIN;
	int8_t x416 = -1;
	volatile uint64_t t95 = 66839646500LLU;

	t95 = (((x413%x414)&x415)/x416);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = 372;
	int32_t x418 = INT32_MIN;
	volatile uint16_t x419 = 18U;
	static volatile uint64_t t96 = 2019183002413156LLU;

	t96 = (((x417%x418)&x419)/x420);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = -1;
	static uint32_t x423 = UINT32_MAX;
	int64_t x424 = INT64_MAX;

	t97 = (((x421%x422)&x423)/x424);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x426 = -2;
	uint64_t x427 = 49332230161024LLU;
	volatile uint64_t x428 = UINT64_MAX;

	t98 = (((x425%x426)&x427)/x428);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = 607428U;
	int32_t x430 = INT32_MAX;
	static uint16_t x432 = 21U;
	static uint32_t t99 = 23U;

	t99 = (((x429%x430)&x431)/x432);

	if (t99 != 6U) { NG(); } else { ; }
	
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

