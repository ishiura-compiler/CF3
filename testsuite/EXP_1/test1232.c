#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = INT32_MAX;
static uint32_t x10 = UINT32_MAX;
volatile int32_t t3 = 127105;
static volatile int8_t x23 = 18;
volatile int32_t x25 = INT32_MIN;
int32_t t6 = 33839644;
static uint16_t x32 = UINT16_MAX;
int16_t x33 = INT16_MAX;
uint8_t x35 = 10U;
uint8_t x36 = 11U;
int32_t x37 = -82045;
volatile uint64_t x41 = UINT64_MAX;
static int64_t x43 = -86LL;
static int32_t t11 = -511;
static volatile uint16_t x53 = 2066U;
int16_t x61 = -17;
int32_t x69 = -1;
int32_t x72 = -1;
volatile int32_t t17 = 441136;
volatile int32_t x88 = -1;
uint64_t x90 = 39626844531517LLU;
int64_t x95 = 28695261564LL;
int32_t x102 = 172;
volatile uint32_t x103 = 1266959U;
uint16_t x104 = 7U;
int32_t t25 = 525771;
int16_t x108 = 570;
int32_t t26 = -6;
int8_t x111 = -1;
int32_t t27 = 6;
static int8_t x113 = -1;
volatile int64_t x115 = INT64_MAX;
int16_t x117 = 1;
int32_t t30 = 322772863;
volatile int32_t x130 = -484823;
int16_t x145 = INT16_MIN;
int64_t x150 = INT64_MAX;
int8_t x153 = INT8_MAX;
int32_t x154 = INT32_MAX;
static volatile int32_t t38 = 18856;
int64_t x157 = 1LL;
uint64_t x159 = 5543063LLU;
static int16_t x163 = -284;
uint32_t x166 = UINT32_MAX;
static int64_t x167 = INT64_MIN;
int8_t x169 = INT8_MIN;
uint64_t x170 = 14502LLU;
uint32_t x171 = UINT32_MAX;
int32_t t42 = 3;
volatile int32_t x179 = INT32_MIN;
int64_t x184 = -497085LL;
int32_t t45 = 208770756;
uint16_t x185 = UINT16_MAX;
int8_t x190 = INT8_MAX;
static int32_t x193 = -1;
static int8_t x194 = INT8_MAX;
volatile int64_t x195 = -112775172134825485LL;
int64_t x197 = 39870380259773946LL;
int64_t x198 = -1LL;
static volatile int32_t t51 = -50784330;
static int32_t x214 = INT32_MIN;
uint8_t x215 = 6U;
uint8_t x218 = 24U;
volatile int32_t t55 = -49626390;
int8_t x225 = -1;
uint32_t x237 = UINT32_MAX;
volatile int32_t t59 = -7506;
int8_t x242 = INT8_MAX;
uint8_t x243 = UINT8_MAX;
volatile uint16_t x244 = 14209U;
uint8_t x245 = 11U;
uint32_t x246 = 3182216U;
volatile int32_t t61 = -13252735;
uint32_t x250 = 19U;
static int32_t t62 = -565965064;
int32_t t64 = 15;
int8_t x261 = -1;
uint32_t x262 = 20992U;
uint8_t x264 = 11U;
uint8_t x270 = 3U;
int64_t x274 = -8968634238146741LL;
volatile int32_t t68 = -790027310;
int64_t x280 = -2177661759395200LL;
uint32_t x295 = UINT32_MAX;
int32_t t74 = -3;
int8_t x301 = 5;
static uint8_t x312 = UINT8_MAX;
int16_t x313 = -1;
volatile int32_t x316 = 3474;
uint64_t x317 = 3104769531803LLU;
uint32_t x322 = UINT32_MAX;
volatile int32_t x326 = -1;
int64_t x327 = INT64_MIN;
uint8_t x328 = 0U;
int8_t x329 = 1;
volatile uint8_t x334 = UINT8_MAX;
uint32_t x336 = UINT32_MAX;
static int32_t t84 = -6;
static int32_t t86 = -1;
int32_t x349 = -1;
int32_t t88 = 508960;
int32_t t89 = -86420556;
int16_t x371 = 427;
int32_t x374 = INT32_MIN;
uint16_t x378 = 4501U;
volatile int8_t x379 = INT8_MIN;
int32_t x384 = -23;
int32_t t95 = -132792441;
int32_t t96 = 0;
volatile int32_t t98 = 12;


void f0(void) {
	int64_t x1 = 221533439533LL;
	int32_t x2 = -1;
	uint16_t x3 = 321U;
	volatile int32_t t0 = -17392;

	t0 = (((x1==x2)/x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MAX;
	int32_t x7 = -1;
	uint64_t x8 = 2055011872LLU;
	volatile int32_t t1 = -877;

	t1 = (((x5==x6)/x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int8_t x11 = -6;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -4;

	t2 = (((x9==x10)/x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static volatile uint16_t x14 = 9U;
	volatile int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;

	t3 = (((x13==x14)/x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	static int16_t x18 = 294;
	uint64_t x19 = 170611310LLU;
	int64_t x20 = -570509384000663LL;
	volatile int32_t t4 = -106;

	t4 = (((x17==x18)/x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 438762940518193LLU;
	uint8_t x22 = 21U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -1;

	t5 = (((x21==x22)/x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MIN;

	t6 = (((x25==x26)/x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	volatile uint16_t x31 = UINT16_MAX;
	int32_t t7 = 251;

	t7 = (((x29==x30)/x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = 36156U;
	int32_t t8 = 4;

	t8 = (((x33==x34)/x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = 917;
	uint32_t x39 = 5988159U;
	volatile int16_t x40 = -1;
	static volatile int32_t t9 = -205;

	t9 = (((x37==x38)/x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 78LLU;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -255782;

	t10 = (((x41==x42)/x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -163500537LL;
	static volatile int8_t x46 = INT8_MAX;
	int8_t x47 = -1;
	uint64_t x48 = 2915067545775956LLU;

	t11 = (((x45==x46)/x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile uint64_t x50 = 12859136LLU;
	static int8_t x51 = INT8_MAX;
	int32_t x52 = 52824;
	int32_t t12 = 1;

	t12 = (((x49==x50)/x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	volatile int32_t x55 = -83303;
	static volatile int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 4;

	t13 = (((x53==x54)/x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 897798336U;
	volatile int16_t x58 = INT16_MIN;
	static uint64_t x59 = 1017669LLU;
	static uint64_t x60 = UINT64_MAX;
	int32_t t14 = 130448;

	t14 = (((x57==x58)/x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x62 = -66470422944140295LL;
	volatile int8_t x63 = 20;
	uint64_t x64 = UINT64_MAX;
	static int32_t t15 = 209150974;

	t15 = (((x61==x62)/x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MAX;
	int64_t x66 = -1LL;
	volatile int16_t x67 = INT16_MIN;
	volatile uint8_t x68 = 14U;
	static int32_t t16 = -125862;

	t16 = (((x65==x66)/x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 17U;
	volatile int16_t x71 = INT16_MIN;

	t17 = (((x69==x70)/x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	volatile int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -92057595;

	t18 = (((x73==x74)/x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int16_t x78 = -1;
	static volatile uint16_t x79 = UINT16_MAX;
	int32_t x80 = 1;
	int32_t t19 = 172;

	t19 = (((x77==x78)/x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 4951592U;
	static int32_t x82 = INT32_MAX;
	int32_t x83 = -1;
	static int8_t x84 = INT8_MAX;
	int32_t t20 = -28850446;

	t20 = (((x81==x82)/x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 102U;
	volatile int8_t x86 = -1;
	int16_t x87 = INT16_MIN;
	volatile int32_t t21 = -341;

	t21 = (((x85==x86)/x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 27U;
	int32_t x91 = 4;
	volatile int8_t x92 = -1;
	int32_t t22 = -2;

	t22 = (((x89==x90)/x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int64_t x94 = INT64_MIN;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -2174;

	t23 = (((x93==x94)/x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = 0;
	int32_t x98 = INT32_MAX;
	int64_t x99 = 406719755LL;
	static volatile int8_t x100 = -1;
	int32_t t24 = -538186;

	t24 = (((x97==x98)/x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = UINT16_MAX;

	t25 = (((x101==x102)/x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 112483U;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = UINT32_MAX;

	t26 = (((x105==x106)/x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = 50;
	static volatile int32_t x110 = INT32_MIN;
	int64_t x112 = INT64_MIN;

	t27 = (((x109==x110)/x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 2256;
	int8_t x116 = -1;
	volatile int32_t t28 = 22625003;

	t28 = (((x113==x114)/x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	int64_t x119 = 1011963360000530575LL;
	volatile int8_t x120 = -1;
	volatile int32_t t29 = 0;

	t29 = (((x117==x118)/x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 13U;
	uint16_t x122 = 1777U;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MIN;

	t30 = (((x121==x122)/x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	int64_t x126 = INT64_MIN;
	int16_t x127 = 306;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t31 = 5;

	t31 = (((x125==x126)/x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	int64_t x131 = -1581550LL;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 1716023;

	t32 = (((x129==x130)/x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	volatile int8_t x134 = 21;
	uint64_t x135 = 1117231685665LLU;
	uint64_t x136 = 8LLU;
	int32_t t33 = -654;

	t33 = (((x133==x134)/x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	static volatile uint16_t x138 = 22175U;
	static int8_t x139 = -1;
	int16_t x140 = -6789;
	static volatile int32_t t34 = 18283494;

	t34 = (((x137==x138)/x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 877U;
	static int16_t x142 = INT16_MAX;
	int32_t x143 = INT32_MIN;
	uint64_t x144 = 404771562404LLU;
	volatile int32_t t35 = 30356970;

	t35 = (((x141==x142)/x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MIN;
	uint8_t x148 = 27U;
	volatile int32_t t36 = 5;

	t36 = (((x145==x146)/x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 7445LLU;
	static int32_t t37 = -106;

	t37 = (((x149==x150)/x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x155 = -1;
	uint64_t x156 = 2136877962791798409LLU;

	t38 = (((x153==x154)/x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	uint32_t x160 = UINT32_MAX;
	int32_t t39 = -975;

	t39 = (((x157==x158)/x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint16_t x162 = 8161U;
	int32_t x164 = 103632640;
	volatile int32_t t40 = 1981;

	t40 = (((x161==x162)/x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static int8_t x168 = 1;
	volatile int32_t t41 = -25;

	t41 = (((x165==x166)/x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x172 = UINT32_MAX;

	t42 = (((x169==x170)/x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MAX;
	uint64_t x175 = 32648668LLU;
	int64_t x176 = -13950591471LL;
	int32_t t43 = 2652285;

	t43 = (((x173==x174)/x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x177 = INT16_MIN;
	int8_t x178 = -1;
	uint32_t x180 = 40008890U;
	static volatile int32_t t44 = -1316522;

	t44 = (((x177==x178)/x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 1U;
	int8_t x182 = INT8_MIN;
	uint64_t x183 = UINT64_MAX;

	t45 = (((x181==x182)/x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -7;
	int32_t x187 = INT32_MAX;
	uint32_t x188 = 24667U;
	static volatile int32_t t46 = -214;

	t46 = (((x185==x186)/x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int32_t x191 = -45;
	int8_t x192 = 0;
	volatile int32_t t47 = -46;

	t47 = (((x189==x190)/x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = -3;

	t48 = (((x193==x194)/x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x199 = 1629U;
	uint8_t x200 = 104U;
	volatile int32_t t49 = 1213;

	t49 = (((x197==x198)/x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 9U;
	uint8_t x202 = 0U;
	static int64_t x203 = -3442833455898LL;
	int32_t x204 = -1;
	int32_t t50 = 593;

	t50 = (((x201==x202)/x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -1LL;
	uint16_t x206 = UINT16_MAX;
	static int8_t x207 = 3;
	static uint64_t x208 = 3495401695397658275LLU;

	t51 = (((x205==x206)/x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = -39;
	uint16_t x211 = 236U;
	static int16_t x212 = -1;
	static volatile int32_t t52 = -71;

	t52 = (((x209==x210)/x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static uint64_t x216 = UINT64_MAX;
	static volatile int32_t t53 = -485;

	t53 = (((x213==x214)/x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MAX;
	static int64_t x219 = -1LL;
	volatile int16_t x220 = -1;
	volatile int32_t t54 = 374;

	t54 = (((x217==x218)/x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = UINT16_MAX;
	volatile int32_t x222 = 2;
	volatile uint16_t x223 = 150U;
	static volatile uint8_t x224 = 3U;

	t55 = (((x221==x222)/x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = -22;
	uint16_t x227 = 1181U;
	volatile int8_t x228 = INT8_MIN;
	int32_t t56 = 5793477;

	t56 = (((x225==x226)/x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 2;
	uint64_t x230 = 146LLU;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = 12U;
	volatile int32_t t57 = 47510455;

	t57 = (((x229==x230)/x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 1U;
	static int8_t x234 = 43;
	int32_t x235 = -53;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 18;

	t58 = (((x233==x234)/x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	static volatile uint16_t x239 = 1U;
	static int8_t x240 = -1;

	t59 = (((x237==x238)/x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	static volatile int32_t t60 = 24;

	t60 = (((x241==x242)/x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x247 = INT8_MIN;
	static int8_t x248 = INT8_MIN;

	t61 = (((x245==x246)/x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	int16_t x251 = -28;
	static uint8_t x252 = 11U;

	t62 = (((x249==x250)/x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 294U;
	static volatile int16_t x254 = INT16_MIN;
	volatile int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MAX;
	volatile int32_t t63 = -8688;

	t63 = (((x253==x254)/x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = UINT16_MAX;
	volatile int8_t x258 = 24;
	static uint64_t x259 = 312005830LLU;
	int16_t x260 = INT16_MIN;

	t64 = (((x257==x258)/x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x263 = 3U;
	int32_t t65 = -2681;

	t65 = (((x261==x262)/x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 164U;
	static volatile int16_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MAX;
	volatile int32_t t66 = -64993;

	t66 = (((x265==x266)/x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 31303745206320278LL;
	int16_t x271 = -7412;
	uint16_t x272 = 5U;
	volatile int32_t t67 = 0;

	t67 = (((x269==x270)/x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 2767763U;
	int16_t x275 = INT16_MIN;
	volatile int8_t x276 = INT8_MAX;

	t68 = (((x273==x274)/x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int32_t x278 = -1;
	static int64_t x279 = INT64_MIN;
	int32_t t69 = 19578537;

	t69 = (((x277==x278)/x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x282 = -520;
	uint8_t x283 = UINT8_MAX;
	uint64_t x284 = 36108764LLU;
	volatile int32_t t70 = -1;

	t70 = (((x281==x282)/x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -6832775709792001LL;
	uint8_t x286 = 16U;
	int32_t x287 = -6728626;
	int16_t x288 = 0;
	int32_t t71 = -3902;

	t71 = (((x285==x286)/x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	static uint64_t x290 = 1483LLU;
	uint16_t x291 = UINT16_MAX;
	static volatile int16_t x292 = -1;
	volatile int32_t t72 = 2754474;

	t72 = (((x289==x290)/x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = -87182;
	int64_t x294 = -1452LL;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -6789112;

	t73 = (((x293==x294)/x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 39U;
	int64_t x298 = INT64_MAX;
	int64_t x299 = INT64_MAX;
	static int8_t x300 = INT8_MIN;

	t74 = (((x297==x298)/x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MIN;
	int32_t x303 = -897;
	static volatile uint8_t x304 = 1U;
	volatile int32_t t75 = -69396619;

	t75 = (((x301==x302)/x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 83263313LLU;
	static int16_t x306 = INT16_MIN;
	int16_t x307 = 6070;
	static int16_t x308 = INT16_MAX;
	static volatile int32_t t76 = -61;

	t76 = (((x305==x306)/x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MAX;
	static int8_t x311 = -1;
	int32_t t77 = -24687;

	t77 = (((x309==x310)/x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	uint16_t x315 = 188U;
	static int32_t t78 = 19653406;

	t78 = (((x313==x314)/x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = INT8_MAX;
	volatile int8_t x319 = -1;
	volatile uint8_t x320 = UINT8_MAX;
	int32_t t79 = 1;

	t79 = (((x317==x318)/x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 2075;
	int64_t x323 = INT64_MAX;
	int16_t x324 = -1;
	static volatile int32_t t80 = -53199;

	t80 = (((x321==x322)/x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int32_t t81 = -216;

	t81 = (((x325==x326)/x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x330 = 1860103LLU;
	static int32_t x331 = INT32_MIN;
	static uint32_t x332 = 505981105U;
	int32_t t82 = -6751707;

	t82 = (((x329==x330)/x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 3U;
	int16_t x335 = -1;
	static volatile int32_t t83 = -10311322;

	t83 = (((x333==x334)/x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 4247311540741807LLU;
	volatile uint16_t x338 = UINT16_MAX;
	uint16_t x339 = 965U;
	int32_t x340 = 82334;

	t84 = (((x337==x338)/x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x341 = 691918970228367733LLU;
	uint32_t x342 = 195881293U;
	int32_t x343 = 14403;
	int64_t x344 = -7013LL;
	volatile int32_t t85 = -59703285;

	t85 = (((x341==x342)/x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int64_t x346 = -14358016648LL;
	int32_t x347 = -209;
	uint16_t x348 = 483U;

	t86 = (((x345==x346)/x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x350 = -1;
	volatile uint64_t x351 = UINT64_MAX;
	volatile int32_t x352 = INT32_MAX;
	static int32_t t87 = 222;

	t87 = (((x349==x350)/x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -1367943018169LL;
	int32_t x356 = -1;

	t88 = (((x353==x354)/x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	static volatile int64_t x358 = -1LL;
	uint16_t x359 = UINT16_MAX;
	static int64_t x360 = 1844791173762992LL;

	t89 = (((x357==x358)/x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MAX;
	static uint8_t x364 = UINT8_MAX;
	static volatile int32_t t90 = 55268;

	t90 = (((x361==x362)/x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -395;
	volatile int32_t x366 = INT32_MIN;
	volatile int16_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	static volatile int32_t t91 = 18527;

	t91 = (((x365==x366)/x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = 1;
	int8_t x370 = -1;
	int8_t x372 = INT8_MIN;
	static int32_t t92 = -4634707;

	t92 = (((x369==x370)/x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	int16_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 710;

	t93 = (((x373==x374)/x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x380 = INT16_MAX;
	int32_t t94 = -62942;

	t94 = (((x377==x378)/x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 2U;
	static int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MAX;

	t95 = (((x381==x382)/x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile int64_t x386 = -1LL;
	int8_t x387 = INT8_MAX;
	int16_t x388 = 65;

	t96 = (((x385==x386)/x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 252U;
	int32_t x390 = 0;
	static uint16_t x391 = 47U;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t97 = 704;

	t97 = (((x389==x390)/x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = 6;
	int8_t x395 = -1;
	static int16_t x396 = -1;

	t98 = (((x393==x394)/x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int64_t x398 = INT64_MAX;
	volatile int16_t x399 = -4;
	static int8_t x400 = -21;
	static int32_t t99 = 1684489;

	t99 = (((x397==x398)/x399)<=x400);

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

