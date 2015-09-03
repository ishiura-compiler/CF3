#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
int64_t x14 = -548805LL;
uint64_t t4 = 16133872611LLU;
int16_t x28 = -1943;
uint8_t x29 = 2U;
volatile uint64_t x30 = 198764113248LLU;
uint64_t x32 = UINT64_MAX;
int64_t t7 = 46372927LL;
volatile int32_t x39 = -1;
volatile int32_t t8 = -2;
static volatile int32_t t11 = 1;
uint32_t x53 = 3686U;
int16_t x55 = INT16_MAX;
int16_t x59 = INT16_MIN;
static int32_t x61 = -1;
int16_t x63 = -1;
uint64_t t15 = 6005LLU;
uint8_t x87 = UINT8_MAX;
static uint16_t x96 = UINT16_MAX;
uint8_t x112 = UINT8_MAX;
int32_t t22 = -763703150;
int16_t x117 = INT16_MIN;
volatile int64_t x124 = -1442LL;
volatile int64_t t24 = -2229941253849007050LL;
uint8_t x130 = 91U;
int32_t x149 = -1;
volatile int64_t t30 = 23801LL;
int8_t x155 = INT8_MIN;
uint32_t x159 = 187U;
int16_t x161 = -17;
int64_t t35 = -11721833840LL;
int32_t x175 = -25552;
volatile uint32_t t36 = 2612U;
uint8_t x181 = UINT8_MAX;
int16_t x215 = -1;
int32_t x233 = 8672;
static int32_t x241 = -1;
int8_t x246 = INT8_MIN;
volatile int64_t x248 = INT64_MAX;
int64_t t49 = -1998047678885138LL;
uint32_t x249 = 28U;
int64_t x254 = -1LL;
volatile int64_t t51 = -377LL;
volatile uint8_t x268 = UINT8_MAX;
int16_t x269 = INT16_MAX;
int16_t x270 = 2378;
static int16_t x271 = INT16_MIN;
static int32_t t54 = -2059;
uint64_t x274 = UINT64_MAX;
volatile int16_t x280 = 12;
int32_t x285 = INT32_MAX;
static int8_t x292 = INT8_MIN;
static int16_t x296 = INT16_MIN;
int64_t x300 = INT64_MAX;
volatile int8_t x307 = INT8_MIN;
volatile int32_t x308 = -356;
volatile uint32_t t63 = 3295863U;
static volatile int8_t x313 = -1;
static volatile int32_t t65 = 1;
uint16_t x325 = 750U;
int8_t x338 = 1;
int32_t x342 = -101;
uint16_t x345 = 7U;
static int32_t t70 = 7226;
volatile uint32_t t71 = 7U;
static int16_t x357 = INT16_MIN;
int64_t x359 = -1877421970164096236LL;
int8_t x363 = -6;
int32_t t73 = -953655;
volatile int16_t x366 = -1;
uint32_t t74 = 74429U;
volatile uint8_t x386 = 3U;
volatile int64_t t76 = -98865LL;
int16_t x397 = 3;
int64_t x401 = -1LL;
int64_t x402 = -1LL;
int32_t x412 = INT32_MAX;
volatile int64_t t83 = -4083027244191950792LL;
static uint32_t x427 = 115770U;
volatile int32_t x428 = INT32_MIN;
uint32_t x432 = 26244U;
volatile int64_t t86 = 27546987LL;
volatile uint64_t t87 = 5312110087LLU;
static uint16_t x474 = 3U;
volatile int64_t t90 = -1136883LL;
volatile uint16_t x477 = 1U;
int16_t x480 = INT16_MAX;
int64_t x489 = -1LL;
static int16_t x491 = -67;
static int16_t x498 = -1;
volatile uint64_t t95 = 2868977LLU;
int16_t x504 = 4449;
int8_t x505 = -48;
uint64_t x518 = 2231450LLU;
int8_t x520 = 6;
uint64_t t99 = 414136544LLU;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	uint64_t x2 = 9650557805214LLU;
	int32_t x4 = -1;
	volatile uint64_t t0 = 88436LLU;

	t0 = ((x1*x2)+(x3/x4));

	if (t0 != 1225620841262051LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint32_t x6 = 7842U;
	static int32_t x7 = INT32_MIN;
	int32_t x8 = INT32_MAX;
	volatile uint32_t t1 = 4144U;

	t1 = ((x5*x6)+(x7/x8));

	if (t1 != 4294959453U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 3866;
	uint16_t x15 = 7043U;
	volatile uint16_t x16 = UINT16_MAX;
	volatile int64_t t2 = -2270LL;

	t2 = ((x13*x14)+(x15/x16));

	if (t2 != -2121680130LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 10940817LLU;
	static int64_t x18 = -116586173LL;
	uint8_t x19 = 0U;
	int32_t x20 = 4736490;
	volatile uint64_t t3 = 354LLU;

	t3 = ((x17*x18)+(x19/x20));

	if (t3 != 18445468525726028275LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x21 = 541168LLU;
	static uint8_t x22 = UINT8_MAX;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 1791991857306LLU;

	t4 = ((x21*x22)+(x23/x24));

	if (t4 != 137997840LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = -1LL;
	volatile int16_t x27 = 0;
	static int64_t t5 = -412351433863LL;

	t5 = ((x25*x26)+(x27/x28));

	if (t5 != 2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x31 = INT64_MIN;
	uint64_t t6 = 1414108704650041LLU;

	t6 = ((x29*x30)+(x31/x32));

	if (t6 != 397528226496LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 1U;
	int32_t x34 = -63;
	static uint8_t x35 = 1U;
	int64_t x36 = -48648176424704LL;

	t7 = ((x33*x34)+(x35/x36));

	if (t7 != -63LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MIN;
	int8_t x38 = 60;
	static int8_t x40 = INT8_MIN;

	t8 = ((x37*x38)+(x39/x40));

	if (t8 != -1966080) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = 298073170LLU;
	static int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MIN;
	static uint32_t x44 = UINT32_MAX;
	volatile uint64_t t9 = 1LLU;

	t9 = ((x41*x42)+(x43/x44));

	if (t9 != 37855292590LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 0U;
	uint32_t x46 = 229799U;
	uint64_t x47 = UINT64_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile uint64_t t10 = 1602255LLU;

	t10 = ((x45*x46)+(x47/x48));

	if (t10 != 4294967297LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = 0;
	static int8_t x50 = -18;
	volatile int16_t x51 = -19;
	volatile uint8_t x52 = 20U;

	t11 = ((x49*x50)+(x51/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x54 = 283U;
	uint16_t x56 = UINT16_MAX;
	static volatile uint32_t t12 = 1U;

	t12 = ((x53*x54)+(x55/x56));

	if (t12 != 1043138U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 31723665LLU;
	int8_t x58 = -1;
	uint32_t x60 = UINT32_MAX;
	uint64_t t13 = 1604424440385096937LLU;

	t13 = ((x57*x58)+(x59/x60));

	if (t13 != 18446744073677827951LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x62 = UINT8_MAX;
	int8_t x64 = -1;
	static volatile int32_t t14 = -507060044;

	t14 = ((x61*x62)+(x63/x64));

	if (t14 != -254) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MIN;
	static int64_t x75 = -3815LL;
	uint64_t x76 = 22997324572601LLU;

	t15 = ((x73*x74)+(x75/x76));

	if (t15 != 18446744073701965261LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -1;
	uint32_t x82 = 343856057U;
	uint16_t x83 = 52U;
	int8_t x84 = INT8_MIN;
	uint32_t t16 = 217U;

	t16 = ((x81*x82)+(x83/x84));

	if (t16 != 3951111239U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 1998U;
	int32_t x88 = 101922603;
	uint32_t t17 = 203997425U;

	t17 = ((x85*x86)+(x87/x88));

	if (t17 != 4229496832U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x89 = 897;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = INT16_MIN;
	int64_t x92 = -1LL;
	uint64_t t18 = 124127465131795679LLU;

	t18 = ((x89*x90)+(x91/x92));

	if (t18 != 31871LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x93 = -6825;
	int8_t x94 = 21;
	int8_t x95 = -15;
	int32_t t19 = 379377;

	t19 = ((x93*x94)+(x95/x96));

	if (t19 != -143325) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 3152480LLU;
	int32_t x98 = -1;
	static uint16_t x99 = 0U;
	static uint32_t x100 = 6U;
	uint64_t t20 = 56834057661277893LLU;

	t20 = ((x97*x98)+(x99/x100));

	if (t20 != 18446744073706399136LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x101 = INT16_MIN;
	int8_t x102 = 1;
	uint32_t x103 = 13U;
	int32_t x104 = 21027875;
	volatile uint32_t t21 = 44924U;

	t21 = ((x101*x102)+(x103/x104));

	if (t21 != 4294934528U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 30;
	int8_t x110 = 0;
	int32_t x111 = 1249;

	t22 = ((x109*x110)+(x111/x112));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x118 = 27LLU;
	volatile uint32_t x119 = UINT32_MAX;
	int16_t x120 = INT16_MIN;
	static volatile uint64_t t23 = 6336180948779460LLU;

	t23 = ((x117*x118)+(x119/x120));

	if (t23 != 18446744073708666881LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = 20954U;
	uint8_t x123 = 51U;

	t24 = ((x121*x122)+(x123/x124));

	if (t24 != -686620672LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x125 = INT16_MAX;
	static int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MAX;
	volatile int64_t x128 = -1LL;
	volatile int64_t t25 = -36748LL;

	t25 = ((x125*x126)+(x127/x128));

	if (t25 != 1073643522LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = -548307936331677LL;
	int8_t x131 = -1;
	uint16_t x132 = 206U;
	volatile int64_t t26 = 142893748055865712LL;

	t26 = ((x129*x130)+(x131/x132));

	if (t26 != -49896022206182607LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = -2;
	static int16_t x134 = INT16_MIN;
	static int16_t x135 = -1204;
	int16_t x136 = INT16_MIN;
	int32_t t27 = 766871;

	t27 = ((x133*x134)+(x135/x136));

	if (t27 != 65536) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = -34132095473LL;
	int8_t x138 = 47;
	int64_t x139 = -3LL;
	uint64_t x140 = 15751LLU;
	volatile uint64_t t28 = 1130008622LLU;

	t28 = ((x137*x138)+(x139/x140));

	if (t28 != 1169543278891954LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 3U;
	volatile int64_t x142 = -1LL;
	int8_t x143 = -1;
	uint16_t x144 = UINT16_MAX;
	static int64_t t29 = -82279741LL;

	t29 = ((x141*x142)+(x143/x144));

	if (t29 != -3LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x150 = -1LL;
	uint8_t x151 = UINT8_MAX;
	static volatile int64_t x152 = INT64_MIN;

	t30 = ((x149*x150)+(x151/x152));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = 452;
	static int16_t x154 = INT16_MIN;
	uint16_t x156 = 3U;
	int32_t t31 = -93646;

	t31 = ((x153*x154)+(x155/x156));

	if (t31 != -14811178) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x157 = 22U;
	int8_t x158 = INT8_MIN;
	int32_t x160 = -1;
	uint32_t t32 = 1371669U;

	t32 = ((x157*x158)+(x159/x160));

	if (t32 != 4294964480U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x162 = -4;
	volatile uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MAX;
	volatile int32_t t33 = -66;

	t33 = ((x161*x162)+(x163/x164));

	if (t33 != 68) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = INT8_MIN;
	uint32_t x166 = 75U;
	uint64_t x167 = 2LLU;
	int16_t x168 = INT16_MIN;
	uint64_t t34 = 707LLU;

	t34 = ((x165*x166)+(x167/x168));

	if (t34 != 4294957696LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = -1;
	volatile int64_t x170 = -1LL;
	volatile int16_t x171 = 2;
	uint16_t x172 = UINT16_MAX;

	t35 = ((x169*x170)+(x171/x172));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = 6805U;
	static int16_t x174 = -60;
	int8_t x176 = INT8_MIN;

	t36 = ((x173*x174)+(x175/x176));

	if (t36 != 4294559195U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x177 = 56U;
	uint32_t x178 = UINT32_MAX;
	int64_t x179 = INT64_MIN;
	int16_t x180 = INT16_MIN;
	static int64_t t37 = -66535410LL;

	t37 = ((x177*x178)+(x179/x180));

	if (t37 != 281479271677896LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x182 = 41141829890531LLU;
	int8_t x183 = 57;
	int16_t x184 = INT16_MIN;
	static volatile uint64_t t38 = 23262509LLU;

	t38 = ((x181*x182)+(x183/x184));

	if (t38 != 10491166622085405LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x189 = UINT8_MAX;
	int32_t x190 = -1;
	int64_t x191 = -788277525LL;
	uint32_t x192 = 180U;
	volatile int64_t t39 = 18LL;

	t39 = ((x189*x190)+(x191/x192));

	if (t39 != -4379574LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x209 = 728672630062674LLU;
	int16_t x210 = 30;
	static volatile int64_t x211 = INT64_MIN;
	int32_t x212 = INT32_MIN;
	static uint64_t t40 = 911165853322837LLU;

	t40 = ((x209*x210)+(x211/x212));

	if (t40 != 21860183196847516LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x213 = -1;
	int64_t x214 = -1LL;
	int8_t x216 = INT8_MIN;
	volatile int64_t t41 = -47574463218809LL;

	t41 = ((x213*x214)+(x215/x216));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x217 = -1;
	uint64_t x218 = 65015553250970LLU;
	static int16_t x219 = INT16_MIN;
	int64_t x220 = -1LL;
	static volatile uint64_t t42 = 82447LLU;

	t42 = ((x217*x218)+(x219/x220));

	if (t42 != 18446679058156333414LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x221 = 8U;
	volatile int8_t x222 = 3;
	int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MAX;
	int64_t t43 = -532888986741LL;

	t43 = ((x221*x222)+(x223/x224));

	if (t43 != 24LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x225 = 1407LL;
	volatile int32_t x226 = -697928;
	int16_t x227 = 332;
	volatile int32_t x228 = -17723463;
	int64_t t44 = -23011LL;

	t44 = ((x225*x226)+(x227/x228));

	if (t44 != -981984696LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x229 = 21U;
	uint64_t x230 = 10816550569257828LLU;
	int8_t x231 = INT8_MAX;
	uint64_t x232 = 66520479387638835LLU;
	uint64_t t45 = 902984674LLU;

	t45 = ((x229*x230)+(x231/x232));

	if (t45 != 227147561954414388LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x234 = -1;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	static volatile int32_t t46 = -28;

	t46 = ((x233*x234)+(x235/x236));

	if (t46 != -8672) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = 51894428643183LL;
	volatile int16_t x238 = 1;
	uint16_t x239 = 1744U;
	static volatile uint32_t x240 = 1U;
	static int64_t t47 = -4448951LL;

	t47 = ((x237*x238)+(x239/x240));

	if (t47 != 51894428644927LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = 5;
	static uint16_t x244 = UINT16_MAX;
	volatile uint64_t t48 = 138405669LLU;

	t48 = ((x241*x242)+(x243/x244));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x245 = 39U;
	uint32_t x247 = UINT32_MAX;

	t49 = ((x245*x246)+(x247/x248));

	if (t49 != -4992LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x250 = -1LL;
	uint16_t x251 = UINT16_MAX;
	uint32_t x252 = UINT32_MAX;
	static volatile int64_t t50 = -1LL;

	t50 = ((x249*x250)+(x251/x252));

	if (t50 != -28LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x253 = -1;
	int64_t x255 = -2849057125742372LL;
	volatile int8_t x256 = -1;

	t51 = ((x253*x254)+(x255/x256));

	if (t51 != 2849057125742373LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x257 = UINT32_MAX;
	static int32_t x258 = INT32_MAX;
	static uint16_t x259 = 83U;
	int16_t x260 = -4;
	volatile uint32_t t52 = 1U;

	t52 = ((x257*x258)+(x259/x260));

	if (t52 != 2147483629U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = -1;
	static int8_t x266 = -1;
	int32_t x267 = 231056;
	int32_t t53 = 65394587;

	t53 = ((x265*x266)+(x267/x268));

	if (t53 != 907) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x272 = -1;

	t54 = ((x269*x270)+(x271/x272));

	if (t54 != 77952694) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = 6221;
	int8_t x275 = 1;
	uint16_t x276 = 49U;
	volatile uint64_t t55 = 6LLU;

	t55 = ((x273*x274)+(x275/x276));

	if (t55 != 18446744073709545395LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x277 = 700651597U;
	volatile uint8_t x278 = 68U;
	static int8_t x279 = INT8_MAX;
	static volatile uint32_t t56 = 2268U;

	t56 = ((x277*x278)+(x279/x280));

	if (t56 != 399668350U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x281 = 11848U;
	uint16_t x282 = UINT16_MAX;
	static volatile int64_t x283 = 0LL;
	static volatile int8_t x284 = 25;
	volatile int64_t t57 = 248LL;

	t57 = ((x281*x282)+(x283/x284));

	if (t57 != 776458680LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = -2;
	int64_t x288 = -1LL;
	volatile uint64_t t58 = 489LLU;

	t58 = ((x285*x286)+(x287/x288));

	if (t58 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x289 = 88U;
	volatile uint8_t x290 = 10U;
	int32_t x291 = INT32_MAX;
	int32_t t59 = 285911993;

	t59 = ((x289*x290)+(x291/x292));

	if (t59 != -16776335) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = -20;
	int8_t x295 = INT8_MAX;
	static int32_t t60 = -7184;

	t60 = ((x293*x294)+(x295/x296));

	if (t60 != -5100) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = -1;
	int8_t x299 = -1;
	int64_t t61 = -162264LL;

	t61 = ((x297*x298)+(x299/x300));

	if (t61 != 128LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = 0;
	volatile int16_t x302 = INT16_MIN;
	uint64_t x303 = UINT64_MAX;
	int64_t x304 = INT64_MIN;
	static volatile uint64_t t62 = 41865LLU;

	t62 = ((x301*x302)+(x303/x304));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x305 = -1;
	uint32_t x306 = 8U;

	t63 = ((x305*x306)+(x307/x308));

	if (t63 != 4294967288U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x314 = 33;
	static int8_t x315 = -1;
	static uint8_t x316 = UINT8_MAX;
	volatile int32_t t64 = 109;

	t64 = ((x313*x314)+(x315/x316));

	if (t64 != -33) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x321 = INT32_MAX;
	static int16_t x322 = -1;
	int32_t x323 = -1;
	static uint8_t x324 = UINT8_MAX;

	t65 = ((x321*x322)+(x323/x324));

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x326 = -1;
	volatile int64_t x327 = INT64_MAX;
	static volatile int32_t x328 = -5;
	int64_t t66 = -541446090445LL;

	t66 = ((x325*x326)+(x327/x328));

	if (t66 != -1844674407370955911LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = -1LL;
	uint32_t x334 = UINT32_MAX;
	uint16_t x335 = 1U;
	static uint8_t x336 = UINT8_MAX;
	volatile int64_t t67 = -4344152999551LL;

	t67 = ((x333*x334)+(x335/x336));

	if (t67 != -4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x337 = 2807357;
	volatile uint8_t x339 = UINT8_MAX;
	int32_t x340 = -1;
	static int32_t t68 = 470;

	t68 = ((x337*x338)+(x339/x340));

	if (t68 != 2807102) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x341 = -1LL;
	int32_t x343 = INT32_MIN;
	uint64_t x344 = 20372973342457269LLU;
	uint64_t t69 = 781LLU;

	t69 = ((x341*x342)+(x343/x344));

	if (t69 != 1006LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x346 = -1;
	volatile uint16_t x347 = 1959U;
	int16_t x348 = -819;

	t70 = ((x345*x346)+(x347/x348));

	if (t70 != -9) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x349 = INT8_MIN;
	static uint32_t x350 = 90953221U;
	int32_t x351 = INT32_MAX;
	int16_t x352 = INT16_MIN;

	t71 = ((x349*x350)+(x351/x352));

	if (t71 != 1242824065U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x358 = -1;
	static int32_t x360 = -1;
	volatile int64_t t72 = -54003960427184824LL;

	t72 = ((x357*x358)+(x359/x360));

	if (t72 != 1877421970164129004LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = -1;
	static int16_t x362 = 10934;
	int32_t x364 = -1;

	t73 = ((x361*x362)+(x363/x364));

	if (t73 != -10928) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x365 = INT8_MAX;
	uint32_t x367 = 2928385U;
	int32_t x368 = INT32_MIN;

	t74 = ((x365*x366)+(x367/x368));

	if (t74 != 4294967169U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MIN;
	int64_t x380 = INT64_MIN;
	int64_t t75 = -111LL;

	t75 = ((x377*x378)+(x379/x380));

	if (t75 != 4194304LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x385 = -685724354767604411LL;
	int16_t x387 = INT16_MAX;
	uint16_t x388 = 488U;

	t76 = ((x385*x386)+(x387/x388));

	if (t76 != -2057173064302813166LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x398 = 2U;
	int8_t x399 = INT8_MIN;
	static int32_t x400 = 1;
	volatile int32_t t77 = 54514;

	t77 = ((x397*x398)+(x399/x400));

	if (t77 != -122) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x403 = 228;
	int16_t x404 = INT16_MIN;
	volatile int64_t t78 = -406666568761LL;

	t78 = ((x401*x402)+(x403/x404));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = -3868;
	int16_t x406 = INT16_MAX;
	volatile uint64_t x407 = 4097832741LLU;
	int8_t x408 = INT8_MAX;
	uint64_t t79 = 10002442984916662LLU;

	t79 = ((x405*x406)+(x407/x408));

	if (t79 != 18446744073615075259LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = 0U;
	static int16_t x411 = 1;
	uint32_t t80 = 4638970U;

	t80 = ((x409*x410)+(x411/x412));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x413 = 180158929LL;
	static volatile uint32_t x414 = UINT32_MAX;
	int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MIN;
	static volatile int64_t t81 = -4405443596372308LL;

	t81 = ((x413*x414)+(x415/x416));

	if (t81 != 774058182933937711LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x417 = INT32_MIN;
	uint32_t x418 = 1U;
	volatile int16_t x419 = INT16_MAX;
	uint32_t x420 = UINT32_MAX;
	uint32_t t82 = 3U;

	t82 = ((x417*x418)+(x419/x420));

	if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x421 = INT16_MIN;
	static int8_t x422 = -1;
	int64_t x423 = INT64_MIN;
	volatile int64_t x424 = -170473994LL;

	t83 = ((x421*x422)+(x423/x424));

	if (t83 != 54104308853LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x425 = 0U;
	volatile uint16_t x426 = 2U;
	static volatile uint32_t t84 = 12470081U;

	t84 = ((x425*x426)+(x427/x428));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x429 = 1151447508876452LLU;
	static int32_t x430 = -96;
	static uint32_t x431 = 2U;
	static uint64_t t85 = 243LLU;

	t85 = ((x429*x430)+(x431/x432));

	if (t85 != 18336205112857412224LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x433 = 59449U;
	uint8_t x434 = 35U;
	uint16_t x435 = 159U;
	int64_t x436 = -1LL;

	t86 = ((x433*x434)+(x435/x436));

	if (t86 != 2080556LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x437 = 60U;
	static volatile int16_t x438 = 7;
	volatile uint64_t x439 = 165289120668252LLU;
	static int32_t x440 = 403698072;

	t87 = ((x437*x438)+(x439/x440));

	if (t87 != 409857LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x457 = -26845716;
	uint64_t x458 = 8215476947229086056LLU;
	uint8_t x459 = 2U;
	uint64_t x460 = 337798150873LLU;
	volatile uint64_t t88 = 8206275LLU;

	t88 = ((x457*x458)+(x459/x460));

	if (t88 != 18020056790495056864LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x465 = 0U;
	int64_t x466 = -1LL;
	int32_t x467 = 44942630;
	int64_t x468 = -1LL;
	static volatile int64_t t89 = 4862873387LL;

	t89 = ((x465*x466)+(x467/x468));

	if (t89 != -44942630LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x473 = INT8_MIN;
	int64_t x475 = -1LL;
	uint8_t x476 = UINT8_MAX;

	t90 = ((x473*x474)+(x475/x476));

	if (t90 != -384LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x478 = 312U;
	static uint8_t x479 = 15U;
	int32_t t91 = 2;

	t91 = ((x477*x478)+(x479/x480));

	if (t91 != 312) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x481 = 34U;
	static int16_t x482 = INT16_MAX;
	static uint8_t x483 = 127U;
	static int16_t x484 = -1;
	volatile int32_t t92 = 54365;

	t92 = ((x481*x482)+(x483/x484));

	if (t92 != 1113951) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x485 = INT32_MAX;
	uint32_t x486 = 25706822U;
	int8_t x487 = 1;
	int64_t x488 = -821865LL;
	static volatile int64_t t93 = 454602LL;

	t93 = ((x485*x486)+(x487/x488));

	if (t93 != 4269260474LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x490 = 19LL;
	uint64_t x492 = 27763442276207LLU;
	static uint64_t t94 = 260012827682809LLU;

	t94 = ((x489*x490)+(x491/x492));

	if (t94 != 664406LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x497 = -9;
	int16_t x499 = INT16_MAX;
	uint64_t x500 = UINT64_MAX;

	t95 = ((x497*x498)+(x499/x500));

	if (t95 != 9LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x501 = 2312634U;
	uint32_t x502 = 1U;
	int8_t x503 = INT8_MIN;
	static volatile uint32_t t96 = 3930U;

	t96 = ((x501*x502)+(x503/x504));

	if (t96 != 2312634U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x506 = -14;
	volatile uint16_t x507 = 4376U;
	static volatile int64_t x508 = -874049926LL;
	int64_t t97 = 1LL;

	t97 = ((x505*x506)+(x507/x508));

	if (t97 != 672LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x513 = 1U;
	int16_t x514 = 13;
	int64_t x515 = INT64_MAX;
	static uint32_t x516 = 2222855U;
	int64_t t98 = -1905356369466LL;

	t98 = ((x513*x514)+(x515/x516));

	if (t98 != 4149335893202LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x517 = 33U;
	uint64_t x519 = 356776482020863LLU;

	t99 = ((x517*x518)+(x519/x520));

	if (t99 != 59462820641327LLU) { NG(); } else { ; }
	
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

