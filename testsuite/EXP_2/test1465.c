#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int32_t t1 = -1;
volatile uint64_t x10 = 28298301936876LLU;
static volatile int32_t t2 = 2674;
int32_t t4 = -49361706;
int64_t x40 = -121170785LL;
uint64_t x42 = 2586650LLU;
static int64_t x46 = INT64_MAX;
int8_t x66 = INT8_MIN;
static int64_t x69 = INT64_MIN;
volatile uint16_t x72 = UINT16_MAX;
uint32_t x74 = UINT32_MAX;
volatile int32_t t20 = -129732;
uint32_t x90 = 88U;
int32_t t22 = -5168931;
int32_t x93 = -125077;
uint16_t x97 = UINT16_MAX;
int8_t x100 = -5;
static int16_t x102 = INT16_MIN;
static volatile int16_t x103 = -1;
uint8_t x105 = 21U;
static uint8_t x107 = UINT8_MAX;
uint32_t x110 = 71216U;
int32_t t28 = 1041056601;
int16_t x122 = 4886;
volatile int8_t x125 = 54;
volatile uint32_t x128 = 305038884U;
static volatile uint8_t x130 = 22U;
int32_t t32 = 372302;
uint8_t x136 = 4U;
int8_t x139 = INT8_MAX;
volatile int32_t t34 = 514405;
static int64_t x141 = 192039629238LL;
static int32_t x144 = INT32_MAX;
uint16_t x150 = UINT16_MAX;
static int16_t x151 = INT16_MIN;
uint64_t x152 = 3728682371156246199LLU;
volatile int16_t x153 = INT16_MIN;
uint8_t x154 = 1U;
static volatile int64_t x155 = INT64_MIN;
uint8_t x156 = UINT8_MAX;
int32_t x168 = -225359098;
volatile uint8_t x171 = UINT8_MAX;
volatile int8_t x180 = INT8_MAX;
int32_t t46 = 259362;
volatile uint16_t x191 = UINT16_MAX;
int64_t x196 = 13603727352894LL;
static volatile int32_t t48 = -61423;
uint8_t x202 = UINT8_MAX;
uint16_t x203 = UINT16_MAX;
int32_t x204 = -1;
volatile int32_t t50 = 88;
static volatile uint64_t x206 = 3101029340LLU;
uint16_t x207 = 3U;
static int16_t x208 = INT16_MIN;
static int8_t x212 = INT8_MAX;
int8_t x219 = INT8_MAX;
int16_t x220 = INT16_MAX;
int32_t t54 = 12023;
int8_t x221 = INT8_MIN;
int32_t t55 = 6201;
volatile int32_t t56 = 1051616522;
int32_t x231 = 1945362;
uint32_t x232 = UINT32_MAX;
static volatile int32_t t58 = -1047483801;
static int32_t x242 = INT32_MIN;
int16_t x244 = INT16_MIN;
volatile int32_t t60 = 194579418;
int32_t x252 = -33650853;
volatile int32_t x254 = INT32_MIN;
int32_t t63 = -12971146;
static uint64_t x257 = 1746460806290LLU;
int8_t x260 = -1;
int32_t t65 = 1;
int16_t x274 = -5567;
int32_t t71 = 861;
volatile int8_t x295 = INT8_MIN;
int8_t x307 = -1;
volatile uint64_t x310 = UINT64_MAX;
static volatile int32_t t78 = -276;
volatile int32_t x320 = INT32_MAX;
int8_t x334 = INT8_MIN;
int8_t x337 = -3;
int8_t x343 = 4;
uint64_t x345 = 12LLU;
int8_t x347 = INT8_MIN;
int32_t t86 = -3698932;
uint32_t x359 = 32142U;
static int64_t x360 = INT64_MIN;
int8_t x361 = -25;
static volatile uint32_t x369 = 48676U;
uint8_t x370 = UINT8_MAX;
volatile int16_t x372 = 4;
volatile int32_t t92 = 21190;
int8_t x377 = 51;
volatile int16_t x380 = -1;
int64_t x381 = INT64_MIN;
int32_t x382 = INT32_MIN;
static int8_t x383 = -1;
volatile int8_t x384 = -3;
volatile uint32_t x394 = 31U;
uint16_t x395 = UINT16_MAX;
volatile uint16_t x396 = UINT16_MAX;
int32_t x397 = -348518;
int8_t x399 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x3 = -1;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = 1102;

	t0 = ((x1<(x2<x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 99U;
	static volatile int64_t x6 = INT64_MIN;
	volatile int64_t x7 = -24830894644LL;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5<(x6<x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	volatile uint16_t x11 = 495U;
	static int8_t x12 = INT8_MIN;

	t2 = ((x9<(x10<x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -44953583;
	static uint16_t x14 = UINT16_MAX;
	static volatile uint8_t x15 = 58U;
	volatile uint16_t x16 = 205U;
	static int32_t t3 = 8433663;

	t3 = ((x13<(x14<x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -117;
	static int64_t x18 = INT64_MAX;
	int32_t x19 = -1;
	int32_t x20 = INT32_MIN;

	t4 = ((x17<(x18<x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = UINT64_MAX;
	int32_t x22 = INT32_MAX;
	int16_t x23 = -1;
	volatile uint8_t x24 = UINT8_MAX;
	int32_t t5 = -66754284;

	t5 = ((x21<(x22<x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	static int32_t x26 = INT32_MIN;
	int8_t x27 = -13;
	static volatile int16_t x28 = -362;
	volatile int32_t t6 = -8887;

	t6 = ((x25<(x26<x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int8_t x30 = 37;
	static uint64_t x31 = UINT64_MAX;
	volatile uint16_t x32 = 17845U;
	static volatile int32_t t7 = -96965;

	t7 = ((x29<(x30<x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = UINT8_MAX;
	volatile int8_t x34 = INT8_MAX;
	uint8_t x35 = UINT8_MAX;
	static uint64_t x36 = UINT64_MAX;
	int32_t t8 = -157403393;

	t8 = ((x33<(x34<x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int32_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	int32_t t9 = -3578553;

	t9 = ((x37<(x38<x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint32_t x43 = UINT32_MAX;
	volatile int32_t x44 = -1;
	volatile int32_t t10 = 44008075;

	t10 = ((x41<(x42<x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 56U;
	int32_t x47 = INT32_MIN;
	int16_t x48 = -1;
	volatile int32_t t11 = 35478;

	t11 = ((x45<(x46<x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MIN;
	volatile int16_t x51 = INT16_MIN;
	int8_t x52 = -7;
	int32_t t12 = -21660;

	t12 = ((x49<(x50<x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 50412874LL;
	int16_t x54 = INT16_MAX;
	int32_t x55 = -1;
	uint8_t x56 = 13U;
	static volatile int32_t t13 = -6532;

	t13 = ((x53<(x54<x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = UINT8_MAX;
	static uint8_t x58 = UINT8_MAX;
	static volatile int16_t x59 = INT16_MAX;
	uint8_t x60 = 8U;
	int32_t t14 = -22425956;

	t14 = ((x57<(x58<x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static int64_t x62 = INT64_MIN;
	uint64_t x63 = 1115248120LLU;
	uint8_t x64 = 0U;
	volatile int32_t t15 = 7812386;

	t15 = ((x61<(x62<x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 37749375LLU;
	static uint8_t x67 = 2U;
	int32_t x68 = -1;
	int32_t t16 = -452496;

	t16 = ((x65<(x66<x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x70 = -13;
	volatile int64_t x71 = INT64_MIN;
	volatile int32_t t17 = -916234676;

	t17 = ((x69<(x70<x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 4LLU;
	uint16_t x75 = UINT16_MAX;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 382287922;

	t18 = ((x73<(x74<x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 45604981325LLU;
	int64_t x78 = -1LL;
	uint32_t x79 = 6842767U;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 0;

	t19 = ((x77<(x78<x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -183;
	static int16_t x82 = 4206;
	uint32_t x83 = 607U;
	uint8_t x84 = 1U;

	t20 = ((x81<(x82<x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 0U;
	volatile int8_t x86 = -6;
	volatile int32_t x87 = -1;
	volatile int8_t x88 = INT8_MAX;
	int32_t t21 = 56;

	t21 = ((x85<(x86<x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 112U;
	static int64_t x91 = 9LL;
	uint8_t x92 = 2U;

	t22 = ((x89<(x90<x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = 405;
	uint32_t x95 = 10514U;
	int32_t x96 = -46042763;
	int32_t t23 = 27;

	t23 = ((x93<(x94<x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 0U;
	volatile uint16_t x99 = 0U;
	volatile int32_t t24 = 576219;

	t24 = ((x97<(x98<x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 226015;

	t25 = ((x101<(x102<x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = -369LL;
	uint32_t x108 = 18U;
	int32_t t26 = -15560;

	t26 = ((x105<(x106<x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	int64_t x111 = 125672460016107060LL;
	volatile int32_t x112 = -1;
	static volatile int32_t t27 = -19;

	t27 = ((x109<(x110<x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -477;
	int32_t x114 = -3650;
	int8_t x115 = INT8_MIN;
	int8_t x116 = -24;

	t28 = ((x113<(x114<x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 90U;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = 0;

	t29 = ((x117<(x118<x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 313950;
	int32_t x123 = -1;
	static int16_t x124 = INT16_MIN;
	static volatile int32_t t30 = -3538;

	t30 = ((x121<(x122<x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = INT16_MAX;
	volatile int32_t x127 = INT32_MIN;
	volatile int32_t t31 = 90495;

	t31 = ((x125<(x126<x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	int8_t x131 = INT8_MIN;
	int64_t x132 = -1LL;

	t32 = ((x129<(x130<x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	volatile uint32_t x134 = 58214U;
	volatile int16_t x135 = INT16_MIN;
	int32_t t33 = 0;

	t33 = ((x133<(x134<x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	int16_t x138 = INT16_MAX;
	int32_t x140 = -17;

	t34 = ((x137<(x138<x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = UINT8_MAX;
	uint8_t x143 = UINT8_MAX;
	int32_t t35 = -16046537;

	t35 = ((x141<(x142<x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -340;
	volatile uint64_t x146 = 49249823725LLU;
	static uint32_t x147 = 18U;
	uint8_t x148 = 2U;
	int32_t t36 = 1682;

	t36 = ((x145<(x146<x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	static volatile int32_t t37 = 11;

	t37 = ((x149<(x150<x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t t38 = -54314573;

	t38 = ((x153<(x154<x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -35295095007LL;
	uint8_t x158 = 8U;
	static int64_t x159 = INT64_MIN;
	uint16_t x160 = 3U;
	int32_t t39 = 7481621;

	t39 = ((x157<(x158<x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MAX;
	static volatile int64_t x163 = -805359950LL;
	static int16_t x164 = -1;
	int32_t t40 = -326998;

	t40 = ((x161<(x162<x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int64_t x166 = 558605LL;
	uint8_t x167 = 18U;
	volatile int32_t t41 = 85928674;

	t41 = ((x165<(x166<x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int16_t x170 = INT16_MIN;
	int8_t x172 = -7;
	volatile int32_t t42 = 384;

	t42 = ((x169<(x170<x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -35;
	static int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;
	int16_t x176 = -1;
	volatile int32_t t43 = -17;

	t43 = ((x173<(x174<x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MAX;
	int16_t x178 = INT16_MAX;
	uint8_t x179 = 4U;
	volatile int32_t t44 = -1;

	t44 = ((x177<(x178<x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 2;
	static int32_t x182 = -715123;
	static uint16_t x183 = UINT16_MAX;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = 10417;

	t45 = ((x181<(x182<x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 705189011262728638LLU;
	int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MAX;
	int32_t x188 = INT32_MAX;

	t46 = ((x185<(x186<x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 178327LL;
	volatile int8_t x190 = -1;
	int64_t x192 = INT64_MIN;
	int32_t t47 = -9;

	t47 = ((x189<(x190<x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 0;
	int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MAX;

	t48 = ((x193<(x194<x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	static volatile int32_t x198 = 942827;
	int64_t x199 = -72211203449468LL;
	int32_t x200 = 11;
	int32_t t49 = 0;

	t49 = ((x197<(x198<x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;

	t50 = ((x201<(x202<x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = 1;
	int32_t t51 = 1;

	t51 = ((x205<(x206<x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -42102311LL;
	static int32_t x210 = INT32_MIN;
	static int64_t x211 = INT64_MIN;
	int32_t t52 = 292;

	t52 = ((x209<(x210<x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MAX;
	volatile int32_t x214 = -1;
	uint16_t x215 = 17029U;
	int32_t x216 = INT32_MIN;
	static int32_t t53 = 7;

	t53 = ((x213<(x214<x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -24;
	int64_t x218 = INT64_MIN;

	t54 = ((x217<(x218<x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = INT64_MAX;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;

	t55 = ((x221<(x222<x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	static int16_t x226 = INT16_MIN;
	static uint16_t x227 = 37U;
	int8_t x228 = -1;

	t56 = ((x225<(x226<x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = 1900;
	int8_t x230 = -45;
	int32_t t57 = -1367546;

	t57 = ((x229<(x230<x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	uint64_t x234 = 15259876735LLU;
	volatile int32_t x235 = -274;
	volatile int32_t x236 = -1022386;

	t58 = ((x233<(x234<x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 10601;
	int32_t x238 = INT32_MAX;
	uint16_t x239 = 8355U;
	int32_t x240 = 2437574;
	int32_t t59 = -14871;

	t59 = ((x237<(x238<x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static int32_t x243 = -3092061;

	t60 = ((x241<(x242<x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	uint32_t x246 = 28122U;
	int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = -59;

	t61 = ((x245<(x246<x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x249 = 20838712863342LLU;
	int64_t x250 = 5395682251432LL;
	uint8_t x251 = UINT8_MAX;
	volatile int32_t t62 = -19;

	t62 = ((x249<(x250<x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	volatile uint64_t x255 = 2614610366LLU;
	int64_t x256 = INT64_MIN;

	t63 = ((x253<(x254<x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MAX;
	static int32_t x259 = 7648053;
	static volatile int32_t t64 = 53;

	t64 = ((x257<(x258<x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 403603171202873LL;
	int16_t x262 = INT16_MIN;
	uint8_t x263 = 7U;
	int32_t x264 = -1;

	t65 = ((x261<(x262<x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int32_t x266 = -1;
	uint8_t x267 = UINT8_MAX;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -2916;

	t66 = ((x265<(x266<x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	volatile int64_t x270 = -1696114828308612LL;
	uint16_t x271 = 8892U;
	uint8_t x272 = UINT8_MAX;
	int32_t t67 = 700378;

	t67 = ((x269<(x270<x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x275 = 1628;
	int64_t x276 = INT64_MIN;
	volatile int32_t t68 = -52;

	t68 = ((x273<(x274<x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 15;
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	volatile uint8_t x280 = 45U;
	static int32_t t69 = 145;

	t69 = ((x277<(x278<x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MIN;
	static int64_t x283 = 402LL;
	int64_t x284 = -1LL;
	int32_t t70 = 1;

	t70 = ((x281<(x282<x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 221610LLU;
	static int32_t x286 = 36598;
	static int32_t x287 = INT32_MIN;
	uint8_t x288 = 39U;

	t71 = ((x285<(x286<x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -703;
	int64_t x290 = -33186475LL;
	static int64_t x291 = INT64_MIN;
	volatile int8_t x292 = -1;
	int32_t t72 = 1;

	t72 = ((x289<(x290<x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -8448168LL;
	int16_t x294 = INT16_MAX;
	int64_t x296 = INT64_MIN;
	static int32_t t73 = -234892936;

	t73 = ((x293<(x294<x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 763U;
	uint16_t x298 = 12554U;
	volatile uint64_t x299 = UINT64_MAX;
	volatile int64_t x300 = -1144547019380679LL;
	volatile int32_t t74 = 2;

	t74 = ((x297<(x298<x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MAX;
	volatile uint64_t x304 = 2078LLU;
	static int32_t t75 = 395546;

	t75 = ((x301<(x302<x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 14;
	int64_t x306 = INT64_MIN;
	uint32_t x308 = 843588629U;
	volatile int32_t t76 = -1;

	t76 = ((x305<(x306<x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = 0;
	volatile uint32_t x311 = 3591U;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -124837536;

	t77 = ((x309<(x310<x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 315;
	uint32_t x314 = 1U;
	int64_t x315 = 41884637LL;
	uint64_t x316 = 101936LLU;

	t78 = ((x313<(x314<x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = 6;
	volatile int16_t x319 = -1;
	int32_t t79 = -1;

	t79 = ((x317<(x318<x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x321 = 385077U;
	static uint8_t x322 = UINT8_MAX;
	volatile int32_t x323 = INT32_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = -468;

	t80 = ((x321<(x322<x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = INT64_MAX;
	int64_t x327 = INT64_MIN;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t81 = 78644;

	t81 = ((x325<(x326<x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int64_t x330 = INT64_MIN;
	static volatile int16_t x331 = INT16_MIN;
	static int16_t x332 = 14737;
	volatile int32_t t82 = 2264484;

	t82 = ((x329<(x330<x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int32_t x335 = INT32_MAX;
	int8_t x336 = 0;
	int32_t t83 = 30277;

	t83 = ((x333<(x334<x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = 12200;
	int32_t x339 = INT32_MAX;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 589;

	t84 = ((x337<(x338<x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	uint8_t x342 = 49U;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -14306224;

	t85 = ((x341<(x342<x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MAX;
	volatile int16_t x348 = INT16_MIN;

	t86 = ((x345<(x346<x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	volatile int64_t x350 = 17811543378792LL;
	volatile int16_t x351 = 244;
	uint8_t x352 = UINT8_MAX;
	int32_t t87 = -204;

	t87 = ((x349<(x350<x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	uint32_t x354 = UINT32_MAX;
	int16_t x355 = INT16_MIN;
	static volatile uint16_t x356 = 5U;
	int32_t t88 = 1885620;

	t88 = ((x353<(x354<x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MAX;
	int32_t t89 = 1923;

	t89 = ((x357<(x358<x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MAX;
	volatile uint64_t x363 = UINT64_MAX;
	int64_t x364 = -1LL;
	static int32_t t90 = 8050276;

	t90 = ((x361<(x362<x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 35;
	uint16_t x366 = 1308U;
	int8_t x367 = 7;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 22839892;

	t91 = ((x365<(x366<x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x371 = INT8_MIN;

	t92 = ((x369<(x370<x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	int64_t x374 = 126268787LL;
	uint16_t x375 = UINT16_MAX;
	uint8_t x376 = 0U;
	static volatile int32_t t93 = -10870777;

	t93 = ((x373<(x374<x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = UINT32_MAX;
	volatile int16_t x379 = -660;
	static int32_t t94 = -158;

	t94 = ((x377<(x378<x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t t95 = 7056;

	t95 = ((x381<(x382<x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	volatile int8_t x386 = INT8_MAX;
	int16_t x387 = -1;
	uint16_t x388 = 11U;
	int32_t t96 = 965435;

	t96 = ((x385<(x386<x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = -1;
	static int32_t x390 = -22051;
	int32_t x391 = INT32_MIN;
	static volatile uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = -25;

	t97 = ((x389<(x390<x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = 513;
	static int32_t t98 = 55454415;

	t98 = ((x393<(x394<x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x398 = INT16_MAX;
	volatile uint32_t x400 = 26U;
	int32_t t99 = -7299183;

	t99 = ((x397<(x398<x399))<x400);

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

