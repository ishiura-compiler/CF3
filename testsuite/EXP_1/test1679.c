#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1356323907758LL;
int8_t x5 = INT8_MIN;
static int8_t x6 = -1;
int16_t x8 = INT16_MIN;
uint8_t x10 = 28U;
volatile int32_t t2 = -194;
uint64_t x19 = 7082452187802029925LLU;
uint16_t x22 = 5948U;
volatile int32_t t6 = -16734680;
volatile int8_t x33 = -14;
uint64_t x34 = 25880675535609LLU;
uint64_t x38 = 8630047378541013487LLU;
static uint32_t t9 = 502970U;
static uint16_t x45 = 2394U;
int16_t x53 = -4475;
static uint32_t t11 = 6923U;
volatile int8_t x63 = INT8_MAX;
int32_t t13 = -27906;
uint64_t t14 = 1646454238733827LLU;
int16_t x71 = -1;
uint8_t x77 = 45U;
int8_t x79 = INT8_MAX;
uint16_t x80 = UINT16_MAX;
static int8_t x87 = INT8_MAX;
volatile int8_t x96 = INT8_MAX;
volatile int32_t t20 = 3269238;
volatile int64_t t21 = INT64_MAX;
int8_t x103 = INT8_MIN;
volatile int32_t t22 = 14078;
int64_t x105 = 26247LL;
int32_t t23 = 508;
volatile int32_t x113 = -1;
uint32_t t25 = 56742408U;
volatile uint32_t x120 = 44U;
int64_t x126 = INT64_MIN;
static int32_t x140 = -1;
int32_t t31 = -7;
int64_t x145 = -1LL;
volatile uint32_t t35 = 1439453U;
uint64_t x161 = 18LLU;
int8_t x165 = INT8_MAX;
int16_t x170 = INT16_MAX;
volatile int16_t x179 = -1;
static int32_t x182 = -232769264;
uint64_t t41 = 2429114763630792LLU;
volatile uint8_t x186 = 91U;
uint8_t x188 = UINT8_MAX;
volatile int64_t t43 = -55LL;
int8_t x195 = 3;
int32_t t47 = 314628;
int8_t x209 = -9;
uint64_t x218 = UINT64_MAX;
int8_t x237 = INT8_MIN;
volatile uint8_t x238 = 3U;
int64_t x240 = -35444817529LL;
int64_t t53 = 3412506244959LL;
volatile int16_t x244 = INT16_MIN;
volatile uint8_t x254 = 69U;
volatile uint32_t t57 = 122458278U;
static int16_t x263 = -1;
int8_t x269 = -1;
uint64_t x282 = 1431791632910546652LLU;
volatile uint64_t x293 = 26966LLU;
int64_t x299 = -1LL;
int16_t x315 = 6;
static uint64_t x316 = UINT64_MAX;
int8_t x320 = INT8_MIN;
int32_t x323 = -72155;
uint16_t x329 = UINT16_MAX;
static volatile uint64_t x330 = 2945062106199557LLU;
uint32_t t72 = 211512231U;
int16_t x337 = INT16_MIN;
static uint8_t x341 = UINT8_MAX;
int32_t x342 = -89121;
volatile uint16_t x348 = UINT16_MAX;
static volatile int32_t t75 = 1753294;
int8_t x352 = INT8_MIN;
int8_t x359 = -46;
int32_t t78 = 33959493;
int32_t t79 = 454;
int64_t x368 = -1780433LL;
volatile int8_t x371 = INT8_MIN;
int8_t x373 = 1;
int8_t x375 = INT8_MIN;
volatile int8_t x377 = -1;
int32_t x381 = -2;
static uint32_t x386 = 709934452U;
volatile int8_t x388 = -18;
int8_t x389 = 7;
int16_t x390 = 71;
uint8_t x391 = 25U;
int32_t x400 = 901;
int64_t t89 = 3LL;
static volatile int16_t x416 = -1;
volatile uint8_t x424 = 6U;
int64_t x426 = -432156LL;
static int32_t x428 = INT32_MIN;
static volatile int64_t t95 = -4951041594LL;
uint16_t x434 = UINT16_MAX;
int8_t x436 = INT8_MAX;
static int64_t x438 = -1LL;
int32_t t97 = 493512580;
static int8_t x442 = INT8_MIN;
volatile uint32_t t98 = 184855U;
int16_t x451 = INT16_MAX;


void f0(void) {
	int16_t x2 = INT16_MAX;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 40U;
	volatile uint32_t t0 = 207504U;

	t0 = (((x1<=x2)^x3)-x4);

	if (t0 != 4294967129U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x7 = 77U;
	volatile int32_t t1 = 762085981;

	t1 = (((x5<=x6)^x7)-x8);

	if (t1 != 32844) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int32_t x11 = -1;
	int32_t x12 = -1;

	t2 = (((x9<=x10)^x11)-x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = INT32_MIN;
	uint8_t x18 = 100U;
	int16_t x20 = 970;
	volatile uint64_t t3 = 1926036051091742LLU;

	t3 = (((x17<=x18)^x19)-x20);

	if (t3 != 7082452187802028954LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int16_t x23 = -1;
	static int16_t x24 = INT16_MIN;
	static volatile int32_t t4 = -113423838;

	t4 = (((x21<=x22)^x23)-x24);

	if (t4 != 32766) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = 5;
	static int8_t x26 = -1;
	int16_t x27 = -63;
	int64_t x28 = INT64_MIN;
	static volatile int64_t t5 = -624945688110082478LL;

	t5 = (((x25<=x26)^x27)-x28);

	if (t5 != 9223372036854775745LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	static volatile int64_t x30 = -1LL;
	uint16_t x31 = 57U;
	int16_t x32 = INT16_MAX;

	t6 = (((x29<=x30)^x31)-x32);

	if (t6 != -32711) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x35 = -1;
	static uint32_t x36 = 2915070U;
	uint32_t t7 = 56792783U;

	t7 = (((x33<=x34)^x35)-x36);

	if (t7 != 4292052225U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = 0;
	int64_t x39 = -1LL;
	int32_t x40 = INT32_MAX;
	static int64_t t8 = 645330087777320LL;

	t8 = (((x37<=x38)^x39)-x40);

	if (t8 != -2147483649LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 1;
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = -4;
	uint32_t x44 = UINT32_MAX;

	t9 = (((x41<=x42)^x43)-x44);

	if (t9 != 4294967293U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = 1;
	volatile int8_t x47 = INT8_MIN;
	static volatile uint16_t x48 = 2U;
	int32_t t10 = 382114113;

	t10 = (((x45<=x46)^x47)-x48);

	if (t10 != -130) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x54 = INT8_MAX;
	uint32_t x55 = 1604U;
	volatile uint8_t x56 = UINT8_MAX;

	t11 = (((x53<=x54)^x55)-x56);

	if (t11 != 1350U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t12 = 650879U;

	t12 = (((x57<=x58)^x59)-x60);

	if (t12 != 2147483649U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MAX;
	int32_t x64 = INT32_MAX;

	t13 = (((x61<=x62)^x63)-x64);

	if (t13 != -2147483521) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -803;
	static uint8_t x66 = 54U;
	uint64_t x67 = 5LLU;
	static volatile uint32_t x68 = 1546513519U;

	t14 = (((x65<=x66)^x67)-x68);

	if (t14 != 18446744072163038101LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = 251598;
	int16_t x70 = INT16_MIN;
	static int32_t x72 = INT32_MIN;
	int32_t t15 = INT32_MAX;

	t15 = (((x69<=x70)^x71)-x72);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x78 = 81;
	static int32_t t16 = 17873788;

	t16 = (((x77<=x78)^x79)-x80);

	if (t16 != -65409) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = INT16_MIN;
	volatile uint8_t x83 = 31U;
	uint16_t x84 = 105U;
	volatile int32_t t17 = 65942808;

	t17 = (((x81<=x82)^x83)-x84);

	if (t17 != -75) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 6U;
	static volatile int8_t x86 = INT8_MIN;
	static int64_t x88 = INT64_MAX;
	static volatile int64_t t18 = 2242746446688LL;

	t18 = (((x85<=x86)^x87)-x88);

	if (t18 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;
	volatile int32_t x91 = INT32_MIN;
	static volatile int16_t x92 = -4071;
	int32_t t19 = 89018;

	t19 = (((x89<=x90)^x91)-x92);

	if (t19 != -2147479577) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 596108908195558LLU;
	static uint32_t x94 = 1048232U;
	static int32_t x95 = -1;

	t20 = (((x93<=x94)^x95)-x96);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = 41;
	static volatile int64_t x99 = INT64_MAX;
	volatile int8_t x100 = -1;

	t21 = (((x97<=x98)^x99)-x100);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = -7;
	int32_t x102 = -1;
	int16_t x104 = INT16_MIN;

	t22 = (((x101<=x102)^x103)-x104);

	if (t22 != 32641) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x106 = 6686;
	uint8_t x107 = 6U;
	int8_t x108 = INT8_MIN;

	t23 = (((x105<=x106)^x107)-x108);

	if (t23 != 134) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = 4;
	uint32_t x112 = 47U;
	static uint32_t t24 = 707697621U;

	t24 = (((x109<=x110)^x111)-x112);

	if (t24 != 4294967254U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x114 = -1;
	uint32_t x115 = 3U;
	volatile int16_t x116 = INT16_MAX;

	t25 = (((x113<=x114)^x115)-x116);

	if (t25 != 4294934531U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = INT64_MIN;
	static uint8_t x118 = 0U;
	int32_t x119 = -1;
	volatile uint32_t t26 = 61971377U;

	t26 = (((x117<=x118)^x119)-x120);

	if (t26 != 4294967250U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = -1;
	int8_t x122 = 3;
	volatile int32_t x123 = 10586;
	int8_t x124 = -1;
	int32_t t27 = 56037;

	t27 = (((x121<=x122)^x123)-x124);

	if (t27 != 10588) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x125 = 50U;
	int16_t x127 = 5792;
	static volatile uint64_t x128 = 13725770588005LLU;
	static uint64_t t28 = 5843446LLU;

	t28 = (((x125<=x126)^x127)-x128);

	if (t28 != 18446730347938969403LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x129 = UINT16_MAX;
	static int16_t x130 = -163;
	volatile uint16_t x131 = 14350U;
	int8_t x132 = -1;
	volatile int32_t t29 = -1;

	t29 = (((x129<=x130)^x131)-x132);

	if (t29 != 14351) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MAX;
	uint64_t x134 = 2815168628LLU;
	uint16_t x135 = 2U;
	uint16_t x136 = 3333U;
	volatile int32_t t30 = 5267041;

	t30 = (((x133<=x134)^x135)-x136);

	if (t30 != -3330) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x137 = 17226319U;
	uint8_t x138 = 1U;
	uint8_t x139 = 0U;

	t31 = (((x137<=x138)^x139)-x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x141 = UINT16_MAX;
	uint8_t x142 = 0U;
	int16_t x143 = -317;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t32 = 170LLU;

	t32 = (((x141<=x142)^x143)-x144);

	if (t32 != 18446744073709551300LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x146 = UINT16_MAX;
	volatile int8_t x147 = -54;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t33 = 64917233;

	t33 = (((x145<=x146)^x147)-x148);

	if (t33 != -308) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = -410035533LL;
	int64_t x150 = INT64_MAX;
	int8_t x151 = -1;
	int64_t x152 = INT64_MIN;
	volatile int64_t t34 = -1747LL;

	t34 = (((x149<=x150)^x151)-x152);

	if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = -1;
	int32_t x154 = INT32_MAX;
	static volatile uint32_t x155 = 8U;
	static volatile int16_t x156 = -1;

	t35 = (((x153<=x154)^x155)-x156);

	if (t35 != 10U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x157 = 5806081U;
	static uint32_t x158 = UINT32_MAX;
	static int8_t x159 = -1;
	static volatile uint32_t x160 = 457887914U;
	uint32_t t36 = 2038830884U;

	t36 = (((x157<=x158)^x159)-x160);

	if (t36 != 3837079380U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x162 = 1;
	uint32_t x163 = 288U;
	int16_t x164 = INT16_MAX;
	uint32_t t37 = 6344U;

	t37 = (((x161<=x162)^x163)-x164);

	if (t37 != 4294934817U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x166 = INT32_MAX;
	volatile uint8_t x167 = 43U;
	static volatile uint32_t x168 = 493655U;
	static uint32_t t38 = 277140U;

	t38 = (((x165<=x166)^x167)-x168);

	if (t38 != 4294473683U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 7125035075LLU;
	int16_t x171 = 0;
	int8_t x172 = INT8_MIN;
	int32_t t39 = -113;

	t39 = (((x169<=x170)^x171)-x172);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	volatile int8_t x178 = 0;
	int16_t x180 = INT16_MIN;
	int32_t t40 = -98718;

	t40 = (((x177<=x178)^x179)-x180);

	if (t40 != 32766) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x181 = 1U;
	static uint16_t x183 = UINT16_MAX;
	uint64_t x184 = 1386444LLU;

	t41 = (((x181<=x182)^x183)-x184);

	if (t41 != 18446744073708230707LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x185 = INT16_MIN;
	uint64_t x187 = UINT64_MAX;
	uint64_t t42 = 487503451940092LLU;

	t42 = (((x185<=x186)^x187)-x188);

	if (t42 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = 739;
	int64_t x191 = INT64_MIN;
	volatile int64_t x192 = INT64_MIN;

	t43 = (((x189<=x190)^x191)-x192);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = -1;
	volatile int64_t x194 = -353493LL;
	volatile int32_t x196 = INT32_MAX;
	static volatile int32_t t44 = -11279451;

	t44 = (((x193<=x194)^x195)-x196);

	if (t44 != -2147483644) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x197 = 3973492;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	volatile uint64_t x200 = UINT64_MAX;
	uint64_t t45 = 528353932LLU;

	t45 = (((x197<=x198)^x199)-x200);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x201 = 1;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = -1;
	int32_t x204 = -1;
	int32_t t46 = 1;

	t46 = (((x201<=x202)^x203)-x204);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x205 = INT32_MAX;
	volatile uint16_t x206 = 2U;
	static uint16_t x207 = UINT16_MAX;
	int16_t x208 = -1515;

	t47 = (((x205<=x206)^x207)-x208);

	if (t47 != 67050) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x210 = 49098057U;
	int64_t x211 = INT64_MAX;
	volatile int8_t x212 = INT8_MAX;
	volatile int64_t t48 = -192456LL;

	t48 = (((x209<=x210)^x211)-x212);

	if (t48 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x213 = 4684U;
	static int8_t x214 = INT8_MIN;
	int64_t x215 = -1LL;
	static int16_t x216 = -5215;
	int64_t t49 = 729004LL;

	t49 = (((x213<=x214)^x215)-x216);

	if (t49 != 5214LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = 0U;
	int8_t x219 = INT8_MAX;
	uint64_t x220 = 766363LLU;
	volatile uint64_t t50 = 158LLU;

	t50 = (((x217<=x218)^x219)-x220);

	if (t50 != 18446744073708785379LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = 595354087LL;
	uint16_t x222 = UINT16_MAX;
	volatile int32_t x223 = INT32_MAX;
	int64_t x224 = INT64_MAX;
	volatile int64_t t51 = -45064059839512LL;

	t51 = (((x221<=x222)^x223)-x224);

	if (t51 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MIN;
	static int32_t x226 = -339861;
	static uint16_t x227 = 8U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t52 = -596802091;

	t52 = (((x225<=x226)^x227)-x228);

	if (t52 != 136) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x239 = INT32_MIN;

	t53 = (((x237<=x238)^x239)-x240);

	if (t53 != 33297333882LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MAX;
	static volatile int16_t x243 = -1;
	int32_t t54 = -17940;

	t54 = (((x241<=x242)^x243)-x244);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x249 = INT16_MIN;
	uint64_t x250 = 1LLU;
	int16_t x251 = INT16_MIN;
	int16_t x252 = -1;
	int32_t t55 = 331300;

	t55 = (((x249<=x250)^x251)-x252);

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MAX;
	uint16_t x255 = 211U;
	uint8_t x256 = 2U;
	volatile int32_t t56 = 1492798;

	t56 = (((x253<=x254)^x255)-x256);

	if (t56 != 209) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -23;
	static uint16_t x258 = 6U;
	uint32_t x259 = 5U;
	int16_t x260 = INT16_MAX;

	t57 = (((x257<=x258)^x259)-x260);

	if (t57 != 4294934533U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x261 = INT16_MIN;
	volatile int32_t x262 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t58 = 5;

	t58 = (((x261<=x262)^x263)-x264);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MAX;
	int32_t x272 = INT32_MAX;
	volatile int32_t t59 = 237983567;

	t59 = (((x269<=x270)^x271)-x272);

	if (t59 != -2147483521) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = UINT64_MAX;
	uint16_t x278 = 572U;
	volatile int16_t x279 = INT16_MIN;
	int16_t x280 = -24;
	int32_t t60 = 164956;

	t60 = (((x277<=x278)^x279)-x280);

	if (t60 != -32744) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = 5933;
	volatile int32_t x283 = -925840;
	int64_t x284 = -1LL;
	volatile int64_t t61 = 464758788LL;

	t61 = (((x281<=x282)^x283)-x284);

	if (t61 != -925838LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MIN;
	static int8_t x291 = INT8_MAX;
	uint64_t x292 = 2111456LLU;
	static uint64_t t62 = 7556220LLU;

	t62 = (((x289<=x290)^x291)-x292);

	if (t62 != 18446744073707440287LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x294 = INT16_MIN;
	uint8_t x295 = 2U;
	int8_t x296 = INT8_MIN;
	int32_t t63 = 7311;

	t63 = (((x293<=x294)^x295)-x296);

	if (t63 != 131) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = INT64_MAX;
	static volatile uint16_t x298 = 1U;
	volatile uint64_t x300 = 85LLU;
	uint64_t t64 = 5977277040LLU;

	t64 = (((x297<=x298)^x299)-x300);

	if (t64 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x301 = 87472U;
	static int32_t x302 = 20261028;
	int16_t x303 = INT16_MIN;
	uint64_t x304 = 321883502LLU;
	volatile uint64_t t65 = 10980193444734LLU;

	t65 = (((x301<=x302)^x303)-x304);

	if (t65 != 18446744073387635347LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x305 = 82;
	uint8_t x306 = UINT8_MAX;
	static uint64_t x307 = 220LLU;
	int16_t x308 = INT16_MIN;
	static volatile uint64_t t66 = 31338287867LLU;

	t66 = (((x305<=x306)^x307)-x308);

	if (t66 != 32989LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x309 = 51;
	volatile int64_t x310 = -1LL;
	static int8_t x311 = 7;
	int16_t x312 = -1;
	volatile int32_t t67 = 0;

	t67 = (((x309<=x310)^x311)-x312);

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x313 = INT64_MIN;
	static volatile uint64_t x314 = UINT64_MAX;
	uint64_t t68 = 372210219LLU;

	t68 = (((x313<=x314)^x315)-x316);

	if (t68 != 8LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = -1;
	uint32_t x318 = 1907568250U;
	static int16_t x319 = INT16_MIN;
	int32_t t69 = 10;

	t69 = (((x317<=x318)^x319)-x320);

	if (t69 != -32640) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x321 = -2;
	static int32_t x322 = INT32_MIN;
	int64_t x324 = -1LL;
	int64_t t70 = -48LL;

	t70 = (((x321<=x322)^x323)-x324);

	if (t70 != -72154LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x325 = -1;
	int32_t x326 = -210797141;
	uint64_t x327 = 4752LLU;
	uint32_t x328 = UINT32_MAX;
	uint64_t t71 = 106312298244305LLU;

	t71 = (((x325<=x326)^x327)-x328);

	if (t71 != 18446744069414589073LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x331 = 1U;
	uint32_t x332 = 465U;

	t72 = (((x329<=x330)^x331)-x332);

	if (t72 != 4294966831U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x338 = 1814343028U;
	int32_t x339 = 956997;
	static int16_t x340 = INT16_MIN;
	int32_t t73 = -13;

	t73 = (((x337<=x338)^x339)-x340);

	if (t73 != 989765) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x343 = -1;
	static int64_t x344 = INT64_MIN;
	int64_t t74 = INT64_MAX;

	t74 = (((x341<=x342)^x343)-x344);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x345 = 8U;
	int32_t x346 = -1;
	int8_t x347 = -30;

	t75 = (((x345<=x346)^x347)-x348);

	if (t75 != -65565) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = 5705;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	int32_t t76 = 89560128;

	t76 = (((x349<=x350)^x351)-x352);

	if (t76 != -32640) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	volatile int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t77 = -56182;

	t77 = (((x353<=x354)^x355)-x356);

	if (t77 != 32641) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x357 = UINT8_MAX;
	volatile uint32_t x358 = 9152U;
	uint8_t x360 = 88U;

	t78 = (((x357<=x358)^x359)-x360);

	if (t78 != -133) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = INT8_MIN;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MAX;
	volatile int8_t x364 = INT8_MIN;

	t79 = (((x361<=x362)^x363)-x364);

	if (t79 != 32894) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MAX;
	uint16_t x366 = 170U;
	int32_t x367 = 22;
	volatile int64_t t80 = -193572LL;

	t80 = (((x365<=x366)^x367)-x368);

	if (t80 != 1780455LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = INT16_MIN;
	static uint64_t x370 = 50261749197536LLU;
	int8_t x372 = INT8_MAX;
	volatile int32_t t81 = -163981;

	t81 = (((x369<=x370)^x371)-x372);

	if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x374 = 143LLU;
	volatile int64_t x376 = -1LL;
	int64_t t82 = 61LL;

	t82 = (((x373<=x374)^x375)-x376);

	if (t82 != -126LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x378 = UINT64_MAX;
	volatile int16_t x379 = INT16_MAX;
	static uint64_t x380 = 2685784832011665430LLU;
	static volatile uint64_t t83 = 2252LLU;

	t83 = (((x377<=x378)^x379)-x380);

	if (t83 != 15760959241697918952LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x382 = INT32_MAX;
	static volatile uint32_t x383 = 1837U;
	volatile uint32_t x384 = 383323U;
	uint32_t t84 = 7499U;

	t84 = (((x381<=x382)^x383)-x384);

	if (t84 != 4294585809U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x385 = 5U;
	int8_t x387 = INT8_MAX;
	int32_t t85 = 321200092;

	t85 = (((x385<=x386)^x387)-x388);

	if (t85 != 144) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x392 = -25;
	int32_t t86 = 0;

	t86 = (((x389<=x390)^x391)-x392);

	if (t86 != 49) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x393 = INT32_MAX;
	volatile int64_t x394 = -61858104065158LL;
	uint32_t x395 = UINT32_MAX;
	volatile int16_t x396 = INT16_MIN;
	uint32_t t87 = 769227U;

	t87 = (((x393<=x394)^x395)-x396);

	if (t87 != 32767U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MIN;
	int64_t x399 = 0LL;
	volatile int64_t t88 = -102LL;

	t88 = (((x397<=x398)^x399)-x400);

	if (t88 != -900LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x401 = -1;
	uint32_t x402 = 68474398U;
	int64_t x403 = -45672969853LL;
	static uint32_t x404 = 3U;

	t89 = (((x401<=x402)^x403)-x404);

	if (t89 != -45672969856LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x405 = UINT64_MAX;
	volatile uint32_t x406 = 197258U;
	uint64_t x407 = 97593588LLU;
	int8_t x408 = INT8_MIN;
	static volatile uint64_t t90 = 53163282080843638LLU;

	t90 = (((x405<=x406)^x407)-x408);

	if (t90 != 97593716LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x413 = 1473U;
	static int16_t x414 = 132;
	int16_t x415 = INT16_MAX;
	int32_t t91 = -102387;

	t91 = (((x413<=x414)^x415)-x416);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MIN;
	uint32_t x418 = 8042U;
	static uint64_t x419 = 536699752032LLU;
	int8_t x420 = -1;
	static volatile uint64_t t92 = 1885877773639LLU;

	t92 = (((x417<=x418)^x419)-x420);

	if (t92 != 536699752034LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x421 = UINT16_MAX;
	int64_t x422 = INT64_MIN;
	int64_t x423 = INT64_MAX;
	volatile int64_t t93 = -93961106LL;

	t93 = (((x421<=x422)^x423)-x424);

	if (t93 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x425 = INT8_MIN;
	static uint32_t x427 = UINT32_MAX;
	uint32_t t94 = 8U;

	t94 = (((x425<=x426)^x427)-x428);

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x429 = INT64_MIN;
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;

	t95 = (((x429<=x430)^x431)-x432);

	if (t95 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = 218721714;
	static int8_t x435 = INT8_MAX;
	volatile int32_t t96 = 61;

	t96 = (((x433<=x434)^x435)-x436);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = INT64_MAX;
	int16_t x439 = 158;
	int16_t x440 = INT16_MIN;

	t97 = (((x437<=x438)^x439)-x440);

	if (t97 != 32926) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x441 = -1;
	int16_t x443 = 8390;
	static volatile uint32_t x444 = 1177U;

	t98 = (((x441<=x442)^x443)-x444);

	if (t98 != 7213U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x449 = 58U;
	uint32_t x450 = 610U;
	int16_t x452 = 87;
	static volatile int32_t t99 = 2199;

	t99 = (((x449<=x450)^x451)-x452);

	if (t99 != 32679) { NG(); } else { ; }
	
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

