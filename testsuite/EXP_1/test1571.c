#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 727083008020LLU;
uint64_t x6 = 32097486LLU;
volatile int32_t t2 = -7;
uint8_t x21 = UINT8_MAX;
int16_t x26 = INT16_MIN;
static int16_t x31 = -1;
static int32_t x32 = INT32_MIN;
uint64_t x34 = 77LLU;
int32_t x39 = -62853;
static volatile int32_t t9 = -103757;
static volatile int32_t x49 = INT32_MIN;
uint8_t x52 = 32U;
volatile uint64_t x56 = 101LLU;
uint8_t x65 = 0U;
volatile int16_t x66 = 3436;
uint16_t x67 = 7U;
int32_t x71 = -1;
int16_t x76 = -1;
static uint8_t x80 = 0U;
uint64_t x85 = UINT64_MAX;
static int32_t t21 = 1;
int64_t x93 = 15053LL;
uint64_t t22 = 27125182218LLU;
static int64_t x97 = -55202853279824609LL;
volatile uint16_t x100 = 2U;
int32_t t23 = -582;
int64_t t25 = 24266705LL;
uint32_t x109 = UINT32_MAX;
uint8_t x112 = UINT8_MAX;
int16_t x116 = INT16_MAX;
static volatile uint32_t t28 = 65U;
int32_t x129 = INT32_MAX;
int8_t x130 = INT8_MIN;
static int32_t x136 = 27016;
int8_t x145 = INT8_MIN;
int32_t t35 = 647484;
int32_t x151 = 680915122;
static int8_t x152 = 56;
volatile int64_t x153 = -282917092519LL;
int8_t x154 = -1;
volatile int64_t t37 = -16LL;
int16_t x162 = -1;
volatile int64_t t40 = -1883995LL;
volatile int64_t t43 = 110169699LL;
int32_t x186 = INT32_MIN;
int8_t x187 = -45;
static int32_t t47 = 1;
int64_t x202 = INT64_MIN;
static volatile int16_t x205 = 33;
int32_t x207 = INT32_MIN;
static volatile int32_t t50 = -4609;
int64_t x213 = -105020876LL;
uint64_t x214 = UINT64_MAX;
int8_t x215 = 1;
volatile int32_t t52 = 364;
int16_t x224 = -1;
int32_t t53 = 114;
static int8_t x227 = INT8_MIN;
int64_t x233 = INT64_MAX;
volatile int32_t t56 = 22;
volatile uint32_t x239 = 7792U;
int16_t x247 = -1;
int32_t x249 = INT32_MAX;
int32_t x258 = INT32_MIN;
int64_t x261 = 15732216971091783LL;
int32_t x264 = INT32_MAX;
static int8_t x270 = INT8_MIN;
int8_t x282 = 0;
uint16_t x283 = UINT16_MAX;
int8_t x284 = -11;
uint16_t x285 = UINT16_MAX;
int64_t x288 = -1679073823955LL;
uint64_t t71 = 816315LLU;
static uint32_t x299 = 31935U;
static volatile uint32_t t72 = 999294U;
int32_t t73 = 224117;
uint16_t x306 = 165U;
int32_t t75 = -705336;
static volatile uint64_t x315 = 132700009157LLU;
int16_t x316 = INT16_MAX;
volatile uint64_t t76 = 11269LLU;
int64_t t77 = 31892077486410054LL;
int64_t x322 = 4283975LL;
volatile int8_t x329 = -1;
int32_t x330 = -59305647;
static int16_t x335 = INT16_MAX;
static int32_t t81 = -13;
int64_t x337 = -1LL;
uint64_t x339 = 330LLU;
int64_t x344 = INT64_MIN;
int64_t t83 = 411LL;
uint8_t x351 = UINT8_MAX;
int64_t x358 = INT64_MAX;
volatile int32_t t87 = -172;
volatile uint8_t x368 = 2U;
static uint32_t t91 = 194U;
int8_t x378 = -1;
int8_t x383 = -41;
static int8_t x387 = INT8_MIN;
int8_t x390 = INT8_MIN;
static int64_t x392 = INT64_MAX;
volatile uint32_t x397 = UINT32_MAX;
int64_t t97 = -29LL;
static int8_t x401 = -8;
static int8_t x406 = INT8_MAX;
int16_t x408 = INT16_MAX;
int32_t t99 = 62;


void f0(void) {
	static int16_t x1 = 48;
	int32_t x2 = INT32_MAX;
	uint8_t x3 = 6U;
	static int32_t x4 = INT32_MAX;
	static volatile int32_t t0 = -103;

	t0 = (((x1<=x2)/x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = 1;
	int64_t x8 = INT64_MAX;
	static int64_t t1 = -10756976528283613LL;

	t1 = (((x5<=x6)/x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint8_t x10 = 4U;
	static int16_t x11 = -4;
	int8_t x12 = INT8_MIN;

	t2 = (((x9<=x10)/x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	volatile int16_t x14 = 53;
	volatile int8_t x15 = 6;
	int64_t x16 = -1LL;
	volatile int64_t t3 = -9459740600LL;

	t3 = (((x13<=x14)/x15)&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int16_t x18 = -1;
	uint16_t x19 = 2018U;
	static int64_t x20 = -2201568784LL;
	volatile int64_t t4 = -129282391448721LL;

	t4 = (((x17<=x18)/x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x22 = 59535964215LLU;
	uint8_t x23 = UINT8_MAX;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t5 = 3556;

	t5 = (((x21<=x22)/x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int8_t x27 = INT8_MIN;
	static uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = -15281;

	t6 = (((x25<=x26)/x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	static int64_t x30 = INT64_MIN;
	int32_t t7 = 53;

	t7 = (((x29<=x30)/x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = 55U;
	int32_t t8 = 949;

	t8 = (((x33<=x34)/x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int8_t x38 = -1;
	int16_t x40 = INT16_MAX;

	t9 = (((x37<=x38)/x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint8_t x42 = 0U;
	int64_t x43 = -1LL;
	int8_t x44 = -35;
	volatile int64_t t10 = 25LL;

	t10 = (((x41<=x42)/x43)&x44);

	if (t10 != -35LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = UINT32_MAX;
	uint8_t x47 = UINT8_MAX;
	static int8_t x48 = -1;
	int32_t t11 = 14;

	t11 = (((x45<=x46)/x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x50 = 651193U;
	volatile int32_t x51 = INT32_MIN;
	int32_t t12 = -79480689;

	t12 = (((x49<=x50)/x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -19;
	uint64_t x54 = UINT64_MAX;
	uint32_t x55 = UINT32_MAX;
	uint64_t t13 = 6643921460LLU;

	t13 = (((x53<=x54)/x55)&x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	uint16_t x58 = UINT16_MAX;
	volatile uint8_t x59 = UINT8_MAX;
	int16_t x60 = -1;
	volatile int32_t t14 = 0;

	t14 = (((x57<=x58)/x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = 783612LL;
	uint16_t x62 = 470U;
	uint8_t x63 = UINT8_MAX;
	static volatile int32_t x64 = INT32_MAX;
	static int32_t t15 = -35703462;

	t15 = (((x61<=x62)/x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x68 = INT64_MAX;
	int64_t t16 = -25LL;

	t16 = (((x65<=x66)/x67)&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	volatile int64_t x70 = INT64_MIN;
	int8_t x72 = -12;
	int32_t t17 = 56769;

	t17 = (((x69<=x70)/x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = 776888;
	int32_t x74 = 0;
	static int8_t x75 = -1;
	static int32_t t18 = 13;

	t18 = (((x73<=x74)/x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	int64_t x78 = 967971011LL;
	int32_t x79 = -110784;
	volatile int32_t t19 = -6;

	t19 = (((x77<=x78)/x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x86 = INT16_MAX;
	volatile int16_t x87 = -4344;
	int64_t x88 = INT64_MIN;
	int64_t t20 = -65LL;

	t20 = (((x85<=x86)/x87)&x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 27556U;
	int64_t x90 = INT64_MAX;
	uint8_t x91 = 18U;
	int8_t x92 = INT8_MAX;

	t21 = (((x89<=x90)/x91)&x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MIN;
	static int8_t x95 = -18;
	uint64_t x96 = 190061LLU;

	t22 = (((x93<=x94)/x95)&x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x98 = -1;
	static int8_t x99 = INT8_MIN;

	t23 = (((x97<=x98)/x99)&x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = -1;
	static int8_t x103 = -54;
	uint16_t x104 = 15U;
	static int32_t t24 = 252;

	t24 = (((x101<=x102)/x103)&x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MIN;
	int32_t x107 = 2;
	int64_t x108 = 2LL;

	t25 = (((x105<=x106)/x107)&x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x110 = INT16_MIN;
	uint16_t x111 = 4U;
	volatile int32_t t26 = 80;

	t26 = (((x109<=x110)/x111)&x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x113 = 430;
	volatile int64_t x114 = INT64_MIN;
	static uint32_t x115 = UINT32_MAX;
	static uint32_t t27 = 101442087U;

	t27 = (((x113<=x114)/x115)&x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MIN;
	uint32_t x119 = UINT32_MAX;
	static uint8_t x120 = UINT8_MAX;

	t28 = (((x117<=x118)/x119)&x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	uint32_t x124 = 1763728U;
	static uint32_t t29 = 8874U;

	t29 = (((x121<=x122)/x123)&x124);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x125 = 4U;
	uint32_t x126 = 435714786U;
	static int8_t x127 = INT8_MIN;
	static uint64_t x128 = 88220025298344539LLU;
	uint64_t t30 = 668554LLU;

	t30 = (((x125<=x126)/x127)&x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x131 = INT16_MIN;
	int16_t x132 = -9329;
	volatile int32_t t31 = -953;

	t31 = (((x129<=x130)/x131)&x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	uint8_t x134 = UINT8_MAX;
	static int8_t x135 = INT8_MIN;
	int32_t t32 = -47519;

	t32 = (((x133<=x134)/x135)&x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = -1;
	int32_t x138 = 12352793;
	static int64_t x139 = -1LL;
	int64_t x140 = 23438LL;
	int64_t t33 = -24LL;

	t33 = (((x137<=x138)/x139)&x140);

	if (t33 != 23438LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	volatile int32_t x142 = -1;
	volatile int32_t x143 = -1;
	static volatile uint64_t x144 = UINT64_MAX;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x141<=x142)/x143)&x144);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x146 = 29U;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = UINT16_MAX;

	t35 = (((x145<=x146)/x147)&x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x149 = 1U;
	volatile uint8_t x150 = UINT8_MAX;
	volatile int32_t t36 = 0;

	t36 = (((x149<=x150)/x151)&x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x155 = 470U;
	static volatile int64_t x156 = INT64_MIN;

	t37 = (((x153<=x154)/x155)&x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	uint16_t x159 = 10U;
	static volatile int32_t x160 = 1937;
	int32_t t38 = 1;

	t38 = (((x157<=x158)/x159)&x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	volatile int8_t x163 = INT8_MIN;
	int16_t x164 = -1;
	volatile int32_t t39 = 473;

	t39 = (((x161<=x162)/x163)&x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = -864566125095375326LL;
	int16_t x166 = INT16_MIN;
	static uint16_t x167 = 33U;
	int64_t x168 = INT64_MIN;

	t40 = (((x165<=x166)/x167)&x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 46LLU;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = UINT32_MAX;
	static volatile uint64_t t41 = 1295963844431523571LLU;

	t41 = (((x169<=x170)/x171)&x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	static int64_t x174 = INT64_MIN;
	volatile int16_t x175 = INT16_MIN;
	int16_t x176 = -104;
	volatile int32_t t42 = 6583313;

	t42 = (((x173<=x174)/x175)&x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	uint64_t x178 = 2489200092249208LLU;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = UINT32_MAX;

	t43 = (((x177<=x178)/x179)&x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = UINT8_MAX;
	uint16_t x182 = UINT16_MAX;
	volatile uint16_t x183 = 52U;
	uint8_t x184 = UINT8_MAX;
	int32_t t44 = -94613010;

	t44 = (((x181<=x182)/x183)&x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -12889;
	int64_t x188 = 616057LL;
	volatile int64_t t45 = -36LL;

	t45 = (((x185<=x186)/x187)&x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = 62685013;
	uint16_t x190 = UINT16_MAX;
	int8_t x191 = INT8_MIN;
	int16_t x192 = -91;
	volatile int32_t t46 = -32396;

	t46 = (((x189<=x190)/x191)&x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MIN;
	static volatile uint64_t x194 = 18344LLU;
	static int32_t x195 = -1;
	int8_t x196 = 29;

	t47 = (((x193<=x194)/x195)&x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MAX;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = UINT8_MAX;
	int32_t t48 = -19149453;

	t48 = (((x201<=x202)/x203)&x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x206 = -1;
	int64_t x208 = -1LL;
	volatile int64_t t49 = -740118306855221LL;

	t49 = (((x205<=x206)/x207)&x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x209 = 3U;
	static volatile int64_t x210 = INT64_MIN;
	static uint16_t x211 = 267U;
	static uint8_t x212 = 44U;

	t50 = (((x209<=x210)/x211)&x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x216 = -3010981057LL;
	int64_t t51 = -75837000351LL;

	t51 = (((x213<=x214)/x215)&x216);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x217 = 14619981LLU;
	uint32_t x218 = 2342231U;
	int16_t x219 = 7;
	int16_t x220 = INT16_MIN;

	t52 = (((x217<=x218)/x219)&x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = 653;
	volatile int16_t x223 = 93;

	t53 = (((x221<=x222)/x223)&x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = 233575;
	static int32_t x226 = 1;
	int8_t x228 = 17;
	static volatile int32_t t54 = -84;

	t54 = (((x225<=x226)/x227)&x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	static uint16_t x231 = UINT16_MAX;
	uint8_t x232 = 13U;
	int32_t t55 = -1;

	t55 = (((x229<=x230)/x231)&x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x234 = 19U;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;

	t56 = (((x233<=x234)/x235)&x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x237 = -3;
	volatile uint64_t x238 = 74023841524LLU;
	int16_t x240 = INT16_MAX;
	uint32_t t57 = 104154673U;

	t57 = (((x237<=x238)/x239)&x240);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MIN;
	static int64_t x242 = -5708298735LL;
	uint8_t x243 = UINT8_MAX;
	uint8_t x244 = UINT8_MAX;
	int32_t t58 = 137808635;

	t58 = (((x241<=x242)/x243)&x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x245 = INT64_MAX;
	int8_t x246 = INT8_MIN;
	volatile int8_t x248 = INT8_MIN;
	static int32_t t59 = 1615;

	t59 = (((x245<=x246)/x247)&x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x250 = INT16_MAX;
	int32_t x251 = INT32_MIN;
	int16_t x252 = 0;
	static volatile int32_t t60 = 0;

	t60 = (((x249<=x250)/x251)&x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = -1;
	static int64_t x254 = -1LL;
	volatile int64_t x255 = INT64_MIN;
	uint64_t x256 = 15024537LLU;
	volatile uint64_t t61 = 7652637152LLU;

	t61 = (((x253<=x254)/x255)&x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = UINT64_MAX;
	int32_t x259 = -1;
	int64_t x260 = 0LL;
	volatile int64_t t62 = -489833429997LL;

	t62 = (((x257<=x258)/x259)&x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x262 = -226776776;
	int64_t x263 = INT64_MIN;
	int64_t t63 = 216941791739LL;

	t63 = (((x261<=x262)/x263)&x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x265 = UINT8_MAX;
	static volatile uint16_t x266 = 3568U;
	int8_t x267 = INT8_MIN;
	static int32_t x268 = INT32_MAX;
	int32_t t64 = -99722994;

	t64 = (((x265<=x266)/x267)&x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	static volatile uint64_t x271 = 10331LLU;
	int32_t x272 = INT32_MIN;
	uint64_t t65 = 7574053LLU;

	t65 = (((x269<=x270)/x271)&x272);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MAX;
	volatile int8_t x274 = INT8_MIN;
	uint32_t x275 = UINT32_MAX;
	uint16_t x276 = 811U;
	uint32_t t66 = 8614673U;

	t66 = (((x273<=x274)/x275)&x276);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = -1LL;
	volatile uint32_t x278 = UINT32_MAX;
	int8_t x279 = INT8_MAX;
	static volatile int16_t x280 = 16;
	int32_t t67 = -16992406;

	t67 = (((x277<=x278)/x279)&x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x281 = 164U;
	volatile int32_t t68 = 109644;

	t68 = (((x281<=x282)/x283)&x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x286 = INT16_MIN;
	uint16_t x287 = 2524U;
	volatile int64_t t69 = -17LL;

	t69 = (((x285<=x286)/x287)&x288);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = UINT64_MAX;
	int8_t x290 = -1;
	int8_t x291 = INT8_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t70 = -468306175;

	t70 = (((x289<=x290)/x291)&x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x293 = 70829026767161082LLU;
	int64_t x294 = INT64_MAX;
	int64_t x295 = 946068908974LL;
	uint64_t x296 = 6428078503LLU;

	t71 = (((x293<=x294)/x295)&x296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -2;
	uint64_t x298 = 203132598313LLU;
	static int32_t x300 = -1;

	t72 = (((x297<=x298)/x299)&x300);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = -71;
	uint16_t x302 = 15501U;
	int8_t x303 = -1;
	uint8_t x304 = 1U;

	t73 = (((x301<=x302)/x303)&x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x305 = 7U;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = 1148;
	volatile uint32_t t74 = 106307316U;

	t74 = (((x305<=x306)/x307)&x308);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = -1LL;
	int8_t x310 = -7;
	int8_t x311 = 63;
	int8_t x312 = INT8_MAX;

	t75 = (((x309<=x310)/x311)&x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = INT64_MIN;
	uint64_t x314 = UINT64_MAX;

	t76 = (((x313<=x314)/x315)&x316);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 7U;
	static int8_t x318 = -1;
	static int64_t x319 = INT64_MIN;
	uint16_t x320 = 436U;

	t77 = (((x317<=x318)/x319)&x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x321 = INT32_MIN;
	int32_t x323 = -1;
	int64_t x324 = -1LL;
	int64_t t78 = 18LL;

	t78 = (((x321<=x322)/x323)&x324);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x325 = 0U;
	static uint32_t x326 = 1771069U;
	volatile uint32_t x327 = UINT32_MAX;
	int16_t x328 = -1;
	volatile uint32_t t79 = 72075495U;

	t79 = (((x325<=x326)/x327)&x328);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x331 = -25;
	int32_t x332 = INT32_MIN;
	volatile int32_t t80 = 360;

	t80 = (((x329<=x330)/x331)&x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = 871281349527633826LL;
	volatile uint16_t x334 = 7789U;
	int16_t x336 = -1;

	t81 = (((x333<=x334)/x335)&x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x338 = INT8_MIN;
	uint16_t x340 = UINT16_MAX;
	uint64_t t82 = 34446398826327231LLU;

	t82 = (((x337<=x338)/x339)&x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = -1;
	int64_t x342 = INT64_MIN;
	int8_t x343 = -11;

	t83 = (((x341<=x342)/x343)&x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -28;
	volatile int8_t x346 = -1;
	uint8_t x347 = 4U;
	uint16_t x348 = 373U;
	int32_t t84 = -26659;

	t84 = (((x345<=x346)/x347)&x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x349 = -413328LL;
	int8_t x350 = -1;
	int16_t x352 = -1;
	volatile int32_t t85 = 191;

	t85 = (((x349<=x350)/x351)&x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x353 = INT64_MIN;
	int16_t x354 = -151;
	static int8_t x355 = INT8_MIN;
	uint32_t x356 = 10783U;
	static volatile uint32_t t86 = 247U;

	t86 = (((x353<=x354)/x355)&x356);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x359 = INT32_MIN;
	volatile int16_t x360 = INT16_MAX;

	t87 = (((x357<=x358)/x359)&x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x361 = 891906U;
	static uint8_t x362 = 40U;
	uint32_t x363 = 171373U;
	int8_t x364 = INT8_MAX;
	static volatile uint32_t t88 = 4U;

	t88 = (((x361<=x362)/x363)&x364);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = -11;
	uint64_t x366 = UINT64_MAX;
	int16_t x367 = -11;
	volatile int32_t t89 = -386512599;

	t89 = (((x365<=x366)/x367)&x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x369 = UINT32_MAX;
	uint16_t x370 = UINT16_MAX;
	static int64_t x371 = INT64_MIN;
	int16_t x372 = 44;
	volatile int64_t t90 = 2606LL;

	t90 = (((x369<=x370)/x371)&x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x373 = UINT64_MAX;
	static int64_t x374 = 95375LL;
	int32_t x375 = INT32_MAX;
	static uint32_t x376 = UINT32_MAX;

	t91 = (((x373<=x374)/x375)&x376);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = -1LL;
	uint64_t x379 = UINT64_MAX;
	static int32_t x380 = -6;
	volatile uint64_t t92 = 10017281821527LLU;

	t92 = (((x377<=x378)/x379)&x380);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x381 = 3U;
	int64_t x382 = -1LL;
	uint8_t x384 = 6U;
	volatile int32_t t93 = 533940055;

	t93 = (((x381<=x382)/x383)&x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = 13097U;
	int16_t x386 = INT16_MAX;
	int8_t x388 = 1;
	int32_t t94 = 0;

	t94 = (((x385<=x386)/x387)&x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = INT8_MIN;
	static int32_t x391 = INT32_MAX;
	static int64_t t95 = 9LL;

	t95 = (((x389<=x390)/x391)&x392);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MAX;
	static int8_t x394 = 11;
	int8_t x395 = INT8_MIN;
	static int16_t x396 = 0;
	static int32_t t96 = 3437;

	t96 = (((x393<=x394)/x395)&x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = INT32_MIN;
	static int64_t x399 = INT64_MIN;
	static volatile int32_t x400 = INT32_MIN;

	t97 = (((x397<=x398)/x399)&x400);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x402 = 150476292U;
	int64_t x403 = INT64_MAX;
	int16_t x404 = 7;
	volatile int64_t t98 = -894051949LL;

	t98 = (((x401<=x402)/x403)&x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = 146;
	static volatile int32_t x407 = -7;

	t99 = (((x405<=x406)/x407)&x408);

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

