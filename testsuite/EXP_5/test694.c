#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int64_t t0 = -234305071562442LL;
volatile int32_t x10 = -1;
int16_t x11 = INT16_MAX;
volatile uint32_t t2 = 17U;
uint64_t x32 = 190281430164976732LLU;
volatile uint64_t x55 = 435002058149LLU;
static uint64_t t10 = 41305170313989511LLU;
int64_t x59 = INT64_MAX;
volatile int32_t x61 = -1;
uint16_t x63 = 616U;
volatile int8_t x64 = INT8_MAX;
uint64_t x65 = 29286366LLU;
static uint64_t x68 = 556LLU;
int8_t x69 = 0;
volatile int32_t t14 = -1;
uint8_t x84 = 1U;
int8_t x88 = 2;
volatile int16_t x91 = 5391;
static uint32_t x94 = 56639404U;
int64_t t21 = -1LL;
uint32_t x112 = 65668815U;
uint8_t x114 = 4U;
static volatile int32_t t23 = -25729474;
int16_t x119 = -1;
static int32_t x122 = -1;
static uint32_t x126 = 1U;
int16_t x127 = -1;
int64_t x136 = 146262784LL;
int64_t t28 = -109LL;
uint8_t x140 = 12U;
uint64_t t29 = 3699LLU;
volatile int64_t x142 = 17LL;
volatile uint32_t x145 = UINT32_MAX;
volatile uint8_t x146 = 1U;
static int64_t x147 = INT64_MIN;
int32_t x154 = 1;
int64_t x176 = -397899356287LL;
static uint32_t x186 = 433824U;
static int8_t x201 = INT8_MIN;
volatile int8_t x211 = INT8_MIN;
static uint16_t x212 = UINT16_MAX;
uint16_t x215 = 19216U;
int64_t x217 = INT64_MIN;
int32_t x218 = INT32_MIN;
uint64_t t46 = 23958LLU;
volatile int32_t x231 = INT32_MIN;
uint64_t x232 = UINT64_MAX;
int64_t x242 = -1LL;
volatile int16_t x243 = 1556;
volatile int32_t x244 = INT32_MIN;
uint64_t x248 = 736222765850675LLU;
int64_t x263 = -1938773761962954406LL;
volatile uint32_t x269 = 3U;
uint32_t x270 = UINT32_MAX;
int64_t x271 = INT64_MIN;
static int64_t t54 = 5764080223961781LL;
uint32_t x278 = 150353142U;
volatile uint64_t t57 = 613289956LLU;
int16_t x290 = INT16_MAX;
int8_t x293 = -9;
int64_t t59 = -21050503471108813LL;
uint8_t x297 = 1U;
int16_t x298 = INT16_MAX;
int32_t t60 = 296580;
int64_t x302 = INT64_MAX;
int64_t t61 = -7368982373LL;
volatile uint8_t x306 = 8U;
int32_t x309 = 2546;
int8_t x311 = -57;
static volatile uint64_t t63 = 8772033LLU;
static int32_t x320 = INT32_MIN;
int64_t x321 = INT64_MIN;
int64_t x323 = INT64_MAX;
int8_t x326 = INT8_MIN;
int16_t x339 = -3;
volatile uint32_t x351 = 64678U;
uint8_t x355 = UINT8_MAX;
uint16_t x362 = 23U;
uint64_t x363 = 114159294LLU;
volatile uint64_t t75 = 104594264259706934LLU;
volatile int8_t x369 = 0;
int64_t x370 = 3842404902992915LL;
uint8_t x371 = 29U;
int64_t x376 = -28LL;
volatile int64_t t78 = 3851191649528055255LL;
int32_t x377 = INT32_MIN;
uint8_t x379 = 7U;
static int64_t x385 = 32062LL;
static uint64_t x387 = 1058528023690LLU;
int32_t x399 = INT32_MIN;
volatile uint32_t x405 = 2250U;
volatile uint64_t t85 = 1083896511524461559LLU;
uint8_t x413 = UINT8_MAX;
volatile uint8_t x416 = UINT8_MAX;
volatile int8_t x423 = -1;
volatile int32_t t88 = 1185760;
uint8_t x426 = UINT8_MAX;
volatile int16_t x430 = INT16_MIN;
static volatile int16_t x434 = -1;
int64_t x441 = INT64_MAX;
volatile int32_t t97 = -1;
uint64_t t98 = 253696712LLU;


void f0(void) {
	volatile int8_t x2 = 0;
	int64_t x3 = INT64_MIN;
	int8_t x4 = -1;

	t0 = (x1%((x2%x3)-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	volatile int64_t x12 = 355LL;
	int64_t t1 = -927502293647867571LL;

	t1 = (x9%((x10%x11)-x12));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 2144;
	volatile int8_t x14 = 6;
	static uint32_t x15 = 8876U;
	static uint8_t x16 = 43U;

	t2 = (x13%((x14%x15)-x16));

	if (t2 != 2144U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = 309734;
	int16_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t3 = 1111336U;

	t3 = (x25%((x26%x27)-x28));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MIN;
	int16_t x30 = -865;
	int64_t x31 = INT64_MIN;
	static volatile uint64_t t4 = 4LLU;

	t4 = (x29%((x30%x31)-x32));

	if (t4 != 190281428017493949LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x33 = INT8_MIN;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = -1;
	volatile int16_t x36 = -1;
	static uint64_t t5 = 534636458108070669LLU;

	t5 = (x33%((x34%x35)-x36));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MIN;
	static int64_t x38 = INT64_MAX;
	int16_t x39 = INT16_MIN;
	uint8_t x40 = UINT8_MAX;
	volatile int64_t t6 = -17399965754LL;

	t6 = (x37%((x38%x39)-x40));

	if (t6 != -16384LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = -2;
	uint16_t x42 = 3U;
	int32_t x43 = INT32_MIN;
	static uint64_t x44 = 7LLU;
	volatile uint64_t t7 = 717415262676945LLU;

	t7 = (x41%((x42%x43)-x44));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x45 = 758;
	uint16_t x46 = UINT16_MAX;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t8 = 258268;

	t8 = (x45%((x46%x47)-x48));

	if (t8 != 118) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x50 = -1;
	uint16_t x51 = 1U;
	int64_t x52 = 68236863783LL;
	volatile int64_t t9 = -20LL;

	t9 = (x49%((x50%x51)-x52));

	if (t9 != 255LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 105614099986LLU;
	static int64_t x54 = INT64_MIN;
	volatile int32_t x56 = -1;

	t10 = (x53%((x54%x55)-x56));

	if (t10 != 105614099986LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -1;
	volatile int64_t x58 = INT64_MIN;
	int32_t x60 = INT32_MIN;
	static int64_t t11 = -147297645976LL;

	t11 = (x57%((x58%x59)-x60));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x62 = -83;
	static int32_t t12 = -1;

	t12 = (x61%((x62%x63)-x64));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x66 = 2U;
	volatile int32_t x67 = -326098;
	static volatile uint64_t t13 = 9537432124597LLU;

	t13 = (x65%((x66%x67)-x68));

	if (t13 != 29286366LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = INT8_MAX;
	static int16_t x71 = INT16_MIN;
	int16_t x72 = -1;

	t14 = (x69%((x70%x71)-x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -1;
	static int8_t x78 = 0;
	static int32_t x79 = INT32_MIN;
	volatile int16_t x80 = INT16_MIN;
	int32_t t15 = -121;

	t15 = (x77%((x78%x79)-x80));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = 1910;
	static int32_t x82 = -1;
	static int32_t x83 = -1;
	int32_t t16 = -67241;

	t16 = (x81%((x82%x83)-x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	volatile int32_t t17 = -2366191;

	t17 = (x85%((x86%x87)-x88));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = 38U;
	int8_t x90 = -1;
	static int32_t x92 = 191353213;
	volatile int32_t t18 = -117043;

	t18 = (x89%((x90%x91)-x92));

	if (t18 != 38) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x93 = -1;
	uint64_t x95 = 3372308607LLU;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t19 = 471820LLU;

	t19 = (x93%((x94%x95)-x96));

	if (t19 != 9223372036798136403LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = 308064;
	volatile int64_t x102 = -1LL;
	int64_t x103 = INT64_MIN;
	volatile int32_t x104 = INT32_MIN;
	volatile int64_t t20 = -64956264984210048LL;

	t20 = (x101%((x102%x103)-x104));

	if (t20 != 308064LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x105 = INT64_MAX;
	static int64_t x106 = INT64_MAX;
	uint16_t x107 = 1U;
	static volatile int32_t x108 = INT32_MAX;

	t21 = (x105%((x106%x107)-x108));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x109 = -241;
	int16_t x110 = 238;
	int16_t x111 = INT16_MAX;
	uint32_t t22 = 0U;

	t22 = (x109%((x110%x111)-x112));

	if (t22 != 65668336U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = 1U;

	t23 = (x113%((x114%x115)-x116));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -364;
	static int64_t x118 = INT64_MIN;
	int64_t x120 = -1LL;
	int64_t t24 = -113402576817406980LL;

	t24 = (x117%((x118%x119)-x120));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x121 = 2U;
	int64_t x123 = INT64_MAX;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t25 = 5821125940922633LL;

	t25 = (x121%((x122%x123)-x124));

	if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x125 = INT8_MIN;
	int32_t x128 = -1;
	volatile uint32_t t26 = 12140U;

	t26 = (x125%((x126%x127)-x128));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -106672354LL;
	int16_t x130 = INT16_MIN;
	int16_t x131 = -1;
	int16_t x132 = INT16_MAX;
	int64_t t27 = 238668LL;

	t27 = (x129%((x130%x131)-x132));

	if (t27 != -15769LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = UINT16_MAX;
	static int8_t x134 = 3;
	volatile int16_t x135 = INT16_MIN;

	t28 = (x133%((x134%x135)-x136));

	if (t28 != 65535LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = INT32_MAX;
	uint64_t x138 = UINT64_MAX;
	static volatile uint16_t x139 = 1U;

	t29 = (x137%((x138%x139)-x140));

	if (t29 != 2147483647LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = 433;
	volatile int8_t x143 = -1;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t30 = -4546923606013466159LL;

	t30 = (x141%((x142%x143)-x144));

	if (t30 != 178LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x148 = INT8_MIN;
	volatile int64_t t31 = 23LL;

	t31 = (x145%((x146%x147)-x148));

	if (t31 != 15LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x153 = 88;
	uint64_t x155 = 3881787453308967LLU;
	uint64_t x156 = 209126LLU;
	uint64_t t32 = 426LLU;

	t32 = (x153%((x154%x155)-x156));

	if (t32 != 88LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MIN;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = -2;
	static int32_t t33 = 47;

	t33 = (x157%((x158%x159)-x160));

	if (t33 != 15) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = 7U;
	uint8_t x162 = UINT8_MAX;
	int16_t x163 = -23;
	uint32_t x164 = 234970U;
	static volatile uint32_t t34 = 256173U;

	t34 = (x161%((x162%x163)-x164));

	if (t34 != 7U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MIN;
	static int64_t x166 = -274788488853LL;
	static uint64_t x167 = 190042136787LLU;
	volatile int8_t x168 = INT8_MIN;
	volatile uint64_t t35 = 6680883654795LLU;

	t35 = (x165%((x166%x167)-x168));

	if (t35 != 74099201288LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x173 = 828U;
	static int8_t x174 = INT8_MIN;
	int64_t x175 = -2967LL;
	static int64_t t36 = 121775401500898360LL;

	t36 = (x173%((x174%x175)-x176));

	if (t36 != 828LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x181 = -1;
	static int32_t x182 = -1;
	static int64_t x183 = INT64_MIN;
	static int64_t x184 = 88588742853LL;
	volatile int64_t t37 = -19LL;

	t37 = (x181%((x182%x183)-x184));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x185 = UINT32_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile uint8_t x188 = 60U;
	uint32_t t38 = 3385U;

	t38 = (x185%((x186%x187)-x188));

	if (t38 != 269931U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = INT64_MIN;
	uint64_t x190 = UINT64_MAX;
	volatile uint16_t x191 = 6U;
	static uint32_t x192 = 60763U;
	volatile uint64_t t39 = 1823335LLU;

	t39 = (x189%((x190%x191)-x192));

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MIN;
	static int8_t x194 = INT8_MAX;
	int64_t x195 = INT64_MIN;
	uint16_t x196 = 2479U;
	static int64_t t40 = -430980799204339337LL;

	t40 = (x193%((x194%x195)-x196));

	if (t40 != -1808LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = INT64_MAX;
	int64_t x198 = 20546616921292LL;
	volatile int8_t x199 = INT8_MAX;
	static volatile int32_t x200 = -1;
	int64_t t41 = 42511254LL;

	t41 = (x197%((x198%x199)-x200));

	if (t41 != 3LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x202 = 165477694621655798LLU;
	int64_t x203 = INT64_MIN;
	volatile uint64_t x204 = 1951035LLU;
	volatile uint64_t t42 = 493662861LLU;

	t42 = (x201%((x202%x203)-x204));

	if (t42 != 78719970922322795LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = INT64_MIN;
	static int8_t x210 = -25;
	static int64_t t43 = -14382520245LL;

	t43 = (x209%((x210%x211)-x212));

	if (t43 != -34768LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 17762U;
	volatile int64_t x214 = 6495578631656986LL;
	uint32_t x216 = 34274307U;
	volatile int64_t t44 = -229843713237404LL;

	t44 = (x213%((x214%x215)-x216));

	if (t44 != 17762LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x219 = -107337;
	int16_t x220 = INT16_MAX;
	int64_t t45 = 25561LL;

	t45 = (x217%((x218%x219)-x220));

	if (t45 != -91286LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = UINT64_MAX;
	int32_t x222 = -5375141;
	int64_t x223 = 3LL;
	int64_t x224 = -1LL;

	t46 = (x221%((x222%x223)-x224));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x225 = 1U;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = -1;
	int8_t x228 = -1;
	int32_t t47 = -184385452;

	t47 = (x225%((x226%x227)-x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = INT8_MAX;
	int16_t x230 = 7545;
	uint64_t t48 = 62771077LLU;

	t48 = (x229%((x230%x231)-x232));

	if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x233 = -134504;
	volatile int64_t x234 = -1LL;
	int64_t x235 = INT64_MIN;
	volatile int32_t x236 = -1750;
	volatile int64_t t49 = 1331264367993LL;

	t49 = (x233%((x234%x235)-x236));

	if (t49 != -1580LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = INT64_MIN;
	volatile int64_t t50 = 26083724542384LL;

	t50 = (x241%((x242%x243)-x244));

	if (t50 != -2LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -2402806;
	int32_t x246 = INT32_MAX;
	int32_t x247 = -1;
	volatile uint64_t t51 = 4051251869150083055LLU;

	t51 = (x245%((x246%x247)-x248));

	if (t51 != 736222763447869LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x261 = 45U;
	int64_t x262 = 2LL;
	int8_t x264 = -1;
	static int64_t t52 = 61995277682333626LL;

	t52 = (x261%((x262%x263)-x264));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = -18;
	uint32_t x266 = 1U;
	uint8_t x267 = UINT8_MAX;
	uint16_t x268 = UINT16_MAX;
	volatile uint32_t t53 = 3910973U;

	t53 = (x265%((x266%x267)-x268));

	if (t53 != 65516U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x272 = UINT8_MAX;

	t54 = (x269%((x270%x271)-x272));

	if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = INT64_MAX;
	int16_t x274 = INT16_MIN;
	volatile uint32_t x275 = 52261448U;
	static int16_t x276 = INT16_MIN;
	static int64_t t55 = 3873473117557LL;

	t55 = (x273%((x274%x275)-x276));

	if (t55 != 3159407LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x277 = INT64_MAX;
	int8_t x279 = INT8_MAX;
	static uint8_t x280 = 43U;
	volatile int64_t t56 = 4196055LL;

	t56 = (x277%((x278%x279)-x280));

	if (t56 != 881LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x285 = 0U;
	volatile uint64_t x286 = 0LLU;
	int64_t x287 = -130645843802LL;
	uint8_t x288 = UINT8_MAX;

	t57 = (x285%((x286%x287)-x288));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = -1;
	static int64_t x291 = 1LL;
	uint64_t x292 = UINT64_MAX;
	uint64_t t58 = 120606327331782308LLU;

	t58 = (x289%((x290%x291)-x292));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x294 = -3;
	int64_t x295 = INT64_MIN;
	volatile int32_t x296 = INT32_MIN;

	t59 = (x293%((x294%x295)-x296));

	if (t59 != -9LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x299 = -3;
	static int16_t x300 = -1;

	t60 = (x297%((x298%x299)-x300));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x301 = INT32_MIN;
	static volatile int16_t x303 = -7;
	int16_t x304 = 1;

	t61 = (x301%((x302%x303)-x304));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x305 = INT8_MIN;
	static uint8_t x307 = 11U;
	uint16_t x308 = 12U;
	static volatile int32_t t62 = 1879949;

	t62 = (x305%((x306%x307)-x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x310 = 30;
	uint64_t x312 = 1605309522877LLU;

	t63 = (x309%((x310%x311)-x312));

	if (t63 != 2546LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = 0;
	static int16_t x314 = INT16_MAX;
	volatile uint64_t x315 = 44768363LLU;
	static int64_t x316 = INT64_MAX;
	uint64_t t64 = 40928044590751073LLU;

	t64 = (x313%((x314%x315)-x316));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = 15;
	volatile int16_t x318 = -18;
	uint64_t x319 = 34494601628368LLU;
	volatile uint64_t t65 = 49608704096379078LLU;

	t65 = (x317%((x318%x319)-x320));

	if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x322 = UINT16_MAX;
	int64_t x324 = 366338816536883LL;
	int64_t t66 = 41557634914898622LL;

	t66 = (x321%((x322%x323)-x324));

	if (t66 != -59654555647212LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x325 = 2414U;
	int64_t x327 = INT64_MAX;
	uint32_t x328 = 516345974U;
	static volatile int64_t t67 = 1LL;

	t67 = (x325%((x326%x327)-x328));

	if (t67 != 2414LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x329 = 7696U;
	uint16_t x330 = 27921U;
	uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = INT64_MAX;
	static volatile int64_t t68 = 34662297733654LL;

	t68 = (x329%((x330%x331)-x332));

	if (t68 != 7696LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x337 = 119584U;
	uint64_t x338 = UINT64_MAX;
	int32_t x340 = INT32_MAX;
	volatile uint64_t t69 = 6833611536341829169LLU;

	t69 = (x337%((x338%x339)-x340));

	if (t69 != 119584LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x341 = INT8_MAX;
	uint32_t x342 = 26U;
	uint16_t x343 = UINT16_MAX;
	static int64_t x344 = 7138191LL;
	volatile int64_t t70 = -310026858427119LL;

	t70 = (x341%((x342%x343)-x344));

	if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x345 = -13121LL;
	int16_t x346 = 0;
	static int16_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	uint64_t t71 = 49127569979974231LLU;

	t71 = (x345%((x346%x347)-x348));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x349 = 15U;
	volatile int16_t x350 = INT16_MAX;
	int32_t x352 = INT32_MIN;
	uint32_t t72 = 750100U;

	t72 = (x349%((x350%x351)-x352));

	if (t72 != 15U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x353 = 0U;
	static volatile uint8_t x354 = UINT8_MAX;
	uint64_t x356 = 461931565LLU;
	static volatile uint64_t t73 = 10573LLU;

	t73 = (x353%((x354%x355)-x356));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x357 = 0U;
	volatile int16_t x358 = 3397;
	int8_t x359 = 8;
	static uint16_t x360 = 26U;
	uint32_t t74 = 19242U;

	t74 = (x357%((x358%x359)-x360));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = 6571U;
	uint32_t x364 = 219U;

	t75 = (x361%((x362%x363)-x364));

	if (t75 != 6571LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x365 = INT32_MIN;
	static uint32_t x366 = UINT32_MAX;
	static int64_t x367 = -1LL;
	uint16_t x368 = UINT16_MAX;
	int64_t t76 = -6LL;

	t76 = (x365%((x366%x367)-x368));

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x372 = UINT8_MAX;
	int64_t t77 = -902708605LL;

	t77 = (x369%((x370%x371)-x372));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = -477822453077LL;
	static uint32_t x374 = 74U;
	int16_t x375 = 1;

	t78 = (x373%((x374%x375)-x376));

	if (t78 != -25LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x378 = -63;
	volatile uint8_t x380 = 58U;
	volatile int32_t t79 = -3;

	t79 = (x377%((x378%x379)-x380));

	if (t79 != -8) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x381 = 242902U;
	uint8_t x382 = 11U;
	volatile int64_t x383 = INT64_MIN;
	int16_t x384 = -3;
	int64_t t80 = -24055789163880LL;

	t80 = (x381%((x382%x383)-x384));

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x386 = 2449327U;
	static int8_t x388 = INT8_MIN;
	static volatile uint64_t t81 = 0LLU;

	t81 = (x385%((x386%x387)-x388));

	if (t81 != 32062LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int8_t x390 = 2;
	int8_t x391 = INT8_MIN;
	volatile uint8_t x392 = UINT8_MAX;
	int32_t t82 = 435117;

	t82 = (x389%((x390%x391)-x392));

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x397 = 45208LLU;
	int16_t x398 = INT16_MAX;
	int32_t x400 = -712499;
	static uint64_t t83 = 3557LLU;

	t83 = (x397%((x398%x399)-x400));

	if (t83 != 45208LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x406 = INT8_MIN;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MAX;
	volatile int64_t t84 = 63490391206141LL;

	t84 = (x405%((x406%x407)-x408));

	if (t84 != 2250LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = -1580544762541LL;
	static volatile int64_t x410 = INT64_MAX;
	uint64_t x411 = 22226699648LLU;
	uint16_t x412 = UINT16_MAX;

	t85 = (x409%((x410%x411)-x412));

	if (t85 != 3182878035LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x414 = INT64_MIN;
	volatile int8_t x415 = INT8_MAX;
	static int64_t t86 = 225396780545567LL;

	t86 = (x413%((x414%x415)-x416));

	if (t86 != 255LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x417 = 1095670366U;
	int64_t x418 = 13673006900879LL;
	uint16_t x419 = 23073U;
	static int16_t x420 = -1;
	int64_t t87 = 31957LL;

	t87 = (x417%((x418%x419)-x420));

	if (t87 != 6727LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x421 = INT8_MAX;
	volatile int8_t x422 = INT8_MIN;
	static uint16_t x424 = UINT16_MAX;

	t88 = (x421%((x422%x423)-x424));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x425 = 5346572072360996772LLU;
	int32_t x427 = INT32_MIN;
	uint64_t x428 = UINT64_MAX;
	static volatile uint64_t t89 = 8LLU;

	t89 = (x425%((x426%x427)-x428));

	if (t89 != 164LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t90 = 9224852LLU;

	t90 = (x429%((x430%x431)-x432));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x433 = UINT8_MAX;
	uint16_t x435 = UINT16_MAX;
	int16_t x436 = INT16_MAX;
	static volatile int32_t t91 = 5;

	t91 = (x433%((x434%x435)-x436));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x437 = 6041U;
	static uint8_t x438 = UINT8_MAX;
	int8_t x439 = -1;
	int16_t x440 = INT16_MIN;
	volatile int32_t t92 = -10087682;

	t92 = (x437%((x438%x439)-x440));

	if (t92 != 6041) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x442 = UINT32_MAX;
	int16_t x443 = -1;
	int32_t x444 = 155;
	int64_t t93 = 15046260751096226LL;

	t93 = (x441%((x442%x443)-x444));

	if (t93 != 2147495582LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = INT64_MIN;
	int32_t x446 = 6;
	static int64_t x447 = 132LL;
	int16_t x448 = INT16_MIN;
	int64_t t94 = -3953LL;

	t94 = (x445%((x446%x447)-x448));

	if (t94 != -10368LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = INT64_MIN;
	int64_t x450 = -10263279LL;
	uint32_t x451 = UINT32_MAX;
	volatile int8_t x452 = INT8_MAX;
	int64_t t95 = 23LL;

	t95 = (x449%((x450%x451)-x452));

	if (t95 != -2944652LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MIN;
	static volatile int64_t x455 = INT64_MIN;
	int16_t x456 = -1;
	volatile int64_t t96 = 79064LL;

	t96 = (x453%((x454%x455)-x456));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x457 = -435;
	int32_t x458 = -234;
	volatile int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MIN;

	t97 = (x457%((x458%x459)-x460));

	if (t97 != -11) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = INT32_MAX;
	int64_t x462 = INT64_MIN;
	uint64_t x463 = 10060639680273064LLU;
	int8_t x464 = -1;

	t98 = (x461%((x462%x463)-x464));

	if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x465 = UINT64_MAX;
	uint32_t x466 = 2185U;
	int32_t x467 = 21;
	int16_t x468 = INT16_MAX;
	static volatile uint64_t t99 = 606982605232LLU;

	t99 = (x465%((x466%x467)-x468));

	if (t99 != 1073610755LLU) { NG(); } else { ; }
	
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

