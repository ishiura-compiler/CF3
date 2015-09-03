#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MIN;
int32_t x4 = -1;
uint16_t x12 = 1U;
volatile int16_t x15 = 56;
int32_t x28 = INT32_MIN;
int8_t x29 = INT8_MIN;
int32_t x30 = -350059;
volatile int32_t t7 = 7;
int8_t x35 = INT8_MAX;
static uint64_t x44 = UINT64_MAX;
static int32_t x45 = 280270321;
static int32_t x47 = INT32_MIN;
volatile int8_t x49 = INT8_MAX;
volatile uint32_t x50 = 431922876U;
uint8_t x52 = UINT8_MAX;
static volatile int32_t t12 = 1576;
uint64_t x53 = 113849669692LLU;
int16_t x55 = -1;
static volatile int32_t t14 = 65;
uint16_t x61 = 15U;
int32_t x64 = -1;
volatile int32_t t16 = 0;
int32_t x73 = INT32_MIN;
int64_t x74 = -3LL;
int16_t x82 = INT16_MAX;
static int32_t t20 = -15341107;
static uint8_t x90 = 45U;
int8_t x95 = INT8_MIN;
volatile uint32_t x104 = 28782518U;
int32_t t25 = 418894828;
volatile int32_t t26 = 26177834;
static int32_t x109 = INT32_MIN;
static int16_t x110 = -6237;
volatile int32_t t27 = 4525;
static int32_t t29 = -49;
int16_t x122 = -1;
static uint8_t x128 = UINT8_MAX;
volatile int64_t x129 = -7594499017523LL;
volatile int32_t t32 = 415515484;
int8_t x134 = -1;
uint32_t x139 = 31U;
volatile int64_t x144 = INT64_MAX;
uint64_t x155 = UINT64_MAX;
static int8_t x156 = -45;
static int8_t x158 = INT8_MIN;
uint8_t x165 = UINT8_MAX;
int32_t t41 = -6051816;
int16_t x171 = INT16_MIN;
int8_t x179 = 3;
int16_t x183 = -84;
volatile uint16_t x186 = UINT16_MAX;
volatile int32_t t46 = -69;
volatile uint16_t x197 = UINT16_MAX;
int64_t x198 = INT64_MAX;
int32_t x199 = INT32_MIN;
int16_t x211 = -1;
int32_t t52 = -128;
volatile int32_t t53 = -108359002;
int32_t x218 = -1;
int64_t x223 = -1LL;
int16_t x243 = -9;
int64_t x245 = INT64_MIN;
static volatile int32_t x248 = 380;
static int32_t t62 = -2165935;
static int64_t x257 = -1LL;
int8_t x263 = INT8_MAX;
volatile int8_t x274 = INT8_MAX;
int64_t x279 = 15LL;
int64_t x286 = INT64_MAX;
int16_t x290 = -1;
int8_t x291 = INT8_MIN;
int32_t t72 = 0;
int8_t x298 = 28;
static int32_t x300 = -1;
volatile uint16_t x304 = 12U;
static int8_t x313 = INT8_MIN;
int8_t x321 = INT8_MIN;
int64_t x327 = -1LL;
uint64_t x328 = UINT64_MAX;
static int8_t x332 = 1;
int8_t x334 = -15;
int32_t t83 = -18472864;
static int64_t x337 = -5455832325627LL;
volatile int32_t t84 = -1788225;
volatile int32_t t85 = 768441310;
int64_t x352 = 5543654294657LL;
int8_t x356 = INT8_MIN;
static uint32_t x371 = UINT32_MAX;
int32_t x373 = -1;
int16_t x377 = INT16_MIN;
static uint32_t x384 = 1034374U;
uint64_t x385 = UINT64_MAX;
volatile int16_t x390 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 126U;
	uint16_t x3 = 3U;
	volatile int32_t t0 = -1;

	t0 = ((x1<=(x2|x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -26;
	volatile uint8_t x6 = 120U;
	static uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 983098493;

	t1 = ((x5<=(x6|x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint64_t x10 = 6416141510LLU;
	int64_t x11 = INT64_MIN;
	int32_t t2 = 15919163;

	t2 = ((x9<=(x10|x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = 52;
	int32_t x14 = INT32_MAX;
	uint8_t x16 = 10U;
	int32_t t3 = -68179200;

	t3 = ((x13<=(x14|x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -125;
	int64_t x18 = 1364181812479504LL;
	int32_t x19 = INT32_MIN;
	volatile uint16_t x20 = UINT16_MAX;
	static int32_t t4 = 8257392;

	t4 = ((x17<=(x18|x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 3368U;
	int16_t x22 = -1;
	int32_t x23 = 40;
	uint32_t x24 = UINT32_MAX;
	static volatile int32_t t5 = 29418;

	t5 = ((x21<=(x22|x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	uint32_t x26 = 0U;
	int64_t x27 = INT64_MIN;
	volatile int32_t t6 = 1;

	t6 = ((x25<=(x26|x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = 50;
	int8_t x32 = INT8_MIN;

	t7 = ((x29<=(x30|x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -1;
	volatile uint16_t x34 = 2786U;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t8 = -7607;

	t8 = ((x33<=(x34|x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 2;
	static uint8_t x38 = 2U;
	int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -534226959;

	t9 = ((x37<=(x38|x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -30;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	int32_t t10 = -43188;

	t10 = ((x41<=(x42|x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -2150;
	int64_t x48 = -6LL;
	volatile int32_t t11 = -12;

	t11 = ((x45<=(x46|x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x51 = 2798551852LLU;

	t12 = ((x49<=(x50|x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 23U;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 324732;

	t13 = ((x53<=(x54|x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 1725U;
	uint16_t x58 = 24U;
	static int32_t x59 = INT32_MAX;
	int8_t x60 = -10;

	t14 = ((x57<=(x58|x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 2404U;
	int8_t x63 = INT8_MIN;
	int32_t t15 = -3983727;

	t15 = ((x61<=(x62|x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x65 = -1LL;
	uint16_t x66 = 0U;
	int32_t x67 = INT32_MAX;
	volatile int64_t x68 = -1LL;

	t16 = ((x65<=(x66|x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	int64_t x70 = 4123LL;
	volatile int32_t x71 = INT32_MAX;
	int16_t x72 = 28;
	int32_t t17 = -142;

	t17 = ((x69<=(x70|x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = INT64_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	int32_t t18 = 212866;

	t18 = ((x73<=(x74|x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	volatile uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 24323584165LLU;
	static int32_t t19 = 20500666;

	t19 = ((x77<=(x78|x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 10U;
	uint16_t x83 = 2U;
	uint16_t x84 = 3U;

	t20 = ((x81<=(x82|x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static uint8_t x86 = 102U;
	uint16_t x87 = 14U;
	uint8_t x88 = 9U;
	int32_t t21 = -1522;

	t21 = ((x85<=(x86|x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 267384216453701LLU;
	static uint16_t x91 = 3U;
	static int8_t x92 = -1;
	volatile int32_t t22 = 1;

	t22 = ((x89<=(x90|x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 5;
	int16_t x94 = -1;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -1;

	t23 = ((x93<=(x94|x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int8_t x98 = INT8_MIN;
	static int16_t x99 = INT16_MIN;
	int64_t x100 = -1779359342733LL;
	static int32_t t24 = -63935053;

	t24 = ((x97<=(x98|x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	uint64_t x103 = 73LLU;

	t25 = ((x101<=(x102|x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MIN;
	int16_t x107 = 445;
	int32_t x108 = INT32_MIN;

	t26 = ((x105<=(x106|x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x111 = UINT32_MAX;
	uint8_t x112 = 14U;

	t27 = ((x109<=(x110|x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t28 = 115;

	t28 = ((x113<=(x114|x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile int8_t x118 = INT8_MAX;
	static uint8_t x119 = 22U;
	int32_t x120 = INT32_MIN;

	t29 = ((x117<=(x118|x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MAX;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = -140;

	t30 = ((x121<=(x122|x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MIN;
	static int16_t x127 = INT16_MIN;
	int32_t t31 = -5;

	t31 = ((x125<=(x126|x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 15659188U;
	int16_t x131 = 4;
	int16_t x132 = INT16_MAX;

	t32 = ((x129<=(x130|x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 61956705873509LLU;
	uint32_t x135 = 314430U;
	int32_t x136 = 33079939;
	int32_t t33 = -4439;

	t33 = ((x133<=(x134|x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 11U;
	volatile uint16_t x138 = UINT16_MAX;
	int8_t x140 = 0;
	volatile int32_t t34 = 1;

	t34 = ((x137<=(x138|x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 6U;
	int32_t x142 = INT32_MIN;
	volatile int32_t x143 = INT32_MIN;
	static volatile int32_t t35 = -2;

	t35 = ((x141<=(x142|x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	int8_t x146 = 1;
	volatile int16_t x147 = 6195;
	int64_t x148 = INT64_MAX;
	int32_t t36 = -681596041;

	t36 = ((x145<=(x146|x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = 57798032;
	int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MAX;
	static uint8_t x152 = 44U;
	int32_t t37 = -54411;

	t37 = ((x149<=(x150|x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 86U;
	int64_t x154 = 779671319547314LL;
	volatile int32_t t38 = -35;

	t38 = ((x153<=(x154|x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = -1;
	int32_t x159 = INT32_MAX;
	int64_t x160 = INT64_MIN;
	int32_t t39 = 30407652;

	t39 = ((x157<=(x158|x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	volatile int16_t x164 = INT16_MIN;
	int32_t t40 = -7210;

	t40 = ((x161<=(x162|x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = -14;
	uint16_t x167 = 24105U;
	int64_t x168 = 15151LL;

	t41 = ((x165<=(x166|x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 4687;
	int32_t x170 = 29276;
	int32_t x172 = -1;
	volatile int32_t t42 = -511406992;

	t42 = ((x169<=(x170|x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 6U;
	int64_t x174 = INT64_MIN;
	int64_t x175 = -1LL;
	int16_t x176 = -1;
	int32_t t43 = -3;

	t43 = ((x173<=(x174|x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x177 = -1LL;
	volatile int32_t x178 = 6073;
	static uint32_t x180 = UINT32_MAX;
	int32_t t44 = -24735473;

	t44 = ((x177<=(x178|x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	static uint8_t x182 = 104U;
	int32_t x184 = -1;
	int32_t t45 = -1664;

	t45 = ((x181<=(x182|x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 0U;
	uint32_t x187 = UINT32_MAX;
	static uint16_t x188 = 11105U;

	t46 = ((x185<=(x186|x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MAX;
	int8_t x191 = -1;
	int16_t x192 = -467;
	int32_t t47 = 958545365;

	t47 = ((x189<=(x190|x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	volatile int16_t x194 = 858;
	int64_t x195 = -1LL;
	int16_t x196 = -27;
	volatile int32_t t48 = -489367188;

	t48 = ((x193<=(x194|x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x200 = INT32_MIN;
	int32_t t49 = 981933;

	t49 = ((x197<=(x198|x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = 30834;
	volatile uint16_t x202 = 15U;
	int64_t x203 = INT64_MIN;
	static uint64_t x204 = 972205382619LLU;
	int32_t t50 = 2664;

	t50 = ((x201<=(x202|x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	int32_t x206 = -1;
	volatile int16_t x207 = INT16_MIN;
	volatile int32_t x208 = -927485152;
	volatile int32_t t51 = 5012;

	t51 = ((x205<=(x206|x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	volatile uint8_t x210 = 96U;
	int8_t x212 = 28;

	t52 = ((x209<=(x210|x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MAX;
	uint16_t x214 = UINT16_MAX;
	uint16_t x215 = 189U;
	uint16_t x216 = 3522U;

	t53 = ((x213<=(x214|x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = UINT32_MAX;
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = INT32_MIN;
	static int32_t t54 = -1219472;

	t54 = ((x217<=(x218|x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = -5724458994813175LL;
	static int64_t x224 = INT64_MIN;
	int32_t t55 = -2012;

	t55 = ((x221<=(x222|x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MAX;
	int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MIN;
	static int32_t t56 = -241986;

	t56 = ((x225<=(x226|x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 662U;
	uint8_t x230 = 0U;
	static uint32_t x231 = 180500431U;
	static int16_t x232 = INT16_MAX;
	static int32_t t57 = -32344049;

	t57 = ((x229<=(x230|x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	int16_t x234 = INT16_MIN;
	volatile int64_t x235 = 4LL;
	uint32_t x236 = 2U;
	volatile int32_t t58 = -2;

	t58 = ((x233<=(x234|x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	volatile int16_t x238 = -1;
	int16_t x239 = INT16_MAX;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 123;

	t59 = ((x237<=(x238|x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	volatile int8_t x242 = -1;
	int8_t x244 = 0;
	int32_t t60 = -8;

	t60 = ((x241<=(x242|x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = 868;
	volatile int32_t x247 = -1;
	int32_t t61 = 62;

	t61 = ((x245<=(x246|x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = UINT8_MAX;
	int64_t x250 = -4013312474LL;
	int8_t x251 = -1;
	int32_t x252 = -1;

	t62 = ((x249<=(x250|x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MIN;
	volatile int64_t x255 = INT64_MIN;
	int16_t x256 = 240;
	int32_t t63 = 400523;

	t63 = ((x253<=(x254|x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MAX;
	uint16_t x259 = 1186U;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = 224794;

	t64 = ((x257<=(x258|x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MIN;
	int64_t x264 = 3637636LL;
	static int32_t t65 = 16;

	t65 = ((x261<=(x262|x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = -1;
	int32_t x266 = INT32_MAX;
	int8_t x267 = INT8_MIN;
	int64_t x268 = -1LL;
	int32_t t66 = -26;

	t66 = ((x265<=(x266|x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = 107879545U;
	int32_t x271 = INT32_MIN;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t67 = -254;

	t67 = ((x269<=(x270|x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	volatile int8_t x275 = INT8_MIN;
	static int32_t x276 = -374912;
	volatile int32_t t68 = -1;

	t68 = ((x273<=(x274|x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int16_t x278 = -21;
	volatile uint64_t x280 = 2638474LLU;
	volatile int32_t t69 = 11456573;

	t69 = ((x277<=(x278|x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x282 = INT32_MIN;
	static int8_t x283 = INT8_MIN;
	static int64_t x284 = 85746LL;
	static int32_t t70 = 30403;

	t70 = ((x281<=(x282|x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	int16_t x287 = INT16_MIN;
	static int8_t x288 = INT8_MIN;
	static int32_t t71 = -1;

	t71 = ((x285<=(x286|x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = -1;
	int8_t x292 = -3;

	t72 = ((x289<=(x290|x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 0U;
	int32_t x294 = INT32_MAX;
	int16_t x295 = -1018;
	uint32_t x296 = 47U;
	int32_t t73 = -5326752;

	t73 = ((x293<=(x294|x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MIN;
	uint16_t x299 = 1243U;
	volatile int32_t t74 = -268291644;

	t74 = ((x297<=(x298|x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = 268298438LL;
	int64_t x302 = INT64_MIN;
	volatile uint64_t x303 = 160305LLU;
	int32_t t75 = -3706738;

	t75 = ((x301<=(x302|x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MAX;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -459;

	t76 = ((x305<=(x306|x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = 14999LLU;
	static int8_t x310 = INT8_MIN;
	volatile int16_t x311 = INT16_MIN;
	uint16_t x312 = 15844U;
	static int32_t t77 = -6620;

	t77 = ((x309<=(x310|x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x314 = INT8_MIN;
	static volatile int32_t x315 = -1;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 7;

	t78 = ((x313<=(x314|x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -56;
	int16_t x318 = INT16_MAX;
	volatile int32_t x319 = 17324;
	volatile uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 21486;

	t79 = ((x317<=(x318|x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = -1;
	volatile int64_t x323 = -1LL;
	uint16_t x324 = UINT16_MAX;
	static volatile int32_t t80 = 148843;

	t80 = ((x321<=(x322|x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint8_t x326 = 12U;
	volatile int32_t t81 = -1;

	t81 = ((x325<=(x326|x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = 0U;
	uint32_t x330 = UINT32_MAX;
	volatile uint32_t x331 = UINT32_MAX;
	volatile int32_t t82 = 33313;

	t82 = ((x329<=(x330|x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 0U;
	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MAX;

	t83 = ((x333<=(x334|x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x338 = -1LL;
	static int16_t x339 = 830;
	int16_t x340 = INT16_MIN;

	t84 = ((x337<=(x338|x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = 32;
	volatile uint8_t x344 = UINT8_MAX;

	t85 = ((x341<=(x342|x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MAX;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t86 = -12539894;

	t86 = ((x345<=(x346|x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 848488373;
	static uint16_t x350 = 67U;
	static int32_t x351 = 123562356;
	static volatile int32_t t87 = -1;

	t87 = ((x349<=(x350|x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -1LL;
	volatile uint8_t x354 = UINT8_MAX;
	int16_t x355 = INT16_MAX;
	volatile int32_t t88 = -79;

	t88 = ((x353<=(x354|x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	static int32_t x358 = 507824;
	uint16_t x359 = UINT16_MAX;
	volatile int8_t x360 = -1;
	int32_t t89 = 1590;

	t89 = ((x357<=(x358|x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -489;
	uint8_t x362 = UINT8_MAX;
	int32_t x363 = -1945007;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t90 = 20393;

	t90 = ((x361<=(x362|x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	uint8_t x366 = 0U;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;
	int32_t t91 = 3032363;

	t91 = ((x365<=(x366|x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 0U;
	volatile int32_t x370 = 5;
	int16_t x372 = INT16_MIN;
	volatile int32_t t92 = 16612244;

	t92 = ((x369<=(x370|x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = 1;
	int16_t x375 = -14527;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -210471123;

	t93 = ((x373<=(x374|x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x378 = UINT8_MAX;
	static int64_t x379 = -1LL;
	int8_t x380 = -8;
	volatile int32_t t94 = 4;

	t94 = ((x377<=(x378|x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 14U;
	volatile int32_t x382 = 0;
	uint16_t x383 = UINT16_MAX;
	static volatile int32_t t95 = -15795;

	t95 = ((x381<=(x382|x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	int8_t x387 = 0;
	int64_t x388 = -1LL;
	static volatile int32_t t96 = 183561;

	t96 = ((x385<=(x386|x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -2;
	static int64_t x391 = INT64_MAX;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t97 = 1464594;

	t97 = ((x389<=(x390|x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 8;
	volatile uint32_t x394 = 1U;
	volatile int64_t x395 = -1LL;
	int8_t x396 = 0;
	int32_t t98 = 272457149;

	t98 = ((x393<=(x394|x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	static volatile int64_t x398 = 565443044992607626LL;
	uint8_t x399 = 14U;
	int16_t x400 = 21;
	int32_t t99 = 1502;

	t99 = ((x397<=(x398|x399))<=x400);

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

