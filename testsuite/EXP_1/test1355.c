#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 24861;
volatile uint8_t x10 = 1U;
volatile int32_t x12 = -3527351;
uint8_t x32 = UINT8_MAX;
static int16_t x36 = INT16_MAX;
volatile int64_t t5 = -4481812LL;
volatile int32_t x49 = 1280;
static int8_t x52 = INT8_MIN;
volatile int8_t x55 = -19;
int8_t x69 = -13;
uint64_t x75 = 70233LLU;
static int16_t x76 = INT16_MAX;
uint16_t x84 = 5U;
int16_t x85 = -1;
int32_t t14 = 102437065;
volatile int8_t x94 = INT8_MIN;
volatile int32_t t16 = -8;
volatile int32_t x108 = INT32_MIN;
uint32_t x109 = 28734U;
static int32_t t18 = 4;
volatile int32_t t19 = 0;
int16_t x118 = INT16_MIN;
int64_t x119 = -1LL;
uint16_t x129 = 53U;
volatile int32_t t22 = -114;
uint8_t x140 = UINT8_MAX;
int32_t x141 = 20046313;
volatile int8_t x154 = 0;
int16_t x155 = -4;
volatile int32_t x160 = -1;
int32_t t28 = 1027688;
volatile int32_t x161 = INT32_MIN;
static uint16_t x163 = 1047U;
volatile int16_t x170 = -1008;
volatile int16_t x173 = -1328;
int64_t x177 = INT64_MAX;
int32_t x182 = -1;
static uint64_t x183 = 214340657LLU;
uint16_t x186 = 7488U;
volatile uint32_t x190 = 891225168U;
volatile int16_t x192 = 3;
volatile int64_t x199 = -1LL;
static int64_t t38 = 285202419096LL;
int64_t x203 = -1LL;
uint64_t x207 = UINT64_MAX;
int32_t t44 = 6549232;
uint32_t x226 = UINT32_MAX;
uint64_t x229 = 32LLU;
int16_t x232 = -8;
int32_t x241 = INT32_MIN;
static int16_t x250 = INT16_MAX;
int8_t x253 = INT8_MIN;
int32_t x259 = 334047580;
static uint32_t x260 = UINT32_MAX;
volatile int16_t x264 = INT16_MIN;
static uint64_t x271 = UINT64_MAX;
static int8_t x274 = INT8_MAX;
uint16_t x277 = 35U;
volatile uint8_t x280 = 25U;
uint64_t x283 = UINT64_MAX;
uint64_t x284 = 39881606522989097LLU;
int64_t x293 = -1LL;
static int8_t x299 = INT8_MAX;
int32_t t61 = 184;
volatile uint32_t t63 = 31027U;
uint32_t x318 = UINT32_MAX;
int8_t x324 = INT8_MAX;
static int32_t t66 = 275;
static int16_t x334 = INT16_MAX;
int8_t x335 = INT8_MIN;
uint32_t t67 = 1019739U;
int8_t x340 = -1;
uint8_t x347 = UINT8_MAX;
int64_t x354 = INT64_MIN;
int8_t x358 = INT8_MIN;
static volatile int32_t t71 = INT32_MAX;
int32_t x369 = -4728;
static uint32_t x372 = 17608036U;
int32_t x378 = INT32_MIN;
int8_t x391 = -1;
static int8_t x397 = INT8_MIN;
volatile uint8_t x401 = 61U;
static volatile int32_t t77 = 103645181;
uint64_t t78 = 4878626183437384LLU;
static int16_t x413 = INT16_MIN;
uint16_t x415 = 16U;
int8_t x419 = INT8_MAX;
uint8_t x421 = UINT8_MAX;
volatile uint32_t x428 = 1335U;
int16_t x431 = INT16_MIN;
volatile int32_t t83 = -362290;
uint16_t x433 = UINT16_MAX;
uint8_t x438 = 51U;
uint64_t x439 = UINT64_MAX;
volatile int8_t x453 = INT8_MIN;
int64_t x454 = INT64_MIN;
static int8_t x455 = 1;
static volatile uint16_t x461 = 0U;
static uint32_t x466 = 61743115U;
volatile int16_t x468 = -40;
volatile uint16_t x480 = UINT16_MAX;
uint32_t x490 = UINT32_MAX;
volatile int32_t t95 = -73551284;
int64_t x497 = INT64_MIN;
int32_t t96 = -1;
uint16_t x506 = 227U;


void f0(void) {
	volatile int32_t x5 = INT32_MAX;
	uint16_t x6 = UINT16_MAX;
	uint8_t x7 = 11U;
	int32_t x8 = 119;

	t0 = (((x5<x6)+x7)*x8);

	if (t0 != 1309) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	int64_t x11 = 119488060LL;
	static volatile int64_t t1 = -103880873197486435LL;

	t1 = (((x9<x10)+x11)*x12);

	if (t1 != -421476327929060LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MAX;
	int16_t x22 = 46;
	int16_t x23 = INT16_MAX;
	static uint32_t x24 = 7400U;
	volatile uint32_t t2 = 1133U;

	t2 = (((x21<x22)+x23)*x24);

	if (t2 != 242475800U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MIN;
	int8_t x31 = -1;
	int32_t t3 = 150161;

	t3 = (((x29<x30)+x31)*x32);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MAX;
	int8_t x34 = INT8_MAX;
	uint16_t x35 = 1406U;
	volatile int32_t t4 = -6095656;

	t4 = (((x33<x34)+x35)*x36);

	if (t4 != 46070402) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x37 = -12955;
	volatile int32_t x38 = -2903340;
	int64_t x39 = -14LL;
	static int64_t x40 = -1LL;

	t5 = (((x37<x38)+x39)*x40);

	if (t5 != 14LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MIN;
	int32_t x43 = -5006;
	uint64_t x44 = 1829850650LLU;
	volatile uint64_t t6 = 7675169018356LLU;

	t6 = (((x41<x42)+x43)*x44);

	if (t6 != 18446734913477197716LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x45 = INT32_MAX;
	int16_t x46 = INT16_MIN;
	int8_t x47 = -7;
	static volatile uint64_t x48 = 3172326697568378996LLU;
	static uint64_t t7 = 5LLU;

	t7 = (((x45<x46)+x47)*x48);

	if (t7 != 14687201264440450260LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x50 = -28270;
	volatile uint16_t x51 = 8U;
	int32_t t8 = 49;

	t8 = (((x49<x50)+x51)*x52);

	if (t8 != -1024) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x54 = 303U;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t9 = 34963555615437282LLU;

	t9 = (((x53<x54)+x55)*x56);

	if (t9 != 19LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x70 = 62132U;
	static volatile uint32_t x71 = 586U;
	volatile uint16_t x72 = UINT16_MAX;
	uint32_t t10 = 43U;

	t10 = (((x69<x70)+x71)*x72);

	if (t10 != 38403510U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x73 = INT16_MAX;
	int64_t x74 = 479260966217252739LL;
	static volatile uint64_t t11 = 202838968851279LLU;

	t11 = (((x73<x74)+x75)*x76);

	if (t11 != 2301357478LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x77 = -88;
	static uint64_t x78 = 2410LLU;
	uint32_t x79 = 3281U;
	int16_t x80 = -3;
	uint32_t t12 = 8U;

	t12 = (((x77<x78)+x79)*x80);

	if (t12 != 4294957453U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x81 = INT8_MIN;
	int8_t x82 = 25;
	int64_t x83 = -1LL;
	int64_t t13 = 3399203303358495446LL;

	t13 = (((x81<x82)+x83)*x84);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x86 = 1U;
	int16_t x87 = INT16_MIN;
	volatile uint8_t x88 = UINT8_MAX;

	t14 = (((x85<x86)+x87)*x88);

	if (t14 != -8355840) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x93 = INT32_MIN;
	static volatile uint8_t x95 = 3U;
	volatile uint32_t x96 = 32601U;
	static volatile uint32_t t15 = 39580U;

	t15 = (((x93<x94)+x95)*x96);

	if (t15 != 130404U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = -15073293;
	volatile int8_t x99 = INT8_MIN;
	uint8_t x100 = UINT8_MAX;

	t16 = (((x97<x98)+x99)*x100);

	if (t16 != -32385) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -3;
	static int8_t x107 = 0;
	int32_t t17 = INT32_MIN;

	t17 = (((x105<x106)+x107)*x108);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	volatile int8_t x112 = -1;

	t18 = (((x109<x110)+x111)*x112);

	if (t18 != -256) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x113 = -479194LL;
	int8_t x114 = INT8_MIN;
	int16_t x115 = -157;
	int8_t x116 = INT8_MIN;

	t19 = (((x113<x114)+x115)*x116);

	if (t19 != 19968) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x117 = INT16_MIN;
	static volatile uint64_t x120 = UINT64_MAX;
	volatile uint64_t t20 = 70917179424140859LLU;

	t20 = (((x117<x118)+x119)*x120);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x121 = -1LL;
	volatile int32_t x122 = -1;
	int64_t x123 = -1LL;
	int32_t x124 = INT32_MIN;
	volatile int64_t t21 = -7LL;

	t21 = (((x121<x122)+x123)*x124);

	if (t21 != 2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x130 = -1;
	uint8_t x131 = 0U;
	int8_t x132 = INT8_MIN;

	t22 = (((x129<x130)+x131)*x132);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x137 = 0;
	int32_t x138 = -534577;
	volatile int16_t x139 = INT16_MIN;
	volatile int32_t t23 = 4;

	t23 = (((x137<x138)+x139)*x140);

	if (t23 != -8355840) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x142 = -603948088987339LL;
	int64_t x143 = INT64_MIN;
	static volatile uint64_t x144 = 5206369380925LLU;
	uint64_t t24 = 5LLU;

	t24 = (((x141<x142)+x143)*x144);

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x145 = UINT8_MAX;
	uint32_t x146 = 202U;
	volatile uint8_t x147 = 7U;
	int8_t x148 = -1;
	int32_t t25 = 40715573;

	t25 = (((x145<x146)+x147)*x148);

	if (t25 != -7) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = -1;
	static int16_t x150 = INT16_MIN;
	int8_t x151 = -1;
	int16_t x152 = INT16_MIN;
	int32_t t26 = 621749838;

	t26 = (((x149<x150)+x151)*x152);

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x153 = 46649031U;
	int32_t x156 = -1;
	volatile int32_t t27 = 5;

	t27 = (((x153<x154)+x155)*x156);

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x157 = 14354640261LLU;
	static volatile int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MAX;

	t28 = (((x157<x158)+x159)*x160);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x162 = -1;
	static int64_t x164 = -1LL;
	int64_t t29 = -3924461134633610368LL;

	t29 = (((x161<x162)+x163)*x164);

	if (t29 != -1048LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x165 = INT8_MAX;
	uint8_t x166 = 13U;
	volatile int16_t x167 = INT16_MAX;
	int8_t x168 = 4;
	volatile int32_t t30 = 42744;

	t30 = (((x165<x166)+x167)*x168);

	if (t30 != 131068) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = 11132704180710712LL;
	static uint16_t x171 = 142U;
	uint32_t x172 = 377574U;
	uint32_t t31 = 160U;

	t31 = (((x169<x170)+x171)*x172);

	if (t31 != 53615508U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x174 = -8;
	uint16_t x175 = 247U;
	int32_t x176 = -1;
	int32_t t32 = 62037726;

	t32 = (((x173<x174)+x175)*x176);

	if (t32 != -248) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x178 = INT32_MIN;
	int32_t x179 = -3171;
	int64_t x180 = 278725402840LL;
	volatile int64_t t33 = 614301165662645LL;

	t33 = (((x177<x178)+x179)*x180);

	if (t33 != -883838252405640LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = 18U;
	int16_t x184 = -1;
	uint64_t t34 = 2102624060389581LLU;

	t34 = (((x181<x182)+x183)*x184);

	if (t34 != 18446744073495210959LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = INT16_MIN;
	uint16_t x187 = UINT16_MAX;
	int32_t x188 = -29;
	int32_t t35 = -1669627;

	t35 = (((x185<x186)+x187)*x188);

	if (t35 != -1900544) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = 30U;
	uint32_t x191 = UINT32_MAX;
	volatile uint32_t t36 = 6096745U;

	t36 = (((x189<x190)+x191)*x192);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 3U;
	uint64_t x196 = 52706LLU;
	volatile uint64_t t37 = 1781LLU;

	t37 = (((x193<x194)+x195)*x196);

	if (t37 != 210824LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 15U;
	int16_t x198 = -1;
	int16_t x200 = INT16_MIN;

	t38 = (((x197<x198)+x199)*x200);

	if (t38 != 32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MAX;
	static int8_t x204 = INT8_MIN;
	static volatile int64_t t39 = 25552384047563LL;

	t39 = (((x201<x202)+x203)*x204);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x205 = INT32_MIN;
	int64_t x206 = -34943584692363LL;
	int8_t x208 = INT8_MAX;
	volatile uint64_t t40 = 1156028884740389LLU;

	t40 = (((x205<x206)+x207)*x208);

	if (t40 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x209 = -15690;
	uint16_t x210 = 4044U;
	volatile uint64_t x211 = UINT64_MAX;
	int16_t x212 = -1;
	volatile uint64_t t41 = 13480539143099LLU;

	t41 = (((x209<x210)+x211)*x212);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x213 = INT64_MIN;
	int32_t x214 = -1;
	volatile int8_t x215 = 5;
	uint64_t x216 = UINT64_MAX;
	static volatile uint64_t t42 = 2208935519689352749LLU;

	t42 = (((x213<x214)+x215)*x216);

	if (t42 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x217 = -1;
	int16_t x218 = 1;
	int16_t x219 = 7076;
	int32_t x220 = -1;
	int32_t t43 = 320351;

	t43 = (((x217<x218)+x219)*x220);

	if (t43 != -7077) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x221 = 55;
	int16_t x222 = 116;
	int32_t x223 = 282389754;
	int32_t x224 = -1;

	t44 = (((x221<x222)+x223)*x224);

	if (t44 != -282389755) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x225 = -1;
	int16_t x227 = -2505;
	volatile int32_t x228 = -3519;
	volatile int32_t t45 = -832;

	t45 = (((x225<x226)+x227)*x228);

	if (t45 != 8815095) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x230 = 449721507360054607LL;
	static int64_t x231 = -250LL;
	static int64_t t46 = 1092047188461312LL;

	t46 = (((x229<x230)+x231)*x232);

	if (t46 != 1992LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x233 = 73408668U;
	volatile int64_t x234 = -4313312LL;
	volatile int32_t x235 = 2354740;
	int16_t x236 = 15;
	static int32_t t47 = -4;

	t47 = (((x233<x234)+x235)*x236);

	if (t47 != 35321100) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x242 = 3U;
	int16_t x243 = -16;
	int16_t x244 = INT16_MIN;
	int32_t t48 = 131;

	t48 = (((x241<x242)+x243)*x244);

	if (t48 != 491520) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x245 = 262712120375LLU;
	volatile int64_t x246 = -1LL;
	uint64_t x247 = 13133026630640532LLU;
	int16_t x248 = -9;
	static volatile uint64_t t49 = 13LLU;

	t49 = (((x245<x246)+x247)*x248);

	if (t49 != 18328546834033786819LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x249 = -1LL;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;
	uint64_t t50 = 295090800814679LLU;

	t50 = (((x249<x250)+x251)*x252);

	if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x254 = 790U;
	volatile uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MAX;
	uint32_t t51 = 1405U;

	t51 = (((x253<x254)+x255)*x256);

	if (t51 != 4294934529U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x257 = 13;
	volatile int64_t x258 = -2176411468050LL;
	volatile uint32_t t52 = 7643542U;

	t52 = (((x257<x258)+x259)*x260);

	if (t52 != 3960919716U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = -1LL;
	volatile int64_t x262 = -1LL;
	static volatile uint8_t x263 = UINT8_MAX;
	int32_t t53 = 76957;

	t53 = (((x261<x262)+x263)*x264);

	if (t53 != -8355840) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = -1;
	int8_t x266 = -1;
	volatile uint8_t x267 = 86U;
	int8_t x268 = 4;
	static int32_t t54 = 0;

	t54 = (((x265<x266)+x267)*x268);

	if (t54 != 344) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x269 = INT8_MIN;
	uint8_t x270 = 40U;
	uint64_t x272 = UINT64_MAX;
	static uint64_t t55 = 6472266LLU;

	t55 = (((x269<x270)+x271)*x272);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = INT32_MIN;
	int8_t x275 = -1;
	int8_t x276 = -1;
	volatile int32_t t56 = 927940078;

	t56 = (((x273<x274)+x275)*x276);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;
	static volatile int32_t t57 = -106092;

	t57 = (((x277<x278)+x279)*x280);

	if (t57 != -819200) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = -1;
	int16_t x282 = -1;
	volatile uint64_t t58 = 123510967LLU;

	t58 = (((x281<x282)+x283)*x284);

	if (t58 != 18406862467186562519LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x285 = UINT32_MAX;
	static int64_t x286 = 205883LL;
	static int16_t x287 = INT16_MIN;
	static int16_t x288 = INT16_MIN;
	int32_t t59 = 150;

	t59 = (((x285<x286)+x287)*x288);

	if (t59 != 1073741824) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x294 = INT32_MIN;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = -1LL;
	static volatile int64_t t60 = 1783368949030LL;

	t60 = (((x293<x294)+x295)*x296);

	if (t60 != -65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x297 = -1LL;
	int8_t x298 = -1;
	int8_t x300 = -1;

	t61 = (((x297<x298)+x299)*x300);

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MIN;
	static int64_t x302 = -1LL;
	int64_t x303 = -1LL;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t62 = 2LL;

	t62 = (((x301<x302)+x303)*x304);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x313 = -819;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 84U;

	t63 = (((x313<x314)+x315)*x316);

	if (t63 != 4292214868U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x317 = INT64_MAX;
	uint32_t x319 = 2U;
	int64_t x320 = -186LL;
	volatile int64_t t64 = -11657LL;

	t64 = (((x317<x318)+x319)*x320);

	if (t64 != -372LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x321 = 22229441575LL;
	volatile uint16_t x322 = 77U;
	volatile int64_t x323 = -864600240015LL;
	static int64_t t65 = 18LL;

	t65 = (((x321<x322)+x323)*x324);

	if (t65 != -109804230481905LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = -116810567LL;
	int8_t x330 = INT8_MIN;
	static int16_t x331 = -1;
	int16_t x332 = 0;

	t66 = (((x329<x330)+x331)*x332);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x333 = UINT16_MAX;
	uint32_t x336 = 255712U;

	t67 = (((x333<x334)+x335)*x336);

	if (t67 != 4262236160U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MAX;
	int64_t x339 = -1LL;
	volatile int64_t t68 = -356192699776558LL;

	t68 = (((x337<x338)+x339)*x340);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = 32U;
	int32_t x346 = 5;
	int16_t x348 = INT16_MIN;
	int32_t t69 = 14290478;

	t69 = (((x345<x346)+x347)*x348);

	if (t69 != -8355840) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x353 = -1LL;
	int16_t x355 = INT16_MIN;
	uint8_t x356 = 1U;
	static int32_t t70 = -771966;

	t70 = (((x353<x354)+x355)*x356);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x357 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = -1;

	t71 = (((x357<x358)+x359)*x360);

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	static volatile uint64_t t72 = 21502909045LLU;

	t72 = (((x369<x370)+x371)*x372);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x377 = 18U;
	int64_t x379 = 21437269126585287LL;
	int64_t x380 = -1LL;
	int64_t t73 = 434364680339080896LL;

	t73 = (((x377<x378)+x379)*x380);

	if (t73 != -21437269126585287LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x389 = INT32_MIN;
	int8_t x390 = 1;
	static int8_t x392 = 5;
	volatile int32_t t74 = 5473570;

	t74 = (((x389<x390)+x391)*x392);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x393 = INT64_MAX;
	static uint16_t x394 = 1262U;
	int32_t x395 = INT32_MIN;
	uint32_t x396 = 5798027U;
	uint32_t t75 = 23U;

	t75 = (((x393<x394)+x395)*x396);

	if (t75 != 2147483648U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x398 = INT16_MAX;
	static int32_t x399 = -1;
	volatile int16_t x400 = -1;
	int32_t t76 = -561206;

	t76 = (((x397<x398)+x399)*x400);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x402 = -227834088LL;
	uint16_t x403 = UINT16_MAX;
	static volatile int16_t x404 = 0;

	t77 = (((x401<x402)+x403)*x404);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x409 = INT8_MAX;
	uint64_t x410 = 5628LLU;
	volatile uint64_t x411 = 292485875172384624LLU;
	uint8_t x412 = UINT8_MAX;

	t78 = (((x409<x410)+x411)*x412);

	if (t78 != 796921874119872911LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x414 = -1LL;
	int32_t x416 = 602029;
	volatile int32_t t79 = -26899;

	t79 = (((x413<x414)+x415)*x416);

	if (t79 != 10234493) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x417 = 2U;
	uint8_t x418 = 1U;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t80 = 78978941;

	t80 = (((x417<x418)+x419)*x420);

	if (t80 != -4161536) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x422 = INT8_MIN;
	uint8_t x423 = UINT8_MAX;
	static volatile int32_t x424 = 319;
	int32_t t81 = 35665281;

	t81 = (((x421<x422)+x423)*x424);

	if (t81 != 81345) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x425 = INT16_MIN;
	volatile uint64_t x426 = UINT64_MAX;
	int8_t x427 = -1;
	uint32_t t82 = 15495725U;

	t82 = (((x425<x426)+x427)*x428);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x429 = -314;
	int16_t x430 = -1;
	static volatile int8_t x432 = 1;

	t83 = (((x429<x430)+x431)*x432);

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x434 = INT8_MIN;
	uint8_t x435 = 25U;
	static uint64_t x436 = 119291130LLU;
	uint64_t t84 = 3381LLU;

	t84 = (((x433<x434)+x435)*x436);

	if (t84 != 2982278250LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x437 = 10803;
	int8_t x440 = INT8_MIN;
	static uint64_t t85 = 61182939192LLU;

	t85 = (((x437<x438)+x439)*x440);

	if (t85 != 128LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x456 = 11U;
	volatile int32_t t86 = 1971060;

	t86 = (((x453<x454)+x455)*x456);

	if (t86 != 11) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x462 = 226U;
	int8_t x463 = -1;
	uint16_t x464 = 1U;
	int32_t t87 = -54979476;

	t87 = (((x461<x462)+x463)*x464);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x465 = INT32_MIN;
	volatile int64_t x467 = -112365116130396LL;
	volatile int64_t t88 = -438544141313821LL;

	t88 = (((x465<x466)+x467)*x468);

	if (t88 != 4494604645215840LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x469 = INT16_MIN;
	uint64_t x470 = 60481746290877640LLU;
	static int64_t x471 = INT64_MAX;
	uint8_t x472 = 0U;
	volatile int64_t t89 = 13762861342LL;

	t89 = (((x469<x470)+x471)*x472);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x473 = UINT32_MAX;
	uint64_t x474 = 7961033903128362LLU;
	static volatile uint16_t x475 = 121U;
	volatile int64_t x476 = 4418LL;
	int64_t t90 = 49196466621LL;

	t90 = (((x473<x474)+x475)*x476);

	if (t90 != 538996LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x477 = 12LLU;
	uint8_t x478 = 2U;
	int16_t x479 = INT16_MAX;
	int32_t t91 = 14369;

	t91 = (((x477<x478)+x479)*x480);

	if (t91 != 2147385345) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x481 = 100630LLU;
	uint64_t x482 = UINT64_MAX;
	uint16_t x483 = 7U;
	uint32_t x484 = 95U;
	uint32_t t92 = 1014305504U;

	t92 = (((x481<x482)+x483)*x484);

	if (t92 != 760U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x485 = 90966U;
	int32_t x486 = -1735563;
	int64_t x487 = -1LL;
	int8_t x488 = INT8_MAX;
	static int64_t t93 = 3260891318LL;

	t93 = (((x485<x486)+x487)*x488);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x489 = UINT8_MAX;
	int32_t x491 = -2901392;
	static uint64_t x492 = UINT64_MAX;
	uint64_t t94 = 398615831022LLU;

	t94 = (((x489<x490)+x491)*x492);

	if (t94 != 2901391LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x493 = -2194880;
	volatile uint8_t x494 = UINT8_MAX;
	int32_t x495 = -130;
	volatile uint8_t x496 = 120U;

	t95 = (((x493<x494)+x495)*x496);

	if (t95 != -15480) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x498 = UINT64_MAX;
	int8_t x499 = -3;
	uint16_t x500 = 112U;

	t96 = (((x497<x498)+x499)*x500);

	if (t96 != -224) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x501 = INT32_MIN;
	int32_t x502 = -390939378;
	int32_t x503 = 399;
	uint8_t x504 = 1U;
	volatile int32_t t97 = -513;

	t97 = (((x501<x502)+x503)*x504);

	if (t97 != 400) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x505 = -1;
	int8_t x507 = INT8_MIN;
	int64_t x508 = -1LL;
	int64_t t98 = -23437698686503LL;

	t98 = (((x505<x506)+x507)*x508);

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x513 = UINT64_MAX;
	int16_t x514 = -1;
	volatile int16_t x515 = INT16_MIN;
	uint32_t x516 = 32U;
	static volatile uint32_t t99 = 707U;

	t99 = (((x513<x514)+x515)*x516);

	if (t99 != 4293918720U) { NG(); } else { ; }
	
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

