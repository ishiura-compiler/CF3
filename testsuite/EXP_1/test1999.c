#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
static volatile int32_t x2 = -1;
int64_t x8 = -1LL;
int8_t x12 = -15;
int32_t t2 = -1;
int64_t x16 = -1078LL;
int16_t x18 = INT16_MIN;
int8_t x20 = -61;
static int32_t t4 = -515115358;
uint64_t x22 = 7261425430306892LLU;
uint8_t x28 = 13U;
static volatile int8_t x31 = INT8_MAX;
volatile int32_t t7 = -25390;
int64_t x34 = INT64_MAX;
int8_t x40 = 0;
static int32_t t10 = 182;
int16_t x46 = INT16_MAX;
int8_t x56 = -1;
static int32_t x57 = 1;
int32_t x58 = 577894;
uint16_t x59 = 1550U;
int64_t x62 = -65519921764492LL;
uint32_t x69 = 6667137U;
volatile int16_t x71 = -2;
int32_t x73 = 20;
static uint16_t x81 = 915U;
int8_t x85 = -1;
int64_t x86 = 85791343640LL;
uint8_t x89 = UINT8_MAX;
uint64_t x90 = 1731381433LLU;
int8_t x92 = INT8_MAX;
static uint64_t x94 = 408035LLU;
int16_t x97 = INT16_MAX;
uint64_t x106 = 418751LLU;
int16_t x109 = 2;
int32_t t27 = -492746473;
int16_t x115 = -480;
int16_t x117 = 8925;
uint16_t x121 = 10U;
int32_t t31 = 53343582;
int16_t x131 = INT16_MIN;
uint8_t x135 = 41U;
uint64_t x141 = 997301LLU;
static uint64_t x153 = UINT64_MAX;
volatile int32_t t38 = -64;
static int8_t x158 = -34;
static int32_t t39 = -1587062;
int32_t x163 = INT32_MIN;
int16_t x166 = -116;
int32_t x171 = 11902937;
int8_t x189 = -1;
int64_t x200 = -157902LL;
volatile int16_t x204 = 348;
volatile int32_t t52 = 30711;
static uint8_t x214 = 6U;
static int64_t x216 = INT64_MAX;
uint32_t x217 = 509459U;
int8_t x219 = 1;
volatile int32_t t55 = -1;
uint16_t x227 = UINT16_MAX;
static uint8_t x235 = 2U;
int32_t x236 = -1;
int32_t t59 = -1;
volatile int16_t x247 = INT16_MAX;
int32_t t62 = -21716;
static int64_t x255 = -7748577508983LL;
uint64_t x257 = UINT64_MAX;
uint16_t x258 = UINT16_MAX;
int64_t x262 = 160582343LL;
int32_t x263 = INT32_MIN;
int8_t x264 = INT8_MAX;
static volatile int32_t t66 = 363487;
int16_t x289 = 285;
volatile int64_t x297 = INT64_MIN;
int32_t x303 = INT32_MIN;
static volatile int32_t t75 = 88;
static int8_t x306 = INT8_MAX;
int16_t x307 = INT16_MIN;
int32_t x309 = -1;
uint32_t x312 = 31645050U;
volatile int32_t t77 = -246;
volatile uint32_t x317 = 13908U;
volatile int32_t x319 = -1;
int32_t x328 = INT32_MAX;
int64_t x331 = 3536LL;
static int64_t x343 = -1LL;
volatile uint64_t x347 = UINT64_MAX;
static int32_t x348 = INT32_MIN;
volatile int64_t x358 = -1LL;
int32_t x362 = -1;
uint16_t x367 = UINT16_MAX;
static uint64_t x376 = 28767531721745773LLU;
static int16_t x381 = -1;
int32_t x382 = 15828;
static int32_t x385 = 16263;
uint8_t x388 = 10U;
static volatile int16_t x389 = -1;


void f0(void) {
	uint64_t x3 = 3345LLU;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 58777356;

	t0 = (((x1|x2)&x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 4601;
	int64_t x6 = -1LL;
	uint8_t x7 = 7U;
	int32_t t1 = -3469;

	t1 = (((x5|x6)&x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MAX;

	t2 = (((x9|x10)&x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	uint16_t x14 = UINT16_MAX;
	static uint64_t x15 = 42LLU;
	int32_t t3 = 481;

	t3 = (((x13|x14)&x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -130245776243128107LL;
	volatile int64_t x19 = INT64_MAX;

	t4 = (((x17|x18)&x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile uint64_t x23 = UINT64_MAX;
	static int8_t x24 = -1;
	int32_t t5 = 1208;

	t5 = (((x21|x22)&x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = UINT8_MAX;
	int16_t x26 = -1;
	volatile int64_t x27 = INT64_MAX;
	int32_t t6 = -3019821;

	t6 = (((x25|x26)&x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint16_t x30 = UINT16_MAX;
	int32_t x32 = -1;

	t7 = (((x29|x30)&x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static volatile int64_t x35 = INT64_MIN;
	static int32_t x36 = INT32_MAX;
	static int32_t t8 = -250;

	t8 = (((x33|x34)&x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x38 = 12047014U;
	static int64_t x39 = INT64_MAX;
	volatile int32_t t9 = -1882;

	t9 = (((x37|x38)&x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 0U;
	int16_t x42 = INT16_MAX;
	int32_t x43 = -1;
	int16_t x44 = INT16_MIN;

	t10 = (((x41|x42)&x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -1;
	volatile int8_t x47 = INT8_MIN;
	uint8_t x48 = 4U;
	volatile int32_t t11 = -655;

	t11 = (((x45|x46)&x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x50 = 3U;
	int32_t x51 = -1;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 5948380;

	t12 = (((x49|x50)&x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static volatile int32_t x54 = INT32_MIN;
	int64_t x55 = INT64_MAX;
	volatile int32_t t13 = -1;

	t13 = (((x53|x54)&x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 1104;

	t14 = (((x57|x58)&x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x63 = UINT8_MAX;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = -38855;

	t15 = (((x61|x62)&x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint8_t x66 = 51U;
	uint16_t x67 = 0U;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = -15;

	t16 = (((x65|x66)&x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	uint32_t x72 = 3631U;
	int32_t t17 = 223;

	t17 = (((x69|x70)&x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	uint32_t x75 = 119U;
	volatile uint64_t x76 = 2130327640096001127LLU;
	volatile int32_t t18 = -205148710;

	t18 = (((x73|x74)&x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -1;
	int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	int16_t x80 = 5;
	static int32_t t19 = 1;

	t19 = (((x77|x78)&x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -1;
	int64_t x83 = -241686LL;
	uint32_t x84 = 3277U;
	volatile int32_t t20 = -20728621;

	t20 = (((x81|x82)&x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x87 = 53682U;
	uint8_t x88 = 90U;
	int32_t t21 = 1012758744;

	t21 = (((x85|x86)&x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x91 = INT8_MIN;
	static volatile int32_t t22 = -1537;

	t22 = (((x89|x90)&x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int16_t x95 = INT16_MAX;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 254;

	t23 = (((x93|x94)&x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 246U;
	int16_t x99 = INT16_MIN;
	int32_t x100 = -1;
	static int32_t t24 = 502;

	t24 = (((x97|x98)&x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x101 = 2U;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = UINT16_MAX;
	static int32_t x104 = -1573528;
	int32_t t25 = 0;

	t25 = (((x101|x102)&x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	int16_t x107 = 881;
	static int16_t x108 = INT16_MIN;
	int32_t t26 = -10;

	t26 = (((x105|x106)&x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x110 = UINT32_MAX;
	int8_t x111 = 0;
	int32_t x112 = INT32_MIN;

	t27 = (((x109|x110)&x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -5067205704271LL;
	int64_t x114 = 7884071107949588LL;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 0;

	t28 = (((x113|x114)&x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x118 = -1LL;
	static volatile int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;
	volatile int32_t t29 = -7303;

	t29 = (((x117|x118)&x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 1U;
	uint32_t x123 = 927661709U;
	volatile int16_t x124 = INT16_MIN;
	static int32_t t30 = -17;

	t30 = (((x121|x122)&x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 8170U;
	int16_t x126 = INT16_MIN;
	uint16_t x127 = 430U;
	volatile int32_t x128 = INT32_MAX;

	t31 = (((x125|x126)&x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	uint64_t x130 = 200602568886808LLU;
	int32_t x132 = INT32_MIN;
	static int32_t t32 = 27120;

	t32 = (((x129|x130)&x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 3050331803818312492LLU;
	static int32_t x134 = INT32_MIN;
	static int8_t x136 = -3;
	volatile int32_t t33 = 74230;

	t33 = (((x133|x134)&x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MAX;
	uint8_t x139 = UINT8_MAX;
	static uint64_t x140 = UINT64_MAX;
	static volatile int32_t t34 = -12833;

	t34 = (((x137|x138)&x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MAX;
	int8_t x143 = -19;
	uint16_t x144 = 17U;
	int32_t t35 = -91;

	t35 = (((x141|x142)&x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MAX;
	int8_t x147 = INT8_MIN;
	volatile int64_t x148 = -1LL;
	volatile int32_t t36 = 531878262;

	t36 = (((x145|x146)&x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -1;
	int32_t x150 = -1;
	int16_t x151 = -1;
	volatile int64_t x152 = INT64_MIN;
	static int32_t t37 = -3;

	t37 = (((x149|x150)&x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 23852990U;
	uint16_t x156 = UINT16_MAX;

	t38 = (((x153|x154)&x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile uint16_t x159 = 1U;
	static int64_t x160 = -1684803403751621LL;

	t39 = (((x157|x158)&x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	uint64_t x162 = 35436LLU;
	int32_t x164 = INT32_MAX;
	int32_t t40 = -6866;

	t40 = (((x161|x162)&x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = UINT16_MAX;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 11566U;
	int32_t t41 = -1209155;

	t41 = (((x165|x166)&x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 3U;
	static int32_t x170 = -997;
	volatile uint32_t x172 = UINT32_MAX;
	int32_t t42 = -1337;

	t42 = (((x169|x170)&x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 1769201766U;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -44;

	t43 = (((x173|x174)&x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 20;
	int16_t x178 = INT16_MIN;
	volatile int64_t x179 = INT64_MIN;
	static int8_t x180 = INT8_MIN;
	int32_t t44 = -6346989;

	t44 = (((x177|x178)&x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -171796;
	uint8_t x182 = 2U;
	static int64_t x183 = INT64_MIN;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t45 = 33432998;

	t45 = (((x181|x182)&x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int32_t x186 = INT32_MAX;
	int16_t x187 = -2;
	int8_t x188 = 4;
	int32_t t46 = 193661790;

	t46 = (((x185|x186)&x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x190 = UINT32_MAX;
	static int16_t x191 = INT16_MAX;
	int16_t x192 = -1;
	volatile int32_t t47 = -11859191;

	t47 = (((x189|x190)&x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MIN;
	volatile uint8_t x195 = 9U;
	uint8_t x196 = 1U;
	int32_t t48 = -3;

	t48 = (((x193|x194)&x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 11U;
	int8_t x198 = INT8_MIN;
	volatile int8_t x199 = -1;
	int32_t t49 = -1906;

	t49 = (((x197|x198)&x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	volatile uint8_t x202 = 31U;
	volatile int32_t x203 = INT32_MAX;
	int32_t t50 = -51;

	t50 = (((x201|x202)&x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -126700945574071LL;
	int32_t x206 = 672316;
	uint64_t x207 = 506348370439373LLU;
	uint8_t x208 = 1U;
	volatile int32_t t51 = 15598226;

	t51 = (((x205|x206)&x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	int64_t x210 = INT64_MIN;
	static volatile int8_t x211 = 1;
	int32_t x212 = 41650;

	t52 = (((x209|x210)&x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int64_t x215 = -1LL;
	int32_t t53 = -138206;

	t53 = (((x213|x214)&x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = 2;
	static int64_t x220 = -1LL;
	int32_t t54 = 0;

	t54 = (((x217|x218)&x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x222 = 0;
	volatile uint16_t x223 = 111U;
	int16_t x224 = 7756;

	t55 = (((x221|x222)&x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	static uint32_t x226 = UINT32_MAX;
	int8_t x228 = INT8_MAX;
	int32_t t56 = 32;

	t56 = (((x225|x226)&x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 35U;
	volatile int8_t x230 = INT8_MAX;
	volatile uint64_t x231 = UINT64_MAX;
	int16_t x232 = INT16_MAX;
	volatile int32_t t57 = -762360168;

	t57 = (((x229|x230)&x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1284;
	static volatile int32_t x234 = INT32_MAX;
	int32_t t58 = 400427738;

	t58 = (((x233|x234)&x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = -1;
	int32_t x239 = -1;
	uint8_t x240 = UINT8_MAX;

	t59 = (((x237|x238)&x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -1;
	int16_t x242 = -6;
	uint8_t x243 = 5U;
	int64_t x244 = -1LL;
	int32_t t60 = 763;

	t60 = (((x241|x242)&x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 248U;
	static volatile int8_t x246 = -5;
	int8_t x248 = 14;
	volatile int32_t t61 = -9;

	t61 = (((x245|x246)&x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	uint64_t x250 = 10193031634632188LLU;
	uint16_t x251 = 206U;
	int32_t x252 = -1;

	t62 = (((x249|x250)&x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	static uint32_t x254 = 13669U;
	static uint32_t x256 = 84942U;
	static volatile int32_t t63 = -844;

	t63 = (((x253|x254)&x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x259 = 28U;
	int16_t x260 = 357;
	int32_t t64 = 9798;

	t64 = (((x257|x258)&x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t t65 = -245621239;

	t65 = (((x261|x262)&x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = 2;
	int32_t x266 = -8725;
	uint32_t x267 = 5434U;
	static volatile uint32_t x268 = UINT32_MAX;

	t66 = (((x265|x266)&x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 11848837403347662LLU;
	static int16_t x270 = -1;
	uint32_t x271 = UINT32_MAX;
	static int32_t x272 = -1;
	volatile int32_t t67 = -322;

	t67 = (((x269|x270)&x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	static int8_t x275 = -1;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = -55431667;

	t68 = (((x273|x274)&x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MAX;
	int8_t x279 = INT8_MIN;
	int64_t x280 = -1LL;
	int32_t t69 = -181;

	t69 = (((x277|x278)&x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 25U;
	static int16_t x282 = 2;
	int16_t x283 = -1;
	int64_t x284 = INT64_MIN;
	static int32_t t70 = -7;

	t70 = (((x281|x282)&x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = UINT8_MAX;
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 338U;
	uint32_t x288 = 4U;
	int32_t t71 = 60156;

	t71 = (((x285|x286)&x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x290 = INT8_MAX;
	int32_t x291 = INT32_MIN;
	volatile int64_t x292 = INT64_MIN;
	volatile int32_t t72 = 2097;

	t72 = (((x289|x290)&x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = -62143222212700607LL;
	int16_t x296 = 1;
	static volatile int32_t t73 = 0;

	t73 = (((x293|x294)&x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MAX;
	int16_t x299 = -1;
	uint64_t x300 = 19372390222781LLU;
	int32_t t74 = -10936800;

	t74 = (((x297|x298)&x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -101;
	int64_t x302 = INT64_MIN;
	uint64_t x304 = 14LLU;

	t75 = (((x301|x302)&x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -212;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = 611;

	t76 = (((x305|x306)&x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = 17U;
	static int8_t x311 = INT8_MAX;

	t77 = (((x309|x310)&x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x314 = 10U;
	static volatile int16_t x315 = INT16_MAX;
	int64_t x316 = -1LL;
	int32_t t78 = -1552;

	t78 = (((x313|x314)&x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 25U;
	int64_t x320 = -1LL;
	volatile int32_t t79 = -54888815;

	t79 = (((x317|x318)&x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = INT32_MAX;
	uint16_t x323 = 72U;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 3;

	t80 = (((x321|x322)&x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = 0;
	int32_t x326 = INT32_MAX;
	int8_t x327 = -1;
	volatile int32_t t81 = -234772;

	t81 = (((x325|x326)&x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x332 = INT16_MIN;
	int32_t t82 = 378598;

	t82 = (((x329|x330)&x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int8_t x334 = -20;
	int16_t x335 = -643;
	volatile int32_t x336 = -46487;
	int32_t t83 = -2192823;

	t83 = (((x333|x334)&x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MAX;
	static volatile int64_t x338 = 60704102484162LL;
	volatile uint32_t x339 = UINT32_MAX;
	volatile uint16_t x340 = 11094U;
	volatile int32_t t84 = 57;

	t84 = (((x337|x338)&x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	uint8_t x342 = 4U;
	static uint64_t x344 = UINT64_MAX;
	volatile int32_t t85 = -7;

	t85 = (((x341|x342)&x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -1LL;
	int16_t x346 = 1;
	volatile int32_t t86 = -1982007;

	t86 = (((x345|x346)&x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 2037286U;
	uint16_t x350 = UINT16_MAX;
	uint64_t x351 = 77067156680909LLU;
	int16_t x352 = -1026;
	static volatile int32_t t87 = -806199;

	t87 = (((x349|x350)&x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t88 = 3;

	t88 = (((x353|x354)&x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x357 = 10LLU;
	int32_t x359 = -1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -7703889;

	t89 = (((x357|x358)&x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x363 = -1;
	int8_t x364 = INT8_MIN;
	int32_t t90 = -2187557;

	t90 = (((x361|x362)&x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	static int64_t x366 = INT64_MIN;
	int32_t x368 = -250404594;
	volatile int32_t t91 = -2930;

	t91 = (((x365|x366)&x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MIN;
	static int8_t x371 = 2;
	int32_t x372 = -49;
	volatile int32_t t92 = 981;

	t92 = (((x369|x370)&x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MIN;
	uint16_t x375 = 138U;
	int32_t t93 = -28;

	t93 = (((x373|x374)&x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	int16_t x379 = -87;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 50416;

	t94 = (((x377|x378)&x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x383 = INT32_MAX;
	static int8_t x384 = 15;
	int32_t t95 = -60965;

	t95 = (((x381|x382)&x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x386 = UINT32_MAX;
	static int64_t x387 = 913975555803813847LL;
	int32_t t96 = -464;

	t96 = (((x385|x386)&x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = -3965799;

	t97 = (((x389|x390)&x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -40;
	uint64_t x394 = 957015626022078LLU;
	static int32_t x395 = INT32_MAX;
	uint8_t x396 = UINT8_MAX;
	static volatile int32_t t98 = 2;

	t98 = (((x393|x394)&x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = -1LL;
	uint64_t x398 = 402999172551951LLU;
	uint64_t x399 = 1216282LLU;
	int16_t x400 = INT16_MIN;
	static int32_t t99 = -15105;

	t99 = (((x397|x398)&x399)<=x400);

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

