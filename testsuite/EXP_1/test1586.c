#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = INT32_MIN;
volatile uint16_t x5 = UINT16_MAX;
volatile uint64_t x8 = 133378000630991LLU;
int64_t x14 = INT64_MAX;
int8_t x15 = -1;
uint32_t x18 = 10748732U;
int32_t x19 = INT32_MIN;
uint32_t x21 = 0U;
volatile int8_t x25 = INT8_MIN;
uint64_t x26 = UINT64_MAX;
uint64_t t6 = 771LLU;
int8_t x29 = -1;
volatile int32_t t7 = 280830;
int64_t x40 = -2568006469LL;
static volatile uint8_t x47 = 4U;
int16_t x48 = -11096;
volatile int32_t t10 = 193447;
uint16_t x49 = 12752U;
int32_t t11 = -13;
int8_t x56 = INT8_MIN;
static volatile uint32_t t12 = 178574U;
int8_t x58 = -27;
int16_t x59 = -1;
static int8_t x60 = INT8_MIN;
int8_t x61 = INT8_MIN;
int8_t x64 = INT8_MIN;
volatile uint32_t t14 = 1U;
int8_t x81 = -16;
volatile int32_t x85 = 477;
int16_t x90 = INT16_MIN;
int32_t t20 = -3;
int32_t t21 = INT32_MAX;
volatile uint64_t x103 = UINT64_MAX;
int32_t t24 = 1296973;
uint64_t x115 = 3455930525882157883LLU;
int32_t x117 = 26399;
uint8_t x120 = UINT8_MAX;
static int8_t x122 = 1;
volatile int16_t x124 = -1159;
static int8_t x125 = 1;
int64_t t34 = -513118LL;
uint32_t x150 = 31917691U;
int64_t x162 = INT64_MIN;
volatile int32_t t38 = -64259;
int16_t x168 = 50;
volatile int16_t x170 = INT16_MAX;
int64_t x175 = INT64_MAX;
int64_t t41 = -2519LL;
int8_t x178 = INT8_MIN;
uint64_t x180 = 80994881143786LLU;
int16_t x181 = INT16_MIN;
volatile int64_t x182 = -2469LL;
static int32_t x190 = INT32_MIN;
uint64_t x197 = UINT64_MAX;
int8_t x198 = INT8_MIN;
int8_t x204 = -1;
static int64_t t48 = -808LL;
volatile uint8_t x208 = UINT8_MAX;
int32_t x213 = INT32_MIN;
int32_t x232 = 6685864;
int8_t x238 = INT8_MIN;
volatile uint64_t t58 = 350819920LLU;
uint16_t x245 = UINT16_MAX;
int8_t x247 = -1;
uint64_t x257 = 1907843801944331709LLU;
int8_t x260 = INT8_MIN;
volatile int16_t x267 = -1;
int64_t t64 = -4057216155826832LL;
volatile int32_t t66 = 52834;
int8_t x277 = -1;
static int64_t x282 = -1396451LL;
uint16_t x283 = UINT16_MAX;
volatile uint16_t x289 = UINT16_MAX;
int16_t x290 = INT16_MIN;
int32_t x298 = -1;
int16_t x300 = INT16_MAX;
static volatile int32_t t72 = 35359243;
int32_t x302 = -5;
int32_t t73 = 2;
static int16_t x310 = -1;
static uint32_t x314 = 1568728U;
int32_t x322 = INT32_MAX;
static int8_t x330 = INT8_MIN;
int64_t x331 = INT64_MIN;
int16_t x334 = -1;
static uint8_t x336 = 71U;
volatile uint32_t x342 = 475398536U;
static volatile int32_t t83 = -2342052;
volatile int8_t x347 = 1;
int8_t x365 = -12;
static int16_t x366 = -1;
int32_t x368 = INT32_MIN;
int64_t x371 = -1LL;
static uint16_t x372 = 1U;
int64_t x376 = INT64_MIN;
uint16_t x383 = 22304U;
static int8_t x387 = -1;
static uint64_t x391 = 959LLU;
uint16_t x393 = UINT16_MAX;
static volatile int64_t x398 = INT64_MAX;
uint64_t t97 = 23239377560867615LLU;
static int8_t x401 = INT8_MIN;
int16_t x404 = INT16_MIN;


void f0(void) {
	static int8_t x1 = -1;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = UINT16_MAX;
	volatile int32_t x4 = INT32_MIN;

	t0 = (((x1<=x2)%x3)^x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = UINT32_MAX;
	volatile int32_t x7 = INT32_MAX;
	static uint64_t t1 = 50LLU;

	t1 = (((x5<=x6)%x7)^x8);

	if (t1 != 133378000630990LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static int8_t x10 = INT8_MIN;
	int32_t x11 = INT32_MAX;
	volatile int32_t x12 = -1;
	int32_t t2 = 6073260;

	t2 = (((x9<=x10)%x11)^x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	uint64_t x16 = 784743454LLU;
	uint64_t t3 = 293029054189768854LLU;

	t3 = (((x13<=x14)%x15)^x16);

	if (t3 != 784743454LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint16_t x20 = 9U;
	volatile int32_t t4 = -4161984;

	t4 = (((x17<=x18)%x19)^x20);

	if (t4 != 9) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	int64_t x23 = -1LL;
	int8_t x24 = -1;
	volatile int64_t t5 = -1027LL;

	t5 = (((x21<=x22)%x23)^x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x27 = 1065540819743LLU;
	uint8_t x28 = 7U;

	t6 = (((x25<=x26)%x27)^x28);

	if (t6 != 6LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 30619502689LLU;
	volatile int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MAX;

	t7 = (((x29<=x30)%x31)^x32);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = UINT32_MAX;
	volatile int32_t x38 = INT32_MIN;
	static uint32_t x39 = UINT32_MAX;
	int64_t t8 = -3644365952504852586LL;

	t8 = (((x37<=x38)%x39)^x40);

	if (t8 != -2568006469LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = INT32_MIN;
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 163071U;
	int8_t x44 = 27;
	volatile uint32_t t9 = 534U;

	t9 = (((x41<=x42)%x43)^x44);

	if (t9 != 26U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -6204685942LL;
	int32_t x46 = 34784;

	t10 = (((x45<=x46)%x47)^x48);

	if (t10 != -11095) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = INT64_MIN;
	volatile int32_t x51 = 15092083;
	int32_t x52 = 0;

	t11 = (((x49<=x50)%x51)^x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MAX;
	static int16_t x54 = 11;
	uint32_t x55 = UINT32_MAX;

	t12 = (((x53<=x54)%x55)^x56);

	if (t12 != 4294967168U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MAX;
	volatile int32_t t13 = 109552;

	t13 = (((x57<=x58)%x59)^x60);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = 207622700U;
	volatile uint32_t x63 = 96U;

	t14 = (((x61<=x62)%x63)^x64);

	if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	static volatile uint64_t x66 = 5230858LLU;
	volatile int64_t x67 = -1LL;
	int32_t x68 = -1;
	volatile int64_t t15 = 104091724LL;

	t15 = (((x65<=x66)%x67)^x68);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MIN;
	static uint16_t x70 = 1264U;
	uint64_t x71 = 2445417807685615LLU;
	uint32_t x72 = 429032U;
	uint64_t t16 = 38LLU;

	t16 = (((x69<=x70)%x71)^x72);

	if (t16 != 429033LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = INT16_MIN;
	volatile int64_t x78 = -8263358760LL;
	volatile int32_t x79 = -1;
	volatile int32_t x80 = INT32_MAX;
	volatile int32_t t17 = INT32_MAX;

	t17 = (((x77<=x78)%x79)^x80);

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x82 = 14268001U;
	static uint16_t x83 = 5942U;
	uint64_t x84 = 142LLU;
	uint64_t t18 = 20128234966899169LLU;

	t18 = (((x81<=x82)%x83)^x84);

	if (t18 != 142LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = INT8_MAX;
	static int32_t x87 = -1;
	volatile int64_t x88 = -11057741711441LL;
	volatile int64_t t19 = -1203369124383986965LL;

	t19 = (((x85<=x86)%x87)^x88);

	if (t19 != -11057741711441LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x91 = -1;
	int8_t x92 = INT8_MIN;

	t20 = (((x89<=x90)%x91)^x92);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 0U;
	static int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MAX;

	t21 = (((x93<=x94)%x95)^x96);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -5;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t22 = -7;

	t22 = (((x97<=x98)%x99)^x100);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x101 = UINT32_MAX;
	static int32_t x102 = -30573695;
	int32_t x104 = -1;
	uint64_t t23 = UINT64_MAX;

	t23 = (((x101<=x102)%x103)^x104);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	volatile uint64_t x106 = 2181719696528LLU;
	uint8_t x107 = UINT8_MAX;
	static volatile uint8_t x108 = UINT8_MAX;

	t24 = (((x105<=x106)%x107)^x108);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x109 = INT32_MIN;
	volatile int32_t x110 = INT32_MAX;
	static uint8_t x111 = 14U;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t25 = -78835457;

	t25 = (((x109<=x110)%x111)^x112);

	if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MAX;
	static volatile int64_t x114 = INT64_MAX;
	int32_t x116 = INT32_MIN;
	uint64_t t26 = 982104845LLU;

	t26 = (((x113<=x114)%x115)^x116);

	if (t26 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = 503;
	volatile uint8_t x119 = 2U;
	int32_t t27 = -1;

	t27 = (((x117<=x118)%x119)^x120);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x121 = INT64_MAX;
	static int8_t x123 = -1;
	volatile int32_t t28 = -128485603;

	t28 = (((x121<=x122)%x123)^x124);

	if (t28 != -1159) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MAX;
	int32_t x128 = INT32_MIN;
	int64_t t29 = 34896LL;

	t29 = (((x125<=x126)%x127)^x128);

	if (t29 != -2147483647LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	static volatile int64_t x132 = INT64_MAX;
	volatile uint64_t t30 = 167557658326538LLU;

	t30 = (((x129<=x130)%x131)^x132);

	if (t30 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -1LL;
	static int8_t x134 = -1;
	static volatile int8_t x135 = INT8_MIN;
	int8_t x136 = -2;
	int32_t t31 = 140329;

	t31 = (((x133<=x134)%x135)^x136);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MIN;
	static volatile uint32_t x139 = 1U;
	int16_t x140 = INT16_MIN;
	uint32_t t32 = 1U;

	t32 = (((x137<=x138)%x139)^x140);

	if (t32 != 4294934528U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = 2757315LLU;
	int64_t x142 = 60184552452LL;
	uint32_t x143 = UINT32_MAX;
	uint32_t x144 = 1U;
	uint32_t t33 = 117157548U;

	t33 = (((x141<=x142)%x143)^x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x146 = 0U;
	int64_t x147 = -1LL;
	int64_t x148 = 160LL;

	t34 = (((x145<=x146)%x147)^x148);

	if (t34 != 160LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 23U;
	int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MAX;
	volatile int32_t t35 = -14;

	t35 = (((x149<=x150)%x151)^x152);

	if (t35 != 32766) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint8_t x154 = 9U;
	uint16_t x155 = 230U;
	uint16_t x156 = 1U;
	volatile int32_t t36 = 74620;

	t36 = (((x153<=x154)%x155)^x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x157 = 2025;
	uint16_t x158 = UINT16_MAX;
	static int64_t x159 = -5130LL;
	volatile uint32_t x160 = 323829U;
	static int64_t t37 = -3610345845992705061LL;

	t37 = (((x157<=x158)%x159)^x160);

	if (t37 != 323828LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = -1LL;
	uint16_t x163 = 1009U;
	int32_t x164 = -1;

	t38 = (((x161<=x162)%x163)^x164);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = -1LL;
	volatile int32_t x167 = 1;
	int32_t t39 = 6134951;

	t39 = (((x165<=x166)%x167)^x168);

	if (t39 != 50) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = INT32_MIN;
	uint16_t x171 = 15U;
	int64_t x172 = INT64_MAX;
	static int64_t t40 = 250619660LL;

	t40 = (((x169<=x170)%x171)^x172);

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = 15910348U;
	int8_t x176 = -5;

	t41 = (((x173<=x174)%x175)^x176);

	if (t41 != -5LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	static int32_t x179 = -1;
	volatile uint64_t t42 = 157901149361LLU;

	t42 = (((x177<=x178)%x179)^x180);

	if (t42 != 80994881143786LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x183 = INT8_MIN;
	volatile int16_t x184 = INT16_MIN;
	static volatile int32_t t43 = 815;

	t43 = (((x181<=x182)%x183)^x184);

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	uint64_t x186 = 2450445289376144439LLU;
	int64_t x187 = INT64_MAX;
	volatile uint64_t x188 = UINT64_MAX;
	volatile uint64_t t44 = 15609469634LLU;

	t44 = (((x185<=x186)%x187)^x188);

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x189 = INT32_MAX;
	uint32_t x191 = 156954472U;
	static int32_t x192 = INT32_MAX;
	uint32_t t45 = 538U;

	t45 = (((x189<=x190)%x191)^x192);

	if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x193 = 2U;
	int8_t x194 = INT8_MIN;
	int32_t x195 = -1;
	static volatile int32_t x196 = 61115695;
	volatile int32_t t46 = -8482;

	t46 = (((x193<=x194)%x195)^x196);

	if (t46 != 61115695) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x199 = INT32_MIN;
	static uint16_t x200 = 25U;
	static volatile int32_t t47 = 1490;

	t47 = (((x197<=x198)%x199)^x200);

	if (t47 != 25) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = 27566U;
	int64_t x203 = INT64_MAX;

	t48 = (((x201<=x202)%x203)^x204);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x205 = 7827LLU;
	static uint16_t x206 = 606U;
	volatile int64_t x207 = INT64_MAX;
	volatile int64_t t49 = -35456483LL;

	t49 = (((x205<=x206)%x207)^x208);

	if (t49 != 255LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x209 = 34458462;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int16_t x212 = 2884;
	volatile int64_t t50 = -59302751224LL;

	t50 = (((x209<=x210)%x211)^x212);

	if (t50 != 2884LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x214 = INT32_MIN;
	int8_t x215 = 1;
	uint16_t x216 = 473U;
	static volatile int32_t t51 = -6020;

	t51 = (((x213<=x214)%x215)^x216);

	if (t51 != 473) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MAX;
	static uint16_t x218 = 0U;
	int64_t x219 = -373LL;
	int16_t x220 = -1;
	int64_t t52 = -942845953986618LL;

	t52 = (((x217<=x218)%x219)^x220);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = 961010433408626710LL;
	volatile uint8_t x223 = 12U;
	int8_t x224 = INT8_MIN;
	int32_t t53 = 29;

	t53 = (((x221<=x222)%x223)^x224);

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	uint8_t x226 = UINT8_MAX;
	volatile uint8_t x227 = 2U;
	uint8_t x228 = UINT8_MAX;
	int32_t t54 = 0;

	t54 = (((x225<=x226)%x227)^x228);

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = INT16_MAX;
	int16_t x230 = 1;
	int8_t x231 = INT8_MIN;
	static int32_t t55 = -5148;

	t55 = (((x229<=x230)%x231)^x232);

	if (t55 != 6685864) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x233 = INT64_MIN;
	volatile int16_t x234 = -7;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = INT64_MAX;
	static volatile uint64_t t56 = 260649LLU;

	t56 = (((x233<=x234)%x235)^x236);

	if (t56 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = UINT64_MAX;
	static uint32_t x239 = 6601U;
	int64_t x240 = INT64_MIN;
	int64_t t57 = INT64_MIN;

	t57 = (((x237<=x238)%x239)^x240);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = INT8_MAX;
	volatile uint8_t x242 = UINT8_MAX;
	static volatile int16_t x243 = INT16_MIN;
	uint64_t x244 = 673766978LLU;

	t58 = (((x241<=x242)%x243)^x244);

	if (t58 != 673766979LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = INT64_MIN;
	volatile int8_t x248 = INT8_MIN;
	static int32_t t59 = 2;

	t59 = (((x245<=x246)%x247)^x248);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x249 = 55853927U;
	static int16_t x250 = -1;
	uint8_t x251 = 124U;
	volatile int16_t x252 = 1;
	volatile int32_t t60 = -260;

	t60 = (((x249<=x250)%x251)^x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 105185519U;
	uint64_t x254 = 36935611822635LLU;
	static uint32_t x255 = 2723130U;
	int32_t x256 = INT32_MAX;
	uint32_t t61 = 93015216U;

	t61 = (((x253<=x254)%x255)^x256);

	if (t61 != 2147483646U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x258 = 414U;
	int32_t x259 = INT32_MIN;
	int32_t t62 = -7635688;

	t62 = (((x257<=x258)%x259)^x260);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = UINT64_MAX;
	static int16_t x262 = INT16_MAX;
	int32_t x263 = INT32_MIN;
	static int16_t x264 = INT16_MAX;
	int32_t t63 = -175;

	t63 = (((x261<=x262)%x263)^x264);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = 1;
	volatile int32_t x266 = 2041;
	int64_t x268 = -1LL;

	t64 = (((x265<=x266)%x267)^x268);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x269 = INT32_MAX;
	int16_t x270 = 1;
	int8_t x271 = INT8_MAX;
	static int16_t x272 = -1;
	int32_t t65 = -42;

	t65 = (((x269<=x270)%x271)^x272);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = INT64_MAX;
	static uint8_t x275 = 3U;
	uint8_t x276 = UINT8_MAX;

	t66 = (((x273<=x274)%x275)^x276);

	if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x278 = 135932086550782287LLU;
	static uint16_t x279 = 193U;
	int32_t x280 = INT32_MAX;
	volatile int32_t t67 = INT32_MAX;

	t67 = (((x277<=x278)%x279)^x280);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MAX;
	static int64_t x284 = 968LL;
	int64_t t68 = -15442564LL;

	t68 = (((x281<=x282)%x283)^x284);

	if (t68 != 968LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x285 = 917U;
	volatile int8_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MIN;
	uint64_t t69 = 504LLU;

	t69 = (((x285<=x286)%x287)^x288);

	if (t69 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x291 = -1;
	int64_t x292 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = (((x289<=x290)%x291)^x292);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x293 = INT16_MAX;
	static int32_t x294 = -1;
	static uint8_t x295 = 29U;
	static int32_t x296 = 49840;
	int32_t t71 = -124258;

	t71 = (((x293<=x294)%x295)^x296);

	if (t71 != 49840) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = 23LL;
	static int16_t x299 = INT16_MIN;

	t72 = (((x297<=x298)%x299)^x300);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x301 = INT8_MAX;
	uint8_t x303 = 2U;
	static uint16_t x304 = 16475U;

	t73 = (((x301<=x302)%x303)^x304);

	if (t73 != 16475) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MAX;
	int64_t x308 = INT64_MAX;
	volatile int64_t t74 = -434428835548865LL;

	t74 = (((x305<=x306)%x307)^x308);

	if (t74 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x309 = INT32_MIN;
	static int16_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t75 = -14744846;

	t75 = (((x309<=x310)%x311)^x312);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = INT64_MIN;
	int8_t x315 = -1;
	int32_t x316 = 109;
	int32_t t76 = 187;

	t76 = (((x313<=x314)%x315)^x316);

	if (t76 != 109) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = 565934579241LL;
	static int64_t x319 = INT64_MAX;
	uint8_t x320 = 12U;
	int64_t t77 = 4194907028529LL;

	t77 = (((x317<=x318)%x319)^x320);

	if (t77 != 13LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = -1;
	uint64_t x323 = 63290969173LLU;
	int64_t x324 = INT64_MAX;
	uint64_t t78 = 6LLU;

	t78 = (((x321<=x322)%x323)^x324);

	if (t78 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x325 = 182U;
	static int8_t x326 = -10;
	int32_t x327 = 30;
	int8_t x328 = INT8_MAX;
	int32_t t79 = -45595711;

	t79 = (((x325<=x326)%x327)^x328);

	if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -2;
	int16_t x332 = -1;
	int64_t t80 = 391597LL;

	t80 = (((x329<=x330)%x331)^x332);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x333 = 304555613543926369LLU;
	uint64_t x335 = 9674000274131531LLU;
	volatile uint64_t t81 = 1061210917076062LLU;

	t81 = (((x333<=x334)%x335)^x336);

	if (t81 != 70LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x337 = INT64_MAX;
	static int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MAX;
	int16_t x340 = 0;
	int32_t t82 = 305849105;

	t82 = (((x337<=x338)%x339)^x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = -1;
	int16_t x343 = 19;
	static volatile int8_t x344 = -36;

	t83 = (((x341<=x342)%x343)^x344);

	if (t83 != -36) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MIN;
	static int8_t x348 = -41;
	static volatile int32_t t84 = 140410261;

	t84 = (((x345<=x346)%x347)^x348);

	if (t84 != -41) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x349 = INT64_MIN;
	int64_t x350 = -66939761LL;
	volatile int16_t x351 = -89;
	static int8_t x352 = 5;
	volatile int32_t t85 = -24625585;

	t85 = (((x349<=x350)%x351)^x352);

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = -1;
	volatile int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	int32_t x356 = INT32_MIN;
	int64_t t86 = -70541625LL;

	t86 = (((x353<=x354)%x355)^x356);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = -1;
	uint64_t x358 = 12621865443432LLU;
	int8_t x359 = -1;
	int32_t x360 = -247;
	volatile int32_t t87 = 258550440;

	t87 = (((x357<=x358)%x359)^x360);

	if (t87 != -247) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = 1LL;
	uint16_t x362 = UINT16_MAX;
	static int8_t x363 = INT8_MIN;
	uint16_t x364 = 1U;
	int32_t t88 = 30587612;

	t88 = (((x361<=x362)%x363)^x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x367 = INT8_MAX;
	volatile int32_t t89 = 2420;

	t89 = (((x365<=x366)%x367)^x368);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	int64_t t90 = -12011702816843LL;

	t90 = (((x369<=x370)%x371)^x372);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x373 = 0U;
	uint32_t x374 = 54181977U;
	uint64_t x375 = 4594304LLU;
	uint64_t t91 = 35432975834LLU;

	t91 = (((x373<=x374)%x375)^x376);

	if (t91 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MIN;
	volatile uint16_t x378 = 1058U;
	int32_t x379 = 216836296;
	uint8_t x380 = 0U;
	volatile int32_t t92 = 0;

	t92 = (((x377<=x378)%x379)^x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	volatile int16_t x384 = INT16_MIN;
	int32_t t93 = 3830237;

	t93 = (((x381<=x382)%x383)^x384);

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x385 = -1LL;
	int8_t x386 = INT8_MAX;
	static volatile int8_t x388 = INT8_MIN;
	static volatile int32_t t94 = -211381546;

	t94 = (((x385<=x386)%x387)^x388);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -2LL;
	int64_t x390 = -1LL;
	static int32_t x392 = INT32_MAX;
	volatile uint64_t t95 = 54014132730641LLU;

	t95 = (((x389<=x390)%x391)^x392);

	if (t95 != 2147483646LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x394 = INT16_MAX;
	uint8_t x395 = UINT8_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t96 = 9;

	t96 = (((x393<=x394)%x395)^x396);

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x397 = 0U;
	uint32_t x399 = 8849U;
	static uint64_t x400 = 98LLU;

	t97 = (((x397<=x398)%x399)^x400);

	if (t97 != 99LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x402 = 236U;
	static int64_t x403 = -3264250374LL;
	static volatile int64_t t98 = 899901218419353LL;

	t98 = (((x401<=x402)%x403)^x404);

	if (t98 != -32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = -5349862;
	volatile int64_t x406 = INT64_MIN;
	static uint16_t x407 = 21U;
	uint32_t x408 = 4056U;
	volatile uint32_t t99 = 560U;

	t99 = (((x405<=x406)%x407)^x408);

	if (t99 != 4056U) { NG(); } else { ; }
	
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

