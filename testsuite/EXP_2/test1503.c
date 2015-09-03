#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x21 = -1;
int16_t x27 = 6;
uint16_t x34 = 4U;
volatile int32_t t8 = 21048233;
volatile int16_t x40 = -15312;
volatile uint16_t x41 = 1848U;
int64_t x43 = INT64_MAX;
int8_t x52 = INT8_MIN;
uint16_t x68 = 1U;
int8_t x83 = INT8_MIN;
volatile int32_t t20 = -65746;
uint8_t x90 = UINT8_MAX;
int8_t x93 = INT8_MIN;
volatile uint16_t x95 = 32095U;
static volatile int32_t t23 = 62;
int32_t x103 = -25;
int64_t x104 = 450235LL;
static volatile int32_t t26 = -14069310;
volatile uint32_t x112 = 1205013U;
volatile int32_t t27 = 0;
int64_t x124 = -1LL;
int32_t t31 = 61644966;
volatile int32_t t32 = -125053;
int64_t x133 = 1260LL;
volatile uint64_t x158 = UINT64_MAX;
int16_t x160 = INT16_MIN;
int32_t t41 = 7;
int16_t x172 = -418;
static volatile int32_t t44 = 61891044;
int8_t x186 = -7;
static int32_t t49 = -197025886;
static volatile int16_t x203 = -1;
int8_t x204 = INT8_MAX;
volatile int32_t t50 = -15253992;
static int32_t x209 = -1;
int32_t t53 = 431212892;
int16_t x217 = INT16_MIN;
static uint8_t x226 = 30U;
int64_t x231 = -23996237993LL;
int32_t t60 = -471721;
uint32_t x247 = 1U;
uint32_t x249 = UINT32_MAX;
volatile uint8_t x256 = 108U;
static volatile int64_t x257 = -2156255316934LL;
int8_t x260 = 24;
volatile int64_t x262 = -240LL;
uint32_t x268 = 292294863U;
int32_t x277 = INT32_MAX;
int32_t x278 = INT32_MIN;
int8_t x283 = -2;
int32_t x285 = INT32_MAX;
uint64_t x289 = UINT64_MAX;
int64_t x298 = INT64_MAX;
volatile int16_t x302 = -4;
uint32_t x309 = UINT32_MAX;
int32_t t77 = 57978;
int64_t x333 = INT64_MAX;
static uint32_t x336 = UINT32_MAX;
uint8_t x338 = 48U;
uint32_t x342 = 0U;
static int32_t x344 = INT32_MIN;
volatile int32_t x347 = -1;
int32_t x352 = INT32_MAX;
int16_t x355 = -1;
int32_t t89 = -7287427;
int8_t x361 = -55;
static int16_t x365 = INT16_MIN;
int64_t x369 = INT64_MIN;
int32_t x373 = -462708;
static volatile int16_t x382 = INT16_MIN;
volatile uint32_t x383 = 1389964033U;
static int8_t x391 = INT8_MAX;
int32_t t97 = 10242;
int8_t x395 = 1;


void f0(void) {
	int16_t x1 = 13;
	static int32_t x2 = INT32_MIN;
	int16_t x3 = -116;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 427933716;

	t0 = ((x1|(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 237U;
	static int8_t x6 = INT8_MIN;
	volatile int8_t x7 = INT8_MIN;
	static uint8_t x8 = 55U;
	int32_t t1 = 0;

	t1 = ((x5|(x6<x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint8_t x10 = UINT8_MAX;
	static uint8_t x11 = 14U;
	int64_t x12 = INT64_MAX;
	int32_t t2 = 177;

	t2 = ((x9|(x10<x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	static int32_t x14 = INT32_MAX;
	int8_t x15 = INT8_MIN;
	int64_t x16 = 95499365796LL;
	volatile int32_t t3 = -811;

	t3 = ((x13|(x14<x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile uint32_t x18 = UINT32_MAX;
	uint16_t x19 = UINT16_MAX;
	volatile int32_t x20 = 124177382;
	int32_t t4 = 638701;

	t4 = ((x17|(x18<x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MAX;
	static int8_t x23 = 1;
	uint16_t x24 = 494U;
	volatile int32_t t5 = 100322;

	t5 = ((x21|(x22<x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	int8_t x28 = 6;
	int32_t t6 = 154709;

	t6 = ((x25|(x26<x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -10155314080LL;
	int16_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	static volatile int16_t x32 = INT16_MIN;
	int32_t t7 = -30107;

	t7 = ((x29|(x30<x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 13LLU;
	static int16_t x35 = INT16_MAX;
	int32_t x36 = -1;

	t8 = ((x33|(x34<x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MAX;
	uint32_t x39 = UINT32_MAX;
	static int32_t t9 = 0;

	t9 = ((x37|(x38<x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = 76;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -26619;

	t10 = ((x41|(x42<x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 70U;
	static volatile int32_t x46 = -1;
	int8_t x47 = -1;
	volatile int8_t x48 = INT8_MIN;
	int32_t t11 = 557;

	t11 = ((x45|(x46<x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = 28487;
	int64_t x51 = INT64_MAX;
	volatile int32_t t12 = -360021;

	t12 = ((x49|(x50<x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int8_t x54 = INT8_MIN;
	int8_t x55 = -1;
	int64_t x56 = INT64_MIN;
	int32_t t13 = 582563354;

	t13 = ((x53|(x54<x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	static volatile int64_t x58 = -1LL;
	volatile int16_t x59 = -5546;
	int32_t x60 = 312;
	volatile int32_t t14 = 1658485;

	t14 = ((x57|(x58<x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 4498702U;
	int64_t x62 = 303LL;
	volatile uint32_t x63 = UINT32_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t15 = 1;

	t15 = ((x61|(x62<x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = 152;
	uint32_t x66 = 5U;
	uint16_t x67 = 14431U;
	static volatile int32_t t16 = 61;

	t16 = ((x65|(x66<x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = -1LL;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -3257;

	t17 = ((x69|(x70<x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 0;
	static uint32_t x74 = 247U;
	static volatile uint16_t x75 = 2865U;
	int32_t x76 = -25057;
	volatile int32_t t18 = 1;

	t18 = ((x73|(x74<x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	uint8_t x78 = UINT8_MAX;
	static int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MAX;
	int32_t t19 = -20942;

	t19 = ((x77|(x78<x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 163U;
	volatile uint16_t x82 = 9U;
	static uint8_t x84 = UINT8_MAX;

	t20 = ((x81|(x82<x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 32456U;
	int8_t x86 = -1;
	int32_t x87 = INT32_MAX;
	static int8_t x88 = 20;
	volatile int32_t t21 = -3753;

	t21 = ((x85|(x86<x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 17U;
	uint64_t x91 = 2384796727611914600LLU;
	int16_t x92 = INT16_MIN;
	int32_t t22 = -663;

	t22 = ((x89|(x90<x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x94 = UINT16_MAX;
	uint32_t x96 = 654017808U;

	t23 = ((x93|(x94<x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 172;
	int32_t x98 = 269;
	static int64_t x99 = -1LL;
	uint8_t x100 = 21U;
	volatile int32_t t24 = 48018;

	t24 = ((x97|(x98<x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MIN;
	volatile int32_t t25 = 184;

	t25 = ((x101|(x102<x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = 1318;
	volatile int64_t x106 = 71743323723756367LL;
	int32_t x107 = -1;
	static int8_t x108 = INT8_MAX;

	t26 = ((x105|(x106<x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -117LL;
	uint32_t x110 = 125U;
	int32_t x111 = 12350251;

	t27 = ((x109|(x110<x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 3894;
	static int32_t x114 = -1;
	volatile int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = -198710646;

	t28 = ((x113|(x114<x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 18;
	int16_t x118 = -1;
	uint8_t x119 = 55U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 236161850;

	t29 = ((x117|(x118<x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	uint32_t x122 = 38U;
	static volatile int32_t x123 = -1;
	int32_t t30 = -1;

	t30 = ((x121|(x122<x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	uint8_t x126 = 90U;
	int32_t x127 = 17125392;
	static volatile int32_t x128 = INT32_MIN;

	t31 = ((x125|(x126<x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MAX;
	static volatile int64_t x131 = 14215LL;
	uint32_t x132 = UINT32_MAX;

	t32 = ((x129|(x130<x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = -1;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -54;

	t33 = ((x133|(x134<x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 3U;
	static uint16_t x138 = 61U;
	volatile uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -7747766;

	t34 = ((x137|(x138<x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 3U;
	static uint64_t x142 = 24228163083944885LLU;
	volatile uint64_t x143 = UINT64_MAX;
	int8_t x144 = -1;
	volatile int32_t t35 = -35539;

	t35 = ((x141|(x142<x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint64_t x146 = 1252952848021775957LLU;
	volatile int64_t x147 = -1LL;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 8854038;

	t36 = ((x145|(x146<x147))==x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 35245;
	int64_t x150 = -1LL;
	int8_t x151 = INT8_MIN;
	uint64_t x152 = UINT64_MAX;
	static volatile int32_t t37 = 3;

	t37 = ((x149|(x150<x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = 22460U;
	int8_t x156 = INT8_MAX;
	int32_t t38 = 70;

	t38 = ((x153|(x154<x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 25;
	int16_t x159 = INT16_MIN;
	volatile int32_t t39 = 713332316;

	t39 = ((x157|(x158<x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MAX;
	uint64_t x162 = 1150402387LLU;
	static int8_t x163 = INT8_MIN;
	int16_t x164 = 3013;
	volatile int32_t t40 = -3;

	t40 = ((x161|(x162<x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	static volatile int16_t x166 = -1;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 0U;

	t41 = ((x165|(x166<x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	static volatile int32_t x170 = -1;
	int32_t x171 = INT32_MIN;
	static volatile int32_t t42 = 59479;

	t42 = ((x169|(x170<x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	volatile int32_t x174 = -1;
	static volatile int64_t x175 = -10893151LL;
	int16_t x176 = INT16_MAX;
	volatile int32_t t43 = 3411096;

	t43 = ((x173|(x174<x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = UINT16_MAX;
	volatile int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MAX;
	int64_t x180 = 1LL;

	t44 = ((x177|(x178<x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 14007388U;
	int8_t x182 = INT8_MAX;
	int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = -1;

	t45 = ((x181|(x182<x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -1LL;
	uint32_t x187 = 569402U;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -165685056;

	t46 = ((x185|(x186<x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = 101U;
	static int16_t x190 = -1;
	static int8_t x191 = INT8_MIN;
	uint8_t x192 = 22U;
	static int32_t t47 = 28732;

	t47 = ((x189|(x190<x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = 0;
	uint32_t x194 = 7480460U;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -1;
	volatile int32_t t48 = 89;

	t48 = ((x193|(x194<x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int32_t x198 = INT32_MIN;
	uint32_t x199 = UINT32_MAX;
	static int32_t x200 = INT32_MIN;

	t49 = ((x197|(x198<x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MAX;

	t50 = ((x201|(x202<x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint16_t x206 = UINT16_MAX;
	volatile int8_t x207 = 60;
	volatile int8_t x208 = 1;
	int32_t t51 = 402;

	t51 = ((x205|(x206<x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 241U;
	int8_t x211 = INT8_MAX;
	int16_t x212 = -1;
	int32_t t52 = 382305986;

	t52 = ((x209|(x210<x211))==x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	volatile int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MIN;

	t53 = ((x213|(x214<x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MAX;
	uint64_t x220 = 5932378411137405673LLU;
	static int32_t t54 = 1054822;

	t54 = ((x217|(x218<x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	uint32_t x222 = 43231734U;
	volatile uint8_t x223 = 0U;
	uint8_t x224 = 111U;
	volatile int32_t t55 = -3;

	t55 = ((x221|(x222<x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = INT32_MIN;
	int64_t x227 = 445067012LL;
	int32_t x228 = INT32_MAX;
	static volatile int32_t t56 = -137322;

	t56 = ((x225|(x226<x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 53U;
	uint16_t x230 = 0U;
	uint8_t x232 = 2U;
	int32_t t57 = 0;

	t57 = ((x229|(x230<x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 43294LL;
	uint32_t x234 = UINT32_MAX;
	uint8_t x235 = 56U;
	volatile int16_t x236 = -1;
	static int32_t t58 = 3;

	t58 = ((x233|(x234<x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MAX;
	uint32_t x239 = UINT32_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -361415;

	t59 = ((x237|(x238<x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 127;
	int16_t x242 = INT16_MIN;
	int64_t x243 = 205505711711016867LL;
	int64_t x244 = -1LL;

	t60 = ((x241|(x242<x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	uint32_t x246 = UINT32_MAX;
	int8_t x248 = 1;
	static int32_t t61 = 1038;

	t61 = ((x245|(x246<x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = 4;
	uint8_t x251 = 2U;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 241188502;

	t62 = ((x249|(x250<x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = 0U;
	int8_t x254 = -1;
	uint32_t x255 = 101171469U;
	volatile int32_t t63 = 3784567;

	t63 = ((x253|(x254<x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = -1;
	int8_t x259 = INT8_MIN;
	int32_t t64 = 129395882;

	t64 = ((x257|(x258<x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = 11U;
	volatile uint16_t x263 = 1U;
	int64_t x264 = -1LL;
	volatile int32_t t65 = -26878192;

	t65 = ((x261|(x262<x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = 1053;
	uint16_t x267 = 62U;
	int32_t t66 = 40247;

	t66 = ((x265|(x266<x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 1412581;

	t67 = ((x269|(x270<x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MIN;
	int16_t x274 = -1;
	int16_t x275 = INT16_MIN;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t68 = -304855;

	t68 = ((x273|(x274<x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x279 = INT64_MIN;
	volatile int64_t x280 = INT64_MAX;
	static volatile int32_t t69 = -27154951;

	t69 = ((x277|(x278<x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	uint16_t x282 = 0U;
	static volatile uint16_t x284 = 659U;
	static volatile int32_t t70 = 0;

	t70 = ((x281|(x282<x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -1;
	volatile int64_t x287 = INT64_MIN;
	int8_t x288 = 17;
	int32_t t71 = 4200034;

	t71 = ((x285|(x286<x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = -1LL;
	volatile int16_t x291 = INT16_MIN;
	int64_t x292 = -489494LL;
	volatile int32_t t72 = 9;

	t72 = ((x289|(x290<x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 4U;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	volatile int32_t t73 = -10;

	t73 = ((x293|(x294<x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	int16_t x299 = -1;
	int64_t x300 = INT64_MAX;
	static int32_t t74 = -12726947;

	t74 = ((x297|(x298<x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -1;
	uint32_t x303 = 503U;
	uint8_t x304 = 9U;
	int32_t t75 = -16373322;

	t75 = ((x301|(x302<x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -15;
	int8_t x306 = 22;
	uint16_t x307 = 8941U;
	static int8_t x308 = INT8_MAX;
	int32_t t76 = 48043;

	t76 = ((x305|(x306<x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 0U;
	int32_t x311 = 15;
	static volatile uint32_t x312 = 126503644U;

	t77 = ((x309|(x310<x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	uint8_t x314 = 5U;
	uint64_t x315 = 125121201390LLU;
	int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 11644;

	t78 = ((x313|(x314<x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -30;
	int32_t x318 = -1;
	int16_t x319 = -1;
	static volatile int8_t x320 = -1;
	volatile int32_t t79 = -146404;

	t79 = ((x317|(x318<x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	volatile int64_t x322 = -304975094590620LL;
	uint64_t x323 = 5LLU;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 11;

	t80 = ((x321|(x322<x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 1655733U;
	uint8_t x328 = 0U;
	int32_t t81 = 73800;

	t81 = ((x325|(x326<x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 8053533LL;
	int8_t x330 = -1;
	uint64_t x331 = 609LLU;
	uint8_t x332 = 100U;
	int32_t t82 = -394875777;

	t82 = ((x329|(x330<x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x334 = 3724;
	uint64_t x335 = 504594555LLU;
	volatile int32_t t83 = 2;

	t83 = ((x333|(x334<x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = 170;
	static int64_t x339 = INT64_MAX;
	static int64_t x340 = INT64_MIN;
	int32_t t84 = 1;

	t84 = ((x337|(x338<x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MAX;
	int8_t x343 = INT8_MIN;
	static int32_t t85 = -452;

	t85 = ((x341|(x342<x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	int32_t x346 = INT32_MAX;
	int64_t x348 = -1LL;
	int32_t t86 = 1280328;

	t86 = ((x345|(x346<x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = INT64_MIN;
	static uint8_t x350 = 49U;
	volatile int64_t x351 = 88552LL;
	int32_t t87 = -14859;

	t87 = ((x349|(x350<x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile int32_t x354 = INT32_MIN;
	volatile uint16_t x356 = 989U;
	volatile int32_t t88 = 112;

	t88 = ((x353|(x354<x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MAX;
	uint32_t x358 = UINT32_MAX;
	int8_t x359 = 1;
	volatile uint8_t x360 = UINT8_MAX;

	t89 = ((x357|(x358<x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x362 = INT16_MIN;
	volatile uint32_t x363 = 351110213U;
	volatile uint16_t x364 = 1U;
	int32_t t90 = 42336037;

	t90 = ((x361|(x362<x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x366 = 28;
	uint32_t x367 = 82U;
	static uint8_t x368 = 2U;
	int32_t t91 = 147;

	t91 = ((x365|(x366<x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MAX;
	uint8_t x371 = 127U;
	uint16_t x372 = 26654U;
	int32_t t92 = -5;

	t92 = ((x369|(x370<x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MAX;
	int32_t x375 = 38163;
	volatile int64_t x376 = INT64_MIN;
	int32_t t93 = 12876759;

	t93 = ((x373|(x374<x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x378 = INT8_MIN;
	static int16_t x379 = INT16_MAX;
	int16_t x380 = -1;
	int32_t t94 = 2020488;

	t94 = ((x377|(x378<x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 0U;
	uint8_t x384 = 15U;
	static volatile int32_t t95 = 11427;

	t95 = ((x381|(x382<x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = UINT32_MAX;
	static int16_t x386 = -1;
	int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t96 = -603994794;

	t96 = ((x385|(x386<x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 1U;
	int16_t x390 = INT16_MAX;
	int8_t x392 = INT8_MAX;

	t97 = ((x389|(x390<x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MIN;
	volatile int8_t x394 = INT8_MIN;
	int64_t x396 = 1LL;
	int32_t t98 = -2;

	t98 = ((x393|(x394<x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -201;
	int16_t x398 = INT16_MIN;
	int8_t x399 = -1;
	uint8_t x400 = UINT8_MAX;
	int32_t t99 = 9144970;

	t99 = ((x397|(x398<x399))==x400);

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

