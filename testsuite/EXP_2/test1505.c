#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int32_t t0 = 5;
uint16_t x12 = UINT16_MAX;
uint64_t x15 = 1991270LLU;
static volatile int32_t t3 = -78753;
int16_t x20 = INT16_MAX;
int32_t t4 = -197;
int32_t x33 = -108;
uint32_t x38 = UINT32_MAX;
int8_t x39 = INT8_MIN;
volatile int32_t t9 = 126;
volatile int16_t x42 = -1;
volatile int32_t t10 = 11294524;
uint64_t x46 = 1LLU;
uint32_t x51 = UINT32_MAX;
int32_t t12 = 1107502;
uint32_t x53 = UINT32_MAX;
int32_t x55 = INT32_MAX;
int8_t x56 = INT8_MAX;
static uint64_t x57 = UINT64_MAX;
int8_t x58 = -29;
int8_t x63 = INT8_MAX;
static int32_t x64 = INT32_MIN;
uint64_t x79 = 1514380597LLU;
int32_t x81 = INT32_MAX;
static volatile int32_t x89 = 11500;
volatile uint64_t x95 = 126682611308756LLU;
static int16_t x100 = -1;
static int64_t x119 = 0LL;
static int32_t t29 = 565876791;
volatile int32_t t30 = 14065;
int32_t x132 = 23;
uint16_t x136 = UINT16_MAX;
int32_t t33 = -3778;
int16_t x141 = 154;
volatile int32_t x144 = INT32_MIN;
int16_t x148 = INT16_MIN;
int32_t x149 = INT32_MIN;
uint8_t x153 = 3U;
int32_t x160 = 7197;
static int32_t t40 = 4;
int64_t x166 = INT64_MAX;
static volatile int32_t t41 = -15;
static int64_t x169 = -5909LL;
volatile uint32_t x170 = 2U;
uint64_t x176 = 504321853176LLU;
uint32_t x179 = UINT32_MAX;
uint32_t x182 = 440U;
int32_t x185 = INT32_MIN;
int64_t x188 = INT64_MAX;
int8_t x199 = INT8_MIN;
volatile int32_t t49 = 0;
uint16_t x209 = 10U;
uint16_t x210 = UINT16_MAX;
uint32_t x221 = 63819055U;
int8_t x228 = INT8_MIN;
int32_t t56 = -192;
static uint32_t x239 = UINT32_MAX;
static int64_t x244 = 453340424334LL;
uint64_t x252 = 387596413711LLU;
int16_t x259 = 4109;
int8_t x260 = INT8_MAX;
int64_t x274 = 61727LL;
int32_t x277 = -1;
volatile int8_t x278 = INT8_MIN;
volatile int8_t x285 = -1;
int64_t x287 = -1LL;
uint32_t x288 = UINT32_MAX;
uint64_t x291 = UINT64_MAX;
uint64_t x292 = UINT64_MAX;
int16_t x293 = INT16_MIN;
static int32_t x297 = 54651;
volatile uint8_t x299 = UINT8_MAX;
int32_t t74 = -255212856;
int64_t x302 = INT64_MIN;
uint64_t x310 = UINT64_MAX;
static int8_t x312 = INT8_MAX;
volatile int32_t t79 = 80378;
volatile uint8_t x323 = UINT8_MAX;
int32_t t80 = 0;
static uint32_t x325 = UINT32_MAX;
uint64_t x328 = 100LLU;
volatile int32_t t81 = -52;
volatile uint32_t x329 = 6328215U;
static uint8_t x334 = UINT8_MAX;
int16_t x336 = -1;
static int64_t x338 = INT64_MAX;
volatile uint16_t x343 = 7U;
uint16_t x346 = 312U;
static uint8_t x352 = 2U;
volatile int32_t t89 = -153145759;
int32_t x361 = -381;
static uint16_t x363 = 2470U;
static int8_t x364 = INT8_MIN;
int32_t t90 = 1777;
int32_t x365 = -1;
volatile int32_t x367 = -131;
uint8_t x371 = UINT8_MAX;
uint64_t x375 = 84822LLU;
int32_t t93 = 3287839;
int16_t x382 = -5;
int64_t x388 = INT64_MIN;
static int32_t t96 = 87;
int8_t x391 = INT8_MIN;
volatile int64_t x394 = INT64_MIN;
int32_t x399 = INT32_MAX;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	volatile int16_t x3 = INT16_MAX;
	int64_t x4 = -9466013392830862LL;

	t0 = ((x1|(x2<x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint64_t x6 = UINT64_MAX;
	static volatile int64_t x7 = -1LL;
	uint64_t x8 = 5517LLU;
	int32_t t1 = 9626993;

	t1 = ((x5|(x6<x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 1U;
	static volatile int32_t x10 = INT32_MAX;
	static int32_t x11 = INT32_MAX;
	int32_t t2 = -111;

	t2 = ((x9|(x10<x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 7848U;
	static int64_t x14 = INT64_MIN;
	volatile int64_t x16 = INT64_MAX;

	t3 = ((x13|(x14<x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;

	t4 = ((x17|(x18<x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 119812609LLU;
	int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MIN;
	volatile int32_t x24 = INT32_MAX;
	int32_t t5 = -32603621;

	t5 = ((x21|(x22<x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int32_t x26 = -500;
	int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	static int32_t t6 = 1;

	t6 = ((x25|(x26<x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -2649061;
	int64_t x30 = -1LL;
	uint64_t x31 = 1280648LLU;
	static int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 1756;

	t7 = ((x29|(x30<x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = UINT64_MAX;
	volatile int8_t x35 = INT8_MAX;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 8;

	t8 = ((x33|(x34<x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile uint32_t x40 = UINT32_MAX;

	t9 = ((x37|(x38<x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 196743LLU;
	int16_t x43 = 1027;
	int32_t x44 = -1;

	t10 = ((x41|(x42<x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 30LLU;
	uint8_t x47 = UINT8_MAX;
	int64_t x48 = -1LL;
	static volatile int32_t t11 = -217;

	t11 = ((x45|(x46<x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile uint64_t x50 = UINT64_MAX;
	int64_t x52 = INT64_MIN;

	t12 = ((x49|(x50<x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	volatile int32_t t13 = -219;

	t13 = ((x53|(x54<x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x59 = 4;
	volatile uint8_t x60 = 125U;
	int32_t t14 = 2658967;

	t14 = ((x57|(x58<x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 7U;
	uint64_t x62 = 13541740386LLU;
	int32_t t15 = -28717;

	t15 = ((x61|(x62<x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 540U;
	volatile int32_t x66 = INT32_MAX;
	static uint64_t x67 = 4759621743424LLU;
	uint64_t x68 = 52LLU;
	volatile int32_t t16 = -1468214;

	t16 = ((x65|(x66<x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	volatile int32_t x71 = INT32_MAX;
	volatile uint16_t x72 = UINT16_MAX;
	static volatile int32_t t17 = -57195276;

	t17 = ((x69|(x70<x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = -1LL;
	int32_t x75 = -1;
	int64_t x76 = -1LL;
	volatile int32_t t18 = 1;

	t18 = ((x73|(x74<x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -1519703LL;
	volatile int32_t x78 = -1;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -664024225;

	t19 = ((x77|(x78<x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 4151186U;
	volatile uint32_t x83 = UINT32_MAX;
	volatile int8_t x84 = INT8_MIN;
	static int32_t t20 = 43216647;

	t20 = ((x81|(x82<x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 11U;
	int16_t x86 = -1;
	uint32_t x87 = 167U;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 30582;

	t21 = ((x85|(x86<x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -1LL;
	int8_t x91 = -14;
	static int8_t x92 = 1;
	int32_t t22 = -17225;

	t22 = ((x89|(x90<x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = 1;
	volatile int8_t x94 = INT8_MIN;
	static int8_t x96 = INT8_MIN;
	int32_t t23 = -1020;

	t23 = ((x93|(x94<x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int64_t x98 = INT64_MIN;
	int16_t x99 = 173;
	volatile int32_t t24 = 52;

	t24 = ((x97|(x98<x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	volatile int32_t x102 = INT32_MIN;
	int16_t x103 = -1;
	int64_t x104 = -1LL;
	int32_t t25 = 5647;

	t25 = ((x101|(x102<x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = UINT64_MAX;
	volatile uint16_t x106 = 1U;
	static int8_t x107 = 0;
	int16_t x108 = INT16_MIN;
	static int32_t t26 = -7;

	t26 = ((x105|(x106<x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	int16_t x110 = INT16_MIN;
	int16_t x111 = -1;
	static int64_t x112 = INT64_MIN;
	static int32_t t27 = 14;

	t27 = ((x109|(x110<x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x113 = -13;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 2822;

	t28 = ((x113|(x114<x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	volatile uint64_t x118 = UINT64_MAX;
	static volatile uint64_t x120 = 168603519723806300LLU;

	t29 = ((x117|(x118<x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 48;
	volatile int32_t x122 = -1;
	int32_t x123 = -1;
	int16_t x124 = INT16_MAX;

	t30 = ((x121|(x122<x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x126 = INT32_MAX;
	volatile int64_t x127 = INT64_MIN;
	uint64_t x128 = 10863LLU;
	volatile int32_t t31 = 1;

	t31 = ((x125|(x126<x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	volatile int64_t x130 = 5LL;
	static int8_t x131 = INT8_MIN;
	int32_t t32 = 226480468;

	t32 = ((x129|(x130<x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 7008U;

	t33 = ((x133|(x134<x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -33553968;
	uint8_t x138 = 1U;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = 576LLU;
	int32_t t34 = 3474;

	t34 = ((x137|(x138<x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x142 = -1;
	int8_t x143 = 4;
	volatile int32_t t35 = 15587043;

	t35 = ((x141|(x142<x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	static volatile uint64_t x146 = 451LLU;
	uint64_t x147 = 81159363LLU;
	volatile int32_t t36 = -161626;

	t36 = ((x145|(x146<x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = -1595;
	static int64_t x151 = INT64_MIN;
	int32_t x152 = -1;
	volatile int32_t t37 = -8431;

	t37 = ((x149|(x150<x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 2U;
	uint8_t x155 = 0U;
	int32_t x156 = -17050519;
	volatile int32_t t38 = -13751;

	t38 = ((x153|(x154<x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1;
	int64_t x158 = -1LL;
	static int64_t x159 = -1LL;
	int32_t t39 = -25426;

	t39 = ((x157|(x158<x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	volatile int32_t x162 = INT32_MAX;
	int64_t x163 = INT64_MIN;
	volatile int32_t x164 = 765265036;

	t40 = ((x161|(x162<x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 4525U;
	int8_t x167 = 3;
	int32_t x168 = INT32_MIN;

	t41 = ((x165|(x166<x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MIN;
	int32_t t42 = -5398;

	t42 = ((x169|(x170<x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -29486;
	int16_t x174 = -1;
	static int64_t x175 = INT64_MAX;
	volatile int32_t t43 = 11201383;

	t43 = ((x173|(x174<x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	static int64_t x180 = INT64_MIN;
	int32_t t44 = 12394696;

	t44 = ((x177|(x178<x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int16_t x183 = -1;
	static volatile uint32_t x184 = 2050461328U;
	int32_t t45 = 146898;

	t45 = ((x181|(x182<x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = UINT16_MAX;
	volatile int64_t x187 = 8646379LL;
	static int32_t t46 = 156618;

	t46 = ((x185|(x186<x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 14652LL;
	static int16_t x190 = INT16_MIN;
	static volatile uint8_t x191 = UINT8_MAX;
	volatile int8_t x192 = INT8_MIN;
	int32_t t47 = 2057786;

	t47 = ((x189|(x190<x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MAX;
	uint64_t x195 = UINT64_MAX;
	int8_t x196 = -1;
	int32_t t48 = 844939;

	t48 = ((x193|(x194<x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int16_t x198 = INT16_MIN;
	int8_t x200 = INT8_MIN;

	t49 = ((x197|(x198<x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MIN;
	volatile int32_t x202 = -3359431;
	int8_t x203 = 11;
	int32_t x204 = -1;
	static volatile int32_t t50 = -36174103;

	t50 = ((x201|(x202<x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 12U;
	int64_t x206 = 29LL;
	int64_t x207 = 18283113519235LL;
	int64_t x208 = -293932734LL;
	int32_t t51 = 2960720;

	t51 = ((x205|(x206<x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x211 = 8U;
	int64_t x212 = -5LL;
	volatile int32_t t52 = 414544;

	t52 = ((x209|(x210<x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 47U;
	uint8_t x214 = 0U;
	uint64_t x215 = 13168486972LLU;
	static int16_t x216 = 676;
	volatile int32_t t53 = -276245598;

	t53 = ((x213|(x214<x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = UINT64_MAX;
	int32_t x218 = -126;
	int8_t x219 = -30;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t54 = 3053758;

	t54 = ((x217|(x218<x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x222 = 29;
	int64_t x223 = INT64_MAX;
	uint16_t x224 = 181U;
	int32_t t55 = 1;

	t55 = ((x221|(x222<x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = 0U;
	static uint64_t x227 = UINT64_MAX;

	t56 = ((x225|(x226<x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	volatile uint8_t x230 = 3U;
	uint32_t x231 = 2010U;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = -657719181;

	t57 = ((x229|(x230<x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MAX;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = -355897;

	t58 = ((x233|(x234<x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 809399042942653105LL;
	int64_t x238 = INT64_MIN;
	static int64_t x240 = 319159LL;
	int32_t t59 = -28918;

	t59 = ((x237|(x238<x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 32U;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = 71U;
	int32_t t60 = -1075669;

	t60 = ((x241|(x242<x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	uint8_t x246 = 6U;
	int8_t x247 = 0;
	int16_t x248 = -1;
	int32_t t61 = 779458;

	t61 = ((x245|(x246<x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 44U;
	uint8_t x250 = 62U;
	int8_t x251 = -6;
	static volatile int32_t t62 = -842818885;

	t62 = ((x249|(x250<x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 14501813152109LLU;
	static uint32_t x254 = UINT32_MAX;
	int8_t x255 = -1;
	static int64_t x256 = -1763LL;
	int32_t t63 = -29229650;

	t63 = ((x253|(x254<x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	volatile int32_t t64 = 4172153;

	t64 = ((x257|(x258<x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	int64_t x262 = -938763LL;
	uint8_t x263 = 2U;
	static volatile int64_t x264 = -1LL;
	int32_t t65 = -254395;

	t65 = ((x261|(x262<x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static volatile int8_t x266 = INT8_MAX;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -12967;

	t66 = ((x265|(x266<x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	int64_t x270 = -137440191689531962LL;
	int64_t x271 = INT64_MIN;
	int8_t x272 = 13;
	volatile int32_t t67 = 46;

	t67 = ((x269|(x270<x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	uint8_t x275 = UINT8_MAX;
	volatile uint64_t x276 = UINT64_MAX;
	int32_t t68 = -3592;

	t68 = ((x273|(x274<x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x279 = -1;
	int16_t x280 = INT16_MIN;
	static volatile int32_t t69 = -32589722;

	t69 = ((x277|(x278<x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MAX;
	static volatile int16_t x282 = -1;
	volatile uint64_t x283 = UINT64_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -3433196;

	t70 = ((x281|(x282<x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = -1;
	int32_t t71 = -59904;

	t71 = ((x285|(x286<x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 7373U;
	static volatile uint16_t x290 = 219U;
	volatile int32_t t72 = 13263;

	t72 = ((x289|(x290<x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = -1LL;
	volatile int64_t x295 = INT64_MIN;
	int32_t x296 = -890823820;
	static int32_t t73 = 1586;

	t73 = ((x293|(x294<x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x298 = UINT32_MAX;
	volatile uint8_t x300 = 4U;

	t74 = ((x297|(x298<x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	static int16_t x303 = INT16_MAX;
	volatile int16_t x304 = INT16_MAX;
	int32_t t75 = -90770180;

	t75 = ((x301|(x302<x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MAX;
	volatile int8_t x307 = INT8_MAX;
	int64_t x308 = INT64_MIN;
	int32_t t76 = 1630920;

	t76 = ((x305|(x306<x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 17;
	int8_t x311 = INT8_MAX;
	volatile int32_t t77 = -76025736;

	t77 = ((x309|(x310<x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MAX;
	int8_t x314 = INT8_MIN;
	int64_t x315 = INT64_MAX;
	uint32_t x316 = 1392U;
	volatile int32_t t78 = -62628;

	t78 = ((x313|(x314<x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 3149;
	volatile int32_t x318 = 1626;
	volatile uint8_t x319 = 36U;
	int64_t x320 = -1LL;

	t79 = ((x317|(x318<x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -1;
	volatile int32_t x322 = INT32_MIN;
	uint8_t x324 = UINT8_MAX;

	t80 = ((x321|(x322<x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x326 = -1;
	int64_t x327 = -1LL;

	t81 = ((x325|(x326<x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = INT8_MIN;
	volatile int16_t x331 = INT16_MAX;
	int64_t x332 = -1LL;
	volatile int32_t t82 = 0;

	t82 = ((x329|(x330<x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	uint64_t x335 = 7LLU;
	static volatile int32_t t83 = 564015135;

	t83 = ((x333|(x334<x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 0;
	int64_t x339 = INT64_MAX;
	static int8_t x340 = -6;
	int32_t t84 = 21;

	t84 = ((x337|(x338<x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	int16_t x342 = 9813;
	volatile uint16_t x344 = UINT16_MAX;
	int32_t t85 = 0;

	t85 = ((x341|(x342<x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int32_t x347 = 65181;
	static uint8_t x348 = UINT8_MAX;
	int32_t t86 = 6;

	t86 = ((x345|(x346<x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int32_t x350 = INT32_MAX;
	int64_t x351 = INT64_MIN;
	int32_t t87 = -2985;

	t87 = ((x349|(x350<x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MAX;
	uint32_t x355 = 3293725U;
	static int64_t x356 = INT64_MIN;
	static volatile int32_t t88 = 1;

	t88 = ((x353|(x354<x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	volatile uint8_t x358 = UINT8_MAX;
	volatile int16_t x359 = -1;
	static int8_t x360 = -3;

	t89 = ((x357|(x358<x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = 521347772935LLU;

	t90 = ((x361|(x362<x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -4459806665874527705LL;
	volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = 302;

	t91 = ((x365|(x366<x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 0U;
	int32_t x370 = 51169158;
	static int32_t x372 = -105298573;
	volatile int32_t t92 = 17885;

	t92 = ((x369|(x370<x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	volatile uint64_t x374 = 855749LLU;
	static int8_t x376 = 1;

	t93 = ((x373|(x374<x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 496327;
	static int32_t x378 = 105673;
	int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MAX;
	static int32_t t94 = 0;

	t94 = ((x377|(x378<x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int64_t x383 = 27092786885LL;
	uint32_t x384 = UINT32_MAX;
	int32_t t95 = 3884803;

	t95 = ((x381|(x382<x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;

	t96 = ((x385|(x386<x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	int8_t x390 = INT8_MAX;
	int64_t x392 = INT64_MIN;
	static volatile int32_t t97 = -93;

	t97 = ((x389|(x390<x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = 1;
	volatile uint64_t x395 = UINT64_MAX;
	uint16_t x396 = 28U;
	int32_t t98 = -26250043;

	t98 = ((x393|(x394<x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int32_t x398 = -1;
	uint32_t x400 = 1946U;
	int32_t t99 = 1;

	t99 = ((x397|(x398<x399))<=x400);

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

