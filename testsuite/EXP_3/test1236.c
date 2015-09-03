#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 27;
uint8_t x7 = UINT8_MAX;
volatile uint32_t t1 = 0U;
uint32_t t3 = 119U;
static int64_t x27 = -1LL;
volatile int32_t t6 = -25562;
volatile int64_t x29 = INT64_MIN;
uint8_t x31 = 55U;
static int16_t x43 = -1;
static int64_t x45 = -157305107448703LL;
uint16_t x53 = 298U;
int64_t x55 = INT64_MIN;
int8_t x60 = 2;
int32_t t14 = -158;
int64_t x65 = INT64_MIN;
volatile uint32_t x66 = 741338U;
static int64_t x67 = -1LL;
uint8_t x68 = UINT8_MAX;
int16_t x72 = -1;
static volatile int32_t t17 = -2286763;
uint8_t x86 = UINT8_MAX;
uint16_t x90 = 127U;
uint16_t x92 = UINT16_MAX;
int32_t x95 = 13737564;
uint32_t x102 = 25634897U;
static volatile int8_t x103 = -1;
volatile uint32_t x106 = 7U;
int16_t x110 = INT16_MIN;
volatile uint32_t t26 = 30052U;
uint32_t x119 = 2U;
int16_t x123 = INT16_MIN;
uint8_t x127 = 31U;
uint16_t x129 = 6991U;
int32_t x130 = INT32_MAX;
int32_t x131 = -1;
int16_t x133 = INT16_MIN;
static int32_t t31 = 382;
int64_t x139 = -1LL;
static int8_t x146 = -4;
int32_t x150 = 4959;
int32_t x156 = -788664;
int32_t x158 = -1;
static int32_t t38 = 8;
volatile int64_t x167 = -197LL;
volatile int32_t t40 = -58;
uint32_t x175 = 17137462U;
int64_t x182 = 283248554466LL;
static int64_t x189 = -1413447456976862584LL;
int64_t t45 = -30988021522201858LL;
int8_t x208 = INT8_MIN;
int64_t x209 = INT64_MAX;
volatile int8_t x212 = INT8_MAX;
int8_t x213 = -1;
uint32_t x224 = 72833143U;
int64_t x228 = -60064LL;
static int32_t x230 = INT32_MIN;
int32_t t55 = 874;
int32_t x236 = INT32_MIN;
int64_t x244 = -1LL;
static uint64_t x245 = UINT64_MAX;
static int8_t x253 = 6;
static uint32_t x262 = 77680U;
uint8_t x271 = 1U;
volatile int64_t x273 = -1LL;
static volatile int64_t t66 = -56152LL;
int8_t x277 = INT8_MAX;
static int64_t x285 = INT64_MIN;
uint32_t x286 = 20003652U;
int16_t x292 = -2;
volatile int16_t x301 = INT16_MIN;
int16_t x315 = -1;
int64_t x316 = INT64_MAX;
int32_t x319 = INT32_MIN;
volatile uint64_t t79 = 389LLU;
volatile int16_t x334 = INT16_MIN;
uint32_t x335 = UINT32_MAX;
static int64_t x344 = INT64_MAX;
int64_t x345 = -842LL;
int64_t x347 = -1LL;
int64_t t84 = 2061667323052982108LL;
static int32_t t86 = 446110;
uint32_t x359 = UINT32_MAX;
static int16_t x360 = INT16_MAX;
volatile int64_t x365 = -1LL;
int32_t x373 = INT32_MIN;
int32_t x376 = INT32_MIN;
static uint32_t x379 = 1U;
int64_t x382 = INT64_MAX;
uint64_t x383 = 58365905124777992LLU;
int64_t t93 = 20353318LL;
int32_t x385 = INT32_MAX;
uint8_t x388 = UINT8_MAX;
volatile int8_t x389 = INT8_MAX;
static uint32_t x390 = 6373115U;
int8_t x392 = INT8_MIN;
uint32_t t95 = 4570129U;
volatile int32_t x395 = -1;
int64_t x399 = INT64_MIN;
volatile int8_t x400 = INT8_MAX;
int64_t x403 = -159777416634928119LL;
int32_t x406 = 189;


void f0(void) {
	static uint64_t x1 = 4003249151630LLU;
	int8_t x2 = INT8_MIN;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 831LLU;

	t0 = ((x1%x2)+(x3==x4));

	if (t0 != 4003249151630LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint8_t x6 = 1U;
	uint8_t x8 = UINT8_MAX;

	t1 = ((x5%x6)+(x7==x8));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	static int16_t x10 = INT16_MAX;
	static int64_t x11 = INT64_MIN;
	uint64_t x12 = UINT64_MAX;
	int64_t t2 = 3398357580949LL;

	t2 = ((x9%x10)+(x11==x12));

	if (t2 != 7LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 126408786U;
	static int16_t x14 = INT16_MIN;
	static uint32_t x15 = UINT32_MAX;
	static int8_t x16 = -3;

	t3 = ((x13%x14)+(x15==x16));

	if (t3 != 126408786U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	volatile uint64_t x18 = 565053LLU;
	static int64_t x19 = INT64_MIN;
	int64_t x20 = 604LL;
	volatile uint64_t t4 = 640801837LLU;

	t4 = ((x17%x18)+(x19==x20));

	if (t4 != 437650LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint32_t x22 = UINT32_MAX;
	int16_t x23 = 66;
	int32_t x24 = INT32_MIN;
	uint32_t t5 = 52754U;

	t5 = ((x21%x22)+(x23==x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	int16_t x26 = -1511;
	int32_t x28 = INT32_MAX;

	t6 = ((x25%x26)+(x27==x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x30 = INT64_MAX;
	volatile int16_t x32 = -1;
	volatile int64_t t7 = 3LL;

	t7 = ((x29%x30)+(x31==x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -284076624LL;
	int32_t x34 = -1;
	int64_t x35 = 352803LL;
	static int8_t x36 = 0;
	volatile int64_t t8 = 2299148LL;

	t8 = ((x33%x34)+(x35==x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = -1;
	int32_t x40 = -1;
	volatile int64_t t9 = 1LL;

	t9 = ((x37%x38)+(x39==x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 132836155;
	int16_t x42 = INT16_MIN;
	uint64_t x44 = 5830879855315485LLU;
	static int32_t t10 = 5898936;

	t10 = ((x41%x42)+(x43==x44));

	if (t10 != 27451) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -13;
	static uint32_t x47 = UINT32_MAX;
	uint16_t x48 = UINT16_MAX;
	static volatile int64_t t11 = 16169159LL;

	t11 = ((x45%x46)+(x47==x48));

	if (t11 != -6LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static int64_t x50 = INT64_MIN;
	int8_t x51 = -3;
	static uint16_t x52 = UINT16_MAX;
	static volatile int64_t t12 = 69040254LL;

	t12 = ((x49%x50)+(x51==x52));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 107689358060LL;
	uint8_t x56 = 14U;
	int64_t t13 = 76865178069089775LL;

	t13 = ((x53%x54)+(x55==x56));

	if (t13 != 298LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;

	t14 = ((x57%x58)+(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	int16_t x62 = -1430;
	volatile uint8_t x63 = 0U;
	uint64_t x64 = 1473376841537LLU;
	int32_t t15 = 165020655;

	t15 = ((x61%x62)+(x63==x64));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t t16 = 4LL;

	t16 = ((x65%x66)+(x67==x68));

	if (t16 != -385432LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MAX;
	volatile int8_t x70 = INT8_MAX;
	volatile int16_t x71 = INT16_MIN;

	t17 = ((x69%x70)+(x71==x72));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	uint8_t x83 = 6U;
	volatile int32_t x84 = INT32_MIN;
	static volatile int64_t t18 = 388136376979223LL;

	t18 = ((x81%x82)+(x83==x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 5;
	static uint32_t x87 = 1U;
	int16_t x88 = -1517;
	volatile int32_t t19 = -6;

	t19 = ((x85%x86)+(x87==x88));

	if (t19 != 5) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	uint32_t x91 = UINT32_MAX;
	volatile int32_t t20 = -1;

	t20 = ((x89%x90)+(x91==x92));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = 22U;
	int8_t x94 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	static int32_t t21 = 113835;

	t21 = ((x93%x94)+(x95==x96));

	if (t21 != 22) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	int32_t x98 = INT32_MIN;
	int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MIN;
	static int32_t t22 = 327173948;

	t22 = ((x97%x98)+(x99==x100));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x101 = UINT32_MAX;
	int32_t x104 = INT32_MIN;
	volatile uint32_t t23 = 138601U;

	t23 = ((x101%x102)+(x103==x104));

	if (t23 != 13939496U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MIN;
	int16_t x107 = 0;
	int64_t x108 = INT64_MIN;
	volatile uint32_t t24 = 219U;

	t24 = ((x105%x106)+(x107==x108));

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	uint64_t x111 = 104074598609020LLU;
	volatile uint32_t x112 = 26295U;
	int32_t t25 = -1779;

	t25 = ((x109%x110)+(x111==x112));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x113 = UINT8_MAX;
	static uint32_t x114 = 6U;
	static volatile int8_t x115 = 6;
	int64_t x116 = 178521LL;

	t26 = ((x113%x114)+(x115==x116));

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 3213;
	uint32_t x118 = UINT32_MAX;
	int64_t x120 = -1LL;
	volatile uint32_t t27 = 1U;

	t27 = ((x117%x118)+(x119==x120));

	if (t27 != 3213U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = -1;
	uint64_t x122 = 28LLU;
	int16_t x124 = -1;
	uint64_t t28 = 6143000695381576177LLU;

	t28 = ((x121%x122)+(x123==x124));

	if (t28 != 15LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	static int8_t x128 = INT8_MAX;
	volatile int64_t t29 = 94LL;

	t29 = ((x125%x126)+(x127==x128));

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x132 = 3575U;
	int32_t t30 = -11;

	t30 = ((x129%x130)+(x131==x132));

	if (t30 != 6991) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x134 = INT16_MIN;
	int32_t x135 = 40993591;
	static uint32_t x136 = 22U;

	t31 = ((x133%x134)+(x135==x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	static uint16_t x138 = 31863U;
	static int64_t x140 = -3867726351169780258LL;
	static int32_t t32 = -731996;

	t32 = ((x137%x138)+(x139==x140));

	if (t32 != -905) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x141 = 57U;
	static int64_t x142 = -32293428124804157LL;
	uint32_t x143 = 105764U;
	int32_t x144 = INT32_MAX;
	int64_t t33 = -1129167309LL;

	t33 = ((x141%x142)+(x143==x144));

	if (t33 != 57LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -13491;
	int16_t x147 = -1;
	int32_t x148 = -1;
	static int32_t t34 = 390236248;

	t34 = ((x145%x146)+(x147==x148));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x149 = 130205440LL;
	static int16_t x151 = -1;
	int64_t x152 = INT64_MIN;
	volatile int64_t t35 = 49395LL;

	t35 = ((x149%x150)+(x151==x152));

	if (t35 != 1936LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = -1;
	static int64_t x154 = -1LL;
	int16_t x155 = -1;
	int64_t t36 = -301LL;

	t36 = ((x153%x154)+(x155==x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MAX;
	uint8_t x159 = 1U;
	uint64_t x160 = UINT64_MAX;
	static volatile int64_t t37 = -11480135089LL;

	t37 = ((x157%x158)+(x159==x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 582U;
	volatile int32_t x162 = 19;
	int8_t x163 = -48;
	int32_t x164 = INT32_MIN;

	t38 = ((x161%x162)+(x163==x164));

	if (t38 != 12) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	static volatile uint64_t x166 = 3353764485LLU;
	static int16_t x168 = INT16_MAX;
	uint64_t t39 = 47861462740109LLU;

	t39 = ((x165%x166)+(x167==x168));

	if (t39 != 406415723LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 325U;
	int16_t x170 = INT16_MAX;
	int8_t x171 = -2;
	static int32_t x172 = -1;

	t40 = ((x169%x170)+(x171==x172));

	if (t40 != 325) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x173 = UINT64_MAX;
	static uint64_t x174 = 15343582894007LLU;
	static int64_t x176 = 790106857521LL;
	uint64_t t41 = 3831LLU;

	t41 = ((x173%x174)+(x175==x176));

	if (t41 != 13600886999907LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -254;
	volatile uint16_t x178 = UINT16_MAX;
	volatile int16_t x179 = -1;
	uint64_t x180 = 1812LLU;
	volatile int32_t t42 = -322661;

	t42 = ((x177%x178)+(x179==x180));

	if (t42 != -254) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1LL;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = 11312LLU;
	volatile int64_t t43 = 63006222529568734LL;

	t43 = ((x181%x182)+(x183==x184));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = 1591106484908277LL;
	int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MAX;
	int16_t x188 = INT16_MIN;
	int64_t t44 = 18314LL;

	t44 = ((x185%x186)+(x187==x188));

	if (t44 != 117LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x190 = 31U;
	int64_t x191 = INT64_MIN;
	static volatile int8_t x192 = -55;

	t45 = ((x189%x190)+(x191==x192));

	if (t45 != -27LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 3U;
	int32_t x194 = INT32_MAX;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -11;
	volatile uint32_t t46 = 5471757U;

	t46 = ((x193%x194)+(x195==x196));

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	volatile int64_t x199 = INT64_MIN;
	int64_t x200 = INT64_MIN;
	volatile int64_t t47 = 8337034195238808LL;

	t47 = ((x197%x198)+(x199==x200));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x201 = UINT8_MAX;
	int16_t x202 = -1;
	uint16_t x203 = 78U;
	int8_t x204 = INT8_MIN;
	int32_t t48 = -57;

	t48 = ((x201%x202)+(x203==x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	int8_t x206 = -28;
	uint16_t x207 = 9U;
	int64_t t49 = -86397777963930910LL;

	t49 = ((x205%x206)+(x207==x208));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x210 = INT32_MIN;
	volatile int64_t x211 = -807917202848LL;
	int64_t t50 = 909090LL;

	t50 = ((x209%x210)+(x211==x212));

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x214 = -1973074402846623LL;
	static int8_t x215 = -1;
	uint16_t x216 = 753U;
	int64_t t51 = 30282981LL;

	t51 = ((x213%x214)+(x215==x216));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = 2028U;
	int16_t x219 = INT16_MIN;
	volatile uint64_t x220 = 2LLU;
	volatile int32_t t52 = 5;

	t52 = ((x217%x218)+(x219==x220));

	if (t52 != -320) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x221 = UINT32_MAX;
	volatile int32_t x222 = 3;
	int8_t x223 = 8;
	volatile uint32_t t53 = 1096337U;

	t53 = ((x221%x222)+(x223==x224));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	volatile int64_t x226 = INT64_MIN;
	int8_t x227 = -2;
	int64_t t54 = -10986876LL;

	t54 = ((x225%x226)+(x227==x228));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 696U;
	volatile int32_t x231 = INT32_MIN;
	int64_t x232 = -11977512170LL;

	t55 = ((x229%x230)+(x231==x232));

	if (t55 != 696) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x233 = UINT64_MAX;
	int32_t x234 = -1;
	int8_t x235 = INT8_MIN;
	static uint64_t t56 = 41517874319LLU;

	t56 = ((x233%x234)+(x235==x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x237 = 84U;
	int8_t x238 = INT8_MIN;
	static int8_t x239 = -1;
	volatile uint16_t x240 = 30780U;
	static volatile uint32_t t57 = 33U;

	t57 = ((x237%x238)+(x239==x240));

	if (t57 != 84U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	uint32_t x243 = UINT32_MAX;
	int32_t t58 = 5516;

	t58 = ((x241%x242)+(x243==x244));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MAX;
	volatile uint16_t x248 = 5U;
	static volatile uint64_t t59 = 462LLU;

	t59 = ((x245%x246)+(x247==x248));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 46780028LLU;
	uint64_t x250 = 2392502LLU;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MAX;
	static uint64_t t60 = 8943547LLU;

	t60 = ((x249%x250)+(x251==x252));

	if (t60 != 1322490LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x254 = -1LL;
	uint8_t x255 = 2U;
	uint16_t x256 = 1969U;
	int64_t t61 = -114262488LL;

	t61 = ((x253%x254)+(x255==x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x258 = -1788;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	uint32_t t62 = 0U;

	t62 = ((x257%x258)+(x259==x260));

	if (t62 != 1787U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	volatile int8_t x263 = 47;
	volatile int32_t x264 = -125174103;
	volatile uint32_t t63 = 265U;

	t63 = ((x261%x262)+(x263==x264));

	if (t63 != 7328U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x265 = 0U;
	int16_t x266 = INT16_MAX;
	int8_t x267 = INT8_MIN;
	int32_t x268 = -4;
	static volatile int32_t t64 = 199489038;

	t64 = ((x265%x266)+(x267==x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = 9U;
	uint32_t x270 = 118U;
	int32_t x272 = 1015790957;
	volatile uint32_t t65 = 84369U;

	t65 = ((x269%x270)+(x271==x272));

	if (t65 != 9U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x274 = 8;
	static int64_t x275 = INT64_MIN;
	static int64_t x276 = 13LL;

	t66 = ((x273%x274)+(x275==x276));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x278 = 5;
	static int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t67 = 37;

	t67 = ((x277%x278)+(x279==x280));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = 56;
	int16_t x282 = -1;
	uint64_t x283 = 7LLU;
	uint64_t x284 = 1LLU;
	volatile int32_t t68 = 1016192806;

	t68 = ((x281%x282)+(x283==x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x287 = -1;
	volatile int8_t x288 = -4;
	int64_t t69 = 401150LL;

	t69 = ((x285%x286)+(x287==x288));

	if (t69 != -17384300LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -27815962378589350LL;
	volatile int8_t x290 = -1;
	uint64_t x291 = 9671039120LLU;
	static int64_t t70 = -43453685LL;

	t70 = ((x289%x290)+(x291==x292));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = 10U;
	volatile int64_t x294 = INT64_MAX;
	static uint16_t x295 = UINT16_MAX;
	volatile int8_t x296 = -1;
	volatile int64_t t71 = 2LL;

	t71 = ((x293%x294)+(x295==x296));

	if (t71 != 10LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = 638259099;
	uint64_t x298 = 1LLU;
	int64_t x299 = INT64_MIN;
	uint64_t x300 = 491871830964990LLU;
	uint64_t t72 = 8252855361692LLU;

	t72 = ((x297%x298)+(x299==x300));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x302 = -1;
	uint8_t x303 = 2U;
	volatile int8_t x304 = INT8_MAX;
	volatile int32_t t73 = 7080862;

	t73 = ((x301%x302)+(x303==x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x305 = 1U;
	int32_t x306 = 38347984;
	int64_t x307 = INT64_MIN;
	int32_t x308 = -1;
	volatile int32_t t74 = 40487962;

	t74 = ((x305%x306)+(x307==x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = -92377063;
	uint16_t x310 = 51U;
	int16_t x311 = INT16_MIN;
	static volatile int32_t x312 = INT32_MIN;
	int32_t t75 = -4119646;

	t75 = ((x309%x310)+(x311==x312));

	if (t75 != -49) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = INT8_MAX;
	int8_t x314 = INT8_MIN;
	volatile int32_t t76 = -1333356;

	t76 = ((x313%x314)+(x315==x316));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = 2;
	int64_t x320 = -522827414510236LL;
	static int64_t t77 = -1015LL;

	t77 = ((x317%x318)+(x319==x320));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x321 = -32;
	int64_t x322 = INT64_MIN;
	int8_t x323 = 2;
	uint64_t x324 = 9611496LLU;
	volatile int64_t t78 = 717728547184449597LL;

	t78 = ((x321%x322)+(x323==x324));

	if (t78 != -32LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x325 = 29LLU;
	static uint64_t x326 = 1305231765315524606LLU;
	int64_t x327 = INT64_MAX;
	static int8_t x328 = INT8_MAX;

	t79 = ((x325%x326)+(x327==x328));

	if (t79 != 29LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = 6;
	int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	static int16_t x332 = -1;
	volatile int64_t t80 = -381639952089474990LL;

	t80 = ((x329%x330)+(x331==x332));

	if (t80 != 6LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x333 = -11;
	uint64_t x336 = 12016365492439LLU;
	volatile int32_t t81 = 21903;

	t81 = ((x333%x334)+(x335==x336));

	if (t81 != -11) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x337 = 51;
	static int64_t x338 = -52LL;
	static int8_t x339 = -1;
	uint64_t x340 = UINT64_MAX;
	static int64_t t82 = -2367635413LL;

	t82 = ((x337%x338)+(x339==x340));

	if (t82 != 52LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 1U;
	uint64_t x342 = 365LLU;
	uint64_t x343 = 272692892952LLU;
	static volatile uint64_t t83 = 45541120LLU;

	t83 = ((x341%x342)+(x343==x344));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x346 = 52U;
	uint32_t x348 = 81688U;

	t84 = ((x345%x346)+(x347==x348));

	if (t84 != -10LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = 1843U;
	int64_t x350 = -1LL;
	static int32_t x351 = INT32_MIN;
	static int64_t x352 = -1LL;
	volatile int64_t t85 = -7142LL;

	t85 = ((x349%x350)+(x351==x352));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = UINT8_MAX;
	uint16_t x354 = 27401U;
	uint16_t x355 = 14103U;
	static int8_t x356 = INT8_MIN;

	t86 = ((x353%x354)+(x355==x356));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -8323498LL;
	static int8_t x358 = INT8_MAX;
	static int64_t t87 = -17480785LL;

	t87 = ((x357%x358)+(x359==x360));

	if (t87 != -45LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x361 = UINT8_MAX;
	uint16_t x362 = 5U;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MAX;
	int32_t t88 = -2114;

	t88 = ((x361%x362)+(x363==x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x366 = 139LL;
	int64_t x367 = -166LL;
	int64_t x368 = INT64_MAX;
	int64_t t89 = 2359980695067LL;

	t89 = ((x365%x366)+(x367==x368));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = -7463702005580LL;
	int32_t x370 = -5;
	int64_t x371 = -557055643049250689LL;
	volatile int8_t x372 = -1;
	static int64_t t90 = 5508278147679953LL;

	t90 = ((x369%x370)+(x371==x372));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x374 = INT64_MIN;
	volatile uint64_t x375 = 48250869273105LLU;
	int64_t t91 = -13338346307LL;

	t91 = ((x373%x374)+(x375==x376));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	uint64_t x380 = 136223LLU;
	static volatile int32_t t92 = -523216937;

	t92 = ((x377%x378)+(x379==x380));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = INT64_MAX;
	uint16_t x384 = 9065U;

	t93 = ((x381%x382)+(x383==x384));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x386 = 577;
	int32_t x387 = INT32_MIN;
	int32_t t94 = -6;

	t94 = ((x385%x386)+(x387==x388));

	if (t94 != 431) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x391 = 736118072798133483LL;

	t95 = ((x389%x390)+(x391==x392));

	if (t95 != 127U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = 838324846469LLU;
	static int64_t x394 = -197937447908246438LL;
	int32_t x396 = INT32_MIN;
	static uint64_t t96 = 834098LLU;

	t96 = ((x393%x394)+(x395==x396));

	if (t96 != 838324846469LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x397 = -1;
	uint32_t x398 = UINT32_MAX;
	volatile uint32_t t97 = 256344U;

	t97 = ((x397%x398)+(x399==x400));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = -483;
	uint16_t x402 = 14U;
	int64_t x404 = 88054907122216060LL;
	int32_t t98 = 246718;

	t98 = ((x401%x402)+(x403==x404));

	if (t98 != -7) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = UINT64_MAX;
	int32_t x407 = INT32_MIN;
	int16_t x408 = INT16_MIN;
	uint64_t t99 = 19361523182004LLU;

	t99 = ((x405%x406)+(x407==x408));

	if (t99 != 78LLU) { NG(); } else { ; }
	
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

