#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x17 = 49U;
static volatile uint64_t x26 = 0LLU;
static int32_t x30 = 17;
int64_t x31 = INT64_MAX;
volatile int32_t t6 = 0;
int32_t x53 = INT32_MIN;
static int64_t x61 = INT64_MAX;
int8_t x64 = INT8_MAX;
int16_t x65 = INT16_MIN;
volatile int8_t x66 = -1;
uint32_t x67 = UINT32_MAX;
int16_t x73 = INT16_MIN;
int8_t x79 = 1;
volatile int32_t t17 = -460991620;
int32_t x81 = -1;
int32_t x83 = -2;
uint32_t x88 = UINT32_MAX;
int32_t t20 = 51434171;
int64_t t21 = 200865LL;
static int8_t x109 = 4;
static uint16_t x121 = 1U;
volatile int32_t t27 = -220;
static int64_t x129 = -51747177LL;
int16_t x131 = INT16_MAX;
int64_t x134 = 30LL;
volatile uint16_t x138 = 7U;
static int32_t x139 = -1;
int64_t x140 = INT64_MIN;
uint8_t x141 = 5U;
int32_t t33 = 22528;
volatile int32_t x161 = INT32_MAX;
uint32_t x162 = 0U;
volatile uint64_t x164 = 28134351471842LLU;
uint64_t t35 = 955926LLU;
uint64_t x168 = UINT64_MAX;
uint64_t t36 = 449225102361LLU;
static uint8_t x182 = UINT8_MAX;
int16_t x187 = -2;
static int8_t x196 = -15;
volatile int32_t x204 = -1;
volatile uint16_t x206 = 1744U;
uint16_t x219 = 197U;
uint32_t x220 = 253U;
int64_t x221 = -12LL;
int64_t x224 = -839250LL;
int16_t x231 = -1;
int32_t t50 = -4708235;
uint8_t x235 = 1U;
int32_t x240 = -16;
uint16_t x248 = 86U;
volatile uint16_t x250 = UINT16_MAX;
volatile int16_t x254 = -6;
int64_t x255 = INT64_MAX;
volatile int64_t x257 = -1LL;
uint16_t x258 = 7749U;
int16_t x265 = INT16_MIN;
int16_t x269 = INT16_MAX;
volatile int64_t t61 = 3LL;
static int8_t x282 = -1;
int32_t t62 = 2;
int64_t x288 = INT64_MIN;
int32_t x297 = -24654556;
int8_t x309 = INT8_MAX;
static volatile uint16_t x312 = 2072U;
volatile int16_t x324 = INT16_MIN;
int32_t x329 = INT32_MIN;
volatile uint8_t x333 = 60U;
volatile uint64_t t75 = UINT64_MAX;
int8_t x364 = INT8_MIN;
static volatile uint64_t x365 = 12778LLU;
static int8_t x369 = -23;
int64_t x374 = 0LL;
int32_t x382 = INT32_MIN;
volatile int32_t t83 = 15105;
volatile uint32_t x386 = UINT32_MAX;
int64_t x392 = INT64_MIN;
int64_t x397 = -1LL;
static uint8_t x406 = 5U;
uint32_t x422 = 1405709U;
static volatile int8_t x424 = 2;
volatile int64_t t93 = -118449008942898LL;
uint16_t x435 = UINT16_MAX;
volatile uint8_t x438 = UINT8_MAX;
int64_t x439 = -706131052920674LL;
int8_t x445 = INT8_MAX;
int32_t x450 = -1;
int32_t t97 = 119900;
volatile uint64_t x453 = 251LLU;
volatile int32_t t99 = INT32_MAX;


void f0(void) {
	volatile int64_t x1 = -763LL;
	static uint64_t x2 = 65682263836LLU;
	int64_t x3 = 5925443679LL;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = -57;

	t0 = (((x1-x2)<=x3)+x4);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 1;
	int8_t x6 = INT8_MAX;
	int8_t x7 = INT8_MIN;
	int64_t x8 = 75795569752LL;
	int64_t t1 = -359644LL;

	t1 = (((x5-x6)<=x7)+x8);

	if (t1 != 75795569752LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x18 = 60521;
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t2 = 2;

	t2 = (((x17-x18)<=x19)+x20);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -1;
	static int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	volatile int16_t x24 = INT16_MIN;
	int32_t t3 = 5663;

	t3 = (((x21-x22)<=x23)+x24);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 0U;
	uint16_t x27 = 42U;
	static volatile uint16_t x28 = 68U;
	volatile int32_t t4 = -471;

	t4 = (((x25-x26)<=x27)+x28);

	if (t4 != 69) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	static volatile int16_t x32 = -1;
	volatile int32_t t5 = 242;

	t5 = (((x29-x30)<=x31)+x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MAX;
	int8_t x36 = INT8_MAX;

	t6 = (((x33-x34)<=x35)+x36);

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1LL;
	uint32_t x38 = 45072052U;
	int32_t x39 = INT32_MIN;
	int8_t x40 = INT8_MAX;
	int32_t t7 = -257035;

	t7 = (((x37-x38)<=x39)+x40);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	static int8_t x42 = INT8_MAX;
	uint16_t x43 = 2U;
	static int64_t x44 = -1LL;
	volatile int64_t t8 = -124114LL;

	t8 = (((x41-x42)<=x43)+x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 3U;
	uint64_t x46 = 74025695LLU;
	int64_t x47 = INT64_MAX;
	uint8_t x48 = 0U;
	volatile int32_t t9 = 240;

	t9 = (((x45-x46)<=x47)+x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = 16057;
	int16_t x50 = -6178;
	int64_t x51 = INT64_MIN;
	volatile uint32_t x52 = 4700U;
	volatile uint32_t t10 = 1987565223U;

	t10 = (((x49-x50)<=x51)+x52);

	if (t10 != 4700U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x54 = 4LLU;
	int64_t x55 = INT64_MIN;
	uint16_t x56 = 2U;
	volatile int32_t t11 = 2986;

	t11 = (((x53-x54)<=x55)+x56);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = UINT8_MAX;
	uint64_t x58 = 132480LLU;
	uint8_t x59 = 46U;
	int32_t x60 = 1047476;
	int32_t t12 = 1;

	t12 = (((x57-x58)<=x59)+x60);

	if (t12 != 1047476) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x62 = 1341067415469479LLU;
	int64_t x63 = INT64_MAX;
	volatile int32_t t13 = 3986090;

	t13 = (((x61-x62)<=x63)+x64);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x68 = INT32_MIN;
	int32_t t14 = -33546;

	t14 = (((x65-x66)<=x67)+x68);

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = -14;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 729987406357238809LLU;
	volatile uint64_t x72 = 2LLU;
	volatile uint64_t t15 = 3LLU;

	t15 = (((x69-x70)<=x71)+x72);

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x74 = INT32_MIN;
	volatile int64_t x75 = INT64_MAX;
	int64_t x76 = -1LL;
	volatile int64_t t16 = 2903LL;

	t16 = (((x73-x74)<=x75)+x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = 3U;
	uint8_t x78 = 105U;
	int8_t x80 = INT8_MAX;

	t17 = (((x77-x78)<=x79)+x80);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x82 = -1476871;
	uint32_t x84 = 61U;
	uint32_t t18 = 5718287U;

	t18 = (((x81-x82)<=x83)+x84);

	if (t18 != 61U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = INT16_MIN;
	uint64_t x86 = 55933770801891628LLU;
	int16_t x87 = INT16_MIN;
	volatile uint32_t t19 = 62203U;

	t19 = (((x85-x86)<=x87)+x88);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = -27536461;
	static uint16_t x90 = 17U;
	int8_t x91 = 0;
	int8_t x92 = -1;

	t20 = (((x89-x90)<=x91)+x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1643;
	uint16_t x94 = 41U;
	int64_t x95 = 26343568165LL;
	int64_t x96 = INT64_MIN;

	t21 = (((x93-x94)<=x95)+x96);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 0;
	int16_t x98 = 11474;
	int8_t x99 = -1;
	uint64_t x100 = 32186510261119LLU;
	volatile uint64_t t22 = 83393349635981606LLU;

	t22 = (((x97-x98)<=x99)+x100);

	if (t22 != 32186510261120LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = UINT8_MAX;
	uint32_t x103 = 5U;
	int16_t x104 = -2995;
	int32_t t23 = -10;

	t23 = (((x101-x102)<=x103)+x104);

	if (t23 != -2995) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x110 = -1LL;
	int32_t x111 = 73627952;
	uint8_t x112 = 56U;
	volatile int32_t t24 = 114263473;

	t24 = (((x109-x110)<=x111)+x112);

	if (t24 != 57) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x113 = 244U;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = 1957494777U;
	int32_t x116 = -6682227;
	volatile int32_t t25 = -1595;

	t25 = (((x113-x114)<=x115)+x116);

	if (t25 != -6682226) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x122 = 159504U;
	int16_t x123 = 1547;
	volatile int8_t x124 = INT8_MAX;
	volatile int32_t t26 = 1969;

	t26 = (((x121-x122)<=x123)+x124);

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	static volatile int32_t x128 = INT32_MIN;

	t27 = (((x125-x126)<=x127)+x128);

	if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x130 = INT32_MIN;
	static volatile uint64_t x132 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = (((x129-x130)<=x131)+x132);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x133 = 1U;
	int32_t x135 = INT32_MAX;
	static int16_t x136 = -15;
	volatile int32_t t29 = 29;

	t29 = (((x133-x134)<=x135)+x136);

	if (t29 != -14) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = UINT8_MAX;
	int64_t t30 = INT64_MIN;

	t30 = (((x137-x138)<=x139)+x140);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x142 = -6;
	static uint32_t x143 = UINT32_MAX;
	volatile int8_t x144 = 27;
	static volatile int32_t t31 = 39;

	t31 = (((x141-x142)<=x143)+x144);

	if (t31 != 28) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x149 = -1LL;
	static int32_t x150 = -75808;
	uint64_t x151 = 37LLU;
	uint32_t x152 = UINT32_MAX;
	uint32_t t32 = UINT32_MAX;

	t32 = (((x149-x150)<=x151)+x152);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -1;
	volatile int16_t x154 = -1;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MAX;

	t33 = (((x153-x154)<=x155)+x156);

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x157 = 9U;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = INT8_MIN;
	int32_t x160 = -1;
	volatile int32_t t34 = 2;

	t34 = (((x157-x158)<=x159)+x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x163 = 135948508238897509LLU;

	t35 = (((x161-x162)<=x163)+x164);

	if (t35 != 28134351471843LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x165 = INT32_MIN;
	uint64_t x166 = 927262063LLU;
	int16_t x167 = -1;

	t36 = (((x165-x166)<=x167)+x168);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = -1;
	volatile uint64_t x171 = UINT64_MAX;
	volatile uint64_t x172 = UINT64_MAX;
	uint64_t t37 = 16052067012LLU;

	t37 = (((x169-x170)<=x171)+x172);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = -1LL;
	static volatile uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = 26U;
	volatile int32_t t38 = 850640;

	t38 = (((x177-x178)<=x179)+x180);

	if (t38 != 26) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = -9;
	volatile uint64_t x183 = 5108151LLU;
	uint32_t x184 = 50721224U;
	static uint32_t t39 = 96055U;

	t39 = (((x181-x182)<=x183)+x184);

	if (t39 != 50721224U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = 4U;
	int16_t x186 = INT16_MAX;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t40 = 6727394U;

	t40 = (((x185-x186)<=x187)+x188);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x193 = INT32_MIN;
	int16_t x194 = -1;
	int16_t x195 = -24;
	volatile int32_t t41 = 0;

	t41 = (((x193-x194)<=x195)+x196);

	if (t41 != -14) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x197 = INT8_MAX;
	int32_t x198 = -1;
	uint64_t x199 = 1LLU;
	static int32_t x200 = -98269;
	volatile int32_t t42 = 298731576;

	t42 = (((x197-x198)<=x199)+x200);

	if (t42 != -98269) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = -1LL;
	int32_t x203 = -2805355;
	volatile int32_t t43 = 12;

	t43 = (((x201-x202)<=x203)+x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = UINT32_MAX;
	volatile uint32_t x207 = UINT32_MAX;
	int64_t x208 = -1LL;
	int64_t t44 = 360142LL;

	t44 = (((x205-x206)<=x207)+x208);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MAX;
	volatile int64_t x212 = -116199054972LL;
	static int64_t t45 = -2336627LL;

	t45 = (((x209-x210)<=x211)+x212);

	if (t45 != -116199054971LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = -78186853882137LL;
	int16_t x214 = INT16_MIN;
	int64_t x215 = -1LL;
	uint8_t x216 = UINT8_MAX;
	int32_t t46 = 96318940;

	t46 = (((x213-x214)<=x215)+x216);

	if (t46 != 256) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = -51523287;
	uint64_t x218 = UINT64_MAX;
	uint32_t t47 = 1661U;

	t47 = (((x217-x218)<=x219)+x220);

	if (t47 != 253U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x222 = INT16_MAX;
	volatile int16_t x223 = 469;
	static int64_t t48 = -16682554146LL;

	t48 = (((x221-x222)<=x223)+x224);

	if (t48 != -839249LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = 12;
	int8_t x226 = -1;
	int64_t x227 = INT64_MIN;
	int16_t x228 = -197;
	static volatile int32_t t49 = -2;

	t49 = (((x225-x226)<=x227)+x228);

	if (t49 != -197) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x229 = INT64_MAX;
	uint32_t x230 = 247781143U;
	int16_t x232 = INT16_MIN;

	t50 = (((x229-x230)<=x231)+x232);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x233 = INT32_MIN;
	int16_t x234 = -1;
	static int32_t x236 = -1;
	volatile int32_t t51 = 1903405;

	t51 = (((x233-x234)<=x235)+x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = -54;
	static uint8_t x238 = 4U;
	volatile int64_t x239 = INT64_MIN;
	int32_t t52 = 1;

	t52 = (((x237-x238)<=x239)+x240);

	if (t52 != -16) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	volatile uint16_t x247 = 2627U;
	int32_t t53 = -411;

	t53 = (((x245-x246)<=x247)+x248);

	if (t53 != 87) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 5U;
	int8_t x251 = INT8_MAX;
	uint32_t x252 = UINT32_MAX;
	uint32_t t54 = 8072U;

	t54 = (((x249-x250)<=x251)+x252);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = INT8_MAX;
	int8_t x256 = 8;
	static int32_t t55 = 12;

	t55 = (((x253-x254)<=x255)+x256);

	if (t55 != 9) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x259 = 94U;
	volatile int16_t x260 = INT16_MIN;
	static int32_t t56 = 5582;

	t56 = (((x257-x258)<=x259)+x260);

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x261 = UINT32_MAX;
	static volatile int16_t x262 = INT16_MIN;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t57 = -13;

	t57 = (((x261-x262)<=x263)+x264);

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x266 = UINT16_MAX;
	static int32_t x267 = INT32_MIN;
	uint32_t x268 = 33403793U;
	uint32_t t58 = 463369U;

	t58 = (((x265-x266)<=x267)+x268);

	if (t58 != 33403793U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x270 = 6U;
	static int32_t x271 = -1;
	uint8_t x272 = 2U;
	int32_t t59 = -342;

	t59 = (((x269-x270)<=x271)+x272);

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x273 = 5U;
	uint64_t x274 = 94514220LLU;
	static int32_t x275 = -1;
	static volatile int64_t x276 = -18647LL;
	volatile int64_t t60 = -134028022359237338LL;

	t60 = (((x273-x274)<=x275)+x276);

	if (t60 != -18646LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = UINT32_MAX;
	uint32_t x278 = 680U;
	uint32_t x279 = UINT32_MAX;
	static int64_t x280 = -1LL;

	t61 = (((x277-x278)<=x279)+x280);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x281 = INT8_MIN;
	static uint16_t x283 = 11472U;
	int16_t x284 = INT16_MIN;

	t62 = (((x281-x282)<=x283)+x284);

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x285 = INT16_MIN;
	uint16_t x286 = 9554U;
	uint8_t x287 = 24U;
	volatile int64_t t63 = 1445418LL;

	t63 = (((x285-x286)<=x287)+x288);

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int64_t x290 = 281815489350LL;
	int16_t x291 = INT16_MAX;
	uint32_t x292 = 0U;
	static uint32_t t64 = 12752U;

	t64 = (((x289-x290)<=x291)+x292);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = -8219700481072LL;
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = 219329751;
	int64_t x296 = -1LL;
	volatile int64_t t65 = 467LL;

	t65 = (((x293-x294)<=x295)+x296);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x298 = 6148U;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = -3081;
	int32_t t66 = 3291227;

	t66 = (((x297-x298)<=x299)+x300);

	if (t66 != -3081) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = -236888264132600728LL;
	int32_t x302 = INT32_MIN;
	volatile int16_t x303 = INT16_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t67 = 2559U;

	t67 = (((x301-x302)<=x303)+x304);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = -1;
	int64_t x306 = INT64_MIN;
	int64_t x307 = 984860LL;
	uint8_t x308 = 31U;
	volatile int32_t t68 = 1038725;

	t68 = (((x305-x306)<=x307)+x308);

	if (t68 != 31) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x310 = -1;
	int32_t x311 = -1306714;
	volatile int32_t t69 = 1759211;

	t69 = (((x309-x310)<=x311)+x312);

	if (t69 != 2072) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -3;
	int32_t x314 = INT32_MIN;
	uint32_t x315 = 334028U;
	static int8_t x316 = -1;
	volatile int32_t t70 = 2512;

	t70 = (((x313-x314)<=x315)+x316);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x317 = INT64_MAX;
	int8_t x318 = INT8_MAX;
	int8_t x319 = 3;
	int8_t x320 = INT8_MIN;
	int32_t t71 = -370767;

	t71 = (((x317-x318)<=x319)+x320);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x321 = 239793096U;
	int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	int32_t t72 = 16310;

	t72 = (((x321-x322)<=x323)+x324);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x325 = 1226358179U;
	int64_t x326 = -236995329851079LL;
	static int16_t x327 = -2041;
	int16_t x328 = INT16_MAX;
	volatile int32_t t73 = 127229;

	t73 = (((x325-x326)<=x327)+x328);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x330 = -1;
	volatile int32_t x331 = -109;
	int8_t x332 = 0;
	volatile int32_t t74 = 419170102;

	t74 = (((x329-x330)<=x331)+x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x334 = INT32_MAX;
	uint32_t x335 = 0U;
	uint64_t x336 = UINT64_MAX;

	t75 = (((x333-x334)<=x335)+x336);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = UINT8_MAX;
	uint64_t x338 = 19450LLU;
	int8_t x339 = -1;
	int8_t x340 = -55;
	int32_t t76 = -1409;

	t76 = (((x337-x338)<=x339)+x340);

	if (t76 != -54) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = 99U;
	uint64_t x342 = 200390083790LLU;
	int64_t x343 = INT64_MAX;
	int32_t x344 = -1;
	volatile int32_t t77 = 15625;

	t77 = (((x341-x342)<=x343)+x344);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MAX;
	int32_t x363 = -3750036;
	volatile int32_t t78 = 1;

	t78 = (((x361-x362)<=x363)+x364);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x366 = INT16_MIN;
	static uint32_t x367 = 26037U;
	static int16_t x368 = -1;
	int32_t t79 = -4043156;

	t79 = (((x365-x366)<=x367)+x368);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x370 = 3U;
	int64_t x371 = 117673270307LL;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t80 = -6;

	t80 = (((x369-x370)<=x371)+x372);

	if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MIN;
	int8_t x375 = 3;
	volatile int32_t x376 = INT32_MIN;
	int32_t t81 = -7073;

	t81 = (((x373-x374)<=x375)+x376);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x377 = 21;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MIN;
	uint16_t x380 = 16U;
	volatile int32_t t82 = 39873277;

	t82 = (((x377-x378)<=x379)+x380);

	if (t82 != 16) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x381 = INT64_MIN;
	int64_t x383 = -284328LL;
	int32_t x384 = -195931;

	t83 = (((x381-x382)<=x383)+x384);

	if (t83 != -195930) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x385 = 1U;
	int16_t x387 = -1;
	int16_t x388 = 14394;
	int32_t t84 = 246;

	t84 = (((x385-x386)<=x387)+x388);

	if (t84 != 14395) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = INT16_MIN;
	uint64_t x390 = 251958494821606LLU;
	int8_t x391 = INT8_MIN;
	int64_t t85 = -9729LL;

	t85 = (((x389-x390)<=x391)+x392);

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x398 = 193U;
	volatile uint64_t x399 = 286991LLU;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = (((x397-x398)<=x399)+x400);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x405 = UINT8_MAX;
	uint16_t x407 = 0U;
	int16_t x408 = INT16_MIN;
	volatile int32_t t87 = 139774060;

	t87 = (((x405-x406)<=x407)+x408);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = -19;
	volatile int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t88 = 9629902;

	t88 = (((x409-x410)<=x411)+x412);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x413 = -1;
	int32_t x414 = INT32_MIN;
	volatile int16_t x415 = INT16_MIN;
	int16_t x416 = -1;
	volatile int32_t t89 = 60;

	t89 = (((x413-x414)<=x415)+x416);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x417 = INT64_MIN;
	int16_t x418 = -67;
	uint64_t x419 = 52LLU;
	uint64_t x420 = 108276944LLU;
	volatile uint64_t t90 = 4921377LLU;

	t90 = (((x417-x418)<=x419)+x420);

	if (t90 != 108276944LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x421 = INT8_MIN;
	static int64_t x423 = -607128LL;
	int32_t t91 = 304;

	t91 = (((x421-x422)<=x423)+x424);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = INT64_MAX;
	static int16_t x426 = 8;
	volatile int16_t x427 = INT16_MAX;
	int32_t x428 = INT32_MIN;
	volatile int32_t t92 = INT32_MIN;

	t92 = (((x425-x426)<=x427)+x428);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = 584;
	uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;

	t93 = (((x429-x430)<=x431)+x432);

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = -3336;
	volatile uint8_t x434 = 0U;
	static int16_t x436 = 30;
	int32_t t94 = -18;

	t94 = (((x433-x434)<=x435)+x436);

	if (t94 != 31) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x437 = 3;
	volatile uint64_t x440 = 157LLU;
	uint64_t t95 = 261199326LLU;

	t95 = (((x437-x438)<=x439)+x440);

	if (t95 != 157LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x446 = -6824LL;
	int8_t x447 = -62;
	volatile int32_t x448 = 201;
	static int32_t t96 = 116085537;

	t96 = (((x445-x446)<=x447)+x448);

	if (t96 != 201) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x449 = 57U;
	volatile int64_t x451 = INT64_MIN;
	uint16_t x452 = UINT16_MAX;

	t97 = (((x449-x450)<=x451)+x452);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x454 = INT32_MIN;
	uint8_t x455 = 6U;
	uint8_t x456 = UINT8_MAX;
	static int32_t t98 = -4169579;

	t98 = (((x453-x454)<=x455)+x456);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x457 = -876165688;
	int32_t x458 = INT32_MIN;
	volatile int32_t x459 = INT32_MIN;
	static int32_t x460 = INT32_MAX;

	t99 = (((x457-x458)<=x459)+x460);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

