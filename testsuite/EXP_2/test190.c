#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 12U;
int64_t x9 = INT64_MIN;
uint16_t x20 = UINT16_MAX;
int32_t t4 = -4;
static int8_t x27 = -29;
uint32_t x31 = UINT32_MAX;
uint8_t x32 = 15U;
static volatile uint64_t x35 = UINT64_MAX;
int32_t t7 = 1732158;
int32_t t8 = 6387114;
int16_t x46 = -1;
int32_t t12 = -1346716;
static uint64_t x70 = 2735746LLU;
volatile int32_t x72 = INT32_MIN;
static uint64_t x78 = 0LLU;
int32_t x81 = -420743;
uint64_t x95 = 1992514LLU;
static int16_t x97 = 1;
uint32_t x100 = 2059735U;
int64_t x104 = INT64_MIN;
int32_t t22 = -240405885;
int16_t x113 = INT16_MAX;
uint64_t x114 = UINT64_MAX;
int16_t x118 = 1;
volatile int8_t x119 = 3;
int64_t x129 = -46931LL;
int8_t x130 = 50;
int16_t x134 = -1;
uint8_t x140 = 5U;
uint16_t x153 = UINT16_MAX;
uint8_t x160 = 22U;
uint32_t x168 = UINT32_MAX;
int16_t x170 = -1;
static int64_t x175 = INT64_MAX;
uint8_t x178 = UINT8_MAX;
volatile int8_t x181 = INT8_MIN;
uint64_t x183 = UINT64_MAX;
int64_t x184 = 11083395794LL;
uint16_t x193 = UINT16_MAX;
static volatile uint32_t x194 = 478752555U;
int16_t x204 = INT16_MAX;
int8_t x207 = -1;
volatile int32_t t44 = -3199;
uint8_t x209 = UINT8_MAX;
int32_t x237 = -1;
volatile int8_t x239 = INT8_MAX;
int32_t t48 = 31523769;
int8_t x244 = INT8_MIN;
int8_t x259 = INT8_MIN;
int32_t x260 = INT32_MAX;
volatile int16_t x263 = INT16_MIN;
uint32_t x267 = 489U;
volatile uint32_t x268 = UINT32_MAX;
int8_t x284 = -1;
uint8_t x291 = 10U;
static volatile int32_t t62 = 84465;
volatile int64_t x313 = -1LL;
volatile int32_t t67 = -1714;
static int16_t x335 = 770;
int8_t x348 = INT8_MIN;
static int16_t x353 = -1;
int8_t x355 = INT8_MIN;
volatile int32_t t73 = 26770;
volatile uint64_t x366 = UINT64_MAX;
int8_t x373 = INT8_MAX;
uint16_t x375 = 7507U;
static int32_t x376 = INT32_MAX;
int16_t x379 = -1;
int32_t x384 = INT32_MIN;
static int32_t t77 = 6661;
volatile int8_t x391 = INT8_MIN;
volatile int32_t t81 = 8801;
int32_t x409 = -1;
int32_t t82 = 1;
static int64_t x421 = INT64_MAX;
uint64_t x422 = 619700459770LLU;
volatile uint64_t x424 = UINT64_MAX;
int32_t t85 = 518892856;
int32_t x425 = -1;
volatile int8_t x426 = 15;
int16_t x428 = 0;
int32_t t86 = -12;
uint8_t x435 = 12U;
static int16_t x438 = -19;
uint16_t x462 = UINT16_MAX;
int8_t x464 = INT8_MIN;
static volatile int16_t x465 = INT16_MIN;
volatile int32_t x466 = -1;
uint16_t x468 = 238U;
static volatile int32_t t92 = 13539049;
static int8_t x474 = INT8_MIN;
static int64_t x475 = -484938505276LL;
volatile int32_t t94 = 1893612;
int16_t x481 = -1;
int16_t x483 = INT16_MAX;
int32_t t96 = 1;
int32_t t97 = -219573;
volatile int64_t x501 = INT64_MIN;
static uint32_t x504 = 74592U;
volatile int32_t t98 = -1222501;
static uint32_t x511 = UINT32_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MAX;
	int8_t x3 = -1;
	int32_t x4 = 47457;
	volatile int32_t t0 = 90244860;

	t0 = ((x1-(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MAX;
	uint8_t x8 = 11U;
	int32_t t1 = 4729;

	t1 = ((x5-(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	int64_t x11 = INT64_MAX;
	uint64_t x12 = 9LLU;
	volatile int32_t t2 = -88091355;

	t2 = ((x9-(x10-x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	volatile int16_t x18 = INT16_MIN;
	uint64_t x19 = UINT64_MAX;
	int32_t t3 = -203658062;

	t3 = ((x17-(x18-x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	volatile int16_t x22 = INT16_MIN;
	uint16_t x23 = 298U;
	static int32_t x24 = -9016055;

	t4 = ((x21-(x22-x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	int16_t x26 = 0;
	int32_t x28 = 2491;
	int32_t t5 = 1954;

	t5 = ((x25-(x26-x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int16_t x30 = INT16_MIN;
	volatile int32_t t6 = -4964535;

	t6 = ((x29-(x30-x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	uint8_t x34 = UINT8_MAX;
	int16_t x36 = INT16_MIN;

	t7 = ((x33-(x34-x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	static uint32_t x39 = 10970U;
	volatile int16_t x40 = -12;

	t8 = ((x37-(x38-x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 140106368U;
	uint32_t x42 = 3972085U;
	volatile int8_t x43 = INT8_MIN;
	int8_t x44 = -34;
	static int32_t t9 = -1;

	t9 = ((x41-(x42-x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -2;
	uint32_t x47 = UINT32_MAX;
	int64_t x48 = -1LL;
	int32_t t10 = -3488042;

	t10 = ((x45-(x46-x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = -51781LL;
	int16_t x54 = 1;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = -1;
	volatile int32_t t11 = 0;

	t11 = ((x53-(x54-x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 5;
	uint32_t x58 = UINT32_MAX;
	uint64_t x59 = UINT64_MAX;
	uint8_t x60 = 47U;

	t12 = ((x57-(x58-x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 219711683LLU;
	int16_t x62 = INT16_MAX;
	uint32_t x63 = 1245U;
	int64_t x64 = 3849285761002551LL;
	int32_t t13 = 5790;

	t13 = ((x61-(x62-x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -37176;
	volatile uint64_t x66 = 837905LLU;
	int64_t x67 = -5590264878155LL;
	volatile uint32_t x68 = UINT32_MAX;
	static int32_t t14 = 58549;

	t14 = ((x65-(x66-x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = INT64_MIN;
	int16_t x71 = INT16_MIN;
	static volatile int32_t t15 = -1;

	t15 = ((x69-(x70-x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = INT16_MIN;
	int32_t x79 = 32805449;
	int16_t x80 = INT16_MIN;
	volatile int32_t t16 = 1002270709;

	t16 = ((x77-(x78-x79))==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x82 = 5002U;
	int32_t x83 = 261741431;
	int8_t x84 = INT8_MIN;
	volatile int32_t t17 = -3099347;

	t17 = ((x81-(x82-x83))==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x89 = 2LLU;
	int16_t x90 = 2015;
	uint16_t x91 = UINT16_MAX;
	static volatile uint64_t x92 = UINT64_MAX;
	static volatile int32_t t18 = 586316225;

	t18 = ((x89-(x90-x91))==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = 4402;
	uint16_t x94 = 29708U;
	int32_t x96 = -2824;
	int32_t t19 = -89;

	t19 = ((x93-(x94-x95))==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x98 = UINT16_MAX;
	uint16_t x99 = 14U;
	volatile int32_t t20 = 4374711;

	t20 = ((x97-(x98-x99))==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = -17;
	int8_t x102 = 1;
	int64_t x103 = -1LL;
	static int32_t t21 = -261677;

	t21 = ((x101-(x102-x103))==x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = 7U;
	uint8_t x110 = 1U;
	uint64_t x111 = 2679978144987LLU;
	int16_t x112 = INT16_MAX;

	t22 = ((x109-(x110-x111))==x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x115 = 527968994682973242LLU;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t23 = 0;

	t23 = ((x113-(x114-x115))==x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	int8_t x120 = 0;
	volatile int32_t t24 = 58;

	t24 = ((x117-(x118-x119))==x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x125 = UINT64_MAX;
	static volatile int8_t x126 = -1;
	int32_t x127 = 0;
	static uint32_t x128 = UINT32_MAX;
	volatile int32_t t25 = -429880469;

	t25 = ((x125-(x126-x127))==x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = -836LL;
	int32_t t26 = 274524;

	t26 = ((x129-(x130-x131))==x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x133 = 23U;
	static int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MIN;
	int32_t t27 = 663910;

	t27 = ((x133-(x134-x135))==x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x137 = INT32_MAX;
	uint64_t x138 = UINT64_MAX;
	static int8_t x139 = INT8_MIN;
	int32_t t28 = -621396;

	t28 = ((x137-(x138-x139))==x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = 173;
	int16_t x146 = INT16_MIN;
	int32_t x147 = -837;
	static uint32_t x148 = UINT32_MAX;
	volatile int32_t t29 = 29223;

	t29 = ((x145-(x146-x147))==x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -3LL;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = UINT8_MAX;
	static uint16_t x152 = 1151U;
	static volatile int32_t t30 = -1257717;

	t30 = ((x149-(x150-x151))==x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x154 = -1;
	int16_t x155 = -4;
	int16_t x156 = INT16_MAX;
	int32_t t31 = 1;

	t31 = ((x153-(x154-x155))==x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MIN;
	uint64_t x158 = UINT64_MAX;
	volatile uint16_t x159 = UINT16_MAX;
	volatile int32_t t32 = -4011;

	t32 = ((x157-(x158-x159))==x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = INT32_MAX;
	uint64_t x162 = 339974627115287LLU;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = 4571597046526785LL;
	volatile int32_t t33 = 18;

	t33 = ((x161-(x162-x163))==x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x165 = 6LLU;
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MIN;
	int32_t t34 = -1874;

	t34 = ((x165-(x166-x167))==x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x169 = -22;
	int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MAX;
	int32_t t35 = -6236520;

	t35 = ((x169-(x170-x171))==x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 13U;
	int16_t x174 = INT16_MAX;
	uint32_t x176 = 5263U;
	static volatile int32_t t36 = 8735810;

	t36 = ((x173-(x174-x175))==x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = -1;
	uint32_t x179 = UINT32_MAX;
	static uint8_t x180 = UINT8_MAX;
	volatile int32_t t37 = -151;

	t37 = ((x177-(x178-x179))==x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x182 = INT32_MIN;
	static int32_t t38 = 464633578;

	t38 = ((x181-(x182-x183))==x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MAX;
	static int64_t x186 = INT64_MAX;
	int64_t x187 = 1353699909235756862LL;
	int32_t x188 = INT32_MAX;
	volatile int32_t t39 = 854053087;

	t39 = ((x185-(x186-x187))==x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x189 = 2U;
	volatile int8_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile int32_t t40 = -1;

	t40 = ((x189-(x190-x191))==x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t41 = 2;

	t41 = ((x193-(x194-x195))==x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = 1357717619563LLU;
	int8_t x198 = INT8_MAX;
	int32_t x199 = INT32_MAX;
	volatile int8_t x200 = INT8_MIN;
	int32_t t42 = -287194;

	t42 = ((x197-(x198-x199))==x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = -1LL;
	static int8_t x202 = -2;
	int16_t x203 = INT16_MIN;
	volatile int32_t t43 = -3;

	t43 = ((x201-(x202-x203))==x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x205 = 55605LLU;
	uint64_t x206 = UINT64_MAX;
	volatile int64_t x208 = -1034090446616044369LL;

	t44 = ((x205-(x206-x207))==x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x210 = UINT16_MAX;
	uint64_t x211 = UINT64_MAX;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t45 = 36849;

	t45 = ((x209-(x210-x211))==x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = -32;
	int32_t x219 = -318;
	uint64_t x220 = 7499584295852LLU;
	volatile int32_t t46 = 964298890;

	t46 = ((x217-(x218-x219))==x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = INT32_MIN;
	static int64_t x222 = 4996680189329LL;
	int8_t x223 = INT8_MIN;
	static uint8_t x224 = 115U;
	int32_t t47 = 74126;

	t47 = ((x221-(x222-x223))==x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x238 = 5153546U;
	volatile int64_t x240 = 1616829LL;

	t48 = ((x237-(x238-x239))==x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x241 = 960848U;
	int8_t x242 = INT8_MAX;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t t49 = -5173252;

	t49 = ((x241-(x242-x243))==x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x245 = 206758;
	uint32_t x246 = 2342973U;
	int32_t x247 = INT32_MIN;
	volatile int64_t x248 = INT64_MIN;
	volatile int32_t t50 = -1;

	t50 = ((x245-(x246-x247))==x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MAX;
	int64_t x250 = -16595709025LL;
	int64_t x251 = 3502113255096LL;
	int16_t x252 = -1;
	volatile int32_t t51 = -5;

	t51 = ((x249-(x250-x251))==x252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = -1;
	int8_t x255 = INT8_MAX;
	uint16_t x256 = 16238U;
	static int32_t t52 = -188066;

	t52 = ((x253-(x254-x255))==x256);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MAX;
	uint8_t x258 = 0U;
	static volatile int32_t t53 = 3467;

	t53 = ((x257-(x258-x259))==x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x261 = -249;
	uint32_t x262 = 95681224U;
	static int32_t x264 = 363;
	int32_t t54 = 3;

	t54 = ((x261-(x262-x263))==x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = UINT16_MAX;
	volatile uint64_t x266 = 26LLU;
	volatile int32_t t55 = 0;

	t55 = ((x265-(x266-x267))==x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x277 = INT64_MAX;
	uint64_t x278 = UINT64_MAX;
	volatile int32_t x279 = -1;
	uint64_t x280 = 0LLU;
	volatile int32_t t56 = 13;

	t56 = ((x277-(x278-x279))==x280);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = INT8_MIN;
	static int32_t x282 = INT32_MIN;
	int8_t x283 = -1;
	volatile int32_t t57 = -58453251;

	t57 = ((x281-(x282-x283))==x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MIN;
	int8_t x287 = -1;
	int16_t x288 = -1;
	int32_t t58 = -14;

	t58 = ((x285-(x286-x287))==x288);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = INT16_MIN;
	volatile int16_t x290 = INT16_MIN;
	volatile uint32_t x292 = UINT32_MAX;
	volatile int32_t t59 = 56921423;

	t59 = ((x289-(x290-x291))==x292);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x297 = UINT64_MAX;
	static int32_t x298 = -1;
	uint16_t x299 = 5U;
	static int64_t x300 = -1LL;
	int32_t t60 = 36657;

	t60 = ((x297-(x298-x299))==x300);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x301 = 28663U;
	int16_t x302 = INT16_MIN;
	static int32_t x303 = INT32_MIN;
	static uint64_t x304 = 10648482408831LLU;
	volatile int32_t t61 = 794;

	t61 = ((x301-(x302-x303))==x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x305 = 1;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MIN;
	int32_t x308 = INT32_MIN;

	t62 = ((x305-(x306-x307))==x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x309 = 666501LLU;
	volatile uint64_t x310 = 1331736337274LLU;
	int64_t x311 = 640760LL;
	int16_t x312 = INT16_MAX;
	int32_t t63 = 3560;

	t63 = ((x309-(x310-x311))==x312);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x314 = INT16_MAX;
	int16_t x315 = -1;
	volatile int8_t x316 = -1;
	int32_t t64 = 1;

	t64 = ((x313-(x314-x315))==x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = 933307450860004854LLU;
	static int8_t x319 = INT8_MAX;
	int8_t x320 = -1;
	volatile int32_t t65 = -23;

	t65 = ((x317-(x318-x319))==x320);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x321 = -4681;
	volatile int64_t x322 = -1LL;
	uint64_t x323 = 206573LLU;
	static volatile uint32_t x324 = 26269341U;
	int32_t t66 = 96;

	t66 = ((x321-(x322-x323))==x324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x329 = 2U;
	static volatile int32_t x330 = -372603979;
	uint8_t x331 = 11U;
	uint32_t x332 = 68451U;

	t67 = ((x329-(x330-x331))==x332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MIN;
	uint32_t x336 = UINT32_MAX;
	int32_t t68 = -4659854;

	t68 = ((x333-(x334-x335))==x336);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x337 = 28U;
	int8_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = 14U;
	volatile int32_t t69 = 7;

	t69 = ((x337-(x338-x339))==x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x341 = 30562941923LLU;
	int64_t x342 = -1LL;
	int16_t x343 = INT16_MIN;
	volatile int16_t x344 = INT16_MAX;
	int32_t t70 = -11941;

	t70 = ((x341-(x342-x343))==x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x345 = 35037LL;
	static int32_t x346 = -85431220;
	int16_t x347 = -13386;
	volatile int32_t t71 = 52561772;

	t71 = ((x345-(x346-x347))==x348);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x354 = 48646631957993731LLU;
	uint16_t x356 = 614U;
	volatile int32_t t72 = 554;

	t72 = ((x353-(x354-x355))==x356);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x357 = UINT64_MAX;
	static volatile int8_t x358 = INT8_MIN;
	uint64_t x359 = 11895373550435LLU;
	static int8_t x360 = -1;

	t73 = ((x357-(x358-x359))==x360);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x367 = UINT8_MAX;
	static int64_t x368 = INT64_MIN;
	volatile int32_t t74 = 1;

	t74 = ((x365-(x366-x367))==x368);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x374 = -1;
	static volatile int32_t t75 = -2761;

	t75 = ((x373-(x374-x375))==x376);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x377 = INT16_MAX;
	static int8_t x378 = INT8_MIN;
	static volatile uint16_t x380 = 108U;
	int32_t t76 = -11;

	t76 = ((x377-(x378-x379))==x380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x381 = 1U;
	int32_t x382 = INT32_MIN;
	int8_t x383 = INT8_MIN;

	t77 = ((x381-(x382-x383))==x384);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x385 = -1;
	int8_t x386 = -7;
	volatile int64_t x387 = INT64_MIN;
	uint32_t x388 = UINT32_MAX;
	int32_t t78 = 15;

	t78 = ((x385-(x386-x387))==x388);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x389 = INT8_MIN;
	static uint8_t x390 = 4U;
	static uint64_t x392 = 255LLU;
	int32_t t79 = 1463904;

	t79 = ((x389-(x390-x391))==x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x393 = 87U;
	volatile uint64_t x394 = UINT64_MAX;
	volatile int32_t x395 = -632;
	int16_t x396 = INT16_MIN;
	int32_t t80 = 30;

	t80 = ((x393-(x394-x395))==x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x401 = UINT16_MAX;
	int64_t x402 = INT64_MAX;
	uint32_t x403 = 398U;
	volatile int64_t x404 = -212709257159245LL;

	t81 = ((x401-(x402-x403))==x404);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x410 = 54111100U;
	static int32_t x411 = INT32_MIN;
	volatile int64_t x412 = -1LL;

	t82 = ((x409-(x410-x411))==x412);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x413 = 9729;
	int16_t x414 = -2;
	int64_t x415 = INT64_MIN;
	volatile int8_t x416 = -28;
	volatile int32_t t83 = 58544350;

	t83 = ((x413-(x414-x415))==x416);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x417 = 99U;
	static uint32_t x418 = UINT32_MAX;
	volatile int16_t x419 = -1;
	uint8_t x420 = 1U;
	volatile int32_t t84 = 3282;

	t84 = ((x417-(x418-x419))==x420);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x423 = INT64_MAX;

	t85 = ((x421-(x422-x423))==x424);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x427 = -1;

	t86 = ((x425-(x426-x427))==x428);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x433 = INT32_MIN;
	int64_t x434 = 20721LL;
	int16_t x436 = INT16_MIN;
	int32_t t87 = 3137;

	t87 = ((x433-(x434-x435))==x436);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x437 = INT64_MAX;
	uint32_t x439 = 16U;
	volatile int32_t x440 = 41;
	int32_t t88 = 121297;

	t88 = ((x437-(x438-x439))==x440);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x453 = -2;
	volatile uint32_t x454 = 146517U;
	volatile int64_t x455 = 749LL;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t89 = 515;

	t89 = ((x453-(x454-x455))==x456);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x457 = -1;
	uint8_t x458 = 0U;
	int8_t x459 = -1;
	static int64_t x460 = INT64_MAX;
	int32_t t90 = 2074;

	t90 = ((x457-(x458-x459))==x460);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x461 = -1LL;
	int8_t x463 = 18;
	volatile int32_t t91 = 14;

	t91 = ((x461-(x462-x463))==x464);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x467 = -1;

	t92 = ((x465-(x466-x467))==x468);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x469 = 3137U;
	uint16_t x470 = 38U;
	int16_t x471 = -1016;
	volatile uint64_t x472 = UINT64_MAX;
	static int32_t t93 = 64413864;

	t93 = ((x469-(x470-x471))==x472);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x473 = 168LLU;
	int64_t x476 = INT64_MIN;

	t94 = ((x473-(x474-x475))==x476);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x482 = INT16_MIN;
	volatile uint16_t x484 = 23308U;
	int32_t t95 = -2062908;

	t95 = ((x481-(x482-x483))==x484);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x493 = INT32_MIN;
	uint16_t x494 = 0U;
	volatile uint8_t x495 = 15U;
	volatile int16_t x496 = INT16_MIN;

	t96 = ((x493-(x494-x495))==x496);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x497 = INT8_MIN;
	static int64_t x498 = -29LL;
	static volatile int64_t x499 = -1LL;
	volatile int16_t x500 = INT16_MIN;

	t97 = ((x497-(x498-x499))==x500);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x502 = -1;
	int64_t x503 = INT64_MAX;

	t98 = ((x501-(x502-x503))==x504);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x509 = INT16_MIN;
	static uint8_t x510 = UINT8_MAX;
	uint16_t x512 = 2U;
	static int32_t t99 = 29932;

	t99 = ((x509-(x510-x511))==x512);

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

