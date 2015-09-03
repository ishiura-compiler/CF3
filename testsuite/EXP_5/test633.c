#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
uint32_t x4 = 99790U;
volatile int32_t t0 = -1;
uint64_t x7 = UINT64_MAX;
volatile int32_t t1 = 696944;
int16_t x12 = INT16_MIN;
int16_t x14 = -54;
int16_t x17 = 4411;
static int8_t x18 = INT8_MIN;
volatile int16_t x20 = INT16_MIN;
int64_t x24 = INT64_MAX;
int64_t x28 = -1LL;
int8_t x29 = -1;
uint16_t x31 = UINT16_MAX;
uint8_t x33 = 61U;
uint32_t x36 = UINT32_MAX;
uint32_t x41 = UINT32_MAX;
int16_t x45 = -1;
int8_t x47 = 17;
int64_t x51 = -1LL;
int16_t x59 = -24;
volatile uint32_t x60 = 1309890839U;
int32_t t14 = 257786008;
int32_t x62 = 1;
int64_t x65 = -1LL;
int32_t t16 = -408;
int8_t x71 = -1;
uint16_t x72 = UINT16_MAX;
int64_t x80 = -214369837905607881LL;
uint32_t x91 = 59U;
volatile int32_t x93 = INT32_MIN;
volatile uint8_t x96 = UINT8_MAX;
static volatile int32_t t22 = -883805370;
uint8_t x98 = 97U;
int32_t t23 = 48164029;
int32_t x104 = INT32_MAX;
int64_t x111 = -1LL;
volatile int32_t t28 = 432;
int32_t x126 = INT32_MAX;
volatile int16_t x128 = INT16_MAX;
int32_t x137 = 223;
int16_t x139 = -1;
volatile int32_t t33 = 86231;
int8_t x148 = -1;
int16_t x149 = INT16_MIN;
int16_t x151 = 1;
int64_t x158 = INT64_MIN;
int32_t x160 = -1;
volatile int32_t t39 = 390652130;
volatile int32_t x165 = INT32_MIN;
volatile int32_t t40 = 0;
volatile int32_t t42 = -56442700;
volatile int8_t x188 = INT8_MAX;
uint64_t x190 = 7886LLU;
int16_t x191 = 405;
int32_t t46 = 36581;
uint64_t x202 = UINT64_MAX;
volatile uint64_t x204 = UINT64_MAX;
uint64_t x208 = UINT64_MAX;
int32_t t50 = -1;
uint32_t x210 = UINT32_MAX;
int8_t x217 = INT8_MIN;
int16_t x221 = -1;
uint8_t x223 = 2U;
uint16_t x225 = UINT16_MAX;
int32_t x228 = INT32_MIN;
volatile int8_t x234 = -1;
volatile int32_t t57 = -32274828;
int8_t x241 = -39;
static int16_t x244 = 503;
int32_t t59 = -595799;
volatile int32_t t60 = 23173348;
volatile uint64_t x249 = 5211916800989351713LLU;
int32_t t62 = 42;
int64_t x264 = INT64_MIN;
int32_t x271 = INT32_MAX;
volatile int32_t t66 = -50259;
int32_t x274 = INT32_MIN;
int16_t x275 = 2;
static int64_t x281 = 63LL;
uint8_t x290 = UINT8_MAX;
volatile int32_t t71 = -1536;
int32_t x296 = 49;
int16_t x298 = -2;
int8_t x300 = INT8_MIN;
volatile int32_t t73 = 783403977;
int64_t x305 = 661155LL;
volatile int32_t t75 = 0;
volatile int32_t t76 = -1727;
uint64_t x317 = UINT64_MAX;
static volatile int16_t x322 = INT16_MAX;
volatile int32_t t80 = -339;
static volatile int64_t x332 = 3LL;
uint8_t x338 = UINT8_MAX;
int64_t x341 = -2371792009555470LL;
int64_t x343 = INT64_MIN;
static int32_t t84 = -21;
int32_t x349 = INT32_MIN;
uint64_t x351 = 780922317LLU;
static volatile uint64_t x355 = 30631964LLU;
int32_t x360 = -1;
static volatile int32_t t91 = -31760289;
static int8_t x375 = INT8_MAX;
static int32_t x388 = INT32_MIN;
static int16_t x390 = INT16_MAX;
volatile int16_t x392 = 715;
int32_t t96 = -169532;
uint8_t x393 = UINT8_MAX;
uint8_t x400 = 5U;


void f0(void) {
	volatile uint32_t x2 = UINT32_MAX;
	static int8_t x3 = INT8_MAX;

	t0 = (x1<((x2/x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -46;
	uint16_t x6 = UINT16_MAX;
	uint64_t x8 = UINT64_MAX;

	t1 = (x5<((x6/x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = -1;
	volatile int16_t x11 = INT16_MAX;
	static volatile int32_t t2 = -801683305;

	t2 = (x9<((x10/x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1640090412U;
	int16_t x15 = -1;
	volatile int64_t x16 = -1LL;
	int32_t t3 = 0;

	t3 = (x13<((x14/x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x19 = 2704;
	int32_t t4 = -250;

	t4 = (x17<((x18/x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = -2301298151024132472LL;
	uint32_t x22 = 172657U;
	uint16_t x23 = 1U;
	volatile int32_t t5 = -1818718;

	t5 = (x21<((x22/x23)<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int64_t x26 = 1551690896445LL;
	uint16_t x27 = UINT16_MAX;
	static int32_t t6 = 5;

	t6 = (x25<((x26/x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 0;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -122;

	t7 = (x29<((x30/x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	uint64_t x35 = 10091865915LLU;
	volatile int32_t t8 = 11980980;

	t8 = (x33<((x34/x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 114689972LLU;
	int64_t x38 = 75688LL;
	uint32_t x39 = UINT32_MAX;
	int16_t x40 = -280;
	int32_t t9 = 11943576;

	t9 = (x37<((x38/x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 2144U;
	int16_t x43 = INT16_MIN;
	volatile int16_t x44 = 678;
	static volatile int32_t t10 = 15200;

	t10 = (x41<((x42/x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	uint32_t x48 = 692835U;
	int32_t t11 = 1024429932;

	t11 = (x45<((x46/x47)<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	uint64_t x50 = 13949377609187LLU;
	int32_t x52 = 440154353;
	static int32_t t12 = 365;

	t12 = (x49<((x50/x51)<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 4970077U;
	volatile int8_t x54 = -1;
	volatile int64_t x55 = -1LL;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = 15651;

	t13 = (x53<((x54/x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -4;
	int64_t x58 = INT64_MIN;

	t14 = (x57<((x58/x59)<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -11;
	static uint16_t x63 = UINT16_MAX;
	volatile int16_t x64 = INT16_MAX;
	int32_t t15 = -27;

	t15 = (x61<((x62/x63)<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x66 = -19;
	static volatile uint32_t x67 = UINT32_MAX;
	int16_t x68 = -1;

	t16 = (x65<((x66/x67)<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 452623499442161372LLU;
	uint64_t x70 = 1015LLU;
	static volatile int32_t t17 = 12142124;

	t17 = (x69<((x70/x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x77 = 2;
	int16_t x78 = 39;
	static int16_t x79 = INT16_MIN;
	volatile int32_t t18 = -19851;

	t18 = (x77<((x78/x79)<=x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 406;
	static uint64_t x82 = 1975665LLU;
	uint16_t x83 = UINT16_MAX;
	int8_t x84 = -2;
	int32_t t19 = -880634;

	t19 = (x81<((x82/x83)<=x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 5302684U;
	int8_t x86 = INT8_MAX;
	int16_t x87 = INT16_MIN;
	volatile uint32_t x88 = 2U;
	volatile int32_t t20 = 143;

	t20 = (x85<((x86/x87)<=x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x90 = INT64_MAX;
	uint8_t x92 = 116U;
	int32_t t21 = -4;

	t21 = (x89<((x90/x91)<=x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = 982329077;
	static uint32_t x95 = 276374178U;

	t22 = (x93<((x94/x95)<=x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = 1;
	int64_t x99 = -507246800065179146LL;
	uint16_t x100 = 9924U;

	t23 = (x97<((x98/x99)<=x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	int8_t x102 = -7;
	int64_t x103 = INT64_MIN;
	static int32_t t24 = -2706402;

	t24 = (x101<((x102/x103)<=x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 885229LLU;
	uint8_t x106 = 30U;
	uint64_t x107 = 74157LLU;
	volatile uint32_t x108 = UINT32_MAX;
	int32_t t25 = -684839529;

	t25 = (x105<((x106/x107)<=x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = 2122984655966LLU;
	static int64_t x110 = -467724LL;
	int64_t x112 = INT64_MAX;
	int32_t t26 = 18;

	t26 = (x109<((x110/x111)<=x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MAX;
	uint8_t x114 = 9U;
	volatile uint16_t x115 = 16U;
	int8_t x116 = -1;
	volatile int32_t t27 = -4302;

	t27 = (x113<((x114/x115)<=x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -14217;
	uint64_t x118 = 248738279971LLU;
	static int16_t x119 = INT16_MAX;
	int32_t x120 = 1761293;

	t28 = (x117<((x118/x119)<=x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x121 = 14061U;
	uint16_t x122 = UINT16_MAX;
	int8_t x123 = INT8_MIN;
	int32_t x124 = -1;
	volatile int32_t t29 = -2160247;

	t29 = (x121<((x122/x123)<=x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	int32_t x127 = -19638341;
	static volatile int32_t t30 = 496373941;

	t30 = (x125<((x126/x127)<=x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = INT8_MIN;
	static int32_t x130 = -1189;
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	volatile int32_t t31 = -22852;

	t31 = (x129<((x130/x131)<=x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = 11850581794085786LL;
	volatile int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = 227;

	t32 = (x133<((x134/x135)<=x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x138 = -38;
	int64_t x140 = -93518LL;

	t33 = (x137<((x138/x139)<=x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x141 = 0;
	int8_t x142 = 1;
	volatile uint64_t x143 = UINT64_MAX;
	static uint8_t x144 = UINT8_MAX;
	int32_t t34 = -23;

	t34 = (x141<((x142/x143)<=x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	uint8_t x146 = UINT8_MAX;
	uint32_t x147 = UINT32_MAX;
	int32_t t35 = 6468623;

	t35 = (x145<((x146/x147)<=x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x150 = -1;
	static volatile int32_t x152 = -161832087;
	int32_t t36 = 6564639;

	t36 = (x149<((x150/x151)<=x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x153 = UINT32_MAX;
	volatile int8_t x154 = -1;
	int64_t x155 = INT64_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t37 = 1;

	t37 = (x153<((x154/x155)<=x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x157 = 57U;
	static volatile uint16_t x159 = 1581U;
	int32_t t38 = 41940272;

	t38 = (x157<((x158/x159)<=x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -1;
	int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MAX;
	uint8_t x164 = 5U;

	t39 = (x161<((x162/x163)<=x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x166 = 20512U;
	int8_t x167 = INT8_MIN;
	static uint16_t x168 = 2537U;

	t40 = (x165<((x166/x167)<=x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MIN;
	int32_t x171 = 756450;
	static volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t41 = 529;

	t41 = (x169<((x170/x171)<=x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MAX;
	uint64_t x174 = 1420334322LLU;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MIN;

	t42 = (x173<((x174/x175)<=x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = 3;
	uint16_t x178 = UINT16_MAX;
	static volatile int8_t x179 = 17;
	int8_t x180 = 1;
	static volatile int32_t t43 = -49;

	t43 = (x177<((x178/x179)<=x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = -6;
	volatile int64_t x182 = INT64_MAX;
	volatile int8_t x183 = -13;
	uint16_t x184 = 1226U;
	int32_t t44 = -992986;

	t44 = (x181<((x182/x183)<=x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x185 = 5808U;
	int32_t x186 = INT32_MIN;
	volatile uint8_t x187 = 116U;
	int32_t t45 = 885683261;

	t45 = (x185<((x186/x187)<=x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = UINT32_MAX;
	volatile uint8_t x192 = 8U;

	t46 = (x189<((x190/x191)<=x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MAX;
	static int16_t x195 = INT16_MIN;
	uint8_t x196 = 1U;
	volatile int32_t t47 = -238;

	t47 = (x193<((x194/x195)<=x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 19;
	uint16_t x198 = 162U;
	static volatile int8_t x199 = INT8_MAX;
	uint16_t x200 = 0U;
	volatile int32_t t48 = 0;

	t48 = (x197<((x198/x199)<=x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -54;
	uint32_t x203 = 325U;
	int32_t t49 = -229671238;

	t49 = (x201<((x202/x203)<=x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;

	t50 = (x205<((x206/x207)<=x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x209 = 6U;
	int16_t x211 = INT16_MIN;
	int16_t x212 = 14991;
	int32_t t51 = 608;

	t51 = (x209<((x210/x211)<=x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x213 = INT16_MAX;
	volatile int16_t x214 = 20;
	int16_t x215 = -1;
	volatile uint64_t x216 = 3LLU;
	static int32_t t52 = 5;

	t52 = (x213<((x214/x215)<=x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = -19;
	int16_t x220 = -1;
	int32_t t53 = -40769758;

	t53 = (x217<((x218/x219)<=x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x222 = -125952650042LL;
	static volatile int8_t x224 = -1;
	static int32_t t54 = 48408197;

	t54 = (x221<((x222/x223)<=x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x226 = INT32_MIN;
	static volatile int64_t x227 = INT64_MIN;
	static int32_t t55 = -1;

	t55 = (x225<((x226/x227)<=x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = 11U;
	static uint64_t x230 = 261435852LLU;
	int8_t x231 = INT8_MAX;
	int32_t x232 = INT32_MIN;
	volatile int32_t t56 = -1017518;

	t56 = (x229<((x230/x231)<=x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 14573LLU;
	int16_t x235 = -669;
	int16_t x236 = INT16_MAX;

	t57 = (x233<((x234/x235)<=x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = 5365;
	uint16_t x238 = 41U;
	uint8_t x239 = 88U;
	int32_t x240 = INT32_MIN;
	int32_t t58 = -3412;

	t58 = (x237<((x238/x239)<=x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x242 = INT8_MIN;
	volatile int8_t x243 = INT8_MIN;

	t59 = (x241<((x242/x243)<=x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = 958;
	volatile uint16_t x246 = UINT16_MAX;
	int8_t x247 = INT8_MIN;
	static int64_t x248 = -1LL;

	t60 = (x245<((x246/x247)<=x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x250 = INT64_MIN;
	int64_t x251 = -190914LL;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t61 = -18912180;

	t61 = (x249<((x250/x251)<=x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x253 = -1;
	volatile int32_t x254 = -1;
	uint32_t x255 = 20465U;
	static uint16_t x256 = 15796U;

	t62 = (x253<((x254/x255)<=x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = INT8_MIN;
	static volatile int8_t x258 = INT8_MIN;
	uint8_t x259 = 77U;
	int8_t x260 = -1;
	int32_t t63 = 7708399;

	t63 = (x257<((x258/x259)<=x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = INT32_MAX;
	uint32_t x262 = 44707143U;
	volatile uint16_t x263 = UINT16_MAX;
	int32_t t64 = 1;

	t64 = (x261<((x262/x263)<=x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -2;
	static volatile int16_t x266 = -1;
	int8_t x267 = -1;
	int64_t x268 = INT64_MIN;
	int32_t t65 = 70969;

	t65 = (x265<((x266/x267)<=x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = 1U;
	int32_t x270 = INT32_MIN;
	int16_t x272 = -7742;

	t66 = (x269<((x270/x271)<=x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x273 = 31823LLU;
	static uint32_t x276 = 3895014U;
	volatile int32_t t67 = 11013;

	t67 = (x273<((x274/x275)<=x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -1;
	static uint16_t x278 = 285U;
	int16_t x279 = 46;
	int32_t x280 = -1;
	int32_t t68 = 28266210;

	t68 = (x277<((x278/x279)<=x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x282 = -10;
	int64_t x283 = -1087699910243LL;
	static int64_t x284 = INT64_MIN;
	int32_t t69 = -128381;

	t69 = (x281<((x282/x283)<=x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 927U;
	static int32_t x287 = INT32_MIN;
	uint8_t x288 = 95U;
	static int32_t t70 = 697875;

	t70 = (x285<((x286/x287)<=x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 4399U;
	int8_t x291 = -35;
	int8_t x292 = INT8_MAX;

	t71 = (x289<((x290/x291)<=x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = -62617;
	int8_t x295 = INT8_MIN;
	volatile int32_t t72 = 257332192;

	t72 = (x293<((x294/x295)<=x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x297 = INT16_MAX;
	int8_t x299 = -51;

	t73 = (x297<((x298/x299)<=x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -4917773;
	int64_t x302 = 69133436146071525LL;
	uint16_t x303 = 69U;
	static int32_t x304 = INT32_MAX;
	static volatile int32_t t74 = 14956999;

	t74 = (x301<((x302/x303)<=x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	uint8_t x308 = UINT8_MAX;

	t75 = (x305<((x306/x307)<=x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	static volatile int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MIN;
	int8_t x312 = -1;

	t76 = (x309<((x310/x311)<=x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 700U;
	int32_t x314 = INT32_MIN;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t77 = -38233;

	t77 = (x313<((x314/x315)<=x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x318 = 37LLU;
	volatile int16_t x319 = INT16_MIN;
	static uint32_t x320 = UINT32_MAX;
	static volatile int32_t t78 = -3892;

	t78 = (x317<((x318/x319)<=x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MAX;
	int16_t x323 = INT16_MAX;
	int32_t x324 = -1;
	static int32_t t79 = 20252083;

	t79 = (x321<((x322/x323)<=x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = -496;
	volatile int8_t x326 = 0;
	int16_t x327 = -1;
	int64_t x328 = INT64_MAX;

	t80 = (x325<((x326/x327)<=x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x329 = -1;
	int64_t x330 = INT64_MIN;
	static volatile int16_t x331 = INT16_MIN;
	volatile int32_t t81 = 3;

	t81 = (x329<((x330/x331)<=x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = -89345430;
	static uint8_t x334 = 17U;
	int64_t x335 = INT64_MIN;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t82 = -37692;

	t82 = (x333<((x334/x335)<=x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = 1;
	uint32_t x339 = 457318U;
	int64_t x340 = -1LL;
	int32_t t83 = -2894310;

	t83 = (x337<((x338/x339)<=x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x342 = -1;
	int16_t x344 = -1;

	t84 = (x341<((x342/x343)<=x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x345 = INT64_MIN;
	volatile int32_t x346 = -1;
	int32_t x347 = 5252;
	static int64_t x348 = INT64_MAX;
	int32_t t85 = -1;

	t85 = (x345<((x346/x347)<=x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x350 = 26254;
	volatile uint64_t x352 = UINT64_MAX;
	static int32_t t86 = 1624428;

	t86 = (x349<((x350/x351)<=x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x353 = 22U;
	static int8_t x354 = INT8_MIN;
	int64_t x356 = INT64_MAX;
	int32_t t87 = -19;

	t87 = (x353<((x354/x355)<=x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x357 = 15U;
	static int16_t x358 = INT16_MAX;
	uint8_t x359 = 16U;
	int32_t t88 = -13937624;

	t88 = (x357<((x358/x359)<=x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = INT16_MIN;
	uint16_t x362 = 975U;
	static int64_t x363 = INT64_MIN;
	static volatile uint32_t x364 = UINT32_MAX;
	volatile int32_t t89 = 0;

	t89 = (x361<((x362/x363)<=x364));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MIN;
	static int32_t x367 = INT32_MIN;
	int32_t x368 = -43080678;
	volatile int32_t t90 = -391297;

	t90 = (x365<((x366/x367)<=x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -1;
	int8_t x370 = -3;
	uint32_t x371 = 261578041U;
	int8_t x372 = INT8_MIN;

	t91 = (x369<((x370/x371)<=x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = INT64_MIN;
	int8_t x374 = -2;
	volatile int64_t x376 = -1LL;
	volatile int32_t t92 = 0;

	t92 = (x373<((x374/x375)<=x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = INT8_MIN;
	int32_t x379 = 2088037;
	int8_t x380 = -1;
	int32_t t93 = -1;

	t93 = (x377<((x378/x379)<=x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = -3073;
	int64_t x382 = INT64_MIN;
	static uint64_t x383 = UINT64_MAX;
	int64_t x384 = INT64_MAX;
	static volatile int32_t t94 = 4240735;

	t94 = (x381<((x382/x383)<=x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x385 = INT64_MAX;
	uint32_t x386 = UINT32_MAX;
	static uint32_t x387 = 20U;
	int32_t t95 = -615165;

	t95 = (x385<((x386/x387)<=x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x391 = 52LLU;

	t96 = (x389<((x390/x391)<=x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x394 = -216923365;
	int64_t x395 = INT64_MAX;
	int8_t x396 = -1;
	static int32_t t97 = 14343;

	t97 = (x393<((x394/x395)<=x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x397 = INT8_MIN;
	int32_t x398 = 17;
	int64_t x399 = INT64_MIN;
	volatile int32_t t98 = 78274064;

	t98 = (x397<((x398/x399)<=x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MIN;
	uint32_t x402 = 4281418U;
	static uint32_t x403 = 103U;
	volatile int16_t x404 = INT16_MAX;
	volatile int32_t t99 = 548354;

	t99 = (x401<((x402/x403)<=x404));

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

