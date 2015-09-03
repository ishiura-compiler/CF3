#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = 5485;
volatile int16_t x23 = INT16_MIN;
int64_t x28 = -1LL;
volatile uint16_t x50 = 21U;
int16_t x51 = -1;
volatile int8_t x53 = -1;
static volatile int16_t x55 = 1;
volatile int64_t t7 = 10355915431019069LL;
volatile uint16_t x64 = 2995U;
volatile int32_t t9 = -7;
int8_t x69 = 1;
int8_t x83 = -1;
static uint64_t x88 = UINT64_MAX;
volatile uint64_t t12 = 3878108478LLU;
volatile int8_t x93 = INT8_MIN;
uint64_t x94 = UINT64_MAX;
static int32_t t14 = 2761549;
int16_t x105 = -1;
volatile uint32_t x109 = UINT32_MAX;
uint32_t x112 = UINT32_MAX;
volatile int32_t x113 = INT32_MAX;
int32_t t20 = 6341133;
uint64_t x126 = 4563620LLU;
uint64_t x138 = UINT64_MAX;
static int32_t t23 = -1;
int32_t t24 = -19994889;
int64_t x155 = INT64_MAX;
static int64_t t26 = -2801492077LL;
int16_t x160 = INT16_MIN;
uint16_t x169 = 897U;
int16_t x185 = -6;
uint16_t x186 = UINT16_MAX;
int64_t x187 = 28323307554LL;
int32_t t33 = -622312;
uint32_t x200 = 7U;
int32_t x211 = INT32_MIN;
volatile uint64_t t36 = 151103512946867LLU;
static uint64_t t37 = 19456978852450LLU;
uint64_t x221 = 2784299258988LLU;
volatile int64_t t38 = -9LL;
volatile int8_t x230 = INT8_MIN;
uint64_t x236 = 3634LLU;
static int64_t x245 = -240450964LL;
static int32_t t41 = 1;
static int8_t x257 = INT8_MAX;
static int8_t x270 = -47;
static volatile int32_t t47 = 150;
uint64_t x287 = 2LLU;
int32_t x291 = -1;
int32_t x293 = 30179138;
static uint8_t x299 = 3U;
int8_t x300 = 54;
int32_t t51 = 3641513;
int16_t x310 = INT16_MAX;
static volatile int64_t x311 = 29120LL;
int16_t x316 = -1;
volatile int32_t t55 = -1754;
int8_t x325 = INT8_MIN;
int16_t x330 = INT16_MAX;
volatile int8_t x331 = INT8_MIN;
uint32_t x346 = 525732041U;
int16_t x357 = INT16_MIN;
int8_t x358 = 14;
int64_t t61 = 7250340809464215LL;
int32_t t62 = 29;
int16_t x377 = 9438;
int32_t x379 = -1;
static int16_t x380 = -1;
static int32_t t64 = -13637;
int32_t x391 = INT32_MIN;
volatile uint16_t x394 = UINT16_MAX;
int16_t x396 = 4;
int32_t x398 = -652358;
int8_t x400 = INT8_MIN;
int32_t t69 = -1;
int32_t x405 = -16700007;
int64_t t70 = -613744547LL;
int16_t x412 = -1;
int16_t x418 = INT16_MAX;
uint8_t x421 = 56U;
uint16_t x425 = 3706U;
int32_t t75 = 4436;
volatile int8_t x433 = INT8_MIN;
uint32_t x446 = UINT32_MAX;
volatile int8_t x448 = INT8_MAX;
static int32_t x459 = INT32_MAX;
uint8_t x466 = 4U;
volatile int32_t x467 = -32872845;
uint16_t x477 = 76U;
volatile int16_t x478 = INT16_MAX;
static uint16_t x501 = 16U;
int8_t x504 = -5;
volatile int32_t t85 = 384464540;
static int64_t t86 = 600811655296LL;
static int32_t t90 = 6;
int64_t x533 = 334195195735LL;
static volatile uint8_t x540 = 10U;
int16_t x545 = -8064;
volatile int32_t x548 = -1071862042;
static int64_t x551 = INT64_MIN;
int32_t x552 = 1713;
int32_t x556 = -1;
volatile int32_t t97 = 585;
int64_t x570 = 27119468284LL;
uint8_t x572 = UINT8_MAX;
int32_t t98 = 437524;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint32_t x2 = 0U;
	static int64_t x3 = -1LL;
	volatile int8_t x4 = 7;
	volatile int32_t t0 = -1;

	t0 = (((x1*x2)==x3)-x4);

	if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 15U;
	uint64_t x6 = 164125898LLU;
	static uint16_t x7 = 1470U;
	int8_t x8 = INT8_MAX;

	t1 = (((x5*x6)==x7)-x8);

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x17 = 2;
	int64_t x18 = 1109115246488225LL;
	int32_t x19 = -1;
	uint64_t x20 = 8142532863063714887LLU;
	volatile uint64_t t2 = 989827345516542823LLU;

	t2 = (((x17*x18)==x19)-x20);

	if (t2 != 10304211210645836729LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 12431489736385LLU;
	int16_t x22 = INT16_MAX;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t3 = -59;

	t3 = (((x21*x22)==x23)-x24);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = 3616733U;
	static uint64_t x26 = 468268514251862LLU;
	static int8_t x27 = -58;
	int64_t t4 = 442LL;

	t4 = (((x25*x26)==x27)-x28);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x45 = 3910U;
	int16_t x46 = -1;
	int16_t x47 = 6057;
	int32_t x48 = 1713;
	int32_t t5 = 22762421;

	t5 = (((x45*x46)==x47)-x48);

	if (t5 != -1713) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x49 = 44297;
	int8_t x52 = 0;
	volatile int32_t t6 = -129238787;

	t6 = (((x49*x50)==x51)-x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x54 = -2LL;
	int64_t x56 = -645003LL;

	t7 = (((x53*x54)==x55)-x56);

	if (t7 != 645003LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	uint64_t x60 = 72400LLU;
	volatile uint64_t t8 = 4987501466781LLU;

	t8 = (((x57*x58)==x59)-x60);

	if (t8 != 18446744073709479216LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = -1;
	uint32_t x62 = 0U;
	int8_t x63 = -60;

	t9 = (((x61*x62)==x63)-x64);

	if (t9 != -2995) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x70 = INT16_MIN;
	uint32_t x71 = 879430U;
	int16_t x72 = -7785;
	int32_t t10 = 37048;

	t10 = (((x69*x70)==x71)-x72);

	if (t10 != 7785) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = INT16_MAX;
	static int8_t x82 = 1;
	int16_t x84 = INT16_MIN;
	int32_t t11 = -423;

	t11 = (((x81*x82)==x83)-x84);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x85 = 22U;
	uint16_t x86 = 1U;
	volatile int32_t x87 = 34676996;

	t12 = (((x85*x86)==x87)-x88);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x89 = -27;
	int16_t x90 = INT16_MIN;
	int8_t x91 = 17;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t13 = -15177;

	t13 = (((x89*x90)==x91)-x92);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x95 = -2600;
	int32_t x96 = -1;

	t14 = (((x93*x94)==x95)-x96);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = -40;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	int16_t x100 = INT16_MIN;
	volatile int32_t t15 = -1;

	t15 = (((x97*x98)==x99)-x100);

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x101 = 48;
	volatile uint16_t x102 = UINT16_MAX;
	int32_t x103 = -31811;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t16 = 281333084LLU;

	t16 = (((x101*x102)==x103)-x104);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x106 = 26;
	uint32_t x107 = 352135U;
	int32_t x108 = -20;
	int32_t t17 = 30850;

	t17 = (((x105*x106)==x107)-x108);

	if (t17 != 20) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x110 = INT16_MIN;
	uint16_t x111 = 49U;
	static uint32_t t18 = 16U;

	t18 = (((x109*x110)==x111)-x112);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x114 = 4893U;
	static int32_t x115 = INT32_MIN;
	uint8_t x116 = 29U;
	int32_t t19 = -12;

	t19 = (((x113*x114)==x115)-x116);

	if (t19 != -29) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x117 = 61U;
	int32_t x118 = 901;
	int8_t x119 = INT8_MIN;
	int8_t x120 = -1;

	t20 = (((x117*x118)==x119)-x120);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = -53;
	uint32_t x122 = 60508U;
	static volatile int32_t x123 = 51579;
	static volatile int64_t x124 = INT64_MAX;
	int64_t t21 = -96LL;

	t21 = (((x121*x122)==x123)-x124);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = UINT32_MAX;
	volatile int64_t x127 = INT64_MAX;
	int32_t x128 = 26;
	static int32_t t22 = -71007648;

	t22 = (((x125*x126)==x127)-x128);

	if (t22 != -26) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x137 = 1;
	int16_t x139 = INT16_MIN;
	static int8_t x140 = INT8_MIN;

	t23 = (((x137*x138)==x139)-x140);

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x145 = UINT8_MAX;
	static uint16_t x146 = UINT16_MAX;
	int64_t x147 = -1LL;
	uint16_t x148 = 3745U;

	t24 = (((x145*x146)==x147)-x148);

	if (t24 != -3745) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = 534998;
	int64_t x150 = 767LL;
	int32_t x151 = INT32_MAX;
	int8_t x152 = INT8_MIN;
	int32_t t25 = -98248;

	t25 = (((x149*x150)==x151)-x152);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x153 = INT8_MIN;
	volatile int8_t x154 = -1;
	static int64_t x156 = INT64_MAX;

	t26 = (((x153*x154)==x155)-x156);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x157 = -1LL;
	static volatile int16_t x158 = INT16_MAX;
	int8_t x159 = INT8_MIN;
	static int32_t t27 = 36460;

	t27 = (((x157*x158)==x159)-x160);

	if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x170 = 87044293U;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = INT16_MAX;
	volatile int32_t t28 = 1978727;

	t28 = (((x169*x170)==x171)-x172);

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x173 = 1191964U;
	volatile int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	int64_t x176 = 116032845388179LL;
	volatile int64_t t29 = 14131LL;

	t29 = (((x173*x174)==x175)-x176);

	if (t29 != -116032845388179LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x177 = 28147009762243520LLU;
	volatile int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MIN;
	static uint64_t x180 = 253LLU;
	volatile uint64_t t30 = 1572032111710428133LLU;

	t30 = (((x177*x178)==x179)-x180);

	if (t30 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x181 = INT8_MIN;
	static volatile uint64_t x182 = UINT64_MAX;
	int32_t x183 = 681910;
	int64_t x184 = -1LL;
	volatile int64_t t31 = 4010927014041176LL;

	t31 = (((x181*x182)==x183)-x184);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x188 = -1;
	volatile int32_t t32 = 4;

	t32 = (((x185*x186)==x187)-x188);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x193 = 9898503078767LLU;
	int16_t x194 = 511;
	static int8_t x195 = 1;
	int8_t x196 = -1;

	t33 = (((x193*x194)==x195)-x196);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x197 = -2LL;
	uint8_t x198 = 27U;
	static uint32_t x199 = 0U;
	static uint32_t t34 = 3962790U;

	t34 = (((x197*x198)==x199)-x200);

	if (t34 != 4294967289U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x205 = UINT32_MAX;
	int16_t x206 = INT16_MAX;
	volatile int64_t x207 = INT64_MAX;
	static volatile uint64_t x208 = UINT64_MAX;
	volatile uint64_t t35 = 489902LLU;

	t35 = (((x205*x206)==x207)-x208);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x209 = 123U;
	static volatile int64_t x210 = -1LL;
	static uint64_t x212 = 548LLU;

	t36 = (((x209*x210)==x211)-x212);

	if (t36 != 18446744073709551068LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x213 = 2U;
	uint16_t x214 = 3U;
	int32_t x215 = -1;
	uint64_t x216 = UINT64_MAX;

	t37 = (((x213*x214)==x215)-x216);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x222 = -1;
	volatile uint8_t x223 = 124U;
	int64_t x224 = -1LL;

	t38 = (((x221*x222)==x223)-x224);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x231 = 91U;
	int16_t x232 = 8022;
	int32_t t39 = 390;

	t39 = (((x229*x230)==x231)-x232);

	if (t39 != -8022) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x233 = 8075U;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	volatile uint64_t t40 = 6447089LLU;

	t40 = (((x233*x234)==x235)-x236);

	if (t40 != 18446744073709547982LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x246 = INT8_MIN;
	volatile int16_t x247 = -72;
	volatile int16_t x248 = 375;

	t41 = (((x245*x246)==x247)-x248);

	if (t41 != -375) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x258 = 5328U;
	volatile int16_t x259 = -1;
	int8_t x260 = -1;
	int32_t t42 = -369;

	t42 = (((x257*x258)==x259)-x260);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x261 = INT8_MAX;
	int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MIN;
	uint8_t x264 = 13U;
	volatile int32_t t43 = 863;

	t43 = (((x261*x262)==x263)-x264);

	if (t43 != -13) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x265 = 1;
	int8_t x266 = 35;
	int8_t x267 = INT8_MAX;
	static uint32_t x268 = UINT32_MAX;
	uint32_t t44 = 84608U;

	t44 = (((x265*x266)==x267)-x268);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x269 = 46U;
	int32_t x271 = INT32_MAX;
	static volatile int8_t x272 = -6;
	int32_t t45 = -481;

	t45 = (((x269*x270)==x271)-x272);

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x273 = -2269501;
	static int8_t x274 = 0;
	int8_t x275 = 7;
	uint32_t x276 = 3U;
	static uint32_t t46 = 28211U;

	t46 = (((x273*x274)==x275)-x276);

	if (t46 != 4294967293U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MAX;
	uint32_t x283 = UINT32_MAX;
	static int16_t x284 = 93;

	t47 = (((x281*x282)==x283)-x284);

	if (t47 != -93) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x285 = UINT8_MAX;
	static int16_t x286 = INT16_MAX;
	uint64_t x288 = 101646487LLU;
	uint64_t t48 = 139139412667472LLU;

	t48 = (((x285*x286)==x287)-x288);

	if (t48 != 18446744073607905129LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x289 = -1;
	uint64_t x290 = 6329445527LLU;
	uint16_t x292 = 2340U;
	int32_t t49 = -3238;

	t49 = (((x289*x290)==x291)-x292);

	if (t49 != -2340) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x294 = -1LL;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = 1293831U;
	uint32_t t50 = 30223U;

	t50 = (((x293*x294)==x295)-x296);

	if (t50 != 4293673465U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x297 = 6;
	uint64_t x298 = 414LLU;

	t51 = (((x297*x298)==x299)-x300);

	if (t51 != -54) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x301 = 8025754U;
	uint16_t x302 = 2U;
	static volatile uint8_t x303 = UINT8_MAX;
	volatile uint8_t x304 = UINT8_MAX;
	volatile int32_t t52 = -13;

	t52 = (((x301*x302)==x303)-x304);

	if (t52 != -255) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x305 = -927;
	int64_t x306 = 52301020032173LL;
	static int32_t x307 = 211;
	volatile int32_t x308 = INT32_MAX;
	static volatile int32_t t53 = -214;

	t53 = (((x305*x306)==x307)-x308);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x309 = INT8_MAX;
	int16_t x312 = -15206;
	int32_t t54 = 1639550;

	t54 = (((x309*x310)==x311)-x312);

	if (t54 != 15206) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = 1701U;
	int16_t x314 = INT16_MIN;
	int32_t x315 = 205273170;

	t55 = (((x313*x314)==x315)-x316);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = -9058030388103LL;
	static int16_t x323 = INT16_MIN;
	int8_t x324 = -1;
	int32_t t56 = 43135;

	t56 = (((x321*x322)==x323)-x324);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x326 = INT16_MAX;
	uint64_t x327 = UINT64_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t57 = -201;

	t57 = (((x325*x326)==x327)-x328);

	if (t57 != -65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x329 = 280133325U;
	int8_t x332 = -1;
	volatile int32_t t58 = 156364142;

	t58 = (((x329*x330)==x331)-x332);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x345 = UINT32_MAX;
	int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	static int32_t t59 = 0;

	t59 = (((x345*x346)==x347)-x348);

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x349 = 8U;
	int64_t x350 = -1LL;
	static uint32_t x351 = 29U;
	int8_t x352 = INT8_MAX;
	int32_t t60 = -594326;

	t60 = (((x349*x350)==x351)-x352);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x359 = INT16_MIN;
	int64_t x360 = 0LL;

	t61 = (((x357*x358)==x359)-x360);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x361 = -1;
	static volatile int16_t x362 = -2737;
	static int64_t x363 = INT64_MIN;
	int8_t x364 = INT8_MIN;

	t62 = (((x361*x362)==x363)-x364);

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x373 = -40LL;
	volatile uint8_t x374 = UINT8_MAX;
	int32_t x375 = INT32_MAX;
	static int32_t x376 = -1;
	static int32_t t63 = -62746;

	t63 = (((x373*x374)==x375)-x376);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x378 = 14;

	t64 = (((x377*x378)==x379)-x380);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = 233054488U;
	int64_t x387 = INT64_MAX;
	uint16_t x388 = UINT16_MAX;
	static volatile int32_t t65 = 4;

	t65 = (((x385*x386)==x387)-x388);

	if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int16_t x390 = INT16_MAX;
	int64_t x392 = 603464201208293LL;
	int64_t t66 = -149451392006758145LL;

	t66 = (((x389*x390)==x391)-x392);

	if (t66 != -603464201208293LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x393 = -1;
	uint64_t x395 = 429LLU;
	int32_t t67 = -306120942;

	t67 = (((x393*x394)==x395)-x396);

	if (t67 != -4) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x397 = -436;
	static uint64_t x399 = 110560799595LLU;
	int32_t t68 = 355972115;

	t68 = (((x397*x398)==x399)-x400);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x401 = UINT64_MAX;
	int64_t x402 = -20459015277203LL;
	int64_t x403 = -3LL;
	int16_t x404 = -11946;

	t69 = (((x401*x402)==x403)-x404);

	if (t69 != 11946) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x406 = -1LL;
	volatile int16_t x407 = INT16_MIN;
	int64_t x408 = INT64_MAX;

	t70 = (((x405*x406)==x407)-x408);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x409 = UINT8_MAX;
	uint64_t x410 = 279465LLU;
	static int32_t x411 = 1;
	static volatile int32_t t71 = 25;

	t71 = (((x409*x410)==x411)-x412);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x417 = UINT32_MAX;
	static int32_t x419 = INT32_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t72 = 0;

	t72 = (((x417*x418)==x419)-x420);

	if (t72 != -65535) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x422 = 538;
	int64_t x423 = -13LL;
	int32_t x424 = -1267493;
	volatile int32_t t73 = -959;

	t73 = (((x421*x422)==x423)-x424);

	if (t73 != 1267493) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x426 = UINT16_MAX;
	int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t74 = 15165312;

	t74 = (((x425*x426)==x427)-x428);

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x429 = -9207;
	static int8_t x430 = INT8_MIN;
	uint64_t x431 = 228LLU;
	volatile int8_t x432 = -24;

	t75 = (((x429*x430)==x431)-x432);

	if (t75 != 24) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x434 = INT8_MIN;
	int16_t x435 = -1;
	int16_t x436 = INT16_MIN;
	int32_t t76 = 12027110;

	t76 = (((x433*x434)==x435)-x436);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x437 = INT16_MAX;
	int8_t x438 = INT8_MIN;
	uint64_t x439 = 2263847260475LLU;
	volatile int8_t x440 = INT8_MAX;
	int32_t t77 = -1;

	t77 = (((x437*x438)==x439)-x440);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x445 = 171177U;
	static uint16_t x447 = UINT16_MAX;
	int32_t t78 = -62;

	t78 = (((x445*x446)==x447)-x448);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x457 = 62LLU;
	static int64_t x458 = -89611096544128166LL;
	int16_t x460 = INT16_MAX;
	static int32_t t79 = -37432875;

	t79 = (((x457*x458)==x459)-x460);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x465 = 432372U;
	static int32_t x468 = 30659103;
	static int32_t t80 = -206217;

	t80 = (((x465*x466)==x467)-x468);

	if (t80 != -30659103) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x479 = INT16_MAX;
	static volatile uint16_t x480 = UINT16_MAX;
	volatile int32_t t81 = 1;

	t81 = (((x477*x478)==x479)-x480);

	if (t81 != -65535) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x481 = INT8_MIN;
	uint16_t x482 = 21857U;
	static uint32_t x483 = 14U;
	int8_t x484 = -13;
	int32_t t82 = -272;

	t82 = (((x481*x482)==x483)-x484);

	if (t82 != 13) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x485 = -33;
	uint16_t x486 = UINT16_MAX;
	volatile int32_t x487 = 2583109;
	uint16_t x488 = 383U;
	int32_t t83 = -9981;

	t83 = (((x485*x486)==x487)-x488);

	if (t83 != -383) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x493 = 4818;
	int32_t x494 = 0;
	uint16_t x495 = 1U;
	volatile int16_t x496 = INT16_MAX;
	int32_t t84 = 0;

	t84 = (((x493*x494)==x495)-x496);

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x502 = INT8_MAX;
	volatile uint64_t x503 = 1503399152644118LLU;

	t85 = (((x501*x502)==x503)-x504);

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x509 = INT16_MIN;
	int8_t x510 = INT8_MAX;
	int32_t x511 = INT32_MIN;
	static int64_t x512 = -23LL;

	t86 = (((x509*x510)==x511)-x512);

	if (t86 != 23LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x513 = 27U;
	int16_t x514 = INT16_MIN;
	static int16_t x515 = 248;
	uint32_t x516 = 3524U;
	uint32_t t87 = 1311263U;

	t87 = (((x513*x514)==x515)-x516);

	if (t87 != 4294963772U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x517 = UINT8_MAX;
	int8_t x518 = 0;
	static int8_t x519 = -1;
	static int16_t x520 = 114;
	static int32_t t88 = 3;

	t88 = (((x517*x518)==x519)-x520);

	if (t88 != -114) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x521 = INT8_MAX;
	uint64_t x522 = UINT64_MAX;
	int8_t x523 = -1;
	static int8_t x524 = -1;
	volatile int32_t t89 = 10875918;

	t89 = (((x521*x522)==x523)-x524);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x525 = INT8_MIN;
	uint64_t x526 = UINT64_MAX;
	volatile uint32_t x527 = 208U;
	int16_t x528 = -1;

	t90 = (((x525*x526)==x527)-x528);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x529 = UINT64_MAX;
	int16_t x530 = INT16_MAX;
	volatile int16_t x531 = -1;
	int8_t x532 = INT8_MIN;
	int32_t t91 = -926251687;

	t91 = (((x529*x530)==x531)-x532);

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x534 = 253678U;
	volatile int8_t x535 = INT8_MIN;
	volatile int8_t x536 = 0;
	volatile int32_t t92 = -1071;

	t92 = (((x533*x534)==x535)-x536);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x537 = UINT32_MAX;
	volatile uint16_t x538 = 9U;
	uint16_t x539 = 3U;
	int32_t t93 = -636570207;

	t93 = (((x537*x538)==x539)-x540);

	if (t93 != -10) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x546 = -1;
	static uint32_t x547 = 0U;
	int32_t t94 = 375197615;

	t94 = (((x545*x546)==x547)-x548);

	if (t94 != 1071862042) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x549 = 1U;
	volatile uint32_t x550 = 43780U;
	volatile int32_t t95 = 947;

	t95 = (((x549*x550)==x551)-x552);

	if (t95 != -1713) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x553 = INT64_MIN;
	int16_t x554 = 0;
	static int64_t x555 = 1936845LL;
	int32_t t96 = -1;

	t96 = (((x553*x554)==x555)-x556);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x565 = -3115;
	static uint8_t x566 = 17U;
	volatile int16_t x567 = -1;
	volatile uint8_t x568 = UINT8_MAX;

	t97 = (((x565*x566)==x567)-x568);

	if (t97 != -255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x569 = 3U;
	int8_t x571 = INT8_MIN;

	t98 = (((x569*x570)==x571)-x572);

	if (t98 != -255) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x577 = 25U;
	int16_t x578 = INT16_MAX;
	int8_t x579 = INT8_MAX;
	int8_t x580 = -1;
	volatile int32_t t99 = 208;

	t99 = (((x577*x578)==x579)-x580);

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

