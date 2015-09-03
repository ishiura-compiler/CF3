#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 464U;
int64_t x7 = 4375464691LL;
static uint64_t x8 = 171459807412LLU;
uint16_t x16 = UINT16_MAX;
volatile int32_t t3 = 124119139;
int32_t x21 = -1;
volatile int64_t x35 = INT64_MIN;
int16_t x37 = INT16_MIN;
int8_t x39 = INT8_MIN;
int16_t x41 = INT16_MIN;
volatile int32_t x44 = INT32_MAX;
volatile int64_t t8 = -149235887200468LL;
int32_t x48 = -915521;
uint8_t x53 = 11U;
int16_t x54 = -11934;
int64_t x55 = -1LL;
volatile int32_t x59 = INT32_MAX;
int32_t x64 = INT32_MIN;
volatile uint8_t x66 = 4U;
static int16_t x67 = INT16_MIN;
int8_t x70 = INT8_MIN;
int32_t t15 = 1615;
volatile int64_t t17 = 260351104LL;
int64_t x81 = -1LL;
int8_t x83 = -5;
volatile int64_t x88 = INT64_MIN;
uint64_t t19 = 49842591168645127LLU;
int16_t x89 = -1;
uint8_t x91 = 2U;
static int32_t x103 = INT32_MAX;
int64_t x105 = -35296670LL;
int8_t x112 = -32;
static uint16_t x116 = UINT16_MAX;
static int32_t x121 = -1;
uint16_t x125 = 20670U;
volatile int64_t t29 = 1LL;
int8_t x131 = -1;
uint16_t x133 = UINT16_MAX;
static volatile uint32_t t31 = 823U;
volatile uint8_t x150 = 54U;
int16_t x156 = INT16_MIN;
int32_t x159 = -1;
uint64_t t38 = 19LLU;
int64_t x171 = -7004822079447927LL;
volatile int64_t t39 = -467790995718LL;
uint64_t t41 = 924LLU;
int16_t x194 = 3;
volatile int8_t x195 = -4;
uint16_t x214 = UINT16_MAX;
int8_t x229 = INT8_MIN;
int8_t x241 = INT8_MAX;
int32_t x243 = -1;
int32_t x247 = INT32_MIN;
volatile int64_t t56 = -45513804724LL;
int16_t x251 = -7;
static int16_t x253 = INT16_MAX;
volatile int64_t t58 = 15LL;
static int64_t x269 = -25622988381572LL;
volatile int64_t t62 = 13378845LL;
int64_t x276 = -3856026426202413LL;
volatile uint64_t x278 = 285153185539066LLU;
volatile int32_t x283 = INT32_MIN;
int8_t x298 = INT8_MIN;
int32_t x306 = INT32_MIN;
volatile int16_t x307 = 2113;
volatile uint16_t x308 = 2914U;
uint32_t x310 = 55U;
int8_t x318 = INT8_MIN;
int16_t x320 = -42;
static int32_t t74 = -805;
static volatile uint16_t x334 = 237U;
int32_t x335 = -30;
uint32_t x336 = UINT32_MAX;
uint64_t t77 = 224LLU;
uint8_t x344 = 0U;
static uint32_t x345 = UINT32_MAX;
static volatile uint64_t x354 = 3051261620429255LLU;
uint64_t x355 = 6739913891241893517LLU;
int64_t x362 = INT64_MIN;
int64_t x376 = 395015899257904LL;
uint32_t x377 = UINT32_MAX;
static uint32_t t86 = 1U;
int32_t x381 = INT32_MIN;
int8_t x384 = 0;
int64_t x386 = -1LL;
int16_t x388 = -1;
int32_t x394 = INT32_MIN;
int16_t x395 = INT16_MIN;
int32_t t90 = 3732107;
static int8_t x405 = INT8_MIN;
volatile int64_t t92 = 589168582105404855LL;
uint32_t x416 = UINT32_MAX;
static int8_t x419 = 0;
uint8_t x425 = 16U;
uint32_t x432 = UINT32_MAX;
static volatile uint32_t t98 = 463297552U;
volatile int32_t t99 = 1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int32_t x2 = -1;
	int8_t x3 = -1;
	volatile int32_t t0 = -41662257;

	t0 = ((x1|(x2&x3))-x4);

	if (t0 != -465) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -996;
	int64_t x6 = INT64_MAX;
	volatile uint64_t t1 = 63758086383940610LLU;

	t1 = ((x5|(x6&x7))-x8);

	if (t1 != 18446743902249743947LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 2380004U;
	volatile int8_t x10 = -24;
	static int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	volatile uint32_t t2 = 3433U;

	t2 = ((x9|(x10&x11))-x12);

	if (t2 != 2380004U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int16_t x14 = -1;
	volatile int8_t x15 = INT8_MIN;

	t3 = ((x13|(x14&x15))-x16);

	if (t3 != -65536) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MAX;
	uint32_t x23 = 349715620U;
	uint32_t x24 = UINT32_MAX;
	int64_t t4 = -87639LL;

	t4 = ((x21|(x22&x23))-x24);

	if (t4 != -4294967296LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = -1;
	int64_t x30 = INT64_MIN;
	static int8_t x31 = -1;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t5 = 4064523407784LLU;

	t5 = ((x29|(x30&x31))-x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	volatile int32_t x34 = 4;
	int32_t x36 = INT32_MAX;
	static int64_t t6 = -501097477LL;

	t6 = ((x33|(x34&x35))-x36);

	if (t6 != -2147516415LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = INT64_MAX;
	uint32_t x40 = UINT32_MAX;
	volatile int64_t t7 = 6764627LL;

	t7 = ((x37|(x38&x39))-x40);

	if (t7 != -4294967423LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x42 = INT64_MAX;
	int32_t x43 = INT32_MIN;

	t8 = ((x41|(x42&x43))-x44);

	if (t8 != -2147516415LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = INT8_MAX;
	int32_t x46 = 1366;
	uint32_t x47 = 1634U;
	volatile uint32_t t9 = 1236U;

	t9 = ((x45|(x46&x47))-x48);

	if (t9 != 916672U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 14U;
	int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MIN;
	uint16_t x52 = 5631U;
	int32_t t10 = 58;

	t10 = ((x49|(x50&x51))-x52);

	if (t10 != -38385) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x56 = -1;
	volatile int64_t t11 = 96241LL;

	t11 = ((x53|(x54&x55))-x56);

	if (t11 != -11924LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	static int32_t x58 = -1;
	static int32_t x60 = INT32_MIN;
	static volatile int32_t t12 = INT32_MAX;

	t12 = ((x57|(x58&x59))-x60);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -169LL;
	static int8_t x62 = 30;
	volatile int16_t x63 = INT16_MIN;
	int64_t t13 = 952038LL;

	t13 = ((x61|(x62&x63))-x64);

	if (t13 != 2147483479LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 126U;
	static int16_t x68 = -1;
	int32_t t14 = 0;

	t14 = ((x65|(x66&x67))-x68);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 1;
	int8_t x71 = -1;
	uint8_t x72 = UINT8_MAX;

	t15 = ((x69|(x70&x71))-x72);

	if (t15 != -382) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int8_t x74 = -1;
	int8_t x75 = 0;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t16 = INT32_MAX;

	t16 = ((x73|(x74&x75))-x76);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MAX;
	volatile int32_t x78 = 466606891;
	static int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MAX;

	t17 = ((x77|(x78&x79))-x80);

	if (t17 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x82 = INT64_MAX;
	uint64_t x84 = 331355736761947016LLU;
	uint64_t t18 = 1303403173532479LLU;

	t18 = ((x81|(x82&x83))-x84);

	if (t18 != 18115388336947604599LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x85 = UINT64_MAX;
	int16_t x86 = 0;
	volatile int32_t x87 = -1;

	t19 = ((x85|(x86&x87))-x88);

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = INT16_MIN;
	uint64_t x92 = 264247475LLU;
	static uint64_t t20 = 431322091382569LLU;

	t20 = ((x89|(x90&x91))-x92);

	if (t20 != 18446744073445304140LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x93 = 1LLU;
	static uint8_t x94 = 27U;
	int64_t x95 = -1LL;
	uint32_t x96 = 136930634U;
	uint64_t t21 = 370588780LLU;

	t21 = ((x93|(x94&x95))-x96);

	if (t21 != 18446744073572621009LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	int64_t x98 = -1LL;
	int64_t x99 = INT64_MIN;
	int64_t x100 = -432801816LL;
	static volatile int64_t t22 = 243665488LL;

	t22 = ((x97|(x98&x99))-x100);

	if (t22 != -9223372034274490345LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 0U;
	int32_t x102 = 27728;
	int16_t x104 = INT16_MIN;
	volatile int32_t t23 = 129522;

	t23 = ((x101|(x102&x103))-x104);

	if (t23 != 60496) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = -1;
	static uint16_t x107 = UINT16_MAX;
	volatile int64_t x108 = INT64_MIN;
	static volatile int64_t t24 = -234525LL;

	t24 = ((x105|(x106&x107))-x108);

	if (t24 != 9223372036819517439LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x109 = 2531422955931LLU;
	uint8_t x110 = UINT8_MAX;
	uint64_t x111 = 13246049253672LLU;
	uint64_t t25 = 112686570LLU;

	t25 = ((x109|(x110&x111))-x112);

	if (t25 != 2531422955995LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 56U;
	uint32_t x114 = 1997721648U;
	volatile uint8_t x115 = UINT8_MAX;
	volatile uint32_t t26 = 85875168U;

	t26 = ((x113|(x114&x115))-x116);

	if (t26 != 4294901817U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MAX;
	int16_t x119 = -1;
	volatile uint32_t x120 = 79U;
	uint64_t t27 = 6LLU;

	t27 = ((x117|(x118&x119))-x120);

	if (t27 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x122 = INT8_MIN;
	int16_t x123 = -1;
	static int8_t x124 = -4;
	int32_t t28 = 25636809;

	t28 = ((x121|(x122&x123))-x124);

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x126 = INT8_MAX;
	static int64_t x127 = INT64_MAX;
	uint32_t x128 = 994U;

	t29 = ((x125|(x126&x127))-x128);

	if (t29 != 19741LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 63U;
	int64_t x130 = INT64_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t30 = 120LL;

	t30 = ((x129|(x130&x131))-x132);

	if (t30 != 63LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x134 = UINT32_MAX;
	volatile int32_t x135 = 1544652;
	static int8_t x136 = -6;

	t31 = ((x133|(x134&x135))-x136);

	if (t31 != 1572869U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 14764U;
	uint8_t x138 = UINT8_MAX;
	int64_t x139 = -1LL;
	int16_t x140 = INT16_MIN;
	volatile int64_t t32 = 10211694LL;

	t32 = ((x137|(x138&x139))-x140);

	if (t32 != 47615LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = -13LL;
	volatile int16_t x144 = -1;
	static int64_t t33 = 367579681341899LL;

	t33 = ((x141|(x142&x143))-x144);

	if (t33 != -32524LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MAX;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t34 = 287266836846695919LLU;

	t34 = ((x145|(x146&x147))-x148);

	if (t34 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x149 = 93U;
	int16_t x151 = INT16_MIN;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t35 = 1;

	t35 = ((x149|(x150&x151))-x152);

	if (t35 != 221) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 63791093U;
	int16_t x154 = -2;
	static int32_t x155 = INT32_MIN;
	volatile uint32_t t36 = 93U;

	t36 = ((x153|(x154&x155))-x156);

	if (t36 != 2211307509U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x157 = INT16_MIN;
	volatile uint32_t x158 = UINT32_MAX;
	uint8_t x160 = UINT8_MAX;
	static uint32_t t37 = 1303265U;

	t37 = ((x157|(x158&x159))-x160);

	if (t37 != 4294967040U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 2817010306321LLU;
	uint8_t x162 = 114U;
	volatile int16_t x163 = INT16_MIN;
	int32_t x164 = -1;

	t38 = ((x161|(x162&x163))-x164);

	if (t38 != 2817010306322LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 227207349U;
	int32_t x170 = -1;
	static int8_t x172 = INT8_MIN;

	t39 = ((x169|(x170&x171))-x172);

	if (t39 != -7004821919892163LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = INT32_MAX;
	uint32_t x174 = 367065351U;
	volatile uint32_t x175 = 17U;
	uint64_t x176 = 902795849LLU;
	uint64_t t40 = 2660589LLU;

	t40 = ((x173|(x174&x175))-x176);

	if (t40 != 1244687798LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x177 = 77615075LLU;
	static volatile uint64_t x178 = UINT64_MAX;
	int64_t x179 = INT64_MIN;
	static uint32_t x180 = 17U;

	t41 = ((x177|(x178&x179))-x180);

	if (t41 != 9223372036932390866LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = 3;
	int16_t x182 = -7871;
	static uint8_t x183 = 0U;
	uint16_t x184 = 3U;
	volatile int32_t t42 = 442332;

	t42 = ((x181|(x182&x183))-x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = -1;
	volatile uint64_t x186 = 3LLU;
	static int64_t x187 = INT64_MIN;
	static uint64_t x188 = 9199LLU;
	uint64_t t43 = 6939018107LLU;

	t43 = ((x185|(x186&x187))-x188);

	if (t43 != 18446744073709542416LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 6U;
	volatile int8_t x196 = INT8_MAX;
	uint32_t t44 = 10097U;

	t44 = ((x193|(x194&x195))-x196);

	if (t44 != 4294967175U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	static uint32_t x198 = 13874U;
	uint64_t x199 = 228278470670771205LLU;
	int16_t x200 = INT16_MAX;
	static volatile uint64_t t45 = 747370027345326468LLU;

	t45 = ((x197|(x198&x199))-x200);

	if (t45 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 0U;
	uint8_t x202 = 15U;
	static uint32_t x203 = UINT32_MAX;
	int64_t x204 = INT64_MAX;
	int64_t t46 = 1549446LL;

	t46 = ((x201|(x202&x203))-x204);

	if (t46 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MIN;
	int8_t x207 = -32;
	int64_t x208 = INT64_MIN;
	int64_t t47 = INT64_MAX;

	t47 = ((x205|(x206&x207))-x208);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = 7737;
	int8_t x215 = 55;
	int16_t x216 = INT16_MIN;
	int32_t t48 = -844;

	t48 = ((x213|(x214&x215))-x216);

	if (t48 != 40511) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x217 = -1LL;
	static volatile uint8_t x218 = 15U;
	int8_t x219 = INT8_MIN;
	volatile uint16_t x220 = 1375U;
	static volatile int64_t t49 = 0LL;

	t49 = ((x217|(x218&x219))-x220);

	if (t49 != -1376LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x221 = INT32_MAX;
	volatile int8_t x222 = INT8_MIN;
	static int16_t x223 = INT16_MIN;
	int32_t x224 = -108451;
	static int32_t t50 = 643843;

	t50 = ((x221|(x222&x223))-x224);

	if (t50 != 108450) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = 31063772;
	uint16_t x226 = UINT16_MAX;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = -6;
	static uint64_t t51 = 1449572871207LLU;

	t51 = ((x225|(x226&x227))-x228);

	if (t51 != 31064069LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x230 = INT16_MAX;
	static int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	static int32_t t52 = 2934;

	t52 = ((x229|(x230&x231))-x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = 1;
	int8_t x234 = INT8_MAX;
	int32_t x235 = -1;
	volatile int16_t x236 = INT16_MIN;
	int32_t t53 = 411001;

	t53 = ((x233|(x234&x235))-x236);

	if (t53 != 32895) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MIN;
	uint16_t x238 = 14U;
	static int64_t x239 = INT64_MAX;
	static int8_t x240 = INT8_MIN;
	int64_t t54 = 107334659LL;

	t54 = ((x237|(x238&x239))-x240);

	if (t54 != -2147483506LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x242 = 30780866LL;
	volatile int8_t x244 = INT8_MIN;
	volatile int64_t t55 = -14785962LL;

	t55 = ((x241|(x242&x243))-x244);

	if (t55 != 30781055LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = 323U;
	static int64_t x246 = -22318LL;
	int32_t x248 = -193799;

	t56 = ((x245|(x246&x247))-x248);

	if (t56 != -2147289526LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x249 = INT8_MIN;
	int16_t x250 = 107;
	static int64_t x252 = INT64_MIN;
	volatile int64_t t57 = -115240787675849LL;

	t57 = ((x249|(x250&x251))-x252);

	if (t57 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x254 = 79512418LL;
	uint32_t x255 = 1U;
	uint32_t x256 = 7650870U;

	t58 = ((x253|(x254&x255))-x256);

	if (t58 != -7618103LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = -1;
	int32_t x258 = INT32_MIN;
	static int8_t x259 = INT8_MIN;
	static int64_t x260 = 432172900742363836LL;
	volatile int64_t t59 = -7434419555491LL;

	t59 = ((x257|(x258&x259))-x260);

	if (t59 != -432172900742363837LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -1;
	uint32_t x262 = 55U;
	int32_t x263 = INT32_MAX;
	uint32_t x264 = 173282U;
	volatile uint32_t t60 = 109U;

	t60 = ((x261|(x262&x263))-x264);

	if (t60 != 4294794013U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = -1;
	int32_t x266 = 1010009477;
	uint32_t x267 = UINT32_MAX;
	volatile int8_t x268 = -11;
	static uint32_t t61 = 7U;

	t61 = ((x265|(x266&x267))-x268);

	if (t61 != 10U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x270 = 5;
	volatile uint16_t x271 = UINT16_MAX;
	static uint8_t x272 = UINT8_MAX;

	t62 = ((x269|(x270&x271))-x272);

	if (t62 != -25622988381826LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = UINT8_MAX;
	static volatile int16_t x274 = 45;
	int64_t x275 = INT64_MAX;
	int64_t t63 = -74340615518LL;

	t63 = ((x273|(x274&x275))-x276);

	if (t63 != 3856026426202668LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MAX;
	volatile int8_t x279 = 28;
	volatile int32_t x280 = -152308144;
	volatile uint64_t t64 = 412767258586854LLU;

	t64 = ((x277|(x278&x279))-x280);

	if (t64 != 2299791791LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = 17082230U;
	volatile uint64_t x282 = 389001056LLU;
	uint64_t x284 = UINT64_MAX;
	uint64_t t65 = 8125LLU;

	t65 = ((x281|(x282&x283))-x284);

	if (t65 != 17082231LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -1;
	volatile int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = UINT64_MAX;
	uint64_t t66 = 80066434905LLU;

	t66 = ((x289|(x290&x291))-x292);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MIN;
	uint32_t x295 = 208782412U;
	uint64_t x296 = 4033LLU;
	uint64_t t67 = 263283175679353638LLU;

	t67 = ((x293|(x294&x295))-x296);

	if (t67 != 9223372036854771775LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x297 = INT8_MIN;
	uint8_t x299 = 41U;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t68 = -183673;

	t68 = ((x297|(x298&x299))-x300);

	if (t68 != 2147483520) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x301 = -1552;
	volatile int16_t x302 = -1;
	uint8_t x303 = 78U;
	static int8_t x304 = 0;
	static volatile int32_t t69 = -321797680;

	t69 = ((x301|(x302&x303))-x304);

	if (t69 != -1538) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x305 = 33;
	static int32_t t70 = 3;

	t70 = ((x305|(x306&x307))-x308);

	if (t70 != -2881) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = -1LL;
	int16_t x311 = -1;
	int64_t x312 = 95063699LL;
	static volatile int64_t t71 = -1732486661457LL;

	t71 = ((x309|(x310&x311))-x312);

	if (t71 != -95063700LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x313 = -1LL;
	volatile int32_t x314 = -1;
	uint8_t x315 = UINT8_MAX;
	static volatile int16_t x316 = 1712;
	volatile int64_t t72 = 2898836107998451LL;

	t72 = ((x313|(x314&x315))-x316);

	if (t72 != -1713LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x317 = 4163LLU;
	int64_t x319 = -73935740153109LL;
	uint64_t t73 = 663803LLU;

	t73 = ((x317|(x318&x319))-x320);

	if (t73 != 18446670137969398509LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = -1;
	int32_t x322 = -494069;
	int16_t x323 = 0;
	int32_t x324 = -779465429;

	t74 = ((x321|(x322&x323))-x324);

	if (t74 != 779465428) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x325 = UINT16_MAX;
	static int64_t x326 = INT64_MIN;
	volatile int8_t x327 = INT8_MIN;
	volatile int32_t x328 = -157;
	static int64_t t75 = -2113024220LL;

	t75 = ((x325|(x326&x327))-x328);

	if (t75 != -9223372036854710116LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x333 = 8111;
	static uint32_t t76 = 10U;

	t76 = ((x333|(x334&x335))-x336);

	if (t76 != 8176U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x337 = -1;
	int8_t x338 = 1;
	int32_t x339 = -61633614;
	uint64_t x340 = 18011LLU;

	t77 = ((x337|(x338&x339))-x340);

	if (t77 != 18446744073709533604LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x341 = 10U;
	int8_t x342 = INT8_MIN;
	volatile uint8_t x343 = 1U;
	static volatile int32_t t78 = 2672;

	t78 = ((x341|(x342&x343))-x344);

	if (t78 != 10) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x346 = 6;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = UINT8_MAX;
	int64_t t79 = 64179230254086655LL;

	t79 = ((x345|(x346&x347))-x348);

	if (t79 != 4294967040LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = -1;
	static volatile int8_t x350 = INT8_MIN;
	static int8_t x351 = -1;
	volatile uint64_t x352 = UINT64_MAX;
	uint64_t t80 = 6396LLU;

	t80 = ((x349|(x350&x351))-x352);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x353 = UINT8_MAX;
	volatile int16_t x356 = INT16_MIN;
	uint64_t t81 = 28470472211086LLU;

	t81 = ((x353|(x354&x355))-x356);

	if (t81 != 2483904946700543LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x357 = 2007U;
	static volatile int8_t x358 = 1;
	int32_t x359 = 4;
	volatile int16_t x360 = -12;
	volatile uint32_t t82 = 824725766U;

	t82 = ((x357|(x358&x359))-x360);

	if (t82 != 2019U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x361 = -184436;
	volatile int64_t x363 = INT64_MIN;
	volatile int32_t x364 = INT32_MIN;
	volatile int64_t t83 = -761482LL;

	t83 = ((x361|(x362&x363))-x364);

	if (t83 != 2147299212LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = 767796LLU;
	static volatile uint32_t x366 = 4855U;
	volatile int32_t x367 = 54400323;
	int8_t x368 = INT8_MIN;
	static volatile uint64_t t84 = 6LLU;

	t84 = ((x365|(x366&x367))-x368);

	if (t84 != 767991LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = INT8_MAX;
	volatile int64_t x374 = INT64_MAX;
	int8_t x375 = INT8_MIN;
	int64_t t85 = 9129128658LL;

	t85 = ((x373|(x374&x375))-x376);

	if (t85 != 9222977020955517903LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x378 = INT8_MAX;
	uint8_t x379 = 96U;
	int8_t x380 = INT8_MAX;

	t86 = ((x377|(x378&x379))-x380);

	if (t86 != 4294967168U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x382 = INT8_MIN;
	static volatile int8_t x383 = -2;
	int32_t t87 = 1886513;

	t87 = ((x381|(x382&x383))-x384);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x385 = INT64_MAX;
	static int64_t x387 = -18990435583404LL;
	volatile int64_t t88 = 7104779LL;

	t88 = ((x385|(x386&x387))-x388);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x389 = -8;
	uint64_t x390 = 1010644608580636008LLU;
	int64_t x391 = INT64_MAX;
	static volatile int8_t x392 = -26;
	uint64_t t89 = 168270233791423LLU;

	t89 = ((x389|(x390&x391))-x392);

	if (t89 != 18LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 112U;
	uint16_t x396 = 26U;

	t90 = ((x393|(x394&x395))-x396);

	if (t90 != -2147483562) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x401 = 2142964795U;
	int8_t x402 = INT8_MAX;
	uint8_t x403 = 1U;
	int32_t x404 = -1;
	uint32_t t91 = 169873U;

	t91 = ((x401|(x402&x403))-x404);

	if (t91 != 2142964796U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x406 = -1695571707LL;
	uint32_t x407 = 20U;
	int16_t x408 = INT16_MIN;

	t92 = ((x405|(x406&x407))-x408);

	if (t92 != 32644LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x409 = 1U;
	int64_t x410 = -220623101LL;
	int32_t x411 = -1;
	uint16_t x412 = 7U;
	int64_t t93 = -124LL;

	t93 = ((x409|(x410&x411))-x412);

	if (t93 != -220623108LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = -1;
	uint32_t x414 = 11U;
	volatile int32_t x415 = -1;
	volatile uint32_t t94 = 214601U;

	t94 = ((x413|(x414&x415))-x416);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x417 = -1;
	int16_t x418 = -6595;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t95 = -1;

	t95 = ((x417|(x418&x419))-x420);

	if (t95 != -65536) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = 0;
	uint32_t x422 = 350U;
	int64_t x423 = INT64_MAX;
	int32_t x424 = INT32_MAX;
	int64_t t96 = 3212979292614LL;

	t96 = ((x421|(x422&x423))-x424);

	if (t96 != -2147483297LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x426 = 1U;
	int8_t x427 = INT8_MAX;
	static volatile uint32_t x428 = 15845U;
	volatile uint32_t t97 = 145229377U;

	t97 = ((x425|(x426&x427))-x428);

	if (t97 != 4294951468U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x429 = 1U;
	uint32_t x430 = 4338611U;
	int16_t x431 = 0;

	t98 = ((x429|(x430&x431))-x432);

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x433 = -1;
	uint16_t x434 = 149U;
	int32_t x435 = -1;
	int8_t x436 = -1;

	t99 = ((x433|(x434&x435))-x436);

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

