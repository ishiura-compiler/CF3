#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -15;
volatile int8_t x17 = -1;
volatile uint32_t x21 = 518067225U;
volatile uint32_t t5 = 448762U;
int16_t x25 = INT16_MIN;
int32_t x29 = -11395;
int16_t x31 = INT16_MAX;
int32_t x35 = INT32_MAX;
int32_t t8 = -154487780;
static int8_t x39 = INT8_MAX;
int32_t x44 = INT32_MIN;
static uint32_t t10 = 726893U;
volatile int64_t t14 = -4065878125264LL;
volatile int32_t t15 = 6909000;
int64_t t16 = -3377250LL;
uint64_t x70 = 7239596LLU;
int64_t t17 = 8037694601614LL;
int16_t x73 = INT16_MIN;
int8_t x76 = -1;
int32_t t18 = 671;
int64_t x77 = INT64_MIN;
uint64_t x79 = 0LLU;
volatile uint64_t t19 = 452185827676LLU;
uint16_t x84 = 34U;
volatile uint32_t x88 = 1142U;
volatile int8_t x92 = INT8_MIN;
int16_t x100 = -426;
int8_t x105 = -1;
int64_t x115 = -10177113LL;
static volatile int64_t t28 = -2109407194808921LL;
static uint32_t x123 = 1961U;
int16_t x125 = INT16_MIN;
int32_t t32 = INT32_MIN;
int16_t x137 = INT16_MIN;
static uint64_t x138 = 2445610LLU;
volatile uint32_t x159 = 3334U;
uint32_t x165 = 1696U;
volatile int64_t t40 = -76370844817LL;
static uint64_t t41 = 183122094LLU;
uint32_t x179 = 171U;
int8_t x181 = 2;
volatile int32_t t43 = -417071124;
volatile uint16_t x200 = 183U;
int32_t t46 = 26347;
volatile int32_t t47 = 14;
int8_t x220 = INT8_MIN;
volatile uint32_t x222 = 696U;
static int16_t x230 = INT16_MAX;
volatile int32_t t54 = 78032;
int32_t x235 = 1511;
uint16_t x241 = 5U;
static int32_t x247 = INT32_MIN;
static uint64_t x249 = 1585693795682382253LLU;
int64_t x258 = -1LL;
int64_t x262 = -1880156900LL;
volatile int8_t x269 = 45;
int8_t x271 = INT8_MAX;
int64_t t64 = -17806785259288696LL;
static int16_t x275 = 13;
int32_t t66 = 5;
int32_t x289 = -3;
int16_t x291 = -1;
volatile int32_t x292 = INT32_MIN;
volatile uint32_t t70 = 7076U;
int32_t x299 = -1;
int32_t x302 = INT32_MIN;
static volatile int8_t x315 = INT8_MAX;
volatile uint64_t t75 = 1201034533968LLU;
int32_t x317 = -178207439;
static volatile int8_t x321 = -1;
uint32_t x324 = 7580U;
volatile uint8_t x328 = 0U;
int32_t t79 = -55;
int64_t x347 = INT64_MAX;
static int64_t x355 = INT64_MIN;
int8_t x363 = INT8_MIN;
volatile uint32_t x368 = 5773075U;
int32_t x382 = -1;
static volatile int8_t x383 = INT8_MAX;
int64_t x387 = 0LL;
volatile int32_t t93 = 8908;
static int64_t x391 = INT64_MIN;
uint64_t t94 = 52049LLU;
int64_t x399 = -7LL;
static int8_t x401 = -1;
volatile int16_t x409 = -921;
volatile int32_t t99 = 43901;


void f0(void) {
	uint32_t x1 = 8689U;
	int64_t x3 = INT64_MAX;
	uint16_t x4 = 3811U;
	uint32_t t0 = 4659U;

	t0 = ((x1-(x2<x3))&x4);

	if (t0 != 224U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int32_t x6 = 559038437;
	int64_t x7 = 278061317557LL;
	static volatile int64_t x8 = -3732128881LL;
	int64_t t1 = 751170053434771LL;

	t1 = ((x5-(x6<x7))&x8);

	if (t1 != -3732129009LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint8_t x10 = 35U;
	int32_t x11 = -5631252;
	uint64_t x12 = 121LLU;
	uint64_t t2 = 173075640427727LLU;

	t2 = ((x9-(x10<x11))&x12);

	if (t2 != 121LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -4532;
	static uint16_t x14 = 28810U;
	static uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MIN;
	static int32_t t3 = 386701789;

	t3 = ((x13-(x14<x15))&x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = -17;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = 14588;

	t4 = ((x17-(x18<x19))&x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 104U;
	int8_t x23 = -49;
	uint8_t x24 = 28U;

	t5 = ((x21-(x22<x23))&x24);

	if (t5 != 24U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 2U;
	int16_t x28 = -2023;
	volatile int32_t t6 = 123542;

	t6 = ((x25-(x26<x27))&x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -340604756LL;
	volatile int8_t x32 = 1;
	volatile int32_t t7 = -1794201;

	t7 = ((x29-(x30<x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 14U;
	int32_t x34 = -123766;
	int16_t x36 = INT16_MIN;

	t8 = ((x33-(x34<x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = UINT32_MAX;
	volatile uint32_t x38 = 1021556U;
	static volatile uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 111183400521356LLU;

	t9 = ((x37-(x38<x39))&x40);

	if (t9 != 4294967295LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	volatile int64_t x42 = INT64_MIN;
	int16_t x43 = -1;

	t10 = ((x41-(x42<x43))&x44);

	if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 258U;
	int16_t x46 = -3930;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = 80U;
	volatile int32_t t11 = 29363;

	t11 = ((x45-(x46<x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 6;
	static int32_t x50 = INT32_MIN;
	int8_t x51 = -1;
	int64_t x52 = -1LL;
	int64_t t12 = 1LL;

	t12 = ((x49-(x50<x51))&x52);

	if (t12 != 5LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 182;
	int16_t x54 = 7003;
	int64_t x55 = 269809015358079055LL;
	int8_t x56 = -1;
	static volatile int32_t t13 = -3614;

	t13 = ((x53-(x54<x55))&x56);

	if (t13 != 181) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 1094U;
	int32_t x58 = INT32_MIN;
	static uint64_t x59 = 136012455LLU;
	static int64_t x60 = INT64_MIN;

	t14 = ((x57-(x58<x59))&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint8_t x62 = UINT8_MAX;
	volatile int32_t x63 = -1;
	uint8_t x64 = UINT8_MAX;

	t15 = ((x61-(x62<x63))&x64);

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MAX;
	static uint16_t x66 = 24527U;
	volatile int16_t x67 = INT16_MIN;
	volatile uint16_t x68 = 1U;

	t16 = ((x65-(x66<x67))&x68);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 1U;
	int16_t x71 = INT16_MAX;
	int64_t x72 = INT64_MIN;

	t17 = ((x69-(x70<x71))&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x74 = 0U;
	int32_t x75 = -136694713;

	t18 = ((x73-(x74<x75))&x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x78 = INT64_MIN;
	static uint64_t x80 = 14LLU;

	t19 = ((x77-(x78<x79))&x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int32_t x82 = INT32_MIN;
	int16_t x83 = -1;
	static int32_t t20 = 2455;

	t20 = ((x81-(x82<x83))&x84);

	if (t20 != 34) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static uint8_t x86 = 7U;
	uint32_t x87 = UINT32_MAX;
	uint32_t t21 = 1052887033U;

	t21 = ((x85-(x86<x87))&x88);

	if (t21 != 1142U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	uint32_t x90 = 575607684U;
	int32_t x91 = INT32_MAX;
	int64_t t22 = 35251753240892LL;

	t22 = ((x89-(x90<x91))&x92);

	if (t22 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x94 = -1298;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 32U;
	int32_t t23 = 12201;

	t23 = ((x93-(x94<x95))&x96);

	if (t23 != 32) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int16_t x98 = 35;
	volatile int32_t x99 = -358;
	volatile int32_t t24 = 13;

	t24 = ((x97-(x98<x99))&x100);

	if (t24 != 86) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 88U;
	uint8_t x102 = 10U;
	uint8_t x103 = UINT8_MAX;
	volatile int8_t x104 = -59;
	volatile int32_t t25 = 15;

	t25 = ((x101-(x102<x103))&x104);

	if (t25 != 69) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = UINT16_MAX;
	static volatile uint16_t x107 = UINT16_MAX;
	uint32_t x108 = UINT32_MAX;
	static uint32_t t26 = UINT32_MAX;

	t26 = ((x105-(x106<x107))&x108);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3040697644LLU;
	int16_t x110 = 1;
	volatile int32_t x111 = -1;
	volatile uint16_t x112 = 7311U;
	volatile uint64_t t27 = 485403LLU;

	t27 = ((x109-(x110<x111))&x112);

	if (t27 != 7180LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = 0;
	uint32_t x116 = 902U;

	t28 = ((x113-(x114<x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -19;
	int8_t x118 = -2;
	uint64_t x119 = 134LLU;
	int64_t x120 = -5330LL;
	int64_t t29 = -1194022230557LL;

	t29 = ((x117-(x118<x119))&x120);

	if (t29 != -5332LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 4LLU;
	uint64_t x122 = 1144319234075337314LLU;
	int32_t x124 = INT32_MIN;
	volatile uint64_t t30 = 36007LLU;

	t30 = ((x121-(x122<x123))&x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = 38;
	uint8_t x127 = UINT8_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = -6;

	t31 = ((x125-(x126<x127))&x128);

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	int16_t x131 = -1;
	static int16_t x132 = INT16_MIN;

	t32 = ((x129-(x130<x131))&x132);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x139 = 13U;
	int64_t x140 = INT64_MIN;
	static int64_t t33 = INT64_MIN;

	t33 = ((x137-(x138<x139))&x140);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x141 = UINT64_MAX;
	volatile int8_t x142 = -1;
	uint16_t x143 = 778U;
	static uint64_t x144 = 136LLU;
	volatile uint64_t t34 = 82901165080482143LLU;

	t34 = ((x141-(x142<x143))&x144);

	if (t34 != 136LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = -1LL;
	volatile int64_t x147 = INT64_MIN;
	int8_t x148 = -1;
	volatile int32_t t35 = 98;

	t35 = ((x145-(x146<x147))&x148);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = 269771228468LLU;
	int64_t x152 = -31211056LL;
	int64_t t36 = -960868LL;

	t36 = ((x149-(x150<x151))&x152);

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 0U;
	volatile uint8_t x154 = 72U;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MAX;
	int64_t t37 = 137944545466404LL;

	t37 = ((x153-(x154<x155))&x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MAX;
	volatile int32_t x158 = INT32_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t38 = -26925460;

	t38 = ((x157-(x158<x159))&x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = -1LL;
	int16_t x167 = -1;
	int32_t x168 = 6587;
	uint32_t t39 = 2066605U;

	t39 = ((x165-(x166<x167))&x168);

	if (t39 != 160U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x169 = -25847380LL;
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MIN;

	t40 = ((x169-(x170<x171))&x172);

	if (t40 != -25853952LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MIN;
	static uint64_t x175 = UINT64_MAX;
	uint64_t x176 = 7129854LLU;

	t41 = ((x173-(x174<x175))&x176);

	if (t41 != 7097086LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = INT64_MAX;
	static volatile int16_t x178 = INT16_MIN;
	volatile int64_t x180 = INT64_MIN;
	int64_t t42 = 32LL;

	t42 = ((x177-(x178<x179))&x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x182 = UINT64_MAX;
	int8_t x183 = INT8_MIN;
	uint8_t x184 = 10U;

	t43 = ((x181-(x182<x183))&x184);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -7723;
	static volatile int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MIN;
	static volatile int32_t x192 = -95;
	volatile int32_t t44 = 869266;

	t44 = ((x189-(x190<x191))&x192);

	if (t44 != -7807) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = UINT8_MAX;
	int16_t x195 = 0;
	static int8_t x196 = 7;
	int32_t t45 = -26;

	t45 = ((x193-(x194<x195))&x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x197 = 1;
	static volatile int64_t x198 = INT64_MIN;
	int32_t x199 = -1;

	t46 = ((x197-(x198<x199))&x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 0U;
	static volatile int8_t x202 = 0;
	static int8_t x203 = INT8_MIN;
	static int8_t x204 = -1;

	t47 = ((x201-(x202<x203))&x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MAX;
	int64_t x206 = INT64_MIN;
	int32_t x207 = -11356;
	int8_t x208 = INT8_MAX;
	static volatile int64_t t48 = 216693055LL;

	t48 = ((x205-(x206<x207))&x208);

	if (t48 != 126LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MIN;
	uint64_t x211 = 146773294475LLU;
	static int32_t x212 = INT32_MIN;
	int32_t t49 = INT32_MIN;

	t49 = ((x209-(x210<x211))&x212);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = UINT32_MAX;
	static uint8_t x214 = UINT8_MAX;
	volatile uint32_t x215 = 12787975U;
	int8_t x216 = INT8_MIN;
	uint32_t t50 = 32134U;

	t50 = ((x213-(x214<x215))&x216);

	if (t50 != 4294967168U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = 0;
	int32_t x219 = -8704;
	volatile int64_t t51 = INT64_MIN;

	t51 = ((x217-(x218<x219))&x220);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = -13LL;
	int32_t x223 = 7592697;
	static uint32_t x224 = 19751554U;
	volatile int64_t t52 = 12720LL;

	t52 = ((x221-(x222<x223))&x224);

	if (t52 != 19751554LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x225 = 346U;
	int8_t x226 = INT8_MIN;
	static volatile int8_t x227 = -1;
	int64_t x228 = -1LL;
	volatile int64_t t53 = -1136711929104LL;

	t53 = ((x225-(x226<x227))&x228);

	if (t53 != 345LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -3942544;
	volatile int32_t x231 = INT32_MIN;
	static int16_t x232 = -32;

	t54 = ((x229-(x230<x231))&x232);

	if (t54 != -3942560) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	uint16_t x234 = UINT16_MAX;
	uint16_t x236 = 314U;
	volatile int32_t t55 = -31884;

	t55 = ((x233-(x234<x235))&x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = -38;
	int32_t x238 = INT32_MIN;
	uint16_t x239 = UINT16_MAX;
	static uint32_t x240 = UINT32_MAX;
	volatile uint32_t t56 = 65988697U;

	t56 = ((x237-(x238<x239))&x240);

	if (t56 != 4294967257U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x242 = 2U;
	int8_t x243 = -8;
	int16_t x244 = INT16_MAX;
	volatile int32_t t57 = -134;

	t57 = ((x241-(x242<x243))&x244);

	if (t57 != 5) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = -851755;
	uint64_t x246 = UINT64_MAX;
	volatile int32_t x248 = -1;
	int32_t t58 = 7563288;

	t58 = ((x245-(x246<x247))&x248);

	if (t58 != -851755) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x250 = -1LL;
	int8_t x251 = -21;
	int8_t x252 = -50;
	uint64_t t59 = 0LLU;

	t59 = ((x249-(x250<x251))&x252);

	if (t59 != 1585693795682382220LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x253 = 11651U;
	int32_t x254 = INT32_MIN;
	static uint64_t x255 = UINT64_MAX;
	volatile int8_t x256 = INT8_MIN;
	static volatile int32_t t60 = 0;

	t60 = ((x253-(x254<x255))&x256);

	if (t60 != 11648) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = -122013716327112LL;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = 52;
	int64_t t61 = 3115164542198439790LL;

	t61 = ((x257-(x258<x259))&x260);

	if (t61 != 52LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x261 = UINT16_MAX;
	int16_t x263 = 5175;
	int64_t x264 = INT64_MAX;
	int64_t t62 = -5LL;

	t62 = ((x261-(x262<x263))&x264);

	if (t62 != 65534LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x265 = 0;
	static int8_t x266 = -3;
	static volatile uint64_t x267 = 17215LLU;
	static volatile uint32_t x268 = UINT32_MAX;
	volatile uint32_t t63 = 123532539U;

	t63 = ((x265-(x266<x267))&x268);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x270 = INT64_MAX;
	volatile int64_t x272 = -1LL;

	t64 = ((x269-(x270<x271))&x272);

	if (t64 != 45LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x273 = 18U;
	int32_t x274 = 3873042;
	int64_t x276 = INT64_MIN;
	volatile int64_t t65 = 51671481LL;

	t65 = ((x273-(x274<x275))&x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = INT16_MAX;
	volatile int8_t x278 = -1;
	int8_t x279 = INT8_MIN;
	int16_t x280 = -340;

	t66 = ((x277-(x278<x279))&x280);

	if (t66 != 32428) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	static int32_t x283 = 18818;
	int8_t x284 = INT8_MIN;
	int32_t t67 = -2610889;

	t67 = ((x281-(x282<x283))&x284);

	if (t67 != -32896) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 47U;
	static int32_t x286 = INT32_MIN;
	int32_t x287 = 206898592;
	int32_t x288 = -1;
	int32_t t68 = -29302;

	t68 = ((x285-(x286<x287))&x288);

	if (t68 != 46) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x290 = -1LL;
	int32_t t69 = INT32_MIN;

	t69 = ((x289-(x290<x291))&x292);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = 10U;
	static uint32_t x294 = 96U;
	int32_t x295 = INT32_MIN;
	int16_t x296 = -1804;

	t70 = ((x293-(x294<x295))&x296);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = UINT32_MAX;
	static int64_t x298 = -38545235LL;
	uint8_t x300 = 7U;
	volatile uint32_t t71 = 14708U;

	t71 = ((x297-(x298<x299))&x300);

	if (t71 != 6U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x301 = 0;
	volatile int16_t x303 = INT16_MAX;
	int64_t x304 = -2074168898461LL;
	int64_t t72 = 1154LL;

	t72 = ((x301-(x302<x303))&x304);

	if (t72 != -2074168898461LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x305 = 32;
	static int32_t x306 = -1;
	static uint64_t x307 = 954368326145458632LLU;
	int32_t x308 = -1;
	volatile int32_t t73 = 174596;

	t73 = ((x305-(x306<x307))&x308);

	if (t73 != 32) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x309 = UINT64_MAX;
	volatile uint8_t x310 = 18U;
	int32_t x311 = 3;
	uint32_t x312 = 6U;
	volatile uint64_t t74 = 2878455628806846186LLU;

	t74 = ((x309-(x310<x311))&x312);

	if (t74 != 6LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = 39587073001797267LLU;
	volatile int8_t x314 = INT8_MAX;
	uint16_t x316 = 11702U;

	t75 = ((x313-(x314<x315))&x316);

	if (t75 != 9362LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x318 = 2U;
	int8_t x319 = INT8_MAX;
	static int8_t x320 = 0;
	int32_t t76 = 1337894;

	t76 = ((x317-(x318<x319))&x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x322 = INT16_MAX;
	static int8_t x323 = INT8_MIN;
	volatile uint32_t t77 = 1545U;

	t77 = ((x321-(x322<x323))&x324);

	if (t77 != 7580U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x325 = 1340U;
	volatile int16_t x326 = -26;
	static volatile int64_t x327 = INT64_MIN;
	volatile uint32_t t78 = 84846U;

	t78 = ((x325-(x326<x327))&x328);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x329 = 4;
	uint64_t x330 = 49991142029LLU;
	static int16_t x331 = INT16_MIN;
	static uint8_t x332 = UINT8_MAX;

	t79 = ((x329-(x330<x331))&x332);

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	volatile int64_t x334 = INT64_MIN;
	volatile int32_t x335 = -13;
	int32_t x336 = -1;
	int32_t t80 = -365825;

	t80 = ((x333-(x334<x335))&x336);

	if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 3661U;
	volatile uint32_t x338 = 159538248U;
	uint8_t x339 = 107U;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t81 = 179;

	t81 = ((x337-(x338<x339))&x340);

	if (t81 != 3584) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	uint16_t x342 = UINT16_MAX;
	volatile uint8_t x343 = 0U;
	static int64_t x344 = INT64_MIN;
	int64_t t82 = INT64_MIN;

	t82 = ((x341-(x342<x343))&x344);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = 32418U;
	int8_t x346 = INT8_MIN;
	uint64_t x348 = 645207LLU;
	volatile uint64_t t83 = 124200LLU;

	t83 = ((x345-(x346<x347))&x348);

	if (t83 != 22529LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x349 = UINT16_MAX;
	int16_t x350 = INT16_MAX;
	int16_t x351 = -1;
	volatile uint64_t x352 = 6795364696415060688LLU;
	static uint64_t t84 = 30010171705152LLU;

	t84 = ((x349-(x350<x351))&x352);

	if (t84 != 49872LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	volatile int16_t x354 = INT16_MAX;
	int64_t x356 = INT64_MAX;
	int64_t t85 = 10265690977LL;

	t85 = ((x353-(x354<x355))&x356);

	if (t85 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = -1;
	int32_t x358 = 918324;
	int64_t x359 = INT64_MAX;
	int32_t x360 = INT32_MAX;
	static int32_t t86 = 58;

	t86 = ((x357-(x358<x359))&x360);

	if (t86 != 2147483646) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = -39592959;
	uint16_t x364 = 2727U;
	volatile int32_t t87 = -108626;

	t87 = ((x361-(x362<x363))&x364);

	if (t87 != 2727) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x365 = INT64_MAX;
	int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MAX;
	int64_t t88 = -1638553957746955035LL;

	t88 = ((x365-(x366<x367))&x368);

	if (t88 != 5773074LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -1LL;
	int16_t x370 = INT16_MIN;
	volatile int32_t x371 = -1;
	volatile int16_t x372 = INT16_MIN;
	int64_t t89 = -1LL;

	t89 = ((x369-(x370<x371))&x372);

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = -8049532951454LL;
	int16_t x374 = -984;
	int16_t x375 = 1074;
	int32_t x376 = INT32_MIN;
	volatile int64_t t90 = 8546854836LL;

	t90 = ((x373-(x374<x375))&x376);

	if (t90 != -8050916196352LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = 0;
	int64_t x378 = -13LL;
	uint8_t x379 = 0U;
	static uint64_t x380 = 220469738712091748LLU;
	uint64_t t91 = 1903LLU;

	t91 = ((x377-(x378<x379))&x380);

	if (t91 != 220469738712091748LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int32_t x384 = INT32_MAX;
	static int32_t t92 = 680;

	t92 = ((x381-(x382<x383))&x384);

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = 284394644;
	volatile uint16_t x388 = UINT16_MAX;

	t93 = ((x385-(x386<x387))&x388);

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MAX;
	int64_t x390 = -1LL;
	uint64_t x392 = 22333601730021LLU;

	t94 = ((x389-(x390<x391))&x392);

	if (t94 != 19941LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	static int16_t x395 = INT16_MIN;
	int16_t x396 = -1;
	volatile int32_t t95 = -3704986;

	t95 = ((x393-(x394<x395))&x396);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MAX;
	static uint8_t x398 = 20U;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t96 = 490314258721029332LLU;

	t96 = ((x397-(x398<x399))&x400);

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x402 = 235LLU;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = -2;
	volatile int32_t t97 = 16;

	t97 = ((x401-(x402<x403))&x404);

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 4946687983104189565LLU;
	static int64_t x406 = -1LL;
	static uint64_t x407 = 965217341749LLU;
	uint8_t x408 = 13U;
	volatile uint64_t t98 = 1421504084799866403LLU;

	t98 = ((x405-(x406<x407))&x408);

	if (t98 != 13LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x410 = 1LLU;
	uint8_t x411 = 8U;
	int8_t x412 = INT8_MAX;

	t99 = ((x409-(x410<x411))&x412);

	if (t99 != 102) { NG(); } else { ; }
	
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

