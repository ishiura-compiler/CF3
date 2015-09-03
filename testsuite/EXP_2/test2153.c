#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x8 = 10U;
volatile int32_t t6 = -685442730;
int16_t x29 = 289;
uint16_t x30 = 6116U;
int32_t x36 = -8839;
uint64_t x38 = UINT64_MAX;
static volatile int32_t t12 = 55360;
volatile uint64_t x55 = UINT64_MAX;
int8_t x57 = -39;
int8_t x62 = INT8_MIN;
volatile int32_t t15 = -8539;
static volatile int32_t x65 = INT32_MAX;
volatile int64_t x66 = INT64_MAX;
uint8_t x67 = UINT8_MAX;
int16_t x71 = -1;
int8_t x79 = INT8_MIN;
static int64_t x84 = INT64_MAX;
volatile int32_t t20 = -3707;
uint8_t x86 = 14U;
int8_t x88 = -39;
int8_t x89 = INT8_MIN;
int64_t x94 = INT64_MAX;
static int32_t t23 = 1677;
volatile uint16_t x107 = UINT16_MAX;
int32_t x110 = -2;
int32_t t27 = 1;
int32_t t31 = 867286058;
int16_t x131 = INT16_MIN;
int16_t x135 = -1269;
int32_t x138 = INT32_MIN;
uint64_t x143 = UINT64_MAX;
volatile int32_t t36 = -7;
static uint8_t x155 = UINT8_MAX;
int32_t x158 = INT32_MIN;
static int16_t x162 = -1;
int32_t t41 = 118;
volatile int32_t t45 = -754;
uint64_t x188 = 734852203434256LLU;
int32_t x189 = 12;
static uint64_t x195 = 407669365538LLU;
int16_t x196 = INT16_MAX;
int16_t x203 = INT16_MIN;
int16_t x209 = 2924;
volatile uint16_t x210 = UINT16_MAX;
int32_t t52 = -7;
uint8_t x214 = 0U;
volatile int32_t t53 = 42;
volatile int32_t x220 = -1;
int32_t t55 = 202374202;
uint64_t x228 = 24941LLU;
volatile int8_t x229 = 1;
static int64_t x230 = INT64_MAX;
int64_t x232 = 29LL;
volatile int32_t t57 = -1144579;
volatile int32_t t58 = -1;
static uint16_t x237 = 2087U;
static volatile int32_t x239 = -1;
int16_t x247 = INT16_MAX;
static uint32_t x250 = 357324729U;
uint16_t x255 = 1420U;
int16_t x259 = -42;
int64_t x263 = INT64_MIN;
int32_t x264 = -2327429;
static int32_t x265 = INT32_MIN;
uint32_t x266 = 94425U;
int8_t x267 = 17;
uint32_t x270 = UINT32_MAX;
static uint64_t x272 = 61392LLU;
int32_t t68 = 0;
volatile int8_t x281 = -7;
static int32_t t70 = -3110660;
uint32_t x290 = 249136582U;
int16_t x293 = -1;
int32_t x298 = INT32_MIN;
uint64_t x304 = 4137678119LLU;
static volatile int32_t x308 = INT32_MIN;
int32_t t76 = -7634;
int8_t x310 = -1;
int8_t x320 = INT8_MAX;
volatile int32_t t79 = -375406006;
uint8_t x323 = UINT8_MAX;
static volatile int32_t t80 = -109463;
volatile int32_t t81 = -96;
volatile int32_t t82 = -131;
static volatile int16_t x335 = INT16_MAX;
uint8_t x343 = 58U;
int8_t x350 = INT8_MIN;
static int16_t x355 = INT16_MIN;
uint16_t x357 = UINT16_MAX;
int8_t x359 = INT8_MAX;
static int16_t x363 = -1;
int16_t x364 = 278;
int32_t t91 = -133;
uint16_t x371 = 13174U;
volatile int32_t t92 = 903017060;
uint16_t x374 = 17U;
uint32_t x377 = UINT32_MAX;
int64_t x380 = INT64_MIN;
int8_t x388 = INT8_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	static int32_t x4 = INT32_MAX;
	static int32_t t0 = -529;

	t0 = ((x1<=(x2^x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 195376174075111264LL;
	static uint8_t x6 = 51U;
	uint16_t x7 = UINT16_MAX;
	static int32_t t1 = -134;

	t1 = ((x5<=(x6^x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	volatile int16_t x10 = -1;
	volatile int8_t x11 = 1;
	uint16_t x12 = 11U;
	int32_t t2 = -146411;

	t2 = ((x9<=(x10^x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 242090912LL;
	int16_t x14 = INT16_MAX;
	volatile int32_t x15 = -423633;
	uint32_t x16 = 1848U;
	volatile int32_t t3 = 0;

	t3 = ((x13<=(x14^x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 1995U;
	uint64_t x18 = 249084941551349LLU;
	uint64_t x19 = 375967889963LLU;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 1170406;

	t4 = ((x17<=(x18^x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 15U;
	int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 41748572;

	t5 = ((x21<=(x22^x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -4316;
	int16_t x26 = INT16_MAX;
	uint8_t x27 = 5U;
	int8_t x28 = INT8_MIN;

	t6 = ((x25<=(x26^x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = 1290488LL;
	int16_t x32 = -1;
	static volatile int32_t t7 = -18327;

	t7 = ((x29<=(x30^x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint64_t x34 = 645LLU;
	volatile int64_t x35 = -78LL;
	volatile int32_t t8 = 23385273;

	t8 = ((x33<=(x34^x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int64_t x39 = INT64_MAX;
	int32_t x40 = INT32_MIN;
	static int32_t t9 = 6748;

	t9 = ((x37<=(x38^x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	static int16_t x42 = INT16_MIN;
	uint64_t x43 = UINT64_MAX;
	volatile int64_t x44 = -9034015LL;
	int32_t t10 = 2;

	t10 = ((x41<=(x42^x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 6;
	volatile int32_t x46 = INT32_MAX;
	int16_t x47 = INT16_MIN;
	int64_t x48 = 18892730LL;
	int32_t t11 = 178951;

	t11 = ((x45<=(x46^x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int8_t x50 = INT8_MAX;
	uint8_t x51 = UINT8_MAX;
	static volatile int16_t x52 = 1;

	t12 = ((x49<=(x50^x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = INT64_MAX;
	uint64_t x56 = UINT64_MAX;
	int32_t t13 = 7;

	t13 = ((x53<=(x54^x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = -31855377475LL;
	int64_t x59 = INT64_MAX;
	volatile int8_t x60 = INT8_MAX;
	int32_t t14 = 782;

	t14 = ((x57<=(x58^x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	static int8_t x63 = 1;
	static int64_t x64 = INT64_MAX;

	t15 = ((x61<=(x62^x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x68 = 99LLU;
	volatile int32_t t16 = -8;

	t16 = ((x65<=(x66^x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = UINT16_MAX;
	uint8_t x70 = 80U;
	uint8_t x72 = 15U;
	volatile int32_t t17 = -12614797;

	t17 = ((x69<=(x70^x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 5815753LL;
	int32_t x74 = 113;
	int8_t x75 = INT8_MAX;
	int8_t x76 = 1;
	volatile int32_t t18 = 3892761;

	t18 = ((x73<=(x74^x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	int16_t x78 = 1293;
	static uint64_t x80 = 16895LLU;
	volatile int32_t t19 = -936509110;

	t19 = ((x77<=(x78^x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x81 = INT8_MIN;
	uint32_t x82 = 213270U;
	static int8_t x83 = -11;

	t20 = ((x81<=(x82^x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int8_t x87 = 1;
	int32_t t21 = 10;

	t21 = ((x85<=(x86^x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = UINT16_MAX;
	static int32_t x91 = 705010123;
	int64_t x92 = INT64_MIN;
	int32_t t22 = -452161;

	t22 = ((x89<=(x90^x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = 5025986391145LLU;

	t23 = ((x93<=(x94^x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 14U;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = UINT32_MAX;
	uint8_t x100 = 5U;
	int32_t t24 = -491070211;

	t24 = ((x97<=(x98^x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 13U;
	static int16_t x102 = -1;
	int32_t x103 = -97;
	volatile int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = 37785;

	t25 = ((x101<=(x102^x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	volatile uint64_t x108 = 38200373766508785LLU;
	volatile int32_t t26 = -5535004;

	t26 = ((x105<=(x106^x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -23162LL;
	uint16_t x111 = 10888U;
	volatile int32_t x112 = INT32_MAX;

	t27 = ((x109<=(x110^x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = 49266LL;
	int8_t x114 = -6;
	int32_t x115 = -1;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = 5;

	t28 = ((x113<=(x114^x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 117492951LLU;
	uint32_t x118 = 1014688792U;
	uint8_t x119 = UINT8_MAX;
	uint32_t x120 = 2U;
	static volatile int32_t t29 = 941612013;

	t29 = ((x117<=(x118^x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 11;
	static int8_t x122 = -1;
	int8_t x123 = 2;
	int32_t x124 = 19;
	volatile int32_t t30 = 37124416;

	t30 = ((x121<=(x122^x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	uint8_t x126 = 1U;
	int8_t x127 = 0;
	uint64_t x128 = UINT64_MAX;

	t31 = ((x125<=(x126^x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x129 = 47747LLU;
	static uint32_t x130 = 29441965U;
	uint32_t x132 = UINT32_MAX;
	static volatile int32_t t32 = -1337;

	t32 = ((x129<=(x130^x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MAX;
	int64_t x134 = -1LL;
	int32_t x136 = INT32_MAX;
	int32_t t33 = -105;

	t33 = ((x133<=(x134^x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int16_t x139 = 2155;
	static int32_t x140 = -1;
	volatile int32_t t34 = -29;

	t34 = ((x137<=(x138^x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	uint64_t x142 = 114LLU;
	static int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -5;

	t35 = ((x141<=(x142^x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 442U;
	volatile uint64_t x146 = 226139316352914397LLU;
	volatile int32_t x147 = -1;
	volatile uint8_t x148 = 0U;

	t36 = ((x145<=(x146^x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	uint8_t x150 = 91U;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MAX;
	volatile int32_t t37 = 751;

	t37 = ((x149<=(x150^x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = 7699;
	int32_t x154 = 10542027;
	volatile int64_t x156 = -6381159522LL;
	int32_t t38 = 330;

	t38 = ((x153<=(x154^x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x157 = INT32_MIN;
	int8_t x159 = -1;
	int8_t x160 = 1;
	int32_t t39 = -12;

	t39 = ((x157<=(x158^x159))==x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	static int32_t x163 = -1041629;
	static int8_t x164 = -1;
	int32_t t40 = 245;

	t40 = ((x161<=(x162^x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static volatile int64_t x166 = 80599894992773302LL;
	uint64_t x167 = 0LLU;
	int32_t x168 = INT32_MIN;

	t41 = ((x165<=(x166^x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	uint8_t x170 = 1U;
	static int16_t x171 = -5786;
	static uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = -7772658;

	t42 = ((x169<=(x170^x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = UINT64_MAX;
	uint16_t x174 = 4U;
	int16_t x175 = 1468;
	uint64_t x176 = 2LLU;
	static int32_t t43 = 3403;

	t43 = ((x173<=(x174^x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MIN;
	static volatile uint32_t x178 = 210U;
	uint64_t x179 = 528229022040LLU;
	static int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 95570;

	t44 = ((x177<=(x178^x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	volatile uint32_t x182 = 7915170U;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 831225174U;

	t45 = ((x181<=(x182^x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	static volatile int32_t t46 = 387000231;

	t46 = ((x185<=(x186^x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = INT64_MIN;
	volatile int32_t x191 = INT32_MIN;
	static volatile uint64_t x192 = UINT64_MAX;
	volatile int32_t t47 = 16;

	t47 = ((x189<=(x190^x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = -1;
	volatile int32_t t48 = -1;

	t48 = ((x193<=(x194^x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int32_t x198 = INT32_MIN;
	volatile int64_t x199 = 244897085LL;
	uint32_t x200 = 1172U;
	static int32_t t49 = 24946;

	t49 = ((x197<=(x198^x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	volatile int32_t x202 = INT32_MIN;
	volatile int16_t x204 = -1;
	int32_t t50 = -1907;

	t50 = ((x201<=(x202^x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	int64_t x206 = -1LL;
	int64_t x207 = -22069107511LL;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 0;

	t51 = ((x205<=(x206^x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x211 = 102063656429719LLU;
	static int32_t x212 = 203078633;

	t52 = ((x209<=(x210^x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	int64_t x215 = -1LL;
	static int16_t x216 = INT16_MIN;

	t53 = ((x213<=(x214^x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MAX;
	int8_t x219 = INT8_MAX;
	volatile int32_t t54 = -1855771;

	t54 = ((x217<=(x218^x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = 1934681040LLU;
	static volatile uint8_t x222 = 1U;
	int16_t x223 = 4;
	static int8_t x224 = INT8_MIN;

	t55 = ((x221<=(x222^x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	uint16_t x226 = UINT16_MAX;
	volatile int8_t x227 = -1;
	int32_t t56 = -1030;

	t56 = ((x225<=(x226^x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x231 = INT64_MIN;

	t57 = ((x229<=(x230^x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MAX;
	volatile int8_t x234 = -1;
	uint8_t x235 = 7U;
	int8_t x236 = INT8_MIN;

	t58 = ((x233<=(x234^x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MIN;
	int32_t x240 = -1;
	static int32_t t59 = -100949;

	t59 = ((x237<=(x238^x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static volatile int8_t x242 = INT8_MAX;
	int16_t x243 = INT16_MIN;
	volatile int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 7336401;

	t60 = ((x241<=(x242^x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = -2727110688322423LL;
	int16_t x248 = 570;
	volatile int32_t t61 = 124;

	t61 = ((x245<=(x246^x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 0U;
	int16_t x251 = INT16_MIN;
	volatile uint32_t x252 = UINT32_MAX;
	static int32_t t62 = -2059215;

	t62 = ((x249<=(x250^x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	uint8_t x254 = UINT8_MAX;
	volatile uint64_t x256 = 1956965722085254LLU;
	volatile int32_t t63 = -2004992;

	t63 = ((x253<=(x254^x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = UINT32_MAX;
	volatile int16_t x258 = 1450;
	uint64_t x260 = UINT64_MAX;
	static volatile int32_t t64 = 228241019;

	t64 = ((x257<=(x258^x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	static uint32_t x262 = UINT32_MAX;
	volatile int32_t t65 = -84;

	t65 = ((x261<=(x262^x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x268 = INT16_MIN;
	int32_t t66 = 13;

	t66 = ((x265<=(x266^x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	int8_t x271 = 12;
	static volatile int32_t t67 = 551542;

	t67 = ((x269<=(x270^x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = 1U;
	static int8_t x274 = INT8_MIN;
	static uint64_t x275 = 5999813165LLU;
	uint16_t x276 = 812U;

	t68 = ((x273<=(x274^x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 6U;
	uint16_t x278 = 0U;
	volatile int16_t x279 = INT16_MAX;
	int32_t x280 = -1;
	int32_t t69 = -47;

	t69 = ((x277<=(x278^x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -1;
	int32_t x283 = INT32_MIN;
	static int16_t x284 = INT16_MIN;

	t70 = ((x281<=(x282^x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	static int32_t x286 = -1;
	uint32_t x287 = 46060U;
	int64_t x288 = INT64_MAX;
	static int32_t t71 = 166553472;

	t71 = ((x285<=(x286^x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = UINT8_MAX;
	static uint32_t x291 = 1903740634U;
	static int8_t x292 = -1;
	int32_t t72 = 4;

	t72 = ((x289<=(x290^x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MAX;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -2983;

	t73 = ((x293<=(x294^x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = UINT64_MAX;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	int32_t t74 = -418353759;

	t74 = ((x297<=(x298^x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	uint8_t x302 = 23U;
	int64_t x303 = INT64_MIN;
	int32_t t75 = 9;

	t75 = ((x301<=(x302^x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	static volatile int64_t x306 = 3133713LL;
	int16_t x307 = -1;

	t76 = ((x305<=(x306^x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = 5124;
	int16_t x311 = INT16_MIN;
	int32_t x312 = 332554467;
	int32_t t77 = 1;

	t77 = ((x309<=(x310^x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int64_t x314 = 985LL;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = 48746237682LLU;
	volatile int32_t t78 = -898;

	t78 = ((x313<=(x314^x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MIN;
	uint64_t x319 = 3933039877LLU;

	t79 = ((x317<=(x318^x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MAX;
	int32_t x324 = INT32_MIN;

	t80 = ((x321<=(x322^x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = UINT32_MAX;
	int64_t x326 = INT64_MAX;
	static int64_t x327 = INT64_MIN;
	uint8_t x328 = UINT8_MAX;

	t81 = ((x325<=(x326^x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -57;
	uint16_t x330 = 2806U;
	int64_t x331 = -460LL;
	volatile int16_t x332 = INT16_MIN;

	t82 = ((x329<=(x330^x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 3U;
	int8_t x334 = -5;
	int8_t x336 = 1;
	int32_t t83 = 0;

	t83 = ((x333<=(x334^x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 19761905U;
	static int32_t x338 = 484;
	int64_t x339 = 2143408519190483LL;
	volatile int8_t x340 = INT8_MIN;
	int32_t t84 = 40;

	t84 = ((x337<=(x338^x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	static uint8_t x342 = UINT8_MAX;
	volatile int16_t x344 = INT16_MIN;
	int32_t t85 = 104;

	t85 = ((x341<=(x342^x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -891;
	int32_t x346 = 1;
	static int8_t x347 = INT8_MIN;
	int32_t x348 = -1;
	volatile int32_t t86 = 11193778;

	t86 = ((x345<=(x346^x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 71411LLU;
	uint64_t x351 = 199441585LLU;
	volatile uint32_t x352 = 34U;
	volatile int32_t t87 = -13957762;

	t87 = ((x349<=(x350^x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 150803963;
	volatile int32_t x354 = -12615337;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t88 = 1;

	t88 = ((x353<=(x354^x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x358 = 18U;
	int64_t x360 = INT64_MAX;
	volatile int32_t t89 = 60565;

	t89 = ((x357<=(x358^x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	int64_t x362 = INT64_MIN;
	volatile int32_t t90 = 207864;

	t90 = ((x361<=(x362^x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 1;
	uint64_t x366 = UINT64_MAX;
	static int8_t x367 = INT8_MIN;
	int16_t x368 = 119;

	t91 = ((x365<=(x366^x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = -1;
	int32_t x370 = -815;
	int32_t x372 = 59;

	t92 = ((x369<=(x370^x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	uint32_t x375 = 190U;
	static uint64_t x376 = 134943856693681LLU;
	int32_t t93 = -12469088;

	t93 = ((x373<=(x374^x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 2U;
	uint32_t x379 = UINT32_MAX;
	static int32_t t94 = -16680;

	t94 = ((x377<=(x378^x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	uint32_t x382 = 12081U;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = 24449757LLU;
	int32_t t95 = -20;

	t95 = ((x381<=(x382^x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static int16_t x386 = -1;
	volatile int32_t x387 = 19;
	volatile int32_t t96 = 15;

	t96 = ((x385<=(x386^x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	volatile int64_t x390 = INT64_MIN;
	static int16_t x391 = -2605;
	static int16_t x392 = INT16_MAX;
	static volatile int32_t t97 = 4;

	t97 = ((x389<=(x390^x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	static int8_t x394 = -3;
	volatile int32_t x395 = INT32_MAX;
	uint32_t x396 = UINT32_MAX;
	static volatile int32_t t98 = 1;

	t98 = ((x393<=(x394^x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = INT64_MAX;
	int64_t x400 = INT64_MAX;
	int32_t t99 = -5551;

	t99 = ((x397<=(x398^x399))==x400);

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

