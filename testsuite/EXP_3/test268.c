#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 10;
int64_t x12 = 47774410462425814LL;
int8_t x16 = 1;
int32_t x19 = INT32_MIN;
volatile int32_t t3 = -380154;
uint64_t x22 = 40607658398082LLU;
int32_t x24 = INT32_MIN;
static volatile uint64_t x26 = 206LLU;
int64_t x30 = 26339025293180LL;
volatile int32_t t6 = -192;
uint64_t x51 = 53715LLU;
int32_t x54 = 10178;
uint32_t x59 = 29505U;
volatile uint64_t x63 = 881346158889271848LLU;
volatile int32_t t12 = 34665794;
int16_t x66 = 3;
uint64_t x68 = UINT64_MAX;
int32_t t14 = 4815;
int64_t x75 = 2785733331093767128LL;
int8_t x80 = INT8_MIN;
volatile int32_t t16 = 45;
uint32_t x81 = UINT32_MAX;
static uint32_t x82 = 71006U;
int32_t x90 = -157;
volatile int32_t t20 = 494304627;
uint16_t x97 = 525U;
static uint16_t x108 = 21U;
volatile int32_t t23 = 1262;
static int8_t x109 = -1;
int8_t x114 = -15;
uint16_t x115 = 25411U;
static int8_t x118 = INT8_MIN;
uint32_t x125 = UINT32_MAX;
int16_t x128 = -24;
static volatile int32_t t27 = 1604806;
static uint16_t x135 = 422U;
int32_t x136 = -1658382;
static int32_t t33 = 50;
int32_t x157 = 27;
uint64_t x158 = 370821LLU;
int64_t x165 = -1LL;
int8_t x173 = 3;
int16_t x175 = -1;
uint16_t x177 = UINT16_MAX;
static int64_t x183 = -54102LL;
static volatile int16_t x190 = -1;
int16_t x194 = -11660;
int16_t x200 = -1;
uint64_t x209 = 662612632LLU;
volatile int64_t x213 = INT64_MAX;
volatile int32_t t48 = -2;
volatile uint8_t x218 = 80U;
static uint16_t x223 = 245U;
uint64_t x229 = 149292167LLU;
uint8_t x230 = 1U;
uint64_t x232 = 85067235846LLU;
static int64_t x237 = -181863LL;
static volatile uint16_t x252 = 0U;
static int32_t t56 = 1545;
uint16_t x254 = 29199U;
volatile int8_t x255 = 1;
int16_t x256 = -1;
volatile int32_t t57 = 79637703;
uint32_t x258 = 252957U;
int32_t t61 = 1387842;
int32_t t62 = -381294073;
static int16_t x278 = INT16_MIN;
int64_t x281 = INT64_MIN;
static int64_t x284 = 7455219LL;
uint64_t x299 = 12135LLU;
int8_t x303 = INT8_MIN;
int64_t x310 = INT64_MIN;
static int32_t x311 = -13001;
int8_t x315 = INT8_MIN;
volatile uint8_t x325 = 0U;
static int16_t x328 = -1;
volatile uint32_t x331 = UINT32_MAX;
int32_t t72 = -119770;
int16_t x339 = -1;
static volatile int32_t t74 = 33;
static int16_t x344 = 42;
int32_t t75 = 27584;
int32_t x346 = -1;
volatile int32_t t77 = 511133464;
static uint16_t x361 = 60U;
int64_t x363 = INT64_MAX;
uint32_t x367 = 2198U;
uint32_t x372 = 5474762U;
static int16_t x376 = INT16_MAX;
static uint8_t x385 = 1U;
uint8_t x389 = 28U;
int16_t x395 = -1;
int8_t x399 = -1;
int8_t x400 = -56;
static uint64_t x425 = 2708LLU;
static volatile int32_t t96 = 0;
uint16_t x430 = UINT16_MAX;
static int32_t x437 = INT32_MIN;
int32_t x442 = -934162985;
uint8_t x443 = 21U;
static int32_t x444 = -80244;
volatile int32_t t99 = -39;


void f0(void) {
	uint64_t x1 = 3367827351195572LLU;
	int64_t x3 = 26735274478LL;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -1;

	t0 = ((x1==x2)==(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 129U;
	int8_t x10 = INT8_MIN;
	volatile uint8_t x11 = 66U;
	int32_t t1 = 1;

	t1 = ((x9==x10)==(x11-x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = 282LL;
	static int32_t x14 = INT32_MIN;
	uint16_t x15 = 4U;
	volatile int32_t t2 = -2;

	t2 = ((x13==x14)==(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	volatile int8_t x18 = -26;
	static volatile int64_t x20 = -696022140340LL;

	t3 = ((x17==x18)==(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int32_t t4 = -721059;

	t4 = ((x21==x22)==(x23-x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	uint16_t x27 = 1078U;
	int64_t x28 = -1LL;
	volatile int32_t t5 = -40103825;

	t5 = ((x25==x26)==(x27-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	volatile uint8_t x31 = UINT8_MAX;
	uint16_t x32 = 12U;

	t6 = ((x29==x30)==(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x33 = -1;
	static uint64_t x34 = 6408122875LLU;
	uint32_t x35 = 960675488U;
	volatile int32_t x36 = INT32_MIN;
	volatile int32_t t7 = 5572;

	t7 = ((x33==x34)==(x35-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MIN;
	int64_t x47 = -1LL;
	int8_t x48 = 0;
	int32_t t8 = 2190335;

	t8 = ((x45==x46)==(x47-x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = INT16_MIN;
	uint64_t x50 = 6684387986381351LLU;
	int32_t x52 = 230905;
	volatile int32_t t9 = 15;

	t9 = ((x49==x50)==(x51-x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MAX;
	static volatile int32_t x55 = 103;
	uint64_t x56 = 9459316646LLU;
	volatile int32_t t10 = -33745972;

	t10 = ((x53==x54)==(x55-x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 88U;
	uint32_t x58 = 197U;
	uint64_t x60 = 2599700LLU;
	static volatile int32_t t11 = 0;

	t11 = ((x57==x58)==(x59-x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1LL;
	volatile int16_t x62 = INT16_MIN;
	int8_t x64 = INT8_MIN;

	t12 = ((x61==x62)==(x63-x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = 1;
	int16_t x67 = INT16_MIN;
	static volatile int32_t t13 = 5;

	t13 = ((x65==x66)==(x67-x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = INT32_MIN;
	int32_t x70 = -1;
	int64_t x71 = 3320627LL;
	uint64_t x72 = UINT64_MAX;

	t14 = ((x69==x70)==(x71-x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MIN;
	uint64_t x74 = 4005005617311224LLU;
	int8_t x76 = INT8_MIN;
	int32_t t15 = 57183202;

	t15 = ((x73==x74)==(x75-x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 8;
	int32_t x78 = INT32_MAX;
	int16_t x79 = 1;

	t16 = ((x77==x78)==(x79-x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x83 = INT16_MIN;
	static int64_t x84 = 1LL;
	volatile int32_t t17 = 1106;

	t17 = ((x81==x82)==(x83-x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = UINT8_MAX;
	uint64_t x86 = 9LLU;
	int16_t x87 = INT16_MIN;
	static uint16_t x88 = UINT16_MAX;
	volatile int32_t t18 = -7861415;

	t18 = ((x85==x86)==(x87-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x91 = INT32_MIN;
	volatile int32_t x92 = -1;
	volatile int32_t t19 = -7;

	t19 = ((x89==x90)==(x91-x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x93 = 3U;
	static int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	int16_t x96 = -3715;

	t20 = ((x93==x94)==(x95-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x98 = 12;
	static int32_t x99 = -1;
	static uint8_t x100 = 3U;
	static int32_t t21 = -4408765;

	t21 = ((x97==x98)==(x99-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x101 = 3622U;
	static int64_t x102 = INT64_MIN;
	uint64_t x103 = 3LLU;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t22 = -934;

	t22 = ((x101==x102)==(x103-x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x105 = 10U;
	uint8_t x106 = 7U;
	volatile uint8_t x107 = 4U;

	t23 = ((x105==x106)==(x107-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x110 = INT64_MIN;
	int64_t x111 = -1LL;
	int64_t x112 = 2LL;
	volatile int32_t t24 = 1;

	t24 = ((x109==x110)==(x111-x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x113 = 5494067112LLU;
	int64_t x116 = -1LL;
	volatile int32_t t25 = -6109;

	t25 = ((x113==x114)==(x115-x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -293;
	static int16_t x119 = 10;
	int16_t x120 = INT16_MIN;
	volatile int32_t t26 = 2;

	t26 = ((x117==x118)==(x119-x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x126 = -1;
	int64_t x127 = 6548895LL;

	t27 = ((x125==x126)==(x127-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	static int8_t x131 = -1;
	int16_t x132 = 1;
	int32_t t28 = -177103795;

	t28 = ((x129==x130)==(x131-x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x133 = UINT8_MAX;
	volatile int64_t x134 = 26284LL;
	int32_t t29 = 146954;

	t29 = ((x133==x134)==(x135-x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 3U;
	static int8_t x138 = -1;
	int64_t x139 = -288LL;
	int32_t x140 = -159681;
	static int32_t t30 = -3969270;

	t30 = ((x137==x138)==(x139-x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x141 = INT16_MIN;
	int32_t x142 = -1;
	uint16_t x143 = 3U;
	volatile uint64_t x144 = 79818725642LLU;
	int32_t t31 = 64123428;

	t31 = ((x141==x142)==(x143-x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MAX;
	static uint32_t x146 = UINT32_MAX;
	int64_t x147 = INT64_MAX;
	static uint8_t x148 = UINT8_MAX;
	int32_t t32 = -21;

	t32 = ((x145==x146)==(x147-x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -52;
	volatile int64_t x150 = INT64_MIN;
	uint8_t x151 = 12U;
	static volatile int64_t x152 = INT64_MAX;

	t33 = ((x149==x150)==(x151-x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x159 = -1;
	uint16_t x160 = 10U;
	volatile int32_t t34 = 1023;

	t34 = ((x157==x158)==(x159-x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = 11941140U;
	uint8_t x162 = 35U;
	int16_t x163 = INT16_MIN;
	int8_t x164 = -4;
	volatile int32_t t35 = -354749;

	t35 = ((x161==x162)==(x163-x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = INT64_MIN;
	uint64_t x167 = 7894295441065508LLU;
	uint64_t x168 = UINT64_MAX;
	int32_t t36 = -69;

	t36 = ((x165==x166)==(x167-x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	static int16_t x171 = -1;
	int16_t x172 = -2526;
	volatile int32_t t37 = 61691;

	t37 = ((x169==x170)==(x171-x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = INT8_MIN;
	int32_t x176 = -1;
	int32_t t38 = 10952;

	t38 = ((x173==x174)==(x175-x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x178 = -1LL;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t39 = -2;

	t39 = ((x177==x178)==(x179-x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = 1;
	volatile int64_t x182 = -1LL;
	int32_t x184 = INT32_MIN;
	int32_t t40 = 15152200;

	t40 = ((x181==x182)==(x183-x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -1;
	uint16_t x186 = 1U;
	static int8_t x187 = 0;
	int64_t x188 = -1LL;
	volatile int32_t t41 = 2;

	t41 = ((x185==x186)==(x187-x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = UINT8_MAX;
	int8_t x191 = INT8_MAX;
	volatile int64_t x192 = -2LL;
	volatile int32_t t42 = 18;

	t42 = ((x189==x190)==(x191-x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MIN;
	volatile int16_t x195 = -1;
	volatile int16_t x196 = INT16_MIN;
	static volatile int32_t t43 = 195708701;

	t43 = ((x193==x194)==(x195-x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 535025280U;
	static int32_t x198 = INT32_MAX;
	static uint16_t x199 = 17U;
	int32_t t44 = 729;

	t44 = ((x197==x198)==(x199-x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 185U;
	volatile int8_t x202 = -20;
	int64_t x203 = -1587626452LL;
	static int64_t x204 = -923669LL;
	volatile int32_t t45 = -49;

	t45 = ((x201==x202)==(x203-x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x205 = 4;
	int32_t x206 = 203;
	volatile int64_t x207 = -65953596259LL;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t46 = 132479;

	t46 = ((x205==x206)==(x207-x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x210 = 295345649;
	static int8_t x211 = -2;
	static int32_t x212 = -2177;
	static volatile int32_t t47 = -116965818;

	t47 = ((x209==x210)==(x211-x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x214 = 3U;
	volatile int64_t x215 = -1LL;
	static int16_t x216 = INT16_MIN;

	t48 = ((x213==x214)==(x215-x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	int8_t x220 = -20;
	int32_t t49 = -1530;

	t49 = ((x217==x218)==(x219-x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 2679516644LLU;
	static int8_t x222 = INT8_MAX;
	int8_t x224 = -4;
	static int32_t t50 = -408374790;

	t50 = ((x221==x222)==(x223-x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = 1110;
	int32_t x226 = INT32_MIN;
	static uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;
	int32_t t51 = -710727531;

	t51 = ((x225==x226)==(x227-x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x231 = 1U;
	volatile int32_t t52 = 34457571;

	t52 = ((x229==x230)==(x231-x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x238 = INT8_MIN;
	static uint32_t x239 = 968642206U;
	int16_t x240 = -1;
	volatile int32_t t53 = 0;

	t53 = ((x237==x238)==(x239-x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x241 = -19660052LL;
	int64_t x242 = 8562189905598207LL;
	volatile int32_t x243 = INT32_MIN;
	volatile int8_t x244 = INT8_MIN;
	int32_t t54 = 14344044;

	t54 = ((x241==x242)==(x243-x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = 522U;
	static volatile uint32_t x246 = 5407644U;
	int16_t x247 = INT16_MIN;
	volatile uint64_t x248 = 384446LLU;
	int32_t t55 = 32;

	t55 = ((x245==x246)==(x247-x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 183206LLU;
	uint16_t x251 = UINT16_MAX;

	t56 = ((x249==x250)==(x251-x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = -109;

	t57 = ((x253==x254)==(x255-x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x259 = 10123031536154LLU;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t58 = -221301;

	t58 = ((x257==x258)==(x259-x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = 16031U;
	static int32_t x262 = 10195101;
	static int8_t x263 = INT8_MAX;
	int16_t x264 = INT16_MAX;
	static int32_t t59 = 48073684;

	t59 = ((x261==x262)==(x263-x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = 6U;
	uint64_t x266 = 59106926490432569LLU;
	static int16_t x267 = 15560;
	volatile uint32_t x268 = 389U;
	int32_t t60 = -1512664;

	t60 = ((x265==x266)==(x267-x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x269 = 175;
	uint64_t x270 = UINT64_MAX;
	volatile int8_t x271 = -5;
	volatile uint16_t x272 = 30U;

	t61 = ((x269==x270)==(x271-x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x273 = 15067772;
	volatile int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	uint64_t x276 = UINT64_MAX;

	t62 = ((x273==x274)==(x275-x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	static uint64_t x280 = 21388899715019481LLU;
	volatile int32_t t63 = 47;

	t63 = ((x277==x278)==(x279-x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x282 = INT16_MIN;
	uint32_t x283 = 43073U;
	int32_t t64 = 3;

	t64 = ((x281==x282)==(x283-x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = -1;
	static int8_t x290 = 13;
	int8_t x291 = INT8_MAX;
	static int64_t x292 = -197038328LL;
	volatile int32_t t65 = -13513860;

	t65 = ((x289==x290)==(x291-x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MAX;
	uint32_t x300 = 204U;
	int32_t t66 = -963973998;

	t66 = ((x297==x298)==(x299-x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MAX;
	int8_t x304 = -3;
	volatile int32_t t67 = -1;

	t67 = ((x301==x302)==(x303-x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x305 = INT32_MIN;
	volatile int16_t x306 = -40;
	volatile int8_t x307 = INT8_MIN;
	int32_t x308 = -276440034;
	int32_t t68 = 45;

	t68 = ((x305==x306)==(x307-x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x309 = 28U;
	int64_t x312 = -3875760840LL;
	volatile int32_t t69 = 9465799;

	t69 = ((x309==x310)==(x311-x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = UINT16_MAX;
	int64_t x314 = 72752447LL;
	uint32_t x316 = 20736U;
	volatile int32_t t70 = -316;

	t70 = ((x313==x314)==(x315-x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x326 = INT8_MIN;
	volatile int8_t x327 = INT8_MIN;
	int32_t t71 = 896;

	t71 = ((x325==x326)==(x327-x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x329 = 423U;
	int32_t x330 = -1;
	volatile int8_t x332 = INT8_MIN;

	t72 = ((x329==x330)==(x331-x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = 1918177;
	int32_t x334 = INT32_MAX;
	int16_t x335 = 0;
	static uint32_t x336 = 1422U;
	volatile int32_t t73 = -57019467;

	t73 = ((x333==x334)==(x335-x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x337 = 7496;
	int64_t x338 = 1263392LL;
	uint32_t x340 = 7742734U;

	t74 = ((x337==x338)==(x339-x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint32_t x342 = UINT32_MAX;
	static volatile int16_t x343 = -1313;

	t75 = ((x341==x342)==(x343-x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x345 = -1;
	volatile int16_t x347 = INT16_MAX;
	int64_t x348 = -1LL;
	static int32_t t76 = -193611365;

	t76 = ((x345==x346)==(x347-x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x349 = INT32_MAX;
	static uint32_t x350 = 1142U;
	int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MAX;

	t77 = ((x349==x350)==(x351-x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x353 = INT64_MAX;
	int16_t x354 = -1;
	uint32_t x355 = 144U;
	uint64_t x356 = 489587913727370LLU;
	int32_t t78 = 185;

	t78 = ((x353==x354)==(x355-x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MAX;
	static volatile int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t79 = 0;

	t79 = ((x357==x358)==(x359-x360));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x362 = INT32_MIN;
	uint8_t x364 = 6U;
	volatile int32_t t80 = -634;

	t80 = ((x361==x362)==(x363-x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x365 = 0U;
	int8_t x366 = INT8_MIN;
	volatile int8_t x368 = INT8_MIN;
	static volatile int32_t t81 = 6395;

	t81 = ((x365==x366)==(x367-x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = -1LL;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -25040;
	volatile int32_t t82 = -10;

	t82 = ((x369==x370)==(x371-x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = -1;
	volatile int32_t x375 = 48315702;
	volatile int32_t t83 = 8;

	t83 = ((x373==x374)==(x375-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x377 = 65U;
	volatile int32_t x378 = INT32_MIN;
	static uint8_t x379 = 2U;
	static int64_t x380 = 59391LL;
	int32_t t84 = 1;

	t84 = ((x377==x378)==(x379-x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 462911690U;
	int16_t x382 = 782;
	static int16_t x383 = INT16_MAX;
	static int32_t x384 = 2;
	volatile int32_t t85 = 6260;

	t85 = ((x381==x382)==(x383-x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x386 = -1;
	static volatile int32_t x387 = 77813828;
	static volatile int16_t x388 = 1;
	static int32_t t86 = -372;

	t86 = ((x385==x386)==(x387-x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x390 = UINT64_MAX;
	volatile int8_t x391 = 1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t87 = -102002538;

	t87 = ((x389==x390)==(x391-x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = INT32_MAX;
	volatile uint32_t x394 = 1961998U;
	static int32_t x396 = INT32_MIN;
	int32_t t88 = 5800099;

	t88 = ((x393==x394)==(x395-x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x397 = 28012U;
	uint8_t x398 = 6U;
	int32_t t89 = -7;

	t89 = ((x397==x398)==(x399-x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = INT32_MIN;
	static volatile int8_t x403 = INT8_MAX;
	static uint64_t x404 = 117937555LLU;
	volatile int32_t t90 = 568673047;

	t90 = ((x401==x402)==(x403-x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = -1LL;
	int16_t x406 = 1954;
	uint64_t x407 = 1573LLU;
	int64_t x408 = 1LL;
	volatile int32_t t91 = 7786262;

	t91 = ((x405==x406)==(x407-x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x409 = 4U;
	volatile int64_t x410 = -507LL;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MAX;
	int32_t t92 = 17085;

	t92 = ((x409==x410)==(x411-x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = UINT8_MAX;
	int64_t x414 = INT64_MIN;
	int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	volatile int32_t t93 = -1;

	t93 = ((x413==x414)==(x415-x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x417 = UINT16_MAX;
	uint16_t x418 = UINT16_MAX;
	static uint16_t x419 = 376U;
	static uint64_t x420 = 218725038LLU;
	static int32_t t94 = 6492776;

	t94 = ((x417==x418)==(x419-x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = INT8_MIN;
	int64_t x422 = 88624459742330LL;
	static uint16_t x423 = 452U;
	uint32_t x424 = UINT32_MAX;
	static volatile int32_t t95 = 2579;

	t95 = ((x421==x422)==(x423-x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x426 = INT16_MIN;
	uint64_t x427 = 131171LLU;
	int8_t x428 = INT8_MAX;

	t96 = ((x425==x426)==(x427-x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x429 = UINT8_MAX;
	static uint16_t x431 = UINT16_MAX;
	uint8_t x432 = UINT8_MAX;
	int32_t t97 = 1;

	t97 = ((x429==x430)==(x431-x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x438 = 86891486213011LLU;
	int16_t x439 = 1341;
	int16_t x440 = 235;
	static int32_t t98 = 0;

	t98 = ((x437==x438)==(x439-x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = UINT8_MAX;

	t99 = ((x441==x442)==(x443-x444));

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

