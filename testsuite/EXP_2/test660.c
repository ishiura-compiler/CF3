#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int64_t x2 = -2LL;
int8_t x3 = -1;
int16_t x6 = -1;
uint32_t x7 = UINT32_MAX;
volatile int32_t t2 = -122650902;
static uint32_t x22 = 2295U;
static uint32_t x26 = 205140U;
volatile int32_t t5 = 322;
int32_t x33 = -1;
uint64_t x34 = 3034490280992386699LLU;
volatile int64_t x37 = INT64_MIN;
int8_t x46 = -1;
uint32_t x47 = UINT32_MAX;
uint32_t x50 = 2538U;
int16_t x51 = 1;
static int32_t x58 = -9085;
int16_t x60 = INT16_MAX;
static uint8_t x63 = 90U;
int32_t x65 = INT32_MIN;
uint64_t x70 = 2LLU;
int16_t x75 = INT16_MIN;
int8_t x76 = -1;
static uint16_t x89 = UINT16_MAX;
int64_t x93 = INT64_MAX;
int16_t x95 = -1;
int32_t x96 = 22010;
static int8_t x105 = INT8_MIN;
static int8_t x106 = INT8_MIN;
volatile int32_t t25 = 446377296;
static int8_t x120 = INT8_MAX;
int32_t t27 = -2593476;
static volatile int8_t x126 = 16;
volatile int32_t t29 = -83277162;
volatile uint32_t x129 = 1U;
int16_t x132 = INT16_MIN;
int32_t x141 = INT32_MIN;
int16_t x144 = INT16_MAX;
volatile int8_t x151 = INT8_MAX;
uint64_t x154 = UINT64_MAX;
int8_t x155 = INT8_MIN;
int32_t x161 = INT32_MIN;
static int64_t x172 = 6596LL;
int32_t x184 = -3020;
static volatile int64_t x187 = INT64_MIN;
static volatile int32_t t43 = 9249566;
int32_t t44 = -708558876;
int32_t x197 = 192;
int64_t x201 = -1LL;
int16_t x202 = -1;
int32_t t47 = 1205;
int16_t x206 = INT16_MIN;
static uint32_t x210 = 60052U;
int64_t x215 = INT64_MIN;
static uint16_t x223 = 5U;
static volatile int64_t x230 = INT64_MIN;
int32_t t55 = -855456416;
volatile int32_t x237 = INT32_MIN;
int32_t t56 = 186;
static int8_t x241 = -1;
volatile int32_t t57 = -9;
uint64_t x245 = 26288LLU;
int32_t t58 = -261926620;
uint16_t x252 = 32037U;
int32_t t60 = -16629663;
int8_t x259 = INT8_MAX;
int8_t x269 = INT8_MIN;
uint8_t x278 = 3U;
volatile int64_t x279 = -1LL;
int32_t x283 = INT32_MAX;
int64_t x285 = -934423330312462LL;
volatile uint16_t x299 = 6079U;
volatile int32_t t70 = 181;
int8_t x307 = -1;
int8_t x308 = -1;
int64_t x325 = INT64_MAX;
int8_t x328 = -42;
volatile int32_t t76 = -26911;
uint8_t x331 = 105U;
volatile int32_t t79 = -4636;
int8_t x342 = INT8_MAX;
static int32_t t80 = 1;
int32_t t81 = 112676;
static volatile int32_t t83 = 2210;
static int16_t x362 = -194;
volatile int16_t x364 = 0;
int32_t x371 = INT32_MAX;
volatile int32_t t87 = 158844188;
int32_t x373 = -1;
int64_t x377 = -1LL;
uint32_t x379 = UINT32_MAX;
uint8_t x382 = UINT8_MAX;
volatile uint8_t x393 = UINT8_MAX;
uint32_t x411 = UINT32_MAX;
volatile int16_t x416 = INT16_MIN;
static uint8_t x419 = 1U;
volatile int32_t t99 = 113628;


void f0(void) {
	static int32_t x4 = INT32_MIN;
	int32_t t0 = 532000;

	t0 = ((x1|(x2/x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 341578577LLU;
	static int16_t x8 = -29;
	volatile int32_t t1 = 20;

	t1 = ((x5|(x6/x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int64_t x10 = 77909117462LL;
	int16_t x11 = -15;
	int16_t x12 = 1737;

	t2 = ((x9|(x10/x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 38U;
	int32_t x23 = -3407;
	int64_t x24 = 695705LL;
	static volatile int32_t t3 = -16334;

	t3 = ((x21|(x22/x23))<=x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 1726253U;
	static uint8_t x27 = UINT8_MAX;
	uint64_t x28 = UINT64_MAX;
	int32_t t4 = -6831;

	t4 = ((x25|(x26/x27))<=x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x29 = 225U;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = 13U;

	t5 = ((x29|(x30/x31))<=x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x35 = 76LLU;
	static int32_t x36 = 948;
	int32_t t6 = 235306;

	t6 = ((x33|(x34/x35))<=x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = -1;
	volatile uint8_t x39 = 1U;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t7 = -104247;

	t7 = ((x37|(x38/x39))<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = 19303;
	uint64_t x43 = 1605LLU;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t8 = 94434933;

	t8 = ((x41|(x42/x43))<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x45 = UINT64_MAX;
	int32_t x48 = -1;
	int32_t t9 = 6942;

	t9 = ((x45|(x46/x47))<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	volatile int16_t x52 = INT16_MIN;
	int32_t t10 = -488;

	t10 = ((x49|(x50/x51))<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 10;
	int8_t x54 = -1;
	uint16_t x55 = 13162U;
	volatile int64_t x56 = -7299015031672359LL;
	volatile int32_t t11 = 4460594;

	t11 = ((x53|(x54/x55))<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 10U;
	static volatile int8_t x59 = INT8_MIN;
	volatile int32_t t12 = -11;

	t12 = ((x57|(x58/x59))<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = INT8_MIN;
	uint32_t x62 = 36371361U;
	int16_t x64 = INT16_MIN;
	int32_t t13 = 9;

	t13 = ((x61|(x62/x63))<=x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x66 = UINT32_MAX;
	volatile int8_t x67 = 59;
	int32_t x68 = INT32_MIN;
	int32_t t14 = 684963;

	t14 = ((x65|(x66/x67))<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x69 = INT32_MIN;
	int8_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t15 = -30;

	t15 = ((x69|(x70/x71))<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int32_t x74 = 18727;
	volatile int32_t t16 = 59;

	t16 = ((x73|(x74/x75))<=x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = INT32_MAX;
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MAX;
	int64_t x80 = INT64_MAX;
	volatile int32_t t17 = 16063;

	t17 = ((x77|(x78/x79))<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 1183918U;
	int32_t x82 = -1;
	uint16_t x83 = UINT16_MAX;
	uint64_t x84 = 84155257917768418LLU;
	static int32_t t18 = 0;

	t18 = ((x81|(x82/x83))<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = INT8_MIN;
	static int64_t x86 = INT64_MIN;
	uint8_t x87 = 108U;
	static int32_t x88 = -1;
	volatile int32_t t19 = 3474373;

	t19 = ((x85|(x86/x87))<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = INT32_MIN;
	int8_t x91 = 26;
	static int8_t x92 = -1;
	volatile int32_t t20 = 14459;

	t20 = ((x89|(x90/x91))<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x94 = 106769LLU;
	static volatile int32_t t21 = -11086;

	t21 = ((x93|(x94/x95))<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x97 = 81U;
	volatile uint8_t x98 = 1U;
	int8_t x99 = INT8_MIN;
	int16_t x100 = -1;
	int32_t t22 = -73506;

	t22 = ((x97|(x98/x99))<=x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 2;
	volatile int64_t x102 = -1LL;
	int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	int32_t t23 = -1427198;

	t23 = ((x101|(x102/x103))<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x107 = -1;
	int64_t x108 = 154923192013LL;
	volatile int32_t t24 = -2035978;

	t24 = ((x105|(x106/x107))<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 1U;
	int16_t x110 = -1;
	static int64_t x111 = -23620624751564078LL;
	int32_t x112 = INT32_MAX;

	t25 = ((x109|(x110/x111))<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = -1;
	int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	int32_t x116 = -89139360;
	static volatile int32_t t26 = 52;

	t26 = ((x113|(x114/x115))<=x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -613;
	int64_t x118 = 2169741064382LL;
	volatile int8_t x119 = INT8_MAX;

	t27 = ((x117|(x118/x119))<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	volatile int16_t x123 = -6505;
	volatile uint64_t x124 = 3448347118637LLU;
	volatile int32_t t28 = 1;

	t28 = ((x121|(x122/x123))<=x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 21U;
	int64_t x127 = -1LL;
	int8_t x128 = INT8_MIN;

	t29 = ((x125|(x126/x127))<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x130 = UINT32_MAX;
	static int16_t x131 = INT16_MIN;
	int32_t t30 = -1146;

	t30 = ((x129|(x130/x131))<=x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -25;
	static int16_t x134 = 15852;
	uint8_t x135 = 111U;
	static uint64_t x136 = 6088LLU;
	volatile int32_t t31 = 18;

	t31 = ((x133|(x134/x135))<=x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x142 = -12260;
	static int32_t x143 = -1;
	volatile int32_t t32 = -983;

	t32 = ((x141|(x142/x143))<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MIN;
	static int32_t x146 = -1;
	static uint64_t x147 = UINT64_MAX;
	int16_t x148 = -1;
	volatile int32_t t33 = -4;

	t33 = ((x145|(x146/x147))<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x149 = 43U;
	uint64_t x150 = 1252644LLU;
	volatile uint8_t x152 = 19U;
	int32_t t34 = 126;

	t34 = ((x149|(x150/x151))<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t35 = -62950523;

	t35 = ((x153|(x154/x155))<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = UINT64_MAX;
	int32_t x158 = -21;
	volatile int8_t x159 = INT8_MAX;
	int16_t x160 = -1;
	int32_t t36 = 455;

	t36 = ((x157|(x158/x159))<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x162 = UINT8_MAX;
	uint64_t x163 = 5951626946433993LLU;
	uint32_t x164 = UINT32_MAX;
	static int32_t t37 = -24293;

	t37 = ((x161|(x162/x163))<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = -1;
	uint32_t x167 = 13995U;
	static int16_t x168 = INT16_MAX;
	volatile int32_t t38 = 2;

	t38 = ((x165|(x166/x167))<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x169 = 25;
	volatile uint8_t x170 = 120U;
	int32_t x171 = INT32_MIN;
	static volatile int32_t t39 = -90;

	t39 = ((x169|(x170/x171))<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = -141;
	volatile int8_t x174 = -1;
	volatile int16_t x175 = INT16_MAX;
	int64_t x176 = INT64_MAX;
	static volatile int32_t t40 = 59;

	t40 = ((x173|(x174/x175))<=x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 0U;
	uint16_t x178 = UINT16_MAX;
	int32_t x179 = 122;
	int8_t x180 = -1;
	static volatile int32_t t41 = -14010;

	t41 = ((x177|(x178/x179))<=x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -1;
	int8_t x182 = 1;
	volatile uint16_t x183 = 1708U;
	volatile int32_t t42 = -87707;

	t42 = ((x181|(x182/x183))<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x185 = -1;
	uint32_t x186 = 77U;
	uint8_t x188 = 10U;

	t43 = ((x185|(x186/x187))<=x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = 6018480;
	uint8_t x190 = UINT8_MAX;
	static uint64_t x191 = 413326299684985888LLU;
	uint32_t x192 = UINT32_MAX;

	t44 = ((x189|(x190/x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = 1;
	int16_t x194 = -1;
	int32_t x195 = INT32_MIN;
	int64_t x196 = -1LL;
	volatile int32_t t45 = -621073784;

	t45 = ((x193|(x194/x195))<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	int16_t x200 = 250;
	int32_t t46 = -17196419;

	t46 = ((x197|(x198/x199))<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x203 = INT32_MAX;
	int16_t x204 = INT16_MAX;

	t47 = ((x201|(x202/x203))<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x205 = 3U;
	volatile int64_t x207 = -1LL;
	int32_t x208 = INT32_MAX;
	volatile int32_t t48 = 201920;

	t48 = ((x205|(x206/x207))<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MIN;
	int32_t t49 = -4;

	t49 = ((x209|(x210/x211))<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	volatile int16_t x214 = INT16_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t50 = -1555691;

	t50 = ((x213|(x214/x215))<=x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MAX;
	uint8_t x218 = 0U;
	int8_t x219 = INT8_MIN;
	int64_t x220 = 980762636LL;
	volatile int32_t t51 = 3198;

	t51 = ((x217|(x218/x219))<=x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	static uint64_t x224 = 163058158752041509LLU;
	volatile int32_t t52 = 8516736;

	t52 = ((x221|(x222/x223))<=x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x225 = 30U;
	int16_t x226 = INT16_MIN;
	uint64_t x227 = 1022397040078752453LLU;
	uint32_t x228 = 142U;
	int32_t t53 = 274513955;

	t53 = ((x225|(x226/x227))<=x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x229 = 7534786581643808603LLU;
	volatile uint64_t x231 = 698575395LLU;
	uint16_t x232 = UINT16_MAX;
	int32_t t54 = -1659;

	t54 = ((x229|(x230/x231))<=x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = 2942747502LLU;
	int8_t x234 = INT8_MAX;
	static int16_t x235 = INT16_MAX;
	volatile uint64_t x236 = UINT64_MAX;

	t55 = ((x233|(x234/x235))<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x238 = INT64_MAX;
	volatile int16_t x239 = -12893;
	volatile uint8_t x240 = 4U;

	t56 = ((x237|(x238/x239))<=x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x242 = -41714406164LL;
	uint16_t x243 = UINT16_MAX;
	int16_t x244 = -385;

	t57 = ((x241|(x242/x243))<=x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x246 = UINT32_MAX;
	volatile int16_t x247 = 1;
	int32_t x248 = INT32_MIN;

	t58 = ((x245|(x246/x247))<=x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 68U;
	static int8_t x250 = 1;
	uint8_t x251 = 19U;
	int32_t t59 = -468;

	t59 = ((x249|(x250/x251))<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MAX;
	uint32_t x254 = 469731U;
	int32_t x255 = 72;
	int16_t x256 = -1;

	t60 = ((x253|(x254/x255))<=x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 2598629141745583811LLU;
	uint64_t x258 = 71519875LLU;
	static uint16_t x260 = UINT16_MAX;
	volatile int32_t t61 = 6112;

	t61 = ((x257|(x258/x259))<=x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x261 = 716U;
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MAX;
	volatile int64_t x264 = -1LL;
	int32_t t62 = 1;

	t62 = ((x261|(x262/x263))<=x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x270 = 17258;
	static volatile uint64_t x271 = 2311LLU;
	int32_t x272 = INT32_MIN;
	volatile int32_t t63 = 9175;

	t63 = ((x269|(x270/x271))<=x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MAX;
	uint8_t x274 = 18U;
	uint64_t x275 = 119092853LLU;
	static uint16_t x276 = UINT16_MAX;
	volatile int32_t t64 = 3;

	t64 = ((x273|(x274/x275))<=x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = INT8_MAX;
	int8_t x280 = 46;
	static volatile int32_t t65 = -11;

	t65 = ((x277|(x278/x279))<=x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = 309769078LLU;
	volatile uint16_t x282 = 12U;
	static uint32_t x284 = UINT32_MAX;
	volatile int32_t t66 = 370616;

	t66 = ((x281|(x282/x283))<=x284);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x286 = 4738975;
	int16_t x287 = INT16_MAX;
	uint16_t x288 = 10780U;
	int32_t t67 = 299;

	t67 = ((x285|(x286/x287))<=x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = -1;
	volatile uint8_t x292 = 7U;
	volatile int32_t t68 = -1409132;

	t68 = ((x289|(x290/x291))<=x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = 4;
	volatile uint32_t x294 = UINT32_MAX;
	int8_t x295 = -2;
	static uint32_t x296 = 33206323U;
	int32_t t69 = -16;

	t69 = ((x293|(x294/x295))<=x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MAX;
	uint8_t x298 = UINT8_MAX;
	int16_t x300 = INT16_MAX;

	t70 = ((x297|(x298/x299))<=x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int32_t x303 = -2;
	int32_t x304 = INT32_MIN;
	volatile int32_t t71 = 33614;

	t71 = ((x301|(x302/x303))<=x304);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x305 = INT8_MIN;
	static volatile uint64_t x306 = UINT64_MAX;
	volatile int32_t t72 = 1;

	t72 = ((x305|(x306/x307))<=x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = UINT64_MAX;
	int32_t x310 = INT32_MAX;
	uint32_t x311 = 699U;
	uint8_t x312 = 5U;
	volatile int32_t t73 = 1047768811;

	t73 = ((x309|(x310/x311))<=x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = -979;
	int64_t x314 = -4090481922135692240LL;
	int32_t x315 = INT32_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t74 = 40;

	t74 = ((x313|(x314/x315))<=x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = 83;
	int64_t x319 = 119177950LL;
	volatile int8_t x320 = 2;
	int32_t t75 = 0;

	t75 = ((x317|(x318/x319))<=x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x326 = -1LL;
	uint16_t x327 = 1835U;

	t76 = ((x325|(x326/x327))<=x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = -18045485851276LL;
	volatile uint32_t x330 = UINT32_MAX;
	uint64_t x332 = 15512472LLU;
	volatile int32_t t77 = -138402129;

	t77 = ((x329|(x330/x331))<=x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x333 = -1;
	uint32_t x334 = 60140370U;
	static int16_t x335 = -1;
	uint64_t x336 = 345470859375894LLU;
	static int32_t t78 = 126329;

	t78 = ((x333|(x334/x335))<=x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = 0U;
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 3U;

	t79 = ((x337|(x338/x339))<=x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = -1;
	static int64_t x343 = INT64_MIN;
	uint32_t x344 = UINT32_MAX;

	t80 = ((x341|(x342/x343))<=x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = -144089548;
	static volatile int16_t x347 = INT16_MIN;
	volatile uint64_t x348 = 11LLU;

	t81 = ((x345|(x346/x347))<=x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = -1;
	static volatile uint32_t x350 = 2091486U;
	int8_t x351 = -1;
	volatile uint64_t x352 = 141347012630711LLU;
	int32_t t82 = 38;

	t82 = ((x349|(x350/x351))<=x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = INT8_MAX;
	uint64_t x354 = 37841LLU;
	static int32_t x355 = -2032;
	static volatile uint8_t x356 = UINT8_MAX;

	t83 = ((x353|(x354/x355))<=x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = -58906508377281LL;
	int8_t x358 = INT8_MIN;
	uint16_t x359 = 1U;
	int8_t x360 = -1;
	volatile int32_t t84 = -1;

	t84 = ((x357|(x358/x359))<=x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x361 = INT32_MIN;
	static uint8_t x363 = UINT8_MAX;
	int32_t t85 = -55779;

	t85 = ((x361|(x362/x363))<=x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = -2668;
	static volatile int16_t x366 = INT16_MAX;
	int8_t x367 = -1;
	int16_t x368 = 0;
	int32_t t86 = -6190;

	t86 = ((x365|(x366/x367))<=x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	volatile int32_t x372 = INT32_MIN;

	t87 = ((x369|(x370/x371))<=x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x374 = 7LLU;
	uint8_t x375 = 7U;
	int32_t x376 = 493;
	int32_t t88 = -333864;

	t88 = ((x373|(x374/x375))<=x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x378 = UINT8_MAX;
	volatile int16_t x380 = -103;
	static int32_t t89 = 1698844;

	t89 = ((x377|(x378/x379))<=x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = 20028547973931219LLU;
	volatile uint8_t x383 = UINT8_MAX;
	uint64_t x384 = 419629172640LLU;
	int32_t t90 = 0;

	t90 = ((x381|(x382/x383))<=x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = INT16_MAX;
	static uint16_t x386 = 3655U;
	uint16_t x387 = 23707U;
	int64_t x388 = INT64_MIN;
	volatile int32_t t91 = 92;

	t91 = ((x385|(x386/x387))<=x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MAX;
	int32_t x390 = 223;
	uint8_t x391 = UINT8_MAX;
	volatile int32_t x392 = INT32_MIN;
	int32_t t92 = 2366885;

	t92 = ((x389|(x390/x391))<=x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x394 = 1755795839U;
	uint16_t x395 = 3U;
	uint64_t x396 = 1122839286022330LLU;
	int32_t t93 = -13564464;

	t93 = ((x393|(x394/x395))<=x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = INT64_MIN;
	static volatile int16_t x399 = INT16_MAX;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t94 = 2;

	t94 = ((x397|(x398/x399))<=x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	uint16_t x402 = UINT16_MAX;
	volatile uint64_t x403 = 2344860718LLU;
	volatile int16_t x404 = INT16_MIN;
	int32_t t95 = 7535;

	t95 = ((x401|(x402/x403))<=x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x405 = -7;
	uint8_t x406 = 68U;
	volatile int16_t x407 = INT16_MAX;
	static volatile uint8_t x408 = UINT8_MAX;
	static volatile int32_t t96 = 2;

	t96 = ((x405|(x406/x407))<=x408);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 13U;
	volatile int64_t x410 = -1LL;
	static volatile uint32_t x412 = UINT32_MAX;
	volatile int32_t t97 = 9325348;

	t97 = ((x409|(x410/x411))<=x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x413 = -1;
	int8_t x414 = INT8_MIN;
	uint16_t x415 = UINT16_MAX;
	int32_t t98 = 402;

	t98 = ((x413|(x414/x415))<=x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x417 = INT8_MAX;
	static int8_t x418 = INT8_MIN;
	int8_t x420 = 1;

	t99 = ((x417|(x418/x419))<=x420);

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

