#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -795;
int32_t x5 = INT32_MIN;
volatile int32_t x6 = 205;
uint8_t x11 = 3U;
int64_t x12 = 24LL;
uint32_t x14 = 79U;
volatile int64_t x15 = INT64_MIN;
volatile int8_t x17 = INT8_MIN;
int16_t x22 = -1;
int32_t x34 = -8779382;
uint16_t x48 = UINT16_MAX;
volatile int64_t t10 = 216LL;
int64_t t11 = -110841LL;
int32_t x57 = -1;
int8_t x58 = INT8_MAX;
int32_t x69 = -1;
static volatile uint8_t x70 = 3U;
volatile int16_t x72 = INT16_MIN;
int32_t t16 = 353617;
int8_t x73 = 3;
static int32_t x78 = INT32_MAX;
uint32_t x80 = 168575794U;
volatile uint64_t x85 = 631470716089453LLU;
int32_t x88 = -333483171;
uint64_t x95 = 52LLU;
static int16_t x103 = -1;
volatile int32_t x106 = INT32_MAX;
volatile int32_t x111 = INT32_MIN;
volatile int64_t t25 = 4916096375285416LL;
int64_t x115 = -28LL;
int64_t t27 = 20LL;
uint8_t x123 = 32U;
int32_t x124 = INT32_MIN;
int32_t x139 = -1166717;
volatile int32_t x142 = INT32_MIN;
static volatile int32_t t33 = 60472933;
static uint8_t x152 = 11U;
int8_t x154 = 0;
uint64_t t36 = UINT64_MAX;
static volatile int64_t x162 = -1LL;
static uint64_t x163 = 3619398100775LLU;
int32_t x166 = -319267;
volatile uint64_t t38 = 20017385160776428LLU;
volatile uint64_t t39 = 1272475538LLU;
static volatile uint16_t x174 = 9U;
int32_t x186 = 487750313;
volatile int32_t t45 = -1;
uint64_t x205 = 3009744017LLU;
volatile int32_t t47 = 169936943;
int16_t x220 = -31;
int16_t x221 = -746;
int64_t x226 = -6952975959899LL;
int8_t x241 = INT8_MIN;
uint64_t x242 = 67LLU;
volatile uint64_t t53 = 3081632LLU;
int8_t x256 = 13;
volatile uint64_t x260 = UINT64_MAX;
int8_t x274 = -15;
static int8_t x277 = -1;
int64_t x278 = 22429029157341135LL;
int64_t x283 = INT64_MIN;
volatile uint64_t x293 = UINT64_MAX;
uint32_t x297 = UINT32_MAX;
int32_t x301 = -1;
int16_t x303 = INT16_MIN;
int8_t x310 = INT8_MIN;
int8_t x315 = 1;
int64_t x320 = INT64_MAX;
volatile uint32_t x344 = 42U;
static int16_t x356 = INT16_MIN;
int8_t x357 = INT8_MIN;
volatile int32_t t76 = -86076304;
static uint64_t x363 = 4LLU;
static volatile int16_t x364 = -1;
uint32_t x365 = 0U;
static int32_t x385 = 1;
int8_t x386 = 13;
uint8_t x392 = UINT8_MAX;
volatile uint32_t t84 = 234786U;
uint8_t x395 = 0U;
uint32_t t86 = 0U;
int16_t x411 = INT16_MIN;
uint64_t x415 = UINT64_MAX;
uint64_t t89 = 67317844046LLU;
uint32_t x418 = UINT32_MAX;
uint32_t x421 = 3857166U;
volatile uint16_t x423 = 1U;
volatile uint64_t x424 = 528292320889934765LLU;
uint64_t t91 = 838429018607578LLU;
uint64_t x433 = 486640568960364LLU;
volatile int16_t x442 = INT16_MIN;
static int8_t x443 = INT8_MIN;
uint8_t x445 = 2U;
int64_t x452 = -1LL;
volatile int8_t x453 = -1;
int64_t x463 = INT64_MIN;


void f0(void) {
	static int8_t x1 = -1;
	int16_t x2 = INT16_MIN;
	static uint8_t x3 = 1U;
	volatile uint8_t x4 = 19U;

	t0 = ((x1+x2)-(x3%x4));

	if (t0 != -32770) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 61442LL;

	t1 = ((x5+x6)-(x7%x8));

	if (t1 != -2147450675LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -6;
	int32_t x10 = -1;
	int64_t t2 = -114LL;

	t2 = ((x9+x10)-(x11%x12));

	if (t2 != -10LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x16 = 1;
	volatile int64_t t3 = 277669204079186393LL;

	t3 = ((x13+x14)-(x15%x16));

	if (t3 != 65614LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 561007LLU;
	uint16_t x19 = 62U;
	int64_t x20 = -377609LL;
	uint64_t t4 = 4LLU;

	t4 = ((x17+x18)-(x19%x20));

	if (t4 != 560817LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -263;
	volatile int32_t x23 = INT32_MIN;
	volatile int8_t x24 = 31;
	int32_t t5 = 27;

	t5 = ((x21+x22)-(x23%x24));

	if (t5 != -262) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 46;
	uint16_t x26 = UINT16_MAX;
	uint8_t x27 = 2U;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 2645676492609788LL;

	t6 = ((x25+x26)-(x27%x28));

	if (t6 != 65579LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = 156;
	static uint8_t x30 = 1U;
	int8_t x31 = -21;
	int32_t x32 = -1;
	volatile int32_t t7 = 7166;

	t7 = ((x29+x30)-(x31%x32));

	if (t7 != 157) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int8_t x35 = -2;
	static volatile uint8_t x36 = 3U;
	volatile int32_t t8 = -853413683;

	t8 = ((x33+x34)-(x35%x36));

	if (t8 != -8779381) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 1U;
	int64_t x42 = INT64_MIN;
	uint16_t x43 = 44U;
	static int16_t x44 = -1;
	int64_t t9 = 40357900361000LL;

	t9 = ((x41+x42)-(x43%x44));

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int64_t x46 = -1155584970690LL;
	int32_t x47 = INT32_MIN;

	t10 = ((x45+x46)-(x47%x48));

	if (t10 != -1155584872387LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	static volatile int8_t x50 = -1;
	static int64_t x51 = -1LL;
	int64_t x52 = INT64_MAX;

	t11 = ((x49+x50)-(x51%x52));

	if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = UINT64_MAX;
	static int8_t x54 = INT8_MAX;
	int64_t x55 = 116258728LL;
	uint8_t x56 = 35U;
	uint64_t t12 = 93370213LLU;

	t12 = ((x53+x54)-(x55%x56));

	if (t12 != 93LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x59 = UINT16_MAX;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -20855746;

	t13 = ((x57+x58)-(x59%x60));

	if (t13 != -32641) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x61 = -1;
	uint32_t x62 = 213408161U;
	uint16_t x63 = 7929U;
	int64_t x64 = -63681841977326LL;
	int64_t t14 = 65LL;

	t14 = ((x61+x62)-(x63%x64));

	if (t14 != 213400231LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	static volatile int8_t x66 = INT8_MIN;
	static uint8_t x67 = UINT8_MAX;
	int16_t x68 = -269;
	int32_t t15 = -946843;

	t15 = ((x65+x66)-(x67%x68));

	if (t15 != 65152) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x71 = INT32_MIN;

	t16 = ((x69+x70)-(x71%x72));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = INT16_MAX;
	static int8_t x75 = INT8_MIN;
	static int64_t x76 = INT64_MIN;
	static int64_t t17 = -48167313338558641LL;

	t17 = ((x73+x74)-(x75%x76));

	if (t17 != 32898LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = UINT32_MAX;
	int16_t x79 = -2;
	uint32_t t18 = 280U;

	t18 = ((x77+x78)-(x79%x80));

	if (t18 != 2066911202U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	volatile uint64_t t19 = 7306277LLU;

	t19 = ((x85+x86)-(x87%x88));

	if (t19 != 631468568605933LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x89 = UINT16_MAX;
	volatile int32_t x90 = -1833127;
	uint64_t x91 = UINT64_MAX;
	uint8_t x92 = 11U;
	static uint64_t t20 = 1107941626LLU;

	t20 = ((x89+x90)-(x91%x92));

	if (t20 != 18446744073707784020LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = INT64_MAX;
	uint64_t x94 = 1913554094LLU;
	int8_t x96 = 10;
	volatile uint64_t t21 = 9480654LLU;

	t21 = ((x93+x94)-(x95%x96));

	if (t21 != 9223372038768329899LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = UINT64_MAX;
	uint32_t x98 = 12U;
	int16_t x99 = -1;
	int32_t x100 = INT32_MIN;
	uint64_t t22 = 11653508880LLU;

	t22 = ((x97+x98)-(x99%x100));

	if (t22 != 12LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x101 = 0;
	volatile uint8_t x102 = 86U;
	int32_t x104 = INT32_MAX;
	int32_t t23 = 84628667;

	t23 = ((x101+x102)-(x103%x104));

	if (t23 != 87) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	volatile uint8_t x107 = 59U;
	int32_t x108 = INT32_MAX;
	volatile uint32_t t24 = 148217260U;

	t24 = ((x105+x106)-(x107%x108));

	if (t24 != 2147483587U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 892U;
	int64_t x110 = -405239275128161962LL;
	uint32_t x112 = 413038546U;

	t25 = ((x109+x110)-(x111%x112));

	if (t25 != -405239275210451988LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 103722672LL;
	volatile uint64_t x114 = UINT64_MAX;
	volatile int32_t x116 = -378;
	uint64_t t26 = 183828045376LLU;

	t26 = ((x113+x114)-(x115%x116));

	if (t26 != 103722699LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = 58457533594769691LL;
	int32_t x118 = INT32_MAX;
	int16_t x119 = INT16_MAX;
	int8_t x120 = -1;

	t27 = ((x117+x118)-(x119%x120));

	if (t27 != 58457535742253338LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = 12048302;
	uint16_t x122 = 5U;
	volatile int32_t t28 = 76627;

	t28 = ((x121+x122)-(x123%x124));

	if (t28 != 12048275) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = 1;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 504U;
	uint8_t x128 = 1U;
	static volatile uint32_t t29 = 887618909U;

	t29 = ((x125+x126)-(x127%x128));

	if (t29 != 256U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = -30068;
	static int8_t x130 = 18;
	volatile int8_t x131 = 1;
	uint64_t x132 = 3932574LLU;
	volatile uint64_t t30 = 2160992795395739LLU;

	t30 = ((x129+x130)-(x131%x132));

	if (t30 != 18446744073709521565LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 13578833482253LLU;
	int64_t x134 = INT64_MIN;
	int64_t x135 = -5291804LL;
	static volatile int8_t x136 = INT8_MAX;
	volatile uint64_t t31 = 29LLU;

	t31 = ((x133+x134)-(x135%x136));

	if (t31 != 9223385615688258156LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 3378286U;
	uint32_t x138 = UINT32_MAX;
	int16_t x140 = INT16_MIN;
	uint32_t t32 = 928833U;

	t32 = ((x137+x138)-(x139%x140));

	if (t32 != 3398122U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x141 = 1361;
	uint8_t x143 = 6U;
	int16_t x144 = -1;

	t33 = ((x141+x142)-(x143%x144));

	if (t33 != -2147482287) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = -54132;
	uint64_t x151 = UINT64_MAX;
	volatile uint64_t t34 = 2554364267828LLU;

	t34 = ((x149+x150)-(x151%x152));

	if (t34 != 11399LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MAX;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t35 = 1145900637333528193LLU;

	t35 = ((x153+x154)-(x155%x156));

	if (t35 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = UINT64_MAX;
	int32_t x158 = 0;
	uint8_t x159 = 16U;
	uint8_t x160 = 1U;

	t36 = ((x157+x158)-(x159%x160));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int8_t x164 = INT8_MIN;
	uint64_t t37 = 102LLU;

	t37 = ((x161+x162)-(x163%x164));

	if (t37 != 18446740454311450839LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 0U;
	uint64_t x167 = 869358540079LLU;
	static uint8_t x168 = UINT8_MAX;

	t38 = ((x165+x166)-(x167%x168));

	if (t38 != 18446744073709232150LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x169 = UINT64_MAX;
	static int32_t x170 = 1832;
	uint32_t x171 = 0U;
	int64_t x172 = INT64_MIN;

	t39 = ((x169+x170)-(x171%x172));

	if (t39 != 1831LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	volatile int16_t x175 = 52;
	int64_t x176 = -2750679601466664974LL;
	int64_t t40 = 32388653LL;

	t40 = ((x173+x174)-(x175%x176));

	if (t40 != -2147483691LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = -1LL;
	volatile uint64_t x183 = 1040007166379448LLU;
	volatile int16_t x184 = -23;
	static volatile uint64_t t41 = 125879770920LLU;

	t41 = ((x181+x182)-(x183%x184));

	if (t41 != 18445704066543172039LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x185 = INT32_MIN;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = INT16_MAX;
	volatile int32_t t42 = -10;

	t42 = ((x185+x186)-(x187%x188));

	if (t42 != -1659733590) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = -351;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MIN;
	int32_t t43 = -8;

	t43 = ((x189+x190)-(x191%x192));

	if (t43 != -66014) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = -1;
	int16_t x194 = -1;
	uint16_t x195 = 0U;
	uint64_t x196 = 7542951LLU;
	uint64_t t44 = 3885511579213779534LLU;

	t44 = ((x193+x194)-(x195%x196));

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = 2;
	static volatile int8_t x203 = -12;
	int16_t x204 = -1;

	t45 = ((x201+x202)-(x203%x204));

	if (t45 != -32766) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = -5;
	uint32_t x207 = 153497U;
	uint8_t x208 = 6U;
	static uint64_t t46 = 44253479432LLU;

	t46 = ((x205+x206)-(x207%x208));

	if (t46 != 3009744007LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = 5;
	volatile uint16_t x214 = UINT16_MAX;
	uint16_t x215 = UINT16_MAX;
	int16_t x216 = INT16_MAX;

	t47 = ((x213+x214)-(x215%x216));

	if (t47 != 65539) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = 210LLU;
	uint64_t x218 = 356774907473403465LLU;
	int16_t x219 = -403;
	volatile uint64_t t48 = 53759LLU;

	t48 = ((x217+x218)-(x219%x220));

	if (t48 != 356774907473403675LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x222 = UINT16_MAX;
	static volatile int32_t x223 = INT32_MIN;
	int32_t x224 = 1;
	volatile int32_t t49 = 3467;

	t49 = ((x221+x222)-(x223%x224));

	if (t49 != 64789) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x225 = 254;
	int32_t x227 = -1;
	static int16_t x228 = 57;
	int64_t t50 = 1LL;

	t50 = ((x225+x226)-(x227%x228));

	if (t50 != -6952975959644LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = 5;
	static volatile int64_t x230 = -102754LL;
	static int16_t x231 = 152;
	static int8_t x232 = -1;
	static volatile int64_t t51 = 349306692874LL;

	t51 = ((x229+x230)-(x231%x232));

	if (t51 != -102749LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = 0;
	static int16_t x238 = -1320;
	int8_t x239 = 36;
	uint32_t x240 = 190795204U;
	uint32_t t52 = 574509451U;

	t52 = ((x237+x238)-(x239%x240));

	if (t52 != 4294965940U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x243 = INT8_MIN;
	int32_t x244 = -128571136;

	t53 = ((x241+x242)-(x243%x244));

	if (t53 != 67LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x253 = UINT8_MAX;
	int64_t x254 = INT64_MIN;
	static uint16_t x255 = 16U;
	static volatile int64_t t54 = 3566LL;

	t54 = ((x253+x254)-(x255%x256));

	if (t54 != -9223372036854775556LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x258 = UINT8_MAX;
	volatile int64_t x259 = 460081LL;
	static uint64_t t55 = 1815675047LLU;

	t55 = ((x257+x258)-(x259%x260));

	if (t55 != 18446744071561608142LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = -1;
	static volatile int64_t x262 = INT64_MAX;
	int8_t x263 = INT8_MAX;
	int8_t x264 = INT8_MIN;
	volatile int64_t t56 = -113744343LL;

	t56 = ((x261+x262)-(x263%x264));

	if (t56 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = 3LL;
	int8_t x270 = -1;
	uint16_t x271 = 15U;
	volatile int32_t x272 = INT32_MIN;
	volatile int64_t t57 = 0LL;

	t57 = ((x269+x270)-(x271%x272));

	if (t57 != -13LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MIN;
	static int8_t x275 = -1;
	static volatile int32_t x276 = INT32_MAX;
	static volatile int32_t t58 = -242410;

	t58 = ((x273+x274)-(x275%x276));

	if (t58 != -32782) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x279 = -24;
	int32_t x280 = INT32_MIN;
	volatile int64_t t59 = 36208842029042LL;

	t59 = ((x277+x278)-(x279%x280));

	if (t59 != 22429029157341158LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x281 = 356U;
	int16_t x282 = INT16_MAX;
	uint8_t x284 = UINT8_MAX;
	int64_t t60 = -1LL;

	t60 = ((x281+x282)-(x283%x284));

	if (t60 != 33251LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	static uint64_t x287 = UINT64_MAX;
	int16_t x288 = -1;
	volatile uint64_t t61 = 819591358LLU;

	t61 = ((x285+x286)-(x287%x288));

	if (t61 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = -15612571599LL;
	uint32_t x290 = 6092U;
	int16_t x291 = INT16_MIN;
	volatile int8_t x292 = INT8_MIN;
	volatile int64_t t62 = -487099743LL;

	t62 = ((x289+x290)-(x291%x292));

	if (t62 != -15612565507LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x294 = -1LL;
	uint8_t x295 = UINT8_MAX;
	volatile int8_t x296 = 1;
	uint64_t t63 = 36015LLU;

	t63 = ((x293+x294)-(x295%x296));

	if (t63 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x298 = -1578818185050LL;
	int8_t x299 = -1;
	uint8_t x300 = 16U;
	volatile int64_t t64 = -104LL;

	t64 = ((x297+x298)-(x299%x300));

	if (t64 != -1574523217754LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x302 = 113;
	int64_t x304 = INT64_MIN;
	static volatile int64_t t65 = 1733303270795979LL;

	t65 = ((x301+x302)-(x303%x304));

	if (t65 != 32880LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = 3025;
	int64_t x306 = -779198556248156LL;
	uint32_t x307 = 102853U;
	int32_t x308 = -1;
	static int64_t t66 = 9650877787739LL;

	t66 = ((x305+x306)-(x307%x308));

	if (t66 != -779198556347984LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = 418;
	static int16_t x311 = INT16_MAX;
	uint16_t x312 = 660U;
	volatile int32_t t67 = 0;

	t67 = ((x309+x310)-(x311%x312));

	if (t67 != -137) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x313 = -1;
	int8_t x314 = -3;
	volatile uint16_t x316 = 8U;
	volatile int32_t t68 = -2;

	t68 = ((x313+x314)-(x315%x316));

	if (t68 != -5) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	static int8_t x318 = INT8_MIN;
	uint64_t x319 = 1069LLU;
	volatile uint64_t t69 = 117796LLU;

	t69 = ((x317+x318)-(x319%x320));

	if (t69 != 18446744073709517651LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = -1;
	int64_t x322 = INT64_MAX;
	int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	volatile int64_t t70 = 8825LL;

	t70 = ((x321+x322)-(x323%x324));

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = 984934353U;
	static int16_t x331 = INT16_MAX;
	int16_t x332 = 473;
	uint32_t t71 = 3126U;

	t71 = ((x329+x330)-(x331%x332));

	if (t71 != 3132417871U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	volatile int64_t x338 = -292652381906878800LL;
	uint32_t x339 = 224U;
	static uint32_t x340 = 160881U;
	volatile int64_t t72 = 2LL;

	t72 = ((x337+x338)-(x339%x340));

	if (t72 != -292652381906879025LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 56U;
	int16_t x342 = INT16_MAX;
	static int16_t x343 = INT16_MIN;
	uint32_t t73 = 62765944U;

	t73 = ((x341+x342)-(x343%x344));

	if (t73 != 32785U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x345 = INT32_MIN;
	int16_t x346 = 9;
	int32_t x347 = INT32_MIN;
	static uint32_t x348 = UINT32_MAX;
	uint32_t t74 = 47932516U;

	t74 = ((x345+x346)-(x347%x348));

	if (t74 != 9U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x353 = -1;
	uint8_t x354 = 43U;
	volatile uint32_t x355 = UINT32_MAX;
	uint32_t t75 = 4137477U;

	t75 = ((x353+x354)-(x355%x356));

	if (t75 != 4294934571U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x358 = 4U;
	int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;

	t76 = ((x357+x358)-(x359%x360));

	if (t76 != -124) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = 0U;
	volatile uint64_t t77 = 49081278102316447LLU;

	t77 = ((x361+x362)-(x363%x364));

	if (t77 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x366 = INT64_MIN;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = -542112093;
	volatile uint64_t t78 = 117977288642036243LLU;

	t78 = ((x365+x366)-(x367%x368));

	if (t78 != 9223372036312663716LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MIN;
	static int16_t x371 = INT16_MAX;
	static int16_t x372 = INT16_MAX;
	volatile int64_t t79 = 2984LL;

	t79 = ((x369+x370)-(x371%x372));

	if (t79 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 1LLU;
	static volatile int32_t x374 = INT32_MIN;
	static int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MAX;
	volatile uint64_t t80 = 2540049756618295915LLU;

	t80 = ((x373+x374)-(x375%x376));

	if (t80 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x377 = 121876673492LLU;
	int16_t x378 = INT16_MAX;
	uint8_t x379 = 95U;
	int64_t x380 = INT64_MAX;
	uint64_t t81 = 6095LLU;

	t81 = ((x377+x378)-(x379%x380));

	if (t81 != 121876706164LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x381 = -716;
	static int8_t x382 = 1;
	int16_t x383 = 58;
	uint64_t x384 = 398899995693407069LLU;
	uint64_t t82 = 2206961210993184LLU;

	t82 = ((x381+x382)-(x383%x384));

	if (t82 != 18446744073709550843LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x387 = 2U;
	uint16_t x388 = UINT16_MAX;
	int32_t t83 = 1;

	t83 = ((x385+x386)-(x387%x388));

	if (t83 != 12) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x389 = 152U;
	uint32_t x390 = UINT32_MAX;
	volatile uint32_t x391 = 9U;

	t84 = ((x389+x390)-(x391%x392));

	if (t84 != 142U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MIN;
	static int64_t x394 = -883920342LL;
	static int8_t x396 = -30;
	int64_t t85 = 33541837889LL;

	t85 = ((x393+x394)-(x395%x396));

	if (t85 != -883920470LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = -101339;
	uint32_t x402 = UINT32_MAX;
	int32_t x403 = -1;
	static int8_t x404 = -3;

	t86 = ((x401+x402)-(x403%x404));

	if (t86 != 4294865957U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = 1;
	static uint8_t x406 = UINT8_MAX;
	volatile int32_t x407 = INT32_MAX;
	int32_t x408 = -1;
	volatile int32_t t87 = -1960;

	t87 = ((x405+x406)-(x407%x408));

	if (t87 != 256) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x409 = 3874U;
	int64_t x410 = INT64_MIN;
	uint64_t x412 = UINT64_MAX;
	static volatile uint64_t t88 = 17919052166210481LLU;

	t88 = ((x409+x410)-(x411%x412));

	if (t88 != 9223372036854812450LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = 5993927;
	int16_t x414 = INT16_MIN;
	volatile int32_t x416 = -1;

	t89 = ((x413+x414)-(x415%x416));

	if (t89 != 5961159LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x417 = -1;
	int32_t x419 = 1053652050;
	int64_t x420 = INT64_MAX;
	volatile int64_t t90 = 436108677LL;

	t90 = ((x417+x418)-(x419%x420));

	if (t90 != 3241315244LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x422 = UINT8_MAX;

	t91 = ((x421+x422)-(x423%x424));

	if (t91 != 3857420LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = UINT64_MAX;
	uint16_t x426 = 414U;
	static volatile uint32_t x427 = 0U;
	volatile int8_t x428 = 1;
	volatile uint64_t t92 = 1912080768503402LLU;

	t92 = ((x425+x426)-(x427%x428));

	if (t92 != 413LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x429 = 4752U;
	volatile int64_t x430 = INT64_MIN;
	uint16_t x431 = 0U;
	static int32_t x432 = INT32_MAX;
	int64_t t93 = -1063391786391380LL;

	t93 = ((x429+x430)-(x431%x432));

	if (t93 != -9223372036854771056LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x434 = INT32_MIN;
	static uint32_t x435 = 67305U;
	int8_t x436 = INT8_MAX;
	static volatile uint64_t t94 = 96935138LLU;

	t94 = ((x433+x434)-(x435%x436));

	if (t94 != 486638421476594LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x441 = INT16_MAX;
	volatile int64_t x444 = INT64_MIN;
	volatile int64_t t95 = -4815688465146LL;

	t95 = ((x441+x442)-(x443%x444));

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x446 = 81U;
	int8_t x447 = 32;
	int32_t x448 = -148177;
	volatile int32_t t96 = 6;

	t96 = ((x445+x446)-(x447%x448));

	if (t96 != 51) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x449 = UINT64_MAX;
	int32_t x450 = -1;
	int64_t x451 = 124299096618143LL;
	uint64_t t97 = 106218197LLU;

	t97 = ((x449+x450)-(x451%x452));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x454 = 442445205568429472LLU;
	volatile int8_t x455 = -1;
	int32_t x456 = INT32_MIN;
	uint64_t t98 = 281371687145726282LLU;

	t98 = ((x453+x454)-(x455%x456));

	if (t98 != 442445205568429472LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x461 = -39;
	static uint16_t x462 = 49U;
	int8_t x464 = INT8_MAX;
	volatile int64_t t99 = -291182LL;

	t99 = ((x461+x462)-(x463%x464));

	if (t99 != 11LL) { NG(); } else { ; }
	
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

