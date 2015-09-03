#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = INT64_MIN;
int32_t x13 = 643551;
int8_t x16 = 26;
volatile int64_t t3 = 3LL;
static volatile int8_t x19 = -2;
volatile int64_t t5 = -14541227065222LL;
static int32_t x27 = INT32_MAX;
int64_t x28 = INT64_MIN;
static int8_t x33 = -5;
static int32_t x45 = 371847587;
uint16_t x49 = 0U;
static int8_t x59 = -47;
int32_t x60 = INT32_MIN;
volatile int64_t x63 = -6LL;
volatile int64_t x69 = -1LL;
int64_t x71 = 3399420091503521664LL;
volatile int64_t t18 = 432LL;
static uint8_t x82 = UINT8_MAX;
int8_t x83 = INT8_MIN;
uint16_t x84 = 112U;
volatile int64_t t20 = 102164800LL;
int8_t x106 = 12;
int32_t x108 = -517554;
int64_t t25 = 3197390084000177LL;
volatile int64_t t26 = 56174799538LL;
int8_t x114 = INT8_MIN;
uint64_t t27 = 509632LLU;
uint64_t x117 = 530398180761535001LLU;
int64_t x118 = 32269214LL;
uint32_t x120 = 1288177947U;
volatile uint64_t t29 = 1LLU;
static int8_t x126 = -1;
volatile int16_t x134 = INT16_MIN;
static int64_t t32 = -23LL;
uint32_t x141 = 421U;
volatile int8_t x144 = 1;
volatile int8_t x145 = INT8_MIN;
static uint64_t x150 = UINT64_MAX;
volatile uint64_t t36 = 42501LLU;
int64_t t37 = -16825802726088LL;
int64_t x159 = 13691164LL;
static volatile int64_t t39 = -19684LL;
uint64_t x167 = 169429LLU;
volatile uint64_t x173 = 219243649LLU;
uint64_t t41 = 348669LLU;
volatile int64_t x180 = 4378188058894870582LL;
uint8_t x182 = UINT8_MAX;
int32_t x187 = 1;
static int32_t t44 = 80;
int32_t x193 = INT32_MIN;
int32_t x194 = 16;
static int32_t t50 = 5;
int64_t x219 = INT64_MIN;
int64_t x225 = 967265759093871LL;
static uint8_t x230 = UINT8_MAX;
int64_t x231 = 56126692750232740LL;
volatile uint16_t x236 = UINT16_MAX;
int8_t x241 = INT8_MIN;
volatile int32_t t57 = -110;
int32_t x249 = INT32_MAX;
volatile uint64_t x252 = 3405848769LLU;
int32_t x256 = INT32_MIN;
uint16_t x259 = 8375U;
uint32_t x260 = UINT32_MAX;
uint16_t x261 = UINT16_MAX;
static int16_t x272 = -958;
int32_t x286 = INT32_MIN;
int16_t x287 = -2353;
volatile uint8_t x292 = UINT8_MAX;
volatile int16_t x293 = INT16_MIN;
uint32_t x294 = 489103795U;
int16_t x296 = -3443;
volatile int64_t t70 = -282556LL;
int64_t x308 = -951259634432LL;
volatile int16_t x324 = -8213;
int16_t x326 = -1;
volatile int32_t t77 = 13746;
uint32_t x332 = 3U;
int8_t x339 = INT8_MIN;
int64_t x347 = INT64_MIN;
volatile int64_t x348 = INT64_MAX;
volatile int64_t t82 = 36582722LL;
volatile int32_t x350 = INT32_MIN;
int32_t x351 = -132;
uint32_t x355 = 20382U;
int16_t x362 = INT16_MIN;
int8_t x364 = -1;
uint32_t t86 = 100097507U;
volatile int32_t x367 = INT32_MIN;
volatile int16_t x372 = -1;
volatile uint32_t t89 = 1184U;
static int32_t x380 = -1;
volatile int32_t x386 = 27309;
static int8_t x405 = 0;
uint16_t x409 = UINT16_MAX;
static volatile uint64_t t99 = 625537985646660053LLU;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	uint32_t x2 = 15458U;
	int32_t x3 = 181644729;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 3316548LLU;

	t0 = ((x1/(x2^x3))%x4);

	if (t0 != 221LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 4U;
	int8_t x6 = -1;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 27786521LLU;

	t1 = ((x5/(x6^x7))%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int64_t x10 = INT64_MIN;
	uint64_t x11 = 59481LLU;
	uint32_t x12 = 3U;
	volatile uint64_t t2 = 1LLU;

	t2 = ((x9/(x10^x11))%x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;
	int32_t x15 = -1;

	t3 = ((x13/(x14^x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 80U;
	volatile int32_t x18 = INT32_MIN;
	volatile int32_t x20 = INT32_MIN;
	volatile uint32_t t4 = 1471U;

	t4 = ((x17/(x18^x19))%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 383082400U;
	static uint16_t x22 = 14768U;
	static uint16_t x23 = 26U;
	int64_t x24 = INT64_MAX;

	t5 = ((x21/(x22^x23))%x24);

	if (t5 != 25950LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 36U;
	int16_t x26 = 1273;
	static int64_t t6 = 27072294931861471LL;

	t6 = ((x25/(x26^x27))%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = -127;
	uint8_t x35 = 46U;
	int16_t x36 = -1;
	int32_t t7 = 1356867;

	t7 = ((x33/(x34^x35))%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 134;
	static int32_t x38 = -223;
	int64_t x39 = -1LL;
	int64_t x40 = INT64_MIN;
	static int64_t t8 = -1LL;

	t8 = ((x37/(x38^x39))%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int8_t x42 = 59;
	int16_t x43 = INT16_MAX;
	volatile int32_t x44 = -374;
	int32_t t9 = 1;

	t9 = ((x41/(x42^x43))%x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MIN;
	static int8_t x47 = INT8_MAX;
	static int32_t x48 = -1;
	int32_t t10 = -11683069;

	t10 = ((x45/(x46^x47))%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x50 = -1;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MAX;
	volatile int32_t t11 = 685488062;

	t11 = ((x49/(x50^x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 8428680;
	int8_t x54 = -10;
	volatile int64_t x55 = 697158967675327LL;
	int64_t x56 = INT64_MIN;
	int64_t t12 = 5LL;

	t12 = ((x53/(x54^x55))%x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	static int16_t x58 = INT16_MIN;
	volatile int32_t t13 = 11329;

	t13 = ((x57/(x58^x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = 1240;
	uint32_t x64 = UINT32_MAX;
	int64_t t14 = 402512962715351709LL;

	t14 = ((x61/(x62^x63))%x64);

	if (t14 != 26LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 3;
	uint32_t x66 = 449544U;
	int8_t x67 = 0;
	int32_t x68 = 1028;
	static volatile uint32_t t15 = 1551587U;

	t15 = ((x65/(x66^x67))%x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x70 = 2U;
	static uint32_t x72 = 16465U;
	static volatile int64_t t16 = 1451LL;

	t16 = ((x69/(x70^x71))%x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MAX;
	uint16_t x75 = UINT16_MAX;
	volatile int16_t x76 = -1;
	volatile int32_t t17 = 1572;

	t17 = ((x73/(x74^x75))%x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1;
	uint16_t x78 = UINT16_MAX;
	volatile int64_t x79 = INT64_MAX;
	volatile int8_t x80 = INT8_MIN;

	t18 = ((x77/(x78^x79))%x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	volatile int32_t t19 = -12813741;

	t19 = ((x81/(x82^x83))%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = 2;
	uint32_t x86 = 158U;
	int64_t x87 = INT64_MIN;
	static volatile int16_t x88 = INT16_MIN;

	t20 = ((x85/(x86^x87))%x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = INT64_MIN;
	static int32_t x90 = INT32_MIN;
	volatile int16_t x91 = INT16_MIN;
	volatile int16_t x92 = INT16_MIN;
	static int64_t t21 = -377533923580LL;

	t21 = ((x89/(x90^x91))%x92);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	static uint64_t x94 = 1819LLU;
	static int32_t x95 = INT32_MAX;
	uint64_t x96 = 9445193854669LLU;
	volatile uint64_t t22 = 1274628649739LLU;

	t22 = ((x93/(x94^x95))%x96);

	if (t22 != 8589941872LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MIN;
	volatile int8_t x98 = INT8_MIN;
	static volatile int64_t x99 = INT64_MIN;
	int16_t x100 = -18;
	int64_t t23 = -4LL;

	t23 = ((x97/(x98^x99))%x100);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	static uint8_t x102 = 3U;
	static int8_t x103 = INT8_MIN;
	static int16_t x104 = 1135;
	int64_t t24 = 64LL;

	t24 = ((x101/(x102^x103))%x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 1198;
	int64_t x107 = INT64_MIN;

	t25 = ((x105/(x106^x107))%x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = INT64_MAX;
	int32_t x111 = 0;
	static int64_t x112 = INT64_MIN;

	t26 = ((x109/(x110^x111))%x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 7669U;
	uint32_t x115 = 45U;
	uint64_t x116 = UINT64_MAX;

	t27 = ((x113/(x114^x115))%x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x119 = INT32_MIN;
	static uint64_t t28 = 3559LLU;

	t28 = ((x117/(x118^x119))%x120);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x121 = UINT64_MAX;
	int16_t x122 = -205;
	uint64_t x123 = 7284481992LLU;
	int32_t x124 = INT32_MIN;

	t29 = ((x121/(x122^x123))%x124);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 1765U;
	static volatile int8_t x127 = -50;
	int8_t x128 = INT8_MAX;
	static uint32_t t30 = 8U;

	t30 = ((x125/(x126^x127))%x128);

	if (t30 != 36U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 1403U;
	static volatile uint8_t x130 = 44U;
	int64_t x131 = INT64_MIN;
	int32_t x132 = -1;
	static volatile int64_t t31 = -1LL;

	t31 = ((x129/(x130^x131))%x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 737U;
	int32_t x135 = INT32_MAX;
	int64_t x136 = INT64_MAX;

	t32 = ((x133/(x134^x135))%x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	uint8_t x138 = 1U;
	static uint8_t x139 = 7U;
	uint8_t x140 = 57U;
	int32_t t33 = 1;

	t33 = ((x137/(x138^x139))%x140);

	if (t33 != -21) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x142 = UINT32_MAX;
	int32_t x143 = -65276803;
	uint32_t t34 = 289609364U;

	t34 = ((x141/(x142^x143))%x144);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x146 = -1;
	uint16_t x147 = UINT16_MAX;
	uint8_t x148 = 13U;
	int32_t t35 = 41;

	t35 = ((x145/(x146^x147))%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = UINT16_MAX;
	uint16_t x151 = 1U;
	uint16_t x152 = 203U;

	t36 = ((x149/(x150^x151))%x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x153 = UINT32_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	int64_t x155 = INT64_MIN;
	static int16_t x156 = INT16_MIN;

	t37 = ((x153/(x154^x155))%x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x157 = UINT16_MAX;
	uint16_t x158 = 688U;
	volatile int64_t x160 = -1LL;
	volatile int64_t t38 = 2334548951LL;

	t38 = ((x157/(x158^x159))%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	static int8_t x164 = INT8_MIN;

	t39 = ((x161/(x162^x163))%x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 324784178U;
	static volatile uint8_t x166 = 0U;
	static uint64_t x168 = 197051LLU;
	uint64_t t40 = 7512855271951LLU;

	t40 = ((x165/(x166^x167))%x168);

	if (t40 != 1916LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = INT64_MAX;
	int32_t x175 = INT32_MIN;
	static volatile uint64_t x176 = UINT64_MAX;

	t41 = ((x173/(x174^x175))%x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = INT64_MIN;
	int64_t x178 = 2448604LL;
	static uint32_t x179 = 1767U;
	volatile int64_t t42 = -572650720750325LL;

	t42 = ((x177/(x178^x179))%x180);

	if (t42 != -3767823536224LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x181 = 100605437802876772LLU;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MAX;
	static uint64_t t43 = 413LLU;

	t43 = ((x181/(x182^x183))%x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 6U;
	static int32_t x186 = -22;
	int32_t x188 = INT32_MIN;

	t44 = ((x185/(x186^x187))%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x189 = INT8_MIN;
	uint16_t x190 = 23U;
	volatile int16_t x191 = -1;
	int64_t x192 = -1788105080578793LL;
	volatile int64_t t45 = 1LL;

	t45 = ((x189/(x190^x191))%x192);

	if (t45 != 5LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = UINT16_MAX;
	uint64_t t46 = 19169967678986LLU;

	t46 = ((x193/(x194^x195))%x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x198 = -1;
	uint64_t x199 = 20019038499504LLU;
	volatile int64_t x200 = INT64_MAX;
	volatile uint64_t t47 = 2018731911626033LLU;

	t47 = ((x197/(x198^x199))%x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = UINT16_MAX;
	uint64_t x206 = 135991104848850269LLU;
	int64_t x207 = INT64_MIN;
	int32_t x208 = -90;
	uint64_t t48 = 9987197LLU;

	t48 = ((x205/(x206^x207))%x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x209 = -1;
	static volatile uint8_t x210 = 46U;
	static int16_t x211 = -1;
	static uint8_t x212 = 7U;
	volatile int32_t t49 = 368900;

	t49 = ((x209/(x210^x211))%x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MIN;
	uint16_t x215 = 11049U;
	int8_t x216 = -1;

	t50 = ((x213/(x214^x215))%x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = -1;
	uint16_t x218 = 420U;
	uint8_t x220 = 84U;
	int64_t t51 = -5318LL;

	t51 = ((x217/(x218^x219))%x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = -23;
	int32_t x222 = -6394584;
	static int8_t x223 = 7;
	int32_t x224 = INT32_MIN;
	volatile int32_t t52 = -43700690;

	t52 = ((x221/(x222^x223))%x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x226 = 46;
	int32_t x227 = -110;
	int16_t x228 = INT16_MIN;
	volatile int64_t t53 = -2582960978873LL;

	t53 = ((x225/(x226^x227))%x228);

	if (t53 != -30254LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MAX;
	int8_t x232 = 1;
	int64_t t54 = -15652069615072373LL;

	t54 = ((x229/(x230^x231))%x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = 8446173136412LLU;
	volatile int32_t x234 = INT32_MIN;
	uint8_t x235 = 6U;
	static uint64_t t55 = 37344LLU;

	t55 = ((x233/(x234^x235))%x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = 18785985U;
	int8_t x238 = INT8_MIN;
	uint8_t x239 = 119U;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t56 = 13150LLU;

	t56 = ((x237/(x238^x239))%x240);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x242 = INT16_MIN;
	static int32_t x243 = INT32_MIN;
	static int16_t x244 = -1;

	t57 = ((x241/(x242^x243))%x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x250 = INT32_MIN;
	int32_t x251 = 3537490;
	volatile uint64_t t58 = 25003LLU;

	t58 = ((x249/(x250^x251))%x252);

	if (t58 != 3148679895LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x253 = 97;
	uint64_t x254 = UINT64_MAX;
	static int8_t x255 = 0;
	uint64_t t59 = 35787543889LLU;

	t59 = ((x253/(x254^x255))%x256);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = -85674787LL;
	int64_t x258 = -14617952505420257LL;
	int64_t t60 = 930LL;

	t60 = ((x257/(x258^x259))%x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x262 = UINT8_MAX;
	int16_t x263 = INT16_MIN;
	int64_t x264 = 1265LL;
	static volatile int64_t t61 = -265901LL;

	t61 = ((x261/(x262^x263))%x264);

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MIN;
	static volatile int8_t x266 = INT8_MAX;
	volatile int8_t x267 = -2;
	volatile int16_t x268 = 14;
	int32_t t62 = -23253726;

	t62 = ((x265/(x266^x267))%x268);

	if (t62 != 8) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MAX;
	uint32_t x271 = 1790817544U;
	uint64_t t63 = 7LLU;

	t63 = ((x269/(x270^x271))%x272);

	if (t63 != 10300706678LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x273 = -1LL;
	volatile int64_t x274 = -87234854914LL;
	int64_t x275 = 99768378LL;
	volatile int16_t x276 = 6;
	int64_t t64 = -657519535LL;

	t64 = ((x273/(x274^x275))%x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = -473850052LL;
	int64_t x278 = 138398987LL;
	int8_t x279 = INT8_MAX;
	static uint8_t x280 = 9U;
	int64_t t65 = -2LL;

	t65 = ((x277/(x278^x279))%x280);

	if (t65 != -3LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 1593U;
	uint16_t x282 = 433U;
	uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MIN;
	int64_t t66 = -103454960552LL;

	t66 = ((x281/(x282^x283))%x284);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	int32_t x288 = INT32_MIN;
	volatile int64_t t67 = 13026LL;

	t67 = ((x285/(x286^x287))%x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -1;
	static volatile uint64_t x290 = 1340LLU;
	volatile uint64_t x291 = 21539660691440700LLU;
	uint64_t t68 = 11LLU;

	t68 = ((x289/(x290^x291))%x292);

	if (t68 != 91LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x295 = 10694U;
	uint32_t t69 = 38634366U;

	t69 = ((x293/(x294^x295))%x296);

	if (t69 != 8U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = INT64_MAX;
	volatile int16_t x298 = INT16_MAX;
	volatile int32_t x299 = INT32_MAX;
	static uint16_t x300 = UINT16_MAX;

	t70 = ((x297/(x298^x299))%x300);

	if (t70 != 3LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -14;
	uint8_t x302 = 3U;
	volatile int16_t x303 = INT16_MAX;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t71 = -1;

	t71 = ((x301/(x302^x303))%x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = 1227735;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t t72 = 1LLU;

	t72 = ((x305/(x306^x307))%x308);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	int8_t x310 = 3;
	uint32_t x311 = UINT32_MAX;
	volatile int16_t x312 = -371;
	volatile uint64_t t73 = 224837298486410LLU;

	t73 = ((x309/(x310^x311))%x312);

	if (t73 != 4294967300LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = 6;
	volatile int64_t x314 = 50421340979916LL;
	int64_t x315 = INT64_MIN;
	volatile int32_t x316 = INT32_MAX;
	volatile int64_t t74 = -4722LL;

	t74 = ((x313/(x314^x315))%x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x317 = 920839895U;
	int64_t x318 = -66133371549175894LL;
	static int32_t x319 = -548990916;
	uint64_t x320 = 2072999796301455LLU;
	uint64_t t75 = 68034795198561939LLU;

	t75 = ((x317/(x318^x319))%x320);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x321 = INT16_MAX;
	static int32_t x322 = -1;
	uint8_t x323 = 3U;
	volatile int32_t t76 = -12;

	t76 = ((x321/(x322^x323))%x324);

	if (t76 != -8191) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MAX;
	int32_t x327 = INT32_MAX;
	int16_t x328 = -6;

	t77 = ((x325/(x326^x327))%x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = -1;
	static volatile uint64_t x330 = 0LLU;
	volatile uint64_t x331 = UINT64_MAX;
	uint64_t t78 = 3LLU;

	t78 = ((x329/(x330^x331))%x332);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = 11U;
	static int16_t x334 = INT16_MIN;
	volatile int8_t x335 = -1;
	int8_t x336 = 1;
	int32_t t79 = -338820;

	t79 = ((x333/(x334^x335))%x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 4U;
	int64_t x340 = INT64_MAX;
	uint64_t t80 = 353800LLU;

	t80 = ((x337/(x338^x339))%x340);

	if (t80 != 4294967420LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x341 = 51U;
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = 55;
	uint8_t x344 = UINT8_MAX;
	uint32_t t81 = 2U;

	t81 = ((x341/(x342^x343))%x344);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int16_t x346 = 5293;

	t82 = ((x345/(x346^x347))%x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = -1;
	int16_t x352 = 3;
	volatile int32_t t83 = 15236902;

	t83 = ((x349/(x350^x351))%x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = 3;
	uint32_t x354 = 5U;
	int32_t x356 = 60155579;
	uint32_t t84 = 1130782741U;

	t84 = ((x353/(x354^x355))%x356);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x357 = 908U;
	static uint64_t x358 = 101716LLU;
	int8_t x359 = INT8_MIN;
	int8_t x360 = -9;
	volatile uint64_t t85 = 62LLU;

	t85 = ((x357/(x358^x359))%x360);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x361 = UINT32_MAX;
	static uint32_t x363 = UINT32_MAX;

	t86 = ((x361/(x362^x363))%x364);

	if (t86 != 131076U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 1U;
	volatile int64_t x366 = INT64_MIN;
	static uint64_t x368 = UINT64_MAX;
	volatile uint64_t t87 = 8574138005901090LLU;

	t87 = ((x365/(x366^x367))%x368);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MIN;
	static volatile uint64_t t88 = 6810LLU;

	t88 = ((x369/(x370^x371))%x372);

	if (t88 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = INT32_MAX;
	volatile int16_t x374 = INT16_MAX;
	volatile uint32_t x375 = UINT32_MAX;
	static int16_t x376 = INT16_MIN;

	t89 = ((x373/(x374^x375))%x376);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = 13905U;
	volatile uint8_t x378 = UINT8_MAX;
	static int64_t x379 = -41LL;
	static int64_t t90 = -3903LL;

	t90 = ((x377/(x378^x379))%x380);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = 76469U;
	volatile uint8_t x382 = 3U;
	uint32_t x383 = UINT32_MAX;
	static uint64_t x384 = UINT64_MAX;
	uint64_t t91 = 1LLU;

	t91 = ((x381/(x382^x383))%x384);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x385 = 216809832U;
	int32_t x387 = INT32_MAX;
	static uint16_t x388 = UINT16_MAX;
	static volatile uint32_t t92 = 2760U;

	t92 = ((x385/(x386^x387))%x388);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = -1;
	volatile int32_t x390 = -1;
	int16_t x391 = INT16_MAX;
	int64_t x392 = 5298LL;
	static int64_t t93 = -3319LL;

	t93 = ((x389/(x390^x391))%x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = 1;
	int32_t x394 = -4524679;
	uint32_t x395 = 9U;
	int8_t x396 = INT8_MIN;
	uint32_t t94 = 2U;

	t94 = ((x393/(x394^x395))%x396);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MIN;
	volatile uint32_t x398 = 116567443U;
	uint8_t x399 = 6U;
	uint16_t x400 = 12794U;
	uint32_t t95 = 3998U;

	t95 = ((x397/(x398^x399))%x400);

	if (t95 != 36U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = UINT32_MAX;
	static uint16_t x402 = UINT16_MAX;
	static uint64_t x403 = 6010LLU;
	int64_t x404 = INT64_MIN;
	volatile uint64_t t96 = 441561696075LLU;

	t96 = ((x401/(x402^x403))%x404);

	if (t96 != 72154LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x406 = INT8_MAX;
	volatile int8_t x407 = 0;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t97 = -11;

	t97 = ((x405/(x406^x407))%x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x410 = INT32_MIN;
	int32_t x411 = INT32_MAX;
	volatile uint16_t x412 = 13206U;
	volatile int32_t t98 = 38847222;

	t98 = ((x409/(x410^x411))%x412);

	if (t98 != -12711) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x414 = 70U;
	volatile int64_t x415 = -1LL;
	uint64_t x416 = 1062719241299632LLU;

	t99 = ((x413/(x414^x415))%x416);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

