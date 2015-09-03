#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = 0;
volatile uint32_t x11 = UINT32_MAX;
static uint64_t x18 = UINT64_MAX;
uint8_t x42 = 49U;
volatile uint8_t x53 = 8U;
volatile int32_t x59 = INT32_MIN;
volatile int16_t x61 = INT16_MAX;
uint64_t t12 = 2534117216530021524LLU;
int64_t x82 = -395110982736LL;
uint32_t x86 = 0U;
int8_t x88 = INT8_MIN;
static uint16_t x105 = UINT16_MAX;
volatile uint16_t x108 = 16096U;
int8_t x112 = INT8_MAX;
int8_t x120 = -2;
uint64_t x124 = UINT64_MAX;
static uint8_t x129 = UINT8_MAX;
volatile int16_t x130 = 5;
volatile uint16_t x131 = 0U;
int8_t x138 = -7;
int32_t x139 = -1;
static uint64_t t28 = 5534LLU;
int32_t x145 = -1;
int16_t x160 = INT16_MIN;
static uint8_t x165 = UINT8_MAX;
uint8_t x166 = 25U;
volatile int32_t t31 = INT32_MAX;
int8_t x171 = -1;
uint64_t t33 = 1324730800270LLU;
uint64_t x179 = 37675591798750828LLU;
int64_t x183 = INT64_MAX;
int16_t x191 = -1;
volatile int8_t x206 = -15;
int16_t x207 = INT16_MIN;
volatile int64_t x209 = -1LL;
static uint8_t x213 = 1U;
static int32_t t45 = 928188;
int64_t t47 = -2274338535LL;
int64_t x241 = -4LL;
volatile int16_t x243 = 1534;
int64_t x244 = INT64_MIN;
int16_t x245 = INT16_MIN;
uint16_t x250 = 49U;
volatile int16_t x251 = -1651;
volatile uint64_t x274 = 11787949540177866LLU;
int32_t x280 = INT32_MIN;
volatile int32_t t55 = 15849648;
int64_t x283 = -148476LL;
static volatile uint64_t x291 = 7381309449859LLU;
uint64_t t58 = 15584211023233LLU;
uint32_t x294 = UINT32_MAX;
int64_t x296 = INT64_MIN;
volatile int64_t t59 = -1895628LL;
int16_t x301 = INT16_MIN;
volatile uint8_t x302 = 72U;
static volatile uint8_t x306 = 32U;
static volatile uint64_t x329 = 9279448685240LLU;
int8_t x334 = 2;
volatile uint64_t t66 = 56458345932058LLU;
static uint64_t x358 = 43LLU;
int64_t x374 = -38974097231510LL;
uint16_t x384 = 13668U;
int32_t x397 = -1;
int64_t x399 = INT64_MAX;
int8_t x407 = -1;
volatile uint64_t t76 = 24057LLU;
volatile int64_t x409 = -819LL;
static volatile uint16_t x412 = 204U;
volatile uint64_t t77 = 46LLU;
int32_t x413 = -98;
int8_t x416 = -1;
uint64_t x430 = 195900LLU;
uint64_t x449 = UINT64_MAX;
int32_t x452 = INT32_MIN;
uint64_t t85 = 363LLU;
int64_t x457 = -1LL;
volatile uint16_t x460 = 7078U;
uint32_t x477 = UINT32_MAX;
int8_t x479 = INT8_MIN;
static uint64_t x495 = 9685708078LLU;
uint64_t t92 = 40926836633472LLU;
uint32_t x499 = 154600U;
int64_t x508 = INT64_MIN;
int8_t x513 = INT8_MIN;
int16_t x525 = -97;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	static int16_t x2 = -1;
	int32_t x3 = -12426;
	static uint64_t x4 = 332147LLU;
	volatile uint64_t t0 = 4305799927440959278LLU;

	t0 = (((x1*x2)|x3)^x4);

	if (t0 != 18446744073709219460LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 41U;
	int8_t x7 = 0;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (((x5*x6)|x7)^x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static uint16_t x10 = 23U;
	int8_t x12 = INT8_MAX;
	volatile uint32_t t2 = 51U;

	t2 = (((x9*x10)|x11)^x12);

	if (t2 != 4294967168U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 489177730536LLU;
	static int32_t x14 = -1048186;
	static uint8_t x15 = 3U;
	int32_t x16 = INT32_MIN;
	uint64_t t3 = 8081504LLU;

	t3 = (((x13*x14)|x15)^x16);

	if (t3 != 512749249961373555LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int8_t x19 = -63;
	int8_t x20 = -1;
	uint64_t t4 = 1610141LLU;

	t4 = (((x17*x18)|x19)^x20);

	if (t4 != 62LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	volatile int64_t x26 = -1LL;
	uint64_t x27 = 308346LLU;
	int16_t x28 = INT16_MIN;
	static uint64_t t5 = 329680300693LLU;

	t5 = (((x25*x26)|x27)^x28);

	if (t5 != 18446744073709237371LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	int32_t x34 = -1;
	volatile uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	static uint32_t t6 = 17561U;

	t6 = (((x33*x34)|x35)^x36);

	if (t6 != 32767U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x37 = -114444493;
	int32_t x38 = -1;
	static int32_t x39 = 419588651;
	int16_t x40 = INT16_MIN;
	static int32_t t7 = -147262119;

	t7 = (((x37*x38)|x39)^x40);

	if (t7 != -533861649) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	uint8_t x43 = UINT8_MAX;
	volatile uint16_t x44 = 0U;
	int32_t t8 = 1;

	t8 = (((x41*x42)|x43)^x44);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x54 = 810956348LL;
	int16_t x55 = 36;
	int8_t x56 = -6;
	int64_t t9 = 20921064136LL;

	t9 = (((x53*x54)|x55)^x56);

	if (t9 != -6487650786LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x57 = 0;
	volatile uint16_t x58 = UINT16_MAX;
	volatile int64_t x60 = INT64_MIN;
	volatile int64_t t10 = 580083899330961185LL;

	t10 = (((x57*x58)|x59)^x60);

	if (t10 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x62 = UINT16_MAX;
	int8_t x63 = -1;
	static uint32_t x64 = 320U;
	static uint32_t t11 = 0U;

	t11 = (((x61*x62)|x63)^x64);

	if (t11 != 4294966975U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MAX;
	static int64_t x74 = -1812LL;
	uint64_t x75 = 135028445519462836LLU;
	int64_t x76 = INT64_MIN;

	t12 = (((x73*x74)|x75)^x76);

	if (t12 != 9223372036854709684LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = 431032030U;
	static int8_t x79 = 2;
	static int64_t x80 = -2107LL;
	volatile int64_t t13 = 0LL;

	t13 = (((x77*x78)|x79)^x80);

	if (t13 != -2089879609LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 1U;
	volatile uint32_t x83 = 22624U;
	static volatile int64_t x84 = 25612257132LL;
	int64_t t14 = 1863394930234LL;

	t14 = (((x81*x82)|x83)^x84);

	if (t14 != -403876815716LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = INT32_MIN;
	int64_t x87 = 2116752074LL;
	static volatile int64_t t15 = -16LL;

	t15 = (((x85*x86)|x87)^x88);

	if (t15 != -2116752054LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x93 = 1U;
	int8_t x94 = -1;
	uint64_t x95 = 275288279LLU;
	volatile int8_t x96 = -1;
	uint64_t t16 = 25161LLU;

	t16 = (((x93*x94)|x95)^x96);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x97 = 511U;
	uint16_t x98 = 14U;
	int64_t x99 = -242343288143320574LL;
	int16_t x100 = INT16_MAX;
	int64_t t17 = -1LL;

	t17 = (((x97*x98)|x99)^x100);

	if (t17 != -242343288143346675LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x101 = UINT16_MAX;
	volatile int8_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;
	static int64_t t18 = -222283LL;

	t18 = (((x101*x102)|x103)^x104);

	if (t18 != -2147418114LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x106 = INT8_MIN;
	uint8_t x107 = 7U;
	int32_t t19 = -915278;

	t19 = (((x105*x106)|x107)^x108);

	if (t19 != -8372633) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = 66620796083304LLU;
	int16_t x110 = INT16_MIN;
	static int16_t x111 = INT16_MIN;
	uint64_t t20 = 1728127307031LLU;

	t20 = (((x109*x110)|x111)^x112);

	if (t20 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x113 = UINT64_MAX;
	volatile int16_t x114 = INT16_MIN;
	uint8_t x115 = 0U;
	int64_t x116 = INT64_MIN;
	volatile uint64_t t21 = 88240LLU;

	t21 = (((x113*x114)|x115)^x116);

	if (t21 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = INT64_MIN;
	static volatile int8_t x118 = 1;
	volatile uint64_t x119 = 92223097LLU;
	static volatile uint64_t t22 = 43307LLU;

	t22 = (((x117*x118)|x119)^x120);

	if (t22 != 9223372036762552711LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = -216781LL;
	uint16_t x122 = 13U;
	volatile int32_t x123 = INT32_MAX;
	volatile uint64_t t23 = 23950LLU;

	t23 = (((x121*x122)|x123)^x124);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	static volatile int64_t x128 = INT64_MAX;
	int64_t t24 = 4574LL;

	t24 = (((x125*x126)|x127)^x128);

	if (t24 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x132 = -1LL;
	volatile int64_t t25 = -2LL;

	t25 = (((x129*x130)|x131)^x132);

	if (t25 != -1276LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = -1LL;
	uint16_t x135 = 245U;
	static int16_t x136 = -1;
	volatile int64_t t26 = 4461446348098302472LL;

	t26 = (((x133*x134)|x135)^x136);

	if (t26 != -246LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = 99482LLU;
	int8_t x140 = 24;
	uint64_t t27 = 3503717954862320258LLU;

	t27 = (((x137*x138)|x139)^x140);

	if (t27 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x141 = UINT64_MAX;
	volatile uint8_t x142 = 18U;
	int64_t x143 = INT64_MAX;
	static int64_t x144 = INT64_MIN;

	t28 = (((x141*x142)|x143)^x144);

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x146 = -14LL;
	uint16_t x147 = 11315U;
	int64_t x148 = INT64_MIN;
	int64_t t29 = -116204914101LL;

	t29 = (((x145*x146)|x147)^x148);

	if (t29 != -9223372036854764481LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x158 = INT8_MIN;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t t30 = -357900354;

	t30 = (((x157*x158)|x159)^x160);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x167 = -4;
	int32_t x168 = INT32_MIN;

	t31 = (((x165*x166)|x167)^x168);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = INT8_MIN;
	static int8_t x170 = -1;
	uint32_t x172 = 16188828U;
	uint32_t t32 = 237720U;

	t32 = (((x169*x170)|x171)^x172);

	if (t32 != 4278778467U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x173 = 797557U;
	int32_t x174 = -79820;
	uint64_t x175 = 106053LLU;
	static uint8_t x176 = 27U;

	t33 = (((x173*x174)|x175)^x176);

	if (t33 != 763609054LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MIN;
	static uint8_t x178 = UINT8_MAX;
	int64_t x180 = 580039213957620LL;
	uint64_t t34 = 10268151642583483LLU;

	t34 = (((x177*x178)|x179)^x180);

	if (t34 != 18446164034493366168LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MAX;
	int8_t x184 = -7;
	volatile int64_t t35 = -1LL;

	t35 = (((x181*x182)|x183)^x184);

	if (t35 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x185 = UINT32_MAX;
	static uint8_t x186 = 1U;
	volatile int8_t x187 = INT8_MIN;
	uint32_t x188 = UINT32_MAX;
	static uint32_t t36 = 458069029U;

	t36 = (((x185*x186)|x187)^x188);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = -20;
	static volatile uint8_t x190 = 66U;
	int32_t x192 = -1;
	static volatile int32_t t37 = 233;

	t37 = (((x189*x190)|x191)^x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x197 = INT64_MAX;
	int16_t x198 = -1;
	uint32_t x199 = 488U;
	static int32_t x200 = -23;
	int64_t t38 = 29021383948829LL;

	t38 = (((x197*x198)|x199)^x200);

	if (t38 != 9223372036854775296LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x201 = 2623481U;
	volatile uint8_t x202 = 4U;
	int64_t x203 = 4070093055043LL;
	static uint64_t x204 = UINT64_MAX;
	static uint64_t t39 = 3727429815875620302LLU;

	t39 = (((x201*x202)|x203)^x204);

	if (t39 != 18446740003608100888LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x205 = UINT64_MAX;
	int8_t x208 = INT8_MIN;
	uint64_t t40 = 719LLU;

	t40 = (((x205*x206)|x207)^x208);

	if (t40 != 32655LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x210 = -28;
	int32_t x211 = -152662716;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t41 = 2015443508361167968LLU;

	t41 = (((x209*x210)|x211)^x212);

	if (t41 != 152662691LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x214 = INT64_MIN;
	static volatile uint64_t x215 = UINT64_MAX;
	int16_t x216 = INT16_MIN;
	static uint64_t t42 = 107278705972LLU;

	t42 = (((x213*x214)|x215)^x216);

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = INT16_MAX;
	int64_t x218 = -1LL;
	volatile int32_t x219 = -1;
	static uint64_t x220 = UINT64_MAX;
	static volatile uint64_t t43 = 1523081773LLU;

	t43 = (((x217*x218)|x219)^x220);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = -1;
	int64_t x222 = 82617036705160134LL;
	static volatile int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	int64_t t44 = -11225747516849473LL;

	t44 = (((x221*x222)|x223)^x224);

	if (t44 != 23482LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MAX;
	static volatile int16_t x226 = -1;
	int8_t x227 = -1;
	int16_t x228 = INT16_MIN;

	t45 = (((x225*x226)|x227)^x228);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x229 = 201143058LL;
	int8_t x230 = INT8_MAX;
	int64_t x231 = INT64_MIN;
	int64_t x232 = INT64_MIN;
	volatile int64_t t46 = 2345LL;

	t46 = (((x229*x230)|x231)^x232);

	if (t46 != 25545168366LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x233 = 20944U;
	int8_t x234 = 0;
	int64_t x235 = 3253416897215931923LL;
	static uint8_t x236 = UINT8_MAX;

	t47 = (((x233*x234)|x235)^x236);

	if (t47 != 3253416897215932140LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x242 = 6986414370729LL;
	int64_t t48 = 73023792011LL;

	t48 = (((x241*x242)|x243)^x244);

	if (t48 != 9223344091197294078LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x246 = 117412LL;
	int8_t x247 = INT8_MIN;
	int8_t x248 = 9;
	volatile int64_t t49 = 23118LL;

	t49 = (((x245*x246)|x247)^x248);

	if (t49 != -119LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x249 = 1712;
	int32_t x252 = -1;
	volatile int32_t t50 = -7;

	t50 = (((x249*x250)|x251)^x252);

	if (t50 != 66) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x253 = 0;
	uint64_t x254 = 38077LLU;
	int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	uint64_t t51 = 16329343696569LLU;

	t51 = (((x253*x254)|x255)^x256);

	if (t51 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = 12;
	volatile uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MAX;
	uint32_t x268 = 2134059U;
	uint64_t t52 = 1243749707399963LLU;

	t52 = (((x265*x266)|x267)^x268);

	if (t52 != 18446744073707417556LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x269 = 2138LLU;
	uint8_t x270 = UINT8_MAX;
	static int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	uint64_t t53 = 809LLU;

	t53 = (((x269*x270)|x271)^x272);

	if (t53 != 9223372036854230566LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = -25;
	int64_t x275 = INT64_MIN;
	int16_t x276 = 802;
	volatile uint64_t t54 = 537040574772381LLU;

	t54 = (((x273*x274)|x275)^x276);

	if (t54 != 18152045335205105252LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = 1576153;
	static uint8_t x278 = UINT8_MAX;
	int8_t x279 = INT8_MAX;

	t55 = (((x277*x278)|x279)^x280);

	if (t55 != -1745564545) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = -1;
	static int32_t x282 = -101;
	static uint64_t x284 = 242891LLU;
	volatile uint64_t t56 = 367139057597LLU;

	t56 = (((x281*x282)|x283)^x284);

	if (t56 != 18446744073709422766LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = -1;
	volatile int64_t x286 = -1LL;
	int16_t x287 = -3;
	int8_t x288 = INT8_MIN;
	static int64_t t57 = -17870749554619595LL;

	t57 = (((x285*x286)|x287)^x288);

	if (t57 != 125LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x289 = -1LL;
	int8_t x290 = -59;
	volatile int16_t x292 = INT16_MIN;

	t58 = (((x289*x290)|x291)^x292);

	if (t58 != 18446736692400121531LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x293 = 1224U;
	int8_t x295 = INT8_MIN;

	t59 = (((x293*x294)|x295)^x296);

	if (t59 != -9223372032559808584LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x303 = INT8_MIN;
	int8_t x304 = -38;
	int32_t t60 = 581173737;

	t60 = (((x301*x302)|x303)^x304);

	if (t60 != 90) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x305 = 3424219004LLU;
	uint64_t x307 = UINT64_MAX;
	static int16_t x308 = 1029;
	static uint64_t t61 = 402434450243083487LLU;

	t61 = (((x305*x306)|x307)^x308);

	if (t61 != 18446744073709550586LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x313 = 1;
	static volatile uint32_t x314 = 93187U;
	int8_t x315 = INT8_MAX;
	uint8_t x316 = UINT8_MAX;
	uint32_t t62 = 1U;

	t62 = (((x313*x314)|x315)^x316);

	if (t62 != 93312U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x325 = -1;
	static uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 6LLU;
	static int16_t x328 = 107;
	uint64_t t63 = 52212488241383084LLU;

	t63 = (((x325*x326)|x327)^x328);

	if (t63 != 108LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x330 = INT64_MIN;
	uint32_t x331 = 15300U;
	static int8_t x332 = -7;
	uint64_t t64 = 110452LLU;

	t64 = (((x329*x330)|x331)^x332);

	if (t64 != 18446744073709536317LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x333 = 6U;
	uint8_t x335 = 68U;
	int8_t x336 = 0;
	volatile int32_t t65 = -591;

	t65 = (((x333*x334)|x335)^x336);

	if (t65 != 76) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x337 = 174933U;
	uint8_t x338 = 20U;
	int8_t x339 = INT8_MIN;
	static uint64_t x340 = 20LLU;

	t66 = (((x337*x338)|x339)^x340);

	if (t66 != 4294967216LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x353 = -1209;
	volatile uint32_t x354 = UINT32_MAX;
	uint16_t x355 = 4541U;
	static uint32_t x356 = UINT32_MAX;
	static uint32_t t67 = 205159U;

	t67 = (((x353*x354)|x355)^x356);

	if (t67 != 4294961730U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x357 = 98710377LLU;
	uint16_t x359 = 1279U;
	static int8_t x360 = 0;
	volatile uint64_t t68 = 219635313488LLU;

	t68 = (((x357*x358)|x359)^x360);

	if (t68 != 4244547327LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x365 = INT32_MIN;
	volatile uint64_t x366 = 15315511593639LLU;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (((x365*x366)|x367)^x368);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x369 = UINT8_MAX;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = -109;
	uint32_t x372 = 2205470U;
	volatile uint64_t t70 = 946344453LLU;

	t70 = (((x369*x370)|x371)^x372);

	if (t70 != 18446744073707346061LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x373 = -10;
	volatile int32_t x375 = INT32_MIN;
	uint16_t x376 = 441U;
	volatile int64_t t71 = -5068315237973963LL;

	t71 = (((x373*x374)|x375)^x376);

	if (t71 != -1539993499LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x381 = -1LL;
	static int16_t x382 = -1;
	uint8_t x383 = 61U;
	volatile int64_t t72 = -206421061985725042LL;

	t72 = (((x381*x382)|x383)^x384);

	if (t72 != 13657LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x385 = -7719749;
	uint64_t x386 = 115902LLU;
	int8_t x387 = -1;
	int64_t x388 = INT64_MIN;
	uint64_t t73 = 58698087LLU;

	t73 = (((x385*x386)|x387)^x388);

	if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x393 = 129057LL;
	static uint64_t x394 = 2028LLU;
	static volatile int64_t x395 = INT64_MIN;
	volatile int32_t x396 = 7216284;
	static uint64_t t74 = 100768LLU;

	t74 = (((x393*x394)|x395)^x396);

	if (t74 != 9223372037122669040LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x398 = INT16_MIN;
	static int64_t x400 = 1054820915684327LL;
	volatile int64_t t75 = 688670424992LL;

	t75 = (((x397*x398)|x399)^x400);

	if (t75 != 9222317215939091480LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x405 = 71506892LLU;
	int16_t x406 = 8611;
	int8_t x408 = -1;

	t76 = (((x405*x406)|x407)^x408);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x410 = 611325228LLU;
	int8_t x411 = INT8_MAX;

	t77 = (((x409*x410)|x411)^x412);

	if (t77 != 18446743573034190003LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x414 = 1421494714U;
	uint8_t x415 = 3U;
	static uint32_t t78 = 207U;

	t78 = (((x413*x414)|x415)^x416);

	if (t78 != 1867528496U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x425 = 1U;
	static uint16_t x426 = 1783U;
	static volatile uint8_t x427 = 87U;
	int8_t x428 = -1;
	static int32_t t79 = -19;

	t79 = (((x425*x426)|x427)^x428);

	if (t79 != -1784) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x429 = -1;
	static volatile int16_t x431 = -3;
	volatile uint32_t x432 = 432658858U;
	uint64_t t80 = 7LLU;

	t80 = (((x429*x430)|x431)^x432);

	if (t80 != 18446744073276892759LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x433 = 7U;
	int64_t x434 = -1LL;
	int64_t x435 = INT64_MIN;
	volatile int32_t x436 = -5229287;
	int64_t t81 = -975561887707830620LL;

	t81 = (((x433*x434)|x435)^x436);

	if (t81 != 5229280LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x437 = INT8_MIN;
	static uint32_t x438 = 55966U;
	uint64_t x439 = 7LLU;
	volatile int16_t x440 = -1;
	uint64_t t82 = 1LLU;

	t82 = (((x437*x438)|x439)^x440);

	if (t82 != 18446744069421747960LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x441 = 31034U;
	int8_t x442 = INT8_MIN;
	static uint32_t x443 = UINT32_MAX;
	uint64_t x444 = 592667231796343358LLU;
	volatile uint64_t t83 = 995786LLU;

	t83 = (((x441*x442)|x443)^x444);

	if (t83 != 592667235647212993LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x445 = -1;
	static uint8_t x446 = 2U;
	static int8_t x447 = INT8_MIN;
	uint32_t x448 = UINT32_MAX;
	uint32_t t84 = 17420U;

	t84 = (((x445*x446)|x447)^x448);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x450 = -14;
	uint64_t x451 = UINT64_MAX;

	t85 = (((x449*x450)|x451)^x452);

	if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x453 = -1LL;
	static int8_t x454 = 52;
	uint16_t x455 = 53U;
	int16_t x456 = -1270;
	int64_t t86 = 140221948225368LL;

	t86 = (((x453*x454)|x455)^x456);

	if (t86 != 1271LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	int64_t t87 = -651101915487295300LL;

	t87 = (((x457*x458)|x459)^x460);

	if (t87 != -7130LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x478 = -113;
	volatile int64_t x480 = -1759673162989519LL;
	int64_t t88 = 3968396759053LL;

	t88 = (((x477*x478)|x479)^x480);

	if (t88 != -1759670283993152LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x481 = INT32_MAX;
	uint32_t x482 = 103U;
	volatile int8_t x483 = INT8_MAX;
	int16_t x484 = INT16_MIN;
	volatile uint32_t t89 = 21130U;

	t89 = (((x481*x482)|x483)^x484);

	if (t89 != 2147516415U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x485 = 1U;
	static int16_t x486 = -2917;
	int8_t x487 = INT8_MIN;
	uint64_t x488 = 429980705225852012LLU;
	uint64_t t90 = 333478823794491LLU;

	t90 = (((x485*x486)|x487)^x488);

	if (t90 != 18016763368483699703LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x489 = UINT8_MAX;
	static uint64_t x490 = 9LLU;
	int16_t x491 = INT16_MAX;
	int16_t x492 = -59;
	uint64_t t91 = 60320LLU;

	t91 = (((x489*x490)|x491)^x492);

	if (t91 != 18446744073709518906LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x493 = INT8_MAX;
	uint16_t x494 = UINT16_MAX;
	static volatile uint32_t x496 = UINT32_MAX;

	t92 = (((x493*x494)|x495)^x496);

	if (t92 != 11786059856LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x497 = UINT64_MAX;
	int64_t x498 = -1LL;
	static volatile int16_t x500 = INT16_MIN;
	static volatile uint64_t t93 = 110979899LLU;

	t93 = (((x497*x498)|x499)^x500);

	if (t93 != 18446744073709411305LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x505 = INT8_MAX;
	uint32_t x506 = 11U;
	volatile uint8_t x507 = UINT8_MAX;
	volatile int64_t t94 = 1175LL;

	t94 = (((x505*x506)|x507)^x508);

	if (t94 != -9223372036854774273LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x514 = UINT64_MAX;
	static int64_t x515 = 237953760148LL;
	int8_t x516 = 6;
	uint64_t t95 = 31489555LLU;

	t95 = (((x513*x514)|x515)^x516);

	if (t95 != 237953760146LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x517 = INT16_MIN;
	int8_t x518 = INT8_MIN;
	int32_t x519 = -6595;
	int8_t x520 = 10;
	volatile int32_t t96 = 113910018;

	t96 = (((x517*x518)|x519)^x520);

	if (t96 != -6601) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x521 = INT16_MAX;
	int16_t x522 = INT16_MIN;
	static uint64_t x523 = 4447015335LLU;
	uint32_t x524 = UINT32_MAX;
	volatile uint64_t t97 = 1148LLU;

	t97 = (((x521*x522)|x523)^x524);

	if (t97 != 18446744070336245336LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x526 = 997U;
	static int8_t x527 = -1;
	int8_t x528 = INT8_MIN;
	int32_t t98 = -9367;

	t98 = (((x525*x526)|x527)^x528);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x537 = -671115LL;
	uint8_t x538 = 0U;
	static volatile int16_t x539 = -32;
	int64_t x540 = INT64_MIN;
	volatile int64_t t99 = 0LL;

	t99 = (((x537*x538)|x539)^x540);

	if (t99 != 9223372036854775776LL) { NG(); } else { ; }
	
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

