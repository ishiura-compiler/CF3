#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 2569;
static int64_t x5 = 16429737LL;
uint64_t x7 = UINT64_MAX;
int64_t x8 = -1LL;
static int32_t t3 = -3824;
uint64_t x25 = 110715395753052831LLU;
volatile int64_t x28 = 61419393LL;
int32_t x31 = INT32_MIN;
volatile int32_t t7 = -356085784;
volatile int32_t x37 = INT32_MIN;
static int16_t x39 = -13633;
int32_t x41 = 1001285;
int32_t t10 = 659;
static int16_t x45 = -1;
uint64_t x52 = 610859804938LLU;
int8_t x54 = -2;
int32_t x55 = -5;
int32_t x60 = -1;
int32_t t14 = 242212882;
int32_t t17 = 1609201;
int64_t x90 = 538201778676054LL;
uint16_t x99 = UINT16_MAX;
static int32_t x103 = -1;
int16_t x105 = 2589;
int64_t x106 = 1590LL;
uint32_t x114 = UINT32_MAX;
uint32_t x115 = UINT32_MAX;
static int32_t t29 = 374344811;
uint64_t x121 = 83980LLU;
uint32_t x122 = 74159U;
uint8_t x123 = UINT8_MAX;
int32_t t30 = 54;
volatile int64_t x126 = INT64_MIN;
volatile int8_t x127 = -1;
int8_t x130 = -1;
uint64_t x133 = 35141698501932LLU;
uint32_t x134 = 3528U;
int16_t x135 = INT16_MIN;
static volatile int32_t t34 = 97667;
static volatile int32_t x141 = INT32_MIN;
uint16_t x145 = UINT16_MAX;
uint32_t x153 = 28U;
uint16_t x156 = UINT16_MAX;
volatile int32_t t39 = -32491854;
int16_t x165 = INT16_MIN;
int8_t x185 = 7;
static int32_t t46 = 319459;
uint16_t x190 = 3U;
int32_t t47 = 3677962;
int32_t x195 = INT32_MIN;
uint32_t x196 = UINT32_MAX;
static int32_t x197 = -1;
uint64_t x200 = UINT64_MAX;
int32_t x202 = -14828990;
int8_t x204 = INT8_MIN;
int64_t x205 = 32301626153LL;
int64_t x210 = 1570LL;
static volatile int8_t x217 = 9;
int64_t x223 = INT64_MAX;
int64_t x224 = -3756446354375090LL;
int64_t x230 = 85497LL;
volatile int32_t t59 = 2;
int32_t x243 = INT32_MIN;
volatile int32_t x244 = INT32_MIN;
volatile uint64_t x245 = UINT64_MAX;
int32_t x247 = INT32_MIN;
int32_t t63 = -967241475;
int64_t x260 = INT64_MIN;
int32_t t64 = 856093780;
int16_t x262 = 1;
uint16_t x263 = UINT16_MAX;
int32_t x266 = -89;
static int32_t t66 = -1;
uint16_t x273 = 12888U;
uint16_t x274 = 906U;
int64_t x277 = INT64_MIN;
static int16_t x282 = 469;
static int64_t x283 = -1LL;
volatile int32_t t70 = -5;
volatile int32_t x288 = -9795839;
int16_t x295 = 0;
uint8_t x298 = 0U;
int16_t x300 = 6;
volatile int32_t t74 = -377316;
int32_t x303 = 192;
volatile int32_t t76 = -3092;
static int16_t x310 = INT16_MIN;
static int8_t x311 = 9;
uint8_t x314 = 23U;
volatile int32_t t78 = 1784725;
volatile int16_t x317 = INT16_MIN;
int64_t x319 = INT64_MIN;
int64_t x324 = INT64_MIN;
uint32_t x327 = UINT32_MAX;
volatile int16_t x329 = 72;
int8_t x342 = 1;
int32_t t86 = -3;
int16_t x351 = INT16_MIN;
int8_t x353 = -1;
uint16_t x354 = UINT16_MAX;
volatile int16_t x358 = INT16_MIN;
int16_t x359 = INT16_MIN;
uint8_t x360 = 2U;
int16_t x362 = INT16_MIN;
int32_t t90 = 11;
int32_t x366 = 54;
static volatile int32_t x375 = INT32_MIN;
volatile int64_t x376 = -385920195570354686LL;
int32_t t93 = 171;
static int32_t x380 = INT32_MAX;
int16_t x383 = 1;
volatile int64_t x384 = INT64_MIN;
int32_t t95 = 62;
int64_t x387 = INT64_MIN;
int8_t x392 = 9;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int16_t x2 = INT16_MIN;
	static int32_t x3 = INT32_MIN;
	int64_t x4 = 15877382639269LL;

	t0 = ((x1==x2)<(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	static int32_t t1 = -12;

	t1 = ((x5==x6)<(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MAX;
	int8_t x11 = 1;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -120394;

	t2 = ((x9==x10)<(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 4148U;
	int32_t x14 = INT32_MIN;
	uint8_t x15 = 1U;
	uint32_t x16 = UINT32_MAX;

	t3 = ((x13==x14)<(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 468U;
	volatile int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	int64_t x20 = -36228045LL;
	int32_t t4 = 6764349;

	t4 = ((x17==x18)<(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 28;
	uint32_t x22 = 9700U;
	int8_t x23 = -1;
	volatile int64_t x24 = -1LL;
	int32_t t5 = 376;

	t5 = ((x21==x22)<(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 116U;
	uint32_t x27 = UINT32_MAX;
	volatile int32_t t6 = -265254;

	t6 = ((x25==x26)<(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static uint8_t x30 = 1U;
	static uint8_t x32 = 4U;

	t7 = ((x29==x30)<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 2U;
	volatile int8_t x34 = -1;
	int32_t x35 = INT32_MIN;
	volatile int16_t x36 = -1;
	static int32_t t8 = -821621092;

	t8 = ((x33==x34)<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	uint32_t x40 = 1380632958U;
	int32_t t9 = -136301;

	t9 = ((x37==x38)<(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = -1;
	volatile uint8_t x44 = UINT8_MAX;

	t10 = ((x41==x42)<(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x46 = UINT16_MAX;
	uint64_t x47 = 3301035155258904LLU;
	volatile int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -11886;

	t11 = ((x45==x46)<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 46U;
	volatile int8_t x50 = -4;
	int32_t x51 = INT32_MAX;
	volatile int32_t t12 = 28978;

	t12 = ((x49==x50)<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MAX;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 979536089;

	t13 = ((x53==x54)<(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = -1LL;
	int64_t x58 = -1LL;
	uint32_t x59 = 1777U;

	t14 = ((x57==x58)<(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -4928;
	uint64_t x62 = 0LLU;
	uint8_t x63 = 44U;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 173;

	t15 = ((x61==x62)<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MAX;
	int32_t t16 = 3363419;

	t16 = ((x65==x66)<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint8_t x70 = 22U;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MIN;

	t17 = ((x69==x70)<(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 13U;
	volatile uint8_t x74 = 27U;
	uint16_t x75 = 1959U;
	int8_t x76 = -1;
	volatile int32_t t18 = -2951;

	t18 = ((x73==x74)<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 522;
	volatile uint32_t x78 = 823400175U;
	int16_t x79 = INT16_MIN;
	volatile int16_t x80 = 1003;
	volatile int32_t t19 = 104205;

	t19 = ((x77==x78)<(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1U;
	uint64_t x82 = UINT64_MAX;
	volatile int16_t x83 = INT16_MAX;
	uint64_t x84 = 99LLU;
	int32_t t20 = -728;

	t20 = ((x81==x82)<(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	uint16_t x87 = 16701U;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = -156128;

	t21 = ((x85==x86)<(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = UINT8_MAX;
	int64_t x91 = 86168257799960895LL;
	uint32_t x92 = 1981072U;
	volatile int32_t t22 = 41;

	t22 = ((x89==x90)<(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MAX;
	volatile int16_t x96 = 1996;
	int32_t t23 = 269580463;

	t23 = ((x93==x94)<(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -69751081092175884LL;
	static volatile int8_t x98 = INT8_MAX;
	int16_t x100 = 14926;
	int32_t t24 = 428;

	t24 = ((x97==x98)<(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	int32_t x102 = INT32_MIN;
	int8_t x104 = INT8_MIN;
	int32_t t25 = 51211;

	t25 = ((x101==x102)<(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x107 = UINT64_MAX;
	uint32_t x108 = 2458032U;
	int32_t t26 = 168;

	t26 = ((x105==x106)<(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 865015U;
	int32_t x110 = INT32_MIN;
	int32_t x111 = 44537;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 91702966;

	t27 = ((x109==x110)<(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int64_t x116 = 12685087646LL;
	volatile int32_t t28 = -11628121;

	t28 = ((x113==x114)<(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = 403U;
	int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	static uint64_t x120 = 33928LLU;

	t29 = ((x117==x118)<(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x124 = INT16_MAX;

	t30 = ((x121==x122)<(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x125 = UINT8_MAX;
	int8_t x128 = INT8_MAX;
	static volatile int32_t t31 = 478966;

	t31 = ((x125==x126)<(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	volatile int64_t x131 = INT64_MIN;
	uint8_t x132 = 1U;
	volatile int32_t t32 = 101;

	t32 = ((x129==x130)<(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x136 = -28;
	volatile int32_t t33 = -10090;

	t33 = ((x133==x134)<(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 501247580U;
	volatile int32_t x138 = -1;
	int32_t x139 = -251015;
	uint8_t x140 = 27U;

	t34 = ((x137==x138)<(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t35 = -1;

	t35 = ((x141==x142)<(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MIN;
	uint64_t x148 = 16105448001LLU;
	static int32_t t36 = 1004570;

	t36 = ((x145==x146)<(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 2U;
	int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 90369;

	t37 = ((x149==x150)<(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 11;
	volatile int32_t x155 = INT32_MIN;
	int32_t t38 = -791746939;

	t38 = ((x153==x154)<(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = 408;
	int64_t x160 = INT64_MAX;

	t39 = ((x157==x158)<(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -1;
	int16_t x162 = INT16_MAX;
	static int32_t x163 = INT32_MIN;
	int32_t x164 = 53512280;
	static volatile int32_t t40 = -7538;

	t40 = ((x161==x162)<(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = 978581631;
	int32_t x167 = 110275699;
	static uint16_t x168 = 183U;
	volatile int32_t t41 = -841;

	t41 = ((x165==x166)<(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = -130322;
	volatile int8_t x170 = INT8_MIN;
	uint32_t x171 = 0U;
	int8_t x172 = -3;
	int32_t t42 = -1027781429;

	t42 = ((x169==x170)<(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = INT32_MAX;
	volatile int64_t x175 = INT64_MAX;
	static int8_t x176 = INT8_MIN;
	static volatile int32_t t43 = 18068717;

	t43 = ((x173==x174)<(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -114;
	uint8_t x178 = 7U;
	static int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MAX;
	static int32_t t44 = -24306;

	t44 = ((x177==x178)<(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = -1LL;
	static int64_t x183 = -1LL;
	volatile int16_t x184 = -1;
	volatile int32_t t45 = 111186;

	t45 = ((x181==x182)<(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = 20494785227805LL;
	int16_t x187 = -411;
	int8_t x188 = INT8_MIN;

	t46 = ((x185==x186)<(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int8_t x191 = -27;
	volatile int16_t x192 = INT16_MIN;

	t47 = ((x189==x190)<(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	static int16_t x194 = 6;
	int32_t t48 = 44001719;

	t48 = ((x193==x194)<(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x198 = UINT16_MAX;
	int64_t x199 = -51967LL;
	int32_t t49 = 5084;

	t49 = ((x197==x198)<(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	uint32_t x203 = 4862U;
	static int32_t t50 = 214887836;

	t50 = ((x201==x202)<(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MIN;
	uint8_t x207 = 0U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 1;

	t51 = ((x205==x206)<(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 9U;
	static int64_t x211 = INT64_MAX;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = -78715;

	t52 = ((x209==x210)<(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = -1;
	int32_t x214 = INT32_MAX;
	volatile int64_t x215 = -347115211LL;
	static uint16_t x216 = UINT16_MAX;
	int32_t t53 = 3672;

	t53 = ((x213==x214)<(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x218 = -13;
	static int8_t x219 = INT8_MAX;
	uint16_t x220 = 86U;
	volatile int32_t t54 = 1;

	t54 = ((x217==x218)<(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MAX;
	volatile int32_t t55 = -60;

	t55 = ((x221==x222)<(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	volatile uint16_t x226 = 115U;
	static uint32_t x227 = 14U;
	int64_t x228 = -1LL;
	volatile int32_t t56 = -867;

	t56 = ((x225==x226)<(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 4885179LLU;
	uint32_t x231 = 3U;
	static uint8_t x232 = UINT8_MAX;
	volatile int32_t t57 = 158362;

	t57 = ((x229==x230)<(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = 3;
	volatile int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	int8_t x236 = 5;
	int32_t t58 = -1;

	t58 = ((x233==x234)<(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = -33491169474129LL;
	int64_t x238 = INT64_MAX;
	static int16_t x239 = INT16_MIN;
	volatile uint8_t x240 = 55U;

	t59 = ((x237==x238)<(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MIN;
	int32_t t60 = -475;

	t60 = ((x241==x242)<(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = UINT16_MAX;
	static volatile int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 1756339;

	t61 = ((x245==x246)<(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	uint64_t x250 = 513427696483LLU;
	int64_t x251 = INT64_MIN;
	static int16_t x252 = -37;
	int32_t t62 = -11234;

	t62 = ((x249==x250)<(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	int8_t x254 = INT8_MAX;
	int64_t x255 = -50591010073509104LL;
	uint8_t x256 = 90U;

	t63 = ((x253==x254)<(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 91745180450LL;
	uint8_t x258 = UINT8_MAX;
	uint64_t x259 = UINT64_MAX;

	t64 = ((x257==x258)<(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	uint32_t x264 = 618288U;
	volatile int32_t t65 = -164605605;

	t65 = ((x261==x262)<(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MAX;

	t66 = ((x265==x266)<(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 26559U;
	volatile int64_t x270 = 877059389560926615LL;
	static volatile uint64_t x271 = 25732236LLU;
	uint64_t x272 = 1717992485475916LLU;
	volatile int32_t t67 = -647840;

	t67 = ((x269==x270)<(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x275 = 0U;
	int32_t x276 = 3226678;
	volatile int32_t t68 = 1;

	t68 = ((x273==x274)<(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x278 = INT64_MIN;
	uint16_t x279 = UINT16_MAX;
	uint16_t x280 = 54U;
	volatile int32_t t69 = -9;

	t69 = ((x277==x278)<(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 1202695485LLU;
	uint16_t x284 = 3312U;

	t70 = ((x281==x282)<(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -1;
	int8_t x286 = 8;
	int32_t x287 = INT32_MIN;
	volatile int32_t t71 = 2475;

	t71 = ((x285==x286)<(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = 42528565U;
	int16_t x290 = INT16_MIN;
	uint32_t x291 = 34326140U;
	int8_t x292 = INT8_MAX;
	int32_t t72 = 4;

	t72 = ((x289==x290)<(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = 27349;
	uint16_t x294 = UINT16_MAX;
	uint32_t x296 = 47U;
	volatile int32_t t73 = -37252037;

	t73 = ((x293==x294)<(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int16_t x299 = -3232;

	t74 = ((x297==x298)<(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	int16_t x302 = INT16_MAX;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = -27749180;

	t75 = ((x301==x302)<(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	volatile int16_t x306 = -288;
	static uint8_t x307 = 21U;
	int32_t x308 = 299317;

	t76 = ((x305==x306)<(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = 21U;
	int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 1;

	t77 = ((x309==x310)<(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	static int16_t x316 = -1;

	t78 = ((x313==x314)<(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = 2U;
	static uint16_t x320 = 683U;
	static int32_t t79 = -12990;

	t79 = ((x317==x318)<(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x322 = UINT8_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t t80 = -1;

	t80 = ((x321==x322)<(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = 1663262;
	int32_t x326 = INT32_MAX;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = 24631646;

	t81 = ((x325==x326)<(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = 5U;
	int64_t x331 = 49739436627785085LL;
	volatile uint64_t x332 = UINT64_MAX;
	volatile int32_t t82 = 128;

	t82 = ((x329==x330)<(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x333 = 63858U;
	static int64_t x334 = INT64_MIN;
	volatile uint16_t x335 = UINT16_MAX;
	int16_t x336 = -11095;
	int32_t t83 = -2515;

	t83 = ((x333==x334)<(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 56U;
	static volatile int32_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	static int8_t x340 = INT8_MIN;
	int32_t t84 = 1375;

	t84 = ((x337==x338)<(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -922;
	volatile uint16_t x343 = 57U;
	volatile int64_t x344 = 164521714LL;
	int32_t t85 = 1179;

	t85 = ((x341==x342)<(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	int16_t x346 = 1079;
	uint32_t x347 = 200U;
	int16_t x348 = -25;

	t86 = ((x345==x346)<(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 85U;
	int8_t x350 = INT8_MIN;
	uint64_t x352 = 30667691302039791LLU;
	int32_t t87 = -243581749;

	t87 = ((x349==x350)<(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x355 = -1;
	int32_t x356 = INT32_MIN;
	int32_t t88 = -7841152;

	t88 = ((x353==x354)<(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int32_t t89 = -1;

	t89 = ((x357==x358)<(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	static volatile uint32_t x363 = 3689031U;
	static uint64_t x364 = UINT64_MAX;

	t90 = ((x361==x362)<(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	uint64_t x367 = 15777137614566LLU;
	int8_t x368 = 9;
	int32_t t91 = 4;

	t91 = ((x365==x366)<(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -1;
	int16_t x370 = INT16_MIN;
	static int64_t x371 = INT64_MIN;
	static int32_t x372 = -1;
	volatile int32_t t92 = -13;

	t92 = ((x369==x370)<(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 414731U;
	volatile int64_t x374 = INT64_MIN;

	t93 = ((x373==x374)<(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 126;
	uint16_t x378 = 12U;
	int8_t x379 = 7;
	volatile int32_t t94 = 14578714;

	t94 = ((x377==x378)<(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	uint64_t x382 = 991958LLU;

	t95 = ((x381==x382)<(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	static volatile int32_t x386 = INT32_MAX;
	static int16_t x388 = -813;
	volatile int32_t t96 = 78;

	t96 = ((x385==x386)<(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = -1;
	int16_t x391 = INT16_MIN;
	volatile int32_t t97 = -12;

	t97 = ((x389==x390)<(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = 26;
	int32_t x395 = INT32_MAX;
	uint16_t x396 = 189U;
	int32_t t98 = 4418;

	t98 = ((x393==x394)<(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	static uint64_t x398 = UINT64_MAX;
	int16_t x399 = INT16_MAX;
	int32_t x400 = -1;
	static volatile int32_t t99 = -1;

	t99 = ((x397==x398)<(x399==x400));

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

