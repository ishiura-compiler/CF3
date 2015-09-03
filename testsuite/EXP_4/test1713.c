#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 263;
int64_t x11 = -13070LL;
int8_t x15 = INT8_MIN;
int32_t t3 = 28538;
volatile int32_t t4 = -1;
volatile int64_t x21 = INT64_MIN;
volatile int32_t t6 = 1511;
int16_t x32 = 24;
volatile uint64_t x36 = UINT64_MAX;
int32_t x38 = -1;
int64_t x45 = INT64_MIN;
volatile uint64_t x47 = UINT64_MAX;
volatile int32_t t13 = -929;
int32_t x57 = INT32_MIN;
static uint32_t x60 = 15968U;
volatile int32_t x73 = INT32_MIN;
int32_t t18 = 222908733;
static volatile int8_t x82 = -1;
int32_t x91 = INT32_MIN;
volatile int32_t x101 = INT32_MAX;
int32_t x104 = INT32_MAX;
int16_t x110 = INT16_MAX;
int32_t t26 = 5610;
int16_t x114 = INT16_MIN;
uint16_t x115 = 26402U;
static int64_t x136 = -1LL;
int32_t x138 = 1;
uint64_t x140 = 1LLU;
int16_t x148 = INT16_MIN;
volatile int16_t x149 = 8;
int32_t t34 = -1440;
static int32_t t36 = 256;
int8_t x165 = INT8_MAX;
volatile int32_t x168 = INT32_MIN;
static int32_t t40 = -4647978;
int32_t x188 = -1;
int16_t x189 = -1;
static volatile int16_t x190 = INT16_MAX;
uint32_t x195 = UINT32_MAX;
int32_t x227 = INT32_MIN;
volatile uint32_t x228 = 5522U;
uint32_t x229 = 923116U;
volatile uint64_t x232 = 488802LLU;
volatile int32_t x233 = INT32_MIN;
volatile int64_t x235 = 15147659598LL;
int32_t t51 = -1;
int32_t t52 = -515628;
int8_t x243 = INT8_MIN;
static volatile int32_t t53 = 13;
volatile uint16_t x247 = UINT16_MAX;
volatile int32_t x254 = INT32_MIN;
static int32_t x273 = INT32_MIN;
int16_t x276 = INT16_MIN;
int16_t x278 = -1;
static int32_t x282 = INT32_MIN;
static uint8_t x283 = 2U;
uint64_t x284 = 824154LLU;
volatile int32_t t62 = -186789;
volatile int32_t t66 = -11;
volatile int32_t t67 = 1;
volatile int64_t x309 = INT64_MIN;
static int16_t x314 = 103;
volatile uint64_t x323 = 44LLU;
volatile int16_t x325 = INT16_MAX;
int32_t t72 = -43779;
uint16_t x334 = 701U;
int8_t x336 = 12;
int8_t x350 = 6;
int8_t x354 = -43;
volatile int64_t x357 = 199326LL;
static volatile int8_t x361 = INT8_MIN;
int32_t x362 = -210;
uint16_t x363 = 950U;
volatile int32_t t79 = 102;
uint32_t x368 = 790U;
int64_t x376 = 868518499458LL;
static int16_t x380 = INT16_MIN;
uint64_t x383 = 41343852736718663LLU;
int32_t t83 = 111301796;
int8_t x385 = INT8_MIN;
int16_t x396 = 22;
int32_t t87 = 18129412;
volatile int64_t x404 = INT64_MIN;
static volatile uint8_t x407 = 2U;
volatile int64_t x409 = 0LL;
int64_t x410 = -1LL;
uint64_t x417 = UINT64_MAX;
uint16_t x418 = 7U;
uint32_t x419 = 22326U;
int32_t t92 = 7080789;
int32_t t93 = 237059;
int32_t t95 = 65404083;
volatile int32_t x433 = INT32_MIN;
volatile int16_t x434 = -253;
volatile int32_t t96 = -448;
int8_t x446 = -1;
int32_t t99 = 853252;


void f0(void) {
	uint32_t x1 = 35928U;
	uint32_t x2 = UINT32_MAX;
	uint64_t x3 = 6LLU;
	static uint32_t x4 = UINT32_MAX;

	t0 = (x1<=(x2-(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 4959U;
	int16_t x6 = INT16_MAX;
	static volatile uint16_t x7 = 10U;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = -2017;

	t1 = (x5<=(x6-(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1575616522LL;
	uint8_t x10 = UINT8_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 648;

	t2 = (x9<=(x10-(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static volatile int16_t x14 = INT16_MIN;
	static uint32_t x16 = 65U;

	t3 = (x13<=(x14-(x15&x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x18 = -1;
	int32_t x19 = -1;
	volatile uint8_t x20 = 0U;

	t4 = (x17<=(x18-(x19&x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	volatile int64_t x23 = -1LL;
	int8_t x24 = 1;
	int32_t t5 = 613;

	t5 = (x21<=(x22-(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 706U;
	int32_t x26 = INT32_MIN;
	int8_t x27 = 59;
	volatile int8_t x28 = INT8_MIN;

	t6 = (x25<=(x26-(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int8_t x30 = INT8_MAX;
	volatile int16_t x31 = INT16_MIN;
	static volatile int32_t t7 = 16270953;

	t7 = (x29<=(x30-(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 5;
	int16_t x34 = INT16_MAX;
	static int64_t x35 = INT64_MIN;
	static volatile int32_t t8 = -35420;

	t8 = (x33<=(x34-(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x39 = INT32_MIN;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -55928;

	t9 = (x37<=(x38-(x39&x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	volatile uint8_t x42 = 64U;
	uint16_t x43 = 745U;
	static int64_t x44 = -1LL;
	static int32_t t10 = -1;

	t10 = (x41<=(x42-(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -503;
	int32_t x48 = -1;
	int32_t t11 = -30106451;

	t11 = (x45<=(x46-(x47&x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = INT32_MAX;
	uint8_t x50 = 3U;
	uint16_t x51 = UINT16_MAX;
	uint32_t x52 = 183U;
	volatile int32_t t12 = -113867116;

	t12 = (x49<=(x50-(x51&x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 33271LLU;
	static int32_t x54 = INT32_MIN;
	static volatile int8_t x55 = -1;
	int32_t x56 = INT32_MIN;

	t13 = (x53<=(x54-(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	volatile int32_t t14 = 74;

	t14 = (x57<=(x58-(x59&x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 11;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = 437U;
	int32_t t15 = 9692801;

	t15 = (x61<=(x62-(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	static int64_t x66 = -27203LL;
	static volatile uint16_t x67 = UINT16_MAX;
	int8_t x68 = 1;
	volatile int32_t t16 = 16174;

	t16 = (x65<=(x66-(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x69 = 69468U;
	static int8_t x70 = 1;
	int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = -487738989;

	t17 = (x69<=(x70-(x71&x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x74 = -1;
	uint32_t x75 = 58430952U;
	static int32_t x76 = -613459;

	t18 = (x73<=(x74-(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 4;
	uint64_t x78 = 67527921295604803LLU;
	volatile int8_t x79 = 0;
	int16_t x80 = -254;
	int32_t t19 = -29;

	t19 = (x77<=(x78-(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = -1;
	int16_t x83 = INT16_MIN;
	int32_t x84 = -1;
	int32_t t20 = -1256;

	t20 = (x81<=(x82-(x83&x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 4500056838618510868LLU;
	int16_t x86 = -4;
	static volatile int8_t x87 = INT8_MAX;
	static int32_t x88 = 24;
	int32_t t21 = 53;

	t21 = (x85<=(x86-(x87&x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	static int32_t x90 = INT32_MIN;
	int8_t x92 = -1;
	volatile int32_t t22 = 3;

	t22 = (x89<=(x90-(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	int64_t x95 = 15LL;
	volatile int8_t x96 = INT8_MIN;
	int32_t t23 = -49;

	t23 = (x93<=(x94-(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x102 = 2881U;
	int16_t x103 = INT16_MAX;
	static volatile int32_t t24 = 3837364;

	t24 = (x101<=(x102-(x103&x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 23U;
	volatile uint32_t x106 = 5U;
	int16_t x107 = 20;
	uint64_t x108 = 10016LLU;
	static volatile int32_t t25 = 214183515;

	t25 = (x105<=(x106-(x107&x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	int32_t x111 = INT32_MIN;
	int8_t x112 = 4;

	t26 = (x109<=(x110-(x111&x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MAX;
	volatile int64_t x116 = INT64_MIN;
	int32_t t27 = 16775;

	t27 = (x113<=(x114-(x115&x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -10;
	int32_t x122 = INT32_MIN;
	uint16_t x123 = 38U;
	static int64_t x124 = INT64_MIN;
	static int32_t t28 = -85359;

	t28 = (x121<=(x122-(x123&x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	static int32_t x127 = INT32_MIN;
	uint64_t x128 = 3681LLU;
	int32_t t29 = -40;

	t29 = (x125<=(x126-(x127&x128)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	static uint32_t x134 = 13156541U;
	int16_t x135 = INT16_MAX;
	int32_t t30 = -5;

	t30 = (x133<=(x134-(x135&x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = 15LL;
	volatile int16_t x139 = INT16_MAX;
	volatile int32_t t31 = 1413;

	t31 = (x137<=(x138-(x139&x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MAX;
	volatile uint32_t x143 = 707297685U;
	static volatile int32_t x144 = -150744908;
	int32_t t32 = 1;

	t32 = (x141<=(x142-(x143&x144)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x145 = 3443993;
	volatile int8_t x146 = 1;
	int16_t x147 = -1373;
	volatile int32_t t33 = 5297984;

	t33 = (x145<=(x146-(x147&x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = 36;
	uint64_t x151 = 51649291291295451LLU;
	volatile uint8_t x152 = 4U;

	t34 = (x149<=(x150-(x151&x152)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = -1864645LL;
	volatile uint32_t x154 = 264950592U;
	int8_t x155 = INT8_MIN;
	static volatile uint64_t x156 = 3423197207480LLU;
	volatile int32_t t35 = -207659;

	t35 = (x153<=(x154-(x155&x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -2852;
	int64_t x158 = INT64_MAX;
	static int64_t x159 = INT64_MIN;
	volatile int64_t x160 = 1LL;

	t36 = (x157<=(x158-(x159&x160)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	int64_t x162 = 2801LL;
	int64_t x163 = 277981854029054578LL;
	static uint16_t x164 = 1U;
	int32_t t37 = 716536250;

	t37 = (x161<=(x162-(x163&x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x166 = 10239LLU;
	static uint64_t x167 = 170325LLU;
	volatile int32_t t38 = 31745;

	t38 = (x165<=(x166-(x167&x168)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x170 = 5581757U;
	static int32_t x171 = -311206;
	volatile int16_t x172 = -9427;
	static volatile int32_t t39 = -5794552;

	t39 = (x169<=(x170-(x171&x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x174 = 12065U;
	int32_t x175 = INT32_MIN;
	static uint64_t x176 = 187490561123956LLU;

	t40 = (x173<=(x174-(x175&x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x181 = INT64_MIN;
	uint32_t x182 = 25706725U;
	static volatile uint8_t x183 = 2U;
	uint8_t x184 = 31U;
	int32_t t41 = 6;

	t41 = (x181<=(x182-(x183&x184)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = 248389LL;
	uint32_t x186 = 7862555U;
	static int8_t x187 = INT8_MIN;
	volatile int32_t t42 = 39938;

	t42 = (x185<=(x186-(x187&x188)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x191 = -1;
	static int8_t x192 = INT8_MIN;
	int32_t t43 = -29971;

	t43 = (x189<=(x190-(x191&x192)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = -1;
	int8_t x194 = INT8_MAX;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t44 = -36159;

	t44 = (x193<=(x194-(x195&x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 3U;
	int32_t x198 = -892;
	uint64_t x199 = 4402556794162LLU;
	uint16_t x200 = 831U;
	int32_t t45 = -64453295;

	t45 = (x197<=(x198-(x199&x200)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = INT16_MIN;
	uint64_t x214 = 66171328LLU;
	static uint8_t x215 = 7U;
	static uint16_t x216 = 1U;
	volatile int32_t t46 = 118897;

	t46 = (x213<=(x214-(x215&x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x217 = 376261832U;
	volatile int16_t x218 = INT16_MIN;
	uint32_t x219 = UINT32_MAX;
	static int8_t x220 = -3;
	volatile int32_t t47 = 27960127;

	t47 = (x217<=(x218-(x219&x220)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = 356U;
	int8_t x222 = INT8_MIN;
	volatile int32_t x223 = 14;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t48 = 118790636;

	t48 = (x221<=(x222-(x223&x224)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = 417231U;
	volatile uint32_t x226 = 405U;
	volatile int32_t t49 = 3782;

	t49 = (x225<=(x226-(x227&x228)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x230 = -1LL;
	int16_t x231 = -23;
	volatile int32_t t50 = -112095;

	t50 = (x229<=(x230-(x231&x232)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x234 = UINT64_MAX;
	static int32_t x236 = -1;

	t51 = (x233<=(x234-(x235&x236)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = -1;
	int16_t x238 = -1;
	volatile uint64_t x239 = 518630701LLU;
	uint64_t x240 = UINT64_MAX;

	t52 = (x237<=(x238-(x239&x240)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = -1;
	uint64_t x244 = UINT64_MAX;

	t53 = (x241<=(x242-(x243&x244)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MAX;
	uint16_t x246 = 0U;
	int8_t x248 = -1;
	static int32_t t54 = -1905624;

	t54 = (x245<=(x246-(x247&x248)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -219LL;
	int16_t x250 = 9444;
	uint64_t x251 = 237104904257LLU;
	int32_t x252 = INT32_MIN;
	volatile int32_t t55 = -764;

	t55 = (x249<=(x250-(x251&x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MIN;
	int64_t x255 = INT64_MIN;
	int64_t x256 = -1LL;
	int32_t t56 = -45166;

	t56 = (x253<=(x254-(x255&x256)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x257 = 86U;
	uint64_t x258 = 154108552893457LLU;
	uint16_t x259 = 229U;
	uint64_t x260 = 4765356232276495189LLU;
	int32_t t57 = -2734;

	t57 = (x257<=(x258-(x259&x260)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = INT64_MIN;
	uint16_t x262 = 4U;
	int8_t x263 = INT8_MAX;
	uint8_t x264 = 0U;
	int32_t t58 = 6800840;

	t58 = (x261<=(x262-(x263&x264)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x270 = 51LLU;
	static int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MIN;
	volatile int32_t t59 = -57;

	t59 = (x269<=(x270-(x271&x272)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x274 = UINT8_MAX;
	uint16_t x275 = 2626U;
	int32_t t60 = -6;

	t60 = (x273<=(x274-(x275&x276)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x277 = INT16_MAX;
	int32_t x279 = INT32_MIN;
	static int64_t x280 = -1LL;
	volatile int32_t t61 = -117;

	t61 = (x277<=(x278-(x279&x280)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x281 = UINT16_MAX;

	t62 = (x281<=(x282-(x283&x284)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = 41;
	int8_t x286 = -1;
	volatile int64_t x287 = 0LL;
	static uint16_t x288 = UINT16_MAX;
	int32_t t63 = 76012;

	t63 = (x285<=(x286-(x287&x288)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x289 = -5;
	int16_t x290 = 0;
	uint64_t x291 = 1552140LLU;
	int16_t x292 = 12271;
	volatile int32_t t64 = 4098020;

	t64 = (x289<=(x290-(x291&x292)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	int16_t x295 = 2;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t65 = -1269;

	t65 = (x293<=(x294-(x295&x296)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x297 = -1;
	int64_t x298 = INT64_MIN;
	static int32_t x299 = INT32_MIN;
	volatile int32_t x300 = INT32_MIN;

	t66 = (x297<=(x298-(x299&x300)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = -1;
	int32_t x303 = INT32_MIN;
	int32_t x304 = 3350671;

	t67 = (x301<=(x302-(x303&x304)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x310 = 2U;
	volatile uint64_t x311 = 4106337340LLU;
	int64_t x312 = 2768LL;
	int32_t t68 = -409;

	t68 = (x309<=(x310-(x311&x312)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = 0;
	static int64_t x315 = INT64_MAX;
	static uint64_t x316 = 34384778808097LLU;
	int32_t t69 = -188;

	t69 = (x313<=(x314-(x315&x316)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = -27244117LL;
	int64_t x318 = INT64_MAX;
	uint64_t x319 = 25462474737842912LLU;
	static int8_t x320 = INT8_MIN;
	static volatile int32_t t70 = 1;

	t70 = (x317<=(x318-(x319&x320)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x321 = UINT8_MAX;
	int64_t x322 = -1LL;
	int64_t x324 = -2353693376068LL;
	static volatile int32_t t71 = 373;

	t71 = (x321<=(x322-(x323&x324)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x326 = 1LLU;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;

	t72 = (x325<=(x326-(x327&x328)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MIN;
	uint16_t x335 = 744U;
	int32_t t73 = -178;

	t73 = (x333<=(x334-(x335&x336)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x341 = 28U;
	static volatile uint16_t x342 = UINT16_MAX;
	int64_t x343 = INT64_MIN;
	static int32_t x344 = 315;
	volatile int32_t t74 = 34084830;

	t74 = (x341<=(x342-(x343&x344)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MAX;
	volatile int32_t x347 = INT32_MAX;
	volatile int16_t x348 = 190;
	int32_t t75 = -12962833;

	t75 = (x345<=(x346-(x347&x348)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x349 = -1LL;
	volatile uint8_t x351 = 1U;
	int8_t x352 = INT8_MAX;
	static int32_t t76 = 24106;

	t76 = (x349<=(x350-(x351&x352)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x353 = -100736439313LL;
	static int32_t x355 = -29780;
	int16_t x356 = 483;
	volatile int32_t t77 = 8143;

	t77 = (x353<=(x354-(x355&x356)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x358 = 30U;
	uint32_t x359 = 423282U;
	int16_t x360 = INT16_MIN;
	int32_t t78 = -1231734;

	t78 = (x357<=(x358-(x359&x360)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x364 = 2123635246LLU;

	t79 = (x361<=(x362-(x363&x364)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x365 = 5365U;
	int32_t x366 = -1;
	uint16_t x367 = 2U;
	static volatile int32_t t80 = -17437891;

	t80 = (x365<=(x366-(x367&x368)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x373 = INT16_MIN;
	uint32_t x374 = 61631U;
	static volatile uint16_t x375 = UINT16_MAX;
	volatile int32_t t81 = 0;

	t81 = (x373<=(x374-(x375&x376)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MIN;
	static int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	volatile int32_t t82 = 15210183;

	t82 = (x377<=(x378-(x379&x380)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = -1;
	volatile int64_t x382 = -93826715250093008LL;
	int32_t x384 = INT32_MAX;

	t83 = (x381<=(x382-(x383&x384)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x386 = -1;
	int16_t x387 = -1;
	static uint64_t x388 = 4078482LLU;
	int32_t t84 = -3;

	t84 = (x385<=(x386-(x387&x388)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = UINT64_MAX;
	uint32_t x390 = UINT32_MAX;
	static uint32_t x391 = 110220U;
	volatile int16_t x392 = -1;
	volatile int32_t t85 = 1;

	t85 = (x389<=(x390-(x391&x392)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x393 = 6U;
	uint64_t x394 = 110716212LLU;
	uint32_t x395 = 217U;
	int32_t t86 = -7576;

	t86 = (x393<=(x394-(x395&x396)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x397 = 44U;
	uint64_t x398 = 306014386032421LLU;
	int8_t x399 = 8;
	volatile uint64_t x400 = 309277103745LLU;

	t87 = (x397<=(x398-(x399&x400)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x401 = INT32_MIN;
	int8_t x402 = 1;
	uint8_t x403 = 0U;
	int32_t t88 = -33023998;

	t88 = (x401<=(x402-(x403&x404)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x405 = 9U;
	static volatile uint64_t x406 = 115LLU;
	volatile uint32_t x408 = UINT32_MAX;
	static int32_t t89 = -14589561;

	t89 = (x405<=(x406-(x407&x408)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x411 = -347190803;
	uint32_t x412 = UINT32_MAX;
	volatile int32_t t90 = 71030;

	t90 = (x409<=(x410-(x411&x412)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x413 = -1;
	static int8_t x414 = -1;
	int64_t x415 = 2359253479247791867LL;
	static volatile uint16_t x416 = UINT16_MAX;
	int32_t t91 = -220386;

	t91 = (x413<=(x414-(x415&x416)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x420 = 4U;

	t92 = (x417<=(x418-(x419&x420)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MIN;
	int64_t x422 = 147015316156586699LL;
	int32_t x423 = INT32_MIN;
	int32_t x424 = -5;

	t93 = (x421<=(x422-(x423&x424)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = 957032678079002LL;
	uint16_t x426 = UINT16_MAX;
	uint32_t x427 = 498U;
	volatile uint32_t x428 = 1U;
	volatile int32_t t94 = -27511347;

	t94 = (x425<=(x426-(x427&x428)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x429 = 11U;
	static volatile uint32_t x430 = 830749U;
	static int64_t x431 = INT64_MIN;
	volatile int64_t x432 = 188558885457605672LL;

	t95 = (x429<=(x430-(x431&x432)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x435 = INT64_MAX;
	volatile int16_t x436 = -341;

	t96 = (x433<=(x434-(x435&x436)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x437 = INT32_MAX;
	static int8_t x438 = -1;
	uint16_t x439 = 63U;
	int32_t x440 = 163377258;
	static int32_t t97 = -65190;

	t97 = (x437<=(x438-(x439&x440)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x441 = INT16_MIN;
	volatile int64_t x442 = INT64_MAX;
	volatile int32_t x443 = 1739657;
	int16_t x444 = INT16_MAX;
	int32_t t98 = -9750;

	t98 = (x441<=(x442-(x443&x444)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x445 = 29U;
	volatile int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MAX;

	t99 = (x445<=(x446-(x447&x448)));

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

