#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 2150387751799058175LL;
static uint8_t x6 = 45U;
uint8_t x22 = 30U;
static int8_t x24 = INT8_MIN;
int8_t x25 = INT8_MAX;
int32_t x31 = -97451;
static uint64_t x32 = UINT64_MAX;
uint32_t x35 = 242694U;
uint8_t x36 = 2U;
volatile int16_t x43 = 1;
static int32_t x48 = INT32_MAX;
uint64_t x50 = 1461920LLU;
static int32_t t12 = 133729;
static volatile uint64_t t13 = 110452316932732LLU;
static int8_t x57 = INT8_MIN;
int16_t x62 = -1;
int64_t x63 = -165628734620LL;
int32_t t15 = INT32_MIN;
int64_t x71 = INT64_MIN;
uint64_t t17 = 332938828507LLU;
static int64_t x79 = -4530373310LL;
volatile int32_t t19 = 30465;
uint8_t x81 = UINT8_MAX;
static volatile int32_t x83 = 31873;
int32_t x86 = 62641731;
int16_t x87 = INT16_MIN;
uint64_t t23 = 19738756278328LLU;
uint16_t x107 = 1U;
int64_t x110 = INT64_MIN;
int16_t x112 = INT16_MIN;
int32_t t27 = 127699949;
int16_t x113 = INT16_MIN;
int32_t x114 = -3361;
int32_t t29 = -28502555;
int8_t x124 = INT8_MIN;
uint16_t x127 = 12U;
uint64_t x128 = 1674503904850931400LLU;
uint64_t x129 = 245110208LLU;
int16_t x136 = 0;
int32_t t33 = 0;
static volatile uint32_t t34 = 254341U;
int64_t x141 = -112LL;
static int32_t x145 = INT32_MAX;
int64_t x147 = INT64_MIN;
uint64_t x160 = 271604654516LLU;
static int16_t x161 = INT16_MAX;
uint32_t x166 = UINT32_MAX;
int64_t x168 = INT64_MIN;
int64_t t42 = INT64_MIN;
volatile int64_t x183 = -10403922813809839LL;
int32_t x184 = -1;
volatile int32_t x186 = 1242;
volatile int64_t x188 = -1437453510833973LL;
int64_t x194 = INT64_MAX;
static uint32_t t48 = 1U;
int16_t x197 = 7909;
int32_t t49 = 12346;
int8_t x208 = 0;
int16_t x210 = 14191;
int8_t x214 = -1;
volatile int32_t t53 = -126420;
volatile int32_t t55 = -48987;
int32_t x226 = 1;
static int32_t x236 = INT32_MIN;
int8_t x240 = -1;
int16_t x242 = INT16_MIN;
uint8_t x243 = 9U;
int32_t x244 = INT32_MIN;
uint8_t x245 = UINT8_MAX;
int8_t x252 = -59;
volatile int32_t t62 = 20593;
int64_t x253 = 248200013368545375LL;
static uint16_t x255 = 14571U;
volatile int64_t x257 = INT64_MIN;
static int64_t x261 = INT64_MIN;
volatile uint64_t x262 = UINT64_MAX;
int64_t t66 = INT64_MIN;
static int32_t t68 = -731337;
static volatile int16_t x281 = 1;
int64_t x284 = INT64_MIN;
uint64_t t71 = 2013LLU;
int32_t x300 = INT32_MAX;
uint64_t x308 = UINT64_MAX;
int32_t x312 = -1924;
static int32_t x315 = -1;
int64_t x316 = INT64_MAX;
int16_t x317 = -10;
volatile int32_t t79 = 104401;
volatile uint64_t x324 = UINT64_MAX;
volatile int8_t x328 = -1;
static volatile int64_t t82 = INT64_MIN;
static uint16_t x334 = 6U;
static uint32_t x340 = 757910542U;
int32_t x345 = 207;
volatile int32_t t86 = 245661;
int8_t x349 = INT8_MAX;
int16_t x352 = 1;
static int32_t t87 = 8016970;
int64_t x360 = -1LL;
uint32_t x363 = 1522016U;
int8_t x364 = INT8_MAX;
int32_t x368 = INT32_MIN;
int32_t x371 = -45837592;
volatile int32_t x372 = -1020768233;
int32_t x373 = 15011815;
volatile uint64_t x374 = 74LLU;
static volatile int32_t t93 = 128817;
int16_t x377 = INT16_MIN;
volatile int16_t x378 = 2;
volatile int8_t x384 = 0;
int8_t x385 = INT8_MIN;
static int8_t x388 = 1;
volatile int32_t t96 = -2269207;
int32_t t97 = 6804581;
int16_t x396 = 117;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static uint8_t x2 = 2U;
	int8_t x3 = -1;
	volatile int64_t x4 = -1LL;

	t0 = (((x1^x2)==x3)|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x7 = INT32_MIN;
	static uint64_t x8 = 3798748056171LLU;
	volatile uint64_t t1 = 80188462795LLU;

	t1 = (((x5^x6)==x7)|x8);

	if (t1 != 3798748056171LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	volatile uint64_t x10 = UINT64_MAX;
	static uint8_t x11 = UINT8_MAX;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = -31018020;

	t2 = (((x9^x10)==x11)|x12);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MIN;
	uint8_t x14 = 27U;
	int8_t x15 = 3;
	static int16_t x16 = -67;
	static volatile int32_t t3 = -1;

	t3 = (((x13^x14)==x15)|x16);

	if (t3 != -67) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	volatile int64_t x18 = INT64_MAX;
	static int16_t x19 = -1;
	int32_t x20 = INT32_MAX;
	int32_t t4 = INT32_MAX;

	t4 = (((x17^x18)==x19)|x20);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint64_t x23 = 2451757302LLU;
	int32_t t5 = 232301;

	t5 = (((x21^x22)==x23)|x24);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 1043U;
	static int16_t x27 = INT16_MIN;
	uint32_t x28 = UINT32_MAX;
	uint32_t t6 = UINT32_MAX;

	t6 = (((x25^x26)==x27)|x28);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 1;
	int16_t x30 = 36;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (((x29^x30)==x31)|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	uint8_t x34 = 1U;
	volatile int32_t t8 = 101;

	t8 = (((x33^x34)==x35)|x36);

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 3;
	uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 3814;

	t9 = (((x37^x38)==x39)|x40);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static int16_t x42 = -26;
	uint64_t x44 = 1227912829118307519LLU;
	volatile uint64_t t10 = 102933361202LLU;

	t10 = (((x41^x42)==x43)|x44);

	if (t10 != 1227912829118307519LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int32_t x46 = -1;
	int8_t x47 = -1;
	int32_t t11 = INT32_MAX;

	t11 = (((x45^x46)==x47)|x48);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 78U;
	volatile uint16_t x51 = UINT16_MAX;
	int16_t x52 = -1;

	t12 = (((x49^x50)==x51)|x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 42U;
	uint64_t x54 = UINT64_MAX;
	static int8_t x55 = -1;
	static uint64_t x56 = 13172061674565LLU;

	t13 = (((x53^x54)==x55)|x56);

	if (t13 != 13172061674565LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x58 = UINT8_MAX;
	int32_t x59 = -1;
	uint64_t x60 = 21216908669LLU;
	volatile uint64_t t14 = 7212505056LLU;

	t14 = (((x57^x58)==x59)|x60);

	if (t14 != 21216908669LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	int32_t x64 = INT32_MIN;

	t15 = (((x61^x62)==x63)|x64);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int32_t x66 = -1;
	uint32_t x67 = 1U;
	volatile int8_t x68 = -1;
	volatile int32_t t16 = -149181748;

	t16 = (((x65^x66)==x67)|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 178942783453385899LLU;
	int64_t x70 = -1LL;
	static uint64_t x72 = 17132001103LLU;

	t17 = (((x69^x70)==x71)|x72);

	if (t17 != 17132001103LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	uint16_t x74 = 0U;
	volatile int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = -5811;

	t18 = (((x73^x74)==x75)|x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MAX;
	static int16_t x78 = INT16_MAX;
	int8_t x80 = INT8_MIN;

	t19 = (((x77^x78)==x79)|x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = INT32_MAX;
	int32_t x84 = 3956;
	volatile int32_t t20 = 538860125;

	t20 = (((x81^x82)==x83)|x84);

	if (t20 != 3956) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	static volatile int32_t x88 = INT32_MIN;
	int32_t t21 = INT32_MIN;

	t21 = (((x85^x86)==x87)|x88);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	static int8_t x90 = INT8_MAX;
	int64_t x91 = -1LL;
	static int16_t x92 = -1;
	int32_t t22 = 0;

	t22 = (((x89^x90)==x91)|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	static int8_t x94 = 0;
	volatile uint64_t x95 = 12LLU;
	uint64_t x96 = 29310377977721411LLU;

	t23 = (((x93^x94)==x95)|x96);

	if (t23 != 29310377977721411LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 4557105U;
	uint32_t x98 = 2890914U;
	uint32_t x99 = UINT32_MAX;
	int32_t x100 = -1;
	int32_t t24 = -1;

	t24 = (((x97^x98)==x99)|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -2;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = 7495LLU;
	volatile uint64_t t25 = 0LLU;

	t25 = (((x101^x102)==x103)|x104);

	if (t25 != 7495LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int8_t x106 = INT8_MIN;
	uint16_t x108 = 2U;
	int32_t t26 = 20762;

	t26 = (((x105^x106)==x107)|x108);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	static int8_t x111 = INT8_MAX;

	t27 = (((x109^x110)==x111)|x112);

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x115 = 5986U;
	int16_t x116 = 0;
	int32_t t28 = 39227;

	t28 = (((x113^x114)==x115)|x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -67474333115LL;
	int16_t x120 = INT16_MIN;

	t29 = (((x117^x118)==x119)|x120);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	static uint32_t x122 = 5U;
	int8_t x123 = INT8_MAX;
	int32_t t30 = 1;

	t30 = (((x121^x122)==x123)|x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = 261283967LLU;
	static uint64_t t31 = 163963858782LLU;

	t31 = (((x125^x126)==x127)|x128);

	if (t31 != 1674503904850931400LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MAX;
	static volatile int64_t x131 = INT64_MAX;
	volatile uint32_t x132 = 1931056040U;
	volatile uint32_t t32 = 479882U;

	t32 = (((x129^x130)==x131)|x132);

	if (t32 != 1931056040U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	int64_t x134 = -71924134328061LL;
	volatile int16_t x135 = INT16_MIN;

	t33 = (((x133^x134)==x135)|x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 1U;
	uint32_t x138 = 14705U;
	volatile int8_t x139 = -1;
	uint32_t x140 = 353491U;

	t34 = (((x137^x138)==x139)|x140);

	if (t34 != 353491U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = 30;
	volatile int32_t x143 = 13078;
	volatile int8_t x144 = 0;
	volatile int32_t t35 = -202124;

	t35 = (((x141^x142)==x143)|x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x146 = 5U;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = -344760107;

	t36 = (((x145^x146)==x147)|x148);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -9150458;
	int64_t x150 = INT64_MIN;
	uint16_t x151 = 3784U;
	int64_t x152 = 246085426487505LL;
	static volatile int64_t t37 = 836641493LL;

	t37 = (((x149^x150)==x151)|x152);

	if (t37 != 246085426487505LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	static uint32_t x156 = UINT32_MAX;
	uint32_t t38 = UINT32_MAX;

	t38 = (((x153^x154)==x155)|x156);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int32_t x158 = INT32_MAX;
	uint8_t x159 = UINT8_MAX;
	static uint64_t t39 = 33LLU;

	t39 = (((x157^x158)==x159)|x160);

	if (t39 != 271604654516LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 125U;
	static int32_t x163 = INT32_MAX;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = -20204825;

	t40 = (((x161^x162)==x163)|x164);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = 235U;
	volatile uint8_t x167 = 2U;
	volatile int64_t t41 = INT64_MIN;

	t41 = (((x165^x166)==x167)|x168);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 76U;
	int8_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MIN;

	t42 = (((x169^x170)==x171)|x172);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = 33;
	volatile int32_t x174 = -2996391;
	int16_t x175 = INT16_MIN;
	static uint16_t x176 = 0U;
	volatile int32_t t43 = -95554342;

	t43 = (((x173^x174)==x175)|x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	uint16_t x178 = UINT16_MAX;
	volatile int32_t x179 = -1;
	static uint8_t x180 = 119U;
	volatile int32_t t44 = 176958051;

	t44 = (((x177^x178)==x179)|x180);

	if (t44 != 119) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	volatile int32_t t45 = 888777;

	t45 = (((x181^x182)==x183)|x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = UINT32_MAX;
	int16_t x187 = -15884;
	volatile int64_t t46 = 348460LL;

	t46 = (((x185^x186)==x187)|x188);

	if (t46 != -1437453510833973LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	int32_t x192 = -223630;
	static int32_t t47 = -11492044;

	t47 = (((x189^x190)==x191)|x192);

	if (t47 != -223630) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = -1LL;
	uint64_t x195 = UINT64_MAX;
	static uint32_t x196 = 1732U;

	t48 = (((x193^x194)==x195)|x196);

	if (t48 != 1732U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 103166434910200LLU;
	int16_t x200 = INT16_MIN;

	t49 = (((x197^x198)==x199)|x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MIN;
	int16_t x202 = -1;
	volatile uint16_t x203 = UINT16_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = INT32_MIN;

	t50 = (((x201^x202)==x203)|x204);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	uint8_t x206 = 6U;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t t51 = -149997;

	t51 = (((x205^x206)==x207)|x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	int16_t x212 = -1;
	int32_t t52 = -2793047;

	t52 = (((x209^x210)==x211)|x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 1U;
	int16_t x215 = INT16_MIN;
	volatile int16_t x216 = 764;

	t53 = (((x213^x214)==x215)|x216);

	if (t53 != 764) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	static int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -5156LL;
	int64_t t54 = -34255LL;

	t54 = (((x217^x218)==x219)|x220);

	if (t54 != -5156LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 1213;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 25410U;
	int16_t x224 = -1;

	t55 = (((x221^x222)==x223)|x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int16_t x227 = INT16_MAX;
	int8_t x228 = -1;
	int32_t t56 = -705;

	t56 = (((x225^x226)==x227)|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -1LL;
	int16_t x230 = INT16_MAX;
	int16_t x231 = -1;
	int8_t x232 = 0;
	static volatile int32_t t57 = -3252031;

	t57 = (((x229^x230)==x231)|x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = -1;
	int32_t x235 = -1;
	volatile int32_t t58 = INT32_MIN;

	t58 = (((x233^x234)==x235)|x236);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = -425612609586665LL;
	volatile int16_t x238 = -1;
	uint32_t x239 = UINT32_MAX;
	int32_t t59 = 94951484;

	t59 = (((x237^x238)==x239)|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int32_t t60 = INT32_MIN;

	t60 = (((x241^x242)==x243)|x244);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MIN;
	uint32_t x247 = 0U;
	static uint64_t x248 = 146903019146LLU;
	uint64_t t61 = 445728936LLU;

	t61 = (((x245^x246)==x247)|x248);

	if (t61 != 146903019146LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 5U;
	static int16_t x250 = 541;
	volatile int8_t x251 = INT8_MIN;

	t62 = (((x249^x250)==x251)|x252);

	if (t62 != -59) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MAX;
	int64_t x256 = INT64_MAX;
	volatile int64_t t63 = INT64_MAX;

	t63 = (((x253^x254)==x255)|x256);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x258 = INT16_MIN;
	volatile int32_t x259 = INT32_MIN;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (((x257^x258)==x259)|x260);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x263 = -1;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 6;

	t65 = (((x261^x262)==x263)|x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 22U;
	int64_t x266 = -1LL;
	static uint8_t x267 = 5U;
	int64_t x268 = INT64_MIN;

	t66 = (((x265^x266)==x267)|x268);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 0U;
	static uint8_t x270 = 30U;
	int64_t x271 = INT64_MAX;
	uint64_t x272 = UINT64_MAX;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = (((x269^x270)==x271)|x272);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 4U;
	static int32_t x274 = -11219;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = 0U;

	t68 = (((x273^x274)==x275)|x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 385U;
	static int8_t x278 = INT8_MAX;
	static int32_t x279 = 1025;
	uint64_t x280 = UINT64_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (((x277^x278)==x279)|x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	int64_t t70 = INT64_MIN;

	t70 = (((x281^x282)==x283)|x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static int64_t x286 = -3748109399013LL;
	int64_t x287 = -525742LL;
	uint64_t x288 = 3LLU;

	t71 = (((x285^x286)==x287)|x288);

	if (t71 != 3LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int32_t x290 = 34033;
	int64_t x291 = INT64_MIN;
	volatile int32_t x292 = 0;
	int32_t t72 = -8909169;

	t72 = (((x289^x290)==x291)|x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -709366100;
	int32_t x294 = 9;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = 3U;
	int32_t t73 = 976;

	t73 = (((x293^x294)==x295)|x296);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int32_t x298 = INT32_MIN;
	int16_t x299 = 14;
	int32_t t74 = INT32_MAX;

	t74 = (((x297^x298)==x299)|x300);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 465719024833888LLU;
	uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MIN;
	volatile int64_t x304 = INT64_MIN;
	static int64_t t75 = INT64_MIN;

	t75 = (((x301^x302)==x303)|x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	int16_t x306 = INT16_MAX;
	uint16_t x307 = 5354U;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (((x305^x306)==x307)|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 21071LL;
	static int16_t x310 = INT16_MIN;
	volatile uint8_t x311 = 26U;
	static volatile int32_t t77 = 81536758;

	t77 = (((x309^x310)==x311)|x312);

	if (t77 != -1924) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int8_t x314 = 1;
	volatile int64_t t78 = INT64_MAX;

	t78 = (((x313^x314)==x315)|x316);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = 21U;
	int16_t x319 = 3;
	uint8_t x320 = 1U;

	t79 = (((x317^x318)==x319)|x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	uint16_t x322 = 8585U;
	static int16_t x323 = 8816;
	static uint64_t t80 = UINT64_MAX;

	t80 = (((x321^x322)==x323)|x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 3264882294LLU;
	int32_t x326 = 7;
	int8_t x327 = -2;
	volatile int32_t t81 = -999733214;

	t81 = (((x325^x326)==x327)|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = -3;
	int64_t x330 = -1LL;
	int64_t x331 = -1LL;
	int64_t x332 = INT64_MIN;

	t82 = (((x329^x330)==x331)|x332);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -12986;
	volatile int16_t x335 = -1;
	uint64_t x336 = 5323114273994LLU;
	uint64_t t83 = 3650014LLU;

	t83 = (((x333^x334)==x335)|x336);

	if (t83 != 5323114273994LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	int64_t x338 = INT64_MAX;
	int32_t x339 = -1;
	uint32_t t84 = 112134U;

	t84 = (((x337^x338)==x339)|x340);

	if (t84 != 757910542U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	volatile int32_t x342 = -2;
	uint8_t x343 = 0U;
	uint8_t x344 = 9U;
	volatile int32_t t85 = 301049575;

	t85 = (((x341^x342)==x343)|x344);

	if (t85 != 9) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MAX;
	uint32_t x347 = 22860535U;
	int8_t x348 = INT8_MIN;

	t86 = (((x345^x346)==x347)|x348);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = 19807U;
	int8_t x351 = INT8_MIN;

	t87 = (((x349^x350)==x351)|x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = 55;
	volatile int16_t x354 = INT16_MAX;
	uint32_t x355 = 42366U;
	static int32_t x356 = -1;
	int32_t t88 = 1992;

	t88 = (((x353^x354)==x355)|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = 278U;
	int8_t x358 = INT8_MAX;
	static int32_t x359 = -1;
	volatile int64_t t89 = 1878873491158846569LL;

	t89 = (((x357^x358)==x359)|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -473957592;
	int8_t x362 = -2;
	volatile int32_t t90 = -344;

	t90 = (((x361^x362)==x363)|x364);

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 31U;
	static volatile int64_t x366 = -1LL;
	static volatile int8_t x367 = -1;
	volatile int32_t t91 = INT32_MIN;

	t91 = (((x365^x366)==x367)|x368);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 0U;
	int32_t x370 = INT32_MIN;
	static volatile int32_t t92 = -353083;

	t92 = (((x369^x370)==x371)|x372);

	if (t92 != -1020768233) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 576U;

	t93 = (((x373^x374)==x375)|x376);

	if (t93 != 576) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x379 = INT16_MIN;
	uint16_t x380 = 26795U;
	static int32_t t94 = -226;

	t94 = (((x377^x378)==x379)|x380);

	if (t94 != 26795) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 15U;
	volatile int8_t x382 = -1;
	volatile uint32_t x383 = 33211102U;
	int32_t t95 = -682055;

	t95 = (((x381^x382)==x383)|x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = UINT32_MAX;
	int64_t x387 = 32148LL;

	t96 = (((x385^x386)==x387)|x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MIN;
	int8_t x390 = -1;
	uint32_t x391 = 62U;
	int32_t x392 = -89026;

	t97 = (((x389^x390)==x391)|x392);

	if (t97 != -89026) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 1;
	uint16_t x394 = 12748U;
	int16_t x395 = 9;
	int32_t t98 = 1044434;

	t98 = (((x393^x394)==x395)|x396);

	if (t98 != 117) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 3545022067175LLU;
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -12063;

	t99 = (((x397^x398)==x399)|x400);

	if (t99 != -32768) { NG(); } else { ; }
	
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

