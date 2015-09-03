#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MIN;
int8_t x8 = INT8_MAX;
uint32_t x9 = 23879U;
int64_t x17 = 744483059025912LL;
int64_t x18 = 2880470LL;
volatile uint64_t x30 = UINT64_MAX;
int32_t x32 = -1;
uint32_t x36 = UINT32_MAX;
static int32_t x37 = INT32_MIN;
uint64_t x38 = 819934LLU;
volatile int16_t x48 = -186;
int16_t x63 = -1;
volatile uint16_t x65 = 0U;
static uint64_t t14 = 8702309597707391LLU;
uint32_t x75 = UINT32_MAX;
volatile uint64_t t16 = 4535761LLU;
volatile int32_t t17 = 7197885;
int32_t x86 = -1;
volatile int8_t x88 = INT8_MIN;
volatile uint64_t x95 = 9LLU;
uint8_t x99 = 39U;
int8_t x104 = 0;
int16_t x105 = -15;
int64_t x106 = INT64_MIN;
int32_t x107 = -1;
uint32_t x112 = 487319U;
uint32_t t23 = 1885U;
uint16_t x115 = 3037U;
uint16_t x116 = 0U;
uint64_t x118 = UINT64_MAX;
volatile int8_t x125 = 15;
int8_t x130 = INT8_MAX;
static int16_t x134 = 3;
uint16_t x138 = 59U;
volatile uint64_t t30 = 10113LLU;
uint16_t x147 = UINT16_MAX;
static uint64_t x157 = 1808325LLU;
volatile uint64_t t33 = 119270847LLU;
static volatile int32_t t34 = -45183;
int16_t x165 = -56;
volatile int32_t x174 = -1;
int64_t x180 = -220LL;
int8_t x184 = INT8_MIN;
volatile int8_t x189 = INT8_MIN;
int16_t x192 = INT16_MAX;
int64_t x195 = INT64_MIN;
volatile uint64_t t41 = 3598629448818534351LLU;
static int16_t x197 = 0;
static volatile int16_t x201 = INT16_MIN;
uint16_t x203 = 6051U;
int8_t x204 = INT8_MIN;
volatile int32_t t43 = 3836026;
int16_t x207 = INT16_MAX;
uint64_t x209 = UINT64_MAX;
volatile int16_t x212 = INT16_MAX;
uint16_t x221 = UINT16_MAX;
int16_t x237 = INT16_MIN;
volatile int32_t t51 = 16683418;
static uint8_t x241 = 11U;
static volatile int64_t t52 = -34179630614LL;
int16_t x247 = 150;
static int16_t x250 = INT16_MAX;
volatile int64_t x255 = -163477316LL;
uint8_t x256 = 63U;
volatile uint16_t x262 = 1U;
volatile int32_t t57 = 43460534;
volatile uint8_t x280 = 110U;
int8_t x282 = INT8_MIN;
static uint8_t x290 = 0U;
static int16_t x291 = -12197;
uint16_t x295 = UINT16_MAX;
int64_t t64 = INT64_MIN;
int16_t x306 = INT16_MAX;
static int64_t x310 = INT64_MIN;
static uint32_t x314 = 43373U;
int64_t t68 = -35801597861447LL;
volatile int64_t t69 = 2LL;
int64_t x325 = -1LL;
volatile int8_t x335 = -1;
int32_t x337 = INT32_MAX;
uint8_t x339 = 2U;
uint8_t x343 = 0U;
uint8_t x354 = 14U;
int64_t x360 = INT64_MIN;
int16_t x364 = INT16_MIN;
int32_t x365 = 15513;
volatile int32_t x367 = 245023126;
int8_t x368 = INT8_MIN;
int16_t x371 = -86;
int64_t x375 = INT64_MAX;
uint32_t x389 = 22700U;
static int16_t x400 = -1;
static int32_t t86 = -4;
int8_t x405 = -1;
static uint8_t x406 = 2U;
int64_t x416 = INT64_MIN;
volatile uint64_t t89 = 7LLU;
uint8_t x418 = UINT8_MAX;
uint16_t x433 = 12U;
int32_t x438 = -1;
volatile uint64_t t94 = 2047207953LLU;
static volatile uint32_t x454 = 1340872U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = -1;
	uint8_t x3 = UINT8_MAX;
	volatile int32_t t0 = -274819;

	t0 = ((x1^(x2<=x3))+x4);

	if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	volatile uint64_t x7 = 917825178154LLU;
	volatile int32_t t1 = 0;

	t1 = ((x5^(x6<=x7))+x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	int32_t x11 = INT32_MAX;
	uint16_t x12 = 15U;
	uint32_t t2 = 242993U;

	t2 = ((x9^(x10<=x11))+x12);

	if (t2 != 23893U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static uint8_t x14 = 14U;
	uint32_t x15 = UINT32_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 403349082;

	t3 = ((x13^(x14<=x15))+x16);

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x19 = -1LL;
	int32_t x20 = INT32_MAX;
	volatile int64_t t4 = -1774368169700131LL;

	t4 = ((x17^(x18<=x19))+x20);

	if (t4 != 744485206509559LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	volatile uint8_t x22 = 10U;
	int16_t x23 = -1;
	volatile uint16_t x24 = 10046U;
	volatile int32_t t5 = -250;

	t5 = ((x21^(x22<=x23))+x24);

	if (t5 != 10045) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static uint16_t x26 = UINT16_MAX;
	static uint64_t x27 = UINT64_MAX;
	int8_t x28 = -1;
	int64_t t6 = INT64_MIN;

	t6 = ((x25^(x26<=x27))+x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 0;
	static uint64_t x31 = 636787095LLU;
	static int32_t t7 = -239972149;

	t7 = ((x29^(x30<=x31))+x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 22U;
	int64_t x34 = -1LL;
	int8_t x35 = -1;
	static uint32_t t8 = 34381773U;

	t8 = ((x33^(x34<=x35))+x36);

	if (t8 != 22U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x39 = -6020554624LL;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = -184866591;

	t9 = ((x37^(x38<=x39))+x40);

	if (t9 != -2147418112) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int16_t x46 = -1;
	int16_t x47 = INT16_MIN;
	static int32_t t10 = -2983211;

	t10 = ((x45^(x46<=x47))+x48);

	if (t10 != 69) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 402;
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = -5;
	static int8_t x52 = -2;
	int32_t t11 = 21;

	t11 = ((x49^(x50<=x51))+x52);

	if (t11 != 400) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x61 = 69U;
	int8_t x62 = -1;
	static uint64_t x64 = UINT64_MAX;
	volatile uint64_t t12 = 17375376536600LLU;

	t12 = ((x61^(x62<=x63))+x64);

	if (t12 != 67LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x66 = -1;
	static int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	volatile int32_t t13 = -114262;

	t13 = ((x65^(x66<=x67))+x68);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	volatile uint8_t x70 = UINT8_MAX;
	volatile int16_t x71 = INT16_MAX;
	volatile int8_t x72 = INT8_MAX;

	t14 = ((x69^(x70<=x71))+x72);

	if (t14 != 125LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = 1;
	uint8_t x74 = 5U;
	uint64_t x76 = 52022371536821672LLU;
	volatile uint64_t t15 = 5501171920554350313LLU;

	t15 = ((x73^(x74<=x75))+x76);

	if (t15 != 52022371536821672LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = UINT64_MAX;
	int32_t x78 = -2220;
	int64_t x79 = INT64_MIN;
	static int64_t x80 = -243735611104983072LL;

	t16 = ((x77^(x78<=x79))+x80);

	if (t16 != 18203008462604568543LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -1;
	int16_t x82 = 12;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = 8181U;

	t17 = ((x81^(x82<=x83))+x84);

	if (t17 != 8179) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	int32_t x87 = INT32_MIN;
	volatile int32_t t18 = 716;

	t18 = ((x85^(x86<=x87))+x88);

	if (t18 != -129) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x93 = 6U;
	volatile int16_t x94 = INT16_MAX;
	uint16_t x96 = 3U;
	int32_t t19 = 389525146;

	t19 = ((x93^(x94<=x95))+x96);

	if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x97 = -4;
	int32_t x98 = INT32_MAX;
	int16_t x100 = -251;
	volatile int32_t t20 = 0;

	t20 = ((x97^(x98<=x99))+x100);

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = UINT64_MAX;
	volatile uint16_t x102 = UINT16_MAX;
	static int16_t x103 = -15043;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = ((x101^(x102<=x103))+x104);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x108 = 79051889U;
	static uint32_t t22 = 3072735U;

	t22 = ((x105^(x106<=x107))+x108);

	if (t22 != 79051873U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x109 = INT8_MIN;
	uint64_t x110 = UINT64_MAX;
	int8_t x111 = 1;

	t23 = ((x109^(x110<=x111))+x112);

	if (t23 != 487191U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	volatile int32_t x114 = -5305;
	volatile int32_t t24 = 13;

	t24 = ((x113^(x114<=x115))+x116);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x117 = UINT16_MAX;
	int16_t x119 = -1;
	static int16_t x120 = 3;
	int32_t t25 = 36;

	t25 = ((x117^(x118<=x119))+x120);

	if (t25 != 65537) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x126 = UINT32_MAX;
	static int32_t x127 = INT32_MIN;
	uint32_t x128 = 185U;
	volatile uint32_t t26 = 106281U;

	t26 = ((x125^(x126<=x127))+x128);

	if (t26 != 200U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x129 = 298U;
	static volatile int16_t x131 = INT16_MAX;
	uint8_t x132 = UINT8_MAX;
	int32_t t27 = 7026;

	t27 = ((x129^(x130<=x131))+x132);

	if (t27 != 554) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = -400194540981830LL;
	int16_t x135 = INT16_MIN;
	uint32_t x136 = 542U;
	volatile int64_t t28 = 632141LL;

	t28 = ((x133^(x134<=x135))+x136);

	if (t28 != -400194540981288LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = -793;
	uint16_t x139 = UINT16_MAX;
	int64_t x140 = -258442351558611417LL;
	int64_t t29 = -2975189LL;

	t29 = ((x137^(x138<=x139))+x140);

	if (t29 != -258442351558612211LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x141 = 389020686472271921LLU;
	static uint16_t x142 = 12604U;
	int8_t x143 = 1;
	int16_t x144 = -7;

	t30 = ((x141^(x142<=x143))+x144);

	if (t30 != 389020686472271914LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -7LL;
	volatile int8_t x146 = 9;
	volatile int32_t x148 = INT32_MIN;
	static int64_t t31 = -30155LL;

	t31 = ((x145^(x146<=x147))+x148);

	if (t31 != -2147483656LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = -1;
	int64_t x154 = INT64_MIN;
	int8_t x155 = INT8_MIN;
	uint8_t x156 = 2U;
	volatile int32_t t32 = -927;

	t32 = ((x153^(x154<=x155))+x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x158 = INT32_MAX;
	int16_t x159 = 748;
	int32_t x160 = INT32_MIN;

	t33 = ((x157^(x158<=x159))+x160);

	if (t33 != 18446744071563876293LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x161 = UINT16_MAX;
	volatile uint64_t x162 = 193369777633208LLU;
	static uint32_t x163 = 1U;
	int16_t x164 = -271;

	t34 = ((x161^(x162<=x163))+x164);

	if (t34 != 65264) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = INT64_MIN;
	volatile int8_t x167 = INT8_MIN;
	static int8_t x168 = INT8_MIN;
	int32_t t35 = 64270;

	t35 = ((x165^(x166<=x167))+x168);

	if (t35 != -183) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = 17785552U;
	int16_t x175 = INT16_MAX;
	volatile uint64_t x176 = UINT64_MAX;
	uint64_t t36 = 820774053428641124LLU;

	t36 = ((x173^(x174<=x175))+x176);

	if (t36 != 17785552LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x177 = 1504535LLU;
	uint16_t x178 = 2004U;
	static int64_t x179 = -192394644LL;
	volatile uint64_t t37 = 187817LLU;

	t37 = ((x177^(x178<=x179))+x180);

	if (t37 != 1504315LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = 182939;
	int32_t x182 = INT32_MAX;
	int32_t x183 = INT32_MIN;
	volatile int32_t t38 = 1616;

	t38 = ((x181^(x182<=x183))+x184);

	if (t38 != 182811) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = 82U;
	volatile uint16_t x186 = 2682U;
	static volatile uint16_t x187 = 38U;
	volatile uint32_t x188 = 107U;
	static uint32_t t39 = 86739988U;

	t39 = ((x185^(x186<=x187))+x188);

	if (t39 != 189U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x190 = -11;
	uint32_t x191 = 40436207U;
	volatile int32_t t40 = 1;

	t40 = ((x189^(x190<=x191))+x192);

	if (t40 != 32639) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = 379727002695808LLU;
	int64_t x194 = -1LL;
	uint32_t x196 = UINT32_MAX;

	t41 = ((x193^(x194<=x195))+x196);

	if (t41 != 379731297663103LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x198 = 12U;
	uint32_t x199 = 407556U;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t42 = 66876312042LLU;

	t42 = ((x197^(x198<=x199))+x200);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x202 = INT16_MIN;

	t43 = ((x201^(x202<=x203))+x204);

	if (t43 != -32895) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x205 = 49U;
	uint8_t x206 = 3U;
	volatile uint32_t x208 = 28755U;
	volatile uint32_t t44 = 1U;

	t44 = ((x205^(x206<=x207))+x208);

	if (t44 != 28803U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x210 = 1U;
	volatile int64_t x211 = INT64_MIN;
	volatile uint64_t t45 = 54183228LLU;

	t45 = ((x209^(x210<=x211))+x212);

	if (t45 != 32766LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = 6990072LL;
	volatile int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MAX;
	int32_t x216 = -1;
	int64_t t46 = 11913LL;

	t46 = ((x213^(x214<=x215))+x216);

	if (t46 != 6990072LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x222 = 7;
	volatile int64_t x223 = -16515619769978965LL;
	volatile int16_t x224 = INT16_MIN;
	int32_t t47 = -2020292;

	t47 = ((x221^(x222<=x223))+x224);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	uint16_t x226 = 314U;
	static int32_t x227 = INT32_MIN;
	uint64_t x228 = UINT64_MAX;
	uint64_t t48 = 3759171393352LLU;

	t48 = ((x225^(x226<=x227))+x228);

	if (t48 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x229 = -27;
	int16_t x230 = -42;
	uint16_t x231 = 17U;
	uint16_t x232 = 14768U;
	volatile int32_t t49 = 17110904;

	t49 = ((x229^(x230<=x231))+x232);

	if (t49 != 14740) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	uint16_t x235 = 2078U;
	int64_t x236 = 1897696668457187184LL;
	static int64_t t50 = -296467734704LL;

	t50 = ((x233^(x234<=x235))+x236);

	if (t50 != 1897696666309703537LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x238 = 329701LLU;
	uint8_t x239 = 76U;
	int16_t x240 = -1;

	t51 = ((x237^(x238<=x239))+x240);

	if (t51 != -32769) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x242 = INT8_MIN;
	int8_t x243 = -20;
	int64_t x244 = -1LL;

	t52 = ((x241^(x242<=x243))+x244);

	if (t52 != 9LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x245 = 126U;
	static volatile int32_t x246 = INT32_MIN;
	volatile int16_t x248 = -117;
	volatile int32_t t53 = -40246107;

	t53 = ((x245^(x246<=x247))+x248);

	if (t53 != 10) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x249 = UINT16_MAX;
	static int8_t x251 = INT8_MIN;
	volatile int32_t x252 = -1;
	volatile int32_t t54 = -17780;

	t54 = ((x249^(x250<=x251))+x252);

	if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x253 = 85U;
	int16_t x254 = INT16_MIN;
	int32_t t55 = 479402;

	t55 = ((x253^(x254<=x255))+x256);

	if (t55 != 148) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = 3;
	static int8_t x259 = INT8_MIN;
	int16_t x260 = 0;
	int32_t t56 = -192069439;

	t56 = ((x257^(x258<=x259))+x260);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x261 = UINT8_MAX;
	int16_t x263 = INT16_MIN;
	static uint8_t x264 = 5U;

	t57 = ((x261^(x262<=x263))+x264);

	if (t57 != 260) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = -1;
	int8_t x266 = INT8_MIN;
	static int32_t x267 = INT32_MAX;
	volatile uint16_t x268 = 28644U;
	int32_t t58 = -4;

	t58 = ((x265^(x266<=x267))+x268);

	if (t58 != 28642) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = -5;
	int16_t x275 = -11;
	volatile int16_t x276 = 1;
	static volatile int32_t t59 = 147173;

	t59 = ((x273^(x274<=x275))+x276);

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = -1;
	volatile uint64_t x278 = 3LLU;
	uint16_t x279 = 22U;
	int32_t t60 = -719594;

	t60 = ((x277^(x278<=x279))+x280);

	if (t60 != 108) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x281 = INT32_MAX;
	static int64_t x283 = INT64_MIN;
	static int8_t x284 = -1;
	int32_t t61 = 100;

	t61 = ((x281^(x282<=x283))+x284);

	if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x285 = 5213871786474404LLU;
	uint16_t x286 = 11345U;
	volatile int32_t x287 = INT32_MIN;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t62 = 3917502039762LLU;

	t62 = ((x285^(x286<=x287))+x288);

	if (t62 != 5213871786474403LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x289 = UINT16_MAX;
	uint8_t x292 = UINT8_MAX;
	static int32_t t63 = -30798192;

	t63 = ((x289^(x290<=x291))+x292);

	if (t63 != 65790) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = INT64_MIN;
	volatile int8_t x294 = INT8_MIN;
	int8_t x296 = -1;

	t64 = ((x293^(x294<=x295))+x296);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = -1LL;
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MAX;
	int64_t x300 = INT64_MAX;
	int64_t t65 = 1961328167568276801LL;

	t65 = ((x297^(x298<=x299))+x300);

	if (t65 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MAX;
	static int64_t x307 = INT64_MIN;
	int16_t x308 = -1;
	volatile int32_t t66 = -67017;

	t66 = ((x305^(x306<=x307))+x308);

	if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = 0;
	uint8_t x311 = 6U;
	int8_t x312 = INT8_MIN;
	int32_t t67 = 0;

	t67 = ((x309^(x310<=x311))+x312);

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x313 = 44U;
	uint32_t x315 = 445487U;
	int64_t x316 = 470147402LL;

	t68 = ((x313^(x314<=x315))+x316);

	if (t68 != 470147447LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x321 = 24861054851545062LL;
	volatile int16_t x322 = -1;
	static int16_t x323 = INT16_MIN;
	volatile int32_t x324 = INT32_MAX;

	t69 = ((x321^(x322<=x323))+x324);

	if (t69 != 24861056999028709LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x326 = 841LLU;
	static int8_t x327 = INT8_MAX;
	volatile int16_t x328 = -1;
	volatile int64_t t70 = 14074081LL;

	t70 = ((x325^(x326<=x327))+x328);

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x333 = 2486191949625089259LLU;
	static int8_t x334 = 0;
	static int64_t x336 = -158103529678809LL;
	static volatile uint64_t t71 = 374958335862615646LLU;

	t71 = ((x333^(x334<=x335))+x336);

	if (t71 != 2486033846095410450LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x338 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	int64_t t72 = -2LL;

	t72 = ((x337^(x338<=x339))+x340);

	if (t72 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x341 = 3386944775955LL;
	uint16_t x342 = 12098U;
	uint32_t x344 = 34696U;
	int64_t t73 = 479925LL;

	t73 = ((x341^(x342<=x343))+x344);

	if (t73 != 3386944810651LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x345 = -1;
	int64_t x346 = INT64_MIN;
	uint32_t x347 = 22874573U;
	static int32_t x348 = -107;
	int32_t t74 = 224;

	t74 = ((x345^(x346<=x347))+x348);

	if (t74 != -109) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = UINT8_MAX;
	int32_t x350 = -2093543;
	int8_t x351 = INT8_MIN;
	static int64_t x352 = INT64_MIN;
	int64_t t75 = -1LL;

	t75 = ((x349^(x350<=x351))+x352);

	if (t75 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = UINT32_MAX;
	volatile int8_t x355 = INT8_MAX;
	static int16_t x356 = INT16_MAX;
	static uint32_t t76 = 154362544U;

	t76 = ((x353^(x354<=x355))+x356);

	if (t76 != 32765U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x357 = 15;
	int8_t x358 = 17;
	static uint64_t x359 = UINT64_MAX;
	static int64_t t77 = 347LL;

	t77 = ((x357^(x358<=x359))+x360);

	if (t77 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MIN;
	int16_t x363 = 14283;
	volatile int32_t t78 = -1;

	t78 = ((x361^(x362<=x363))+x364);

	if (t78 != 32766) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x366 = UINT16_MAX;
	int32_t t79 = -371;

	t79 = ((x365^(x366<=x367))+x368);

	if (t79 != 15384) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MIN;
	int8_t x372 = -1;
	volatile int32_t t80 = -1154093;

	t80 = ((x369^(x370<=x371))+x372);

	if (t80 != 125) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 30125442LLU;
	int32_t x374 = -1;
	volatile int32_t x376 = INT32_MAX;
	uint64_t t81 = 68542LLU;

	t81 = ((x373^(x374<=x375))+x376);

	if (t81 != 2177609090LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = 1;
	int64_t x382 = -1830126666819968264LL;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -13LL;
	int64_t t82 = 4011556288080LL;

	t82 = ((x381^(x382<=x383))+x384);

	if (t82 != -13LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = -3609740887595691LL;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	uint8_t x388 = 18U;
	int64_t t83 = -3061995348LL;

	t83 = ((x385^(x386<=x387))+x388);

	if (t83 != -3609740887595673LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x390 = INT16_MIN;
	static volatile int8_t x391 = INT8_MIN;
	volatile uint32_t x392 = 0U;
	static volatile uint32_t t84 = 522598U;

	t84 = ((x389^(x390<=x391))+x392);

	if (t84 != 22701U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x397 = INT64_MAX;
	int8_t x398 = INT8_MAX;
	int64_t x399 = -1LL;
	volatile int64_t t85 = 1289665957LL;

	t85 = ((x397^(x398<=x399))+x400);

	if (t85 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x401 = INT32_MAX;
	static volatile uint8_t x402 = 6U;
	volatile int16_t x403 = INT16_MIN;
	static int32_t x404 = INT32_MIN;

	t86 = ((x401^(x402<=x403))+x404);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x407 = -1LL;
	uint32_t x408 = 448890282U;
	uint32_t t87 = 24821U;

	t87 = ((x405^(x406<=x407))+x408);

	if (t87 != 448890281U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MAX;
	static int64_t t88 = 8373055LL;

	t88 = ((x409^(x410<=x411))+x412);

	if (t88 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x413 = 132698207318LLU;
	uint32_t x414 = 5709U;
	static volatile int32_t x415 = INT32_MAX;

	t89 = ((x413^(x414<=x415))+x416);

	if (t89 != 9223372169552983127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x417 = INT8_MAX;
	int8_t x419 = -1;
	int8_t x420 = -1;
	static int32_t t90 = -82299;

	t90 = ((x417^(x418<=x419))+x420);

	if (t90 != 126) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = -1613105984783996LL;
	int16_t x422 = -1;
	volatile uint16_t x423 = 0U;
	static int64_t x424 = INT64_MAX;
	volatile int64_t t91 = 8566274533209281LL;

	t91 = ((x421^(x422<=x423))+x424);

	if (t91 != 9221758930869991812LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = 164LLU;
	static int32_t x426 = 2808;
	uint16_t x427 = UINT16_MAX;
	volatile int64_t x428 = 224551025LL;
	uint64_t t92 = 6LLU;

	t92 = ((x425^(x426<=x427))+x428);

	if (t92 != 224551190LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x434 = 2U;
	int64_t x435 = 1LL;
	int16_t x436 = INT16_MAX;
	int32_t t93 = -3966516;

	t93 = ((x433^(x434<=x435))+x436);

	if (t93 != 32779) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = INT32_MAX;
	static uint32_t x439 = 288U;
	uint64_t x440 = UINT64_MAX;

	t94 = ((x437^(x438<=x439))+x440);

	if (t94 != 2147483646LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x441 = -1;
	int8_t x442 = INT8_MIN;
	volatile int64_t x443 = INT64_MIN;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t95 = 0;

	t95 = ((x441^(x442<=x443))+x444);

	if (t95 != -32769) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x445 = 296248759LLU;
	uint16_t x446 = 89U;
	int32_t x447 = 42654454;
	int8_t x448 = INT8_MIN;
	uint64_t t96 = 954LLU;

	t96 = ((x445^(x446<=x447))+x448);

	if (t96 != 296248630LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = -63760651;
	int16_t x450 = INT16_MAX;
	uint32_t x451 = 35682U;
	int32_t x452 = 20769;
	volatile int32_t t97 = 639869;

	t97 = ((x449^(x450<=x451))+x452);

	if (t97 != -63739883) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x453 = -1;
	int16_t x455 = INT16_MIN;
	uint64_t x456 = UINT64_MAX;
	volatile uint64_t t98 = 105247LLU;

	t98 = ((x453^(x454<=x455))+x456);

	if (t98 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x457 = -2;
	int32_t x458 = INT32_MAX;
	int32_t x459 = INT32_MIN;
	int16_t x460 = -3594;
	volatile int32_t t99 = -230136;

	t99 = ((x457^(x458<=x459))+x460);

	if (t99 != -3596) { NG(); } else { ; }
	
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

