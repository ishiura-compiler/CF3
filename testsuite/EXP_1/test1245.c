#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 14U;
static volatile uint64_t x15 = UINT64_MAX;
int32_t x19 = 42612494;
int64_t x20 = 171272647207664LL;
int64_t x21 = INT64_MAX;
static int8_t x25 = -1;
int32_t x26 = -1;
uint8_t x28 = 1U;
uint64_t x48 = UINT64_MAX;
int32_t t12 = -237757;
static int8_t x53 = INT8_MIN;
int8_t x62 = -1;
int32_t x64 = INT32_MAX;
int64_t x65 = -64813906LL;
int32_t x66 = -1499081;
static int16_t x67 = 3;
int64_t x72 = -1LL;
int32_t t18 = -10756;
volatile uint8_t x93 = 1U;
int32_t x95 = 67;
volatile int32_t t25 = 265061822;
int64_t x108 = INT64_MIN;
volatile int32_t t29 = 651475;
volatile int32_t t31 = 6;
uint8_t x129 = 98U;
int32_t t33 = -19108810;
volatile uint32_t x137 = 152769717U;
uint16_t x138 = 87U;
static int64_t x139 = INT64_MAX;
static uint8_t x149 = 22U;
uint8_t x156 = UINT8_MAX;
volatile int32_t t38 = -3614221;
int16_t x163 = INT16_MAX;
int32_t x165 = -64;
int8_t x166 = INT8_MIN;
int64_t x169 = INT64_MAX;
int64_t x181 = -1LL;
static int32_t t44 = -30;
int8_t x190 = 1;
int32_t x205 = -1;
int32_t x207 = 393829893;
static uint64_t x215 = 126599864509662530LLU;
uint16_t x219 = 4517U;
uint16_t x220 = 127U;
int32_t t54 = -81;
int16_t x225 = INT16_MIN;
static int64_t x227 = -1LL;
int8_t x230 = -1;
static uint32_t x241 = 226534925U;
int32_t x248 = INT32_MIN;
int8_t x253 = INT8_MIN;
int64_t x266 = -1LL;
uint16_t x274 = UINT16_MAX;
volatile int32_t x276 = INT32_MAX;
uint64_t x277 = 13550925865879792LLU;
static volatile int16_t x279 = -1;
volatile uint64_t x280 = 6408839234329LLU;
volatile uint64_t x282 = 0LLU;
uint32_t x284 = 19314630U;
int32_t t68 = 744843790;
uint32_t x291 = 205542697U;
static int16_t x295 = -1;
int16_t x298 = INT16_MIN;
static int8_t x299 = -1;
volatile int32_t t71 = -340688;
static int32_t x302 = -10496695;
volatile uint16_t x311 = 1216U;
volatile int32_t t74 = 1580;
volatile int32_t x319 = INT32_MIN;
int32_t x322 = -15572;
static int8_t x324 = INT8_MAX;
static int8_t x328 = 46;
static volatile int16_t x330 = 5;
volatile int32_t t80 = 0;
volatile int64_t x337 = INT64_MIN;
int16_t x340 = -1;
static uint32_t x343 = 221U;
int32_t t82 = 0;
int8_t x346 = -13;
static volatile int32_t x347 = INT32_MIN;
static int32_t t83 = -1940949;
int32_t x356 = INT32_MAX;
int64_t x357 = -1LL;
int32_t t86 = -118929;
volatile int32_t t87 = -10723890;
int64_t x369 = INT64_MIN;
static volatile int32_t x376 = INT32_MAX;
uint16_t x380 = 3U;
uint16_t x386 = UINT16_MAX;
int8_t x390 = INT8_MIN;
volatile int64_t x392 = INT64_MIN;
uint16_t x394 = UINT16_MAX;
static int64_t x396 = -1LL;
uint16_t x407 = 1867U;
volatile uint8_t x410 = UINT8_MAX;
int32_t t99 = 590380;


void f0(void) {
	uint64_t x1 = 781LLU;
	int64_t x2 = INT64_MAX;
	static volatile uint32_t x3 = UINT32_MAX;
	int16_t x4 = -79;
	volatile int32_t t0 = 35639;

	t0 = (((x1==x2)%x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 77398218285782LLU;
	uint16_t x7 = 229U;
	int16_t x8 = -1;
	static volatile int32_t t1 = -5;

	t1 = (((x5==x6)%x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -205LL;
	int16_t x10 = -425;
	volatile uint32_t x12 = 868229096U;
	volatile int32_t t2 = -11;

	t2 = (((x9==x10)%x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	uint16_t x14 = 94U;
	uint16_t x16 = UINT16_MAX;
	static volatile int32_t t3 = -237059907;

	t3 = (((x13==x14)%x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 2;
	static uint64_t x18 = UINT64_MAX;
	volatile int32_t t4 = -16784;

	t4 = (((x17==x18)%x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -1LL;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -20336;

	t5 = (((x21==x22)%x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = -1;
	volatile int32_t t6 = 2;

	t6 = (((x25==x26)%x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	int32_t x30 = 2298;
	int8_t x31 = INT8_MIN;
	static uint16_t x32 = 0U;
	int32_t t7 = 1;

	t7 = (((x29==x30)%x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 2U;
	int32_t x34 = INT32_MIN;
	int8_t x35 = -1;
	volatile int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -65525;

	t8 = (((x33==x34)%x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile int16_t x38 = INT16_MIN;
	int64_t x39 = -1LL;
	volatile uint32_t x40 = 334474U;
	volatile int32_t t9 = 86;

	t9 = (((x37==x38)%x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	static int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	int32_t x44 = 30370;
	volatile int32_t t10 = -190;

	t10 = (((x41==x42)%x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = -1LL;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	static int32_t t11 = -400377950;

	t11 = (((x45==x46)%x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int32_t x50 = INT32_MAX;
	uint16_t x51 = 2U;
	int8_t x52 = -1;

	t12 = (((x49==x50)%x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 3875U;
	static volatile int32_t x55 = INT32_MAX;
	int64_t x56 = -35841713315650137LL;
	volatile int32_t t13 = 13;

	t13 = (((x53==x54)%x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -105;
	int8_t x58 = 7;
	static uint64_t x59 = 449647LLU;
	uint16_t x60 = 407U;
	static int32_t t14 = 2146;

	t14 = (((x57==x58)%x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 12U;
	int16_t x63 = -873;
	int32_t t15 = -71906;

	t15 = (((x61==x62)%x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = 46566139;

	t16 = (((x65==x66)%x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = -1;
	volatile int32_t x71 = -1;
	volatile int32_t t17 = -54;

	t17 = (((x69==x70)%x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 1066309692963LLU;
	volatile uint8_t x74 = 8U;
	static int16_t x75 = 2;
	uint8_t x76 = UINT8_MAX;

	t18 = (((x73==x74)%x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -419LL;
	uint32_t x78 = UINT32_MAX;
	static int8_t x79 = INT8_MIN;
	int64_t x80 = -1LL;
	static volatile int32_t t19 = 14;

	t19 = (((x77==x78)%x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint32_t x82 = 597101U;
	int64_t x83 = INT64_MAX;
	int8_t x84 = 0;
	int32_t t20 = -209512539;

	t20 = (((x81==x82)%x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	static int8_t x87 = INT8_MIN;
	int16_t x88 = -1;
	volatile int32_t t21 = 1364;

	t21 = (((x85==x86)%x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 198LLU;
	int64_t x90 = -1LL;
	volatile uint32_t x91 = UINT32_MAX;
	static int32_t x92 = -1;
	static volatile int32_t t22 = -846;

	t22 = (((x89==x90)%x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = 2;
	int16_t x96 = -1;
	int32_t t23 = -25988720;

	t23 = (((x93==x94)%x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MAX;
	volatile int8_t x99 = 1;
	volatile int64_t x100 = 20395LL;
	int32_t t24 = 37843;

	t24 = (((x97==x98)%x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 0LL;
	uint16_t x102 = UINT16_MAX;
	int64_t x103 = INT64_MIN;
	static int32_t x104 = INT32_MIN;

	t25 = (((x101==x102)%x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	uint8_t x106 = 7U;
	int64_t x107 = INT64_MIN;
	static int32_t t26 = 334080370;

	t26 = (((x105==x106)%x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int64_t x110 = -41707LL;
	int64_t x111 = INT64_MIN;
	uint16_t x112 = 7U;
	volatile int32_t t27 = -10673245;

	t27 = (((x109==x110)%x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = 6685540;
	uint32_t x116 = 432363U;
	int32_t t28 = 583249;

	t28 = (((x113==x114)%x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 48749367U;
	int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;
	uint8_t x120 = UINT8_MAX;

	t29 = (((x117==x118)%x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -22;
	uint64_t x122 = 27LLU;
	volatile uint64_t x123 = UINT64_MAX;
	volatile int16_t x124 = INT16_MAX;
	int32_t t30 = -77969;

	t30 = (((x121==x122)%x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 95941370897482924LLU;
	int32_t x126 = -1;
	static volatile uint32_t x127 = 636661721U;
	int32_t x128 = 172061162;

	t31 = (((x125==x126)%x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 15U;
	volatile int8_t x131 = INT8_MAX;
	int64_t x132 = INT64_MIN;
	static int32_t t32 = -3105831;

	t32 = (((x129==x130)%x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 1U;
	volatile int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = 244698490776871LLU;

	t33 = (((x133==x134)%x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x140 = 32667049U;
	static volatile int32_t t34 = 2913;

	t34 = (((x137==x138)%x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	static int64_t x142 = INT64_MIN;
	uint16_t x143 = 59U;
	uint32_t x144 = 12553U;
	static volatile int32_t t35 = -9500396;

	t35 = (((x141==x142)%x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = UINT64_MAX;
	int32_t t36 = 85014;

	t36 = (((x145==x146)%x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = -2;
	int8_t x151 = INT8_MIN;
	volatile int16_t x152 = -1;
	volatile int32_t t37 = 0;

	t37 = (((x149==x150)%x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	uint64_t x154 = 475606919LLU;
	static int8_t x155 = INT8_MIN;

	t38 = (((x153==x154)%x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x157 = -151442611;
	static volatile int16_t x158 = INT16_MAX;
	int16_t x159 = INT16_MAX;
	static int32_t x160 = 32462;
	volatile int32_t t39 = 22;

	t39 = (((x157==x158)%x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 34982952U;
	uint64_t x162 = 361320324725842030LLU;
	int64_t x164 = INT64_MIN;
	static int32_t t40 = -15;

	t40 = (((x161==x162)%x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x167 = 4U;
	int64_t x168 = 24LL;
	volatile int32_t t41 = -27;

	t41 = (((x165==x166)%x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	volatile uint32_t x171 = 13644992U;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -807133691;

	t42 = (((x169==x170)%x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 0;
	int8_t x174 = INT8_MAX;
	int32_t x175 = 385808605;
	uint32_t x176 = 7453271U;
	volatile int32_t t43 = -172510854;

	t43 = (((x173==x174)%x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x182 = UINT64_MAX;
	volatile int8_t x183 = -8;
	int8_t x184 = -1;

	t44 = (((x181==x182)%x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 941553279;
	int8_t x186 = INT8_MIN;
	static uint32_t x187 = 22U;
	volatile int64_t x188 = -3817580896LL;
	static int32_t t45 = -48439197;

	t45 = (((x185==x186)%x187)<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = UINT8_MAX;
	uint16_t x191 = 27U;
	int8_t x192 = -7;
	volatile int32_t t46 = -24;

	t46 = (((x189==x190)%x191)<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 1U;
	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = UINT32_MAX;
	uint32_t x196 = 15542U;
	volatile int32_t t47 = -37431140;

	t47 = (((x193==x194)%x195)<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = -1;
	int8_t x198 = INT8_MIN;
	volatile int16_t x199 = -1;
	int8_t x200 = -1;
	static int32_t t48 = -2730;

	t48 = (((x197==x198)%x199)<=x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = 1U;
	int32_t x203 = -1;
	uint64_t x204 = 4139305328238042011LLU;
	int32_t t49 = 7;

	t49 = (((x201==x202)%x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x206 = UINT8_MAX;
	static uint64_t x208 = 1392218003172LLU;
	int32_t t50 = 10772645;

	t50 = (((x205==x206)%x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = UINT8_MAX;
	int8_t x210 = INT8_MAX;
	static uint8_t x211 = 4U;
	int8_t x212 = -14;
	volatile int32_t t51 = -552;

	t51 = (((x209==x210)%x211)<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = 6;
	static uint64_t x214 = 44571833726672LLU;
	uint64_t x216 = UINT64_MAX;
	int32_t t52 = 0;

	t52 = (((x213==x214)%x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 866LL;
	static int8_t x218 = -1;
	static int32_t t53 = -142;

	t53 = (((x217==x218)%x219)<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 3180056U;
	int32_t x222 = -14723273;
	int32_t x223 = INT32_MIN;
	int32_t x224 = 191;

	t54 = (((x221==x222)%x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x226 = 6627764;
	int8_t x228 = -1;
	int32_t t55 = -2216709;

	t55 = (((x225==x226)%x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	static uint16_t x231 = 3U;
	int64_t x232 = INT64_MIN;
	volatile int32_t t56 = 369814144;

	t56 = (((x229==x230)%x231)<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x242 = -1;
	volatile int32_t x243 = -1;
	static uint64_t x244 = 1742LLU;
	volatile int32_t t57 = 1;

	t57 = (((x241==x242)%x243)<=x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MAX;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = 121;
	volatile int32_t t58 = -360486;

	t58 = (((x245==x246)%x247)<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = 240035LLU;
	volatile int32_t x250 = 373;
	volatile int16_t x251 = -1;
	volatile int8_t x252 = -1;
	volatile int32_t t59 = 745194;

	t59 = (((x249==x250)%x251)<=x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x254 = 4;
	static uint16_t x255 = UINT16_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t60 = -63715068;

	t60 = (((x253==x254)%x255)<=x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = 1;
	uint64_t x258 = UINT64_MAX;
	volatile int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MAX;
	int32_t t61 = 29974001;

	t61 = (((x257==x258)%x259)<=x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x261 = INT64_MIN;
	int16_t x262 = 7;
	volatile int32_t x263 = 48085;
	volatile uint32_t x264 = 632U;
	static volatile int32_t t62 = 749;

	t62 = (((x261==x262)%x263)<=x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = 110;
	uint8_t x267 = UINT8_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t63 = -133644;

	t63 = (((x265==x266)%x267)<=x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MIN;
	volatile uint8_t x270 = 9U;
	int16_t x271 = 2;
	int64_t x272 = -418621442647602732LL;
	int32_t t64 = 0;

	t64 = (((x269==x270)%x271)<=x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MAX;
	volatile uint16_t x275 = 958U;
	static volatile int32_t t65 = -34860542;

	t65 = (((x273==x274)%x275)<=x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x278 = -1;
	static volatile int32_t t66 = -44;

	t66 = (((x277==x278)%x279)<=x280);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	int16_t x283 = 778;
	int32_t t67 = -2005283;

	t67 = (((x281==x282)%x283)<=x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 1U;
	int16_t x288 = -1;

	t68 = (((x285==x286)%x287)<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 2U;
	int16_t x290 = 6;
	static int8_t x292 = 0;
	int32_t t69 = 28;

	t69 = (((x289==x290)%x291)<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x294 = 5U;
	uint64_t x296 = UINT64_MAX;
	static volatile int32_t t70 = -992131;

	t70 = (((x293==x294)%x295)<=x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x297 = 9731;
	uint8_t x300 = UINT8_MAX;

	t71 = (((x297==x298)%x299)<=x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x301 = -1;
	int64_t x303 = -21724LL;
	int16_t x304 = INT16_MIN;
	volatile int32_t t72 = 3044750;

	t72 = (((x301==x302)%x303)<=x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = 156351U;
	uint64_t x306 = UINT64_MAX;
	volatile int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MAX;
	static int32_t t73 = -288515;

	t73 = (((x305==x306)%x307)<=x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x309 = 10U;
	static volatile uint16_t x310 = UINT16_MAX;
	int32_t x312 = 27;

	t74 = (((x309==x310)%x311)<=x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x313 = UINT32_MAX;
	int16_t x314 = -1;
	int32_t x315 = 55;
	uint16_t x316 = 247U;
	int32_t t75 = 46982;

	t75 = (((x313==x314)%x315)<=x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 728U;
	static volatile uint64_t x318 = 59870549LLU;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t76 = -5847;

	t76 = (((x317==x318)%x319)<=x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MIN;
	static uint32_t x323 = 71900907U;
	volatile int32_t t77 = 58551;

	t77 = (((x321==x322)%x323)<=x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = 15324805346LL;
	uint8_t x326 = 65U;
	int32_t x327 = -1;
	static int32_t t78 = 2158;

	t78 = (((x325==x326)%x327)<=x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 4932U;
	int64_t x331 = -1LL;
	int8_t x332 = -1;
	int32_t t79 = -12;

	t79 = (((x329==x330)%x331)<=x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x333 = 136;
	int32_t x334 = INT32_MAX;
	int8_t x335 = -1;
	int16_t x336 = 363;

	t80 = (((x333==x334)%x335)<=x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x338 = -1;
	uint8_t x339 = 12U;
	int32_t t81 = -11;

	t81 = (((x337==x338)%x339)<=x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = 0;
	volatile int32_t x342 = INT32_MIN;
	volatile uint8_t x344 = 14U;

	t82 = (((x341==x342)%x343)<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = INT8_MIN;
	volatile uint8_t x348 = UINT8_MAX;

	t83 = (((x345==x346)%x347)<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	volatile uint8_t x351 = 42U;
	int32_t x352 = INT32_MAX;
	volatile int32_t t84 = 8983245;

	t84 = (((x349==x350)%x351)<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 1080U;
	uint64_t x354 = 753120127LLU;
	uint64_t x355 = UINT64_MAX;
	static int32_t t85 = 11;

	t85 = (((x353==x354)%x355)<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x358 = 1095142941889372480LLU;
	static int32_t x359 = INT32_MAX;
	int8_t x360 = -1;

	t86 = (((x357==x358)%x359)<=x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x361 = -1;
	static uint16_t x362 = 218U;
	volatile uint64_t x363 = 8958679491486896LLU;
	int64_t x364 = INT64_MIN;

	t87 = (((x361==x362)%x363)<=x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x365 = 6;
	uint64_t x366 = 19215LLU;
	volatile uint32_t x367 = UINT32_MAX;
	static int8_t x368 = INT8_MIN;
	static volatile int32_t t88 = 778;

	t88 = (((x365==x366)%x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MIN;
	int16_t x372 = 0;
	volatile int32_t t89 = 311;

	t89 = (((x369==x370)%x371)<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MIN;
	volatile uint16_t x374 = UINT16_MAX;
	static int8_t x375 = -1;
	volatile int32_t t90 = 2244747;

	t90 = (((x373==x374)%x375)<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x377 = 0U;
	int16_t x378 = INT16_MIN;
	static volatile int64_t x379 = INT64_MAX;
	volatile int32_t t91 = 362935754;

	t91 = (((x377==x378)%x379)<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = 10;
	int64_t x382 = -750208176LL;
	uint64_t x383 = 76239707LLU;
	int8_t x384 = -4;
	int32_t t92 = 13180;

	t92 = (((x381==x382)%x383)<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x385 = -1;
	static int64_t x387 = INT64_MAX;
	uint32_t x388 = 16601U;
	int32_t t93 = 1;

	t93 = (((x385==x386)%x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -1;
	int8_t x391 = INT8_MAX;
	volatile int32_t t94 = 609;

	t94 = (((x389==x390)%x391)<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = 9U;
	int8_t x395 = -1;
	int32_t t95 = -1;

	t95 = (((x393==x394)%x395)<=x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = UINT32_MAX;
	volatile int32_t x398 = -268;
	static int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	int32_t t96 = 57;

	t96 = (((x397==x398)%x399)<=x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x401 = -1;
	static int32_t x402 = 1;
	int32_t x403 = INT32_MIN;
	volatile uint64_t x404 = UINT64_MAX;
	static volatile int32_t t97 = 148068;

	t97 = (((x401==x402)%x403)<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x405 = -208512090254647LL;
	int16_t x406 = INT16_MIN;
	volatile uint16_t x408 = 112U;
	volatile int32_t t98 = -716017200;

	t98 = (((x405==x406)%x407)<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MIN;
	uint16_t x411 = 11727U;
	uint16_t x412 = 167U;

	t99 = (((x409==x410)%x411)<=x412);

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

