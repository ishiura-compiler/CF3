#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = -5026LL;
static int32_t t0 = 3488783;
static int64_t x6 = INT64_MIN;
int8_t x10 = INT8_MIN;
volatile uint16_t x11 = UINT16_MAX;
int8_t x16 = 31;
static int8_t x20 = INT8_MAX;
int64_t x21 = 16360LL;
int32_t t8 = 0;
uint8_t x42 = 0U;
int16_t x46 = -97;
int8_t x48 = 3;
int32_t t13 = -28360;
int16_t x58 = 1494;
int64_t x70 = INT64_MIN;
volatile uint64_t x77 = 88636156491LLU;
static volatile int8_t x79 = 1;
int32_t t19 = -1;
uint8_t x83 = UINT8_MAX;
volatile int8_t x89 = -1;
uint64_t x97 = 203507LLU;
int8_t x114 = -1;
volatile int16_t x118 = INT16_MIN;
volatile uint8_t x123 = UINT8_MAX;
static uint16_t x124 = 0U;
uint16_t x130 = 3857U;
int64_t x136 = INT64_MIN;
int32_t t33 = -8655;
int16_t x137 = INT16_MIN;
int32_t t34 = -10706939;
int8_t x142 = INT8_MAX;
volatile int64_t x143 = INT64_MIN;
uint16_t x144 = 3551U;
volatile int32_t t35 = -762567;
volatile int64_t x145 = INT64_MIN;
int8_t x157 = -36;
int64_t x164 = INT64_MIN;
int64_t x167 = INT64_MIN;
volatile int32_t x170 = -235228481;
int8_t x176 = 7;
uint16_t x180 = UINT16_MAX;
volatile int32_t t45 = -27373941;
volatile int32_t x189 = 13538;
volatile int64_t x195 = INT64_MIN;
int64_t x199 = INT64_MIN;
uint16_t x200 = UINT16_MAX;
int16_t x209 = INT16_MIN;
int16_t x210 = -5;
int64_t x220 = -1LL;
static int8_t x223 = INT8_MIN;
static int32_t t57 = 47;
static volatile int32_t t63 = -342334;
uint16_t x258 = UINT16_MAX;
volatile int16_t x260 = -1;
static int16_t x261 = INT16_MIN;
uint8_t x264 = 33U;
int16_t x267 = 3023;
static int64_t x269 = -1LL;
static volatile int64_t x271 = INT64_MIN;
volatile int32_t t69 = 2;
uint16_t x282 = 3471U;
int32_t t71 = -8897415;
uint64_t x291 = UINT64_MAX;
static uint32_t x292 = 9508113U;
static volatile uint32_t x301 = UINT32_MAX;
uint32_t x303 = 226200U;
static volatile uint32_t x308 = UINT32_MAX;
int8_t x310 = INT8_MIN;
uint64_t x312 = 64483LLU;
volatile int32_t t77 = 1014;
static uint64_t x313 = 1035113LLU;
int64_t x315 = 3333704553674LL;
static int8_t x320 = -1;
static uint8_t x323 = UINT8_MAX;
int8_t x324 = 1;
int32_t t81 = -44701801;
volatile int8_t x330 = -1;
int64_t x331 = 6359654334LL;
int32_t t83 = -1;
static int32_t t84 = -158337918;
int16_t x344 = INT16_MIN;
static int32_t t85 = 3;
volatile uint64_t x346 = 19LLU;
volatile uint16_t x347 = 94U;
static int8_t x348 = 42;
uint16_t x349 = 187U;
int64_t x352 = INT64_MIN;
uint32_t x363 = UINT32_MAX;
uint8_t x369 = UINT8_MAX;
uint8_t x371 = UINT8_MAX;
int64_t x378 = INT64_MIN;
uint16_t x380 = 34U;
uint64_t x382 = 5305525185LLU;
int8_t x383 = -1;
int64_t x385 = 300LL;
int8_t x387 = -2;


void f0(void) {
	int32_t x2 = -1;
	int32_t x3 = INT32_MIN;
	static int8_t x4 = -1;

	t0 = ((x1&(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = -30;
	int32_t t1 = 248;

	t1 = ((x5&(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MAX;
	volatile int8_t x12 = INT8_MIN;
	int32_t t2 = -377;

	t2 = ((x9&(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint32_t x14 = 328977250U;
	static volatile int32_t x15 = -402;
	int32_t t3 = -30741568;

	t3 = ((x13&(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	int16_t x18 = INT16_MIN;
	volatile uint64_t x19 = UINT64_MAX;
	static int32_t t4 = 12260362;

	t4 = ((x17&(x18&x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 240140994450LLU;
	static int64_t x23 = INT64_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 5073;

	t5 = ((x21&(x22&x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 15U;
	int16_t x26 = -1;
	volatile int16_t x27 = INT16_MIN;
	volatile uint64_t x28 = UINT64_MAX;
	int32_t t6 = 748173;

	t6 = ((x25&(x26&x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	static int32_t x30 = 330830;
	int8_t x31 = INT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -29964;

	t7 = ((x29&(x30&x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	int16_t x34 = -1;
	static volatile uint64_t x35 = 18266LLU;
	int16_t x36 = -1;

	t8 = ((x33&(x34&x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	volatile int16_t x38 = -7;
	int32_t x39 = -1;
	int32_t x40 = INT32_MIN;
	static int32_t t9 = 181546;

	t9 = ((x37&(x38&x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 0U;
	uint64_t x43 = UINT64_MAX;
	int8_t x44 = 22;
	int32_t t10 = 95923079;

	t10 = ((x41&(x42&x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -37;
	volatile uint16_t x47 = UINT16_MAX;
	volatile int32_t t11 = 2;

	t11 = ((x45&(x46&x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile int64_t x50 = INT64_MIN;
	static int32_t x51 = -22;
	int8_t x52 = INT8_MIN;
	static int32_t t12 = -1;

	t12 = ((x49&(x50&x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x53 = UINT32_MAX;
	static volatile int64_t x54 = INT64_MAX;
	int8_t x55 = INT8_MAX;
	static int8_t x56 = INT8_MIN;

	t13 = ((x53&(x54&x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static uint8_t x59 = 54U;
	uint64_t x60 = 48821584LLU;
	int32_t t14 = 0;

	t14 = ((x57&(x58&x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int16_t x62 = -1;
	int8_t x63 = 1;
	int32_t x64 = 56318;
	volatile int32_t t15 = 15596257;

	t15 = ((x61&(x62&x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = -1;
	int16_t x67 = -7;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t16 = 0;

	t16 = ((x65&(x66&x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 46;
	int8_t x71 = -1;
	static int8_t x72 = INT8_MIN;
	int32_t t17 = -44;

	t17 = ((x69&(x70&x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -55;
	uint16_t x74 = 5750U;
	uint32_t x75 = 6260U;
	static int32_t x76 = -1;
	volatile int32_t t18 = -136;

	t18 = ((x73&(x74&x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MIN;
	int32_t x80 = INT32_MAX;

	t19 = ((x77&(x78&x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	volatile int64_t x82 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 843;

	t20 = ((x81&(x82&x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int16_t x86 = -1145;
	int16_t x87 = -1;
	static int16_t x88 = 51;
	static int32_t t21 = 2;

	t21 = ((x85&(x86&x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	static uint8_t x91 = 103U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 3064302;

	t22 = ((x89&(x90&x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 23273U;
	int64_t x94 = INT64_MAX;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = 100;
	int32_t t23 = 16930;

	t23 = ((x93&(x94&x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x98 = 2U;
	volatile int8_t x99 = -1;
	volatile uint8_t x100 = UINT8_MAX;
	int32_t t24 = 248;

	t24 = ((x97&(x98&x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	uint32_t x102 = 334U;
	volatile int32_t x103 = INT32_MIN;
	int64_t x104 = 687584LL;
	int32_t t25 = -205;

	t25 = ((x101&(x102&x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile int8_t x106 = INT8_MIN;
	int16_t x107 = -1;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t26 = -1284741;

	t26 = ((x105&(x106&x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 2799234U;
	uint64_t x110 = 48LLU;
	int8_t x111 = INT8_MAX;
	int8_t x112 = 1;
	static volatile int32_t t27 = -8058;

	t27 = ((x109&(x110&x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 4LL;
	int32_t x115 = INT32_MIN;
	static int16_t x116 = 712;
	volatile int32_t t28 = 256640607;

	t28 = ((x113&(x114&x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -962098;

	t29 = ((x117&(x118&x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	volatile int64_t x122 = -1LL;
	int32_t t30 = -14152;

	t30 = ((x121&(x122&x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 1U;
	uint16_t x126 = 0U;
	int64_t x127 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 197458042;

	t31 = ((x125&(x126&x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 27U;
	uint8_t x131 = 1U;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = -2680066;

	t32 = ((x129&(x130&x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	static int32_t x134 = INT32_MIN;
	int32_t x135 = 127162848;

	t33 = ((x133&(x134&x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x138 = INT64_MIN;
	volatile int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MIN;

	t34 = ((x137&(x138&x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;

	t35 = ((x141&(x142&x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x146 = INT16_MIN;
	uint64_t x147 = UINT64_MAX;
	int64_t x148 = 1042434490404LL;
	static int32_t t36 = -9282;

	t36 = ((x145&(x146&x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	int8_t x151 = -51;
	int16_t x152 = -454;
	int32_t t37 = -2029;

	t37 = ((x149&(x150&x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = 0;
	uint8_t x154 = 20U;
	static volatile int64_t x155 = INT64_MIN;
	int8_t x156 = 0;
	volatile int32_t t38 = 169;

	t38 = ((x153&(x154&x155))==x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x158 = 58791254;
	volatile uint16_t x159 = UINT16_MAX;
	int32_t x160 = -563006838;
	volatile int32_t t39 = -555911545;

	t39 = ((x157&(x158&x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	static int32_t x162 = INT32_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile int32_t t40 = -213;

	t40 = ((x161&(x162&x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = 196LL;
	int64_t x168 = -446343962LL;
	volatile int32_t t41 = 529360273;

	t41 = ((x165&(x166&x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	int8_t x171 = INT8_MAX;
	static int64_t x172 = INT64_MAX;
	volatile int32_t t42 = -17828;

	t42 = ((x169&(x170&x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = 9;
	uint64_t x175 = 3709951199LLU;
	volatile int32_t t43 = 584;

	t43 = ((x173&(x174&x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	static int8_t x178 = 12;
	int32_t x179 = -3;
	int32_t t44 = 7;

	t44 = ((x177&(x178&x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = UINT8_MAX;
	int32_t x183 = INT32_MAX;
	int64_t x184 = INT64_MIN;

	t45 = ((x181&(x182&x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	uint8_t x186 = UINT8_MAX;
	int64_t x187 = -64647725296686670LL;
	volatile uint16_t x188 = 21671U;
	int32_t t46 = 61980;

	t46 = ((x185&(x186&x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	int32_t x191 = INT32_MIN;
	static volatile int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 250096155;

	t47 = ((x189&(x190&x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 38819U;
	int64_t x194 = 30726907112574LL;
	static volatile int16_t x196 = INT16_MIN;
	int32_t t48 = 2309;

	t48 = ((x193&(x194&x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = -51;
	int8_t x198 = INT8_MIN;
	volatile int32_t t49 = -1;

	t49 = ((x197&(x198&x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -406084;

	t50 = ((x201&(x202&x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = 14554U;
	static uint8_t x206 = 5U;
	static int32_t x207 = 222;
	uint32_t x208 = UINT32_MAX;
	static int32_t t51 = -75420;

	t51 = ((x205&(x206&x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x211 = INT32_MAX;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = -1037694;

	t52 = ((x209&(x210&x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MIN;
	static uint16_t x215 = 2U;
	int32_t x216 = INT32_MAX;
	int32_t t53 = -3540674;

	t53 = ((x213&(x214&x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = INT8_MIN;
	uint16_t x218 = 121U;
	volatile int8_t x219 = -1;
	volatile int32_t t54 = -20;

	t54 = ((x217&(x218&x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MIN;
	uint64_t x224 = 14174769LLU;
	int32_t t55 = -255;

	t55 = ((x221&(x222&x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int64_t x226 = -1LL;
	int8_t x227 = INT8_MAX;
	static volatile int32_t x228 = -2987517;
	int32_t t56 = -15;

	t56 = ((x225&(x226&x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 104U;
	uint32_t x230 = 121385U;
	uint64_t x231 = 54018365461LLU;
	volatile int32_t x232 = 0;

	t57 = ((x229&(x230&x231))==x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MIN;
	static int16_t x235 = INT16_MIN;
	volatile uint16_t x236 = 191U;
	volatile int32_t t58 = 87638;

	t58 = ((x233&(x234&x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -6;
	static int64_t x238 = 1214511494702LL;
	int8_t x239 = -28;
	static int16_t x240 = -772;
	int32_t t59 = -65;

	t59 = ((x237&(x238&x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	static volatile int64_t x242 = INT64_MAX;
	volatile int64_t x243 = -6868738594171779LL;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -3069;

	t60 = ((x241&(x242&x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	volatile uint8_t x246 = 0U;
	int32_t x247 = -29956355;
	static uint16_t x248 = 0U;
	int32_t t61 = -12;

	t61 = ((x245&(x246&x247))==x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	static volatile uint16_t x250 = UINT16_MAX;
	int8_t x251 = -49;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = 1;

	t62 = ((x249&(x250&x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = 95008108;
	int16_t x254 = -15855;
	int32_t x255 = -1;
	uint32_t x256 = 4U;

	t63 = ((x253&(x254&x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MIN;
	static int32_t x259 = -1;
	static volatile int32_t t64 = -393059;

	t64 = ((x257&(x258&x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MAX;
	static int16_t x263 = INT16_MIN;
	volatile int32_t t65 = -3293312;

	t65 = ((x261&(x262&x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = -132046;
	int64_t x266 = INT64_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 195767893;

	t66 = ((x265&(x266&x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x270 = INT64_MIN;
	volatile int8_t x272 = INT8_MAX;
	volatile int32_t t67 = -323649136;

	t67 = ((x269&(x270&x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MAX;
	int16_t x275 = INT16_MAX;
	int16_t x276 = INT16_MIN;
	int32_t t68 = -1;

	t68 = ((x273&(x274&x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	static int16_t x278 = INT16_MAX;
	int8_t x279 = 1;
	volatile int64_t x280 = -1LL;

	t69 = ((x277&(x278&x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	volatile int32_t x283 = -1;
	uint64_t x284 = 354983729950LLU;
	int32_t t70 = 266;

	t70 = ((x281&(x282&x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -1;
	volatile int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	static uint16_t x288 = 0U;

	t71 = ((x285&(x286&x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = -1;
	volatile int32_t t72 = 1027807761;

	t72 = ((x289&(x290&x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	volatile int8_t x294 = INT8_MAX;
	static uint64_t x295 = 65192766812LLU;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -95605941;

	t73 = ((x293&(x294&x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = 2;
	static volatile int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MIN;
	volatile uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = 2043386;

	t74 = ((x297&(x298&x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x302 = UINT16_MAX;
	int8_t x304 = INT8_MAX;
	int32_t t75 = -37;

	t75 = ((x301&(x302&x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 33U;
	static int16_t x306 = INT16_MAX;
	int8_t x307 = 6;
	volatile int32_t t76 = -1585803;

	t76 = ((x305&(x306&x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	volatile uint64_t x311 = 7176461362945970189LLU;

	t77 = ((x309&(x310&x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = INT32_MAX;
	int16_t x316 = 61;
	static int32_t t78 = 1;

	t78 = ((x313&(x314&x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static volatile uint32_t x318 = 9171U;
	int64_t x319 = INT64_MAX;
	static int32_t t79 = 1967;

	t79 = ((x317&(x318&x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	int64_t x322 = INT64_MIN;
	int32_t t80 = 87742489;

	t80 = ((x321&(x322&x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 16;
	volatile int16_t x326 = INT16_MIN;
	int16_t x327 = -1;
	int8_t x328 = -1;

	t81 = ((x325&(x326&x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 807U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 6599;

	t82 = ((x329&(x330&x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = UINT64_MAX;
	static uint16_t x334 = 2U;
	int16_t x335 = 720;
	int32_t x336 = 0;

	t83 = ((x333&(x334&x335))==x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1048510407693LL;
	uint64_t x338 = 109825LLU;
	int32_t x339 = INT32_MAX;
	int64_t x340 = 1986303397301LL;

	t84 = ((x337&(x338&x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MAX;
	int64_t x343 = INT64_MIN;

	t85 = ((x341&(x342&x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 1U;
	volatile int32_t t86 = 4;

	t86 = ((x345&(x346&x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MIN;
	int32_t x351 = -1;
	volatile int32_t t87 = -14589;

	t87 = ((x349&(x350&x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 1U;
	volatile int32_t x354 = -1;
	int32_t x355 = INT32_MAX;
	int64_t x356 = INT64_MIN;
	int32_t t88 = -86;

	t88 = ((x353&(x354&x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 23U;
	volatile int8_t x358 = 4;
	static uint16_t x359 = 0U;
	uint32_t x360 = 122U;
	int32_t t89 = 2390168;

	t89 = ((x357&(x358&x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x361 = 3U;
	uint64_t x362 = UINT64_MAX;
	int8_t x364 = 4;
	int32_t t90 = 210;

	t90 = ((x361&(x362&x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -10LL;
	static uint16_t x366 = UINT16_MAX;
	int8_t x367 = -59;
	uint32_t x368 = UINT32_MAX;
	int32_t t91 = 23;

	t91 = ((x365&(x366&x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 29095301;

	t92 = ((x369&(x370&x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 395536431U;
	int32_t x374 = -1;
	static uint16_t x375 = 23U;
	int32_t x376 = 0;
	volatile int32_t t93 = 2017;

	t93 = ((x373&(x374&x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	static uint32_t x379 = UINT32_MAX;
	volatile int32_t t94 = 862446;

	t94 = ((x377&(x378&x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 0U;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -4128396;

	t95 = ((x381&(x382&x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x386 = INT32_MIN;
	int8_t x388 = INT8_MAX;
	static volatile int32_t t96 = 160731;

	t96 = ((x385&(x386&x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MIN;
	int16_t x392 = -1;
	volatile int32_t t97 = 3660;

	t97 = ((x389&(x390&x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	static int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MAX;
	static uint16_t x396 = UINT16_MAX;
	static volatile int32_t t98 = -1;

	t98 = ((x393&(x394&x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = 3;
	int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 30U;
	volatile int32_t t99 = -502355271;

	t99 = ((x397&(x398&x399))==x400);

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

