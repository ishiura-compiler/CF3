#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
volatile uint16_t x11 = UINT16_MAX;
static uint8_t x13 = UINT8_MAX;
int32_t x14 = INT32_MAX;
volatile uint32_t x16 = 55400457U;
int64_t x19 = INT64_MIN;
int64_t x20 = INT64_MIN;
volatile int32_t t4 = -255818;
static uint32_t x22 = 4U;
uint8_t x26 = 0U;
int64_t x40 = -1LL;
int8_t x41 = INT8_MAX;
static int32_t x46 = INT32_MIN;
int8_t x50 = -1;
int8_t x52 = INT8_MIN;
volatile int32_t t13 = 16233344;
int32_t x58 = INT32_MIN;
int32_t t14 = -517618;
int64_t x62 = INT64_MAX;
static int32_t x68 = INT32_MIN;
static volatile int32_t t16 = 3;
volatile uint64_t x71 = 726710LLU;
int16_t x72 = -1;
static int64_t x73 = -6507776890570LL;
int16_t x90 = INT16_MIN;
uint32_t x91 = UINT32_MAX;
int16_t x95 = INT16_MIN;
static volatile int32_t t23 = 0;
volatile int8_t x98 = INT8_MIN;
int64_t x104 = 9033663LL;
uint16_t x105 = UINT16_MAX;
volatile int16_t x106 = 0;
int8_t x107 = INT8_MIN;
int32_t t27 = 328534219;
volatile int32_t t28 = -247555;
int16_t x121 = INT16_MIN;
uint32_t x125 = 84000414U;
int64_t x129 = -1LL;
volatile int32_t t32 = -579;
static uint32_t x136 = 1445U;
static int64_t x161 = INT64_MIN;
static volatile int32_t t41 = -114384;
int8_t x170 = INT8_MIN;
volatile uint8_t x179 = 118U;
volatile int32_t t45 = -7164450;
int16_t x192 = 342;
int8_t x201 = -1;
uint16_t x202 = 69U;
static volatile uint16_t x204 = 42U;
uint32_t x205 = UINT32_MAX;
int64_t x206 = -1LL;
int32_t x207 = -1388;
uint32_t x211 = 14996450U;
int8_t x213 = INT8_MAX;
static volatile int32_t t54 = -1022;
volatile int32_t t56 = 134222227;
uint8_t x248 = 11U;
volatile int32_t t61 = 14705;
int32_t x252 = INT32_MIN;
int16_t x257 = INT16_MIN;
volatile uint32_t x259 = 72U;
int8_t x266 = -17;
int16_t x267 = INT16_MIN;
int8_t x269 = -5;
volatile int32_t t68 = 9042;
int8_t x278 = INT8_MAX;
static volatile int32_t t69 = -46;
uint32_t x281 = 23594U;
volatile uint64_t x284 = UINT64_MAX;
int32_t t70 = -31;
int8_t x285 = -3;
int64_t x287 = INT64_MIN;
uint16_t x288 = UINT16_MAX;
volatile int32_t t71 = 133128258;
uint64_t x291 = UINT64_MAX;
volatile int32_t t72 = 207;
uint8_t x293 = UINT8_MAX;
int32_t x297 = -1;
static volatile uint16_t x299 = 2196U;
volatile int32_t t74 = 2669;
int32_t x304 = -19;
int64_t x307 = 96199409LL;
int32_t x310 = INT32_MIN;
static uint32_t x312 = 497362U;
volatile int8_t x315 = -12;
static uint32_t x323 = UINT32_MAX;
int64_t x326 = INT64_MAX;
volatile int32_t t82 = 252424;
int64_t x335 = INT64_MIN;
volatile int32_t x337 = 269174372;
volatile uint8_t x342 = UINT8_MAX;
static int16_t x344 = INT16_MIN;
volatile uint32_t x345 = 54U;
int64_t x347 = -155942LL;
int64_t x349 = INT64_MIN;
int8_t x352 = 1;
volatile int8_t x358 = INT8_MAX;
volatile uint32_t x359 = 361U;
int64_t x361 = INT64_MIN;
int32_t x365 = INT32_MIN;
int16_t x368 = -4;
volatile int32_t t91 = 28;
int32_t t92 = -1736;
int8_t x373 = INT8_MIN;
int16_t x394 = 5;
int32_t t99 = -111660133;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = 77;
	static int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = 111277599;

	t0 = ((x1<=(x2==x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -4976;
	uint8_t x7 = 3U;
	int16_t x8 = -1;
	volatile int32_t t1 = 243968;

	t1 = ((x5<=(x6==x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int32_t x10 = INT32_MIN;
	volatile int8_t x12 = -1;
	volatile int32_t t2 = 459562691;

	t2 = ((x9<=(x10==x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = 1;
	int32_t t3 = -374050600;

	t3 = ((x13<=(x14==x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x18 = INT32_MIN;

	t4 = ((x17<=(x18==x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 0;
	static int16_t x23 = INT16_MIN;
	volatile uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -387;

	t5 = ((x21<=(x22==x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 3413340LLU;
	int32_t x27 = -1;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -6;

	t6 = ((x25<=(x26==x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	uint8_t x30 = 3U;
	int8_t x31 = -1;
	int32_t x32 = INT32_MAX;
	int32_t t7 = 493;

	t7 = ((x29<=(x30==x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int32_t x34 = -252;
	int64_t x35 = 12226409417030LL;
	static volatile int8_t x36 = INT8_MAX;
	static volatile int32_t t8 = -33;

	t8 = ((x33<=(x34==x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = -62;
	static uint32_t x39 = 130021064U;
	volatile int32_t t9 = 794;

	t9 = ((x37<=(x38==x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 2792U;
	uint8_t x43 = 31U;
	static int16_t x44 = -121;
	volatile int32_t t10 = 961;

	t10 = ((x41<=(x42==x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int8_t x47 = -1;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 6;

	t11 = ((x45<=(x46==x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	static int16_t x51 = -1;
	int32_t t12 = 1;

	t12 = ((x49<=(x50==x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = -1LL;
	int16_t x55 = INT16_MIN;
	volatile uint32_t x56 = 3U;

	t13 = ((x53<=(x54==x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MAX;

	t14 = ((x57<=(x58==x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	int16_t x63 = 62;
	uint32_t x64 = 1945578248U;
	int32_t t15 = -27468;

	t15 = ((x61<=(x62==x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MIN;

	t16 = ((x65<=(x66==x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = 1;
	int32_t t17 = -2;

	t17 = ((x69<=(x70==x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	static volatile int64_t x75 = -1LL;
	static uint64_t x76 = 6LLU;
	volatile int32_t t18 = -6798;

	t18 = ((x73<=(x74==x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = UINT16_MAX;
	volatile int16_t x78 = INT16_MIN;
	static uint32_t x79 = 974U;
	volatile int64_t x80 = -1LL;
	volatile int32_t t19 = 965192;

	t19 = ((x77<=(x78==x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 13;
	int32_t x82 = -1;
	static int32_t x83 = -1;
	volatile int32_t x84 = INT32_MIN;
	static int32_t t20 = -26774;

	t20 = ((x81<=(x82==x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	uint32_t x86 = UINT32_MAX;
	uint64_t x87 = UINT64_MAX;
	uint32_t x88 = 963U;
	volatile int32_t t21 = 226;

	t21 = ((x85<=(x86==x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	int8_t x92 = -3;
	static volatile int32_t t22 = 1111;

	t22 = ((x89<=(x90==x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int16_t x94 = 1663;
	volatile int8_t x96 = INT8_MIN;

	t23 = ((x93<=(x94==x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = 1;
	static int32_t x99 = INT32_MIN;
	uint64_t x100 = 83LLU;
	static volatile int32_t t24 = -30852;

	t24 = ((x97<=(x98==x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	uint32_t x102 = UINT32_MAX;
	volatile int8_t x103 = -1;
	int32_t t25 = 12695;

	t25 = ((x101<=(x102==x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x108 = -1LL;
	volatile int32_t t26 = -3;

	t26 = ((x105<=(x106==x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	volatile int32_t x110 = INT32_MIN;
	volatile int16_t x111 = 1370;
	uint64_t x112 = UINT64_MAX;

	t27 = ((x109<=(x110==x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = -1;
	uint32_t x115 = 23U;
	int64_t x116 = -1LL;

	t28 = ((x113<=(x114==x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	static int64_t x118 = -3839LL;
	volatile int16_t x119 = INT16_MIN;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 15047794;

	t29 = ((x117<=(x118==x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x122 = INT32_MIN;
	static volatile int32_t x123 = INT32_MIN;
	volatile int8_t x124 = INT8_MIN;
	int32_t t30 = 5;

	t30 = ((x121<=(x122==x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	static int32_t x127 = INT32_MIN;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 2;

	t31 = ((x125<=(x126==x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MIN;
	int64_t x131 = -1LL;
	int32_t x132 = -16535518;

	t32 = ((x129<=(x130==x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 27040217617871LLU;
	volatile uint16_t x134 = UINT16_MAX;
	uint32_t x135 = 207373U;
	static int32_t t33 = 76;

	t33 = ((x133<=(x134==x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	volatile uint8_t x139 = 60U;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 193446;

	t34 = ((x137<=(x138==x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 3755709LL;
	volatile int16_t x142 = 6498;
	int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MIN;
	int32_t t35 = -28920737;

	t35 = ((x141<=(x142==x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 626U;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = -1;
	static int8_t x148 = -31;
	int32_t t36 = 146727;

	t36 = ((x145<=(x146==x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 483385279267LLU;
	volatile uint8_t x150 = 1U;
	uint8_t x151 = 0U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -551212;

	t37 = ((x149<=(x150==x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MAX;
	volatile uint16_t x154 = 10551U;
	volatile int8_t x155 = -3;
	static volatile int16_t x156 = INT16_MIN;
	int32_t t38 = -5;

	t38 = ((x153<=(x154==x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	int8_t x158 = -1;
	static int32_t x159 = -1;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 27052;

	t39 = ((x157<=(x158==x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 61246U;
	volatile int8_t x163 = INT8_MAX;
	uint16_t x164 = 1U;
	int32_t t40 = 8241042;

	t40 = ((x161<=(x162==x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	uint64_t x166 = UINT64_MAX;
	volatile uint64_t x167 = 55LLU;
	int64_t x168 = INT64_MIN;

	t41 = ((x165<=(x166==x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	static int64_t x171 = INT64_MIN;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t42 = -7422102;

	t42 = ((x169<=(x170==x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = -55361113788457LL;
	uint16_t x174 = 53U;
	uint64_t x175 = 5209531145854LLU;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 71;

	t43 = ((x173<=(x174==x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	static int8_t x178 = 1;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -14021229;

	t44 = ((x177<=(x178==x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int16_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = 3;

	t45 = ((x181<=(x182==x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static int64_t x186 = INT64_MIN;
	volatile uint32_t x187 = 22074U;
	uint8_t x188 = 0U;
	int32_t t46 = 3;

	t46 = ((x185<=(x186==x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 53;
	static int64_t x190 = 70843LL;
	volatile int64_t x191 = -1LL;
	int32_t t47 = -2990;

	t47 = ((x189<=(x190==x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 12;
	static int32_t x194 = INT32_MIN;
	int32_t x195 = 5629;
	volatile int32_t x196 = INT32_MAX;
	static int32_t t48 = 11;

	t48 = ((x193<=(x194==x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = -6880480580LL;
	static int32_t x199 = -6932944;
	uint8_t x200 = 1U;
	int32_t t49 = 287;

	t49 = ((x197<=(x198==x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = INT8_MAX;
	static volatile int32_t t50 = 916;

	t50 = ((x201<=(x202==x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x208 = 2U;
	volatile int32_t t51 = -707;

	t51 = ((x205<=(x206==x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -499842122146LL;
	int16_t x210 = INT16_MIN;
	static uint8_t x212 = 21U;
	volatile int32_t t52 = -211989;

	t52 = ((x209<=(x210==x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = -4;
	volatile int16_t x215 = 7;
	int8_t x216 = 1;
	static volatile int32_t t53 = 16531;

	t53 = ((x213<=(x214==x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	volatile int16_t x218 = 1;
	int32_t x219 = 862101831;
	volatile int32_t x220 = INT32_MIN;

	t54 = ((x217<=(x218==x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int32_t x222 = -6;
	static int16_t x223 = INT16_MAX;
	volatile uint16_t x224 = UINT16_MAX;
	int32_t t55 = 2732467;

	t55 = ((x221<=(x222==x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MAX;
	int64_t x226 = INT64_MAX;
	static uint16_t x227 = 0U;
	static int32_t x228 = 1294;

	t56 = ((x225<=(x226==x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	int32_t x230 = INT32_MAX;
	int64_t x231 = -840062014758097LL;
	volatile int8_t x232 = INT8_MAX;
	int32_t t57 = -2267886;

	t57 = ((x229<=(x230==x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 504113032409LL;
	uint16_t x234 = 2441U;
	static uint64_t x235 = UINT64_MAX;
	volatile uint64_t x236 = 456243359985LLU;
	volatile int32_t t58 = 3;

	t58 = ((x233<=(x234==x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	int16_t x238 = 71;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = 525U;
	int32_t t59 = -2754;

	t59 = ((x237<=(x238==x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	int32_t x242 = -1;
	static uint32_t x243 = 2224872U;
	volatile int64_t x244 = INT64_MIN;
	static int32_t t60 = -61526539;

	t60 = ((x241<=(x242==x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int32_t x246 = INT32_MIN;
	int32_t x247 = 18;

	t61 = ((x245<=(x246==x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 54U;
	volatile int32_t x250 = INT32_MIN;
	int8_t x251 = -1;
	static volatile int32_t t62 = 1021516;

	t62 = ((x249<=(x250==x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	volatile uint16_t x254 = 1809U;
	static int8_t x255 = INT8_MAX;
	uint32_t x256 = 507520273U;
	int32_t t63 = -262869119;

	t63 = ((x253<=(x254==x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x258 = -1;
	int64_t x260 = 54640852931396012LL;
	int32_t t64 = -24;

	t64 = ((x257<=(x258==x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = 216271U;
	int64_t x262 = 269292893LL;
	uint16_t x263 = 27746U;
	static int8_t x264 = 4;
	volatile int32_t t65 = 4762751;

	t65 = ((x261<=(x262==x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	static int32_t x268 = -143387236;
	volatile int32_t t66 = -956068;

	t66 = ((x265<=(x266==x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -4491;
	int64_t x271 = INT64_MIN;
	int16_t x272 = 0;
	int32_t t67 = -3;

	t67 = ((x269<=(x270==x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int64_t x274 = -1LL;
	static uint32_t x275 = UINT32_MAX;
	int32_t x276 = INT32_MIN;

	t68 = ((x273<=(x274==x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 888U;
	int32_t x279 = -1;
	volatile int8_t x280 = 0;

	t69 = ((x277<=(x278==x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = 1041891951;
	static volatile uint64_t x283 = 163504LLU;

	t70 = ((x281<=(x282==x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x286 = INT64_MIN;

	t71 = ((x285<=(x286==x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = -1;
	int8_t x290 = INT8_MIN;
	static volatile int32_t x292 = INT32_MAX;

	t72 = ((x289<=(x290==x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x294 = 30;
	uint8_t x295 = UINT8_MAX;
	static uint16_t x296 = 25U;
	volatile int32_t t73 = -688168559;

	t73 = ((x293<=(x294==x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = UINT16_MAX;
	int8_t x300 = INT8_MIN;

	t74 = ((x297<=(x298==x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 47U;
	int64_t x302 = INT64_MIN;
	uint16_t x303 = 8U;
	int32_t t75 = 0;

	t75 = ((x301<=(x302==x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 149873915;
	int64_t x306 = -67135450414339LL;
	int16_t x308 = -1;
	static volatile int32_t t76 = -3612;

	t76 = ((x305<=(x306==x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	uint32_t x311 = UINT32_MAX;
	static int32_t t77 = -6;

	t77 = ((x309<=(x310==x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 11214284;
	int32_t x314 = 14623928;
	int64_t x316 = -10404341919LL;
	static volatile int32_t t78 = 446140;

	t78 = ((x313<=(x314==x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	int32_t x318 = -1;
	uint16_t x319 = 33U;
	int64_t x320 = INT64_MAX;
	int32_t t79 = -16;

	t79 = ((x317<=(x318==x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = UINT8_MAX;
	volatile int32_t x322 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	static int32_t t80 = 6318;

	t80 = ((x321<=(x322==x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	volatile uint8_t x327 = 1U;
	int64_t x328 = INT64_MAX;
	int32_t t81 = -995648953;

	t81 = ((x325<=(x326==x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	volatile int32_t x330 = -55998749;
	int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MIN;

	t82 = ((x329<=(x330==x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -38511LL;
	int16_t x334 = -16;
	int8_t x336 = INT8_MIN;
	int32_t t83 = 1389;

	t83 = ((x333<=(x334==x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	int16_t x339 = -1;
	static volatile int8_t x340 = 0;
	volatile int32_t t84 = -1;

	t84 = ((x337<=(x338==x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MAX;
	int32_t x343 = INT32_MAX;
	volatile int32_t t85 = -85491021;

	t85 = ((x341<=(x342==x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x346 = INT8_MIN;
	uint32_t x348 = 11U;
	static volatile int32_t t86 = -715257;

	t86 = ((x345<=(x346==x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -6;
	static int64_t x351 = INT64_MIN;
	int32_t t87 = -3153;

	t87 = ((x349<=(x350==x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	volatile uint32_t x354 = 3U;
	int16_t x355 = INT16_MIN;
	int8_t x356 = -13;
	int32_t t88 = -42351;

	t88 = ((x353<=(x354==x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	static volatile int16_t x360 = INT16_MAX;
	int32_t t89 = -3;

	t89 = ((x357<=(x358==x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = 336667050;
	volatile uint8_t x363 = UINT8_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t90 = 1263195;

	t90 = ((x361<=(x362==x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x366 = -1;
	uint64_t x367 = 12059777014LLU;

	t91 = ((x365<=(x366==x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 15U;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MAX;
	volatile uint8_t x372 = 19U;

	t92 = ((x369<=(x370==x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x374 = INT8_MIN;
	uint32_t x375 = 45U;
	static int64_t x376 = -5395466LL;
	static int32_t t93 = -2;

	t93 = ((x373<=(x374==x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	int64_t x378 = -1LL;
	volatile int32_t x379 = INT32_MAX;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -1616487;

	t94 = ((x377<=(x378==x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	int8_t x382 = 0;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = -1;
	int32_t t95 = 4056;

	t95 = ((x381<=(x382==x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	volatile int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t96 = -416257574;

	t96 = ((x385<=(x386==x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 81U;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t97 = 1;

	t97 = ((x389<=(x390==x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = 481U;
	int16_t x395 = 586;
	uint8_t x396 = 15U;
	volatile int32_t t98 = -17;

	t98 = ((x393<=(x394==x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int64_t x398 = INT64_MAX;
	uint16_t x399 = 920U;
	int32_t x400 = INT32_MIN;

	t99 = ((x397<=(x398==x399))<x400);

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

