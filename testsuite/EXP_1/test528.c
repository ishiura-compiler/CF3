#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = 42621893902LL;
volatile uint64_t x2 = UINT64_MAX;
volatile int64_t x4 = INT64_MAX;
volatile int8_t x11 = INT8_MIN;
static uint8_t x18 = UINT8_MAX;
int8_t x20 = -2;
int32_t t8 = -238654;
int16_t x48 = INT16_MIN;
uint32_t x49 = 31080U;
int64_t x50 = INT64_MIN;
uint32_t x54 = UINT32_MAX;
int8_t x55 = -2;
int32_t x61 = 0;
int16_t x75 = 233;
uint16_t x76 = UINT16_MAX;
volatile int32_t t15 = -94804934;
static uint32_t x95 = 80804U;
volatile int8_t x101 = 2;
int32_t t20 = -570284;
volatile int8_t x105 = 2;
uint64_t x106 = 557922929081051LLU;
int32_t x115 = -1;
volatile int64_t x126 = -1LL;
volatile int32_t t25 = 3;
volatile uint16_t x129 = 6063U;
static uint16_t x140 = 1U;
int16_t x145 = -1;
static int64_t x149 = INT64_MIN;
volatile int8_t x150 = 15;
uint32_t x152 = 6U;
static volatile uint32_t x157 = 102594642U;
int32_t t32 = 1827709;
uint32_t x166 = UINT32_MAX;
volatile int32_t x168 = -7;
static int64_t x169 = 53711833LL;
int64_t x173 = 57381608384674LL;
volatile uint16_t x175 = UINT16_MAX;
static volatile int32_t x185 = -1;
static uint16_t x191 = UINT16_MAX;
volatile int32_t t39 = -323;
uint64_t x196 = 56LLU;
volatile uint8_t x200 = UINT8_MAX;
volatile uint32_t x212 = 478U;
volatile int64_t x213 = -1LL;
uint8_t x216 = 15U;
uint64_t x225 = 140896937565399304LLU;
volatile uint8_t x226 = 21U;
static int16_t x232 = INT16_MIN;
uint32_t x234 = 91477079U;
uint32_t x239 = UINT32_MAX;
uint32_t x241 = UINT32_MAX;
int32_t t53 = 1;
static int32_t x256 = INT32_MIN;
int64_t x259 = -855LL;
uint64_t x266 = 5415218076737575785LLU;
uint32_t x268 = 4876280U;
int32_t x273 = -100589949;
int32_t x277 = -1;
static int32_t t60 = 10178338;
uint32_t x281 = UINT32_MAX;
uint64_t x282 = 265LLU;
static uint64_t x284 = 472LLU;
uint16_t x287 = UINT16_MAX;
int32_t x288 = INT32_MIN;
static int16_t x290 = 4;
volatile uint32_t x294 = 131671U;
static int32_t t64 = 29024185;
int32_t t66 = -14273985;
uint64_t x309 = UINT64_MAX;
int8_t x331 = INT8_MAX;
int32_t t71 = -433085;
static int32_t x337 = -1;
static int32_t t74 = -1;
static int64_t x349 = 158LL;
int16_t x351 = 121;
int32_t x352 = -14;
static volatile int16_t x353 = 2;
int8_t x356 = 0;
uint32_t x362 = UINT32_MAX;
int32_t t79 = 4108986;
int64_t x371 = INT64_MIN;
int8_t x376 = INT8_MIN;
uint16_t x383 = 15958U;
int32_t x391 = INT32_MAX;
volatile int16_t x395 = 822;
volatile int8_t x403 = -31;
volatile int32_t t88 = 378032;
int32_t x406 = INT32_MIN;
int8_t x409 = -1;
int8_t x413 = -45;
int64_t x417 = INT64_MIN;
int64_t x418 = INT64_MIN;
int64_t x421 = INT64_MAX;
volatile int16_t x431 = INT16_MIN;
int16_t x437 = -7715;
int8_t x448 = INT8_MIN;


void f0(void) {
	volatile int16_t x3 = INT16_MIN;
	int32_t t0 = -7;

	t0 = (((x1/x2)-x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 988U;
	static int16_t x6 = 34;
	int64_t x7 = -209209349558LL;
	static uint64_t x8 = 7674404544998LLU;
	static int32_t t1 = -666657;

	t1 = (((x5/x6)-x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = 95;
	uint64_t x12 = 150LLU;
	int32_t t2 = -461015405;

	t2 = (((x9/x10)-x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static volatile uint16_t x14 = 2811U;
	static int64_t x15 = -1LL;
	int32_t x16 = -1567565;
	static volatile int32_t t3 = -66990908;

	t3 = (((x13/x14)-x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -140558152167618741LL;
	uint16_t x19 = 1774U;
	volatile int32_t t4 = 374508;

	t4 = (((x17/x18)-x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 7696772378698LL;
	uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	int16_t x24 = -1;
	volatile int32_t t5 = -659;

	t5 = (((x21/x22)-x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 1339;
	uint64_t x26 = 110949867889219LLU;
	uint16_t x27 = 250U;
	int8_t x28 = -1;
	int32_t t6 = -53261399;

	t6 = (((x25/x26)-x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static int8_t x30 = INT8_MAX;
	uint16_t x31 = 1U;
	static int16_t x32 = INT16_MAX;
	int32_t t7 = -477;

	t7 = (((x29/x30)-x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	int64_t x35 = INT64_MAX;
	int8_t x36 = INT8_MIN;

	t8 = (((x33/x34)-x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	int64_t x38 = INT64_MIN;
	static volatile int8_t x39 = INT8_MAX;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = 748;

	t9 = (((x37/x38)-x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = -1;
	int32_t t10 = -548034;

	t10 = (((x45/x46)-x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MAX;
	int32_t t11 = 11;

	t11 = (((x49/x50)-x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MIN;
	uint32_t x56 = 314115106U;
	volatile int32_t t12 = 392410562;

	t12 = (((x53/x54)-x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x62 = -1;
	uint64_t x63 = 8577262825075875973LLU;
	int64_t x64 = INT64_MIN;
	static int32_t t13 = -57973;

	t13 = (((x61/x62)-x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x65 = UINT32_MAX;
	int32_t x66 = -1;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MAX;
	volatile int32_t t14 = -128714724;

	t14 = (((x65/x66)-x67)==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = 0;
	static int8_t x74 = -1;

	t15 = (((x73/x74)-x75)==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MIN;
	static volatile int16_t x82 = 3081;
	int32_t x83 = 2;
	int8_t x84 = -20;
	volatile int32_t t16 = -14067;

	t16 = (((x81/x82)-x83)==x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	uint32_t x87 = 1544U;
	uint64_t x88 = 620LLU;
	volatile int32_t t17 = 41;

	t17 = (((x85/x86)-x87)==x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MAX;
	volatile uint64_t x94 = 4064960625LLU;
	uint8_t x96 = 23U;
	volatile int32_t t18 = -799951509;

	t18 = (((x93/x94)-x95)==x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = 0U;
	static uint64_t x98 = 225LLU;
	volatile int64_t x99 = -168222LL;
	static int32_t x100 = INT32_MAX;
	int32_t t19 = -50568019;

	t19 = (((x97/x98)-x99)==x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x102 = INT16_MIN;
	static int64_t x103 = -1LL;
	int8_t x104 = INT8_MAX;

	t20 = (((x101/x102)-x103)==x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t21 = -3;

	t21 = (((x105/x106)-x107)==x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = UINT64_MAX;
	int16_t x114 = INT16_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t22 = -455772934;

	t22 = (((x113/x114)-x115)==x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = -1;
	uint32_t x118 = 9133876U;
	int16_t x119 = -1;
	uint8_t x120 = 72U;
	int32_t t23 = 0;

	t23 = (((x117/x118)-x119)==x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	volatile uint32_t x123 = UINT32_MAX;
	int16_t x124 = 11211;
	volatile int32_t t24 = -3;

	t24 = (((x121/x122)-x123)==x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x125 = -5093676010213LL;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -1;

	t25 = (((x125/x126)-x127)==x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x130 = 13U;
	int8_t x131 = INT8_MAX;
	volatile int64_t x132 = INT64_MAX;
	volatile int32_t t26 = 0;

	t26 = (((x129/x130)-x131)==x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = INT16_MAX;
	volatile uint32_t x139 = 239863U;
	static volatile int32_t t27 = 108;

	t27 = (((x137/x138)-x139)==x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x141 = 78112055LL;
	int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	uint64_t x144 = 92245993111687215LLU;
	volatile int32_t t28 = -96;

	t28 = (((x141/x142)-x143)==x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x146 = -4751;
	int16_t x147 = -1;
	volatile uint8_t x148 = 1U;
	static int32_t t29 = 0;

	t29 = (((x145/x146)-x147)==x148);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x151 = INT32_MAX;
	volatile int32_t t30 = 13;

	t30 = (((x149/x150)-x151)==x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x158 = INT16_MAX;
	int64_t x159 = -1LL;
	static volatile uint16_t x160 = 0U;
	volatile int32_t t31 = 7085;

	t31 = (((x157/x158)-x159)==x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = 51;
	uint8_t x162 = UINT8_MAX;
	volatile int64_t x163 = -699948LL;
	static volatile int16_t x164 = 112;

	t32 = (((x161/x162)-x163)==x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int32_t x167 = INT32_MAX;
	volatile int32_t t33 = 1;

	t33 = (((x165/x166)-x167)==x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x170 = UINT16_MAX;
	volatile int32_t x171 = INT32_MAX;
	uint8_t x172 = 117U;
	volatile int32_t t34 = 15320;

	t34 = (((x169/x170)-x171)==x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x174 = -1;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t35 = -808408617;

	t35 = (((x173/x174)-x175)==x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = -20;
	int32_t x178 = INT32_MIN;
	static uint64_t x179 = 1200938347033LLU;
	int32_t x180 = INT32_MIN;
	volatile int32_t t36 = -19;

	t36 = (((x177/x178)-x179)==x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x181 = 3;
	uint16_t x182 = 191U;
	int32_t x183 = -1;
	uint8_t x184 = 3U;
	static int32_t t37 = 248;

	t37 = (((x181/x182)-x183)==x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x186 = 25;
	int64_t x187 = -1204LL;
	static int64_t x188 = 806216LL;
	int32_t t38 = 5;

	t38 = (((x185/x186)-x187)==x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x189 = INT16_MIN;
	volatile uint16_t x190 = 397U;
	int64_t x192 = 30864LL;

	t39 = (((x189/x190)-x191)==x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x193 = INT8_MIN;
	uint32_t x194 = 8536U;
	static uint8_t x195 = UINT8_MAX;
	static volatile int32_t t40 = -90387802;

	t40 = (((x193/x194)-x195)==x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x198 = -1LL;
	int16_t x199 = INT16_MIN;
	int32_t t41 = -505721054;

	t41 = (((x197/x198)-x199)==x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MAX;
	static volatile int32_t x202 = INT32_MIN;
	uint8_t x203 = 34U;
	uint32_t x204 = UINT32_MAX;
	int32_t t42 = 6;

	t42 = (((x201/x202)-x203)==x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = 227321620708055LL;
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	volatile int32_t t43 = 33588;

	t43 = (((x205/x206)-x207)==x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x209 = 0U;
	static volatile int8_t x210 = -1;
	int16_t x211 = 3512;
	int32_t t44 = -27;

	t44 = (((x209/x210)-x211)==x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x214 = -14928LL;
	static volatile int16_t x215 = INT16_MIN;
	volatile int32_t t45 = 51700169;

	t45 = (((x213/x214)-x215)==x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x217 = INT32_MAX;
	static uint64_t x218 = 74194829890LLU;
	int32_t x219 = INT32_MAX;
	int64_t x220 = INT64_MAX;
	volatile int32_t t46 = 44065;

	t46 = (((x217/x218)-x219)==x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x221 = -1;
	static int16_t x222 = INT16_MIN;
	static uint64_t x223 = UINT64_MAX;
	int8_t x224 = 0;
	volatile int32_t t47 = -29;

	t47 = (((x221/x222)-x223)==x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x227 = UINT16_MAX;
	uint16_t x228 = 14034U;
	volatile int32_t t48 = 76111;

	t48 = (((x225/x226)-x227)==x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = -1140878280446519LL;
	int32_t x230 = -1;
	int16_t x231 = INT16_MAX;
	int32_t t49 = 799714064;

	t49 = (((x229/x230)-x231)==x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x233 = 3U;
	volatile int32_t x235 = -1;
	volatile int8_t x236 = -1;
	volatile int32_t t50 = 31142260;

	t50 = (((x233/x234)-x235)==x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = 23;
	int8_t x238 = -37;
	uint8_t x240 = 12U;
	int32_t t51 = -111;

	t51 = (((x237/x238)-x239)==x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x242 = INT16_MIN;
	int8_t x243 = 1;
	uint32_t x244 = UINT32_MAX;
	int32_t t52 = -6503777;

	t52 = (((x241/x242)-x243)==x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x245 = 0;
	uint16_t x246 = UINT16_MAX;
	uint8_t x247 = 121U;
	int16_t x248 = INT16_MIN;

	t53 = (((x245/x246)-x247)==x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x249 = 0U;
	int32_t x250 = INT32_MAX;
	uint32_t x251 = 17682509U;
	uint64_t x252 = 27875235628026LLU;
	int32_t t54 = 5;

	t54 = (((x249/x250)-x251)==x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -1LL;
	volatile uint8_t x254 = UINT8_MAX;
	static volatile uint64_t x255 = UINT64_MAX;
	static int32_t t55 = 1789;

	t55 = (((x253/x254)-x255)==x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = 0;
	int8_t x258 = INT8_MIN;
	volatile uint16_t x260 = 1U;
	int32_t t56 = -164471;

	t56 = (((x257/x258)-x259)==x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = 33829242249471LL;
	int32_t x262 = INT32_MAX;
	int64_t x263 = INT64_MAX;
	int32_t x264 = -1;
	int32_t t57 = 2249;

	t57 = (((x261/x262)-x263)==x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x265 = 8;
	int32_t x267 = INT32_MIN;
	volatile int32_t t58 = -4751697;

	t58 = (((x265/x266)-x267)==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x274 = -3LL;
	int32_t x275 = -1;
	int64_t x276 = -1LL;
	int32_t t59 = -1;

	t59 = (((x273/x274)-x275)==x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x278 = INT16_MAX;
	int64_t x279 = -13500259258474455LL;
	uint64_t x280 = UINT64_MAX;

	t60 = (((x277/x278)-x279)==x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x283 = INT16_MIN;
	volatile int32_t t61 = 3;

	t61 = (((x281/x282)-x283)==x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = 404423848U;
	int16_t x286 = INT16_MIN;
	int32_t t62 = 132612;

	t62 = (((x285/x286)-x287)==x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = INT32_MIN;
	int8_t x291 = 0;
	int8_t x292 = INT8_MIN;
	int32_t t63 = -602;

	t63 = (((x289/x290)-x291)==x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = 0;
	int16_t x295 = -1;
	int16_t x296 = -38;

	t64 = (((x293/x294)-x295)==x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MAX;
	uint32_t x299 = 465385U;
	static volatile uint8_t x300 = 0U;
	static int32_t t65 = 21;

	t65 = (((x297/x298)-x299)==x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = -1LL;
	volatile int32_t x306 = 3;
	uint8_t x307 = 13U;
	int16_t x308 = INT16_MAX;

	t66 = (((x305/x306)-x307)==x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x310 = -1;
	int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MIN;
	int32_t t67 = 261163;

	t67 = (((x309/x310)-x311)==x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = -1;
	static int8_t x314 = -4;
	volatile int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t68 = 11669;

	t68 = (((x313/x314)-x315)==x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int64_t x322 = 13021143LL;
	uint16_t x323 = 3085U;
	volatile int64_t x324 = 71LL;
	volatile int32_t t69 = 87;

	t69 = (((x321/x322)-x323)==x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x325 = 2U;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1;
	static volatile int32_t x328 = -50842066;
	int32_t t70 = -2060914;

	t70 = (((x325/x326)-x327)==x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x329 = 6685U;
	volatile uint8_t x330 = UINT8_MAX;
	uint16_t x332 = 11843U;

	t71 = (((x329/x330)-x331)==x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x338 = INT64_MIN;
	int64_t x339 = 5468477890393112LL;
	int32_t x340 = 3;
	static volatile int32_t t72 = 826;

	t72 = (((x337/x338)-x339)==x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 6U;
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MIN;
	static int16_t x344 = -1;
	int32_t t73 = 4552499;

	t73 = (((x341/x342)-x343)==x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = INT8_MIN;
	volatile int16_t x346 = 12;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = 33U;

	t74 = (((x345/x346)-x347)==x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x350 = INT64_MAX;
	static int32_t t75 = 462;

	t75 = (((x349/x350)-x351)==x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x354 = 7009;
	static int16_t x355 = INT16_MAX;
	volatile int32_t t76 = -1195739;

	t76 = (((x353/x354)-x355)==x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	int64_t x360 = -1LL;
	int32_t t77 = -1;

	t77 = (((x357/x358)-x359)==x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x361 = -6150;
	volatile int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MAX;
	int32_t t78 = -916;

	t78 = (((x361/x362)-x363)==x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = 80U;
	static uint16_t x367 = UINT16_MAX;
	int8_t x368 = 27;

	t79 = (((x365/x366)-x367)==x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = INT64_MAX;
	int32_t x370 = -1;
	static uint64_t x372 = 10079915550973770LLU;
	static volatile int32_t t80 = -15861356;

	t80 = (((x369/x370)-x371)==x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MAX;
	uint8_t x374 = 70U;
	static int32_t x375 = -1;
	static int32_t t81 = -23429204;

	t81 = (((x373/x374)-x375)==x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x377 = 236U;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = UINT8_MAX;
	int32_t t82 = -496;

	t82 = (((x377/x378)-x379)==x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = 3492;
	static volatile uint8_t x382 = 112U;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t83 = 519542;

	t83 = (((x381/x382)-x383)==x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = -26;
	uint8_t x386 = UINT8_MAX;
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = -7575;
	volatile int32_t t84 = 24;

	t84 = (((x385/x386)-x387)==x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	static int8_t x392 = -1;
	volatile int32_t t85 = -17598;

	t85 = (((x389/x390)-x391)==x392);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t86 = 175840262;

	t86 = (((x393/x394)-x395)==x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = -1;
	static int32_t x398 = INT32_MIN;
	volatile int16_t x399 = INT16_MIN;
	uint16_t x400 = 24101U;
	int32_t t87 = -1;

	t87 = (((x397/x398)-x399)==x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = 21U;
	uint32_t x402 = 125681U;
	volatile int64_t x404 = -244915554LL;

	t88 = (((x401/x402)-x403)==x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x405 = 108;
	volatile uint8_t x407 = UINT8_MAX;
	volatile int64_t x408 = INT64_MIN;
	volatile int32_t t89 = -87176377;

	t89 = (((x405/x406)-x407)==x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x410 = INT64_MAX;
	static int64_t x411 = -1LL;
	static int32_t x412 = INT32_MIN;
	volatile int32_t t90 = 122897350;

	t90 = (((x409/x410)-x411)==x412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x414 = 10U;
	int64_t x415 = INT64_MIN;
	int8_t x416 = -5;
	volatile int32_t t91 = -468;

	t91 = (((x413/x414)-x415)==x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x419 = 118LLU;
	volatile int64_t x420 = INT64_MAX;
	int32_t t92 = -11948154;

	t92 = (((x417/x418)-x419)==x420);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x422 = UINT64_MAX;
	static uint32_t x423 = UINT32_MAX;
	int8_t x424 = -5;
	volatile int32_t t93 = 11;

	t93 = (((x421/x422)-x423)==x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = INT16_MAX;
	int32_t x426 = INT32_MAX;
	static volatile int64_t x427 = -1LL;
	uint8_t x428 = 31U;
	int32_t t94 = 40427;

	t94 = (((x425/x426)-x427)==x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 1932217051182337900LLU;
	int64_t x430 = INT64_MIN;
	uint32_t x432 = 467670516U;
	int32_t t95 = 56;

	t95 = (((x429/x430)-x431)==x432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x433 = 74;
	static volatile uint32_t x434 = 1657U;
	int8_t x435 = INT8_MIN;
	int64_t x436 = -1LL;
	volatile int32_t t96 = -5;

	t96 = (((x433/x434)-x435)==x436);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x438 = -1468;
	volatile uint16_t x439 = 1747U;
	volatile int16_t x440 = INT16_MIN;
	volatile int32_t t97 = 5202;

	t97 = (((x437/x438)-x439)==x440);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x441 = INT16_MIN;
	int16_t x442 = -1;
	volatile int64_t x443 = -1LL;
	volatile int16_t x444 = -1;
	int32_t t98 = 25079146;

	t98 = (((x441/x442)-x443)==x444);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x445 = 66U;
	uint64_t x446 = 52756848671LLU;
	int16_t x447 = -1;
	volatile int32_t t99 = -32528533;

	t99 = (((x445/x446)-x447)==x448);

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

