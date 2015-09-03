#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 72173058;
int64_t x14 = INT64_MAX;
volatile int64_t t1 = 1345823866586669LL;
uint8_t x18 = 71U;
int16_t x31 = INT16_MAX;
static volatile uint64_t t5 = 15439177637704035LLU;
int32_t x56 = -4426;
int32_t x59 = INT32_MIN;
static uint16_t x61 = 352U;
int32_t x62 = -4206065;
int8_t x68 = INT8_MIN;
static int16_t x88 = INT16_MIN;
int16_t x90 = 3064;
int8_t x96 = 2;
volatile int8_t x97 = INT8_MIN;
int16_t x98 = INT16_MAX;
static uint32_t x107 = UINT32_MAX;
volatile uint8_t x114 = 3U;
static int64_t t21 = -1LL;
int8_t x119 = INT8_MIN;
static uint32_t x120 = UINT32_MAX;
int64_t t23 = 5736638273357LL;
static uint64_t t25 = 4459177531274036LLU;
int16_t x134 = -1;
int16_t x136 = INT16_MIN;
static uint32_t t26 = 152404U;
int64_t x157 = INT64_MAX;
uint16_t x160 = 283U;
static volatile int64_t t31 = -3736533417639LL;
uint8_t x176 = 22U;
uint64_t x180 = 2705350019LLU;
static int8_t x188 = INT8_MIN;
static int8_t x202 = 0;
volatile int64_t x206 = INT64_MIN;
int32_t x211 = -1;
volatile uint64_t t39 = 558275618268927832LLU;
uint8_t x215 = UINT8_MAX;
volatile uint64_t x218 = UINT64_MAX;
static int32_t x229 = INT32_MIN;
int16_t x236 = -1;
uint8_t x241 = UINT8_MAX;
volatile uint32_t x242 = UINT32_MAX;
static int16_t x243 = INT16_MIN;
int16_t x244 = INT16_MAX;
static uint32_t t47 = 7147596U;
int32_t x248 = INT32_MIN;
int64_t t48 = 33LL;
volatile int64_t x249 = INT64_MAX;
int32_t x250 = INT32_MIN;
uint32_t x252 = 8357384U;
static uint8_t x256 = UINT8_MAX;
int32_t t50 = -15844;
uint64_t x257 = UINT64_MAX;
static int8_t x263 = INT8_MIN;
volatile int32_t t53 = -187981;
volatile int64_t t54 = 306662LL;
uint32_t t55 = 216U;
int64_t x280 = 473LL;
volatile int16_t x283 = INT16_MAX;
int32_t x287 = INT32_MIN;
static volatile uint8_t x289 = 0U;
volatile int32_t t59 = 160;
volatile uint64_t x293 = UINT64_MAX;
int16_t x302 = 63;
uint32_t t62 = 110U;
int16_t x310 = INT16_MIN;
uint64_t t63 = 6470718959LLU;
int64_t x317 = INT64_MAX;
uint32_t x318 = 10429U;
int16_t x320 = INT16_MIN;
int16_t x330 = INT16_MAX;
int64_t x332 = INT64_MIN;
uint8_t x336 = 66U;
volatile int64_t x337 = INT64_MAX;
int8_t x339 = INT8_MIN;
static uint64_t x345 = 378337771LLU;
volatile int8_t x349 = 0;
int64_t x352 = -3461207066LL;
int64_t x354 = 10052533067792LL;
uint64_t t74 = 29559012121LLU;
int32_t x367 = -1;
uint16_t x380 = UINT16_MAX;
int8_t x382 = INT8_MIN;
uint32_t t78 = 396188645U;
int16_t x385 = -1;
int32_t t79 = 2255384;
volatile int16_t x395 = 74;
uint8_t x400 = UINT8_MAX;
static int64_t x404 = -1LL;
int8_t x405 = -1;
int8_t x408 = INT8_MIN;
int8_t x421 = INT8_MIN;
int8_t x424 = INT8_MIN;
int64_t x426 = 3683490002LL;
int16_t x432 = INT16_MAX;
int16_t x434 = INT16_MIN;
volatile uint64_t x437 = 87614046542617523LLU;
uint64_t t92 = 16506LLU;
volatile int8_t x441 = INT8_MIN;
uint64_t x443 = 44356602904LLU;
static int32_t x447 = INT32_MIN;
uint64_t x461 = UINT64_MAX;
uint32_t x462 = 14598670U;
uint16_t x465 = 24555U;
int8_t x467 = INT8_MIN;
uint32_t x476 = 1599690499U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint32_t x2 = 954834U;
	int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = 166884978U;

	t0 = ((x1^(x2+x3))+x4);

	if (t0 != 4221839403U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	static volatile int32_t x15 = -186;
	int16_t x16 = INT16_MIN;

	t1 = ((x13^(x14+x15))+x16);

	if (t1 != -32582LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = INT64_MIN;
	static int8_t x19 = 3;
	int64_t x20 = -1LL;
	static int64_t t2 = 1LL;

	t2 = ((x17^(x18+x19))+x20);

	if (t2 != -9223372036854775735LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MAX;
	volatile uint8_t x22 = UINT8_MAX;
	static int16_t x23 = INT16_MAX;
	static int16_t x24 = 2;
	int32_t t3 = 1040;

	t3 = ((x21^(x22+x23))+x24);

	if (t3 != 32899) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	volatile int64_t x27 = -1LL;
	int64_t x28 = -1LL;
	int64_t t4 = 2LL;

	t4 = ((x25^(x26+x27))+x28);

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x29 = 1U;
	volatile uint32_t x30 = 0U;
	uint64_t x32 = UINT64_MAX;

	t5 = ((x29^(x30+x31))+x32);

	if (t5 != 32765LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = 13U;
	static volatile int16_t x34 = INT16_MIN;
	static int32_t x35 = -1;
	uint16_t x36 = UINT16_MAX;
	int32_t t6 = 47375;

	t6 = ((x33^(x34+x35))+x36);

	if (t6 != 32753) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x45 = 3U;
	uint8_t x46 = 69U;
	int32_t x47 = -1677354;
	int16_t x48 = INT16_MIN;
	volatile int32_t t7 = 5;

	t7 = ((x45^(x46+x47))+x48);

	if (t7 != -1710056) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x49 = -1LL;
	uint32_t x50 = UINT32_MAX;
	volatile int16_t x51 = INT16_MIN;
	int64_t x52 = INT64_MAX;
	int64_t t8 = 3159999601148942387LL;

	t8 = ((x49^(x50+x51))+x52);

	if (t8 != 9223372032559841279LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 0U;
	volatile uint32_t x54 = 1293970U;
	int64_t x55 = INT64_MIN;
	volatile int64_t t9 = 59421619LL;

	t9 = ((x53^(x54+x55))+x56);

	if (t9 != -9223372036853486264LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MIN;
	volatile int64_t x58 = 16844993066443LL;
	static uint8_t x60 = 42U;
	volatile int64_t t10 = 561639531076496066LL;

	t10 = ((x57^(x58+x59))+x60);

	if (t10 != -16842845555211LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x63 = -223;
	int16_t x64 = INT16_MAX;
	static int32_t t11 = 1769;

	t11 = ((x61^(x62+x63))+x64);

	if (t11 != -4173745) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	volatile int16_t x66 = -1;
	static int8_t x67 = INT8_MIN;
	int32_t t12 = 4847845;

	t12 = ((x65^(x66+x67))+x68);

	if (t12 != -256) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = INT8_MAX;
	int16_t x70 = -1;
	static uint8_t x71 = UINT8_MAX;
	int16_t x72 = -1;
	int32_t t13 = 1;

	t13 = ((x69^(x70+x71))+x72);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x85 = -259928535014LL;
	int16_t x86 = INT16_MAX;
	volatile int16_t x87 = 3811;
	int64_t t14 = 67121122678624209LL;

	t14 = ((x85^(x86+x87))+x88);

	if (t14 != -259928531208LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = INT8_MIN;
	static volatile uint64_t x91 = 4700465056LLU;
	int64_t x92 = INT64_MIN;
	uint64_t t15 = 700428LLU;

	t15 = ((x89^(x90+x91))+x92);

	if (t15 != 9223372032154307608LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = INT16_MAX;
	int64_t x94 = -10345LL;
	static volatile int32_t x95 = INT32_MIN;
	volatile int64_t t16 = -4312LL;

	t16 = ((x93^(x94+x95))+x96);

	if (t16 != -2147506070LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x99 = -88218968LL;
	int32_t x100 = -2;
	volatile int64_t t17 = -19771861242LL;

	t17 = ((x97^(x98+x99))+x100);

	if (t17 != 88186149LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = -1;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 94U;
	uint64_t x104 = UINT64_MAX;
	static uint64_t t18 = 15825786522011LLU;

	t18 = ((x101^(x102+x103))+x104);

	if (t18 != 2147483552LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MAX;
	static volatile int16_t x108 = INT16_MAX;
	static uint32_t t19 = 34U;

	t19 = ((x105^(x106+x107))+x108);

	if (t19 != 32765U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x109 = UINT16_MAX;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = 14U;
	uint32_t x112 = 1892975U;
	static uint32_t t20 = 50387U;

	t20 = ((x109^(x110+x111))+x112);

	if (t20 != 1827552U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x113 = 29;
	int64_t x115 = -1LL;
	uint32_t x116 = 117379373U;

	t21 = ((x113^(x114+x115))+x116);

	if (t21 != 117379404LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x117 = 70U;
	int64_t x118 = -1LL;
	int64_t t22 = 6180LL;

	t22 = ((x117^(x118+x119))+x120);

	if (t22 != 4294967096LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MAX;
	static uint8_t x122 = UINT8_MAX;
	volatile uint8_t x123 = UINT8_MAX;
	static int64_t x124 = INT64_MIN;

	t23 = ((x121^(x122+x123))+x124);

	if (t23 != -9223372036854775423LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x125 = 0U;
	volatile uint32_t x126 = 30156U;
	static uint32_t x127 = UINT32_MAX;
	uint8_t x128 = UINT8_MAX;
	uint32_t t24 = 992U;

	t24 = ((x125^(x126+x127))+x128);

	if (t24 != 30410U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x129 = INT16_MIN;
	static uint64_t x130 = 29001959LLU;
	volatile int32_t x131 = -1;
	int32_t x132 = INT32_MIN;

	t25 = ((x129^(x130+x131))+x132);

	if (t25 != 18446744071533037798LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x133 = -1;
	uint32_t x135 = UINT32_MAX;

	t26 = ((x133^(x134+x135))+x136);

	if (t26 != 4294934529U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MIN;
	int8_t x139 = -1;
	static uint64_t x140 = 408386LLU;
	static volatile uint64_t t27 = 2874565599592894LLU;

	t27 = ((x137^(x138+x139))+x140);

	if (t27 != 9223372036855151425LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MIN;
	static uint8_t x146 = UINT8_MAX;
	int8_t x147 = INT8_MAX;
	static int16_t x148 = INT16_MIN;
	int32_t t28 = 45922045;

	t28 = ((x145^(x146+x147))+x148);

	if (t28 != -65154) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = INT16_MAX;
	uint16_t x150 = 3U;
	static uint16_t x151 = UINT16_MAX;
	static volatile int32_t x152 = INT32_MIN;
	volatile int32_t t29 = 85633;

	t29 = ((x149^(x150+x151))+x152);

	if (t29 != -2147385347) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = INT32_MIN;
	static int8_t x155 = INT8_MAX;
	uint64_t x156 = UINT64_MAX;
	uint64_t t30 = 477LLU;

	t30 = ((x153^(x154+x155))+x156);

	if (t30 != 126LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x158 = 7;
	static int32_t x159 = 37666;

	t31 = ((x157^(x158+x159))+x160);

	if (t31 != 9223372036854738417LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x161 = 846786994203LLU;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 1898LLU;
	uint16_t x164 = 3U;
	uint64_t t32 = 26LLU;

	t32 = ((x161^(x162+x163))+x164);

	if (t32 != 18446743226922542964LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = 472527719680431683LL;
	int32_t x175 = INT32_MIN;
	volatile int64_t t33 = -447228LL;

	t33 = ((x173^(x174+x175))+x176);

	if (t33 != 472527717532948178LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x177 = 13095U;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = 711127522315822480LLU;
	volatile uint64_t t34 = 2356346LLU;

	t34 = ((x177^(x178+x179))+x180);

	if (t34 != 711127525021168570LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = INT8_MIN;
	static uint32_t x182 = 41U;
	static int16_t x183 = INT16_MIN;
	uint8_t x184 = 0U;
	volatile uint32_t t35 = 13897U;

	t35 = ((x181^(x182+x183))+x184);

	if (t35 != 32681U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x185 = 27823322146LLU;
	volatile uint64_t x186 = 90850775079312LLU;
	int8_t x187 = 15;
	volatile uint64_t t36 = 612LLU;

	t36 = ((x185^(x186+x187))+x188);

	if (t36 != 90875640884541LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x201 = UINT16_MAX;
	volatile int64_t x203 = 2281504119431903083LL;
	int8_t x204 = INT8_MIN;
	int64_t t37 = -1876559957365066LL;

	t37 = ((x201^(x202+x203))+x204);

	if (t37 != 2281504119431940116LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x205 = INT64_MIN;
	volatile int16_t x207 = INT16_MAX;
	int8_t x208 = INT8_MIN;
	static int64_t t38 = 24069014666935218LL;

	t38 = ((x205^(x206+x207))+x208);

	if (t38 != 32639LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x209 = -24;
	uint64_t x210 = 0LLU;
	static int32_t x212 = INT32_MIN;

	t39 = ((x209^(x210+x211))+x212);

	if (t39 != 18446744071562067991LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x213 = 7;
	uint8_t x214 = 13U;
	uint64_t x216 = 545639980241099240LLU;
	static uint64_t t40 = 354664LLU;

	t40 = ((x213^(x214+x215))+x216);

	if (t40 != 545639980241099507LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = -1;
	int16_t x219 = INT16_MAX;
	uint64_t x220 = 1992785557073452092LLU;
	volatile uint64_t t41 = 22657420391141LLU;

	t41 = ((x217^(x218+x219))+x220);

	if (t41 != 1992785557073419325LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = 36U;
	volatile int16_t x223 = INT16_MIN;
	int16_t x224 = -1;
	volatile int32_t t42 = 988;

	t42 = ((x221^(x222+x223))+x224);

	if (t42 != 35) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x225 = 98626251795845LLU;
	static volatile int8_t x226 = 1;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -52;
	static uint64_t t43 = 2102013379704896150LLU;

	t43 = ((x225^(x226+x227))+x228);

	if (t43 != 98626251861329LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x230 = -84;
	static volatile int16_t x231 = INT16_MAX;
	static int8_t x232 = INT8_MAX;
	static int32_t t44 = -239;

	t44 = ((x229^(x230+x231))+x232);

	if (t44 != -2147450838) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = -294;
	volatile int32_t x235 = INT32_MAX;
	volatile int32_t t45 = 0;

	t45 = ((x233^(x234+x235))+x236);

	if (t45 != -2147451176) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x237 = 1076;
	static volatile int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MIN;
	static int16_t x240 = INT16_MAX;
	volatile int64_t t46 = 1942507LL;

	t46 = ((x237^(x238+x239))+x240);

	if (t46 != -9223372036854711350LL) { NG(); } else { ; }
	
}

void f47(void) {


	t47 = ((x241^(x242+x243))+x244);

	if (t47 != 4294967039U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x245 = 19866U;
	int64_t x246 = INT64_MAX;
	static int32_t x247 = INT32_MIN;

	t48 = ((x245^(x246+x247))+x248);

	if (t48 != 9223372032559788645LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x251 = UINT64_MAX;
	volatile uint64_t t49 = 2204297510398285573LLU;

	t49 = ((x249^(x250+x251))+x252);

	if (t49 != 9223372039010616840LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = 7289734;
	int16_t x254 = INT16_MAX;
	volatile int32_t x255 = INT32_MIN;

	t50 = ((x253^(x254+x255))+x256);

	if (t50 != -2140191368) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x258 = 3509592U;
	uint16_t x259 = 344U;
	int16_t x260 = INT16_MAX;
	volatile uint64_t t51 = 1757672146338055LLU;

	t51 = ((x257^(x258+x259))+x260);

	if (t51 != 18446744073706074446LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x261 = UINT32_MAX;
	static volatile int64_t x262 = INT64_MAX;
	static uint64_t x264 = 136106551958LLU;
	uint64_t t52 = 1LLU;

	t52 = ((x261^(x262+x263))+x264);

	if (t52 != 9223372168666360598LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = -69;
	static uint16_t x266 = 146U;
	volatile int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MAX;

	t53 = ((x265^(x266+x267))+x268);

	if (t53 != 2147483560) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x269 = INT64_MIN;
	uint8_t x270 = UINT8_MAX;
	uint16_t x271 = 813U;
	uint16_t x272 = 411U;

	t54 = ((x269^(x270+x271))+x272);

	if (t54 != -9223372036854774329LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x273 = INT32_MAX;
	uint32_t x274 = UINT32_MAX;
	uint16_t x275 = 1427U;
	int32_t x276 = 1874734;

	t55 = ((x273^(x274+x275))+x276);

	if (t55 != 2149356955U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x277 = 14U;
	volatile int8_t x278 = 23;
	int64_t x279 = 8037850287497138LL;
	static volatile int64_t t56 = 9392114LL;

	t56 = ((x277^(x278+x279))+x280);

	if (t56 != 8037850287497632LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	int64_t x284 = INT64_MIN;
	int64_t t57 = 2LL;

	t57 = ((x281^(x282+x283))+x284);

	if (t57 != -9223372032559841154LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x285 = 4293566432LLU;
	static uint8_t x286 = 4U;
	int64_t x288 = INT64_MAX;
	static volatile uint64_t t58 = 132376144978550LLU;

	t58 = ((x285^(x286+x287))+x288);

	if (t58 != 9223372034705891299LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x290 = -1;
	volatile uint8_t x291 = 0U;
	int8_t x292 = -1;

	t59 = ((x289^(x290+x291))+x292);

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MAX;
	static uint32_t x296 = 0U;
	volatile uint64_t t60 = 1033554373096LLU;

	t60 = ((x293^(x294+x295))+x296);

	if (t60 != 2147483520LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x301 = 11487U;
	uint16_t x303 = UINT16_MAX;
	uint16_t x304 = 1574U;
	volatile uint32_t t61 = 588U;

	t61 = ((x301^(x302+x303))+x304);

	if (t61 != 78599U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int32_t x306 = -6609;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;

	t62 = ((x305^(x306+x307))+x308);

	if (t62 != 6608U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x309 = INT8_MIN;
	int8_t x311 = INT8_MAX;
	uint64_t x312 = 4121133228853295LLU;

	t63 = ((x309^(x310+x311))+x312);

	if (t63 != 4121133228886062LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x319 = 5343246420900LL;
	int64_t t64 = 28876258LL;

	t64 = ((x317^(x318+x319))+x320);

	if (t64 != 9223366693608311710LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MAX;
	uint8_t x323 = 1U;
	volatile uint16_t x324 = UINT16_MAX;
	static volatile int32_t t65 = 27;

	t65 = ((x321^(x322+x323))+x324);

	if (t65 != 65279) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x325 = 1U;
	static volatile uint32_t x326 = 18760703U;
	volatile int32_t x327 = INT32_MIN;
	int8_t x328 = -6;
	static volatile uint32_t t66 = 38041U;

	t66 = ((x325^(x326+x327))+x328);

	if (t66 != 2166244344U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x329 = 27U;
	int8_t x331 = -1;
	static int64_t t67 = -84183482043LL;

	t67 = ((x329^(x330+x331))+x332);

	if (t67 != -9223372036854743067LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int16_t x334 = 24;
	uint8_t x335 = UINT8_MAX;
	uint64_t t68 = 811564139646474LLU;

	t68 = ((x333^(x334+x335))+x336);

	if (t68 != 18446744073709551402LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x338 = 6U;
	int32_t x340 = 1336;
	int64_t t69 = 3468888689925812LL;

	t69 = ((x337^(x338+x339))+x340);

	if (t69 != -9223372036854774351LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x341 = 438022922U;
	uint32_t x342 = 5U;
	int16_t x343 = -48;
	int8_t x344 = INT8_MAX;
	volatile uint32_t t70 = 30U;

	t70 = ((x341^(x342+x343))+x344);

	if (t70 != 3856944478U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x346 = -1;
	int8_t x347 = -4;
	int32_t x348 = INT32_MIN;
	uint64_t t71 = 3303452362985169332LLU;

	t71 = ((x345^(x346+x347))+x348);

	if (t71 != 18446744071183730192LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x350 = -1;
	int32_t x351 = 473187216;
	int64_t t72 = 391811742036161856LL;

	t72 = ((x349^(x350+x351))+x352);

	if (t72 != -2988019851LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x353 = -1;
	static uint64_t x355 = 5399873258394936LLU;
	uint64_t x356 = 9985LLU;
	uint64_t t73 = 0LLU;

	t73 = ((x353^(x354+x355))+x356);

	if (t73 != 18441334147918098872LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x357 = 19U;
	uint64_t x358 = 424886910535LLU;
	volatile int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;

	t74 = ((x357^(x358+x359))+x360);

	if (t74 != 422739394132LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x365 = -221713023793580030LL;
	static int8_t x366 = 1;
	int32_t x368 = INT32_MAX;
	int64_t t75 = 13262034097LL;

	t75 = ((x365^(x366+x367))+x368);

	if (t75 != -221713021646096383LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x369 = 0;
	static int8_t x370 = 53;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MAX;
	int64_t t76 = 7063633179594LL;

	t76 = ((x369^(x370+x371))+x372);

	if (t76 != 52LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x377 = INT32_MAX;
	uint64_t x378 = 3682571648077007375LLU;
	uint8_t x379 = 12U;
	volatile uint64_t t77 = 9453LLU;

	t77 = ((x377^(x378+x379))+x380);

	if (t77 != 3682571649165751779LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x381 = 0U;
	uint32_t x383 = 1146U;
	uint8_t x384 = 3U;

	t78 = ((x381^(x382+x383))+x384);

	if (t78 != 1021U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x386 = INT16_MIN;
	int16_t x387 = -1934;
	volatile int32_t x388 = 226272;

	t79 = ((x385^(x386+x387))+x388);

	if (t79 != 260973) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x389 = 7608LLU;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = INT16_MIN;
	volatile int8_t x392 = 1;
	uint64_t t80 = 0LLU;

	t80 = ((x389^(x390+x391))+x392);

	if (t80 != 18446744073709526344LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = -480;
	volatile int8_t x396 = 1;
	volatile int64_t t81 = 17097107LL;

	t81 = ((x393^(x394+x395))+x396);

	if (t81 != 9223372036854775403LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x397 = UINT8_MAX;
	uint16_t x398 = UINT16_MAX;
	volatile int8_t x399 = -40;
	volatile int32_t t82 = -32037;

	t82 = ((x397^(x398+x399))+x400);

	if (t82 != 65575) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x401 = -77;
	int8_t x402 = INT8_MIN;
	static uint16_t x403 = 206U;
	int64_t t83 = -4405640080547283269LL;

	t83 = ((x401^(x402+x403))+x404);

	if (t83 != -4LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x406 = INT32_MIN;
	static uint16_t x407 = 30U;
	int32_t t84 = -23853428;

	t84 = ((x405^(x406+x407))+x408);

	if (t84 != 2147483489) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x409 = 3858518LLU;
	int16_t x410 = INT16_MAX;
	int64_t x411 = -8598087699078149LL;
	int32_t x412 = -1;
	volatile uint64_t t85 = 15194LLU;

	t85 = ((x409^(x410+x411))+x412);

	if (t85 != 18438145986007761835LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x413 = 742513742U;
	volatile uint16_t x414 = 0U;
	int64_t x415 = 9766684373LL;
	volatile int16_t x416 = -1;
	volatile int64_t t86 = 97385479363LL;

	t86 = ((x413^(x414+x415))+x416);

	if (t86 != 10374748826LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x417 = -1;
	int8_t x418 = 3;
	int64_t x419 = 310041983LL;
	int16_t x420 = INT16_MIN;
	volatile int64_t t87 = 95150298LL;

	t87 = ((x417^(x418+x419))+x420);

	if (t87 != -310074755LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x422 = UINT32_MAX;
	static int32_t x423 = -1;
	uint32_t t88 = 72974U;

	t88 = ((x421^(x422+x423))+x424);

	if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x425 = 37889520380LLU;
	int8_t x427 = INT8_MAX;
	uint8_t x428 = UINT8_MAX;
	volatile uint64_t t89 = 25118333LLU;

	t89 = ((x425^(x426+x427))+x428);

	if (t89 != 34526047404LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x429 = 4;
	volatile uint32_t x430 = 19240915U;
	uint8_t x431 = 2U;
	uint32_t t90 = 8999083U;

	t90 = ((x429^(x430+x431))+x432);

	if (t90 != 19273680U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x433 = INT16_MAX;
	uint16_t x435 = UINT16_MAX;
	uint32_t x436 = 332800159U;
	volatile uint32_t t91 = 80232U;

	t91 = ((x433^(x434+x435))+x436);

	if (t91 != 332800159U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x438 = 2LLU;
	int16_t x439 = INT16_MAX;
	volatile int16_t x440 = INT16_MIN;

	t92 = ((x437^(x438+x439))+x440);

	if (t92 != 87614046542551986LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x442 = UINT64_MAX;
	int32_t x444 = -206;
	volatile uint64_t t93 = 2336442LLU;

	t93 = ((x441^(x442+x443))+x444);

	if (t93 != 18446744029352948425LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x445 = -1;
	static int64_t x446 = -1519225126884051LL;
	int16_t x448 = 14445;
	volatile int64_t t94 = 42LL;

	t94 = ((x445^(x446+x447))+x448);

	if (t94 != 1519227274382143LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x449 = 258U;
	uint8_t x450 = UINT8_MAX;
	int16_t x451 = INT16_MIN;
	volatile int32_t x452 = INT32_MAX;
	volatile int32_t t95 = -50800631;

	t95 = ((x449^(x450+x451))+x452);

	if (t95 != 2147451388) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x463 = -1LL;
	int16_t x464 = 16227;
	static volatile uint64_t t96 = 11231959LLU;

	t96 = ((x461^(x462+x463))+x464);

	if (t96 != 18446744073694969173LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x466 = INT32_MAX;
	int16_t x468 = -36;
	static volatile int32_t t97 = -846;

	t97 = ((x465^(x466+x467))+x468);

	if (t97 != 2147459184) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x469 = 3456;
	int8_t x470 = INT8_MAX;
	static uint64_t x471 = 134482970468699LLU;
	uint64_t x472 = UINT64_MAX;
	static uint64_t t98 = 1095LLU;

	t98 = ((x469^(x470+x471))+x472);

	if (t98 != 134482970471513LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x473 = INT32_MAX;
	int16_t x474 = INT16_MIN;
	uint64_t x475 = 678943358000LLU;
	volatile uint64_t t99 = 12205148LLU;

	t99 = ((x473^(x474+x475))+x476);

	if (t99 != 682013514450LLU) { NG(); } else { ; }
	
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

