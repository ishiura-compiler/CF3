#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 3380U;
int16_t x17 = INT16_MIN;
int16_t x20 = INT16_MIN;
int64_t x22 = INT64_MIN;
int32_t x28 = INT32_MIN;
volatile uint64_t t4 = 7LLU;
uint32_t x33 = 1225590531U;
uint32_t t6 = 60335U;
int16_t x38 = INT16_MAX;
static int64_t x40 = INT64_MAX;
static uint16_t x61 = 1342U;
int32_t x63 = 72756;
static int8_t x65 = -50;
uint16_t x66 = UINT16_MAX;
int64_t x70 = -728029998LL;
uint8_t x71 = UINT8_MAX;
uint32_t x73 = 7545897U;
uint8_t x79 = UINT8_MAX;
int16_t x83 = 16;
volatile int32_t t16 = -185;
uint16_t x87 = 1259U;
volatile int32_t x88 = INT32_MIN;
uint32_t t17 = 3023U;
uint16_t x102 = UINT16_MAX;
int64_t x103 = 0LL;
volatile uint64_t x106 = 13LLU;
uint64_t x112 = 24399762216282LLU;
volatile uint32_t x119 = 1543099U;
int32_t x133 = -1;
int64_t x135 = -4LL;
uint16_t x139 = 6U;
volatile int32_t x141 = -1;
int64_t x143 = -2637948506958LL;
uint32_t t33 = 27U;
int16_t x162 = INT16_MIN;
int64_t x167 = -3521528924147243322LL;
static int32_t x172 = 1;
uint64_t t40 = 392636929251547318LLU;
volatile uint32_t t41 = 94080U;
volatile uint32_t x191 = 4877417U;
volatile uint32_t t42 = 6267U;
volatile uint64_t t43 = 466LLU;
int16_t x204 = 2046;
int16_t x207 = -443;
int32_t t45 = 357;
static int32_t x209 = -81;
int16_t x211 = INT16_MIN;
volatile uint16_t x217 = 0U;
uint8_t x218 = 12U;
volatile int64_t t49 = -308006LL;
static uint64_t x228 = 277889124249518321LLU;
int64_t x230 = INT64_MIN;
volatile int8_t x238 = -1;
volatile uint64_t t53 = 208756LLU;
uint64_t x244 = 185332337728887LLU;
static int8_t x248 = -13;
int32_t x249 = INT32_MIN;
uint16_t x252 = 7658U;
static volatile uint32_t x255 = UINT32_MAX;
int16_t x259 = -1;
static int64_t x260 = INT64_MAX;
int64_t x262 = -1LL;
int16_t x263 = -1;
volatile int32_t x274 = INT32_MIN;
int64_t x287 = INT64_MIN;
volatile int64_t x290 = -1LL;
volatile int64_t x291 = 3606402LL;
uint32_t x294 = 28275U;
static volatile int8_t x296 = INT8_MIN;
uint8_t x299 = 116U;
volatile int32_t x312 = INT32_MIN;
volatile int32_t x316 = INT32_MIN;
uint8_t x317 = 7U;
int16_t x319 = -43;
static uint8_t x326 = UINT8_MAX;
uint32_t x328 = 102192709U;
uint32_t t72 = 63U;
uint8_t x333 = UINT8_MAX;
uint32_t x352 = UINT32_MAX;
static uint64_t t78 = 94LLU;
int64_t x375 = -134471673LL;
static volatile uint32_t x378 = 91022U;
static volatile int64_t x383 = -1LL;
int16_t x397 = -59;
volatile uint16_t x403 = 0U;
uint32_t x408 = UINT32_MAX;
int64_t t92 = 537134934LL;
static int8_t x421 = -11;
int64_t x432 = INT64_MIN;
int64_t t95 = 44453559LL;
uint16_t x434 = 1U;
int64_t x439 = INT64_MIN;
uint32_t x440 = UINT32_MAX;
uint64_t x445 = 213424LLU;
int64_t x448 = INT64_MAX;


void f0(void) {
	int16_t x2 = -1;
	uint32_t x3 = 63220U;
	int64_t x4 = INT64_MAX;
	static int64_t t0 = -50851963780LL;

	t0 = (((x1-x2)|x3)%x4);

	if (t0 != 65525LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int64_t x14 = INT64_MIN;
	uint64_t x15 = UINT64_MAX;
	static int16_t x16 = -2115;
	static uint64_t t1 = 90689945803LLU;

	t1 = (((x13-x14)|x15)%x16);

	if (t1 != 2114LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x18 = -102923133062087LL;
	int16_t x19 = -30;
	volatile int64_t t2 = -4786494LL;

	t2 = (((x17-x18)|x19)%x20);

	if (t2 != -25LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 5386LLU;
	int8_t x23 = INT8_MAX;
	volatile int16_t x24 = INT16_MIN;
	static volatile uint64_t t3 = 1916571101712122833LLU;

	t3 = (((x21-x22)|x23)%x24);

	if (t3 != 9223372036854781311LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 164198LLU;
	uint32_t x26 = 1418U;
	int32_t x27 = INT32_MIN;

	t4 = (((x25-x26)|x27)%x28);

	if (t4 != 162780LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	volatile int8_t x30 = INT8_MAX;
	static int64_t x31 = INT64_MIN;
	volatile uint64_t x32 = 2870589030974029LLU;
	static volatile uint64_t t5 = 38159388613LLU;

	t5 = (((x29-x30)|x31)%x32);

	if (t5 != 338960670441134LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x34 = UINT16_MAX;
	uint16_t x35 = 0U;
	int32_t x36 = INT32_MIN;

	t6 = (((x33-x34)|x35)%x36);

	if (t6 != 1225524996U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	int64_t x39 = -1LL;
	volatile int64_t t7 = -1661156950300LL;

	t7 = (((x37-x38)|x39)%x40);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 18U;
	uint8_t x42 = 3U;
	int8_t x43 = -10;
	volatile uint16_t x44 = 18U;
	volatile int32_t t8 = -840;

	t8 = (((x41-x42)|x43)%x44);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -17;
	uint32_t x46 = 1971854230U;
	uint16_t x47 = 12288U;
	uint32_t x48 = UINT32_MAX;
	static volatile uint32_t t9 = 1848U;

	t9 = (((x45-x46)|x47)%x48);

	if (t9 != 2323117145U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x57 = -90255LL;
	static int32_t x58 = -1397;
	volatile int64_t x59 = INT64_MIN;
	volatile int32_t x60 = INT32_MIN;
	int64_t t10 = -401LL;

	t10 = (((x57-x58)|x59)%x60);

	if (t10 != -88858LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x62 = INT32_MAX;
	uint32_t x64 = 3082U;
	static uint32_t t11 = 435U;

	t11 = (((x61-x62)|x63)%x64);

	if (t11 != 579U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x67 = -1LL;
	static volatile int32_t x68 = INT32_MIN;
	int64_t t12 = -102187290063077296LL;

	t12 = (((x65-x66)|x67)%x68);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x69 = 1539973U;
	int32_t x72 = -1;
	int64_t t13 = 6409793990835923LL;

	t13 = (((x69-x70)|x71)%x72);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x74 = INT16_MIN;
	static int32_t x75 = INT32_MAX;
	int8_t x76 = -1;
	uint32_t t14 = 48678U;

	t14 = (((x73-x74)|x75)%x76);

	if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 6043430U;
	int16_t x78 = -72;
	int8_t x80 = -1;
	volatile uint32_t t15 = 40322U;

	t15 = (((x77-x78)|x79)%x80);

	if (t15 != 6043647U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = 1;
	int32_t x82 = -1;
	volatile int16_t x84 = -1;

	t16 = (((x81-x82)|x83)%x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x85 = 0U;
	int8_t x86 = 0;

	t17 = (((x85-x86)|x87)%x88);

	if (t17 != 1259U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MAX;
	static int8_t x94 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile int64_t x96 = INT64_MIN;
	static volatile uint64_t t18 = 114005LLU;

	t18 = (((x93-x94)|x95)%x96);

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = INT16_MIN;
	int64_t x98 = -9513LL;
	int16_t x99 = -270;
	uint32_t x100 = UINT32_MAX;
	static int64_t t19 = 141577604LL;

	t19 = (((x97-x98)|x99)%x100);

	if (t19 != -5LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = UINT32_MAX;
	int8_t x104 = -1;
	static volatile int64_t t20 = -12LL;

	t20 = (((x101-x102)|x103)%x104);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	volatile uint32_t x108 = 50743U;
	uint64_t t21 = 98885905283389187LLU;

	t21 = (((x105-x106)|x107)%x108);

	if (t21 != 33958LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = 390U;
	volatile int16_t x110 = 960;
	int16_t x111 = INT16_MIN;
	volatile uint64_t t22 = 117005382368188831LLU;

	t22 = (((x109-x110)|x111)%x112);

	if (t22 != 11443193817124LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = -1;
	int64_t x114 = INT64_MAX;
	volatile int64_t x115 = -302LL;
	int64_t x116 = INT64_MIN;
	volatile int64_t t23 = -4881011102083LL;

	t23 = (((x113-x114)|x115)%x116);

	if (t23 != -302LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x117 = 1585LL;
	static int32_t x118 = INT32_MAX;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t24 = 1LLU;

	t24 = (((x117-x118)|x119)%x120);

	if (t24 != 18446744071563612091LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = 1;
	uint64_t x122 = UINT64_MAX;
	uint16_t x123 = 6U;
	volatile int16_t x124 = -1;
	static uint64_t t25 = 18187536050LLU;

	t25 = (((x121-x122)|x123)%x124);

	if (t25 != 6LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = 24U;
	static int8_t x126 = INT8_MAX;
	uint32_t x127 = UINT32_MAX;
	uint8_t x128 = 24U;
	volatile uint32_t t26 = 596319U;

	t26 = (((x125-x126)|x127)%x128);

	if (t26 != 15U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	static volatile int16_t x130 = INT16_MIN;
	int32_t x131 = -1;
	uint64_t x132 = 5044LLU;
	static volatile uint64_t t27 = 420682385LLU;

	t27 = (((x129-x130)|x131)%x132);

	if (t27 != 5007LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x134 = 1148U;
	int64_t x136 = -1LL;
	int64_t t28 = 372LL;

	t28 = (((x133-x134)|x135)%x136);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x137 = 26364811415513544LLU;
	static volatile int8_t x138 = INT8_MAX;
	int8_t x140 = -57;
	uint64_t t29 = 5481658150500663LLU;

	t29 = (((x137-x138)|x139)%x140);

	if (t29 != 26364811415513423LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x142 = 842U;
	int16_t x144 = INT16_MIN;
	static int64_t t30 = 63073951LL;

	t30 = (((x141-x142)|x143)%x144);

	if (t30 != -841LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = 0;
	static uint64_t x146 = UINT64_MAX;
	int16_t x147 = 948;
	uint8_t x148 = UINT8_MAX;
	static uint64_t t31 = 247262620LLU;

	t31 = (((x145-x146)|x147)%x148);

	if (t31 != 184LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x149 = INT16_MAX;
	int16_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	static int32_t x152 = INT32_MIN;
	static uint32_t t32 = 1U;

	t32 = (((x149-x150)|x151)%x152);

	if (t32 != 2147483647U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x153 = 315731343U;
	static uint16_t x154 = 4U;
	static int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MIN;

	t33 = (((x153-x154)|x155)%x156);

	if (t33 != 315731455U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 1093577317371LLU;
	int32_t x158 = -504986098;
	volatile uint64_t x159 = UINT64_MAX;
	volatile int8_t x160 = -1;
	static uint64_t t34 = 41LLU;

	t34 = (((x157-x158)|x159)%x160);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 54231390LLU;
	int16_t x163 = INT16_MAX;
	static int8_t x164 = INT8_MIN;
	volatile uint64_t t35 = 1117143110961LLU;

	t35 = (((x161-x162)|x163)%x164);

	if (t35 != 54296575LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x165 = INT16_MAX;
	uint32_t x166 = 4643763U;
	static uint16_t x168 = 4560U;
	volatile int64_t t36 = 391026428070438LL;

	t36 = (((x165-x166)|x167)%x168);

	if (t36 != -2546LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x170 = -1;
	int64_t x171 = INT64_MIN;
	static volatile int64_t t37 = -61443LL;

	t37 = (((x169-x170)|x171)%x172);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x173 = 3416592LL;
	int64_t x174 = 2123607116016381055LL;
	volatile uint32_t x175 = UINT32_MAX;
	volatile int32_t x176 = INT32_MAX;
	static int64_t t38 = 748115585529LL;

	t38 = (((x173-x174)|x175)%x176);

	if (t38 != -988881623LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1LL;
	uint16_t x178 = 987U;
	static volatile uint8_t x179 = 72U;
	static uint16_t x180 = UINT16_MAX;
	volatile int64_t t39 = 526783117LL;

	t39 = (((x177-x178)|x179)%x180);

	if (t39 != -916LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MIN;
	volatile uint32_t x182 = UINT32_MAX;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = INT8_MIN;

	t40 = (((x181-x182)|x183)%x184);

	if (t40 != 127LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 25U;
	volatile int32_t x186 = -3199;
	static uint32_t x187 = UINT32_MAX;
	int8_t x188 = INT8_MIN;

	t41 = (((x185-x186)|x187)%x188);

	if (t41 != 127U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x189 = UINT32_MAX;
	int32_t x190 = 61652;
	volatile int16_t x192 = INT16_MAX;

	t42 = (((x189-x190)|x191)%x192);

	if (t42 != 28525U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x197 = 71835LL;
	int32_t x198 = INT32_MIN;
	int32_t x199 = -1;
	static uint64_t x200 = UINT64_MAX;

	t43 = (((x197-x198)|x199)%x200);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = 538266794077406935LL;
	static volatile int32_t x202 = 1141895;
	int64_t x203 = 29849LL;
	int64_t t44 = 10LL;

	t44 = (((x201-x202)|x203)%x204);

	if (t44 != 427LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x205 = 2802U;
	uint16_t x206 = 2028U;
	int8_t x208 = INT8_MIN;

	t45 = (((x205-x206)|x207)%x208);

	if (t45 != -57) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x210 = 295U;
	static uint16_t x212 = UINT16_MAX;
	volatile uint32_t t46 = 1449750619U;

	t46 = (((x209-x210)|x211)%x212);

	if (t46 != 65160U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = -1;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t47 = -5159292LL;

	t47 = (((x213-x214)|x215)%x216);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x219 = 15017;
	volatile int64_t x220 = INT64_MIN;
	int64_t t48 = 2091611230654525LL;

	t48 = (((x217-x218)|x219)%x220);

	if (t48 != -3LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = -4109000682195LL;
	int16_t x223 = 0;
	int8_t x224 = -1;

	t49 = (((x221-x222)|x223)%x224);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x225 = UINT16_MAX;
	int32_t x226 = -14;
	int64_t x227 = INT64_MIN;
	volatile uint64_t t50 = 74612298638LLU;

	t50 = (((x225-x226)|x227)%x228);

	if (t50 != 53030936620736764LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = -359785320191118187LL;
	int32_t x231 = -146;
	uint32_t x232 = UINT32_MAX;
	int64_t t51 = 223707071885LL;

	t51 = (((x229-x230)|x231)%x232);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = UINT32_MAX;
	static int32_t x236 = -1;
	uint32_t t52 = 13U;

	t52 = (((x233-x234)|x235)%x236);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = -1;
	volatile uint16_t x239 = 3U;
	static uint64_t x240 = 589LLU;

	t53 = (((x237-x238)|x239)%x240);

	if (t53 != 3LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MAX;
	int32_t x242 = INT32_MAX;
	int8_t x243 = INT8_MIN;
	uint64_t t54 = 2422412911LLU;

	t54 = (((x241-x242)|x243)%x244);

	if (t54 != 60502540241717LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = -1;
	int32_t x246 = -288;
	uint8_t x247 = UINT8_MAX;
	int32_t t55 = 313042756;

	t55 = (((x245-x246)|x247)%x248);

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x250 = 15404LLU;
	uint64_t x251 = 25082526LLU;
	volatile uint64_t t56 = 187900750465206LLU;

	t56 = (((x249-x250)|x251)%x252);

	if (t56 != 1252LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x253 = -1;
	int32_t x254 = 51;
	int8_t x256 = -12;
	volatile uint32_t t57 = 8674U;

	t57 = (((x253-x254)|x255)%x256);

	if (t57 != 11U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -1;
	static uint32_t x258 = 15U;
	volatile int64_t t58 = 142104156935349996LL;

	t58 = (((x257-x258)|x259)%x260);

	if (t58 != 4294967295LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = UINT32_MAX;
	uint32_t x264 = UINT32_MAX;
	volatile int64_t t59 = -111LL;

	t59 = (((x261-x262)|x263)%x264);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MAX;
	volatile int16_t x266 = -1;
	volatile uint32_t x267 = 196U;
	static uint16_t x268 = UINT16_MAX;
	uint32_t t60 = 348U;

	t60 = (((x265-x266)|x267)%x268);

	if (t60 != 32964U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = -1LL;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	int64_t t61 = -17612027556716579LL;

	t61 = (((x273-x274)|x275)%x276);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MIN;
	static volatile uint64_t x282 = 3588265LLU;
	static int16_t x283 = -2351;
	volatile int64_t x284 = -1LL;
	volatile uint64_t t62 = 177521025411480LLU;

	t62 = (((x281-x282)|x283)%x284);

	if (t62 != 18446744073709551319LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = 1001036061LLU;
	int16_t x286 = 29;
	int64_t x288 = -1LL;
	uint64_t t63 = 7557887891062384LLU;

	t63 = (((x285-x286)|x287)%x288);

	if (t63 != 9223372037855811840LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = -1;
	int8_t x292 = 1;
	volatile int64_t t64 = -15313679206LL;

	t64 = (((x289-x290)|x291)%x292);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = INT8_MIN;
	int32_t x295 = INT32_MAX;
	static uint32_t t65 = 2771U;

	t65 = (((x293-x294)|x295)%x296);

	if (t65 != 127U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x297 = 1794U;
	uint16_t x298 = 95U;
	int32_t x300 = INT32_MIN;
	int32_t t66 = -190553640;

	t66 = (((x297-x298)|x299)%x300);

	if (t66 != 1783) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x301 = 9237U;
	static volatile int8_t x302 = -5;
	int32_t x303 = 18592157;
	int16_t x304 = INT16_MAX;
	int32_t t67 = -2774133;

	t67 = (((x301-x302)|x303)%x304);

	if (t67 != 14294) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = -1;
	int8_t x310 = INT8_MAX;
	static volatile int64_t x311 = 3LL;
	static int64_t t68 = -61924339029524954LL;

	t68 = (((x309-x310)|x311)%x312);

	if (t68 != -125LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x313 = UINT8_MAX;
	uint16_t x314 = 1U;
	int8_t x315 = INT8_MIN;
	int32_t t69 = 0;

	t69 = (((x313-x314)|x315)%x316);

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x318 = UINT64_MAX;
	int64_t x320 = INT64_MIN;
	uint64_t t70 = 536706663186772134LLU;

	t70 = (((x317-x318)|x319)%x320);

	if (t70 != 9223372036854775773LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	static int16_t x322 = INT16_MAX;
	uint64_t x323 = 112803673079LLU;
	uint32_t x324 = 3977U;
	uint64_t t71 = 68428740402LLU;

	t71 = (((x321-x322)|x323)%x324);

	if (t71 != 666LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = -241;
	int16_t x327 = INT16_MIN;

	t72 = (((x325-x326)|x327)%x328);

	if (t72 != 2873022U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = 213U;
	static volatile int8_t x330 = INT8_MIN;
	static int64_t x331 = INT64_MAX;
	volatile int32_t x332 = 322778;
	volatile int64_t t73 = -4525356400794942812LL;

	t73 = (((x329-x330)|x331)%x332);

	if (t73 != 42051LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x334 = 0U;
	volatile int8_t x335 = 1;
	int32_t x336 = -1;
	volatile int32_t t74 = 62881;

	t74 = (((x333-x334)|x335)%x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = 23;
	int32_t x338 = -1050727751;
	int64_t x339 = -2280775062988043LL;
	static int64_t x340 = -64837343159299352LL;
	volatile int64_t t75 = -326651920299LL;

	t75 = (((x337-x338)|x339)%x340);

	if (t75 != -2280774758899713LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = -1LL;
	int16_t x346 = INT16_MAX;
	int16_t x347 = 218;
	uint8_t x348 = 18U;
	int64_t t76 = -3710983302756251572LL;

	t76 = (((x345-x346)|x347)%x348);

	if (t76 != -6LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MIN;
	static volatile uint8_t x350 = 25U;
	uint32_t x351 = 16713U;
	volatile uint32_t t77 = 410749U;

	t77 = (((x349-x350)|x351)%x352);

	if (t77 != 4294934511U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x353 = 6337706998204544270LLU;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = 111643LLU;
	int32_t x356 = -2725;

	t78 = (((x353-x354)|x355)%x356);

	if (t78 != 6337706998204577055LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x357 = -1;
	int64_t x358 = -98737462119728LL;
	volatile uint32_t x359 = UINT32_MAX;
	volatile int8_t x360 = 54;
	int64_t t79 = -116690215165369463LL;

	t79 = (((x357-x358)|x359)%x360);

	if (t79 != 15LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = INT8_MAX;
	uint16_t x362 = UINT16_MAX;
	uint16_t x363 = 13U;
	volatile int64_t x364 = INT64_MIN;
	volatile int64_t t80 = 179LL;

	t80 = (((x361-x362)|x363)%x364);

	if (t80 != -65395LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = INT32_MAX;
	static int64_t x366 = 19052937940LL;
	uint8_t x367 = 1U;
	int16_t x368 = INT16_MIN;
	static int64_t t81 = -369400LL;

	t81 = (((x365-x366)|x367)%x368);

	if (t81 != -17109LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = INT16_MIN;
	volatile uint16_t x370 = UINT16_MAX;
	uint8_t x371 = UINT8_MAX;
	int32_t x372 = INT32_MAX;
	int32_t t82 = 243295713;

	t82 = (((x369-x370)|x371)%x372);

	if (t82 != -98049) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x373 = -1;
	static volatile int64_t x374 = INT64_MIN;
	uint8_t x376 = UINT8_MAX;
	int64_t t83 = 3576067LL;

	t83 = (((x373-x374)|x375)%x376);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = 13029287LLU;
	volatile int64_t x379 = INT64_MIN;
	int32_t x380 = -2720;
	volatile uint64_t t84 = 6801777940689036LLU;

	t84 = (((x377-x378)|x379)%x380);

	if (t84 != 9223372036867714073LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 31U;
	static volatile int64_t x382 = INT64_MAX;
	int8_t x384 = -1;
	int64_t t85 = 30LL;

	t85 = (((x381-x382)|x383)%x384);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = INT32_MIN;
	static volatile uint64_t x386 = 9171696787LLU;
	int8_t x387 = -1;
	int64_t x388 = -1LL;
	volatile uint64_t t86 = 527984559775LLU;

	t86 = (((x385-x386)|x387)%x388);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = -7858;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = 0;
	int16_t x392 = -1;
	int32_t t87 = -55795287;

	t87 = (((x389-x390)|x391)%x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x393 = 1;
	volatile uint32_t x394 = UINT32_MAX;
	int64_t x395 = INT64_MAX;
	static int8_t x396 = -1;
	int64_t t88 = -8218293851LL;

	t88 = (((x393-x394)|x395)%x396);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x398 = INT16_MAX;
	int64_t x399 = 24015463LL;
	static int8_t x400 = INT8_MIN;
	volatile int64_t t89 = 445052625176439608LL;

	t89 = (((x397-x398)|x399)%x400);

	if (t89 != -25LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x401 = -1;
	static volatile uint16_t x402 = 501U;
	int16_t x404 = INT16_MIN;
	int32_t t90 = -410654;

	t90 = (((x401-x402)|x403)%x404);

	if (t90 != -502) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x405 = 986517340LLU;
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = -1;
	uint64_t t91 = 18LLU;

	t91 = (((x405-x406)|x407)%x408);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = INT16_MIN;
	int64_t x414 = -763LL;
	static volatile int32_t x415 = INT32_MIN;
	int64_t x416 = -1LL;

	t92 = (((x413-x414)|x415)%x416);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x422 = UINT32_MAX;
	volatile uint32_t x423 = 43U;
	static uint64_t x424 = 1079474778892174LLU;
	volatile uint64_t t93 = 45062865852LLU;

	t93 = (((x421-x422)|x423)%x424);

	if (t93 != 4294967295LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = INT64_MIN;
	volatile int8_t x426 = -1;
	static volatile int32_t x427 = 111889;
	int32_t x428 = INT32_MIN;
	static volatile int64_t t94 = -2472LL;

	t94 = (((x425-x426)|x427)%x428);

	if (t94 != -2147371759LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x429 = 6722180320040LL;
	int16_t x430 = INT16_MIN;
	uint16_t x431 = 304U;

	t95 = (((x429-x430)|x431)%x432);

	if (t95 != 6722180352824LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = INT8_MIN;
	int8_t x435 = 1;
	int64_t x436 = INT64_MIN;
	volatile int64_t t96 = -74780221078260868LL;

	t96 = (((x433-x434)|x435)%x436);

	if (t96 != -129LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = INT16_MIN;
	volatile int8_t x438 = -1;
	int64_t t97 = 44945718628175194LL;

	t97 = (((x437-x438)|x439)%x440);

	if (t97 != -32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MIN;
	int16_t x442 = INT16_MAX;
	int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;
	volatile int32_t t98 = 995;

	t98 = (((x441-x442)|x443)%x444);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x446 = 1U;
	uint8_t x447 = 120U;
	volatile uint64_t t99 = 605909093501500LLU;

	t99 = (((x445-x446)|x447)%x448);

	if (t99 != 213503LLU) { NG(); } else { ; }
	
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

