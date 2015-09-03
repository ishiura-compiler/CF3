#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MIN;
uint32_t x5 = 52637U;
volatile uint16_t x10 = UINT16_MAX;
uint16_t x15 = 27U;
int32_t x20 = 1;
int64_t t4 = 1LL;
int8_t x23 = 63;
uint16_t x24 = 1U;
static volatile int32_t t5 = -5820;
uint64_t x30 = 22LLU;
int8_t x32 = INT8_MAX;
volatile uint32_t x34 = 7268U;
int16_t x39 = -1;
volatile int64_t t9 = -428353605254LL;
int16_t x47 = INT16_MIN;
volatile uint32_t x52 = 87409609U;
static int32_t t14 = 153;
int32_t x62 = -4802;
volatile int32_t x72 = INT32_MIN;
volatile uint8_t x73 = UINT8_MAX;
uint8_t x74 = 7U;
int64_t x76 = INT64_MAX;
static int64_t x79 = INT64_MAX;
static volatile int8_t x90 = 1;
int16_t x102 = INT16_MIN;
uint16_t x104 = UINT16_MAX;
volatile int8_t x107 = -9;
int32_t x109 = INT32_MIN;
volatile int64_t x115 = -1LL;
static volatile uint32_t x116 = UINT32_MAX;
uint8_t x120 = 19U;
int64_t t29 = -77305917303LL;
int64_t x127 = INT64_MIN;
static uint32_t x130 = 0U;
volatile int32_t t33 = 112;
volatile int8_t x140 = 30;
int64_t x142 = INT64_MAX;
volatile int8_t x154 = -1;
int64_t x158 = -810400974LL;
int32_t t40 = 33;
static int8_t x165 = -1;
int32_t x168 = INT32_MIN;
int64_t x173 = INT64_MIN;
static int8_t x178 = 0;
uint32_t t45 = 363U;
volatile int64_t x185 = INT64_MIN;
static int32_t x194 = INT32_MAX;
volatile uint16_t x197 = 1U;
int32_t t49 = 104;
uint8_t x202 = UINT8_MAX;
uint16_t x203 = 14709U;
int8_t x204 = 0;
uint16_t x207 = 4U;
uint64_t x210 = 3136849188LLU;
int64_t x211 = INT64_MIN;
static uint32_t t52 = 67664U;
int32_t x215 = INT32_MAX;
volatile int64_t t53 = -4015607984934LL;
int16_t x219 = 1516;
static volatile uint8_t x227 = UINT8_MAX;
volatile int64_t x244 = INT64_MIN;
volatile int32_t x246 = -1;
uint32_t x247 = 574615U;
uint8_t x248 = 13U;
volatile uint32_t x249 = 5U;
volatile uint32_t t62 = 2U;
int16_t x254 = -1;
int8_t x266 = INT8_MAX;
int8_t x268 = INT8_MIN;
int32_t x269 = -385;
int8_t x271 = 0;
int8_t x277 = -22;
int32_t x279 = INT32_MIN;
int8_t x281 = INT8_MIN;
int32_t x282 = INT32_MAX;
int16_t x289 = INT16_MIN;
int16_t x291 = INT16_MIN;
int32_t x294 = 1457547;
int32_t x296 = INT32_MIN;
static volatile int16_t x299 = INT16_MAX;
int64_t x303 = INT64_MIN;
static int8_t x306 = INT8_MIN;
int8_t x307 = -1;
uint32_t x308 = 14676U;
int16_t x309 = -376;
uint32_t x316 = 358082388U;
int16_t x317 = INT16_MIN;
int64_t x319 = INT64_MAX;
int8_t x325 = -1;
int16_t x326 = INT16_MAX;
int8_t x327 = INT8_MIN;
volatile int32_t t81 = -455669138;
uint8_t x333 = 1U;
int32_t x335 = -1;
static volatile uint32_t t84 = 1224659U;
int64_t x342 = INT64_MAX;
int64_t x349 = INT64_MIN;
int64_t x350 = -1LL;
uint16_t x364 = 0U;
static int64_t x365 = -1LL;
int64_t x367 = INT64_MIN;
uint16_t x369 = UINT16_MAX;
volatile int32_t t92 = 2;
int16_t x379 = 0;
volatile int32_t t95 = -890907606;
volatile uint64_t x389 = 675419144976270807LLU;
volatile uint8_t x390 = 115U;
uint64_t x396 = UINT64_MAX;
uint32_t x400 = 2338U;


void f0(void) {
	int32_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	int32_t x4 = -1;
	static int32_t t0 = -468809;

	t0 = (x1%((x2<=x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	volatile int64_t x7 = -69152928LL;
	uint8_t x8 = 1U;
	static volatile uint32_t t1 = 73U;

	t1 = (x5%((x6<=x7)|x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -224LL;
	int32_t x11 = INT32_MIN;
	static uint16_t x12 = 9525U;
	volatile int64_t t2 = 56496055763LL;

	t2 = (x9%((x10<=x11)|x12));

	if (t2 != -224LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MAX;
	static uint16_t x14 = 1154U;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -11511025211LL;

	t3 = (x13%((x14<=x15)|x16));

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile uint8_t x18 = 63U;
	volatile uint8_t x19 = 0U;

	t4 = (x17%((x18<=x19)|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int64_t x22 = -195554LL;

	t5 = (x21%((x22<=x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	volatile int64_t x26 = INT64_MIN;
	static int64_t x27 = INT64_MAX;
	static int64_t x28 = -1904LL;
	volatile int64_t t6 = 1394564LL;

	t6 = (x25%((x26<=x27)|x28));

	if (t6 != 282LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	int8_t x31 = INT8_MAX;
	int32_t t7 = -2;

	t7 = (x29%((x30<=x31)|x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 94U;
	static int64_t x35 = INT64_MAX;
	int32_t x36 = -8999;
	static volatile int32_t t8 = 43;

	t8 = (x33%((x34<=x35)|x36));

	if (t8 != 94) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = INT8_MIN;
	volatile int32_t x40 = -1;

	t9 = (x37%((x38<=x39)|x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -17;
	int16_t x42 = -1;
	int8_t x43 = INT8_MIN;
	int64_t x44 = 3178739LL;
	volatile int64_t t10 = 2921885894330LL;

	t10 = (x41%((x42<=x43)|x44));

	if (t10 != -17LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	static uint8_t x48 = 120U;
	volatile int32_t t11 = -4503642;

	t11 = (x45%((x46<=x47)|x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int16_t x50 = INT16_MAX;
	static int64_t x51 = -1LL;
	int64_t t12 = 0LL;

	t12 = (x49%((x50<=x51)|x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -6;
	int16_t x54 = INT16_MIN;
	int16_t x55 = -2;
	int32_t x56 = 31332745;
	int32_t t13 = -31328;

	t13 = (x53%((x54<=x55)|x56));

	if (t13 != -6) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -220;
	static int16_t x58 = INT16_MAX;
	int32_t x59 = INT32_MAX;
	volatile uint16_t x60 = 3U;

	t14 = (x57%((x58<=x59)|x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 6479237350439370LLU;
	volatile uint32_t x63 = UINT32_MAX;
	volatile int16_t x64 = -1;
	uint64_t t15 = 32399455LLU;

	t15 = (x61%((x62<=x63)|x64));

	if (t15 != 6479237350439370LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	static int8_t x66 = 4;
	static uint64_t x67 = 132416515379LLU;
	uint16_t x68 = 2U;
	int64_t t16 = -3LL;

	t16 = (x65%((x66<=x67)|x68));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 7U;
	int32_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	volatile int32_t t17 = -2;

	t17 = (x69%((x70<=x71)|x72));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x75 = -1;
	volatile int64_t t18 = -518697565835LL;

	t18 = (x73%((x74<=x75)|x76));

	if (t18 != 255LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int8_t x78 = -3;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = -126387;

	t19 = (x77%((x78<=x79)|x80));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	uint32_t x82 = 102257U;
	static int8_t x83 = 1;
	volatile uint32_t x84 = UINT32_MAX;
	uint32_t t20 = 24U;

	t20 = (x81%((x82<=x83)|x84));

	if (t20 != 127U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	static uint8_t x86 = UINT8_MAX;
	int16_t x87 = -1;
	static int16_t x88 = 925;
	int32_t t21 = 19645075;

	t21 = (x85%((x86<=x87)|x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int16_t x91 = INT16_MAX;
	volatile int16_t x92 = INT16_MAX;
	volatile int32_t t22 = -24248743;

	t22 = (x89%((x90<=x91)|x92));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 2U;
	int32_t x94 = 46812692;
	volatile uint64_t x95 = 3958213232LLU;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -225;

	t23 = (x93%((x94<=x95)|x96));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 13U;
	uint64_t x98 = 1000131257137LLU;
	int8_t x99 = -1;
	uint32_t x100 = 4032U;
	uint32_t t24 = 175033189U;

	t24 = (x97%((x98<=x99)|x100));

	if (t24 != 13U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x103 = 3;
	volatile int32_t t25 = 121427315;

	t25 = (x101%((x102<=x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -3729;
	int32_t x106 = INT32_MAX;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t26 = 266959051U;

	t26 = (x105%((x106<=x107)|x108));

	if (t26 != 4294963567U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MAX;
	static volatile int64_t x111 = INT64_MIN;
	static int16_t x112 = INT16_MIN;
	int32_t t27 = 12;

	t27 = (x109%((x110<=x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -60;
	static int16_t x114 = INT16_MIN;
	uint32_t t28 = 6U;

	t28 = (x113%((x114<=x115)|x116));

	if (t28 != 4294967236U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = UINT32_MAX;
	int64_t x119 = INT64_MAX;

	t29 = (x117%((x118<=x119)|x120));

	if (t29 != -18LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MIN;
	int32_t x123 = -7;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -170;

	t30 = (x121%((x122<=x123)|x124));

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 169U;
	int32_t x126 = INT32_MIN;
	uint16_t x128 = 111U;
	uint32_t t31 = 922U;

	t31 = (x125%((x126<=x127)|x128));

	if (t31 != 58U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int64_t x131 = -1512084234883381777LL;
	volatile int32_t x132 = INT32_MAX;
	int32_t t32 = 526900;

	t32 = (x129%((x130<=x131)|x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 8;
	int16_t x134 = -11;
	static uint8_t x135 = 0U;
	int16_t x136 = 12;

	t33 = (x133%((x134<=x135)|x136));

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -422024LL;
	uint64_t x138 = 24LLU;
	int32_t x139 = -1216106;
	volatile int64_t t34 = 4206127613323883368LL;

	t34 = (x137%((x138<=x139)|x140));

	if (t34 != -21LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 29677U;
	uint64_t x143 = UINT64_MAX;
	volatile int16_t x144 = 1;
	volatile int32_t t35 = 1;

	t35 = (x141%((x142<=x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MIN;
	int64_t x147 = 55879LL;
	static int32_t x148 = 18949;
	volatile int32_t t36 = -5465151;

	t36 = (x145%((x146<=x147)|x148));

	if (t36 != -12427) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 3U;
	uint16_t x150 = 12312U;
	uint64_t x151 = UINT64_MAX;
	int16_t x152 = INT16_MAX;
	int32_t t37 = 2074380;

	t37 = (x149%((x150<=x151)|x152));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 13LLU;
	volatile int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	uint64_t t38 = 94130119873290025LLU;

	t38 = (x153%((x154<=x155)|x156));

	if (t38 != 13LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int64_t x159 = 43311866111473982LL;
	int64_t x160 = -24838LL;
	static int64_t t39 = 149915260807LL;

	t39 = (x157%((x158<=x159)|x160));

	if (t39 != -2117LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = 15808;
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	uint16_t x164 = UINT16_MAX;

	t40 = (x161%((x162<=x163)|x164));

	if (t40 != 15808) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x166 = 8865861;
	uint16_t x167 = 7182U;
	static volatile int32_t t41 = 18769;

	t41 = (x165%((x166<=x167)|x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int16_t x170 = 2460;
	int16_t x171 = INT16_MIN;
	uint32_t x172 = 31104571U;
	static volatile uint64_t t42 = 204051744980006887LLU;

	t42 = (x169%((x170<=x171)|x172));

	if (t42 != 28220079LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = 1LL;
	int64_t x175 = 74902411458215265LL;
	volatile uint16_t x176 = UINT16_MAX;
	volatile int64_t t43 = 70414LL;

	t43 = (x173%((x174<=x175)|x176));

	if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MIN;
	static volatile int64_t t44 = -861781LL;

	t44 = (x177%((x178<=x179)|x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	static uint16_t x182 = 8U;
	uint8_t x183 = UINT8_MAX;
	uint32_t x184 = 702233U;

	t45 = (x181%((x182<=x183)|x184));

	if (t45 != 55134U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x186 = UINT64_MAX;
	static int16_t x187 = INT16_MAX;
	volatile int64_t x188 = INT64_MIN;
	volatile int64_t t46 = 9893018LL;

	t46 = (x185%((x186<=x187)|x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MAX;
	int32_t x191 = 610088;
	volatile int64_t x192 = INT64_MAX;
	int64_t t47 = 10092829783342LL;

	t47 = (x189%((x190<=x191)|x192));

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	volatile int64_t x195 = -1LL;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = -66621949321464877LL;

	t48 = (x193%((x194<=x195)|x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	int16_t x199 = -1;
	volatile uint16_t x200 = 0U;

	t49 = (x197%((x198<=x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	static volatile int32_t t50 = -141;

	t50 = (x201%((x202<=x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 2U;
	uint16_t x206 = UINT16_MAX;
	volatile int32_t x208 = -661765045;
	int32_t t51 = -3;

	t51 = (x205%((x206<=x207)|x208));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;

	t52 = (x209%((x210<=x211)|x212));

	if (t52 != 4294934528U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 30U;
	int32_t x214 = 0;
	int64_t x216 = -97960246332518LL;

	t53 = (x213%((x214<=x215)|x216));

	if (t53 != 30LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint64_t x218 = 2845276LLU;
	int16_t x220 = INT16_MAX;
	int32_t t54 = -234312;

	t54 = (x217%((x218<=x219)|x220));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 33;
	int16_t x222 = INT16_MAX;
	uint64_t x223 = UINT64_MAX;
	volatile uint16_t x224 = 20418U;
	volatile int32_t t55 = 8040;

	t55 = (x221%((x222<=x223)|x224));

	if (t55 != 33) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MAX;
	int64_t x226 = INT64_MIN;
	int64_t x228 = 110905040564LL;
	int64_t t56 = 815417168454250987LL;

	t56 = (x225%((x226<=x227)|x228));

	if (t56 != 31143263587LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 8U;
	int64_t x230 = INT64_MIN;
	volatile int32_t x231 = 295323749;
	int16_t x232 = -1;
	volatile int32_t t57 = -88;

	t57 = (x229%((x230<=x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int32_t x234 = -1;
	int32_t x235 = -1;
	static int32_t x236 = INT32_MAX;
	volatile int64_t t58 = -130306523178369903LL;

	t58 = (x233%((x234<=x235)|x236));

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 8U;
	volatile uint16_t x238 = 32368U;
	volatile int32_t x239 = 395631;
	static volatile int32_t x240 = 24200;
	static int32_t t59 = -4079731;

	t59 = (x237%((x238<=x239)|x240));

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	int64_t x242 = 6912LL;
	int8_t x243 = INT8_MIN;
	int64_t t60 = 12LL;

	t60 = (x241%((x242<=x243)|x244));

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 654U;
	int32_t t61 = 51;

	t61 = (x245%((x246<=x247)|x248));

	if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -1LL;
	int32_t x251 = -1;
	static int16_t x252 = INT16_MIN;

	t62 = (x249%((x250<=x251)|x252));

	if (t62 != 5U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MAX;
	volatile int8_t x255 = INT8_MAX;
	int8_t x256 = 2;
	static volatile int64_t t63 = 3922794414621149713LL;

	t63 = (x253%((x254<=x255)|x256));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = -1;
	static int64_t x258 = 239465836078928LL;
	int64_t x259 = -1486321445977LL;
	int32_t x260 = INT32_MIN;
	int32_t t64 = -63254;

	t64 = (x257%((x258<=x259)|x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -16319388259381LL;
	volatile int64_t x262 = INT64_MAX;
	int8_t x263 = -1;
	int8_t x264 = -1;
	int64_t t65 = 228666602685LL;

	t65 = (x261%((x262<=x263)|x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	static int8_t x267 = -1;
	volatile int32_t t66 = 281;

	t66 = (x265%((x266<=x267)|x268));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = 536789297U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 834248983;

	t67 = (x269%((x270<=x271)|x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = 14718533410LLU;
	int32_t x274 = INT32_MIN;
	int8_t x275 = 3;
	uint32_t x276 = UINT32_MAX;
	volatile uint64_t t68 = 879LLU;

	t68 = (x273%((x274<=x275)|x276));

	if (t68 != 1833631525LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -1;
	uint64_t x280 = UINT64_MAX;
	uint64_t t69 = 30647691105621LLU;

	t69 = (x277%((x278<=x279)|x280));

	if (t69 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x283 = INT32_MAX;
	int8_t x284 = -50;
	static int32_t t70 = -616;

	t70 = (x281%((x282<=x283)|x284));

	if (t70 != -30) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = INT32_MIN;
	static int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	int32_t t71 = -350664412;

	t71 = (x285%((x286<=x287)|x288));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = 1;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -1;

	t72 = (x289%((x290<=x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	volatile int32_t x295 = 129926;
	static int64_t t73 = -1LL;

	t73 = (x293%((x294<=x295)|x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -7;
	uint8_t x298 = UINT8_MAX;
	int64_t x300 = -214288786117LL;
	volatile int64_t t74 = 251300LL;

	t74 = (x297%((x298<=x299)|x300));

	if (t74 != -7LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = UINT32_MAX;
	int64_t x302 = 23886LL;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t75 = 3047524934482331LLU;

	t75 = (x301%((x302<=x303)|x304));

	if (t75 != 4294967295LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	static volatile uint32_t t76 = 22294496U;

	t76 = (x305%((x306<=x307)|x308));

	if (t76 != 7304U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MAX;
	uint16_t x311 = 4U;
	int64_t x312 = INT64_MIN;
	int64_t t77 = -257873988214LL;

	t77 = (x309%((x310<=x311)|x312));

	if (t77 != -376LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	volatile int16_t x314 = 3262;
	static uint16_t x315 = 2982U;
	uint32_t t78 = 26588U;

	t78 = (x313%((x314<=x315)|x316));

	if (t78 != 65535U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = 58U;
	volatile uint16_t x320 = 231U;
	volatile int32_t t79 = 0;

	t79 = (x317%((x318<=x319)|x320));

	if (t79 != -197) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	static int64_t x322 = INT64_MIN;
	volatile uint64_t x323 = UINT64_MAX;
	uint64_t x324 = 715690LLU;
	uint64_t t80 = 2893098471112LLU;

	t80 = (x321%((x322<=x323)|x324));

	if (t80 != 518862LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x328 = INT16_MAX;

	t81 = (x325%((x326<=x327)|x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x329 = -38;
	volatile uint16_t x330 = 28679U;
	int32_t x331 = 3057;
	int64_t x332 = -206662278866250LL;
	static volatile int64_t t82 = 42980741369602885LL;

	t82 = (x329%((x330<=x331)|x332));

	if (t82 != -38LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = 30097677U;
	static int16_t x336 = -6;
	static volatile int32_t t83 = 3154;

	t83 = (x333%((x334<=x335)|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 102440889;
	uint16_t x338 = 971U;
	int8_t x339 = INT8_MIN;
	static uint32_t x340 = UINT32_MAX;

	t84 = (x337%((x338<=x339)|x340));

	if (t84 != 102440889U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint16_t x343 = 2868U;
	int64_t x344 = -1LL;
	int64_t t85 = 1363381817722LL;

	t85 = (x341%((x342<=x343)|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 1U;
	static uint8_t x346 = 0U;
	int32_t x347 = INT32_MIN;
	static uint64_t x348 = 2810924067734780LLU;
	volatile uint64_t t86 = 4457690256902391LLU;

	t86 = (x345%((x346<=x347)|x348));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x351 = -1;
	int8_t x352 = -2;
	volatile int64_t t87 = 975656LL;

	t87 = (x349%((x350<=x351)|x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = UINT64_MAX;
	uint16_t x356 = 62U;
	int32_t t88 = 31624519;

	t88 = (x353%((x354<=x355)|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	static uint8_t x358 = 22U;
	int8_t x359 = INT8_MIN;
	static volatile uint32_t x360 = 14167947U;
	uint32_t t89 = 61118U;

	t89 = (x357%((x358<=x359)|x360));

	if (t89 != 8123651U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	static int64_t x362 = INT64_MIN;
	uint16_t x363 = 1259U;
	volatile int32_t t90 = -4098307;

	t90 = (x361%((x362<=x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x366 = 1U;
	volatile uint64_t x368 = 7338LLU;
	volatile uint64_t t91 = 2431832622LLU;

	t91 = (x365%((x366<=x367)|x368));

	if (t91 != 6705LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = 27855969271966LL;
	int32_t x371 = -21472;
	volatile int16_t x372 = INT16_MIN;

	t92 = (x369%((x370<=x371)|x372));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	int16_t x374 = INT16_MAX;
	int32_t x375 = INT32_MIN;
	uint16_t x376 = 212U;
	int32_t t93 = 13;

	t93 = (x373%((x374<=x375)|x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = 43252878740310740LLU;
	int64_t x378 = -861766763069LL;
	int8_t x380 = INT8_MAX;
	volatile uint64_t t94 = 9203610LLU;

	t94 = (x377%((x378<=x379)|x380));

	if (t94 != 59LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 59;
	static uint32_t x382 = 205115951U;
	volatile uint8_t x383 = 7U;
	int32_t x384 = 82401;

	t95 = (x381%((x382<=x383)|x384));

	if (t95 != 59) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	static int16_t x386 = INT16_MIN;
	uint16_t x387 = 0U;
	uint64_t x388 = 299LLU;
	static volatile uint64_t t96 = 87382562647320440LLU;

	t96 = (x385%((x386<=x387)|x388));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x391 = 126U;
	int64_t x392 = -383898888503906783LL;
	uint64_t t97 = 15055918660192LLU;

	t97 = (x389%((x390<=x391)|x392));

	if (t97 != 675419144976270807LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 1U;
	int8_t x394 = INT8_MAX;
	uint8_t x395 = 0U;
	uint64_t t98 = 4088LLU;

	t98 = (x393%((x394<=x395)|x396));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	int64_t x398 = -72903069396LL;
	int64_t x399 = -247122515879279LL;
	uint32_t t99 = 108841U;

	t99 = (x397%((x398<=x399)|x400));

	if (t99 != 472U) { NG(); } else { ; }
	
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

