#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -1059449858099022524LL;
int32_t x5 = -1;
int64_t t1 = 2LL;
volatile int8_t x9 = -1;
int32_t t3 = 883032;
uint8_t x17 = 3U;
volatile int8_t x19 = -1;
int16_t x32 = INT16_MIN;
int64_t x40 = INT64_MIN;
int32_t x42 = INT32_MIN;
int64_t t8 = 393391LL;
int32_t x45 = INT32_MIN;
int16_t x53 = INT16_MAX;
uint32_t x54 = 96304U;
int64_t t11 = -34848109233660LL;
volatile int32_t x68 = -1;
volatile int32_t t13 = -10865;
uint64_t t15 = 24217LLU;
static volatile uint64_t x84 = UINT64_MAX;
volatile int16_t x87 = INT16_MAX;
int8_t x93 = 15;
uint64_t x96 = 3327LLU;
volatile int16_t x104 = INT16_MIN;
static int64_t x105 = INT64_MAX;
uint16_t x108 = 2U;
static volatile int64_t t22 = -5188989LL;
uint8_t x113 = 24U;
static int32_t x116 = INT32_MAX;
static int32_t t24 = 2915;
static int16_t x122 = INT16_MIN;
int16_t x132 = INT16_MIN;
volatile int32_t t28 = -58758;
volatile uint32_t x137 = UINT32_MAX;
int16_t x144 = -1;
int16_t x145 = 10372;
int32_t x149 = -1;
uint16_t x150 = UINT16_MAX;
volatile uint32_t x152 = UINT32_MAX;
int32_t x164 = INT32_MIN;
int8_t x168 = INT8_MAX;
volatile int32_t t37 = -66856772;
static int64_t x173 = -1692126LL;
volatile int32_t x175 = -31469467;
uint64_t t40 = 730364LLU;
int16_t x191 = INT16_MAX;
volatile int32_t t42 = 7337;
int32_t x197 = INT32_MIN;
int32_t x203 = INT32_MIN;
volatile int64_t t44 = 635118235543695LL;
int64_t x208 = -1LL;
int16_t x213 = 3768;
static uint8_t x215 = 56U;
static volatile uint8_t x222 = 1U;
static int8_t x226 = -2;
int8_t x237 = -1;
volatile int8_t x239 = 18;
int16_t x240 = 857;
int64_t t53 = 57LL;
int32_t x246 = -48;
volatile uint32_t x247 = 525432290U;
volatile uint8_t x250 = 0U;
static int16_t x251 = INT16_MAX;
int16_t x256 = INT16_MIN;
uint64_t t57 = 8226498450LLU;
int64_t x261 = INT64_MAX;
static volatile uint16_t x262 = 8511U;
volatile uint64_t t60 = 1104345354LLU;
int16_t x276 = INT16_MIN;
uint16_t x282 = 5138U;
uint64_t x283 = UINT64_MAX;
static uint64_t x284 = 90445632823228LLU;
uint16_t x286 = 2321U;
int16_t x294 = INT16_MAX;
int64_t x297 = INT64_MIN;
uint64_t x298 = 11637LLU;
uint32_t x303 = 1U;
static uint32_t t69 = 2U;
uint32_t x317 = 2437U;
uint64_t x319 = 3576097190185844118LLU;
int16_t x323 = 23;
uint32_t x327 = 66001729U;
int64_t t75 = 1393261004183LL;
int32_t x332 = -320;
int8_t x336 = -3;
volatile int64_t t77 = -48231332230428992LL;
volatile int64_t x337 = -1LL;
volatile int64_t x338 = -28599672023875332LL;
int64_t t78 = 8262559770LL;
int64_t x346 = -1LL;
uint32_t t81 = 12U;
int16_t x355 = INT16_MAX;
int8_t x363 = INT8_MIN;
int64_t x366 = INT64_MAX;
int64_t x367 = INT64_MAX;
int64_t t85 = 49568279LL;
static uint8_t x371 = 1U;
int32_t x373 = INT32_MAX;
uint16_t x382 = 15122U;
static volatile int64_t x383 = -9LL;
uint16_t x389 = 248U;
static int64_t x390 = INT64_MAX;
uint16_t x391 = 6U;
static int16_t x394 = INT16_MIN;
int8_t x396 = 3;
int8_t x397 = -1;
uint64_t x401 = 18320194079LLU;
uint64_t t94 = 1442633LLU;
static int64_t x412 = -1LL;
int8_t x415 = -1;
static uint64_t x418 = UINT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;

	t0 = (x1-((x2&x3)^x4));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 790LL;
	int64_t x7 = INT64_MIN;
	volatile int8_t x8 = INT8_MIN;

	t1 = (x5-((x6&x7)^x8));

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 275469622386726LLU;
	static int64_t x11 = INT64_MIN;
	static uint32_t x12 = 20823848U;
	volatile uint64_t t2 = 382573710345LLU;

	t2 = (x9-((x10&x11)^x12));

	if (t2 != 18446744073688727767LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static int32_t x14 = -1;
	static volatile int32_t x15 = -4492;
	int16_t x16 = -1;

	t3 = (x13-((x14&x15)^x16));

	if (t3 != 61044) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = 740;
	int32_t x20 = -1;
	volatile int32_t t4 = 1220;

	t4 = (x17-((x18&x19)^x20));

	if (t4 != 744) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 0;
	uint64_t x22 = 3861464329LLU;
	int8_t x23 = INT8_MIN;
	static uint8_t x24 = UINT8_MAX;
	volatile uint64_t t5 = 208437LLU;

	t5 = (x21-((x22&x23)^x24));

	if (t5 != 18446744069848087041LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 10U;
	int64_t x30 = 355238126933LL;
	volatile int32_t x31 = 66301459;
	static volatile int64_t t6 = -1053210825189LL;

	t6 = (x29-((x30&x31)^x32));

	if (t6 != 30661625LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x37 = INT16_MAX;
	static int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	volatile int64_t t7 = 4270LL;

	t7 = (x37-((x38&x39)^x40));

	if (t7 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	int64_t x43 = -9154158LL;
	uint8_t x44 = 0U;

	t8 = (x41-((x42&x43)^x44));

	if (t8 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = INT16_MAX;
	static uint16_t x47 = 1850U;
	uint64_t x48 = 117408023LLU;
	uint64_t t9 = 75756995316252479LLU;

	t9 = (x45-((x46&x47)^x48));

	if (t9 != 18446744071444658643LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MAX;
	int32_t x50 = -6306;
	static int32_t x51 = INT32_MIN;
	int8_t x52 = -1;
	volatile int64_t t10 = 234736623055LL;

	t10 = (x49-((x50&x51)^x52));

	if (t10 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x55 = 6U;
	int64_t x56 = INT64_MAX;

	t11 = (x53-((x54&x55)^x56));

	if (t11 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -260;
	uint64_t x58 = UINT64_MAX;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MIN;
	static uint64_t t12 = 39994120815226871LLU;

	t12 = (x57-((x58&x59)^x60));

	if (t12 != 9223372039002259196LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	int16_t x66 = INT16_MAX;
	uint16_t x67 = UINT16_MAX;

	t13 = (x65-((x66&x67)^x68));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 6615956926853958288LLU;
	int64_t x70 = -1LL;
	volatile int16_t x71 = INT16_MAX;
	uint8_t x72 = 5U;
	uint64_t t14 = 20351442214LLU;

	t14 = (x69-((x70&x71)^x72));

	if (t14 != 6615956926853925526LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = UINT64_MAX;
	uint64_t x74 = UINT64_MAX;
	uint8_t x75 = UINT8_MAX;
	volatile int8_t x76 = INT8_MIN;

	t15 = (x73-((x74&x75)^x76));

	if (t15 != 128LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = INT32_MIN;
	static volatile int64_t x78 = -1LL;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	int64_t t16 = 1623758313LL;

	t16 = (x77-((x78&x79)^x80));

	if (t16 != -2147483519LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = 968;
	int32_t x82 = INT32_MIN;
	int32_t x83 = -1;
	static volatile uint64_t t17 = 9292461868136558LLU;

	t17 = (x81-((x82&x83)^x84));

	if (t17 != 18446744071562068937LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x85 = UINT64_MAX;
	uint8_t x86 = 16U;
	int32_t x88 = -47861;
	volatile uint64_t t18 = 3958LLU;

	t18 = (x85-((x86&x87)^x88));

	if (t18 != 47844LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -355740269112658777LL;
	volatile int64_t x90 = 4393519284LL;
	volatile int64_t x91 = INT64_MIN;
	static volatile int8_t x92 = INT8_MIN;
	int64_t t19 = -111LL;

	t19 = (x89-((x90&x91)^x92));

	if (t19 != -355740269112658649LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x94 = -1;
	int16_t x95 = 3036;
	volatile uint64_t t20 = 40647552768499LLU;

	t20 = (x93-((x94&x95)^x96));

	if (t20 != 18446744073709549804LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 122U;
	static uint32_t x102 = UINT32_MAX;
	int16_t x103 = -1;
	volatile uint32_t t21 = 3183852U;

	t21 = (x101-((x102&x103)^x104));

	if (t21 != 4294934651U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x106 = 3U;
	int32_t x107 = -1;

	t22 = (x105-((x106&x107)^x108));

	if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MAX;
	int16_t x110 = INT16_MIN;
	int32_t x111 = -31;
	int16_t x112 = -36;
	int32_t t23 = 192;

	t23 = (x109-((x110&x111)^x112));

	if (t23 != -32605) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x114 = UINT16_MAX;
	int16_t x115 = -1;

	t24 = (x113-((x114&x115)^x116));

	if (t24 != -2147418088) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1205;
	volatile uint32_t x118 = UINT32_MAX;
	volatile uint8_t x119 = 0U;
	uint32_t x120 = 895333085U;
	volatile uint32_t t25 = 7748U;

	t25 = (x117-((x118&x119)^x120));

	if (t25 != 3399633006U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -1LL;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t26 = 683540660769LL;

	t26 = (x121-((x122&x123)^x124));

	if (t26 != -256LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 1U;
	uint64_t x126 = 108057975058LLU;
	int16_t x127 = -1;
	int64_t x128 = 14688717528LL;
	volatile uint64_t t27 = 14936299LLU;

	t27 = (x125-((x126&x127)^x128));

	if (t27 != 18446743960911752247LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MAX;
	int32_t x131 = INT32_MIN;

	t28 = (x129-((x130&x131)^x132));

	if (t28 != -2147450880) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -7;
	volatile int8_t x134 = INT8_MAX;
	uint32_t x135 = 6328370U;
	volatile uint32_t x136 = UINT32_MAX;
	uint32_t t29 = 5108395U;

	t29 = (x133-((x134&x135)^x136));

	if (t29 != 44U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x138 = INT32_MAX;
	int8_t x139 = INT8_MIN;
	static int8_t x140 = -57;
	uint32_t t30 = 106U;

	t30 = (x137-((x138&x139)^x140));

	if (t30 != 2147483576U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x141 = INT64_MIN;
	uint16_t x142 = UINT16_MAX;
	volatile int8_t x143 = INT8_MAX;
	volatile int64_t t31 = 2723459417132LL;

	t31 = (x141-((x142&x143)^x144));

	if (t31 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x146 = INT16_MAX;
	int32_t x147 = INT32_MAX;
	volatile int64_t x148 = -301397102971979999LL;
	static volatile int64_t t32 = -186416899401891LL;

	t32 = (x145-((x146&x147)^x148));

	if (t32 != 301397102972018598LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x151 = UINT8_MAX;
	uint32_t t33 = 4462082U;

	t33 = (x149-((x150&x151)^x152));

	if (t33 != 255U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x153 = -4;
	static int16_t x154 = INT16_MIN;
	int64_t x155 = -16122764607223280LL;
	volatile int64_t x156 = INT64_MIN;
	volatile int64_t t34 = -1LL;

	t34 = (x153-((x154&x155)^x156));

	if (t34 != -9207249272247549956LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -1LL;
	static int64_t x158 = INT64_MIN;
	static int64_t x159 = 1095505745LL;
	static volatile int8_t x160 = -1;
	static int64_t t35 = 1735927LL;

	t35 = (x157-((x158&x159)^x160));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x161 = 2742001348833LLU;
	uint8_t x162 = 2U;
	int16_t x163 = INT16_MAX;
	static uint64_t t36 = 24651981651LLU;

	t36 = (x161-((x162&x163)^x164));

	if (t36 != 2744148832479LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = 515U;
	uint16_t x166 = 6U;
	uint8_t x167 = 59U;

	t37 = (x165-((x166&x167)^x168));

	if (t37 != 390) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = INT8_MIN;
	uint64_t x176 = 16522LLU;
	uint64_t t38 = 69645617452746716LLU;

	t38 = (x173-((x174&x175)^x176));

	if (t38 != 29793688LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x182 = -1LL;
	int8_t x183 = INT8_MIN;
	static volatile int32_t x184 = INT32_MIN;
	int64_t t39 = -7159125201LL;

	t39 = (x181-((x182&x183)^x184));

	if (t39 != -2147483265LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	static int32_t x186 = INT32_MIN;
	static int64_t x187 = 79842875915803141LL;
	uint64_t x188 = 33802687998482333LLU;

	t40 = (x185-((x186&x187)^x188));

	if (t40 != 18346609410427955299LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	int32_t t41 = -23957543;

	t41 = (x189-((x190&x191)^x192));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MIN;

	t42 = (x193-((x194&x195)^x196));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x198 = -1;
	int16_t x199 = 36;
	volatile int64_t x200 = INT64_MIN;
	int64_t t43 = -11905280743542505LL;

	t43 = (x197-((x198&x199)^x200));

	if (t43 != 9223372034707292124LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = 0U;
	int64_t x202 = INT64_MIN;
	int32_t x204 = INT32_MIN;

	t44 = (x201-((x202&x203)^x204));

	if (t44 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x205 = 7U;
	int32_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int64_t t45 = 952717315LL;

	t45 = (x205-((x206&x207)^x208));

	if (t45 != -32760LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MAX;
	uint8_t x210 = 0U;
	static int32_t x211 = -1;
	uint64_t x212 = 1026388965269LLU;
	volatile uint64_t t46 = 20256LLU;

	t46 = (x209-((x210&x211)^x212));

	if (t46 != 18446743049468069994LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x214 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	static int32_t t47 = 1616;

	t47 = (x213-((x214&x215)^x216));

	if (t47 != 36536) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = -12519;
	int8_t x219 = 1;
	uint8_t x220 = UINT8_MAX;
	int32_t t48 = -57461175;

	t48 = (x217-((x218&x219)^x220));

	if (t48 != -382) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x221 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t49 = -9;

	t49 = (x221-((x222&x223)^x224));

	if (t49 != -2147450880) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = -398982267204LL;
	static uint64_t x227 = 159LLU;
	volatile uint8_t x228 = 15U;
	volatile uint64_t t50 = 458978LLU;

	t50 = (x225-((x226&x227)^x228));

	if (t50 != 18446743674727284267LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	volatile int32_t x231 = -7505;
	static int32_t x232 = INT32_MIN;
	volatile int64_t t51 = INT64_MIN;

	t51 = (x229-((x230&x231)^x232));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x233 = 9278U;
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	static int8_t x236 = 0;
	int32_t t52 = -7154;

	t52 = (x233-((x234&x235)^x236));

	if (t52 != 42046) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x238 = INT64_MIN;

	t53 = (x237-((x238&x239)^x240));

	if (t53 != -858LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	static int8_t x244 = INT8_MIN;
	static volatile int32_t t54 = INT32_MIN;

	t54 = (x241-((x242&x243)^x244));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x245 = 1592468194311665880LL;
	int16_t x248 = INT16_MIN;
	int64_t t55 = 324LL;

	t55 = (x245-((x246&x247)^x248));

	if (t55 != 1592468190542103320LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;
	static uint32_t t56 = 1522U;

	t56 = (x249-((x250&x251)^x252));

	if (t56 != 4294934529U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x253 = 398633694LLU;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 1469U;

	t57 = (x253-((x254&x255)^x256));

	if (t57 != 18446744069813250782LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = 27;
	volatile uint64_t x258 = 48208708LLU;
	int32_t x259 = INT32_MIN;
	int8_t x260 = -1;
	static volatile uint64_t t58 = 26881318022LLU;

	t58 = (x257-((x258&x259)^x260));

	if (t58 != 28LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x263 = -53;
	int64_t x264 = 102071474870LL;
	volatile int64_t t59 = 0LL;

	t59 = (x261-((x262&x263)^x264));

	if (t59 != 9223371934783292482LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x265 = 1279424710413LLU;
	int8_t x266 = 1;
	int8_t x267 = INT8_MIN;
	volatile uint16_t x268 = 3550U;

	t60 = (x265-((x266&x267)^x268));

	if (t60 != 1279424706863LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = -4;
	uint32_t x270 = 1214U;
	volatile int64_t x271 = INT64_MIN;
	int16_t x272 = 15;
	int64_t t61 = -250498LL;

	t61 = (x269-((x270&x271)^x272));

	if (t61 != -19LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = UINT64_MAX;
	volatile uint16_t x274 = 30U;
	static int8_t x275 = -9;
	uint64_t t62 = 2139394819915091LLU;

	t62 = (x273-((x274&x275)^x276));

	if (t62 != 32745LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x277 = INT8_MAX;
	static int8_t x278 = INT8_MIN;
	volatile uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MIN;
	volatile int64_t t63 = 24901840587934239LL;

	t63 = (x277-((x278&x279)^x280));

	if (t63 != 9223372036854710527LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = INT32_MAX;
	uint64_t t64 = 8224741917110351119LLU;

	t64 = (x281-((x282&x283)^x284));

	if (t64 != 18446653630224217169LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x285 = -408556LL;
	int8_t x287 = INT8_MAX;
	int32_t x288 = INT32_MAX;
	volatile int64_t t65 = 53LL;

	t65 = (x285-((x286&x287)^x288));

	if (t65 != -2147892186LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = 0;
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = -2;
	uint32_t x292 = 97U;
	uint64_t t66 = 1249559858410840682LLU;

	t66 = (x289-((x290&x291)^x292));

	if (t66 != 97LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;
	static int16_t x296 = -1;
	int32_t t67 = 392191;

	t67 = (x293-((x294&x295)^x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x299 = INT16_MIN;
	uint32_t x300 = UINT32_MAX;
	volatile uint64_t t68 = 3894773955LLU;

	t68 = (x297-((x298&x299)^x300));

	if (t68 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MAX;
	static int8_t x302 = INT8_MAX;
	int8_t x304 = INT8_MIN;

	t69 = (x301-((x302&x303)^x304));

	if (t69 != 254U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = INT64_MIN;
	volatile int64_t x306 = INT64_MIN;
	int8_t x307 = -1;
	uint8_t x308 = 8U;
	int64_t t70 = 334418616720872LL;

	t70 = (x305-((x306&x307)^x308));

	if (t70 != -8LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x309 = 14;
	volatile int32_t x310 = -1;
	int8_t x311 = 7;
	int64_t x312 = INT64_MAX;
	static int64_t t71 = -12602797830LL;

	t71 = (x309-((x310&x311)^x312));

	if (t71 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = 516202U;
	int32_t x314 = INT32_MAX;
	static int16_t x315 = INT16_MAX;
	static volatile uint8_t x316 = UINT8_MAX;
	static uint32_t t72 = 1231688077U;

	t72 = (x313-((x314&x315)^x316));

	if (t72 != 483690U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x318 = 66530640649LL;
	int16_t x320 = 4092;
	static uint64_t t73 = 81LLU;

	t73 = (x317-((x318&x319)^x320));

	if (t73 != 18446744064900987529LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MAX;
	int8_t x322 = 0;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t74 = -3;

	t74 = (x321-((x322&x323)^x324));

	if (t74 != 32512) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = -1;
	static volatile int32_t x326 = 49142;
	int64_t x328 = 4284221526770344151LL;

	t75 = (x325-((x326&x327)^x328));

	if (t75 != -4284221526770351000LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = -1;
	int64_t x330 = 4553LL;
	volatile int16_t x331 = 51;
	volatile int64_t t76 = -2112073937902591LL;

	t76 = (x329-((x330&x331)^x332));

	if (t76 != 318LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 55U;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = INT64_MIN;

	t77 = (x333-((x334&x335)^x336));

	if (t77 != 58LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x339 = 528590LL;
	int32_t x340 = INT32_MIN;

	t78 = (x337-((x338&x339)^x340));

	if (t78 != 2147483443LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MIN;
	volatile int32_t x343 = 215725;
	volatile uint8_t x344 = 14U;
	int32_t t79 = -713063358;

	t79 = (x341-((x342&x343)^x344));

	if (t79 != -32782) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x345 = UINT64_MAX;
	uint32_t x347 = 209U;
	int32_t x348 = INT32_MIN;
	volatile uint64_t t80 = 3993261630LLU;

	t80 = (x345-((x346&x347)^x348));

	if (t80 != 2147483438LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	uint32_t x352 = UINT32_MAX;

	t81 = (x349-((x350&x351)^x352));

	if (t81 != 4294901761U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x353 = 1406;
	uint8_t x354 = 3U;
	int32_t x356 = INT32_MAX;
	volatile int32_t t82 = 54;

	t82 = (x353-((x354&x355)^x356));

	if (t82 != -2147482238) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = -1LL;
	volatile uint64_t x358 = UINT64_MAX;
	uint64_t x359 = 32262334714009LLU;
	static volatile int8_t x360 = -6;
	static volatile uint64_t t83 = 18920231680710LLU;

	t83 = (x357-((x358&x359)^x360));

	if (t83 != 32262334714012LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = INT8_MIN;
	static int8_t x362 = INT8_MIN;
	int8_t x364 = 38;
	volatile int32_t t84 = 1;

	t84 = (x361-((x362&x363)^x364));

	if (t84 != -38) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x365 = 1U;
	int64_t x368 = INT64_MIN;

	t85 = (x365-((x366&x367)^x368));

	if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x369 = 121LLU;
	int64_t x370 = 53LL;
	int16_t x372 = 1916;
	uint64_t t86 = 1324724LLU;

	t86 = (x369-((x370&x371)^x372));

	if (t86 != 18446744073709549820LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x374 = INT64_MIN;
	uint8_t x375 = 10U;
	volatile int16_t x376 = 1;
	static int64_t t87 = -15852LL;

	t87 = (x373-((x374&x375)^x376));

	if (t87 != 2147483646LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = -1LL;
	uint8_t x378 = 0U;
	int16_t x379 = -299;
	volatile int16_t x380 = -1;
	int64_t t88 = -33349986227808355LL;

	t88 = (x377-((x378&x379)^x380));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = 8;
	int64_t x384 = -4232458194601608723LL;
	static volatile int64_t t89 = 6027046LL;

	t89 = (x381-((x382&x383)^x384));

	if (t89 != 4232458194601622793LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x385 = INT16_MIN;
	int32_t x386 = 179140;
	uint64_t x387 = 5818623209071111LLU;
	int32_t x388 = 1011211;
	uint64_t t90 = 3071110575LLU;

	t90 = (x385-((x386&x387)^x388));

	if (t90 != 18446744073708516337LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x392 = INT32_MIN;
	volatile int64_t t91 = -3LL;

	t91 = (x389-((x390&x391)^x392));

	if (t91 != 2147483890LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x393 = 16094488U;
	volatile int16_t x395 = -4808;
	uint32_t t92 = 532977571U;

	t92 = (x393-((x394&x395)^x396));

	if (t92 != 16127253U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x398 = 2649U;
	int16_t x399 = -9;
	int8_t x400 = INT8_MAX;
	int32_t t93 = -975702904;

	t93 = (x397-((x398&x399)^x400));

	if (t93 != -2607) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x402 = 25055U;
	int64_t x403 = INT64_MIN;
	static int64_t x404 = 12946LL;

	t94 = (x401-((x402&x403)^x404));

	if (t94 != 18320181133LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x405 = 1U;
	int32_t x406 = INT32_MIN;
	volatile int16_t x407 = INT16_MAX;
	static volatile uint64_t x408 = 175LLU;
	uint64_t t95 = 61734LLU;

	t95 = (x405-((x406&x407)^x408));

	if (t95 != 18446744073709551442LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MAX;
	int32_t x410 = -43057607;
	volatile int16_t x411 = INT16_MIN;
	int64_t t96 = 160LL;

	t96 = (x409-((x410&x411)^x412));

	if (t96 != -43089792LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x413 = 0U;
	static uint64_t x414 = 161052713509298LLU;
	uint64_t x416 = 28LLU;
	uint64_t t97 = 23121194834LLU;

	t97 = (x413-((x414&x415)^x416));

	if (t97 != 18446583020996042322LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x417 = 16U;
	int32_t x419 = INT32_MIN;
	static int16_t x420 = INT16_MAX;
	volatile uint64_t t98 = 124LLU;

	t98 = (x417-((x418&x419)^x420));

	if (t98 != 2147450897LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MAX;
	volatile int32_t x423 = INT32_MAX;
	uint64_t x424 = 48LLU;
	volatile uint64_t t99 = 3806124415223LLU;

	t99 = (x421-((x422&x423)^x424));

	if (t99 != 18446744069414584369LLU) { NG(); } else { ; }
	
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

