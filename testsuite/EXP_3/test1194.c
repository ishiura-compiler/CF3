#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = UINT16_MAX;
static volatile int32_t x11 = 670;
uint8_t x15 = UINT8_MAX;
int64_t x20 = -1LL;
int16_t x42 = -1;
int64_t x48 = INT64_MIN;
int16_t x53 = -1;
volatile uint64_t t10 = 51529085LLU;
static uint8_t x57 = 5U;
static uint8_t x66 = 18U;
int64_t x70 = -26LL;
uint16_t x71 = 19868U;
static uint8_t x80 = 13U;
volatile int32_t x83 = -1;
volatile uint8_t x90 = 1U;
int32_t x92 = 3175799;
int32_t t20 = 21;
uint64_t x100 = UINT64_MAX;
uint32_t t21 = 147639011U;
static int64_t x101 = INT64_MAX;
static volatile int64_t x109 = INT64_MIN;
uint16_t x111 = 16U;
int8_t x113 = INT8_MAX;
int8_t x114 = -48;
volatile int32_t x116 = -1;
uint64_t x120 = 52LLU;
uint64_t x130 = UINT64_MAX;
uint16_t x138 = 417U;
int16_t x139 = -1;
uint64_t x145 = 9123071LLU;
static int16_t x151 = INT16_MIN;
static volatile int8_t x154 = -1;
uint32_t x161 = UINT32_MAX;
static int16_t x163 = -109;
int32_t x164 = -1;
volatile int64_t x168 = INT64_MAX;
int32_t x172 = INT32_MIN;
static int32_t x175 = 7261161;
uint64_t t38 = 31LLU;
int32_t t41 = -22;
volatile int16_t x189 = INT16_MIN;
int32_t x192 = -32028485;
int8_t x194 = INT8_MIN;
int64_t x195 = INT64_MIN;
int32_t x209 = -79930826;
int16_t x212 = INT16_MIN;
int32_t x213 = 4045937;
static int32_t x214 = 0;
uint16_t x217 = 2148U;
static volatile int8_t x218 = INT8_MIN;
int64_t x223 = INT64_MAX;
int32_t x225 = -2028553;
int8_t x227 = INT8_MIN;
int8_t x229 = -1;
int16_t x233 = -1298;
uint32_t x235 = 94163U;
int8_t x246 = INT8_MAX;
volatile int32_t t53 = -465524764;
static int64_t x253 = INT64_MAX;
int64_t t55 = 3LL;
int64_t x262 = -103LL;
volatile int32_t x263 = -1;
static int16_t x268 = INT16_MAX;
uint32_t t58 = 21U;
uint8_t x283 = 13U;
int16_t x285 = INT16_MAX;
uint32_t t62 = 105606U;
static int8_t x293 = INT8_MIN;
static int16_t x295 = -1;
static volatile int64_t t66 = -295222940026LL;
static int8_t x305 = INT8_MAX;
int64_t x326 = INT64_MAX;
static int64_t x328 = INT64_MIN;
uint64_t x334 = UINT64_MAX;
int16_t x365 = 1;
uint16_t x366 = UINT16_MAX;
static uint32_t x369 = UINT32_MAX;
static uint16_t x373 = UINT16_MAX;
uint16_t x377 = 25U;
static volatile uint8_t x380 = UINT8_MAX;
int8_t x392 = INT8_MIN;
volatile int32_t x400 = -1;
int8_t x415 = INT8_MAX;
static int32_t x416 = INT32_MAX;
static int32_t x438 = -1;
int32_t x450 = INT32_MIN;
uint16_t x453 = 2548U;
static int16_t x466 = -1;
int32_t t99 = 1;


void f0(void) {
	int8_t x5 = INT8_MIN;
	volatile uint64_t x7 = 259415577LLU;
	volatile uint32_t x8 = UINT32_MAX;
	volatile int32_t t0 = -1845;

	t0 = ((x5+x6)&(x7==x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	uint32_t x10 = UINT32_MAX;
	int16_t x12 = INT16_MIN;
	volatile uint32_t t1 = 11U;

	t1 = ((x9+x10)&(x11==x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int8_t x14 = INT8_MIN;
	static int8_t x16 = INT8_MIN;
	volatile int64_t t2 = 31488447570LL;

	t2 = ((x13+x14)&(x15==x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MIN;
	int64_t x19 = -1LL;
	static volatile int32_t t3 = -194057;

	t3 = ((x17+x18)&(x19==x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MIN;
	static volatile uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t4 = -1610;

	t4 = ((x21+x22)&(x23==x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = -11297395948567LL;
	uint8_t x31 = 12U;
	int64_t x32 = INT64_MIN;
	volatile int64_t t5 = 261428058764LL;

	t5 = ((x29+x30)&(x31==x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = 257684;
	uint32_t x38 = 43U;
	static int16_t x39 = INT16_MIN;
	uint8_t x40 = 18U;
	static volatile uint32_t t6 = 43255U;

	t6 = ((x37+x38)&(x39==x40));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x41 = 72304273910159LLU;
	int64_t x43 = INT64_MIN;
	volatile int64_t x44 = -1LL;
	volatile uint64_t t7 = 1605LLU;

	t7 = ((x41+x42)&(x43==x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = UINT8_MAX;
	volatile int8_t x46 = -2;
	uint32_t x47 = UINT32_MAX;
	int32_t t8 = 3;

	t8 = ((x45+x46)&(x47==x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -1LL;
	static uint64_t x50 = 11451928168788644LLU;
	static uint64_t x51 = UINT64_MAX;
	int16_t x52 = -1;
	volatile uint64_t t9 = 12779277348646LLU;

	t9 = ((x49+x50)&(x51==x52));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x54 = 111113LLU;
	int32_t x55 = INT32_MIN;
	static int64_t x56 = INT64_MAX;

	t10 = ((x53+x54)&(x55==x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t11 = 1953;

	t11 = ((x57+x58)&(x59==x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MIN;
	uint16_t x62 = 28123U;
	uint16_t x63 = UINT16_MAX;
	static uint32_t x64 = 1197U;
	volatile int32_t t12 = -214206;

	t12 = ((x61+x62)&(x63==x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = -1;
	int64_t x67 = INT64_MIN;
	volatile int64_t x68 = -1663259192916LL;
	volatile int32_t t13 = -1904;

	t13 = ((x65+x66)&(x67==x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = INT16_MAX;
	int32_t x72 = INT32_MIN;
	int64_t t14 = 134033328771LL;

	t14 = ((x69+x70)&(x71==x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 5145032LLU;
	uint32_t x74 = 68647637U;
	volatile int32_t x75 = INT32_MIN;
	static uint8_t x76 = 1U;
	static volatile uint64_t t15 = 4841933375800LLU;

	t15 = ((x73+x74)&(x75==x76));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 1U;
	uint32_t x78 = UINT32_MAX;
	uint16_t x79 = 736U;
	volatile uint32_t t16 = 4465827U;

	t16 = ((x77+x78)&(x79==x80));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 81U;
	int8_t x82 = 0;
	int8_t x84 = -1;
	int32_t t17 = -37374;

	t17 = ((x81+x82)&(x83==x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x85 = -2;
	int8_t x86 = -1;
	uint8_t x87 = 104U;
	int32_t x88 = INT32_MIN;
	static int32_t t18 = -13328859;

	t18 = ((x85+x86)&(x87==x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 1009LLU;
	int32_t x91 = -165405;
	volatile uint64_t t19 = 6428243057497LLU;

	t19 = ((x89+x90)&(x91==x92));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = 3;
	int16_t x94 = -1;
	int64_t x95 = -107073LL;
	static uint16_t x96 = 1667U;

	t20 = ((x93+x94)&(x95==x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 3414589U;
	int32_t x98 = -1183;
	int8_t x99 = INT8_MAX;

	t21 = ((x97+x98)&(x99==x100));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x102 = -1LL;
	int8_t x103 = INT8_MAX;
	static int32_t x104 = INT32_MIN;
	int64_t t22 = -48215092894410597LL;

	t22 = ((x101+x102)&(x103==x104));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x110 = INT32_MAX;
	volatile int16_t x112 = INT16_MIN;
	static volatile int64_t t23 = -37001702987276924LL;

	t23 = ((x109+x110)&(x111==x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x115 = INT16_MIN;
	volatile int32_t t24 = 246;

	t24 = ((x113+x114)&(x115==x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 2669;
	uint16_t x118 = 1050U;
	static int8_t x119 = -13;
	volatile int32_t t25 = 868635;

	t25 = ((x117+x118)&(x119==x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x125 = 29259623U;
	int64_t x126 = 23LL;
	int8_t x127 = 47;
	static int64_t x128 = INT64_MAX;
	volatile int64_t t26 = 6942856881LL;

	t26 = ((x125+x126)&(x127==x128));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = INT32_MAX;
	int16_t x131 = -1;
	int16_t x132 = INT16_MAX;
	static uint64_t t27 = 24546411181319LLU;

	t27 = ((x129+x130)&(x131==x132));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = INT8_MIN;
	volatile int32_t x135 = INT32_MAX;
	int16_t x136 = 0;
	static volatile uint64_t t28 = 13914891843LLU;

	t28 = ((x133+x134)&(x135==x136));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x137 = UINT32_MAX;
	int64_t x140 = 30859566194524174LL;
	uint32_t t29 = 2427U;

	t29 = ((x137+x138)&(x139==x140));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -131883557184586759LL;
	int64_t x143 = -1LL;
	volatile uint8_t x144 = UINT8_MAX;
	int64_t t30 = 41735LL;

	t30 = ((x141+x142)&(x143==x144));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x146 = -342;
	uint8_t x147 = UINT8_MAX;
	volatile int64_t x148 = -1LL;
	static uint64_t t31 = 26024LLU;

	t31 = ((x145+x146)&(x147==x148));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x149 = -1;
	uint8_t x150 = 6U;
	int8_t x152 = 1;
	int32_t t32 = 121841514;

	t32 = ((x149+x150)&(x151==x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = 127U;
	int64_t x155 = 2LL;
	volatile int64_t x156 = INT64_MIN;
	volatile int32_t t33 = -3514;

	t33 = ((x153+x154)&(x155==x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MIN;
	volatile uint64_t x158 = 124834LLU;
	static int64_t x159 = INT64_MIN;
	uint32_t x160 = 414551U;
	volatile uint64_t t34 = 765LLU;

	t34 = ((x157+x158)&(x159==x160));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x162 = 2U;
	volatile uint32_t t35 = 131091385U;

	t35 = ((x161+x162)&(x163==x164));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = UINT64_MAX;
	int8_t x166 = -15;
	uint16_t x167 = 6200U;
	volatile uint64_t t36 = 2008636LLU;

	t36 = ((x165+x166)&(x167==x168));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x169 = -1;
	static int8_t x170 = INT8_MIN;
	volatile int32_t x171 = -1;
	volatile int32_t t37 = 46;

	t37 = ((x169+x170)&(x171==x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MIN;
	int64_t x176 = INT64_MAX;

	t38 = ((x173+x174)&(x175==x176));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x177 = UINT16_MAX;
	int8_t x178 = INT8_MIN;
	static int16_t x179 = -1;
	static int64_t x180 = -477LL;
	int32_t t39 = -308616;

	t39 = ((x177+x178)&(x179==x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = 594;
	static volatile int32_t x182 = 7;
	int16_t x183 = -4738;
	int32_t x184 = INT32_MAX;
	volatile int32_t t40 = 13713388;

	t40 = ((x181+x182)&(x183==x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = UINT32_MAX;
	int16_t x188 = -1;

	t41 = ((x185+x186)&(x187==x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x190 = INT16_MIN;
	static int16_t x191 = -1;
	static int32_t t42 = 1226230;

	t42 = ((x189+x190)&(x191==x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 1U;
	static int32_t x196 = INT32_MAX;
	volatile int32_t t43 = 11;

	t43 = ((x193+x194)&(x195==x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = 18;
	int32_t x198 = INT32_MIN;
	uint32_t x199 = 706U;
	int64_t x200 = -1LL;
	int32_t t44 = -28299498;

	t44 = ((x197+x198)&(x199==x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x205 = 2546U;
	uint16_t x206 = 3281U;
	int64_t x207 = INT64_MIN;
	volatile uint8_t x208 = 49U;
	int32_t t45 = 942756294;

	t45 = ((x205+x206)&(x207==x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x210 = 16;
	uint8_t x211 = 5U;
	int32_t t46 = 0;

	t46 = ((x209+x210)&(x211==x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 0U;
	volatile int32_t t47 = 5;

	t47 = ((x213+x214)&(x215==x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x219 = 32U;
	int16_t x220 = INT16_MIN;
	volatile int32_t t48 = 2473;

	t48 = ((x217+x218)&(x219==x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -7;
	uint32_t x222 = UINT32_MAX;
	uint16_t x224 = 5U;
	volatile uint32_t t49 = 287U;

	t49 = ((x221+x222)&(x223==x224));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x226 = -98;
	volatile int32_t x228 = -4123985;
	static int32_t t50 = 3;

	t50 = ((x225+x226)&(x227==x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x230 = INT16_MAX;
	volatile uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 1264LLU;
	volatile int32_t t51 = -182;

	t51 = ((x229+x230)&(x231==x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x234 = INT16_MAX;
	int16_t x236 = INT16_MAX;
	static int32_t t52 = 4193860;

	t52 = ((x233+x234)&(x235==x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x245 = INT16_MIN;
	static volatile int8_t x247 = INT8_MIN;
	volatile int64_t x248 = INT64_MIN;

	t53 = ((x245+x246)&(x247==x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x254 = INT16_MIN;
	static int64_t x255 = INT64_MIN;
	static int8_t x256 = -27;
	int64_t t54 = -914941561925LL;

	t54 = ((x253+x254)&(x255==x256));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MAX;
	int8_t x259 = 0;
	static int64_t x260 = 21568124238092845LL;

	t55 = ((x257+x258)&(x259==x260));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = 141;
	uint16_t x264 = UINT16_MAX;
	int64_t t56 = -177LL;

	t56 = ((x261+x262)&(x263==x264));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = 373217LL;
	int32_t x266 = INT32_MIN;
	static int32_t x267 = INT32_MAX;
	int64_t t57 = 5564600323734LL;

	t57 = ((x265+x266)&(x267==x268));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x269 = 3;
	static uint32_t x270 = UINT32_MAX;
	static int32_t x271 = -1;
	int8_t x272 = INT8_MAX;

	t58 = ((x269+x270)&(x271==x272));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x273 = UINT8_MAX;
	uint16_t x274 = 1695U;
	volatile int64_t x275 = -11463972LL;
	volatile int8_t x276 = -1;
	int32_t t59 = -2;

	t59 = ((x273+x274)&(x275==x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	static int32_t t60 = 6773654;

	t60 = ((x277+x278)&(x279==x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x281 = -1;
	int8_t x282 = 3;
	int32_t x284 = INT32_MIN;
	int32_t t61 = 44;

	t61 = ((x281+x282)&(x283==x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x286 = 171672233U;
	int8_t x287 = INT8_MIN;
	static int64_t x288 = -111514653LL;

	t62 = ((x285+x286)&(x287==x288));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = 30;
	uint32_t x290 = 1797U;
	uint8_t x291 = 1U;
	int64_t x292 = 3983499060049LL;
	uint32_t t63 = 6512U;

	t63 = ((x289+x290)&(x291==x292));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x294 = INT16_MIN;
	static volatile uint8_t x296 = 3U;
	int32_t t64 = 123;

	t64 = ((x293+x294)&(x295==x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x297 = INT64_MIN;
	uint8_t x298 = 9U;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = -13;
	volatile int64_t t65 = 115779446LL;

	t65 = ((x297+x298)&(x299==x300));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int64_t x302 = -1LL;
	uint16_t x303 = 31881U;
	int8_t x304 = INT8_MIN;

	t66 = ((x301+x302)&(x303==x304));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x306 = INT16_MIN;
	volatile uint16_t x307 = UINT16_MAX;
	static volatile uint16_t x308 = UINT16_MAX;
	int32_t t67 = -1156306;

	t67 = ((x305+x306)&(x307==x308));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x309 = 5LLU;
	uint8_t x310 = UINT8_MAX;
	static volatile int32_t x311 = 55566282;
	uint8_t x312 = UINT8_MAX;
	static uint64_t t68 = 12622666479623815LLU;

	t68 = ((x309+x310)&(x311==x312));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MAX;
	uint64_t x318 = 4321403548446LLU;
	int64_t x319 = -1LL;
	uint64_t x320 = 186041496430210420LLU;
	static volatile uint64_t t69 = 7LLU;

	t69 = ((x317+x318)&(x319==x320));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = -1LL;
	volatile int32_t x322 = INT32_MIN;
	static int8_t x323 = 6;
	static int16_t x324 = INT16_MAX;
	int64_t t70 = -45308719LL;

	t70 = ((x321+x322)&(x323==x324));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = -1;
	volatile int8_t x327 = INT8_MIN;
	static int64_t t71 = 85761LL;

	t71 = ((x325+x326)&(x327==x328));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x329 = 13U;
	static int64_t x330 = -3313199632231LL;
	uint16_t x331 = 112U;
	int64_t x332 = INT64_MAX;
	static int64_t t72 = 198889729591421LL;

	t72 = ((x329+x330)&(x331==x332));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x333 = 95616819LLU;
	static int16_t x335 = INT16_MIN;
	static int64_t x336 = -10371857630123LL;
	static volatile uint64_t t73 = 26924126104975629LLU;

	t73 = ((x333+x334)&(x335==x336));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = 53U;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t74 = -33351921;

	t74 = ((x337+x338)&(x339==x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x341 = 0U;
	static int8_t x342 = -8;
	uint8_t x343 = 1U;
	int16_t x344 = -1;
	uint32_t t75 = 161U;

	t75 = ((x341+x342)&(x343==x344));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x353 = 27U;
	uint32_t x354 = UINT32_MAX;
	volatile uint32_t x355 = 6U;
	static int8_t x356 = INT8_MIN;
	volatile uint32_t t76 = 11681U;

	t76 = ((x353+x354)&(x355==x356));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = 951423178787LL;
	uint16_t x359 = UINT16_MAX;
	int32_t x360 = INT32_MIN;
	volatile int64_t t77 = 5LL;

	t77 = ((x357+x358)&(x359==x360));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x361 = INT8_MAX;
	volatile uint32_t x362 = 13749120U;
	uint64_t x363 = 69LLU;
	volatile int64_t x364 = -1LL;
	uint32_t t78 = 7833U;

	t78 = ((x361+x362)&(x363==x364));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x367 = INT64_MIN;
	uint32_t x368 = 6818U;
	int32_t t79 = -2788;

	t79 = ((x365+x366)&(x367==x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x370 = INT64_MIN;
	int16_t x371 = -1;
	uint8_t x372 = 0U;
	static int64_t t80 = 506123591LL;

	t80 = ((x369+x370)&(x371==x372));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x374 = 87U;
	uint16_t x375 = 14493U;
	int32_t x376 = -1;
	int32_t t81 = -264895254;

	t81 = ((x373+x374)&(x375==x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x378 = 1349154U;
	static volatile int16_t x379 = -7905;
	uint32_t t82 = 8229786U;

	t82 = ((x377+x378)&(x379==x380));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = 52918;
	int64_t x390 = INT64_MIN;
	int16_t x391 = 8;
	static int64_t t83 = -25061711LL;

	t83 = ((x389+x390)&(x391==x392));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x397 = 1002U;
	int16_t x398 = INT16_MAX;
	int8_t x399 = -1;
	volatile int32_t t84 = -2128;

	t84 = ((x397+x398)&(x399==x400));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x401 = 25264217645452929LL;
	int32_t x402 = INT32_MIN;
	static uint16_t x403 = UINT16_MAX;
	int32_t x404 = INT32_MIN;
	volatile int64_t t85 = 7468206968LL;

	t85 = ((x401+x402)&(x403==x404));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = 1494;
	int32_t x407 = INT32_MAX;
	static int8_t x408 = INT8_MAX;
	static volatile int64_t t86 = 1124406836LL;

	t86 = ((x405+x406)&(x407==x408));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = 516;
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MAX;
	int64_t t87 = -166274022549673711LL;

	t87 = ((x409+x410)&(x411==x412));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = -71488LL;
	uint64_t x414 = 1570120067461289LLU;
	volatile uint64_t t88 = 2017588LLU;

	t88 = ((x413+x414)&(x415==x416));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = 1U;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = UINT32_MAX;
	static int16_t x420 = INT16_MIN;
	int32_t t89 = 19087734;

	t89 = ((x417+x418)&(x419==x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x421 = 6951LLU;
	static uint32_t x422 = 22300U;
	int16_t x423 = 9;
	int8_t x424 = 51;
	volatile uint64_t t90 = 15LLU;

	t90 = ((x421+x422)&(x423==x424));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x425 = INT64_MIN;
	uint32_t x426 = 0U;
	int32_t x427 = 106091;
	uint64_t x428 = 1640346LLU;
	volatile int64_t t91 = -15506926343842765LL;

	t91 = ((x425+x426)&(x427==x428));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x429 = -1;
	int32_t x430 = -1895132;
	int64_t x431 = INT64_MIN;
	uint64_t x432 = UINT64_MAX;
	int32_t t92 = -181466;

	t92 = ((x429+x430)&(x431==x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x433 = 861991682LLU;
	uint8_t x434 = UINT8_MAX;
	static int8_t x435 = INT8_MIN;
	volatile uint16_t x436 = UINT16_MAX;
	uint64_t t93 = 263341926546LLU;

	t93 = ((x433+x434)&(x435==x436));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = -12;
	int64_t x439 = INT64_MAX;
	int32_t x440 = INT32_MIN;
	int32_t t94 = 239826486;

	t94 = ((x437+x438)&(x439==x440));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x445 = UINT32_MAX;
	int32_t x446 = 250049;
	static uint64_t x447 = 14893456371LLU;
	int64_t x448 = INT64_MAX;
	uint32_t t95 = 23U;

	t95 = ((x445+x446)&(x447==x448));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x449 = UINT8_MAX;
	static int64_t x451 = -1LL;
	uint64_t x452 = 113671128255636LLU;
	int32_t t96 = -6312;

	t96 = ((x449+x450)&(x451==x452));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x454 = 12583;
	uint16_t x455 = 2U;
	uint32_t x456 = 5U;
	volatile int32_t t97 = 21;

	t97 = ((x453+x454)&(x455==x456));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x461 = 10814U;
	uint16_t x462 = 592U;
	static int32_t x463 = -1;
	volatile int32_t x464 = 306661;
	int32_t t98 = 0;

	t98 = ((x461+x462)&(x463==x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = -18;
	int64_t x467 = INT64_MIN;
	int32_t x468 = INT32_MAX;

	t99 = ((x465+x466)&(x467==x468));

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

