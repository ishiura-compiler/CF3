#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 1081U;
uint64_t x6 = 737348401634LLU;
int32_t x8 = INT32_MIN;
int8_t x12 = INT8_MIN;
int32_t x21 = 4417;
static int32_t t3 = -343;
volatile int32_t t5 = 90236591;
static volatile int64_t x37 = INT64_MAX;
int64_t x52 = -1LL;
int16_t x53 = INT16_MIN;
int32_t x59 = INT32_MIN;
volatile int8_t x64 = INT8_MIN;
static int8_t x66 = -19;
volatile int32_t t15 = 1;
int16_t x78 = INT16_MAX;
uint16_t x85 = 381U;
static int32_t t18 = 27;
int16_t x101 = INT16_MIN;
int64_t x109 = -75LL;
int16_t x115 = 5;
volatile uint16_t x118 = 15U;
uint64_t x127 = UINT64_MAX;
volatile int32_t t25 = 220808;
uint32_t x130 = 1084042380U;
volatile uint64_t x135 = UINT64_MAX;
uint8_t x137 = UINT8_MAX;
int32_t x138 = INT32_MIN;
int8_t x144 = INT8_MAX;
volatile uint16_t x145 = UINT16_MAX;
static int8_t x151 = INT8_MIN;
int16_t x153 = INT16_MAX;
int64_t x163 = -135433478166602LL;
uint32_t x165 = 1761U;
static int16_t x173 = 272;
volatile uint8_t x174 = 7U;
volatile int32_t t37 = 519631;
int32_t x185 = -1;
int8_t x188 = INT8_MAX;
static volatile int16_t x191 = -1;
static int64_t x194 = INT64_MAX;
static volatile int8_t x201 = INT8_MAX;
int64_t x203 = INT64_MIN;
volatile uint8_t x210 = 15U;
int64_t x212 = 25298749428LL;
static volatile int64_t x221 = INT64_MIN;
uint8_t x222 = UINT8_MAX;
volatile uint8_t x223 = UINT8_MAX;
volatile int16_t x234 = INT16_MAX;
int8_t x238 = -1;
int32_t x239 = -1;
volatile int32_t t47 = -840;
int16_t x247 = 1;
int32_t x258 = -1;
int8_t x265 = 0;
static int8_t x268 = -1;
volatile int32_t t54 = 130415522;
int32_t x271 = INT32_MIN;
static volatile int16_t x272 = INT16_MIN;
uint16_t x299 = 1U;
int64_t x324 = 2037115LL;
int16_t x325 = INT16_MIN;
int8_t x328 = INT8_MIN;
int32_t x332 = INT32_MAX;
int32_t t68 = 28609836;
int32_t x339 = INT32_MIN;
static volatile int64_t x347 = -542067LL;
volatile int32_t t70 = 711;
volatile int64_t x350 = 7811632856282368LL;
int32_t t71 = 96721039;
static uint64_t x356 = UINT64_MAX;
volatile int32_t x360 = INT32_MIN;
int32_t t73 = 209371337;
static int32_t x362 = INT32_MAX;
int32_t x366 = -1;
static int16_t x367 = INT16_MIN;
static volatile int32_t x369 = INT32_MAX;
volatile int64_t x371 = -1LL;
int8_t x372 = -1;
static volatile int32_t t76 = -5693580;
int64_t x375 = INT64_MAX;
volatile uint8_t x376 = 1U;
volatile int32_t t77 = -1;
volatile uint64_t x378 = UINT64_MAX;
int8_t x381 = -1;
int32_t x384 = -83737;
int32_t t79 = 9;
uint16_t x386 = UINT16_MAX;
volatile uint32_t x398 = 1589947U;
int32_t x403 = 127904;
static int32_t t83 = 5;
static volatile int16_t x410 = -1;
int64_t x412 = INT64_MIN;
int16_t x418 = -121;
volatile int16_t x423 = INT16_MIN;
uint8_t x431 = 117U;
int8_t x433 = -1;
int8_t x444 = 35;
uint8_t x447 = 36U;
volatile int32_t t93 = -75031923;
int16_t x451 = -1;
uint16_t x462 = UINT16_MAX;
volatile int32_t t97 = 224;
static uint8_t x466 = UINT8_MAX;
int32_t x469 = -1;
int8_t x470 = INT8_MIN;
int32_t t99 = 696;


void f0(void) {
	int32_t x2 = -13903;
	static int32_t x3 = -1;
	uint16_t x4 = 28120U;
	volatile int32_t t0 = -6450137;

	t0 = ((x1+x2)==(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 16;
	static uint32_t x7 = UINT32_MAX;
	static int32_t t1 = -35958;

	t1 = ((x5+x6)==(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MIN;
	static int32_t x11 = INT32_MIN;
	int32_t t2 = -349890;

	t2 = ((x9+x10)==(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x22 = -1;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;

	t3 = ((x21+x22)==(x23<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x25 = 124LLU;
	int16_t x26 = INT16_MAX;
	uint64_t x27 = 3226LLU;
	int32_t x28 = INT32_MIN;
	int32_t t4 = -10557;

	t4 = ((x25+x26)==(x27<x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x29 = 1876447801LL;
	volatile int32_t x30 = -1;
	uint8_t x31 = UINT8_MAX;
	int16_t x32 = -1;

	t5 = ((x29+x30)==(x31<x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 31U;
	static int16_t x34 = -1;
	int16_t x35 = INT16_MAX;
	static int64_t x36 = INT64_MIN;
	volatile int32_t t6 = -1;

	t6 = ((x33+x34)==(x35<x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x38 = -11130;
	static int64_t x39 = -1LL;
	int64_t x40 = -1LL;
	static int32_t t7 = -3263;

	t7 = ((x37+x38)==(x39<x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = 1;
	static uint8_t x46 = 58U;
	int8_t x47 = INT8_MIN;
	int8_t x48 = -1;
	int32_t t8 = 104;

	t8 = ((x45+x46)==(x47<x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = UINT32_MAX;
	static int8_t x51 = INT8_MIN;
	volatile int32_t t9 = -165;

	t9 = ((x49+x50)==(x51<x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x54 = 99LLU;
	static int32_t x55 = INT32_MAX;
	uint16_t x56 = UINT16_MAX;
	static volatile int32_t t10 = 1813137;

	t10 = ((x53+x54)==(x55<x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -655;
	static uint8_t x58 = 0U;
	int64_t x60 = -10116807697LL;
	static volatile int32_t t11 = 22230;

	t11 = ((x57+x58)==(x59<x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x61 = 1U;
	uint8_t x62 = UINT8_MAX;
	uint8_t x63 = 4U;
	static volatile int32_t t12 = -8460;

	t12 = ((x61+x62)==(x63<x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = 1;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = 0;
	volatile int32_t t13 = 16291058;

	t13 = ((x65+x66)==(x67<x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x69 = 49U;
	int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MAX;
	volatile uint32_t x72 = UINT32_MAX;
	volatile int32_t t14 = -24553;

	t14 = ((x69+x70)==(x71<x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = -6;
	int64_t x74 = -61029LL;
	int32_t x75 = INT32_MAX;
	int32_t x76 = -1;

	t15 = ((x73+x74)==(x75<x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = 18;
	int64_t x79 = -31465476073169508LL;
	int16_t x80 = 0;
	int32_t t16 = 84419;

	t16 = ((x77+x78)==(x79<x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -134128128;
	static int16_t x82 = INT16_MIN;
	int32_t x83 = 70524;
	int32_t x84 = INT32_MAX;
	volatile int32_t t17 = 58;

	t17 = ((x81+x82)==(x83<x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x86 = -1;
	int64_t x87 = INT64_MIN;
	volatile int64_t x88 = -1029609963384072LL;

	t18 = ((x85+x86)==(x87<x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = 200015218689LLU;
	uint32_t x92 = 16712752U;
	int32_t t19 = -1723628;

	t19 = ((x89+x90)==(x91<x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = 0LL;
	int8_t x94 = INT8_MAX;
	static int32_t x95 = 16832;
	volatile int8_t x96 = -57;
	static volatile int32_t t20 = 856408;

	t20 = ((x93+x94)==(x95<x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x102 = 19662426;
	uint16_t x103 = 556U;
	volatile int16_t x104 = INT16_MAX;
	volatile int32_t t21 = -91546890;

	t21 = ((x101+x102)==(x103<x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x110 = -18;
	static int8_t x111 = 24;
	int64_t x112 = INT64_MIN;
	volatile int32_t t22 = 11739;

	t22 = ((x109+x110)==(x111<x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x113 = INT64_MAX;
	uint64_t x114 = 6041LLU;
	volatile int32_t x116 = -641994188;
	volatile int32_t t23 = -44028;

	t23 = ((x113+x114)==(x115<x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int64_t x119 = INT64_MIN;
	int64_t x120 = INT64_MAX;
	int32_t t24 = -1;

	t24 = ((x117+x118)==(x119<x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = 7479;
	int16_t x126 = INT16_MAX;
	volatile int64_t x128 = INT64_MAX;

	t25 = ((x125+x126)==(x127<x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x129 = -1LL;
	int16_t x131 = -2734;
	volatile int8_t x132 = INT8_MAX;
	int32_t t26 = 192;

	t26 = ((x129+x130)==(x131<x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = -1;
	uint64_t x134 = 13605800LLU;
	uint64_t x136 = 10003304LLU;
	int32_t t27 = -19325253;

	t27 = ((x133+x134)==(x135<x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x139 = -4050739711656LL;
	int64_t x140 = -246LL;
	int32_t t28 = 274564295;

	t28 = ((x137+x138)==(x139<x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = -3;
	int32_t x142 = 3762431;
	int64_t x143 = -758710213LL;
	volatile int32_t t29 = -1219;

	t29 = ((x141+x142)==(x143<x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x146 = 0U;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = 22692U;
	static int32_t t30 = 804459240;

	t30 = ((x145+x146)==(x147<x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MIN;
	uint64_t x150 = 408218763209077LLU;
	int8_t x152 = -28;
	static int32_t t31 = -10;

	t31 = ((x149+x150)==(x151<x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x154 = UINT32_MAX;
	int8_t x155 = INT8_MAX;
	volatile int16_t x156 = -1;
	volatile int32_t t32 = -5646054;

	t32 = ((x153+x154)==(x155<x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x157 = 13025U;
	volatile int32_t x158 = -1;
	uint16_t x159 = 14888U;
	uint16_t x160 = 1U;
	volatile int32_t t33 = 23103;

	t33 = ((x157+x158)==(x159<x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = 1479U;
	int8_t x162 = INT8_MIN;
	static int8_t x164 = -7;
	volatile int32_t t34 = 7349;

	t34 = ((x161+x162)==(x163<x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x166 = 24U;
	int32_t x167 = 4915;
	int16_t x168 = INT16_MIN;
	volatile int32_t t35 = -1101;

	t35 = ((x165+x166)==(x167<x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 115U;
	int8_t x170 = INT8_MIN;
	volatile uint16_t x171 = UINT16_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t36 = -693;

	t36 = ((x169+x170)==(x171<x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;

	t37 = ((x173+x174)==(x175<x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x186 = 696189945;
	volatile uint64_t x187 = UINT64_MAX;
	static int32_t t38 = 12324;

	t38 = ((x185+x186)==(x187<x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = INT32_MIN;
	int64_t x190 = -1LL;
	int32_t x192 = INT32_MAX;
	int32_t t39 = -684547886;

	t39 = ((x189+x190)==(x191<x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = -1;
	uint16_t x195 = 353U;
	uint8_t x196 = 52U;
	int32_t t40 = 526393891;

	t40 = ((x193+x194)==(x195<x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x197 = -19648352277163LL;
	static uint8_t x198 = UINT8_MAX;
	int32_t x199 = 129571;
	uint32_t x200 = 7217U;
	int32_t t41 = 29638;

	t41 = ((x197+x198)==(x199<x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x202 = 120590247LLU;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t42 = -116414476;

	t42 = ((x201+x202)==(x203<x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x209 = 11316U;
	int8_t x211 = INT8_MIN;
	int32_t t43 = -1;

	t43 = ((x209+x210)==(x211<x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x213 = 37U;
	int32_t x214 = -995130;
	volatile uint64_t x215 = 79729727315LLU;
	int8_t x216 = INT8_MIN;
	int32_t t44 = -14270;

	t44 = ((x213+x214)==(x215<x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x224 = UINT64_MAX;
	int32_t t45 = -1957;

	t45 = ((x221+x222)==(x223<x224));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x233 = 6096U;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = 15LL;
	volatile int32_t t46 = -5838025;

	t46 = ((x233+x234)==(x235<x236));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x237 = UINT8_MAX;
	int16_t x240 = INT16_MAX;

	t47 = ((x237+x238)==(x239<x240));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = INT32_MIN;
	volatile int32_t x242 = INT32_MAX;
	uint32_t x243 = 12U;
	volatile int16_t x244 = 6990;
	int32_t t48 = 13988;

	t48 = ((x241+x242)==(x243<x244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = INT16_MIN;
	static uint32_t x246 = 234923U;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t49 = -776;

	t49 = ((x245+x246)==(x247<x248));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x249 = -8530;
	uint32_t x250 = 2140U;
	volatile int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t50 = 840;

	t50 = ((x249+x250)==(x251<x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x253 = UINT64_MAX;
	volatile uint64_t x254 = UINT64_MAX;
	int32_t x255 = -1;
	int8_t x256 = INT8_MIN;
	int32_t t51 = 26932;

	t51 = ((x253+x254)==(x255<x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x257 = 87994U;
	int16_t x259 = -1203;
	int32_t x260 = INT32_MAX;
	volatile int32_t t52 = -450812;

	t52 = ((x257+x258)==(x259<x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = -1677;
	int64_t x262 = -137015860429LL;
	int32_t x263 = INT32_MIN;
	uint8_t x264 = UINT8_MAX;
	int32_t t53 = -1874;

	t53 = ((x261+x262)==(x263<x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x266 = UINT16_MAX;
	volatile int64_t x267 = -731458LL;

	t54 = ((x265+x266)==(x267<x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x269 = 4194LLU;
	int32_t x270 = INT32_MIN;
	static int32_t t55 = 15315664;

	t55 = ((x269+x270)==(x271<x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = INT8_MAX;
	int64_t x274 = 121924604LL;
	int32_t x275 = -1;
	uint16_t x276 = 5061U;
	int32_t t56 = 142;

	t56 = ((x273+x274)==(x275<x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x281 = 35378642;
	volatile uint16_t x282 = UINT16_MAX;
	volatile int32_t x283 = INT32_MIN;
	static uint8_t x284 = 4U;
	static int32_t t57 = -6951;

	t57 = ((x281+x282)==(x283<x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = -1;
	int64_t x290 = INT64_MAX;
	static uint32_t x291 = 231036952U;
	volatile int64_t x292 = INT64_MIN;
	int32_t t58 = -9140;

	t58 = ((x289+x290)==(x291<x292));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x293 = 27U;
	volatile int8_t x294 = -3;
	static volatile uint8_t x295 = UINT8_MAX;
	uint32_t x296 = UINT32_MAX;
	static int32_t t59 = 501768487;

	t59 = ((x293+x294)==(x295<x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x298 = 803328U;
	static uint32_t x300 = 6077U;
	int32_t t60 = -159;

	t60 = ((x297+x298)==(x299<x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x301 = -1;
	int32_t x302 = -1;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MAX;
	volatile int32_t t61 = -4121293;

	t61 = ((x301+x302)==(x303<x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x305 = 379400LLU;
	uint8_t x306 = 53U;
	volatile int64_t x307 = INT64_MAX;
	int64_t x308 = INT64_MAX;
	int32_t t62 = -2766;

	t62 = ((x305+x306)==(x307<x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x309 = -1;
	int64_t x310 = -1LL;
	int64_t x311 = INT64_MIN;
	int32_t x312 = -1;
	volatile int32_t t63 = 3;

	t63 = ((x309+x310)==(x311<x312));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = -1LL;
	int16_t x318 = INT16_MIN;
	int8_t x319 = -10;
	int64_t x320 = INT64_MIN;
	int32_t t64 = 43979735;

	t64 = ((x317+x318)==(x319<x320));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x321 = 5;
	int16_t x322 = 14;
	volatile int16_t x323 = -1;
	volatile int32_t t65 = -28;

	t65 = ((x321+x322)==(x323<x324));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x326 = 0U;
	int64_t x327 = -61758310LL;
	static int32_t t66 = 15352327;

	t66 = ((x325+x326)==(x327<x328));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x329 = 1945869345195636655LL;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = -25190816LL;
	static volatile int32_t t67 = -563350;

	t67 = ((x329+x330)==(x331<x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x333 = 1241;
	int16_t x334 = 2335;
	volatile int16_t x335 = 0;
	int8_t x336 = INT8_MAX;

	t68 = ((x333+x334)==(x335<x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x337 = 2U;
	int32_t x338 = INT32_MIN;
	uint16_t x340 = 3U;
	volatile int32_t t69 = 991720689;

	t69 = ((x337+x338)==(x339<x340));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x345 = 18;
	uint64_t x346 = UINT64_MAX;
	volatile uint32_t x348 = UINT32_MAX;

	t70 = ((x345+x346)==(x347<x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x349 = -1;
	static volatile int64_t x351 = -3997642930527277LL;
	uint32_t x352 = 2018U;

	t71 = ((x349+x350)==(x351<x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x353 = -51029268;
	volatile int8_t x354 = 57;
	int32_t x355 = -1;
	volatile int32_t t72 = 30644;

	t72 = ((x353+x354)==(x355<x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x357 = INT32_MIN;
	uint16_t x358 = 23475U;
	static int8_t x359 = INT8_MIN;

	t73 = ((x357+x358)==(x359<x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x361 = UINT64_MAX;
	volatile int32_t x363 = -1;
	int8_t x364 = -17;
	int32_t t74 = 340;

	t74 = ((x361+x362)==(x363<x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x368 = 14545LLU;
	static volatile int32_t t75 = -243;

	t75 = ((x365+x366)==(x367<x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x370 = -7740815;

	t76 = ((x369+x370)==(x371<x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x373 = 38U;
	int8_t x374 = INT8_MIN;

	t77 = ((x373+x374)==(x375<x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x377 = 5U;
	int8_t x379 = INT8_MIN;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t78 = -1;

	t78 = ((x377+x378)==(x379<x380));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x382 = UINT64_MAX;
	int32_t x383 = INT32_MIN;

	t79 = ((x381+x382)==(x383<x384));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x385 = -1;
	uint8_t x387 = 1U;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t80 = 1919;

	t80 = ((x385+x386)==(x387<x388));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = INT64_MAX;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = -1;
	volatile uint16_t x396 = UINT16_MAX;
	int32_t t81 = 3321315;

	t81 = ((x393+x394)==(x395<x396));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = -22;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MAX;
	static int32_t t82 = 38;

	t82 = ((x397+x398)==(x399<x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x401 = 71654146400664457LLU;
	static int32_t x402 = -1;
	int32_t x404 = INT32_MAX;

	t83 = ((x401+x402)==(x403<x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = 1;
	volatile int32_t x411 = 231900;
	volatile int32_t t84 = 1;

	t84 = ((x409+x410)==(x411<x412));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x413 = 26U;
	int64_t x414 = 19413243LL;
	volatile uint8_t x415 = 126U;
	int16_t x416 = -7;
	int32_t t85 = -834;

	t85 = ((x413+x414)==(x415<x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x417 = UINT8_MAX;
	int32_t x419 = 2;
	volatile uint8_t x420 = UINT8_MAX;
	volatile int32_t t86 = -8;

	t86 = ((x417+x418)==(x419<x420));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x421 = INT8_MAX;
	static int16_t x422 = 9;
	volatile int16_t x424 = INT16_MIN;
	volatile int32_t t87 = -1;

	t87 = ((x421+x422)==(x423<x424));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = -126;
	int16_t x426 = -1;
	int32_t x427 = INT32_MIN;
	int64_t x428 = INT64_MIN;
	int32_t t88 = -1918757;

	t88 = ((x425+x426)==(x427<x428));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x429 = INT64_MIN;
	static int32_t x430 = 376144724;
	static int32_t x432 = -1;
	int32_t t89 = -59;

	t89 = ((x429+x430)==(x431<x432));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x434 = 2820966272LLU;
	static int32_t x435 = INT32_MIN;
	uint8_t x436 = 19U;
	int32_t t90 = -60;

	t90 = ((x433+x434)==(x435<x436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x437 = -1LL;
	uint32_t x438 = UINT32_MAX;
	uint32_t x439 = UINT32_MAX;
	int64_t x440 = INT64_MAX;
	volatile int32_t t91 = 3;

	t91 = ((x437+x438)==(x439<x440));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x441 = INT16_MIN;
	static volatile uint32_t x442 = UINT32_MAX;
	uint16_t x443 = 0U;
	int32_t t92 = 0;

	t92 = ((x441+x442)==(x443<x444));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x445 = UINT64_MAX;
	int64_t x446 = -1LL;
	static uint64_t x448 = 726818LLU;

	t93 = ((x445+x446)==(x447<x448));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x449 = INT32_MIN;
	uint16_t x450 = 11U;
	int64_t x452 = INT64_MAX;
	int32_t t94 = -245;

	t94 = ((x449+x450)==(x451<x452));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = -1;
	int16_t x454 = -1;
	int64_t x455 = -1LL;
	int64_t x456 = 2LL;
	int32_t t95 = -1002;

	t95 = ((x453+x454)==(x455<x456));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x457 = UINT32_MAX;
	int32_t x458 = 170787223;
	int32_t x459 = INT32_MIN;
	uint8_t x460 = 17U;
	int32_t t96 = -175565545;

	t96 = ((x457+x458)==(x459<x460));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x461 = -1;
	int8_t x463 = 7;
	int32_t x464 = INT32_MAX;

	t97 = ((x461+x462)==(x463<x464));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x465 = INT16_MAX;
	int32_t x467 = INT32_MAX;
	volatile uint16_t x468 = UINT16_MAX;
	int32_t t98 = 30;

	t98 = ((x465+x466)==(x467<x468));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x471 = 469225U;
	uint8_t x472 = 44U;

	t99 = ((x469+x470)==(x471<x472));

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

