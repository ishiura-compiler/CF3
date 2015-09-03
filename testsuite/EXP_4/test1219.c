#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x1 = 510U;
int16_t x7 = INT16_MAX;
int8_t x10 = 1;
uint32_t x14 = UINT32_MAX;
volatile int64_t x24 = INT64_MIN;
int16_t x31 = INT16_MIN;
static uint16_t x38 = 11U;
uint16_t x41 = 10U;
uint64_t x46 = UINT64_MAX;
uint64_t x47 = 14445LLU;
volatile int16_t x48 = INT16_MIN;
int64_t x60 = INT64_MIN;
int32_t x61 = -158;
uint16_t x65 = 41U;
int8_t x80 = INT8_MIN;
uint64_t x81 = 919040717842277LLU;
int16_t x87 = INT16_MIN;
int32_t x92 = INT32_MIN;
uint32_t x95 = 941722U;
int8_t x96 = INT8_MIN;
static int32_t t23 = -13;
volatile int8_t x99 = 20;
volatile int32_t t27 = 54309361;
uint16_t x116 = UINT16_MAX;
uint16_t x120 = 7U;
uint64_t x123 = UINT64_MAX;
int32_t t31 = 0;
int32_t x138 = INT32_MIN;
int32_t x139 = -256260800;
int64_t x144 = INT64_MIN;
static uint64_t x146 = 135714298471LLU;
volatile uint64_t x150 = 515114265873LLU;
int32_t t37 = -14006934;
int64_t x155 = INT64_MAX;
volatile uint8_t x156 = UINT8_MAX;
volatile int32_t x158 = -12030;
int32_t x163 = -1;
int32_t x164 = INT32_MIN;
int32_t t43 = 56013;
uint8_t x180 = 5U;
volatile int64_t x182 = INT64_MAX;
int64_t x189 = INT64_MIN;
static uint32_t x191 = UINT32_MAX;
uint16_t x195 = 5645U;
uint16_t x207 = UINT16_MAX;
int8_t x211 = -1;
uint64_t x212 = UINT64_MAX;
int32_t x216 = INT32_MIN;
int32_t t53 = 0;
volatile int32_t t54 = -224424709;
int64_t x223 = INT64_MAX;
static int16_t x227 = 1;
int64_t x228 = -1LL;
static int8_t x230 = -1;
volatile int64_t x232 = -1323944241822717LL;
static volatile int32_t t57 = 6377774;
int16_t x233 = INT16_MAX;
uint32_t x234 = UINT32_MAX;
static uint32_t x239 = UINT32_MAX;
volatile uint8_t x258 = 43U;
static int32_t t64 = -119423;
static int16_t x261 = 2;
int16_t x268 = -1;
static volatile int32_t t66 = 4767834;
volatile uint64_t x280 = 3001828386339858LLU;
int16_t x285 = -1;
int32_t x289 = INT32_MIN;
int16_t x309 = 6;
int8_t x310 = INT8_MIN;
volatile int16_t x312 = INT16_MAX;
volatile int16_t x315 = INT16_MIN;
volatile uint8_t x318 = 0U;
volatile int8_t x323 = -12;
int64_t x334 = -1LL;
static uint16_t x336 = 38U;
int64_t x347 = INT64_MIN;
int32_t t86 = 77;
volatile int32_t t87 = 78869211;
uint32_t x355 = 16U;
uint16_t x362 = 2U;
int16_t x364 = -1;
static uint8_t x368 = 0U;
int32_t t92 = -853241648;
int16_t x376 = INT16_MIN;
int8_t x377 = INT8_MIN;
static uint32_t x378 = 1U;
static uint32_t x381 = 14U;
static int8_t x382 = INT8_MIN;
int8_t x387 = -1;
int32_t x388 = 227052310;


void f0(void) {
	int16_t x2 = 485;
	static int64_t x3 = 12LL;
	int32_t x4 = 1;
	int32_t t0 = -299428578;

	t0 = (x1<=(x2*(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = -8;
	volatile int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -2;

	t1 = (x5<=(x6*(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint64_t x11 = 33188573502812LLU;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 47207;

	t2 = (x9<=(x10*(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 18187903LLU;
	static volatile int16_t x15 = INT16_MIN;
	static uint32_t x16 = 5U;
	volatile int32_t t3 = 8289993;

	t3 = (x13<=(x14*(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x18 = UINT8_MAX;
	volatile uint16_t x19 = 162U;
	uint8_t x20 = 118U;
	volatile int32_t t4 = 9;

	t4 = (x17<=(x18*(x19==x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x21 = UINT8_MAX;
	volatile int32_t x22 = 1;
	static int64_t x23 = INT64_MAX;
	int32_t t5 = -91364965;

	t5 = (x21<=(x22*(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int32_t x26 = INT32_MAX;
	int8_t x27 = INT8_MIN;
	int32_t x28 = 167419;
	volatile int32_t t6 = 2;

	t6 = (x25<=(x26*(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 16181927795LLU;
	static volatile uint8_t x30 = UINT8_MAX;
	uint64_t x32 = 1626292951957648LLU;
	int32_t t7 = 981077;

	t7 = (x29<=(x30*(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	uint8_t x34 = 2U;
	int32_t x35 = -1;
	int16_t x36 = -1;
	static volatile int32_t t8 = -507;

	t8 = (x33<=(x34*(x35==x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int16_t x39 = INT16_MIN;
	static volatile int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -2;

	t9 = (x37<=(x38*(x39==x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 245U;
	uint32_t x43 = 2U;
	static uint32_t x44 = 4U;
	int32_t t10 = 590;

	t10 = (x41<=(x42*(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t t11 = -1168267;

	t11 = (x45<=(x46*(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 6068U;
	static int32_t x50 = 289768;
	int32_t x51 = INT32_MAX;
	static volatile int16_t x52 = -1;
	volatile int32_t t12 = 0;

	t12 = (x49<=(x50*(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -1LL;
	static volatile uint8_t x54 = 3U;
	uint8_t x55 = 1U;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t13 = -201776;

	t13 = (x53<=(x54*(x55==x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 0U;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = 1664U;
	static int32_t t14 = -71681398;

	t14 = (x57<=(x58*(x59==x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = -8667;
	int64_t x63 = INT64_MIN;
	int8_t x64 = -1;
	int32_t t15 = 15455245;

	t15 = (x61<=(x62*(x63==x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = -1;
	uint8_t x67 = 27U;
	int32_t x68 = 8311760;
	static int32_t t16 = 216210401;

	t16 = (x65<=(x66*(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	static uint64_t x70 = 5LLU;
	volatile int32_t x71 = -7266310;
	int16_t x72 = 3185;
	volatile int32_t t17 = -973534332;

	t17 = (x69<=(x70*(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	uint64_t x74 = 431578803078LLU;
	int16_t x75 = -47;
	uint16_t x76 = 0U;
	int32_t t18 = -68;

	t18 = (x73<=(x74*(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 55U;
	volatile int64_t x78 = INT64_MIN;
	static int8_t x79 = 59;
	volatile int32_t t19 = -9961494;

	t19 = (x77<=(x78*(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -3;
	int32_t x83 = -1;
	static volatile int64_t x84 = INT64_MIN;
	int32_t t20 = -388747088;

	t20 = (x81<=(x82*(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	volatile int32_t x86 = -1;
	static int64_t x88 = INT64_MAX;
	int32_t t21 = 1064;

	t21 = (x85<=(x86*(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static volatile uint32_t x90 = 110187468U;
	volatile int16_t x91 = 1;
	int32_t t22 = 60878535;

	t22 = (x89<=(x90*(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = UINT32_MAX;
	static uint64_t x94 = 3586LLU;

	t23 = (x93<=(x94*(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = UINT8_MAX;
	int8_t x98 = -12;
	uint16_t x100 = 13552U;
	static int32_t t24 = -20229;

	t24 = (x97<=(x98*(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 2253257U;
	int8_t x102 = -1;
	int32_t x103 = -124;
	volatile int16_t x104 = -1;
	int32_t t25 = 125611;

	t25 = (x101<=(x102*(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	static int16_t x106 = INT16_MAX;
	uint16_t x107 = UINT16_MAX;
	static uint32_t x108 = UINT32_MAX;
	int32_t t26 = 6598606;

	t26 = (x105<=(x106*(x107==x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MAX;
	volatile int16_t x110 = -344;
	static uint8_t x111 = 18U;
	int32_t x112 = -150309431;

	t27 = (x109<=(x110*(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1633758491133286LL;
	int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MAX;
	int32_t t28 = 7253147;

	t28 = (x113<=(x114*(x115==x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = -6809215;
	int32_t x119 = INT32_MIN;
	volatile int32_t t29 = 23658621;

	t29 = (x117<=(x118*(x119==x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 393753;
	int64_t x122 = INT64_MIN;
	uint16_t x124 = 7U;
	int32_t t30 = 3683;

	t30 = (x121<=(x122*(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	static uint16_t x126 = UINT16_MAX;
	int32_t x127 = -1;
	volatile uint8_t x128 = 6U;

	t31 = (x125<=(x126*(x127==x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	uint64_t x130 = 7766712051LLU;
	uint16_t x131 = 33U;
	volatile uint64_t x132 = 177156107208015980LLU;
	volatile int32_t t32 = -25;

	t32 = (x129<=(x130*(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	uint16_t x134 = 19599U;
	int8_t x135 = 4;
	volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = -8314;

	t33 = (x133<=(x134*(x135==x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = 41;

	t34 = (x137<=(x138*(x139==x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MAX;
	static uint64_t x143 = 11704LLU;
	volatile int32_t t35 = 12055581;

	t35 = (x141<=(x142*(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	volatile uint8_t x147 = 0U;
	uint32_t x148 = 110213U;
	int32_t t36 = 106;

	t36 = (x145<=(x146*(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	volatile int8_t x151 = INT8_MAX;
	static int64_t x152 = 926248228139544918LL;

	t37 = (x149<=(x150*(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MIN;
	int32_t t38 = -54145;

	t38 = (x153<=(x154*(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 2006814838U;
	uint64_t x159 = 535732146962215069LLU;
	int8_t x160 = -2;
	int32_t t39 = 2146;

	t39 = (x157<=(x158*(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	static uint8_t x162 = UINT8_MAX;
	int32_t t40 = 73751655;

	t40 = (x161<=(x162*(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	int32_t x166 = -1;
	int16_t x167 = 1659;
	uint16_t x168 = 0U;
	int32_t t41 = 1049867;

	t41 = (x165<=(x166*(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MIN;
	int16_t x171 = 1781;
	int8_t x172 = -1;
	int32_t t42 = 199103;

	t42 = (x169<=(x170*(x171==x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int32_t x174 = -156252;
	int8_t x175 = 0;
	static int32_t x176 = -99079342;

	t43 = (x173<=(x174*(x175==x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	volatile int32_t x178 = INT32_MIN;
	uint64_t x179 = 20472LLU;
	int32_t t44 = -632;

	t44 = (x177<=(x178*(x179==x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 15U;
	int32_t x183 = 29;
	static int64_t x184 = -29LL;
	int32_t t45 = 519;

	t45 = (x181<=(x182*(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	static int8_t x186 = -1;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = 1009U;
	int32_t t46 = 69693;

	t46 = (x185<=(x186*(x187==x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 35U;
	static int16_t x192 = -31;
	static volatile int32_t t47 = -294615344;

	t47 = (x189<=(x190*(x191==x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	uint32_t x194 = 163299U;
	int32_t x196 = INT32_MIN;
	static int32_t t48 = 495;

	t48 = (x193<=(x194*(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 3U;
	static uint16_t x198 = 15U;
	volatile int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	int32_t t49 = 3691233;

	t49 = (x197<=(x198*(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 632U;
	uint32_t x202 = 880926649U;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -145069;

	t50 = (x201<=(x202*(x203==x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	int32_t x206 = 26740115;
	uint8_t x208 = 103U;
	int32_t t51 = -368;

	t51 = (x205<=(x206*(x207==x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 10U;
	int64_t x210 = INT64_MIN;
	int32_t t52 = -74285423;

	t52 = (x209<=(x210*(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 1;
	int8_t x214 = 0;
	volatile int8_t x215 = 6;

	t53 = (x213<=(x214*(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 2;
	volatile uint32_t x218 = UINT32_MAX;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -24272820LL;

	t54 = (x217<=(x218*(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 30LLU;
	int8_t x222 = -3;
	uint16_t x224 = 1U;
	static int32_t t55 = 42082;

	t55 = (x221<=(x222*(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -7;
	uint16_t x226 = UINT16_MAX;
	int32_t t56 = -70;

	t56 = (x225<=(x226*(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = -1;
	static volatile uint64_t x231 = 77LLU;

	t57 = (x229<=(x230*(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x235 = 5682;
	uint32_t x236 = UINT32_MAX;
	int32_t t58 = 0;

	t58 = (x233<=(x234*(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 183804570984128457LL;
	uint16_t x238 = 2900U;
	static int8_t x240 = INT8_MAX;
	int32_t t59 = 119714944;

	t59 = (x237<=(x238*(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -19309;
	uint16_t x242 = 118U;
	uint16_t x243 = 976U;
	static uint64_t x244 = 38LLU;
	int32_t t60 = 0;

	t60 = (x241<=(x242*(x243==x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int32_t x246 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	volatile int32_t x248 = INT32_MAX;
	volatile int32_t t61 = 1044374;

	t61 = (x245<=(x246*(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	uint32_t x250 = 501U;
	int16_t x251 = 627;
	static int64_t x252 = -37351005818LL;
	int32_t t62 = 36;

	t62 = (x249<=(x250*(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MIN;
	int64_t x254 = -1LL;
	static int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MAX;
	int32_t t63 = -461;

	t63 = (x253<=(x254*(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 11938U;
	uint8_t x259 = 4U;
	volatile int8_t x260 = -1;

	t64 = (x257<=(x258*(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 130916929740LLU;
	int32_t x263 = -1;
	static int8_t x264 = -1;
	volatile int32_t t65 = -33256;

	t65 = (x261<=(x262*(x263==x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x266 = 354804503U;
	int64_t x267 = INT64_MAX;

	t66 = (x265<=(x266*(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	static uint32_t x270 = 481U;
	volatile int32_t x271 = INT32_MIN;
	int64_t x272 = 3LL;
	int32_t t67 = -3995440;

	t67 = (x269<=(x270*(x271==x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -1;
	volatile int16_t x274 = -1;
	int8_t x275 = -1;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 1;

	t68 = (x273<=(x274*(x275==x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	int8_t x278 = 12;
	volatile uint16_t x279 = UINT16_MAX;
	volatile int32_t t69 = -531374;

	t69 = (x277<=(x278*(x279==x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x281 = INT32_MIN;
	int32_t x282 = -10557821;
	static uint64_t x283 = UINT64_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = -16525219;

	t70 = (x281<=(x282*(x283==x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 43U;
	uint16_t x287 = UINT16_MAX;
	volatile int32_t x288 = INT32_MIN;
	int32_t t71 = -57;

	t71 = (x285<=(x286*(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = INT8_MIN;
	static uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 10269267;

	t72 = (x289<=(x290*(x291==x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MAX;
	static int32_t x294 = -1;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = -1LL;
	volatile int32_t t73 = -445;

	t73 = (x293<=(x294*(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = -1;
	int32_t x299 = -1;
	int32_t x300 = -1;
	volatile int32_t t74 = 107351949;

	t74 = (x297<=(x298*(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int8_t x302 = -29;
	volatile int16_t x303 = -2696;
	int64_t x304 = INT64_MIN;
	volatile int32_t t75 = -10;

	t75 = (x301<=(x302*(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 2U;
	int64_t x306 = -2987816740LL;
	int16_t x307 = INT16_MAX;
	volatile int32_t x308 = 112050;
	volatile int32_t t76 = -362440;

	t76 = (x305<=(x306*(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x311 = 2;
	volatile int32_t t77 = 787905;

	t77 = (x309<=(x310*(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 1U;
	int16_t x314 = INT16_MIN;
	int32_t x316 = -1;
	static int32_t t78 = 162;

	t78 = (x313<=(x314*(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	static int8_t x319 = INT8_MIN;
	uint16_t x320 = UINT16_MAX;
	int32_t t79 = 27845571;

	t79 = (x317<=(x318*(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -576;
	int64_t x322 = INT64_MIN;
	volatile uint16_t x324 = UINT16_MAX;
	int32_t t80 = -16824;

	t80 = (x321<=(x322*(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = 317557130423LL;
	uint32_t x326 = UINT32_MAX;
	static uint64_t x327 = UINT64_MAX;
	int16_t x328 = -399;
	int32_t t81 = 29947;

	t81 = (x325<=(x326*(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x330 = 0;
	volatile int64_t x331 = -1LL;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -87545;

	t82 = (x329<=(x330*(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MIN;
	int64_t x335 = INT64_MAX;
	volatile int32_t t83 = 11;

	t83 = (x333<=(x334*(x335==x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 3U;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = 23;
	uint8_t x340 = UINT8_MAX;
	int32_t t84 = -96;

	t84 = (x337<=(x338*(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	static volatile int64_t x342 = -20358774384LL;
	volatile uint8_t x343 = 2U;
	int8_t x344 = 19;
	volatile int32_t t85 = 1081;

	t85 = (x341<=(x342*(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	uint32_t x346 = UINT32_MAX;
	static int16_t x348 = INT16_MIN;

	t86 = (x345<=(x346*(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	static int16_t x350 = -214;
	int32_t x351 = 3041;
	int8_t x352 = INT8_MIN;

	t87 = (x349<=(x350*(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int16_t x354 = INT16_MIN;
	static uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = 24875166;

	t88 = (x353<=(x354*(x355==x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -507387;
	uint16_t x358 = 4878U;
	int64_t x359 = INT64_MIN;
	uint8_t x360 = 0U;
	volatile int32_t t89 = 31114;

	t89 = (x357<=(x358*(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -3;
	uint16_t x363 = UINT16_MAX;
	volatile int32_t t90 = -8;

	t90 = (x361<=(x362*(x363==x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	volatile int64_t x366 = -1LL;
	int32_t x367 = INT32_MIN;
	static int32_t t91 = 37680;

	t91 = (x365<=(x366*(x367==x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MAX;
	static uint16_t x371 = 5441U;
	volatile int32_t x372 = -1;

	t92 = (x369<=(x370*(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = 731U;
	volatile int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MIN;
	int32_t t93 = -912288;

	t93 = (x373<=(x374*(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x379 = 0U;
	int16_t x380 = -3;
	static volatile int32_t t94 = 103;

	t94 = (x377<=(x378*(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x383 = INT8_MAX;
	static int8_t x384 = -1;
	int32_t t95 = -3181134;

	t95 = (x381<=(x382*(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	int32_t x386 = INT32_MIN;
	volatile int32_t t96 = -974870;

	t96 = (x385<=(x386*(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	static uint16_t x390 = UINT16_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	int32_t x392 = INT32_MAX;
	volatile int32_t t97 = 757;

	t97 = (x389<=(x390*(x391==x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	volatile uint8_t x394 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = UINT8_MAX;
	int32_t t98 = -117072478;

	t98 = (x393<=(x394*(x395==x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MAX;
	uint8_t x398 = 0U;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = -74135LL;
	volatile int32_t t99 = -389264;

	t99 = (x397<=(x398*(x399==x400)));

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

