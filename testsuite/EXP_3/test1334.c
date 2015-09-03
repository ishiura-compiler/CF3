#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x2 = -34;
volatile uint64_t x8 = UINT64_MAX;
static volatile int64_t x14 = -1LL;
int8_t x21 = -20;
int8_t x24 = 10;
int8_t x31 = INT8_MAX;
int64_t x32 = -1LL;
int16_t x35 = INT16_MIN;
static volatile int32_t t8 = -48167;
int8_t x39 = INT8_MIN;
int32_t x41 = INT32_MIN;
int8_t x48 = -1;
int16_t x49 = -1;
int64_t x54 = INT64_MIN;
static volatile int8_t x62 = INT8_MIN;
int8_t x65 = -1;
int8_t x67 = INT8_MAX;
uint8_t x68 = 2U;
static int64_t x74 = -1LL;
int64_t x79 = INT64_MIN;
static int32_t x81 = 1;
volatile int16_t x88 = -1;
static int32_t t21 = 1580;
uint8_t x89 = UINT8_MAX;
int8_t x95 = INT8_MIN;
volatile int32_t t23 = -118076677;
static uint64_t x97 = UINT64_MAX;
uint32_t x99 = 350536646U;
static volatile int32_t t24 = 1216;
static uint32_t x111 = UINT32_MAX;
int16_t x122 = 1;
int32_t x123 = INT32_MAX;
volatile int16_t x126 = INT16_MIN;
int32_t x127 = INT32_MIN;
int64_t x128 = -1LL;
static int8_t x134 = -1;
static int16_t x140 = 0;
volatile int8_t x145 = -1;
int16_t x146 = -1;
volatile int16_t x147 = 4014;
int32_t t37 = -322410538;
uint8_t x156 = 59U;
int32_t t38 = -368215;
uint8_t x158 = 0U;
volatile int8_t x172 = -1;
int8_t x175 = 3;
int8_t x177 = INT8_MAX;
volatile int32_t t44 = 391720;
volatile int32_t t45 = 0;
uint8_t x187 = 30U;
uint32_t x194 = UINT32_MAX;
int32_t x198 = -1;
uint16_t x201 = UINT16_MAX;
uint64_t x208 = UINT64_MAX;
int32_t x219 = 6;
volatile int16_t x220 = 3;
uint8_t x223 = 21U;
int8_t x225 = INT8_MIN;
int64_t x243 = -1LL;
int32_t x248 = -7248320;
uint16_t x250 = 186U;
int16_t x251 = INT16_MAX;
volatile int32_t t62 = -2961509;
static int8_t x258 = -1;
int32_t t64 = 937089;
uint64_t x266 = 119LLU;
static uint32_t x272 = 41434136U;
volatile int32_t x275 = INT32_MAX;
int32_t t68 = -141149;
int16_t x281 = 0;
int64_t x285 = -7909728546LL;
int32_t t71 = 9121;
int16_t x296 = INT16_MAX;
uint8_t x297 = UINT8_MAX;
volatile uint64_t x298 = 33017LLU;
int32_t x300 = INT32_MIN;
int32_t t76 = -206752982;
volatile int32_t t78 = -9344;
int32_t x320 = -131528499;
int32_t x329 = INT32_MAX;
int64_t x331 = INT64_MAX;
int32_t t82 = -2940786;
uint32_t x338 = UINT32_MAX;
int64_t x339 = INT64_MIN;
int8_t x347 = -1;
int64_t x349 = -2LL;
int32_t x350 = INT32_MIN;
int8_t x352 = INT8_MIN;
volatile int8_t x358 = -36;
static int32_t t90 = 45;
int8_t x366 = INT8_MAX;
volatile int16_t x369 = INT16_MIN;
int64_t x378 = 115048470LL;
uint64_t x382 = UINT64_MAX;
uint32_t x386 = UINT32_MAX;
int32_t t96 = -184474;
volatile uint8_t x389 = 3U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	int32_t t0 = 254898;

	t0 = ((x1|x2)==(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 0U;
	uint16_t x6 = 12U;
	uint8_t x7 = UINT8_MAX;
	int32_t t1 = -21565204;

	t1 = ((x5|x6)==(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	int64_t x11 = -1LL;
	uint64_t x12 = 311LLU;
	volatile int32_t t2 = -70;

	t2 = ((x9|x10)==(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	volatile int16_t x15 = INT16_MIN;
	int8_t x16 = -1;
	int32_t t3 = 1237;

	t3 = ((x13|x14)==(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 34;
	volatile int16_t x18 = -1;
	uint64_t x19 = 266400LLU;
	static uint16_t x20 = 10U;
	int32_t t4 = 21340;

	t4 = ((x17|x18)==(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 11U;
	uint64_t x23 = 201258114966LLU;
	volatile int32_t t5 = -7361191;

	t5 = ((x21|x22)==(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int64_t x26 = INT64_MIN;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = -1;
	volatile int32_t t6 = -90009913;

	t6 = ((x25|x26)==(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int16_t x30 = -1;
	volatile int32_t t7 = -97;

	t7 = ((x29|x30)==(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -1;
	int32_t x34 = INT32_MIN;
	int16_t x36 = INT16_MAX;

	t8 = ((x33|x34)==(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 6;
	int16_t x38 = INT16_MAX;
	volatile int64_t x40 = -25LL;
	static int32_t t9 = 545718;

	t9 = ((x37|x38)==(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1547383913726LL;
	int64_t x43 = INT64_MIN;
	volatile int8_t x44 = 1;
	int32_t t10 = 16;

	t10 = ((x41|x42)==(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint8_t x46 = 1U;
	static uint16_t x47 = UINT16_MAX;
	int32_t t11 = -64262671;

	t11 = ((x45|x46)==(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = 23U;
	int32_t t12 = -702194;

	t12 = ((x49|x50)==(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	int64_t x56 = -644243016267495410LL;
	volatile int32_t t13 = 476205;

	t13 = ((x53|x54)==(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 29;
	static volatile int16_t x58 = INT16_MAX;
	volatile int64_t x59 = -1LL;
	static int64_t x60 = INT64_MIN;
	volatile int32_t t14 = -468234;

	t14 = ((x57|x58)==(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int32_t x63 = -1;
	volatile int32_t x64 = INT32_MIN;
	int32_t t15 = -8;

	t15 = ((x61|x62)==(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x66 = UINT32_MAX;
	int32_t t16 = 53;

	t16 = ((x65|x66)==(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 11U;
	int8_t x70 = INT8_MIN;
	int64_t x71 = -15070870563681535LL;
	int32_t x72 = 342534;
	int32_t t17 = 497;

	t17 = ((x69|x70)==(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int32_t x75 = -1;
	uint8_t x76 = 102U;
	int32_t t18 = -58623;

	t18 = ((x73|x74)==(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	static int16_t x78 = INT16_MAX;
	uint8_t x80 = 0U;
	int32_t t19 = -4227;

	t19 = ((x77|x78)==(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x82 = 19342U;
	uint16_t x83 = 28400U;
	int8_t x84 = -1;
	int32_t t20 = 907928775;

	t20 = ((x81|x82)==(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 0;
	uint32_t x86 = 7293U;
	static uint8_t x87 = 1U;

	t21 = ((x85|x86)==(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MIN;
	int16_t x92 = -1;
	int32_t t22 = -205276892;

	t22 = ((x89|x90)==(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = 3622;
	static int32_t x94 = -1426;
	uint16_t x96 = 123U;

	t23 = ((x93|x94)==(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = UINT16_MAX;
	static uint8_t x100 = 7U;

	t24 = ((x97|x98)==(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = -1;
	static uint32_t x103 = 17605U;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 644159;

	t25 = ((x101|x102)==(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static uint8_t x106 = 5U;
	volatile uint8_t x107 = UINT8_MAX;
	uint32_t x108 = 140U;
	int32_t t26 = -344;

	t26 = ((x105|x106)==(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 19;
	static int8_t x110 = -1;
	int32_t x112 = INT32_MAX;
	static int32_t t27 = -66;

	t27 = ((x109|x110)==(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -1;
	static int8_t x114 = INT8_MAX;
	volatile int32_t x115 = 0;
	int16_t x116 = -1;
	int32_t t28 = 82784;

	t28 = ((x113|x114)==(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	static int16_t x118 = INT16_MAX;
	int64_t x119 = INT64_MIN;
	static uint32_t x120 = UINT32_MAX;
	static int32_t t29 = -94408;

	t29 = ((x117|x118)==(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint16_t x124 = 7U;
	int32_t t30 = 0;

	t30 = ((x121|x122)==(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	static int32_t t31 = -21;

	t31 = ((x125|x126)==(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 12U;
	volatile int64_t x130 = INT64_MAX;
	static uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t32 = 61;

	t32 = ((x129|x130)==(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint8_t x135 = 8U;
	int8_t x136 = INT8_MAX;
	volatile int32_t t33 = -3926;

	t33 = ((x133|x134)==(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	static int8_t x138 = 6;
	static int64_t x139 = 3209591720083LL;
	volatile int32_t t34 = -16;

	t34 = ((x137|x138)==(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -1;
	int8_t x142 = -1;
	uint32_t x143 = 1016U;
	static uint64_t x144 = 29523LLU;
	volatile int32_t t35 = 3;

	t35 = ((x141|x142)==(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x148 = -364969523968265614LL;
	int32_t t36 = -67988;

	t36 = ((x145|x146)==(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -2092142;
	int32_t x150 = INT32_MIN;
	uint32_t x151 = UINT32_MAX;
	uint8_t x152 = 101U;

	t37 = ((x149|x150)==(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 0;
	int64_t x154 = INT64_MIN;
	int8_t x155 = -39;

	t38 = ((x153|x154)==(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	volatile int32_t x159 = -565;
	uint16_t x160 = 328U;
	volatile int32_t t39 = 4758;

	t39 = ((x157|x158)==(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x161 = UINT8_MAX;
	static uint8_t x162 = UINT8_MAX;
	volatile int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	int32_t t40 = -940518;

	t40 = ((x161|x162)==(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	uint8_t x166 = UINT8_MAX;
	static int16_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	int32_t t41 = 0;

	t41 = ((x165|x166)==(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	volatile int16_t x170 = INT16_MIN;
	int64_t x171 = -24654466LL;
	int32_t t42 = -3;

	t42 = ((x169|x170)==(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	static volatile uint64_t x174 = 350696LLU;
	volatile uint8_t x176 = 26U;
	volatile int32_t t43 = 94320196;

	t43 = ((x173|x174)==(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	uint16_t x179 = UINT16_MAX;
	int16_t x180 = -364;

	t44 = ((x177|x178)==(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int64_t x182 = 6LL;
	uint8_t x183 = 1U;
	static volatile int64_t x184 = INT64_MAX;

	t45 = ((x181|x182)==(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = -1;
	volatile int32_t x186 = INT32_MAX;
	static int8_t x188 = 0;
	int32_t t46 = 3564618;

	t46 = ((x185|x186)==(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 13;
	int64_t x190 = INT64_MIN;
	int32_t x191 = 268585009;
	int32_t x192 = -79557;
	volatile int32_t t47 = -40323;

	t47 = ((x189|x190)==(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = UINT16_MAX;
	volatile int64_t x195 = -1761946231114971LL;
	static int8_t x196 = -1;
	int32_t t48 = -1;

	t48 = ((x193|x194)==(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint64_t x199 = 184625263LLU;
	uint64_t x200 = UINT64_MAX;
	int32_t t49 = -13449;

	t49 = ((x197|x198)==(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	static int16_t x203 = 3774;
	uint32_t x204 = 764U;
	int32_t t50 = -235732;

	t50 = ((x201|x202)==(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int32_t x206 = INT32_MAX;
	uint16_t x207 = 60U;
	volatile int32_t t51 = 917135033;

	t51 = ((x205|x206)==(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = 77U;
	int8_t x210 = 0;
	int8_t x211 = -3;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 1052509212;

	t52 = ((x209|x210)==(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MAX;
	uint64_t x216 = 3427607LLU;
	int32_t t53 = 84503235;

	t53 = ((x213|x214)==(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = UINT64_MAX;
	int8_t x218 = 0;
	volatile int32_t t54 = 15260;

	t54 = ((x217|x218)==(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MAX;
	int64_t x224 = -350229623201755LL;
	volatile int32_t t55 = 7;

	t55 = ((x221|x222)==(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x226 = -1LL;
	static uint64_t x227 = 5324LLU;
	int32_t x228 = -1;
	volatile int32_t t56 = -7055771;

	t56 = ((x225|x226)==(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int8_t x230 = INT8_MIN;
	volatile uint16_t x231 = 1985U;
	int8_t x232 = -1;
	volatile int32_t t57 = 210;

	t57 = ((x229|x230)==(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	static uint32_t x234 = 81202U;
	int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	int32_t t58 = 1;

	t58 = ((x233|x234)==(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	static uint8_t x238 = 10U;
	static volatile int64_t x239 = -1LL;
	int8_t x240 = -1;
	static int32_t t59 = 670;

	t59 = ((x237|x238)==(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 564U;
	int16_t x242 = 21;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -123861;

	t60 = ((x241|x242)==(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -266679803;
	uint64_t x246 = 14729199LLU;
	volatile int64_t x247 = INT64_MAX;
	int32_t t61 = 9;

	t61 = ((x245|x246)==(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x252 = 751408LLU;

	t62 = ((x249|x250)==(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = -1;
	uint32_t x254 = 49894716U;
	int32_t x255 = 4;
	int8_t x256 = -1;
	volatile int32_t t63 = -31;

	t63 = ((x253|x254)==(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	uint32_t x259 = 55188U;
	volatile int16_t x260 = -1;

	t64 = ((x257|x258)==(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 0;
	int8_t x262 = INT8_MIN;
	volatile int8_t x263 = INT8_MIN;
	volatile uint16_t x264 = 4U;
	volatile int32_t t65 = -11822;

	t65 = ((x261|x262)==(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -5344;
	static int64_t x267 = INT64_MAX;
	int8_t x268 = -1;
	volatile int32_t t66 = 522;

	t66 = ((x265|x266)==(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	uint8_t x270 = 24U;
	volatile int8_t x271 = -7;
	int32_t t67 = 13673560;

	t67 = ((x269|x270)==(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int16_t x274 = -1;
	static uint64_t x276 = 7LLU;

	t68 = ((x273|x274)==(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	volatile int32_t x278 = INT32_MAX;
	uint16_t x279 = 11U;
	int8_t x280 = INT8_MIN;
	int32_t t69 = 689;

	t69 = ((x277|x278)==(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = 2U;
	int32_t x283 = 3816914;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = -111;

	t70 = ((x281|x282)==(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	int32_t x288 = INT32_MIN;

	t71 = ((x285|x286)==(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	int32_t x290 = INT32_MAX;
	static int64_t x291 = INT64_MIN;
	uint32_t x292 = UINT32_MAX;
	int32_t t72 = 1;

	t72 = ((x289|x290)==(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	int16_t x294 = -3794;
	int16_t x295 = -3;
	static volatile int32_t t73 = 75824;

	t73 = ((x293|x294)==(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x299 = 1;
	volatile int32_t t74 = 11300445;

	t74 = ((x297|x298)==(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 238U;
	static volatile int32_t x302 = -3191792;
	volatile int32_t x303 = -1;
	volatile int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 720117192;

	t75 = ((x301|x302)==(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	volatile uint32_t x306 = UINT32_MAX;
	int8_t x307 = -1;
	volatile uint64_t x308 = 170432LLU;

	t76 = ((x305|x306)==(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = -15;
	int64_t x310 = -225854100LL;
	int8_t x311 = INT8_MIN;
	int32_t x312 = 43581;
	volatile int32_t t77 = -59801958;

	t77 = ((x309|x310)==(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 409238U;
	volatile int64_t x314 = INT64_MIN;
	int16_t x315 = 79;
	int8_t x316 = 1;

	t78 = ((x313|x314)==(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -1;
	int8_t x318 = INT8_MIN;
	volatile int16_t x319 = -1;
	int32_t t79 = 2;

	t79 = ((x317|x318)==(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int16_t x322 = -1;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = 574LLU;
	volatile int32_t t80 = 1;

	t80 = ((x321|x322)==(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 205U;
	static uint16_t x326 = 11U;
	static int64_t x327 = -1LL;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t81 = -61897;

	t81 = ((x325|x326)==(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MAX;
	int8_t x332 = INT8_MIN;

	t82 = ((x329|x330)==(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	uint64_t x334 = 171377377LLU;
	int64_t x335 = INT64_MIN;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t83 = 13448;

	t83 = ((x333|x334)==(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 27U;
	static uint16_t x340 = UINT16_MAX;
	int32_t t84 = -120830;

	t84 = ((x337|x338)==(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 0;
	uint16_t x342 = UINT16_MAX;
	static uint8_t x343 = 3U;
	uint8_t x344 = 15U;
	int32_t t85 = 85940;

	t85 = ((x341|x342)==(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	uint8_t x348 = 1U;
	static volatile int32_t t86 = -84023376;

	t86 = ((x345|x346)==(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x351 = INT8_MAX;
	volatile int32_t t87 = -50;

	t87 = ((x349|x350)==(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x354 = INT16_MAX;
	int8_t x355 = -1;
	uint16_t x356 = 68U;
	int32_t t88 = 0;

	t88 = ((x353|x354)==(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 0;
	int16_t x359 = 10212;
	uint8_t x360 = 40U;
	int32_t t89 = 6350172;

	t89 = ((x357|x358)==(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 3069U;
	volatile uint8_t x362 = 2U;
	int8_t x363 = -1;
	static volatile int8_t x364 = INT8_MIN;

	t90 = ((x361|x362)==(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 37318U;
	uint16_t x367 = UINT16_MAX;
	volatile uint16_t x368 = UINT16_MAX;
	int32_t t91 = 10921;

	t91 = ((x365|x366)==(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x370 = INT16_MIN;
	volatile uint64_t x371 = 358391325468LLU;
	static int16_t x372 = INT16_MIN;
	static int32_t t92 = 23273;

	t92 = ((x369|x370)==(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -291511;

	t93 = ((x373|x374)==(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 3U;
	int64_t x379 = INT64_MIN;
	int64_t x380 = -468715378LL;
	volatile int32_t t94 = 1;

	t94 = ((x377|x378)==(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 108U;
	int64_t x383 = INT64_MIN;
	int64_t x384 = 409403602017LL;
	volatile int32_t t95 = 2;

	t95 = ((x381|x382)==(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	static int16_t x387 = INT16_MIN;
	int8_t x388 = -4;

	t96 = ((x385|x386)==(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	uint64_t x391 = 31592298LLU;
	uint8_t x392 = UINT8_MAX;
	static volatile int32_t t97 = 4;

	t97 = ((x389|x390)==(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int64_t x394 = -1LL;
	static int32_t x395 = INT32_MIN;
	static uint32_t x396 = UINT32_MAX;
	static volatile int32_t t98 = -592640102;

	t98 = ((x393|x394)==(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MAX;
	int8_t x398 = 0;
	volatile uint8_t x399 = UINT8_MAX;
	static int16_t x400 = INT16_MIN;
	static int32_t t99 = 204;

	t99 = ((x397|x398)==(x399==x400));

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

