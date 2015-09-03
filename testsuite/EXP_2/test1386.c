#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -432364106;
volatile int8_t x13 = INT8_MIN;
volatile int8_t x22 = 0;
volatile uint64_t x24 = 3474LLU;
static int32_t t5 = 800;
int32_t t7 = 2053;
volatile int32_t t8 = 224969901;
int32_t t10 = 25;
volatile int8_t x47 = INT8_MIN;
int8_t x49 = INT8_MIN;
int8_t x55 = INT8_MAX;
static volatile int32_t x56 = INT32_MAX;
int32_t x58 = -1;
int32_t t14 = 1477;
int16_t x63 = -13;
int8_t x64 = INT8_MAX;
volatile int16_t x67 = INT16_MAX;
int32_t t16 = 606;
int16_t x70 = -449;
volatile uint32_t x72 = 10298452U;
static volatile uint32_t x74 = UINT32_MAX;
int32_t t19 = 100;
volatile uint32_t x81 = UINT32_MAX;
int32_t x82 = -384311;
int8_t x86 = INT8_MAX;
volatile int32_t t21 = -41990;
int8_t x89 = -1;
int16_t x91 = INT16_MAX;
int32_t t23 = -23;
int64_t x100 = -7832331LL;
int8_t x102 = 10;
int16_t x103 = INT16_MAX;
uint8_t x104 = 0U;
int16_t x107 = INT16_MIN;
int8_t x110 = 0;
uint32_t x113 = 2596U;
volatile uint16_t x117 = UINT16_MAX;
volatile int16_t x126 = 9;
static int8_t x136 = 1;
static int64_t x138 = INT64_MAX;
volatile int8_t x141 = -1;
int32_t t35 = -2;
volatile int16_t x155 = INT16_MIN;
volatile int16_t x156 = 830;
uint8_t x157 = UINT8_MAX;
volatile int64_t x164 = INT64_MAX;
uint64_t x169 = 6805841449030LLU;
int32_t t42 = -4238350;
uint32_t x176 = 8285U;
int8_t x177 = 1;
uint32_t x189 = 254916U;
volatile int8_t x194 = -1;
int32_t t48 = 1;
volatile uint64_t x204 = 3112328LLU;
int64_t x213 = INT64_MAX;
int8_t x216 = -1;
int64_t x218 = -1LL;
static int16_t x220 = -1;
int64_t x222 = INT64_MAX;
int64_t x230 = -1LL;
int16_t x235 = 3;
int32_t x243 = INT32_MIN;
volatile int32_t t60 = 338;
uint8_t x250 = 3U;
volatile int32_t t65 = 988364148;
int32_t x267 = -1;
int32_t t66 = -3627633;
uint16_t x274 = 3U;
int64_t x277 = -1LL;
int32_t x280 = INT32_MIN;
uint8_t x281 = 38U;
uint8_t x282 = UINT8_MAX;
int16_t x289 = -3;
volatile int32_t t75 = 100720609;
int16_t x305 = INT16_MIN;
static int16_t x309 = INT16_MIN;
int32_t x313 = INT32_MIN;
uint32_t x317 = UINT32_MAX;
int64_t x328 = INT64_MAX;
static int32_t t81 = 207;
int64_t x330 = INT64_MIN;
static uint64_t x336 = 114106352259LLU;
static volatile int8_t x341 = -1;
static int64_t x342 = -22973LL;
int32_t t85 = -730;
uint32_t x351 = UINT32_MAX;
int32_t x355 = INT32_MIN;
uint32_t x365 = 376212638U;
static int64_t x366 = 1778734LL;
int32_t t91 = 3591;
uint16_t x377 = 8649U;
volatile int32_t t94 = -8;
int16_t x382 = INT16_MAX;
static int8_t x400 = INT8_MIN;
static volatile int32_t t99 = 50703;


void f0(void) {
	int16_t x1 = 37;
	int64_t x2 = INT64_MAX;
	int8_t x3 = -38;
	static int16_t x4 = -1;
	volatile int32_t t0 = 19;

	t0 = ((x1*(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 0;
	static uint32_t x6 = 465496559U;
	uint32_t x7 = 52329U;
	int64_t x8 = -1LL;

	t1 = ((x5*(x6<x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 13971343881728403LLU;
	static volatile int32_t x10 = -319;
	volatile int16_t x11 = 39;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = 108009;

	t2 = ((x9*(x10<x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = UINT8_MAX;
	uint32_t x16 = 7619482U;
	int32_t t3 = 2;

	t3 = ((x13*(x14<x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int32_t x18 = INT32_MIN;
	static volatile uint8_t x19 = 6U;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -63887683;

	t4 = ((x17*(x18<x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -14;
	static uint16_t x23 = 1787U;

	t5 = ((x21*(x22<x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	uint16_t x26 = 25912U;
	uint64_t x27 = UINT64_MAX;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -247;

	t6 = ((x25*(x26<x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	volatile int8_t x32 = INT8_MAX;

	t7 = ((x29*(x30<x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int16_t x34 = INT16_MIN;
	static int64_t x35 = INT64_MAX;
	uint64_t x36 = 238984000LLU;

	t8 = ((x33*(x34<x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x38 = INT16_MIN;
	uint32_t x39 = 55268616U;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -33;

	t9 = ((x37*(x38<x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 8890U;
	static uint32_t x42 = 0U;
	uint32_t x43 = 1U;
	int32_t x44 = -2912771;

	t10 = ((x41*(x42<x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 376;
	uint64_t x46 = 1362LLU;
	int32_t x48 = -1;
	static int32_t t11 = -345014;

	t11 = ((x45*(x46<x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MAX;
	int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MAX;
	int32_t t12 = 4782;

	t12 = ((x49*(x50<x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int8_t x54 = 3;
	volatile int32_t t13 = 0;

	t13 = ((x53*(x54<x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	volatile uint64_t x59 = 24061824242LLU;
	uint64_t x60 = 493667464627LLU;

	t14 = ((x57*(x58<x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 714616445170777LLU;
	int64_t x62 = 77229805213667874LL;
	static volatile int32_t t15 = -819;

	t15 = ((x61*(x62<x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -49;
	int16_t x66 = 12;
	uint16_t x68 = 30U;

	t16 = ((x65*(x66<x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 6634U;
	uint32_t x71 = 1U;
	volatile int32_t t17 = 1117232;

	t17 = ((x69*(x70<x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 1LLU;
	volatile uint32_t x75 = 2872304U;
	int32_t x76 = 466;
	int32_t t18 = 124038657;

	t18 = ((x73*(x74<x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile int32_t x78 = INT32_MIN;
	volatile int8_t x79 = -3;
	int16_t x80 = INT16_MAX;

	t19 = ((x77*(x78<x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 240;

	t20 = ((x81*(x82<x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	uint32_t x87 = 1U;
	volatile int64_t x88 = -1LL;

	t21 = ((x85*(x86<x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MAX;
	volatile uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = 3794;

	t22 = ((x89*(x90<x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MAX;

	t23 = ((x93*(x94<x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = UINT32_MAX;
	uint64_t x99 = 453516LLU;
	static volatile int32_t t24 = 3399;

	t24 = ((x97*(x98<x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int32_t t25 = -14;

	t25 = ((x101*(x102<x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	uint8_t x106 = 98U;
	uint8_t x108 = 7U;
	volatile int32_t t26 = 248767261;

	t26 = ((x105*(x106<x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MAX;
	static int64_t x111 = 474LL;
	int32_t x112 = -90360463;
	volatile int32_t t27 = -8030308;

	t27 = ((x109*(x110<x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	volatile uint16_t x115 = 748U;
	int8_t x116 = -1;
	int32_t t28 = 98;

	t28 = ((x113*(x114<x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = 91U;
	int8_t x119 = INT8_MAX;
	volatile int64_t x120 = INT64_MIN;
	static int32_t t29 = 2;

	t29 = ((x117*(x118<x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MIN;
	int8_t x123 = -1;
	volatile int64_t x124 = INT64_MIN;
	int32_t t30 = 1;

	t30 = ((x121*(x122<x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	static int32_t x127 = INT32_MIN;
	static uint64_t x128 = 6218504995LLU;
	int32_t t31 = -1916;

	t31 = ((x125*(x126<x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 257LL;
	volatile uint32_t x130 = 1675277673U;
	uint8_t x131 = 9U;
	int64_t x132 = INT64_MAX;
	int32_t t32 = 2457;

	t32 = ((x129*(x130<x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -74744;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = -1;
	static volatile int32_t t33 = 2161062;

	t33 = ((x133*(x134<x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1216283175550552484LL;
	volatile uint16_t x139 = 3475U;
	static int16_t x140 = INT16_MAX;
	int32_t t34 = -3589;

	t34 = ((x137*(x138<x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -646044021786771817LL;
	int64_t x143 = 1LL;
	uint16_t x144 = 16196U;

	t35 = ((x141*(x142<x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 8467892LL;
	uint32_t x146 = 1726U;
	int8_t x147 = 0;
	static int64_t x148 = INT64_MAX;
	int32_t t36 = 19848;

	t36 = ((x145*(x146<x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 2370U;
	volatile uint64_t x150 = 12108412550489226LLU;
	volatile int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MAX;
	int32_t t37 = 0;

	t37 = ((x149*(x150<x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -2;
	int64_t x154 = -1LL;
	int32_t t38 = -845246;

	t38 = ((x153*(x154<x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	int16_t x160 = -733;
	int32_t t39 = 6604;

	t39 = ((x157*(x158<x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	uint64_t x162 = 3305LLU;
	int16_t x163 = INT16_MIN;
	volatile int32_t t40 = 747;

	t40 = ((x161*(x162<x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = UINT32_MAX;
	int32_t x166 = -881;
	int32_t x167 = -1;
	int16_t x168 = -487;
	volatile int32_t t41 = -40434218;

	t41 = ((x165*(x166<x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = 3LL;
	uint16_t x171 = 1972U;
	int8_t x172 = INT8_MIN;

	t42 = ((x169*(x170<x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int16_t x174 = INT16_MIN;
	volatile int16_t x175 = 786;
	static int32_t t43 = 507298562;

	t43 = ((x173*(x174<x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	static volatile int64_t x179 = -2047198674041LL;
	volatile uint8_t x180 = 5U;
	static volatile int32_t t44 = -95527569;

	t44 = ((x177*(x178<x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	volatile int16_t x183 = -55;
	int64_t x184 = INT64_MIN;
	static int32_t t45 = 2;

	t45 = ((x181*(x182<x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 4338161250327186583LLU;
	int8_t x186 = INT8_MIN;
	int8_t x187 = 3;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = -7943;

	t46 = ((x185*(x186<x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = -5339;
	static int64_t x191 = -2948567369174LL;
	uint64_t x192 = UINT64_MAX;
	volatile int32_t t47 = -43;

	t47 = ((x189*(x190<x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	static uint32_t x195 = 10U;
	int32_t x196 = INT32_MAX;

	t48 = ((x193*(x194<x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	int32_t x198 = INT32_MAX;
	static int16_t x199 = -5;
	uint16_t x200 = 392U;
	volatile int32_t t49 = -78135405;

	t49 = ((x197*(x198<x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 1070U;
	int32_t x202 = -1;
	uint16_t x203 = 226U;
	int32_t t50 = 57104411;

	t50 = ((x201*(x202<x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	uint16_t x206 = 5964U;
	int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -7220836;

	t51 = ((x205*(x206<x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static int64_t x210 = INT64_MIN;
	volatile int8_t x211 = -1;
	int32_t x212 = 7929353;
	int32_t t52 = -119844;

	t52 = ((x209*(x210<x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x214 = INT32_MIN;
	static int16_t x215 = INT16_MIN;
	int32_t t53 = 6;

	t53 = ((x213*(x214<x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = 8U;
	int64_t x219 = INT64_MAX;
	int32_t t54 = 949;

	t54 = ((x217*(x218<x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = UINT64_MAX;
	int32_t t55 = -86844;

	t55 = ((x221*(x222<x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -14473;
	int64_t x226 = -1LL;
	volatile int32_t x227 = 177;
	int8_t x228 = INT8_MAX;
	static volatile int32_t t56 = -11927079;

	t56 = ((x225*(x226<x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	uint32_t x231 = 75751182U;
	static uint32_t x232 = 18920U;
	static volatile int32_t t57 = -5;

	t57 = ((x229*(x230<x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = 1;
	int16_t x236 = INT16_MAX;
	int32_t t58 = -15043003;

	t58 = ((x233*(x234<x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MAX;
	int8_t x238 = -1;
	volatile uint8_t x239 = UINT8_MAX;
	volatile uint16_t x240 = UINT16_MAX;
	int32_t t59 = -735009674;

	t59 = ((x237*(x238<x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1577;
	uint16_t x242 = 2440U;
	volatile int64_t x244 = 2202822129761832LL;

	t60 = ((x241*(x242<x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	int16_t x246 = -1;
	volatile uint64_t x247 = UINT64_MAX;
	volatile int16_t x248 = 7653;
	volatile int32_t t61 = 4905208;

	t61 = ((x245*(x246<x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	volatile int64_t x251 = INT64_MAX;
	uint16_t x252 = 208U;
	volatile int32_t t62 = -1;

	t62 = ((x249*(x250<x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 0;
	static uint8_t x254 = 59U;
	uint64_t x255 = 183194848LLU;
	int32_t x256 = 7;
	static volatile int32_t t63 = 3083;

	t63 = ((x253*(x254<x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	volatile int64_t x258 = -1LL;
	uint16_t x259 = 6165U;
	int16_t x260 = -2856;
	volatile int32_t t64 = 19603;

	t64 = ((x257*(x258<x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -1;
	static uint8_t x262 = 7U;
	uint8_t x263 = 1U;
	int16_t x264 = -1;

	t65 = ((x261*(x262<x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = INT64_MIN;
	int16_t x268 = INT16_MIN;

	t66 = ((x265*(x266<x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = INT32_MIN;
	static volatile int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 121094709;

	t67 = ((x269*(x270<x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 0;
	uint64_t x275 = 465992232286LLU;
	int32_t x276 = INT32_MIN;
	int32_t t68 = -95;

	t68 = ((x273*(x274<x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = UINT16_MAX;
	volatile uint32_t x279 = UINT32_MAX;
	volatile int32_t t69 = 1;

	t69 = ((x277*(x278<x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x283 = 228962912530316446LLU;
	uint16_t x284 = 1U;
	int32_t t70 = -1776297;

	t70 = ((x281*(x282<x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 16574U;
	int16_t x286 = -1;
	static int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	int32_t t71 = 1;

	t71 = ((x285*(x286<x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = -44;
	int32_t x291 = INT32_MIN;
	volatile int64_t x292 = -1LL;
	volatile int32_t t72 = -67216244;

	t72 = ((x289*(x290<x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	volatile int64_t x294 = 1924629354208733780LL;
	uint32_t x295 = UINT32_MAX;
	static volatile int8_t x296 = INT8_MIN;
	static int32_t t73 = -30112094;

	t73 = ((x293*(x294<x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 22555;
	volatile int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	volatile int64_t x300 = -105343649963LL;
	int32_t t74 = 47526621;

	t74 = ((x297*(x298<x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 14141800883909LLU;
	int8_t x302 = 45;
	static int32_t x303 = -46715;
	static uint64_t x304 = 15886293503069926LLU;

	t75 = ((x301*(x302<x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x306 = 254956U;
	static int64_t x307 = INT64_MAX;
	uint32_t x308 = 2U;
	volatile int32_t t76 = -182;

	t76 = ((x305*(x306<x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = 2393195;
	volatile int32_t x311 = -1;
	int64_t x312 = -3LL;
	static volatile int32_t t77 = 55323597;

	t77 = ((x309*(x310<x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x314 = INT16_MIN;
	volatile int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MAX;
	int32_t t78 = 36;

	t78 = ((x313*(x314<x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x318 = 48;
	static uint32_t x319 = 166579U;
	uint16_t x320 = UINT16_MAX;
	static volatile int32_t t79 = 130358;

	t79 = ((x317*(x318<x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = UINT32_MAX;
	volatile int16_t x322 = 84;
	static volatile uint64_t x323 = 498447451816LLU;
	static int32_t x324 = INT32_MAX;
	volatile int32_t t80 = 2;

	t80 = ((x321*(x322<x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MAX;
	int16_t x326 = INT16_MIN;
	int16_t x327 = -1;

	t81 = ((x325*(x326<x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 7087700U;
	volatile int32_t x331 = INT32_MAX;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -8501769;

	t82 = ((x329*(x330<x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 36358123464413440LL;
	volatile int32_t x334 = INT32_MIN;
	uint64_t x335 = 122LLU;
	volatile int32_t t83 = 183;

	t83 = ((x333*(x334<x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int64_t x338 = INT64_MIN;
	int16_t x339 = INT16_MAX;
	uint64_t x340 = UINT64_MAX;
	static volatile int32_t t84 = -2695156;

	t84 = ((x337*(x338<x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x343 = UINT64_MAX;
	volatile uint32_t x344 = 240U;

	t85 = ((x341*(x342<x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	int32_t x346 = INT32_MIN;
	uint8_t x347 = UINT8_MAX;
	uint16_t x348 = 0U;
	int32_t t86 = -6075371;

	t86 = ((x345*(x346<x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static int16_t x350 = -1;
	static int32_t x352 = -1;
	volatile int32_t t87 = 1955;

	t87 = ((x349*(x350<x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	volatile int16_t x354 = INT16_MAX;
	volatile int8_t x356 = 63;
	volatile int32_t t88 = -303;

	t88 = ((x353*(x354<x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = INT8_MAX;
	int32_t x359 = 2057;
	static volatile uint64_t x360 = 8LLU;
	volatile int32_t t89 = 2;

	t89 = ((x357*(x358<x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = 1;
	int32_t x362 = -7;
	uint32_t x363 = 6121U;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = -391;

	t90 = ((x361*(x362<x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x367 = 2U;
	uint8_t x368 = 63U;

	t91 = ((x365*(x366<x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 149798237554LLU;
	volatile uint64_t x370 = 4362868LLU;
	int8_t x371 = -51;
	static uint8_t x372 = 1U;
	volatile int32_t t92 = 732;

	t92 = ((x369*(x370<x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -697082984309LL;
	int16_t x374 = 2;
	volatile int32_t x375 = 85516984;
	int32_t x376 = -77583922;
	static int32_t t93 = -743448;

	t93 = ((x373*(x374<x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 1U;
	int16_t x379 = INT16_MAX;
	int16_t x380 = -1;

	t94 = ((x377*(x378<x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int32_t x383 = -15707610;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -2499;

	t95 = ((x381*(x382<x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 15U;
	uint64_t x386 = 59123591152357173LLU;
	static uint8_t x387 = UINT8_MAX;
	int64_t x388 = -497054183742LL;
	static volatile int32_t t96 = -25618;

	t96 = ((x385*(x386<x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 246U;
	volatile uint32_t x390 = 267U;
	uint64_t x391 = 4486067252LLU;
	volatile uint64_t x392 = UINT64_MAX;
	volatile int32_t t97 = 0;

	t97 = ((x389*(x390<x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MAX;
	uint64_t x395 = 1019924LLU;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 168427551;

	t98 = ((x393*(x394<x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 12414LLU;
	uint16_t x398 = 0U;
	static int16_t x399 = INT16_MAX;

	t99 = ((x397*(x398<x399))==x400);

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

