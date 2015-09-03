#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x6 = 15374U;
static int64_t x7 = 88286109916518LL;
static int64_t x15 = 1LL;
int8_t x17 = INT8_MAX;
uint16_t x22 = 37U;
uint32_t x41 = 1U;
uint8_t x45 = UINT8_MAX;
static volatile int32_t x47 = 1;
int64_t x50 = -1LL;
int8_t x62 = INT8_MIN;
int32_t t13 = -1027671;
volatile int8_t x71 = INT8_MAX;
volatile int32_t x74 = 5175536;
uint16_t x75 = 4U;
uint16_t x76 = 148U;
static volatile uint32_t t16 = 1877710U;
int16_t x82 = INT16_MIN;
int8_t x83 = -1;
uint16_t x96 = 16095U;
volatile uint64_t x98 = UINT64_MAX;
int64_t x100 = -1LL;
static uint8_t x107 = 1U;
volatile uint64_t x116 = 2752LLU;
uint64_t x124 = 91639626252531713LLU;
static volatile int32_t x126 = INT32_MIN;
volatile int64_t t27 = 171564213LL;
volatile uint32_t x130 = 87U;
volatile int16_t x131 = -22;
uint64_t x132 = 396327106150390041LLU;
volatile uint64_t t28 = 32241808285LLU;
int8_t x135 = -2;
int32_t x145 = INT32_MIN;
int16_t x146 = INT16_MIN;
volatile int32_t x148 = INT32_MIN;
static volatile int8_t x156 = INT8_MAX;
volatile int32_t x158 = 139;
static volatile uint16_t x166 = UINT16_MAX;
uint16_t x167 = 2705U;
int32_t t36 = -47004;
volatile uint64_t x169 = UINT64_MAX;
int16_t x172 = INT16_MIN;
static volatile uint8_t x180 = 117U;
int64_t x190 = INT64_MAX;
int8_t x193 = INT8_MAX;
int16_t x196 = -1106;
int64_t x204 = INT64_MIN;
uint32_t t46 = 163754281U;
uint8_t x212 = 51U;
int32_t x214 = -256005;
int16_t x228 = INT16_MAX;
int8_t x237 = -59;
int64_t x238 = 107285043799468241LL;
uint64_t x240 = 232740360LLU;
static int32_t x245 = -160;
int64_t x248 = 12302801469835914LL;
static volatile int64_t t55 = 15433137256LL;
volatile int8_t x252 = INT8_MIN;
int64_t x254 = -473906628LL;
uint8_t x255 = 118U;
int64_t x262 = -1LL;
int8_t x263 = INT8_MIN;
static uint8_t x264 = UINT8_MAX;
static volatile int64_t x270 = -34646912095LL;
volatile uint64_t t60 = 1049286638304LLU;
int8_t x276 = INT8_MIN;
volatile uint8_t x280 = 4U;
static volatile int32_t t62 = -7373;
uint8_t x281 = UINT8_MAX;
int8_t x298 = 0;
static volatile int64_t x300 = INT64_MIN;
volatile uint64_t x310 = UINT64_MAX;
volatile int8_t x315 = INT8_MIN;
volatile int32_t x316 = INT32_MIN;
int32_t t72 = 177848827;
static volatile int8_t x327 = -1;
volatile int64_t t73 = -141954292142170634LL;
uint8_t x334 = 39U;
int8_t x348 = INT8_MIN;
int32_t x349 = -393249558;
uint64_t x353 = UINT64_MAX;
static int32_t x354 = 272003;
uint32_t x355 = 3619U;
int32_t x361 = INT32_MIN;
volatile int32_t t81 = -451;
volatile int16_t x365 = -2;
uint32_t x377 = 21U;
static uint16_t x378 = 19980U;
int8_t x385 = 54;
volatile int32_t t86 = 944418;
uint16_t x389 = UINT16_MAX;
volatile int32_t t88 = 259250156;
uint64_t x399 = 1806014390286713114LLU;
int16_t x401 = -38;
volatile int16_t x404 = INT16_MAX;
static volatile uint8_t x414 = 1U;
static uint32_t x418 = 28195606U;
uint8_t x421 = UINT8_MAX;
static uint32_t x430 = UINT32_MAX;
static int8_t x436 = INT8_MIN;
volatile int32_t t98 = 2;
uint64_t x437 = UINT64_MAX;
int16_t x438 = -1;
int32_t t99 = -14960377;


void f0(void) {
	int16_t x5 = -165;
	int16_t x8 = INT16_MIN;
	static int32_t t0 = 1;

	t0 = (((x5-x6)==x7)&x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = 52U;
	uint8_t x10 = 103U;
	static volatile int64_t x11 = 102812142LL;
	static int16_t x12 = INT16_MIN;
	static int32_t t1 = 53012274;

	t1 = (((x9-x10)==x11)&x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 7;
	uint16_t x14 = UINT16_MAX;
	uint32_t x16 = 20U;
	volatile uint32_t t2 = 3U;

	t2 = (((x13-x14)==x15)&x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = 14LLU;
	uint16_t x19 = 64U;
	volatile uint32_t x20 = 491643U;
	volatile uint32_t t3 = 2742U;

	t3 = (((x17-x18)==x19)&x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = 10052140758LL;
	uint64_t x23 = 99167234LLU;
	int16_t x24 = 0;
	int32_t t4 = 66554829;

	t4 = (((x21-x22)==x23)&x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x25 = 781U;
	uint64_t x26 = 21081047LLU;
	static uint8_t x27 = UINT8_MAX;
	int16_t x28 = 3069;
	int32_t t5 = 82;

	t5 = (((x25-x26)==x27)&x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 11199425LLU;
	int32_t x30 = INT32_MIN;
	int32_t x31 = 680;
	uint32_t x32 = 17942U;
	volatile uint32_t t6 = 976457067U;

	t6 = (((x29-x30)==x31)&x32);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MIN;
	volatile uint8_t x34 = 15U;
	int32_t x35 = INT32_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t7 = 963710541;

	t7 = (((x33-x34)==x35)&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x42 = INT8_MIN;
	int16_t x43 = -3069;
	volatile uint8_t x44 = 0U;
	volatile int32_t t8 = 30;

	t8 = (((x41-x42)==x43)&x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x46 = 474773855U;
	int32_t x48 = -1;
	volatile int32_t t9 = 254258;

	t9 = (((x45-x46)==x47)&x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 109996496LLU;
	uint16_t x51 = 392U;
	static int8_t x52 = -1;
	int32_t t10 = 2;

	t10 = (((x49-x50)==x51)&x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = -1LL;
	static uint8_t x54 = UINT8_MAX;
	volatile int32_t x55 = 2164145;
	int16_t x56 = -7927;
	volatile int32_t t11 = -196;

	t11 = (((x53-x54)==x55)&x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = INT64_MIN;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = 0U;
	static int32_t t12 = -368;

	t12 = (((x61-x62)==x63)&x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = 2080641604344LL;
	int16_t x66 = INT16_MIN;
	volatile int64_t x67 = INT64_MIN;
	uint8_t x68 = UINT8_MAX;

	t13 = (((x65-x66)==x67)&x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x69 = -1;
	uint16_t x70 = 2U;
	int32_t x72 = -442;
	volatile int32_t t14 = 1501;

	t14 = (((x69-x70)==x71)&x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x73 = 221LLU;
	volatile int32_t t15 = -3;

	t15 = (((x73-x74)==x75)&x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = 15U;
	volatile int16_t x78 = -36;
	uint64_t x79 = 136845158907487LLU;
	uint32_t x80 = UINT32_MAX;

	t16 = (((x77-x78)==x79)&x80);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t17 = 12700;

	t17 = (((x81-x82)==x83)&x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = -1076;
	int32_t x91 = -1;
	static int32_t x92 = INT32_MAX;
	static volatile int32_t t18 = -357599;

	t18 = (((x89-x90)==x91)&x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = 1;
	volatile int32_t x94 = -565228;
	int64_t x95 = INT64_MAX;
	volatile int32_t t19 = 221;

	t19 = (((x93-x94)==x95)&x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x97 = INT8_MIN;
	volatile uint8_t x99 = UINT8_MAX;
	volatile int64_t t20 = -90699526890220654LL;

	t20 = (((x97-x98)==x99)&x100);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -2586291159829294042LL;
	int64_t x102 = 3470116968472290885LL;
	int16_t x103 = -1;
	static int64_t x104 = 16459673LL;
	volatile int64_t t21 = 393483992012LL;

	t21 = (((x101-x102)==x103)&x104);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	int8_t x108 = INT8_MAX;
	static volatile int32_t t22 = 1;

	t22 = (((x105-x106)==x107)&x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MIN;
	volatile int16_t x110 = -6;
	int16_t x111 = -212;
	int32_t x112 = -1;
	int32_t t23 = -88601448;

	t23 = (((x109-x110)==x111)&x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x113 = 2U;
	static int32_t x114 = -1;
	static int64_t x115 = -1LL;
	static volatile uint64_t t24 = 21086217729412231LLU;

	t24 = (((x113-x114)==x115)&x116);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 67158U;
	int64_t x118 = -83839728LL;
	int16_t x119 = INT16_MIN;
	volatile uint8_t x120 = 7U;
	volatile int32_t t25 = 50984360;

	t25 = (((x117-x118)==x119)&x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x121 = 0LLU;
	int64_t x122 = INT64_MAX;
	int16_t x123 = -1;
	volatile uint64_t t26 = 129693090880408509LLU;

	t26 = (((x121-x122)==x123)&x124);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	int16_t x127 = -6;
	int64_t x128 = -243832739LL;

	t27 = (((x125-x126)==x127)&x128);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x129 = UINT64_MAX;

	t28 = (((x129-x130)==x131)&x132);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = -1;
	int16_t x134 = -1268;
	int64_t x136 = -1974672007814205LL;
	int64_t t29 = 519333767448441153LL;

	t29 = (((x133-x134)==x135)&x136);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -1;
	volatile int16_t x138 = INT16_MIN;
	int16_t x139 = 0;
	uint8_t x140 = 3U;
	int32_t t30 = 0;

	t30 = (((x137-x138)==x139)&x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	volatile uint8_t x142 = 3U;
	static uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t31 = -30959027;

	t31 = (((x141-x142)==x143)&x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x147 = 3133U;
	volatile int32_t t32 = -5;

	t32 = (((x145-x146)==x147)&x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = 8777259978962051LL;
	int64_t x150 = 71722445192LL;
	static int8_t x151 = INT8_MIN;
	uint16_t x152 = 0U;
	volatile int32_t t33 = 43505;

	t33 = (((x149-x150)==x151)&x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x153 = INT32_MAX;
	int16_t x154 = 7767;
	static int8_t x155 = 6;
	volatile int32_t t34 = -124533547;

	t34 = (((x153-x154)==x155)&x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MAX;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t35 = 14;

	t35 = (((x157-x158)==x159)&x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x165 = 1066847935U;
	int16_t x168 = INT16_MIN;

	t36 = (((x165-x166)==x167)&x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x170 = -1;
	uint32_t x171 = 26653347U;
	volatile int32_t t37 = 1073290231;

	t37 = (((x169-x170)==x171)&x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -4;
	static volatile uint16_t x174 = 1U;
	int16_t x175 = -7522;
	static int64_t x176 = 0LL;
	int64_t t38 = 6801257579LL;

	t38 = (((x173-x174)==x175)&x176);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x177 = -1;
	static int16_t x178 = -10;
	static int16_t x179 = INT16_MAX;
	volatile int32_t t39 = -18772;

	t39 = (((x177-x178)==x179)&x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = INT32_MAX;
	static volatile uint64_t x182 = 993109428LLU;
	uint8_t x183 = UINT8_MAX;
	uint16_t x184 = 115U;
	int32_t t40 = -10226557;

	t40 = (((x181-x182)==x183)&x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x185 = -1;
	int32_t x186 = INT32_MAX;
	uint16_t x187 = 811U;
	static volatile int8_t x188 = INT8_MAX;
	volatile int32_t t41 = 39;

	t41 = (((x185-x186)==x187)&x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = 1;
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t42 = -1993202;

	t42 = (((x189-x190)==x191)&x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = 7;
	volatile uint32_t x195 = 929960U;
	int32_t t43 = 1087076;

	t43 = (((x193-x194)==x195)&x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x197 = 127;
	uint64_t x198 = 905612533793LLU;
	static uint16_t x199 = 1U;
	static int64_t x200 = INT64_MAX;
	volatile int64_t t44 = 66087547619LL;

	t44 = (((x197-x198)==x199)&x200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x201 = UINT8_MAX;
	static int8_t x202 = -24;
	int32_t x203 = -21130133;
	volatile int64_t t45 = 21627LL;

	t45 = (((x201-x202)==x203)&x204);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1LL;
	volatile uint64_t x206 = 379211144479LLU;
	int8_t x207 = -1;
	uint32_t x208 = UINT32_MAX;

	t46 = (((x205-x206)==x207)&x208);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = -1LL;
	volatile uint32_t x210 = 1379U;
	volatile int64_t x211 = -104410272LL;
	volatile int32_t t47 = 2753;

	t47 = (((x209-x210)==x211)&x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x213 = INT16_MIN;
	volatile uint8_t x215 = UINT8_MAX;
	int64_t x216 = 2612726174736066866LL;
	volatile int64_t t48 = 3146416LL;

	t48 = (((x213-x214)==x215)&x216);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x221 = 576;
	uint32_t x222 = 0U;
	static volatile int16_t x223 = INT16_MAX;
	volatile int16_t x224 = 2;
	volatile int32_t t49 = 1829396;

	t49 = (((x221-x222)==x223)&x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x225 = UINT16_MAX;
	volatile int32_t x226 = -1;
	int64_t x227 = INT64_MIN;
	volatile int32_t t50 = -700257505;

	t50 = (((x225-x226)==x227)&x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x229 = 3045859LLU;
	uint32_t x230 = 7994093U;
	uint32_t x231 = 138731517U;
	static volatile int32_t x232 = -73804;
	static int32_t t51 = 2440;

	t51 = (((x229-x230)==x231)&x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MAX;
	uint32_t x235 = UINT32_MAX;
	uint32_t x236 = 1735620U;
	volatile uint32_t t52 = 3U;

	t52 = (((x233-x234)==x235)&x236);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x239 = INT16_MIN;
	volatile uint64_t t53 = 52LLU;

	t53 = (((x237-x238)==x239)&x240);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x241 = 24208125U;
	uint8_t x242 = 23U;
	volatile int8_t x243 = -9;
	int8_t x244 = -1;
	static volatile int32_t t54 = -412578;

	t54 = (((x241-x242)==x243)&x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x246 = 1U;
	int32_t x247 = -1;

	t55 = (((x245-x246)==x247)&x248);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x249 = 13;
	int16_t x250 = -1;
	volatile uint32_t x251 = UINT32_MAX;
	int32_t t56 = -20619;

	t56 = (((x249-x250)==x251)&x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x253 = -1;
	volatile uint64_t x256 = 254776335LLU;
	volatile uint64_t t57 = 1381714288LLU;

	t57 = (((x253-x254)==x255)&x256);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = -1;
	int8_t x258 = 2;
	int16_t x259 = INT16_MAX;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t58 = 110999LLU;

	t58 = (((x257-x258)==x259)&x260);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x261 = -1;
	int32_t t59 = 534;

	t59 = (((x261-x262)==x263)&x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = INT64_MIN;
	int16_t x271 = -1;
	uint64_t x272 = UINT64_MAX;

	t60 = (((x269-x270)==x271)&x272);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = 159U;
	int32_t x274 = -1;
	int32_t x275 = 27229039;
	static volatile int32_t t61 = 1;

	t61 = (((x273-x274)==x275)&x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = INT64_MAX;
	uint64_t x278 = 244252010LLU;
	volatile uint32_t x279 = 19868U;

	t62 = (((x277-x278)==x279)&x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x282 = 1U;
	volatile int64_t x283 = 50446196LL;
	int32_t x284 = -154721;
	static volatile int32_t t63 = 34532001;

	t63 = (((x281-x282)==x283)&x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = -7;
	static int16_t x286 = INT16_MAX;
	int64_t x287 = INT64_MIN;
	int64_t x288 = 448LL;
	volatile int64_t t64 = -4217387088651170LL;

	t64 = (((x285-x286)==x287)&x288);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = INT64_MIN;
	volatile int64_t x290 = INT64_MIN;
	int64_t x291 = 205716LL;
	int8_t x292 = -1;
	volatile int32_t t65 = 14336708;

	t65 = (((x289-x290)==x291)&x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 6U;
	static int32_t x299 = 161;
	int64_t t66 = 1626552956488LL;

	t66 = (((x297-x298)==x299)&x300);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = -2;
	volatile int8_t x302 = INT8_MAX;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	static int32_t t67 = 2;

	t67 = (((x301-x302)==x303)&x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 3U;
	uint8_t x306 = 0U;
	volatile int16_t x307 = INT16_MAX;
	static int64_t x308 = -1LL;
	static int64_t t68 = -1565949199651LL;

	t68 = (((x305-x306)==x307)&x308);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = -1;
	uint64_t x311 = 305634089LLU;
	int16_t x312 = -1;
	volatile int32_t t69 = 51;

	t69 = (((x309-x310)==x311)&x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	static volatile int32_t t70 = -529088805;

	t70 = (((x313-x314)==x315)&x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MAX;
	uint8_t x318 = UINT8_MAX;
	uint16_t x319 = 1U;
	static int32_t x320 = -1;
	int32_t t71 = -24361;

	t71 = (((x317-x318)==x319)&x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x321 = 9323414LLU;
	static uint64_t x322 = 211171571LLU;
	int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MAX;

	t72 = (((x321-x322)==x323)&x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x325 = -5627741314LL;
	int8_t x326 = INT8_MIN;
	int64_t x328 = INT64_MAX;

	t73 = (((x325-x326)==x327)&x328);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	volatile uint32_t x331 = 79U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t74 = -41435;

	t74 = (((x329-x330)==x331)&x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 9256813LLU;
	volatile uint64_t t75 = 24334469577LLU;

	t75 = (((x333-x334)==x335)&x336);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x337 = UINT8_MAX;
	static int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	uint8_t x340 = UINT8_MAX;
	static volatile int32_t t76 = -1060;

	t76 = (((x337-x338)==x339)&x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = INT64_MIN;
	volatile int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	volatile int32_t t77 = 0;

	t77 = (((x345-x346)==x347)&x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x350 = UINT16_MAX;
	volatile int32_t x351 = -244653;
	volatile uint16_t x352 = 2076U;
	int32_t t78 = -11661615;

	t78 = (((x349-x350)==x351)&x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x356 = 1926126040019LL;
	static int64_t t79 = 3036087LL;

	t79 = (((x353-x354)==x355)&x356);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x357 = 40U;
	volatile uint8_t x358 = 0U;
	int16_t x359 = INT16_MIN;
	int32_t x360 = -26;
	static int32_t t80 = -57;

	t80 = (((x357-x358)==x359)&x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x362 = -1LL;
	volatile int16_t x363 = -1;
	int16_t x364 = -1;

	t81 = (((x361-x362)==x363)&x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x366 = 0;
	volatile int32_t x367 = -633097173;
	volatile int8_t x368 = -6;
	int32_t t82 = -4214;

	t82 = (((x365-x366)==x367)&x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x373 = 971;
	volatile int32_t x374 = -727350;
	static uint8_t x375 = 9U;
	int32_t x376 = 128;
	int32_t t83 = -6;

	t83 = (((x373-x374)==x375)&x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x379 = -1LL;
	volatile uint16_t x380 = UINT16_MAX;
	static int32_t t84 = -618741;

	t84 = (((x377-x378)==x379)&x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x381 = 1U;
	volatile int8_t x382 = 0;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t85 = 118474;

	t85 = (((x381-x382)==x383)&x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MAX;
	int8_t x388 = -1;

	t86 = (((x385-x386)==x387)&x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x390 = -1;
	volatile int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t87 = 31LL;

	t87 = (((x389-x390)==x391)&x392);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 1228597186279034LLU;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MIN;
	static volatile int16_t x396 = INT16_MIN;

	t88 = (((x393-x394)==x395)&x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x397 = 0U;
	uint8_t x398 = 8U;
	volatile int64_t x400 = INT64_MAX;
	int64_t t89 = -296322718LL;

	t89 = (((x397-x398)==x399)&x400);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x402 = -1;
	uint64_t x403 = 57LLU;
	int32_t t90 = -818039;

	t90 = (((x401-x402)==x403)&x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x405 = UINT8_MAX;
	int64_t x406 = -913414719796333711LL;
	volatile int8_t x407 = 1;
	int8_t x408 = INT8_MIN;
	int32_t t91 = -33162;

	t91 = (((x405-x406)==x407)&x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x409 = -2;
	int8_t x410 = INT8_MIN;
	volatile uint32_t x411 = 1890799481U;
	int16_t x412 = 1049;
	static int32_t t92 = -869128413;

	t92 = (((x409-x410)==x411)&x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x413 = 283582294884327247LLU;
	uint8_t x415 = 3U;
	int32_t x416 = -681987740;
	volatile int32_t t93 = 206;

	t93 = (((x413-x414)==x415)&x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x417 = 1;
	static uint32_t x419 = UINT32_MAX;
	uint32_t x420 = UINT32_MAX;
	static volatile uint32_t t94 = 1224537368U;

	t94 = (((x417-x418)==x419)&x420);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x422 = -1;
	static int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MIN;
	int32_t t95 = 188099;

	t95 = (((x421-x422)==x423)&x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = -37;
	int16_t x426 = 452;
	uint8_t x427 = 34U;
	volatile uint16_t x428 = 14244U;
	volatile int32_t t96 = -1764;

	t96 = (((x425-x426)==x427)&x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x429 = INT8_MIN;
	volatile int8_t x431 = -1;
	int32_t x432 = -1;
	volatile int32_t t97 = -51550872;

	t97 = (((x429-x430)==x431)&x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = INT16_MAX;
	int32_t x434 = INT32_MAX;
	int8_t x435 = -1;

	t98 = (((x433-x434)==x435)&x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x439 = INT16_MIN;
	int16_t x440 = -1;

	t99 = (((x437-x438)==x439)&x440);

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

