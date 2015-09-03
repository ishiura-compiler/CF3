#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x22 = INT32_MIN;
int32_t t5 = -402145031;
volatile int64_t x27 = INT64_MAX;
int64_t x28 = INT64_MIN;
int32_t t7 = -455895331;
volatile int16_t x37 = 2915;
uint32_t x49 = UINT32_MAX;
static int64_t x50 = 206LL;
int32_t t12 = 21262;
int32_t x56 = -671;
volatile int32_t t15 = -394765092;
int8_t x67 = -46;
volatile int32_t t16 = -749671;
uint16_t x71 = 5U;
uint16_t x72 = UINT16_MAX;
volatile uint16_t x76 = 5966U;
volatile uint16_t x80 = 89U;
uint32_t x83 = 4867038U;
volatile int32_t t21 = 1717712;
int64_t x92 = -53813417589475412LL;
int8_t x98 = INT8_MIN;
volatile int32_t t25 = 31099066;
int64_t x107 = -32992750LL;
uint16_t x109 = 116U;
int16_t x118 = INT16_MIN;
static int16_t x119 = -1;
int32_t x123 = INT32_MIN;
static int32_t t30 = -137121768;
uint32_t x127 = 11984U;
static uint32_t x132 = 193U;
volatile int64_t x142 = -965027601LL;
uint16_t x143 = 17U;
volatile uint64_t x144 = UINT64_MAX;
int64_t x147 = INT64_MAX;
volatile int32_t t37 = -7000747;
int64_t x158 = -1LL;
int8_t x162 = INT8_MIN;
int32_t x166 = INT32_MIN;
static volatile int64_t x173 = INT64_MIN;
int32_t t42 = 3708;
int64_t x181 = INT64_MIN;
uint16_t x186 = 62U;
volatile int32_t t45 = -216659279;
uint8_t x201 = UINT8_MAX;
uint64_t x202 = 33420022043333LLU;
int32_t t49 = -35;
int8_t x205 = INT8_MIN;
static int32_t x206 = INT32_MIN;
volatile uint16_t x208 = 0U;
int64_t x210 = -1LL;
volatile int32_t t51 = 36;
int32_t x224 = 1;
uint64_t x225 = 1064450320870510834LLU;
int32_t x227 = INT32_MAX;
int16_t x230 = INT16_MIN;
volatile int64_t x239 = -1LL;
int64_t x244 = 738LL;
int8_t x247 = INT8_MAX;
static int16_t x248 = 12;
uint32_t x252 = 986665U;
int32_t t61 = -23;
int64_t x254 = -1259905712991LL;
volatile int64_t x259 = INT64_MIN;
static volatile int16_t x262 = 1;
int8_t x267 = -1;
static int32_t t65 = 4560168;
uint64_t x271 = 22133736338248LLU;
volatile int16_t x276 = INT16_MIN;
int32_t t70 = -8;
volatile int32_t x290 = INT32_MIN;
uint8_t x292 = 1U;
int32_t x295 = 1;
volatile int32_t t72 = -351997;
volatile uint32_t x298 = 103445387U;
volatile uint64_t x303 = 2LLU;
static int32_t x312 = INT32_MIN;
volatile uint64_t x313 = 220134692297801LLU;
volatile int32_t t77 = 14;
uint64_t x318 = 124417862171880751LLU;
int32_t x320 = -1;
static volatile int32_t t78 = 5271;
int8_t x322 = 4;
volatile int32_t t80 = 5591944;
int16_t x329 = INT16_MIN;
volatile int32_t x332 = INT32_MIN;
int32_t t81 = 1;
uint16_t x333 = UINT16_MAX;
volatile uint8_t x334 = 26U;
int8_t x346 = INT8_MIN;
static int32_t t85 = -851;
uint8_t x349 = 74U;
static int32_t t86 = 7755320;
int64_t x353 = INT64_MAX;
static int64_t x354 = -9981826225837076LL;
int16_t x356 = 35;
int64_t x359 = 4101038005631129091LL;
static int8_t x360 = INT8_MIN;
uint8_t x363 = 118U;
uint16_t x369 = UINT16_MAX;
static int8_t x375 = INT8_MIN;
int32_t x379 = -15065454;
int64_t x380 = INT64_MIN;
int64_t x381 = 982692453114533680LL;
volatile int64_t x382 = INT64_MAX;
int32_t t95 = -12602;
volatile int64_t x390 = INT64_MAX;
int32_t x393 = INT32_MIN;
volatile int32_t t97 = 80007925;
volatile int32_t x398 = -1;
volatile uint32_t x400 = UINT32_MAX;
int32_t t99 = 3572893;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	volatile uint64_t x2 = 2LLU;
	uint32_t x3 = 24U;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -1001924;

	t0 = (((x1%x2)^x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 6735;
	static int32_t x6 = INT32_MIN;
	volatile uint16_t x7 = UINT16_MAX;
	int32_t x8 = -1;
	volatile int32_t t1 = -294;

	t1 = (((x5%x6)^x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1649109U;
	static uint8_t x10 = UINT8_MAX;
	static volatile uint16_t x11 = 375U;
	int64_t x12 = 77LL;
	volatile int32_t t2 = -1011241666;

	t2 = (((x9%x10)^x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x14 = 3;
	static int64_t x15 = INT64_MIN;
	volatile uint64_t x16 = 29138LLU;
	int32_t t3 = -35616;

	t3 = (((x13%x14)^x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static int32_t x18 = INT32_MIN;
	uint32_t x19 = 674253198U;
	uint8_t x20 = 2U;
	int32_t t4 = 1752058;

	t4 = (((x17%x18)^x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x23 = 120643191;
	int16_t x24 = -1;

	t5 = (((x21%x22)^x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 32;
	uint64_t x26 = UINT64_MAX;
	volatile int32_t t6 = 14;

	t6 = (((x25%x26)^x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	int8_t x30 = -6;
	volatile uint64_t x31 = 125354920LLU;
	uint64_t x32 = UINT64_MAX;

	t7 = (((x29%x30)^x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;
	uint8_t x35 = 2U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -1;

	t8 = (((x33%x34)^x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = 368799761508951LL;
	int8_t x39 = INT8_MIN;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = 1473637;

	t9 = (((x37%x38)^x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile uint8_t x42 = 5U;
	static uint32_t x43 = 369U;
	static int8_t x44 = INT8_MIN;
	int32_t t10 = 16964;

	t10 = (((x41%x42)^x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int32_t x46 = -1;
	uint8_t x47 = 5U;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = 4516676;

	t11 = (((x45%x46)^x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x51 = 987530077U;
	volatile int32_t x52 = INT32_MIN;

	t12 = (((x49%x50)^x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	static int64_t x54 = 8389733558LL;
	int32_t x55 = INT32_MIN;
	static int32_t t13 = 878779189;

	t13 = (((x53%x54)^x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint8_t x58 = 101U;
	int64_t x59 = -909999306890025LL;
	volatile uint16_t x60 = 116U;
	volatile int32_t t14 = -149526444;

	t14 = (((x57%x58)^x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 79U;
	static uint64_t x62 = 7281LLU;
	int64_t x63 = INT64_MAX;
	volatile int8_t x64 = -47;

	t15 = (((x61%x62)^x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int64_t x66 = -48LL;
	int8_t x68 = -1;

	t16 = (((x65%x66)^x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	volatile uint16_t x70 = 491U;
	volatile int32_t t17 = 44140775;

	t17 = (((x69%x70)^x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	static uint32_t x74 = 56860691U;
	int64_t x75 = -1LL;
	int32_t t18 = -23;

	t18 = (((x73%x74)^x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 9020101253905LL;
	uint8_t x78 = 3U;
	int8_t x79 = -1;
	int32_t t19 = 0;

	t19 = (((x77%x78)^x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	uint32_t x82 = UINT32_MAX;
	int16_t x84 = 8;
	volatile int32_t t20 = 5046599;

	t20 = (((x81%x82)^x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	static uint64_t x88 = 2063LLU;

	t21 = (((x85%x86)^x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 43LLU;
	int32_t x90 = INT32_MIN;
	volatile int64_t x91 = INT64_MAX;
	static volatile int32_t t22 = -10;

	t22 = (((x89%x90)^x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 4397;
	uint32_t x94 = UINT32_MAX;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 73671904;

	t23 = (((x93%x94)^x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = -7901493LL;
	volatile int64_t x99 = -454537801984432910LL;
	uint16_t x100 = 467U;
	int32_t t24 = -37125;

	t24 = (((x97%x98)^x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 9U;
	int32_t x102 = INT32_MIN;
	uint64_t x103 = 167249LLU;
	int32_t x104 = -1;

	t25 = (((x101%x102)^x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	static int64_t x106 = -9604587850LL;
	int8_t x108 = 10;
	volatile int32_t t26 = 24020725;

	t26 = (((x105%x106)^x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = INT8_MAX;
	uint32_t x111 = UINT32_MAX;
	uint32_t x112 = 74255U;
	volatile int32_t t27 = 248886508;

	t27 = (((x109%x110)^x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	uint8_t x114 = 34U;
	static int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 1;

	t28 = (((x113%x114)^x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	uint64_t x120 = 58731714LLU;
	static int32_t t29 = 609;

	t29 = (((x117%x118)^x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 115U;
	static int32_t x122 = 1823259;
	int16_t x124 = -1;

	t30 = (((x121%x122)^x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = UINT8_MAX;
	volatile uint16_t x126 = 726U;
	int32_t x128 = -1;
	int32_t t31 = 48074;

	t31 = (((x125%x126)^x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	static uint64_t x130 = 2034062166497LLU;
	static int32_t x131 = INT32_MIN;
	static volatile int32_t t32 = -485279068;

	t32 = (((x129%x130)^x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = INT32_MIN;
	int16_t x138 = -668;
	volatile uint64_t x139 = 7164LLU;
	static uint8_t x140 = 29U;
	int32_t t33 = 873;

	t33 = (((x137%x138)^x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = INT8_MAX;
	volatile int32_t t34 = -8302784;

	t34 = (((x141%x142)^x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 31U;
	volatile int16_t x146 = -56;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t35 = 5233028;

	t35 = (((x145%x146)^x147)<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int64_t x150 = 2371589970009910LL;
	int64_t x151 = -2004LL;
	int32_t x152 = INT32_MAX;
	volatile int32_t t36 = 1777418;

	t36 = (((x149%x150)^x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x153 = -1;
	int16_t x154 = INT16_MAX;
	uint64_t x155 = UINT64_MAX;
	volatile int64_t x156 = 2533051380509942752LL;

	t37 = (((x153%x154)^x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	uint8_t x159 = 0U;
	int16_t x160 = 763;
	int32_t t38 = -1018;

	t38 = (((x157%x158)^x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 7U;
	uint16_t x163 = 7U;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t39 = -59036;

	t39 = (((x161%x162)^x163)<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -238;
	volatile uint64_t x167 = 1LLU;
	uint16_t x168 = 38U;
	volatile int32_t t40 = 2759091;

	t40 = (((x165%x166)^x167)<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = INT16_MIN;
	volatile uint32_t x170 = 1667U;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	int32_t t41 = -26;

	t41 = (((x169%x170)^x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x174 = 56U;
	int16_t x175 = INT16_MIN;
	uint8_t x176 = UINT8_MAX;

	t42 = (((x173%x174)^x175)<=x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	uint64_t x178 = 383119380151146LLU;
	int32_t x179 = INT32_MIN;
	uint64_t x180 = 2132794005LLU;
	volatile int32_t t43 = 217;

	t43 = (((x177%x178)^x179)<=x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x182 = INT64_MIN;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = 1007LL;
	int32_t t44 = 13740465;

	t44 = (((x181%x182)^x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x185 = INT16_MAX;
	uint16_t x187 = UINT16_MAX;
	static int8_t x188 = INT8_MIN;

	t45 = (((x185%x186)^x187)<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = -741;
	volatile int32_t x190 = 26843642;
	int32_t x191 = -1;
	uint16_t x192 = 82U;
	volatile int32_t t46 = 101942683;

	t46 = (((x189%x190)^x191)<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x193 = 563069776241677206LLU;
	volatile int8_t x194 = INT8_MAX;
	static uint32_t x195 = UINT32_MAX;
	static volatile int32_t x196 = -1;
	int32_t t47 = -126;

	t47 = (((x193%x194)^x195)<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -1;
	static int32_t x198 = INT32_MAX;
	static uint64_t x199 = UINT64_MAX;
	volatile uint32_t x200 = 3923U;
	volatile int32_t t48 = 5;

	t48 = (((x197%x198)^x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x203 = UINT32_MAX;
	static uint8_t x204 = UINT8_MAX;

	t49 = (((x201%x202)^x203)<=x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x207 = INT64_MAX;
	static int32_t t50 = 1007338;

	t50 = (((x205%x206)^x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 663772170U;
	static int64_t x211 = 488144745LL;
	volatile uint32_t x212 = 83U;

	t51 = (((x209%x210)^x211)<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x213 = INT8_MIN;
	int32_t x214 = -1;
	int32_t x215 = -1;
	int8_t x216 = -1;
	volatile int32_t t52 = 1;

	t52 = (((x213%x214)^x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x217 = INT8_MIN;
	int32_t x218 = -1;
	volatile uint32_t x219 = 335186U;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t53 = -1547195;

	t53 = (((x217%x218)^x219)<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -1;
	uint64_t x222 = 416342LLU;
	static int8_t x223 = 0;
	volatile int32_t t54 = -29368;

	t54 = (((x221%x222)^x223)<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x226 = INT64_MAX;
	static int16_t x228 = INT16_MAX;
	int32_t t55 = 25003836;

	t55 = (((x225%x226)^x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -1;
	int8_t x231 = 30;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t56 = -70;

	t56 = (((x229%x230)^x231)<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -1;
	int8_t x234 = -1;
	static int64_t x235 = 518LL;
	static int64_t x236 = -14584951369566349LL;
	int32_t t57 = 4370;

	t57 = (((x233%x234)^x235)<=x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x237 = INT8_MAX;
	int64_t x238 = -1LL;
	int16_t x240 = -1;
	int32_t t58 = -21586;

	t58 = (((x237%x238)^x239)<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = UINT32_MAX;
	volatile int16_t x242 = -1;
	volatile int16_t x243 = INT16_MAX;
	volatile int32_t t59 = 236;

	t59 = (((x241%x242)^x243)<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x245 = UINT8_MAX;
	static int64_t x246 = -1LL;
	int32_t t60 = -10525;

	t60 = (((x245%x246)^x247)<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MAX;
	int16_t x251 = INT16_MAX;

	t61 = (((x249%x250)^x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x255 = 36;
	volatile int16_t x256 = INT16_MAX;
	int32_t t62 = -57289;

	t62 = (((x253%x254)^x255)<=x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x257 = INT64_MAX;
	volatile int64_t x258 = INT64_MAX;
	static uint8_t x260 = 7U;
	volatile int32_t t63 = -434281450;

	t63 = (((x257%x258)^x259)<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x261 = 3U;
	static uint16_t x263 = 978U;
	volatile int16_t x264 = -1;
	volatile int32_t t64 = -22283;

	t64 = (((x261%x262)^x263)<=x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MIN;
	int16_t x268 = -13012;

	t65 = (((x265%x266)^x267)<=x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = 44659;
	uint32_t x270 = UINT32_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t66 = 32195428;

	t66 = (((x269%x270)^x271)<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = -13337;
	uint32_t x274 = 468537U;
	int64_t x275 = INT64_MIN;
	volatile int32_t t67 = 355;

	t67 = (((x273%x274)^x275)<=x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MIN;
	static int16_t x278 = INT16_MIN;
	int64_t x279 = -340695341638156LL;
	volatile int32_t x280 = -1;
	int32_t t68 = -55;

	t68 = (((x277%x278)^x279)<=x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 105U;
	static int16_t x282 = -1;
	static int64_t x283 = INT64_MIN;
	uint64_t x284 = 240477LLU;
	volatile int32_t t69 = 741264;

	t69 = (((x281%x282)^x283)<=x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = 396485110LL;
	int64_t x286 = -1LL;
	uint16_t x287 = 0U;
	int64_t x288 = INT64_MAX;

	t70 = (((x285%x286)^x287)<=x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	uint8_t x291 = 2U;
	int32_t t71 = 1;

	t71 = (((x289%x290)^x291)<=x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x293 = 4U;
	int64_t x294 = -1LL;
	int8_t x296 = -10;

	t72 = (((x293%x294)^x295)<=x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	uint32_t x299 = 4U;
	static int32_t x300 = 765757;
	int32_t t73 = 8386259;

	t73 = (((x297%x298)^x299)<=x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = 1;
	int16_t x302 = INT16_MIN;
	uint8_t x304 = 23U;
	volatile int32_t t74 = -47286333;

	t74 = (((x301%x302)^x303)<=x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = -1;
	int16_t x306 = INT16_MIN;
	uint8_t x307 = 1U;
	static uint8_t x308 = UINT8_MAX;
	volatile int32_t t75 = 173340;

	t75 = (((x305%x306)^x307)<=x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	int32_t x311 = INT32_MIN;
	static volatile int32_t t76 = 803;

	t76 = (((x309%x310)^x311)<=x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x314 = UINT64_MAX;
	volatile uint32_t x315 = 390276U;
	volatile uint32_t x316 = UINT32_MAX;

	t77 = (((x313%x314)^x315)<=x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x317 = 2;
	int64_t x319 = INT64_MIN;

	t78 = (((x317%x318)^x319)<=x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = UINT8_MAX;
	static int64_t x323 = INT64_MIN;
	static uint8_t x324 = 61U;
	volatile int32_t t79 = -230280;

	t79 = (((x321%x322)^x323)<=x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 528828748LLU;
	uint8_t x326 = 6U;
	static int32_t x327 = -1;
	volatile int16_t x328 = 6012;

	t80 = (((x325%x326)^x327)<=x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x330 = 9U;
	int64_t x331 = -111429456173254LL;

	t81 = (((x329%x330)^x331)<=x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x335 = UINT8_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t82 = 2;

	t82 = (((x333%x334)^x335)<=x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = -1;
	static int16_t x339 = INT16_MAX;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t83 = 370;

	t83 = (((x337%x338)^x339)<=x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	int16_t x342 = 4185;
	static volatile int8_t x343 = -1;
	volatile int16_t x344 = 393;
	int32_t t84 = -198364;

	t84 = (((x341%x342)^x343)<=x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MAX;
	uint64_t x347 = UINT64_MAX;
	static int8_t x348 = 2;

	t85 = (((x345%x346)^x347)<=x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x350 = UINT64_MAX;
	volatile uint8_t x351 = 70U;
	static volatile uint64_t x352 = UINT64_MAX;

	t86 = (((x349%x350)^x351)<=x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x355 = 14U;
	volatile int32_t t87 = -106066262;

	t87 = (((x353%x354)^x355)<=x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x357 = 167666223U;
	volatile uint16_t x358 = 1U;
	static volatile int32_t t88 = -4153739;

	t88 = (((x357%x358)^x359)<=x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x361 = 1U;
	int8_t x362 = -1;
	uint8_t x364 = 0U;
	int32_t t89 = 5;

	t89 = (((x361%x362)^x363)<=x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MIN;
	uint8_t x367 = 7U;
	uint16_t x368 = UINT16_MAX;
	int32_t t90 = 3302;

	t90 = (((x365%x366)^x367)<=x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MAX;
	volatile int16_t x372 = -1302;
	volatile int32_t t91 = -285475;

	t91 = (((x369%x370)^x371)<=x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = -64663982;
	uint8_t x374 = UINT8_MAX;
	int64_t x376 = INT64_MIN;
	volatile int32_t t92 = 4881;

	t92 = (((x373%x374)^x375)<=x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = 434471681U;
	int16_t x378 = INT16_MIN;
	volatile int32_t t93 = 41;

	t93 = (((x377%x378)^x379)<=x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x383 = 6;
	static volatile int8_t x384 = 15;
	int32_t t94 = 25;

	t94 = (((x381%x382)^x383)<=x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = 7069339LLU;
	int8_t x386 = INT8_MAX;
	uint8_t x387 = 15U;
	volatile int64_t x388 = 14LL;

	t95 = (((x385%x386)^x387)<=x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = -15966;
	static int64_t x391 = 2741694626993616LL;
	int16_t x392 = -1;
	volatile int32_t t96 = 6;

	t96 = (((x389%x390)^x391)<=x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x394 = 51255256360LLU;
	int16_t x395 = INT16_MAX;
	int64_t x396 = INT64_MIN;

	t97 = (((x393%x394)^x395)<=x396);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x397 = 6968662735014470845LLU;
	static int16_t x399 = -495;
	static int32_t t98 = 719;

	t98 = (((x397%x398)^x399)<=x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x401 = -1LL;
	int8_t x402 = -3;
	int8_t x403 = -1;
	int16_t x404 = INT16_MIN;

	t99 = (((x401%x402)^x403)<=x404);

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

