#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 273U;
int32_t x4 = INT32_MIN;
int8_t x10 = -1;
int8_t x11 = -1;
int64_t x15 = INT64_MAX;
int64_t x34 = INT64_MIN;
int64_t x35 = 19LL;
volatile int16_t x36 = INT16_MAX;
uint32_t x38 = UINT32_MAX;
uint64_t t9 = 0LLU;
int16_t x49 = INT16_MIN;
int16_t x60 = INT16_MAX;
static volatile int32_t t15 = -15;
int32_t x65 = -1;
volatile int16_t x69 = INT16_MIN;
int8_t x72 = INT8_MAX;
int8_t x75 = INT8_MIN;
static uint32_t x79 = 95U;
uint64_t x81 = 7257LLU;
volatile int64_t t21 = INT64_MAX;
int64_t x90 = INT64_MIN;
int32_t x93 = -192;
volatile int32_t t23 = 0;
uint64_t x100 = UINT64_MAX;
static int32_t x104 = INT32_MAX;
static uint8_t x107 = 79U;
volatile int64_t x112 = INT64_MIN;
static int8_t x118 = INT8_MIN;
int32_t t30 = -7670728;
volatile uint32_t x125 = UINT32_MAX;
static volatile int8_t x128 = INT8_MIN;
volatile int32_t t32 = INT32_MIN;
int8_t x137 = -1;
uint16_t x151 = 18U;
int32_t t37 = -45036;
static volatile uint64_t t38 = UINT64_MAX;
static volatile int16_t x159 = 4;
volatile int32_t t39 = -991;
int64_t x166 = 1453LL;
volatile int32_t t41 = 0;
int32_t x170 = INT32_MIN;
static int32_t x174 = -152;
int64_t x175 = -1LL;
int32_t t44 = 32;
int16_t x190 = INT16_MIN;
int16_t x191 = INT16_MIN;
volatile int16_t x202 = -1;
static uint64_t x205 = 110433LLU;
volatile int32_t x216 = 3;
int8_t x217 = 1;
int32_t t56 = 4;
int8_t x231 = 10;
static int64_t x243 = 4007215LL;
static uint8_t x244 = UINT8_MAX;
int16_t x247 = INT16_MIN;
int32_t x248 = -1;
static int32_t t61 = -91138771;
uint64_t x254 = UINT64_MAX;
static int64_t t63 = 407LL;
int64_t x261 = -1LL;
volatile uint16_t x266 = UINT16_MAX;
int64_t x280 = INT64_MAX;
int16_t x286 = INT16_MIN;
volatile int8_t x291 = INT8_MAX;
volatile int32_t t72 = -832295875;
volatile int8_t x295 = -9;
static int8_t x296 = 14;
static volatile int32_t t73 = 8157;
volatile int8_t x303 = -1;
int64_t x306 = INT64_MIN;
int64_t x308 = -1LL;
int64_t t76 = 11830767404085LL;
uint32_t x312 = 189U;
uint64_t x324 = 0LLU;
uint8_t x332 = 117U;
int16_t x333 = -3;
int16_t x335 = INT16_MAX;
static int32_t t83 = -31496376;
int32_t x341 = INT32_MIN;
int16_t x343 = INT16_MIN;
volatile int8_t x344 = INT8_MIN;
uint32_t x345 = UINT32_MAX;
int64_t x347 = -8957892LL;
int64_t x351 = INT64_MIN;
int32_t x352 = INT32_MAX;
volatile int16_t x356 = INT16_MIN;
int32_t x358 = INT32_MIN;
int32_t x362 = INT32_MAX;
int64_t t90 = -318311022983287862LL;
int32_t x377 = INT32_MIN;
volatile int16_t x386 = -1224;
volatile int32_t x387 = INT32_MIN;
static uint16_t x389 = UINT16_MAX;
volatile int64_t x393 = INT64_MIN;
volatile int64_t x394 = -1LL;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	static uint16_t x3 = 4964U;
	static volatile int32_t t0 = -159;

	t0 = ((x1<=(x2<=x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MAX;
	int64_t x7 = 166825856093350LL;
	volatile uint32_t x8 = 428885879U;
	uint32_t t1 = 10U;

	t1 = ((x5<=(x6<=x7))*x8);

	if (t1 != 428885879U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint8_t x12 = 0U;
	int32_t t2 = -19;

	t2 = ((x9<=(x10<=x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 1853;
	int32_t x14 = INT32_MAX;
	static int64_t x16 = -698814551290130143LL;
	volatile int64_t t3 = -1LL;

	t3 = ((x13<=(x14<=x15))*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 3077620;
	int16_t x18 = 142;
	int16_t x19 = -1;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -31162028;

	t4 = ((x17<=(x18<=x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	uint16_t x22 = UINT16_MAX;
	volatile int8_t x23 = 0;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -12822002;

	t5 = ((x21<=(x22<=x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -3;
	volatile int16_t x26 = INT16_MIN;
	static int16_t x27 = INT16_MAX;
	uint64_t x28 = 44809852693726630LLU;
	volatile uint64_t t6 = 111796067780LLU;

	t6 = ((x25<=(x26<=x27))*x28);

	if (t6 != 44809852693726630LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MIN;
	int64_t x31 = 1LL;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 1788;

	t7 = ((x29<=(x30<=x31))*x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -10676LL;
	int32_t t8 = -1;

	t8 = ((x33<=(x34<=x35))*x36);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = -1;
	uint64_t x40 = 13567437LLU;

	t9 = ((x37<=(x38<=x39))*x40);

	if (t9 != 13567437LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	uint64_t x42 = UINT64_MAX;
	static uint8_t x43 = 26U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -847;

	t10 = ((x41<=(x42<=x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 983908735538017LLU;
	int32_t x46 = 162;
	uint64_t x47 = UINT64_MAX;
	static uint64_t x48 = UINT64_MAX;
	static uint64_t t11 = 1358LLU;

	t11 = ((x45<=(x46<=x47))*x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = -23644901250081LL;
	int32_t x51 = -1226403;
	int32_t x52 = -1;
	static int32_t t12 = 6388;

	t12 = ((x49<=(x50<=x51))*x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 91;
	int16_t x54 = INT16_MIN;
	volatile int8_t x55 = 3;
	int64_t x56 = -6124654LL;
	volatile int64_t t13 = 17357129LL;

	t13 = ((x53<=(x54<=x55))*x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	static uint16_t x58 = 154U;
	static int32_t x59 = INT32_MAX;
	int32_t t14 = 63929;

	t14 = ((x57<=(x58<=x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = INT16_MIN;
	volatile uint8_t x63 = 21U;
	int32_t x64 = -585;

	t15 = ((x61<=(x62<=x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x66 = 55U;
	volatile uint64_t x67 = UINT64_MAX;
	uint16_t x68 = 5317U;
	int32_t t16 = 70266;

	t16 = ((x65<=(x66<=x67))*x68);

	if (t16 != 5317) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -80;
	int32_t x71 = INT32_MIN;
	volatile int32_t t17 = 3;

	t17 = ((x69<=(x70<=x71))*x72);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = -1;
	int64_t x74 = 24721LL;
	volatile int64_t x76 = INT64_MIN;
	static volatile int64_t t18 = INT64_MIN;

	t18 = ((x73<=(x74<=x75))*x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -1830;

	t19 = ((x77<=(x78<=x79))*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 1511U;
	volatile uint64_t x83 = 52029896LLU;
	int16_t x84 = 14;
	volatile int32_t t20 = -16;

	t20 = ((x81<=(x82<=x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = 14511;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MAX;

	t21 = ((x85<=(x86<=x87))*x88);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 712LLU;
	volatile int32_t x91 = -1;
	uint8_t x92 = 1U;
	int32_t t22 = 225;

	t22 = ((x89<=(x90<=x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 0;
	volatile uint8_t x95 = 69U;
	volatile int8_t x96 = INT8_MIN;

	t23 = ((x93<=(x94<=x95))*x96);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = -1LL;
	int16_t x99 = INT16_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = ((x97<=(x98<=x99))*x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 1057491LLU;
	int8_t x102 = -1;
	int8_t x103 = -38;
	int32_t t25 = 1;

	t25 = ((x101<=(x102<=x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -16;
	int32_t x106 = -8;
	int8_t x108 = 35;
	int32_t t26 = -13741685;

	t26 = ((x105<=(x106<=x107))*x108);

	if (t26 != 35) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 964285;
	uint8_t x110 = 50U;
	volatile int8_t x111 = 2;
	int64_t t27 = -9228739847LL;

	t27 = ((x109<=(x110<=x111))*x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 1;
	int32_t x114 = INT32_MIN;
	int64_t x115 = -1LL;
	uint64_t x116 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x113<=(x114<=x115))*x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	uint16_t x119 = 6U;
	uint32_t x120 = 106U;
	uint32_t t29 = 8U;

	t29 = ((x117<=(x118<=x119))*x120);

	if (t29 != 106U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	volatile uint64_t x122 = 5284LLU;
	volatile int32_t x123 = INT32_MAX;
	uint16_t x124 = UINT16_MAX;

	t30 = ((x121<=(x122<=x123))*x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = 35496463934462LL;
	static uint32_t x127 = UINT32_MAX;
	int32_t t31 = 16002045;

	t31 = ((x125<=(x126<=x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int32_t x130 = INT32_MIN;
	int16_t x131 = 29;
	int32_t x132 = INT32_MIN;

	t32 = ((x129<=(x130<=x131))*x132);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 84155206215064430LLU;
	int64_t x134 = 79974LL;
	uint32_t x135 = UINT32_MAX;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t33 = 27703162857371452LLU;

	t33 = ((x133<=(x134<=x135))*x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x138 = UINT8_MAX;
	int32_t x139 = -1;
	int16_t x140 = INT16_MIN;
	static int32_t t34 = 9776582;

	t34 = ((x137<=(x138<=x139))*x140);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	uint16_t x142 = 363U;
	static volatile int32_t x143 = -10537;
	static uint64_t x144 = 991LLU;
	uint64_t t35 = 2359679LLU;

	t35 = ((x141<=(x142<=x143))*x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -3056LL;
	static uint16_t x146 = 227U;
	volatile int8_t x147 = 0;
	uint8_t x148 = 24U;
	int32_t t36 = 36055767;

	t36 = ((x145<=(x146<=x147))*x148);

	if (t36 != 24) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint64_t x150 = 16406931487019136LLU;
	uint16_t x152 = 2U;

	t37 = ((x149<=(x150<=x151))*x152);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	volatile int16_t x154 = -15;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = UINT64_MAX;

	t38 = ((x153<=(x154<=x155))*x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 4309323755116681500LLU;
	int8_t x158 = INT8_MIN;
	int32_t x160 = INT32_MIN;

	t39 = ((x157<=(x158<=x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 32534299U;
	int32_t x162 = -1;
	int32_t x163 = INT32_MIN;
	static uint64_t x164 = 107510LLU;
	volatile uint64_t t40 = 92178407540752623LLU;

	t40 = ((x161<=(x162<=x163))*x164);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MAX;
	static volatile int32_t x167 = INT32_MAX;
	uint8_t x168 = 7U;

	t41 = ((x165<=(x166<=x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 2U;
	int32_t x171 = INT32_MIN;
	static volatile int64_t x172 = INT64_MIN;
	int64_t t42 = -672781292682LL;

	t42 = ((x169<=(x170<=x171))*x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 20;
	int64_t x176 = INT64_MAX;
	volatile int64_t t43 = 5662LL;

	t43 = ((x173<=(x174<=x175))*x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -744;
	int64_t x178 = 112365344934LL;
	static int8_t x179 = 4;
	uint8_t x180 = UINT8_MAX;

	t44 = ((x177<=(x178<=x179))*x180);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -95154;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MAX;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = 271841396;

	t45 = ((x181<=(x182<=x183))*x184);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 1315;
	static int64_t x186 = -1LL;
	int8_t x187 = -1;
	int64_t x188 = INT64_MIN;
	static int64_t t46 = 58032068LL;

	t46 = ((x185<=(x186<=x187))*x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -5247;
	static int16_t x192 = -1;
	static volatile int32_t t47 = -32517498;

	t47 = ((x189<=(x190<=x191))*x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -7LL;
	int32_t x194 = -4814484;
	volatile uint32_t x195 = UINT32_MAX;
	int64_t x196 = 30LL;
	volatile int64_t t48 = -5701755025LL;

	t48 = ((x193<=(x194<=x195))*x196);

	if (t48 != 30LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static volatile uint32_t x198 = UINT32_MAX;
	volatile int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;
	int32_t t49 = INT32_MIN;

	t49 = ((x197<=(x198<=x199))*x200);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	volatile int16_t x203 = INT16_MIN;
	static int16_t x204 = INT16_MAX;
	static volatile int32_t t50 = -5;

	t50 = ((x201<=(x202<=x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MAX;
	volatile int16_t x207 = INT16_MAX;
	volatile int16_t x208 = -14;
	volatile int32_t t51 = -928407;

	t51 = ((x205<=(x206<=x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = INT64_MIN;
	volatile int16_t x210 = 333;
	int16_t x211 = INT16_MAX;
	int8_t x212 = INT8_MAX;
	int32_t t52 = 37651;

	t52 = ((x209<=(x210<=x211))*x212);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = 17860U;
	int64_t x214 = 34093867133672768LL;
	int16_t x215 = 1;
	int32_t t53 = -46225;

	t53 = ((x213<=(x214<=x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MAX;
	uint32_t x219 = UINT32_MAX;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t54 = INT32_MIN;

	t54 = ((x217<=(x218<=x219))*x220);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 51;
	uint32_t x222 = UINT32_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = -375161;

	t55 = ((x221<=(x222<=x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int32_t x226 = 0;
	uint16_t x227 = 889U;
	volatile int16_t x228 = INT16_MAX;

	t56 = ((x225<=(x226<=x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MAX;
	uint8_t x232 = UINT8_MAX;
	int32_t t57 = -1;

	t57 = ((x229<=(x230<=x231))*x232);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1857072;
	int64_t x234 = -2368479715806914LL;
	static uint16_t x235 = UINT16_MAX;
	volatile int32_t x236 = -35;
	static volatile int32_t t58 = -224906;

	t58 = ((x233<=(x234<=x235))*x236);

	if (t58 != -35) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	uint64_t x238 = 2854087540LLU;
	int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = 214363;

	t59 = ((x237<=(x238<=x239))*x240);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static uint16_t x242 = UINT16_MAX;
	volatile int32_t t60 = 26;

	t60 = ((x241<=(x242<=x243))*x244);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = INT32_MIN;

	t61 = ((x245<=(x246<=x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = 1;
	static volatile int8_t x250 = INT8_MIN;
	int8_t x251 = -45;
	static int8_t x252 = INT8_MIN;
	int32_t t62 = 1;

	t62 = ((x249<=(x250<=x251))*x252);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 55241U;
	int16_t x255 = -740;
	int64_t x256 = INT64_MAX;

	t63 = ((x253<=(x254<=x255))*x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x257 = 118U;
	volatile int64_t x258 = -1LL;
	volatile int8_t x259 = -35;
	int32_t x260 = -1;
	int32_t t64 = -1;

	t64 = ((x257<=(x258<=x259))*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MIN;
	static uint32_t x263 = 2002423861U;
	uint16_t x264 = 3U;
	int32_t t65 = 0;

	t65 = ((x261<=(x262<=x263))*x264);

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 30;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = -1;
	volatile int32_t t66 = -47803;

	t66 = ((x265<=(x266<=x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	volatile uint16_t x270 = 4U;
	int8_t x271 = -10;
	uint16_t x272 = UINT16_MAX;
	int32_t t67 = 16930;

	t67 = ((x269<=(x270<=x271))*x272);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 24U;
	volatile int32_t x274 = 60661;
	uint8_t x275 = 7U;
	int32_t x276 = INT32_MIN;
	int32_t t68 = 32;

	t68 = ((x273<=(x274<=x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -5;
	int32_t x278 = INT32_MAX;
	int32_t x279 = INT32_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = ((x277<=(x278<=x279))*x280);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 233747471470098LLU;
	volatile uint32_t x282 = 1065857421U;
	static int32_t x283 = -1;
	static volatile uint8_t x284 = 0U;
	volatile int32_t t70 = -117789;

	t70 = ((x281<=(x282<=x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	static int16_t x287 = -1;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -2892;

	t71 = ((x285<=(x286<=x287))*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	uint16_t x290 = 25U;
	uint16_t x292 = 27U;

	t72 = ((x289<=(x290<=x291))*x292);

	if (t72 != 27) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	volatile int64_t x294 = INT64_MAX;

	t73 = ((x293<=(x294<=x295))*x296);

	if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = UINT32_MAX;
	uint32_t x298 = 1078638423U;
	static int8_t x299 = -26;
	int8_t x300 = INT8_MIN;
	int32_t t74 = 582938;

	t74 = ((x297<=(x298<=x299))*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 184570;
	static volatile uint8_t x302 = 5U;
	uint64_t x304 = 33208647517LLU;
	volatile uint64_t t75 = 5206091LLU;

	t75 = ((x301<=(x302<=x303))*x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int8_t x307 = INT8_MIN;

	t76 = ((x305<=(x306<=x307))*x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -1;
	uint32_t x310 = 2U;
	int64_t x311 = 1394LL;
	volatile uint32_t t77 = 28629149U;

	t77 = ((x309<=(x310<=x311))*x312);

	if (t77 != 189U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MAX;
	int64_t x315 = -34161038316174LL;
	int32_t x316 = INT32_MIN;
	int32_t t78 = INT32_MIN;

	t78 = ((x313<=(x314<=x315))*x316);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 1U;
	int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MIN;
	static int8_t x320 = INT8_MIN;
	int32_t t79 = -392660293;

	t79 = ((x317<=(x318<=x319))*x320);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int16_t x322 = INT16_MAX;
	int16_t x323 = -63;
	static uint64_t t80 = 5727LLU;

	t80 = ((x321<=(x322<=x323))*x324);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x326 = 0U;
	int16_t x327 = -1;
	static volatile int32_t x328 = -1;
	static int32_t t81 = 18;

	t81 = ((x325<=(x326<=x327))*x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 17910986675595961LLU;
	int64_t x330 = INT64_MIN;
	volatile int64_t x331 = INT64_MAX;
	int32_t t82 = -530483968;

	t82 = ((x329<=(x330<=x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = -1;
	static volatile int16_t x336 = INT16_MIN;

	t83 = ((x333<=(x334<=x335))*x336);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -7;
	static volatile int32_t x338 = -177407;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	static volatile int32_t t84 = 9841437;

	t84 = ((x337<=(x338<=x339))*x340);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = 19U;
	int32_t t85 = -216;

	t85 = ((x341<=(x342<=x343))*x344);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = -1;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = -2;

	t86 = ((x345<=(x346<=x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	int16_t x350 = 5007;
	volatile int32_t t87 = INT32_MAX;

	t87 = ((x349<=(x350<=x351))*x352);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	volatile uint32_t x354 = 7U;
	static int64_t x355 = INT64_MAX;
	static int32_t t88 = 4948;

	t88 = ((x353<=(x354<=x355))*x356);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 915472177492784LLU;
	int16_t x359 = INT16_MIN;
	static uint8_t x360 = 27U;
	static volatile int32_t t89 = -496300500;

	t89 = ((x357<=(x358<=x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	uint16_t x363 = 118U;
	int64_t x364 = -284933972301269218LL;

	t90 = ((x361<=(x362<=x363))*x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int16_t x366 = 11;
	int16_t x367 = INT16_MAX;
	int32_t x368 = -264485994;
	static volatile int32_t t91 = -32612319;

	t91 = ((x365<=(x366<=x367))*x368);

	if (t91 != -264485994) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = 46U;
	uint32_t x370 = 5005U;
	int8_t x371 = INT8_MIN;
	static int16_t x372 = -1;
	volatile int32_t t92 = -33;

	t92 = ((x369<=(x370<=x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	uint16_t x374 = 718U;
	int8_t x375 = -1;
	int8_t x376 = 1;
	volatile int32_t t93 = 14672434;

	t93 = ((x373<=(x374<=x375))*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x378 = INT8_MIN;
	volatile uint16_t x379 = 0U;
	static volatile uint8_t x380 = 20U;
	volatile int32_t t94 = -4306;

	t94 = ((x377<=(x378<=x379))*x380);

	if (t94 != 20) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MAX;
	int8_t x382 = INT8_MAX;
	static int32_t x383 = -1;
	int64_t x384 = INT64_MAX;
	int64_t t95 = -2114187899457252687LL;

	t95 = ((x381<=(x382<=x383))*x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 102246987700LLU;
	uint8_t x388 = 2U;
	volatile int32_t t96 = -2797;

	t96 = ((x385<=(x386<=x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 0U;
	static int64_t x392 = -1LL;
	int64_t t97 = 161LL;

	t97 = ((x389<=(x390<=x391))*x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x395 = UINT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = INT32_MIN;

	t98 = ((x393<=(x394<=x395))*x396);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 3309;
	volatile int16_t x398 = INT16_MAX;
	int64_t x399 = INT64_MIN;
	int8_t x400 = -1;
	int32_t t99 = 523002;

	t99 = ((x397<=(x398<=x399))*x400);

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

