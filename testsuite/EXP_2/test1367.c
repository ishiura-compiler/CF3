#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
volatile uint64_t x6 = 8006916LLU;
int64_t x10 = INT64_MIN;
int64_t t2 = 0LL;
int32_t x14 = INT32_MIN;
static int16_t x28 = -3;
uint8_t x30 = 2U;
int32_t x31 = -1;
int64_t x32 = -2100672302127391077LL;
volatile int64_t t7 = 31016163994118LL;
int8_t x39 = -5;
uint32_t x42 = 12582362U;
volatile int32_t t9 = -63;
uint32_t x48 = UINT32_MAX;
uint32_t x49 = 1150267U;
int8_t x52 = 1;
uint32_t x57 = 4U;
static int8_t x58 = INT8_MIN;
static volatile int16_t x62 = INT16_MIN;
int16_t x64 = INT16_MIN;
volatile int8_t x65 = -1;
volatile int64_t x66 = -1LL;
volatile int64_t x75 = INT64_MAX;
static int32_t x81 = -1921;
uint64_t x83 = 962873179367171LLU;
static uint32_t x100 = UINT32_MAX;
volatile int32_t t23 = INT32_MAX;
volatile int32_t x107 = -1;
volatile uint16_t x108 = UINT16_MAX;
static int64_t x111 = -7397502961LL;
volatile int32_t t25 = -4341;
int32_t t28 = 61;
uint8_t x130 = 1U;
int8_t x133 = INT8_MAX;
uint16_t x134 = UINT16_MAX;
volatile int32_t x145 = -253;
uint8_t x151 = 69U;
volatile int32_t t32 = -5;
int16_t x153 = INT16_MIN;
volatile int32_t t34 = -55874641;
static volatile int8_t x166 = INT8_MAX;
uint32_t x168 = UINT32_MAX;
int64_t t37 = 17362LL;
static volatile int16_t x181 = 5697;
int16_t x186 = 1808;
volatile uint64_t x199 = UINT64_MAX;
int8_t x200 = INT8_MAX;
uint8_t x217 = 7U;
int32_t x219 = INT32_MAX;
uint64_t x225 = 5185984110LLU;
static volatile int8_t x238 = INT8_MIN;
uint8_t x256 = UINT8_MAX;
int32_t x262 = INT32_MAX;
volatile int32_t x265 = -4000653;
volatile uint32_t x266 = UINT32_MAX;
volatile int16_t x272 = INT16_MIN;
uint32_t x273 = UINT32_MAX;
volatile uint32_t x276 = UINT32_MAX;
uint32_t t57 = 6038U;
int32_t x301 = -1;
int16_t x303 = INT16_MAX;
int32_t t66 = 44412362;
uint32_t x325 = 24U;
uint32_t x327 = 5U;
uint32_t x333 = UINT32_MAX;
volatile int16_t x349 = INT16_MAX;
int32_t t76 = 1105;
volatile uint32_t t78 = 154U;
uint16_t x375 = 1044U;
uint64_t x378 = UINT64_MAX;
static int16_t x379 = INT16_MIN;
int8_t x382 = INT8_MIN;
static int32_t x388 = -1;
uint8_t x389 = 12U;
volatile int64_t x391 = INT64_MAX;
int16_t x397 = -7;
int8_t x400 = INT8_MIN;
volatile int64_t x411 = -161LL;
int32_t x412 = -1;
int16_t x416 = INT16_MIN;
uint64_t x422 = UINT64_MAX;
static int64_t x425 = -1LL;
int32_t x430 = INT32_MIN;
static volatile uint32_t x435 = UINT32_MAX;
uint16_t x441 = UINT16_MAX;
int16_t x444 = INT16_MIN;
static int64_t x445 = INT64_MAX;
static volatile int64_t x446 = INT64_MIN;
uint64_t t96 = 265LLU;
int32_t x452 = 529;
int8_t x453 = INT8_MIN;
int8_t x455 = 1;


void f0(void) {
	static uint32_t x2 = UINT32_MAX;
	uint32_t x3 = 25U;
	int16_t x4 = 233;
	static int32_t t0 = -22273100;

	t0 = ((x1-(x2<x3))-x4);

	if (t0 != -234) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 0;
	volatile uint64_t x7 = 59LLU;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 6649529U;

	t1 = ((x5-(x6<x7))-x8);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	volatile uint16_t x11 = 0U;
	int64_t x12 = -1LL;

	t2 = ((x9-(x10<x11))-x12);

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int8_t x15 = -1;
	int16_t x16 = 473;
	volatile int64_t t3 = 184901816LL;

	t3 = ((x13-(x14<x15))-x16);

	if (t3 != -475LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static uint16_t x18 = 29434U;
	int32_t x19 = INT32_MAX;
	uint64_t x20 = 2850777948946809813LLU;
	uint64_t t4 = 6163LLU;

	t4 = ((x17-(x18<x19))-x20);

	if (t4 != 15595966124762709034LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 312799585;
	static int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MAX;
	int64_t x24 = -216792930602LL;
	static volatile int64_t t5 = -101211003531879611LL;

	t5 = ((x21-(x22<x23))-x24);

	if (t5 != 217105730186LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static uint8_t x26 = 0U;
	int32_t x27 = 0;
	volatile int64_t t6 = 275127847LL;

	t6 = ((x25-(x26<x27))-x28);

	if (t6 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;

	t7 = ((x29-(x30<x31))-x32);

	if (t7 != 2100672306422358372LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MIN;
	uint32_t x38 = 106390U;
	int64_t x40 = -1LL;
	int64_t t8 = 9187574895398LL;

	t8 = ((x37-(x38<x39))-x40);

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = 225;
	static int16_t x43 = INT16_MAX;
	int32_t x44 = -2;

	t9 = ((x41-(x42<x43))-x44);

	if (t9 != 227) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x45 = 0;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MAX;
	volatile uint32_t t10 = 2021400981U;

	t10 = ((x45-(x46<x47))-x48);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = 3851U;
	static volatile uint16_t x51 = 465U;
	uint32_t t11 = 57U;

	t11 = ((x49-(x50<x51))-x52);

	if (t11 != 1150266U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	int16_t x54 = INT16_MAX;
	int32_t x55 = -67319;
	int32_t x56 = -14513;
	int32_t t12 = -42;

	t12 = ((x53-(x54<x55))-x56);

	if (t12 != 14512) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x59 = INT8_MAX;
	int8_t x60 = 2;
	volatile uint32_t t13 = 30U;

	t13 = ((x57-(x58<x59))-x60);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 157;
	static uint32_t x63 = 2U;
	volatile int32_t t14 = -7;

	t14 = ((x61-(x62<x63))-x64);

	if (t14 != 32925) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x67 = UINT8_MAX;
	uint8_t x68 = 7U;
	volatile int32_t t15 = 13;

	t15 = ((x65-(x66<x67))-x68);

	if (t15 != -9) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 25LLU;
	static uint16_t x74 = 2U;
	int8_t x76 = INT8_MIN;
	uint64_t t16 = 187285135833298145LLU;

	t16 = ((x73-(x74<x75))-x76);

	if (t16 != 152LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 118U;
	int32_t x78 = -1;
	int64_t x79 = -1LL;
	static int8_t x80 = INT8_MIN;
	int32_t t17 = 28508;

	t17 = ((x77-(x78<x79))-x80);

	if (t17 != 246) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x82 = INT16_MIN;
	uint32_t x84 = 2240588U;
	uint32_t t18 = 7874727U;

	t18 = ((x81-(x82<x83))-x84);

	if (t18 != 4292724787U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = 30;
	uint64_t x86 = 6753636LLU;
	uint8_t x87 = UINT8_MAX;
	uint64_t x88 = 260077528499LLU;
	uint64_t t19 = 15175089433LLU;

	t19 = ((x85-(x86<x87))-x88);

	if (t19 != 18446743813632023147LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = 3;
	static int32_t x90 = INT32_MIN;
	uint8_t x91 = UINT8_MAX;
	int32_t x92 = -1;
	int32_t t20 = 27262;

	t20 = ((x89-(x90<x91))-x92);

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x93 = INT8_MIN;
	int32_t x94 = -678;
	volatile uint8_t x95 = UINT8_MAX;
	uint16_t x96 = 3048U;
	volatile int32_t t21 = 128470776;

	t21 = ((x93-(x94<x95))-x96);

	if (t21 != -3177) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	uint8_t x98 = 2U;
	uint8_t x99 = UINT8_MAX;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = ((x97-(x98<x99))-x100);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MAX;
	static int8_t x102 = INT8_MIN;
	static uint8_t x103 = 2U;
	static volatile int16_t x104 = -1;

	t23 = ((x101-(x102<x103))-x104);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 126680485U;
	volatile uint16_t x106 = 374U;
	volatile uint32_t t24 = 318983U;

	t24 = ((x105-(x106<x107))-x108);

	if (t24 != 126614950U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 280;
	uint16_t x110 = 414U;
	static int8_t x112 = INT8_MAX;

	t25 = ((x109-(x110<x111))-x112);

	if (t25 != 153) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x113 = 4U;
	int16_t x114 = INT16_MAX;
	uint32_t x115 = 125783543U;
	volatile int8_t x116 = INT8_MAX;
	static volatile int32_t t26 = 9926616;

	t26 = ((x113-(x114<x115))-x116);

	if (t26 != -124) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = 2;
	volatile uint32_t x118 = 28676229U;
	uint16_t x119 = UINT16_MAX;
	uint16_t x120 = 28U;
	volatile int32_t t27 = -1484087;

	t27 = ((x117-(x118<x119))-x120);

	if (t27 != -26) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	volatile int16_t x126 = -1;
	uint64_t x127 = 44693672LLU;
	int8_t x128 = 7;

	t28 = ((x125-(x126<x127))-x128);

	if (t28 != -135) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 2U;
	volatile uint16_t x131 = 5U;
	int16_t x132 = INT16_MAX;
	volatile int32_t t29 = 13;

	t29 = ((x129-(x130<x131))-x132);

	if (t29 != -32766) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x135 = 255859U;
	int8_t x136 = INT8_MIN;
	volatile int32_t t30 = 12;

	t30 = ((x133-(x134<x135))-x136);

	if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x146 = UINT64_MAX;
	volatile int64_t x147 = -245055793865573LL;
	int16_t x148 = -1;
	volatile int32_t t31 = -5418136;

	t31 = ((x145-(x146<x147))-x148);

	if (t31 != -252) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x149 = 0U;
	uint16_t x150 = UINT16_MAX;
	int8_t x152 = INT8_MIN;

	t32 = ((x149-(x150<x151))-x152);

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x154 = INT16_MIN;
	int32_t x155 = 7577;
	int32_t x156 = -1;
	volatile int32_t t33 = -4965;

	t33 = ((x153-(x154<x155))-x156);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 3U;
	int8_t x159 = 55;
	volatile int32_t x160 = 3;

	t34 = ((x157-(x158<x159))-x160);

	if (t34 != 251) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x161 = 0U;
	int32_t x162 = INT32_MIN;
	volatile int64_t x163 = INT64_MIN;
	static int32_t x164 = -883020;
	volatile int32_t t35 = -48382971;

	t35 = ((x161-(x162<x163))-x164);

	if (t35 != 883020) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = -4;
	int32_t x167 = INT32_MIN;
	uint32_t t36 = 223946994U;

	t36 = ((x165-(x166<x167))-x168);

	if (t36 != 4294967293U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x173 = -1;
	uint16_t x174 = 210U;
	static volatile int64_t x175 = 37994093263933LL;
	static int64_t x176 = 12009406079LL;

	t37 = ((x173-(x174<x175))-x176);

	if (t37 != -12009406081LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x177 = -31020;
	int64_t x178 = -8275284291LL;
	uint32_t x179 = 7831007U;
	uint8_t x180 = UINT8_MAX;
	int32_t t38 = -1763;

	t38 = ((x177-(x178<x179))-x180);

	if (t38 != -31276) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x182 = 530296900U;
	volatile int16_t x183 = -1;
	int32_t x184 = -2458243;
	volatile int32_t t39 = -1;

	t39 = ((x181-(x182<x183))-x184);

	if (t39 != 2463939) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = 215U;
	volatile int64_t x187 = 14521546722808LL;
	volatile int32_t x188 = 7;
	int32_t t40 = -56;

	t40 = ((x185-(x186<x187))-x188);

	if (t40 != 207) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x197 = -1;
	int32_t x198 = INT32_MIN;
	static volatile int32_t t41 = -3837;

	t41 = ((x197-(x198<x199))-x200);

	if (t41 != -129) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x201 = INT32_MAX;
	volatile uint32_t x202 = 17U;
	uint8_t x203 = UINT8_MAX;
	static int64_t x204 = -1LL;
	volatile int64_t t42 = -71132LL;

	t42 = ((x201-(x202<x203))-x204);

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x209 = 1456U;
	static int8_t x210 = INT8_MAX;
	static int32_t x211 = 18;
	int32_t x212 = -1;
	int32_t t43 = -442412860;

	t43 = ((x209-(x210<x211))-x212);

	if (t43 != 1457) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x213 = 0;
	uint32_t x214 = 11961972U;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;
	int64_t t44 = INT64_MAX;

	t44 = ((x213-(x214<x215))-x216);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x218 = -1;
	int32_t x220 = 515952;
	int32_t t45 = 3019580;

	t45 = ((x217-(x218<x219))-x220);

	if (t45 != -515946) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = INT64_MIN;
	volatile uint64_t x222 = 2194839541852476LLU;
	uint8_t x223 = 12U;
	int64_t x224 = INT64_MIN;
	int64_t t46 = -7488240244LL;

	t46 = ((x221-(x222<x223))-x224);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x226 = -1;
	volatile int8_t x227 = 10;
	int8_t x228 = -1;
	uint64_t t47 = 1918493556LLU;

	t47 = ((x225-(x226<x227))-x228);

	if (t47 != 5185984110LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x229 = 5753644690348122LLU;
	uint64_t x230 = 34674239LLU;
	int8_t x231 = -1;
	static int32_t x232 = 3;
	uint64_t t48 = 491002163LLU;

	t48 = ((x229-(x230<x231))-x232);

	if (t48 != 5753644690348118LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MAX;
	volatile int32_t x239 = INT32_MAX;
	int8_t x240 = INT8_MIN;
	static int32_t t49 = -160150;

	t49 = ((x237-(x238<x239))-x240);

	if (t49 != 254) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x241 = 16354910252256617LL;
	int16_t x242 = 330;
	int64_t x243 = INT64_MIN;
	int32_t x244 = -1;
	static volatile int64_t t50 = -139566193LL;

	t50 = ((x241-(x242<x243))-x244);

	if (t50 != 16354910252256618LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = 181;
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;
	int32_t x248 = 1;
	int32_t t51 = 1176128;

	t51 = ((x245-(x246<x247))-x248);

	if (t51 != 179) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x249 = INT8_MIN;
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;
	volatile int8_t x252 = INT8_MAX;
	static volatile int32_t t52 = -1411;

	t52 = ((x249-(x250<x251))-x252);

	if (t52 != -255) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x253 = INT16_MIN;
	volatile int8_t x254 = INT8_MIN;
	uint64_t x255 = UINT64_MAX;
	int32_t t53 = 99;

	t53 = ((x253-(x254<x255))-x256);

	if (t53 != -33024) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x261 = 9U;
	int32_t x263 = INT32_MIN;
	volatile int32_t x264 = INT32_MIN;
	uint32_t t54 = 11396U;

	t54 = ((x261-(x262<x263))-x264);

	if (t54 != 2147483657U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x267 = INT32_MIN;
	volatile uint16_t x268 = 870U;
	int32_t t55 = -6593;

	t55 = ((x265-(x266<x267))-x268);

	if (t55 != -4001523) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MIN;
	int16_t x271 = -335;
	int32_t t56 = -31505;

	t56 = ((x269-(x270<x271))-x272);

	if (t56 != 33022) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = INT16_MIN;

	t57 = ((x273-(x274<x275))-x276);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = 47;
	static volatile int16_t x278 = INT16_MAX;
	volatile int16_t x279 = INT16_MAX;
	uint32_t x280 = 154794964U;
	static uint32_t t58 = 124691338U;

	t58 = ((x277-(x278<x279))-x280);

	if (t58 != 4140172379U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = 1;
	int8_t x283 = -1;
	uint32_t x284 = UINT32_MAX;
	static volatile uint32_t t59 = 328029U;

	t59 = ((x281-(x282<x283))-x284);

	if (t59 != 4294967169U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x285 = UINT32_MAX;
	uint8_t x286 = 12U;
	int8_t x287 = INT8_MAX;
	uint32_t x288 = UINT32_MAX;
	uint32_t t60 = UINT32_MAX;

	t60 = ((x285-(x286<x287))-x288);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x289 = 17314U;
	uint8_t x290 = UINT8_MAX;
	volatile uint32_t x291 = 834864U;
	volatile int8_t x292 = INT8_MIN;
	int32_t t61 = -10874;

	t61 = ((x289-(x290<x291))-x292);

	if (t61 != 17441) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x297 = UINT64_MAX;
	static uint8_t x298 = 14U;
	int16_t x299 = INT16_MIN;
	int32_t x300 = -1;
	uint64_t t62 = 35494446603808288LLU;

	t62 = ((x297-(x298<x299))-x300);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x302 = INT64_MAX;
	int8_t x304 = -29;
	volatile int32_t t63 = -8038;

	t63 = ((x301-(x302<x303))-x304);

	if (t63 != 28) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -1;
	int16_t x306 = INT16_MIN;
	volatile uint64_t x307 = 236320915LLU;
	int8_t x308 = -1;
	static volatile int32_t t64 = 197338364;

	t64 = ((x305-(x306<x307))-x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x309 = -3801;
	int16_t x310 = INT16_MIN;
	int64_t x311 = -1LL;
	uint8_t x312 = UINT8_MAX;
	static volatile int32_t t65 = 65;

	t65 = ((x309-(x310<x311))-x312);

	if (t65 != -4057) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x313 = -1;
	uint64_t x314 = 52693108230585704LLU;
	volatile uint8_t x315 = UINT8_MAX;
	volatile uint16_t x316 = UINT16_MAX;

	t66 = ((x313-(x314<x315))-x316);

	if (t66 != -65536) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = -62044351;
	volatile uint8_t x318 = 1U;
	uint16_t x319 = UINT16_MAX;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t67 = 6;

	t67 = ((x317-(x318<x319))-x320);

	if (t67 != -62044607) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x321 = 2543;
	static uint16_t x322 = 28940U;
	int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t68 = -15;

	t68 = ((x321-(x322<x323))-x324);

	if (t68 != 2670) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x326 = 2U;
	static int32_t x328 = -36;
	uint32_t t69 = 1052269394U;

	t69 = ((x325-(x326<x327))-x328);

	if (t69 != 59U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = INT8_MIN;
	static int8_t x330 = -1;
	static int32_t x331 = INT32_MAX;
	int32_t x332 = 6507718;
	volatile int32_t t70 = -11;

	t70 = ((x329-(x330<x331))-x332);

	if (t70 != -6507847) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x334 = 185529LL;
	uint32_t x335 = 4499424U;
	volatile int8_t x336 = -1;
	uint32_t t71 = UINT32_MAX;

	t71 = ((x333-(x334<x335))-x336);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x341 = 26223U;
	volatile int8_t x342 = INT8_MIN;
	int64_t x343 = -1LL;
	volatile int64_t x344 = INT64_MAX;
	volatile int64_t t72 = -65823525447LL;

	t72 = ((x341-(x342<x343))-x344);

	if (t72 != -9223372036854749585LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x345 = INT64_MAX;
	uint32_t x346 = 20682U;
	int32_t x347 = INT32_MIN;
	volatile uint8_t x348 = UINT8_MAX;
	volatile int64_t t73 = 0LL;

	t73 = ((x345-(x346<x347))-x348);

	if (t73 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x350 = -1;
	static uint32_t x351 = UINT32_MAX;
	static uint8_t x352 = 1U;
	int32_t t74 = -1777;

	t74 = ((x349-(x350<x351))-x352);

	if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = 0;
	uint32_t x355 = UINT32_MAX;
	static int16_t x356 = -86;
	int32_t t75 = 894;

	t75 = ((x353-(x354<x355))-x356);

	if (t75 != -43) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = INT8_MIN;
	uint8_t x358 = 9U;
	int64_t x359 = -1LL;
	uint16_t x360 = 106U;

	t76 = ((x357-(x358<x359))-x360);

	if (t76 != -234) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = INT8_MIN;
	static uint64_t x362 = 9455100245LLU;
	volatile int16_t x363 = INT16_MIN;
	static int32_t x364 = -1;
	int32_t t77 = 0;

	t77 = ((x361-(x362<x363))-x364);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x365 = INT8_MIN;
	static uint16_t x366 = 29U;
	int8_t x367 = 1;
	uint32_t x368 = 313204737U;

	t78 = ((x365-(x366<x367))-x368);

	if (t78 != 3981762431U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = UINT64_MAX;
	static int16_t x370 = INT16_MIN;
	volatile int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t79 = 22973113721107LLU;

	t79 = ((x369-(x370<x371))-x372);

	if (t79 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x373 = 0U;
	static uint64_t x374 = 44202277350LLU;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t80 = 2779818;

	t80 = ((x373-(x374<x375))-x376);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x377 = 12970378917746LLU;
	int16_t x380 = -1;
	uint64_t t81 = 0LLU;

	t81 = ((x377-(x378<x379))-x380);

	if (t81 != 12970378917747LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x381 = INT8_MIN;
	uint8_t x383 = UINT8_MAX;
	uint64_t x384 = 2766016LLU;
	static uint64_t t82 = 1489169206491229LLU;

	t82 = ((x381-(x382<x383))-x384);

	if (t82 != 18446744073706785471LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x385 = UINT16_MAX;
	static int8_t x386 = INT8_MIN;
	static volatile int64_t x387 = INT64_MIN;
	volatile int32_t t83 = 3916;

	t83 = ((x385-(x386<x387))-x388);

	if (t83 != 65536) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x390 = 4U;
	int16_t x392 = INT16_MAX;
	volatile int32_t t84 = -457501;

	t84 = ((x389-(x390<x391))-x392);

	if (t84 != -32756) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x398 = INT32_MIN;
	volatile int16_t x399 = INT16_MIN;
	int32_t t85 = 36;

	t85 = ((x397-(x398<x399))-x400);

	if (t85 != 120) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = -7;
	static volatile int16_t x402 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t86 = 1514567;

	t86 = ((x401-(x402<x403))-x404);

	if (t86 != 2147483640) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 4U;
	uint64_t x410 = 33927871560LLU;
	static uint32_t t87 = 11U;

	t87 = ((x409-(x410<x411))-x412);

	if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x413 = 73U;
	uint8_t x414 = 45U;
	int32_t x415 = -11441;
	int32_t t88 = 4;

	t88 = ((x413-(x414<x415))-x416);

	if (t88 != 32841) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = 2;
	static uint8_t x418 = 0U;
	int16_t x419 = -1;
	static volatile int16_t x420 = INT16_MAX;
	volatile int32_t t89 = 54779;

	t89 = ((x417-(x418<x419))-x420);

	if (t89 != -32765) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = INT8_MAX;
	int64_t x423 = 1355580172041101972LL;
	uint32_t x424 = 70U;
	volatile uint32_t t90 = 21254741U;

	t90 = ((x421-(x422<x423))-x424);

	if (t90 != 57U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x426 = INT8_MAX;
	uint16_t x427 = 1U;
	volatile int8_t x428 = INT8_MIN;
	static volatile int64_t t91 = 65LL;

	t91 = ((x425-(x426<x427))-x428);

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = INT16_MIN;
	int8_t x431 = INT8_MAX;
	int16_t x432 = INT16_MAX;
	volatile int32_t t92 = -5905894;

	t92 = ((x429-(x430<x431))-x432);

	if (t92 != -65536) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x433 = 0U;
	static int8_t x434 = INT8_MAX;
	int64_t x436 = INT64_MIN;
	volatile int64_t t93 = INT64_MAX;

	t93 = ((x433-(x434<x435))-x436);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x437 = 127U;
	int16_t x438 = INT16_MIN;
	static volatile int8_t x439 = INT8_MIN;
	volatile uint8_t x440 = 0U;
	volatile uint32_t t94 = 237U;

	t94 = ((x437-(x438<x439))-x440);

	if (t94 != 126U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x442 = -870;
	static volatile int32_t x443 = INT32_MIN;
	volatile int32_t t95 = 41775410;

	t95 = ((x441-(x442<x443))-x444);

	if (t95 != 98303) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x447 = 538621588LLU;
	uint64_t x448 = UINT64_MAX;

	t96 = ((x445-(x446<x447))-x448);

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x449 = 26587165U;
	uint16_t x450 = 4U;
	uint8_t x451 = 18U;
	volatile uint32_t t97 = 14611592U;

	t97 = ((x449-(x450<x451))-x452);

	if (t97 != 26586635U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x454 = 4U;
	uint16_t x456 = UINT16_MAX;
	static volatile int32_t t98 = -5;

	t98 = ((x453-(x454<x455))-x456);

	if (t98 != -65663) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x457 = 44538810801LLU;
	volatile uint16_t x458 = UINT16_MAX;
	static int16_t x459 = -11384;
	static int64_t x460 = INT64_MIN;
	uint64_t t99 = 1528148LLU;

	t99 = ((x457-(x458<x459))-x460);

	if (t99 != 9223372081393586609LLU) { NG(); } else { ; }
	
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

