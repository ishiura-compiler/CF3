#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = INT64_MIN;
int64_t t4 = -183974573867876325LL;
uint64_t t5 = 1880964LLU;
static volatile int16_t x29 = INT16_MIN;
volatile uint64_t x33 = 480830LLU;
uint16_t x34 = 65U;
volatile uint64_t t8 = 24684LLU;
static int32_t x37 = -346;
uint64_t t9 = 5911376572272LLU;
int64_t x50 = -1LL;
int16_t x54 = INT16_MIN;
int32_t x55 = INT32_MIN;
static int8_t x61 = INT8_MIN;
volatile int32_t t15 = 26006379;
int8_t x79 = -1;
volatile int16_t x85 = INT16_MIN;
int32_t x107 = INT32_MIN;
volatile uint16_t x114 = UINT16_MAX;
int16_t x115 = INT16_MIN;
volatile int8_t x116 = -1;
static int64_t t28 = INT64_MIN;
int64_t t31 = 6057LL;
int64_t x134 = -1LL;
uint64_t x135 = 1943226289452017250LLU;
uint8_t x141 = 19U;
int64_t x143 = INT64_MIN;
int16_t x144 = INT16_MIN;
static int64_t t35 = -1280501LL;
volatile uint64_t x147 = 11081787099658LLU;
uint64_t t36 = 469LLU;
int8_t x155 = INT8_MIN;
volatile int64_t t38 = -6144781733475737LL;
uint16_t x159 = 0U;
static volatile int64_t x162 = INT64_MIN;
int64_t x167 = -832275881LL;
volatile uint64_t t42 = 4928439952618LLU;
static volatile int64_t t44 = 532155545183LL;
static int32_t x181 = -1;
int8_t x184 = INT8_MAX;
uint32_t t45 = UINT32_MAX;
volatile int32_t x185 = -825;
volatile uint8_t x187 = 125U;
volatile uint64_t t46 = 176586757083LLU;
static int64_t x192 = 1LL;
int32_t x195 = INT32_MAX;
static volatile uint64_t t49 = UINT64_MAX;
uint8_t x202 = UINT8_MAX;
uint32_t x205 = 286549U;
int32_t x209 = INT32_MIN;
int8_t x213 = -14;
int64_t x231 = INT64_MIN;
int32_t x233 = INT32_MIN;
static int32_t x237 = INT32_MIN;
int64_t t59 = 2139297350092LL;
static uint64_t x242 = 1211097959113067382LLU;
int32_t x253 = INT32_MAX;
static int64_t x255 = -1LL;
int8_t x259 = 0;
uint16_t x262 = 71U;
volatile int64_t x266 = 4728615LL;
static int16_t x270 = -1;
int32_t x271 = -1;
static volatile uint32_t t67 = 0U;
static int64_t t68 = -2975LL;
volatile uint64_t x278 = 205006836348469LLU;
int8_t x281 = INT8_MAX;
static volatile int64_t x283 = -119431250756LL;
static uint32_t x285 = 36629U;
uint64_t t71 = 5184LLU;
static int8_t x291 = INT8_MAX;
int32_t x292 = INT32_MIN;
int64_t t73 = 1LL;
int32_t x306 = -22;
uint16_t x334 = 121U;
int16_t x344 = INT16_MAX;
int8_t x350 = 42;
static volatile int8_t x360 = -1;
uint8_t x368 = 2U;
uint32_t x371 = UINT32_MAX;
uint64_t x375 = UINT64_MAX;
static uint32_t x376 = 197U;
volatile uint64_t t93 = 0LLU;
volatile int64_t t94 = INT64_MAX;
int64_t x381 = -3223LL;
uint8_t x385 = 26U;
int16_t x387 = 6;
int64_t x390 = -4010360LL;
volatile uint64_t t97 = 37257855274947672LLU;


void f0(void) {
	uint64_t x1 = 908250080821LLU;
	int8_t x2 = -1;
	uint16_t x3 = 2678U;
	uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 898803312920227650LLU;

	t0 = (x1&((x2|x3)|x4));

	if (t0 != 908250080821LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 594U;
	volatile uint16_t x6 = 6832U;
	int64_t x8 = 2757328745LL;
	static volatile int64_t t1 = -50688LL;

	t1 = (x5&((x6|x7)|x8));

	if (t1 != 592LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	int8_t x12 = 14;
	volatile int64_t t2 = -42LL;

	t2 = (x9&((x10|x11)|x12));

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = -1LL;
	int8_t x15 = INT8_MAX;
	static uint64_t x16 = 69793LLU;
	uint64_t t3 = 6868727993462LLU;

	t3 = (x13&((x14|x15)|x16));

	if (t3 != 65535LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MIN;
	int8_t x20 = -5;

	t4 = (x17&((x18|x19)|x20));

	if (t4 != -5LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1U;
	int16_t x22 = -40;
	uint32_t x23 = UINT32_MAX;
	volatile uint64_t x24 = UINT64_MAX;

	t5 = (x21&((x22|x23)|x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -334LL;
	int32_t x26 = -12342;
	static volatile int8_t x27 = 0;
	volatile uint16_t x28 = UINT16_MAX;
	static int64_t t6 = -853827656401378765LL;

	t6 = (x25&((x26|x27)|x28));

	if (t6 != -334LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	volatile int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	int64_t t7 = 4879730337032033LL;

	t7 = (x29&((x30|x31)|x32));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x35 = 743U;
	static int16_t x36 = INT16_MIN;

	t8 = (x33&((x34|x35)|x36));

	if (t8 != 459302LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = 1;
	volatile uint64_t x39 = 742277471537635LLU;
	int8_t x40 = INT8_MAX;

	t9 = (x37&((x38|x39)|x40));

	if (t9 != 742277471537318LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = 56LL;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MAX;
	volatile int64_t t10 = -863606144737640LL;

	t10 = (x41&((x42|x43)|x44));

	if (t10 != 56LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -1LL;
	int16_t x46 = INT16_MIN;
	volatile uint32_t x47 = UINT32_MAX;
	int16_t x48 = INT16_MAX;
	int64_t t11 = -216503425786599208LL;

	t11 = (x45&((x46|x47)|x48));

	if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 6;
	static int64_t x51 = -3490LL;
	int8_t x52 = 42;
	volatile int64_t t12 = -444456632602393840LL;

	t12 = (x49&((x50|x51)|x52));

	if (t12 != 6LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x56 = 1862338419U;
	volatile int64_t t13 = 397609212502LL;

	t13 = (x53&((x54|x55)|x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile uint16_t x58 = 96U;
	int64_t x59 = 13512886867844100LL;
	volatile int64_t x60 = 16751674719587110LL;
	volatile int64_t t14 = -41805411LL;

	t14 = (x57&((x58|x59)|x60));

	if (t14 != 57190LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	int16_t x64 = -6032;

	t15 = (x61&((x62|x63)|x64));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 1161LL;
	volatile uint16_t x66 = UINT16_MAX;
	volatile int64_t x67 = -136333336350827269LL;
	volatile int64_t x68 = INT64_MIN;
	volatile int64_t t16 = -70LL;

	t16 = (x65&((x66|x67)|x68));

	if (t16 != 1161LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	static int64_t x70 = 8140LL;
	static int64_t x71 = -1LL;
	int32_t x72 = -15;
	static volatile int64_t t17 = -4476714017156916995LL;

	t17 = (x69&((x70|x71)|x72));

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 0;
	int64_t x74 = 94LL;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	int64_t t18 = 1999040LL;

	t18 = (x73&((x74|x75)|x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 31930LLU;
	int64_t x78 = INT64_MAX;
	int16_t x80 = -1;
	uint64_t t19 = 262835923LLU;

	t19 = (x77&((x78|x79)|x80));

	if (t19 != 31930LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x81 = 86U;
	int64_t x82 = INT64_MIN;
	volatile uint64_t x83 = 1478438497814433LLU;
	int32_t x84 = -1;
	uint64_t t20 = 52760824479LLU;

	t20 = (x81&((x82|x83)|x84));

	if (t20 != 86LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = 6U;
	uint32_t x87 = UINT32_MAX;
	static int8_t x88 = -1;
	uint32_t t21 = 741955708U;

	t21 = (x85&((x86|x87)|x88));

	if (t21 != 4294934528U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 97U;
	static int16_t x90 = INT16_MAX;
	int16_t x91 = INT16_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -145;

	t22 = (x89&((x90|x91)|x92));

	if (t22 != 97) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 2309LLU;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = -1;
	static uint64_t x96 = 389496060LLU;
	uint64_t t23 = 570494616LLU;

	t23 = (x93&((x94|x95)|x96));

	if (t23 != 2309LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	volatile int64_t x99 = INT64_MIN;
	static int16_t x100 = INT16_MIN;
	int64_t t24 = -1015579755553368425LL;

	t24 = (x97&((x98|x99)|x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	volatile uint64_t x102 = UINT64_MAX;
	static int16_t x103 = INT16_MIN;
	uint32_t x104 = UINT32_MAX;
	uint64_t t25 = 1405LLU;

	t25 = (x101&((x102|x103)|x104));

	if (t25 != 65535LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 60841990LLU;
	volatile uint8_t x106 = 8U;
	int32_t x108 = -1008563004;
	uint64_t t26 = 5688982245446LLU;

	t26 = (x105&((x106|x107)|x108));

	if (t26 != 60817412LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 5883233953122740LL;
	int16_t x110 = INT16_MAX;
	volatile int16_t x111 = 270;
	int64_t x112 = INT64_MAX;
	volatile int64_t t27 = 1663202LL;

	t27 = (x109&((x110|x111)|x112));

	if (t27 != 5883233953122740LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;

	t28 = (x113&((x114|x115)|x116));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	static volatile int64_t x118 = -21LL;
	int8_t x119 = INT8_MAX;
	static int16_t x120 = -367;
	int64_t t29 = 31847LL;

	t29 = (x117&((x118|x119)|x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 7153LLU;
	int8_t x122 = INT8_MIN;
	volatile int32_t x123 = -1;
	volatile int8_t x124 = INT8_MAX;
	volatile uint64_t t30 = 6570919545LLU;

	t30 = (x121&((x122|x123)|x124));

	if (t30 != 7153LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 12;
	int32_t x126 = -1;
	static int8_t x127 = INT8_MAX;
	int64_t x128 = INT64_MIN;

	t31 = (x125&((x126|x127)|x128));

	if (t31 != 12LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int16_t x130 = -1;
	static int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x129&((x130|x131)|x132));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int64_t x136 = -1LL;
	uint64_t t33 = 186784410775153013LLU;

	t33 = (x133&((x134|x135)|x136));

	if (t33 != 32767LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MAX;
	int8_t x138 = INT8_MIN;
	uint16_t x139 = UINT16_MAX;
	static int16_t x140 = INT16_MIN;
	static volatile int32_t t34 = 338205;

	t34 = (x137&((x138|x139)|x140));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x142 = INT32_MIN;

	t35 = (x141&((x142|x143)|x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static uint8_t x146 = 3U;
	uint16_t x148 = 6182U;

	t36 = (x145&((x146|x147)|x148));

	if (t36 != 11081787103791LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	int32_t x150 = INT32_MIN;
	int8_t x151 = -1;
	int32_t x152 = -72121773;
	volatile int32_t t37 = -13325194;

	t37 = (x149&((x150|x151)|x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MAX;
	uint16_t x154 = 2905U;
	int8_t x156 = 1;

	t38 = (x153&((x154|x155)|x156));

	if (t38 != 9223372036854775769LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = -3;
	static volatile int16_t x160 = -1;
	int32_t t39 = INT32_MAX;

	t39 = (x157&((x158|x159)|x160));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -422;
	static int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	volatile int64_t t40 = -2086216LL;

	t40 = (x161&((x162|x163)|x164));

	if (t40 != -512LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	static int64_t x166 = INT64_MIN;
	uint8_t x168 = UINT8_MAX;
	int64_t t41 = INT64_MIN;

	t41 = (x165&((x166|x167)|x168));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = -5189;
	static uint64_t x170 = 1528004462395161LLU;
	int64_t x171 = -97198435LL;
	uint64_t x172 = 1311LLU;

	t42 = (x169&((x170|x171)|x172));

	if (t42 != 18446744073629264795LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 11598361237511LLU;
	volatile int64_t x174 = 1294013624LL;
	int16_t x175 = INT16_MIN;
	int64_t x176 = 116202662950939501LL;
	volatile uint64_t t43 = 413LLU;

	t43 = (x173&((x174|x175)|x176));

	if (t43 != 11598361237509LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 14LL;
	int8_t x178 = INT8_MIN;
	static int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MIN;

	t44 = (x177&((x178|x179)|x180));

	if (t44 != 14LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 6U;
	int32_t x183 = -1;

	t45 = (x181&((x182|x183)|x184));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x186 = -108;
	volatile uint64_t x188 = UINT64_MAX;

	t46 = (x185&((x186|x187)|x188));

	if (t46 != 18446744073709550791LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -1;
	int8_t x190 = -1;
	int16_t x191 = INT16_MIN;
	static int64_t t47 = 151957LL;

	t47 = (x189&((x190|x191)|x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	static uint8_t x194 = 0U;
	uint16_t x196 = 385U;
	int64_t t48 = 74935544676188268LL;

	t48 = (x193&((x194|x195)|x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	static int64_t x198 = -15409375516625316LL;
	static int64_t x199 = -1LL;
	int32_t x200 = INT32_MIN;

	t49 = (x197&((x198|x199)|x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int8_t x203 = INT8_MAX;
	static int32_t x204 = INT32_MIN;
	int32_t t50 = 269;

	t50 = (x201&((x202|x203)|x204));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x206 = 21005U;
	int32_t x207 = 3174860;
	static volatile uint64_t x208 = 2161936944320LLU;
	uint64_t t51 = 5LLU;

	t51 = (x205&((x206|x207)|x208));

	if (t51 != 24389LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = 34555U;
	static volatile int8_t x211 = -1;
	uint64_t x212 = UINT64_MAX;
	uint64_t t52 = 134323815186898180LLU;

	t52 = (x209&((x210|x211)|x212));

	if (t52 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x214 = -1;
	int8_t x215 = -1;
	int64_t x216 = INT64_MIN;
	static volatile int64_t t53 = 697948646LL;

	t53 = (x213&((x214|x215)|x216));

	if (t53 != -14LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 42;
	uint16_t x218 = 1U;
	volatile int16_t x219 = -96;
	volatile int8_t x220 = INT8_MIN;
	static int32_t t54 = -1555979;

	t54 = (x217&((x218|x219)|x220));

	if (t54 != 32) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static int8_t x222 = -25;
	int16_t x223 = 6186;
	volatile uint16_t x224 = UINT16_MAX;
	int32_t t55 = -322;

	t55 = (x221&((x222|x223)|x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	static uint32_t x227 = UINT32_MAX;
	uint16_t x228 = 12759U;
	volatile uint32_t t56 = 7359885U;

	t56 = (x225&((x226|x227)|x228));

	if (t56 != 65535U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 1U;
	int32_t x230 = INT32_MIN;
	volatile int8_t x232 = INT8_MIN;
	static volatile int64_t t57 = -2204201332052870341LL;

	t57 = (x229&((x230|x231)|x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x234 = 5373532949797769LLU;
	int16_t x235 = 629;
	static volatile uint16_t x236 = UINT16_MAX;
	volatile uint64_t t58 = 1335574LLU;

	t58 = (x233&((x234|x235)|x236));

	if (t58 != 5373532368273408LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = 1579764845314LL;
	volatile int32_t x240 = INT32_MAX;

	t59 = (x237&((x238|x239)|x240));

	if (t59 != 1578400481280LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	int64_t x243 = -1841350190LL;
	int32_t x244 = -1;
	uint64_t t60 = 21LLU;

	t60 = (x241&((x242|x243)|x244));

	if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	static uint8_t x246 = 26U;
	int64_t x247 = INT64_MAX;
	volatile int64_t x248 = INT64_MAX;
	volatile int64_t t61 = 938846188048078LL;

	t61 = (x245&((x246|x247)|x248));

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = UINT32_MAX;
	static int32_t x250 = 13018;
	int32_t x251 = INT32_MIN;
	volatile uint32_t x252 = 128371U;
	volatile uint32_t t62 = 2902198U;

	t62 = (x249&((x250|x251)|x252));

	if (t62 != 2147612667U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x254 = INT64_MAX;
	int8_t x256 = 40;
	volatile int64_t t63 = -108354639LL;

	t63 = (x253&((x254|x255)|x256));

	if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = -1;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t64 = INT32_MIN;

	t64 = (x257&((x258|x259)|x260));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MAX;
	int64_t x263 = INT64_MIN;
	int64_t x264 = -1LL;
	int64_t t65 = 91398345045860228LL;

	t65 = (x261&((x262|x263)|x264));

	if (t65 != 2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1212;
	static int32_t x267 = INT32_MIN;
	int8_t x268 = -2;
	int64_t t66 = -15LL;

	t66 = (x265&((x266|x267)|x268));

	if (t66 != -1212LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -2;
	static uint32_t x272 = 1962U;

	t67 = (x269&((x270|x271)|x272));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MAX;
	static int32_t x274 = -1;
	static uint32_t x275 = 9517U;
	uint32_t x276 = UINT32_MAX;

	t68 = (x273&((x274|x275)|x276));

	if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	volatile int32_t x279 = INT32_MAX;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x277&((x278|x279)|x280));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = INT8_MIN;
	static int64_t x284 = -1LL;
	int64_t t70 = 4LL;

	t70 = (x281&((x282|x283)|x284));

	if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	static int64_t x287 = -1LL;
	volatile int8_t x288 = -1;

	t71 = (x285&((x286|x287)|x288));

	if (t71 != 36629LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = -613940LL;
	uint64_t x290 = 28467556044LLU;
	static volatile uint64_t t72 = 238635681759579LLU;

	t72 = (x289&((x290|x291)|x292));

	if (t72 != 18446744072111792332LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	uint32_t x294 = 7U;
	int16_t x295 = INT16_MIN;
	int64_t x296 = 3085773637853461971LL;

	t73 = (x293&((x294|x295)|x296));

	if (t73 != 3085773640982036480LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 4U;
	int16_t x298 = -3458;
	uint32_t x299 = 15763192U;
	int32_t x300 = -1;
	uint32_t t74 = 189377U;

	t74 = (x297&((x298|x299)|x300));

	if (t74 != 4U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	int16_t x303 = 7028;
	int8_t x304 = INT8_MIN;
	int64_t t75 = -55861732514LL;

	t75 = (x301&((x302|x303)|x304));

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -2218644996006602LL;
	uint64_t x307 = 172745307435625361LLU;
	int8_t x308 = INT8_MIN;
	uint64_t t76 = 161605497888221172LLU;

	t76 = (x305&((x306|x307)|x308));

	if (t76 != 18444525428713545010LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MAX;
	int64_t x310 = -14925004LL;
	int64_t x311 = INT64_MAX;
	int32_t x312 = -1;
	static int64_t t77 = INT64_MAX;

	t77 = (x309&((x310|x311)|x312));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 3;
	uint64_t x314 = 23LLU;
	int64_t x315 = -218478642531311LL;
	static uint32_t x316 = 0U;
	volatile uint64_t t78 = 7057105LLU;

	t78 = (x313&((x314|x315)|x316));

	if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	static int64_t x318 = -57756LL;
	static uint8_t x319 = UINT8_MAX;
	int64_t x320 = 922LL;
	int64_t t79 = 2158282902923785907LL;

	t79 = (x317&((x318|x319)|x320));

	if (t79 != -65536LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 958;
	static int8_t x322 = -1;
	volatile int64_t x323 = -4987LL;
	volatile int16_t x324 = 2809;
	int64_t t80 = 2754105277402LL;

	t80 = (x321&((x322|x323)|x324));

	if (t80 != 958LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MAX;
	int64_t x326 = 192591768LL;
	uint64_t x327 = 376LLU;
	uint8_t x328 = UINT8_MAX;
	volatile uint64_t t81 = 1164337838214641021LLU;

	t81 = (x325&((x326|x327)|x328));

	if (t81 != 127LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MAX;
	int16_t x330 = 123;
	uint8_t x331 = 63U;
	int16_t x332 = INT16_MIN;
	int32_t t82 = 1347095;

	t82 = (x329&((x330|x331)|x332));

	if (t82 != 2147451007) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 74U;
	int16_t x335 = -9608;
	int64_t x336 = 20917627472368LL;
	volatile int64_t t83 = -196226402288LL;

	t83 = (x333&((x334|x335)|x336));

	if (t83 != 72LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 157U;
	volatile int32_t x338 = INT32_MIN;
	uint16_t x339 = UINT16_MAX;
	volatile uint8_t x340 = 24U;
	volatile int32_t t84 = -23;

	t84 = (x337&((x338|x339)|x340));

	if (t84 != 157) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 1;
	int32_t x342 = INT32_MAX;
	volatile uint32_t x343 = 134U;
	volatile uint32_t t85 = 51499U;

	t85 = (x341&((x342|x343)|x344));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	uint16_t x346 = 9063U;
	uint64_t x347 = 834168776LLU;
	int64_t x348 = -1LL;
	volatile uint64_t t86 = 24795764641409LLU;

	t86 = (x345&((x346|x347)|x348));

	if (t86 != 2147483647LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int32_t x351 = INT32_MIN;
	volatile int64_t x352 = 1LL;
	static int64_t t87 = 10755878395753523LL;

	t87 = (x349&((x350|x351)|x352));

	if (t87 != 43LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 7U;
	static int8_t x354 = INT8_MAX;
	int32_t x355 = INT32_MIN;
	int64_t x356 = -180132311LL;
	int64_t t88 = -727650741375560864LL;

	t88 = (x353&((x354|x355)|x356));

	if (t88 != 7LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	static int32_t x359 = -517507;
	volatile int64_t t89 = 28252392LL;

	t89 = (x357&((x358|x359)|x360));

	if (t89 != 255LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = 6604U;
	uint16_t x363 = 0U;
	static uint8_t x364 = 21U;
	int64_t t90 = -1LL;

	t90 = (x361&((x362|x363)|x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 2085408LLU;
	static uint32_t x366 = 4830689U;
	uint8_t x367 = 20U;
	volatile uint64_t t91 = 15907LLU;

	t91 = (x365&((x366|x367)|x368));

	if (t91 != 626720LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = 1LLU;
	volatile int16_t x372 = INT16_MIN;
	static volatile uint64_t t92 = 47861641590674LLU;

	t92 = (x369&((x370|x371)|x372));

	if (t92 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 0U;
	int8_t x374 = INT8_MIN;

	t93 = (x373&((x374|x375)|x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = -1;
	int8_t x378 = 28;
	int64_t x379 = INT64_MAX;
	uint8_t x380 = 0U;

	t94 = (x377&((x378|x379)|x380));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = UINT32_MAX;
	uint16_t x383 = 3617U;
	int32_t x384 = 0;
	int64_t t95 = -16532272542105095LL;

	t95 = (x381&((x382|x383)|x384));

	if (t95 != 4294964073LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = INT64_MIN;
	int16_t x388 = INT16_MAX;
	int64_t t96 = 15723164048019LL;

	t96 = (x385&((x386|x387)|x388));

	if (t96 != 26LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -1;
	volatile uint64_t x391 = 187439773012744140LLU;
	int8_t x392 = 0;

	t97 = (x389&((x390|x391)|x392));

	if (t97 != 18446744073708953548LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x393 = 1U;
	volatile int32_t x394 = INT32_MAX;
	int32_t x395 = INT32_MIN;
	static int64_t x396 = 2979681370833LL;
	int64_t t98 = -768384392532448391LL;

	t98 = (x393&((x394|x395)|x396));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	volatile uint64_t x398 = 8650071380127100LLU;
	int64_t x399 = INT64_MAX;
	static int8_t x400 = INT8_MIN;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x397&((x398|x399)|x400));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

