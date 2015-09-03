#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = INT16_MIN;
volatile uint8_t x16 = 55U;
int32_t t3 = -4;
volatile int32_t x21 = INT32_MIN;
uint32_t x23 = UINT32_MAX;
static uint16_t x26 = 2U;
uint64_t x29 = 1558831LLU;
uint8_t x37 = 36U;
uint16_t x39 = 1U;
uint8_t x44 = 84U;
static volatile int32_t t10 = 42;
volatile int64_t x46 = 7108LL;
volatile int64_t x48 = 471574LL;
int32_t t11 = 487;
volatile int64_t x61 = INT64_MIN;
int32_t x63 = INT32_MIN;
volatile int16_t x65 = 0;
int32_t t16 = -172799;
volatile int64_t x72 = INT64_MAX;
uint32_t x74 = UINT32_MAX;
int8_t x75 = INT8_MIN;
volatile int32_t t18 = 8683;
int8_t x78 = 0;
int64_t x80 = INT64_MIN;
uint16_t x82 = 10020U;
static volatile int64_t x90 = -40512LL;
static volatile int64_t x95 = INT64_MIN;
int16_t x99 = -43;
int32_t x103 = INT32_MAX;
volatile uint16_t x105 = UINT16_MAX;
static int8_t x107 = INT8_MAX;
int64_t x111 = 2081786872393590LL;
int32_t x112 = INT32_MAX;
int16_t x113 = -1;
volatile int64_t x114 = -193091584205LL;
static int32_t x118 = INT32_MIN;
int8_t x121 = INT8_MIN;
static uint64_t x122 = 51858818426LLU;
static int64_t x123 = INT64_MIN;
uint16_t x128 = 237U;
int32_t x132 = -1;
volatile uint16_t x133 = UINT16_MAX;
int32_t t33 = 347;
volatile int16_t x138 = INT16_MAX;
volatile uint64_t x142 = 14716300804853999LLU;
int8_t x146 = INT8_MIN;
int16_t x156 = -1;
int32_t t39 = 422932054;
int32_t x163 = INT32_MIN;
uint8_t x168 = 7U;
static volatile int32_t t41 = -5723;
uint64_t x181 = 30145835466806LLU;
int16_t x182 = INT16_MAX;
int32_t t46 = -8286295;
static volatile int64_t x189 = INT64_MIN;
static int32_t t47 = 8531;
int32_t t49 = -109870;
static int64_t x201 = INT64_MAX;
int16_t x203 = INT16_MIN;
volatile int16_t x209 = 0;
volatile int32_t t52 = -1274;
int32_t x213 = INT32_MIN;
int32_t t54 = -109426;
int32_t x221 = INT32_MAX;
uint16_t x225 = 1075U;
int8_t x231 = INT8_MAX;
static int16_t x232 = -1;
int16_t x233 = INT16_MIN;
static volatile int32_t x234 = -1;
int64_t x239 = 6120789496502LL;
volatile int32_t t59 = 38808903;
static uint8_t x244 = UINT8_MAX;
int64_t x246 = INT64_MAX;
int16_t x256 = 14;
static int64_t x267 = -3748611447924LL;
int32_t t66 = -524271;
volatile int32_t t67 = 178276861;
static int8_t x273 = 34;
int64_t x274 = -1LL;
int64_t x275 = INT64_MAX;
int64_t x277 = INT64_MIN;
int16_t x290 = INT16_MAX;
int16_t x294 = -1;
uint16_t x296 = 12629U;
volatile uint8_t x297 = UINT8_MAX;
volatile int8_t x299 = INT8_MIN;
static int32_t x300 = INT32_MAX;
int32_t t77 = -45;
volatile int32_t t79 = -63709;
static int8_t x324 = INT8_MAX;
int16_t x328 = INT16_MIN;
static volatile int32_t t81 = 3;
int32_t t82 = -303681286;
int32_t x339 = 87253890;
static int32_t x343 = INT32_MIN;
int8_t x344 = INT8_MIN;
uint32_t x348 = 996216U;
static int32_t t86 = -15232039;
int16_t x349 = INT16_MIN;
static int8_t x354 = INT8_MAX;
int32_t x356 = INT32_MAX;
int32_t t88 = 4135;
static uint64_t x360 = 9216300441163732610LLU;
int32_t x361 = INT32_MIN;
static int32_t x362 = -1;
static uint64_t x369 = 25463LLU;
static uint16_t x372 = UINT16_MAX;
volatile int32_t t92 = -14;
static int8_t x375 = -1;
volatile int32_t t93 = 14;
volatile int16_t x385 = 273;
int32_t x392 = -1;
int32_t t97 = 31679;
int16_t x394 = INT16_MIN;
int8_t x396 = -1;
uint64_t x398 = 1LLU;
int32_t x400 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int64_t x2 = -1LL;
	volatile int64_t x3 = INT64_MIN;
	uint8_t x4 = 3U;
	int32_t t0 = -808;

	t0 = ((x1==x2)<=(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 31569;

	t1 = ((x5==x6)<=(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -51634783900009104LL;
	volatile int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	int16_t x12 = -1;
	static int32_t t2 = -274;

	t2 = ((x9==x10)<=(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = -1;
	int16_t x15 = INT16_MIN;

	t3 = ((x13==x14)<=(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -128893809290318LL;
	static int32_t x18 = INT32_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -1;

	t4 = ((x17==x18)<=(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 18;

	t5 = ((x21==x22)<=(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	int32_t x27 = -41;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -1;

	t6 = ((x25==x26)<=(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	static uint8_t x31 = 35U;
	static uint8_t x32 = 64U;
	int32_t t7 = 23581;

	t7 = ((x29==x30)<=(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	static int8_t x34 = INT8_MAX;
	int64_t x35 = -1LL;
	int8_t x36 = -1;
	int32_t t8 = 2273;

	t8 = ((x33==x34)<=(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	uint64_t x40 = 186944LLU;
	volatile int32_t t9 = 1002902;

	t9 = ((x37==x38)<=(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1611;
	volatile int16_t x42 = INT16_MAX;
	int8_t x43 = INT8_MIN;

	t10 = ((x41==x42)<=(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 2899249LLU;
	int64_t x47 = INT64_MIN;

	t11 = ((x45==x46)<=(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 0U;
	uint16_t x50 = UINT16_MAX;
	int16_t x51 = INT16_MIN;
	uint64_t x52 = 30622785486309LLU;
	volatile int32_t t12 = 422439;

	t12 = ((x49==x50)<=(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 32593U;
	uint32_t x54 = 3640914U;
	int16_t x55 = INT16_MIN;
	int32_t x56 = -1;
	static volatile int32_t t13 = -1;

	t13 = ((x53==x54)<=(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int16_t x58 = INT16_MAX;
	static int32_t x59 = INT32_MIN;
	uint64_t x60 = 352786LLU;
	int32_t t14 = 161376;

	t14 = ((x57==x58)<=(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 0;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 21753723;

	t15 = ((x61==x62)<=(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 4U;
	int8_t x67 = -1;
	uint16_t x68 = 6708U;

	t16 = ((x65==x66)<=(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -4263209036LL;
	int16_t x70 = INT16_MIN;
	int8_t x71 = -1;
	int32_t t17 = 191;

	t17 = ((x69==x70)<=(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 9LL;
	int32_t x76 = 2859260;

	t18 = ((x73==x74)<=(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static uint8_t x79 = 47U;
	volatile int32_t t19 = -102272;

	t19 = ((x77==x78)<=(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 43;
	int8_t x83 = -1;
	static uint8_t x84 = UINT8_MAX;
	int32_t t20 = -479258;

	t20 = ((x81==x82)<=(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	static volatile int32_t x86 = INT32_MAX;
	uint16_t x87 = UINT16_MAX;
	static uint16_t x88 = 3883U;
	int32_t t21 = 3658248;

	t21 = ((x85==x86)<=(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	uint8_t x91 = 0U;
	volatile uint16_t x92 = 3U;
	static volatile int32_t t22 = -3;

	t22 = ((x89==x90)<=(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 2213;
	int8_t x94 = INT8_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t23 = -1543877;

	t23 = ((x93==x94)<=(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -337;
	int64_t x98 = INT64_MIN;
	static int16_t x100 = INT16_MIN;
	int32_t t24 = 70059;

	t24 = ((x97==x98)<=(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 1U;
	int32_t x102 = INT32_MIN;
	volatile int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 16700529;

	t25 = ((x101==x102)<=(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x106 = 127U;
	static uint8_t x108 = 5U;
	int32_t t26 = 1;

	t26 = ((x105==x106)<=(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MAX;
	int32_t t27 = -21277;

	t27 = ((x109==x110)<=(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x115 = INT32_MIN;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 63;

	t28 = ((x113==x114)<=(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -93LL;
	int8_t x119 = -3;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 1;

	t29 = ((x117==x118)<=(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 57347673;

	t30 = ((x121==x122)<=(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -3973692385138173LL;
	static volatile uint16_t x126 = UINT16_MAX;
	int16_t x127 = INT16_MAX;
	int32_t t31 = 231930411;

	t31 = ((x125==x126)<=(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -414440836;
	int32_t x130 = INT32_MIN;
	static volatile int32_t x131 = INT32_MIN;
	static volatile int32_t t32 = 11201;

	t32 = ((x129==x130)<=(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x134 = INT64_MIN;
	static uint32_t x135 = UINT32_MAX;
	uint8_t x136 = UINT8_MAX;

	t33 = ((x133==x134)<=(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -251400375121LL;
	int64_t x139 = -249113237589294LL;
	volatile int8_t x140 = 36;
	volatile int32_t t34 = -4;

	t34 = ((x137==x138)<=(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -1;
	int16_t x143 = -1;
	static uint16_t x144 = UINT16_MAX;
	volatile int32_t t35 = -6;

	t35 = ((x141==x142)<=(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 38;
	int16_t x147 = -336;
	static volatile uint16_t x148 = 7U;
	volatile int32_t t36 = 1;

	t36 = ((x145==x146)<=(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 7U;
	static volatile uint16_t x150 = 7917U;
	int16_t x151 = 146;
	volatile uint32_t x152 = UINT32_MAX;
	static volatile int32_t t37 = -4753;

	t37 = ((x149==x150)<=(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 8155790LLU;
	static int16_t x154 = 1;
	static volatile int16_t x155 = -1;
	volatile int32_t t38 = 3222489;

	t38 = ((x153==x154)<=(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MIN;
	int32_t x159 = -3873846;
	volatile uint16_t x160 = UINT16_MAX;

	t39 = ((x157==x158)<=(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 223U;
	int64_t x162 = 2LL;
	int16_t x164 = INT16_MAX;
	volatile int32_t t40 = -21;

	t40 = ((x161==x162)<=(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 35;
	int8_t x166 = 7;
	static int16_t x167 = -1;

	t41 = ((x165==x166)<=(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MAX;
	static uint32_t x171 = 424U;
	volatile int32_t x172 = INT32_MAX;
	int32_t t42 = -29078429;

	t42 = ((x169==x170)<=(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static int16_t x174 = INT16_MAX;
	static int64_t x175 = INT64_MIN;
	uint8_t x176 = UINT8_MAX;
	static volatile int32_t t43 = 527;

	t43 = ((x173==x174)<=(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	uint64_t x178 = 1390LLU;
	volatile uint64_t x179 = 3802593004239068LLU;
	int64_t x180 = -969338568183LL;
	volatile int32_t t44 = 1162697;

	t44 = ((x177==x178)<=(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x183 = UINT32_MAX;
	uint32_t x184 = 338043132U;
	volatile int32_t t45 = 4003;

	t45 = ((x181==x182)<=(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 69U;
	volatile int16_t x186 = INT16_MIN;
	int8_t x187 = 35;
	static int64_t x188 = INT64_MIN;

	t46 = ((x185==x186)<=(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 31U;
	volatile int8_t x191 = -53;
	int32_t x192 = -20;

	t47 = ((x189==x190)<=(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = -1;
	static int8_t x194 = -1;
	int8_t x195 = INT8_MAX;
	int16_t x196 = -1;
	int32_t t48 = 270615;

	t48 = ((x193==x194)<=(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MIN;
	volatile uint64_t x199 = 996518299033LLU;
	int64_t x200 = 5LL;

	t49 = ((x197==x198)<=(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 4679842LLU;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 658440204;

	t50 = ((x201==x202)<=(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MIN;
	volatile uint32_t x207 = 85237680U;
	static uint64_t x208 = 30950LLU;
	volatile int32_t t51 = 4966;

	t51 = ((x205==x206)<=(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x210 = 15LL;
	uint64_t x211 = 2086143549045061LLU;
	volatile uint64_t x212 = 7031871LLU;

	t52 = ((x209==x210)<=(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	int32_t t53 = -39391;

	t53 = ((x213==x214)<=(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	volatile int8_t x218 = INT8_MIN;
	volatile uint8_t x219 = 20U;
	int64_t x220 = -1LL;

	t54 = ((x217==x218)<=(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = -1;
	static int32_t x223 = -127586280;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -2508179;

	t55 = ((x221==x222)<=(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MAX;
	static int64_t x228 = -1LL;
	int32_t t56 = 307206599;

	t56 = ((x225==x226)<=(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = INT64_MIN;
	volatile int32_t t57 = 85999832;

	t57 = ((x229==x230)<=(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x235 = 356U;
	int64_t x236 = INT64_MAX;
	int32_t t58 = 467353;

	t58 = ((x233==x234)<=(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	volatile int16_t x238 = -6;
	int16_t x240 = INT16_MAX;

	t59 = ((x237==x238)<=(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = 24525440521LLU;
	static int32_t x242 = -84;
	volatile uint16_t x243 = 718U;
	static int32_t t60 = 254110;

	t60 = ((x241==x242)<=(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int8_t x247 = INT8_MAX;
	int64_t x248 = INT64_MIN;
	int32_t t61 = -24;

	t61 = ((x245==x246)<=(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 386437475LL;
	int32_t x250 = -163;
	static uint32_t x251 = 1666678452U;
	uint32_t x252 = 1016816U;
	static volatile int32_t t62 = -166909524;

	t62 = ((x249==x250)<=(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	static volatile uint16_t x254 = 2U;
	static int32_t x255 = INT32_MIN;
	int32_t t63 = -441297501;

	t63 = ((x253==x254)<=(x255==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 1692072318139092LLU;
	uint32_t x258 = 24U;
	int16_t x259 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;
	int32_t t64 = -2004;

	t64 = ((x257==x258)<=(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	volatile uint8_t x262 = 19U;
	int16_t x263 = 3799;
	uint64_t x264 = 11047349015LLU;
	int32_t t65 = -5;

	t65 = ((x261==x262)<=(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 989U;
	int8_t x266 = -1;
	static int16_t x268 = -9281;

	t66 = ((x265==x266)<=(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	static int32_t x270 = 89140;
	uint8_t x271 = UINT8_MAX;
	uint64_t x272 = 1779412LLU;

	t67 = ((x269==x270)<=(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x276 = 124LLU;
	int32_t t68 = 479;

	t68 = ((x273==x274)<=(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -1;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = 1043;

	t69 = ((x277==x278)<=(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = -1LL;
	volatile uint32_t x283 = 5206U;
	int64_t x284 = INT64_MIN;
	int32_t t70 = -1;

	t70 = ((x281==x282)<=(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 0U;
	int32_t x286 = -1;
	int8_t x287 = -1;
	int32_t x288 = 945671;
	static int32_t t71 = -222;

	t71 = ((x285==x286)<=(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile int16_t x291 = INT16_MAX;
	int64_t x292 = 324LL;
	int32_t t72 = -197966;

	t72 = ((x289==x290)<=(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	static int16_t x295 = INT16_MIN;
	static int32_t t73 = 15;

	t73 = ((x293==x294)<=(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x298 = 62U;
	static int32_t t74 = -58876;

	t74 = ((x297==x298)<=(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 1;
	uint64_t x302 = 9LLU;
	int16_t x303 = INT16_MIN;
	static volatile int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 11;

	t75 = ((x301==x302)<=(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 212U;
	uint64_t x306 = UINT64_MAX;
	uint16_t x307 = UINT16_MAX;
	int32_t x308 = INT32_MAX;
	volatile int32_t t76 = -19083747;

	t76 = ((x305==x306)<=(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	static uint64_t x310 = UINT64_MAX;
	volatile uint16_t x311 = 4019U;
	int32_t x312 = -1;

	t77 = ((x309==x310)<=(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	int64_t x315 = -56869663LL;
	uint32_t x316 = 649881U;
	volatile int32_t t78 = 1856139;

	t78 = ((x313==x314)<=(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	uint16_t x318 = 1U;
	int16_t x319 = 2203;
	uint64_t x320 = 3573964277028LLU;

	t79 = ((x317==x318)<=(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	static uint32_t x322 = UINT32_MAX;
	int64_t x323 = -1LL;
	int32_t t80 = -170277;

	t80 = ((x321==x322)<=(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	uint16_t x326 = 6799U;
	static volatile int32_t x327 = INT32_MIN;

	t81 = ((x325==x326)<=(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	int32_t x330 = INT32_MIN;
	uint8_t x331 = 0U;
	int16_t x332 = -1;

	t82 = ((x329==x330)<=(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	static int32_t x334 = -34071444;
	uint32_t x335 = 534470U;
	int64_t x336 = INT64_MAX;
	volatile int32_t t83 = -8225736;

	t83 = ((x333==x334)<=(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MAX;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t84 = -192;

	t84 = ((x337==x338)<=(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x341 = INT8_MAX;
	uint8_t x342 = 8U;
	static volatile int32_t t85 = 864851713;

	t85 = ((x341==x342)<=(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 3439520391925221958LLU;
	int32_t x346 = -214;
	int32_t x347 = INT32_MIN;

	t86 = ((x345==x346)<=(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = INT32_MIN;
	int8_t x352 = 0;
	int32_t t87 = -40;

	t87 = ((x349==x350)<=(x351==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -10;
	static int8_t x355 = 1;

	t88 = ((x353==x354)<=(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -1LL;
	int8_t x358 = 2;
	volatile int8_t x359 = INT8_MIN;
	volatile int32_t t89 = 0;

	t89 = ((x357==x358)<=(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x363 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = -91022763;

	t90 = ((x361==x362)<=(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	static uint32_t x366 = 44623858U;
	volatile int32_t x367 = INT32_MIN;
	volatile int16_t x368 = INT16_MIN;
	static int32_t t91 = -465493;

	t91 = ((x365==x366)<=(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x370 = UINT8_MAX;
	static int8_t x371 = INT8_MIN;

	t92 = ((x369==x370)<=(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 134;
	int32_t x374 = INT32_MIN;
	int8_t x376 = INT8_MAX;

	t93 = ((x373==x374)<=(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 8U;
	static int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	static int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 100204;

	t94 = ((x377==x378)<=(x379==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	static uint8_t x382 = 0U;
	int64_t x383 = 458412737437772LL;
	volatile uint32_t x384 = UINT32_MAX;
	int32_t t95 = 7435;

	t95 = ((x381==x382)<=(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x386 = INT16_MAX;
	uint8_t x387 = 2U;
	uint64_t x388 = 13056556192761LLU;
	volatile int32_t t96 = 284;

	t96 = ((x385==x386)<=(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = 23U;

	t97 = ((x389==x390)<=(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -9730;
	volatile int32_t x395 = -1;
	int32_t t98 = 89185264;

	t98 = ((x393==x394)<=(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = -21209369;
	volatile int8_t x399 = 45;
	int32_t t99 = 881134228;

	t99 = ((x397==x398)<=(x399==x400));

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

