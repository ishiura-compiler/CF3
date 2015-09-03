#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
int8_t x8 = 1;
static int16_t x10 = INT16_MIN;
static int32_t x16 = -1;
volatile int32_t t3 = -35895;
int16_t x21 = INT16_MAX;
uint32_t t4 = 48909U;
volatile int32_t t5 = 4925297;
int64_t x32 = -1LL;
uint64_t x34 = 1970822272115374376LLU;
int32_t x37 = 5;
int64_t x45 = INT64_MIN;
uint64_t t10 = 108151433LLU;
volatile uint32_t t11 = 26U;
int16_t x59 = 295;
int32_t x60 = -1;
volatile uint64_t t13 = 15LLU;
int32_t x72 = -1;
static int8_t x75 = -1;
int64_t x85 = INT64_MAX;
int16_t x90 = -1;
uint64_t x103 = 122864214655LLU;
uint64_t t20 = 175LLU;
volatile int64_t x107 = INT64_MIN;
uint16_t x108 = UINT16_MAX;
int64_t t21 = 1051LL;
static uint64_t x115 = 2LLU;
int32_t x121 = -13254926;
int16_t x122 = -1;
static uint8_t x126 = 45U;
int64_t x127 = 554837550314LL;
uint64_t x135 = 243LLU;
uint64_t x142 = 15163LLU;
static volatile uint64_t t29 = 164LLU;
volatile uint8_t x149 = 22U;
int8_t x152 = -4;
int32_t x157 = -1;
int32_t x160 = INT32_MAX;
int16_t x166 = INT16_MIN;
uint32_t t35 = 2882098U;
int8_t x174 = INT8_MIN;
static int64_t x186 = INT64_MAX;
int16_t x190 = -1;
int32_t x197 = INT32_MIN;
uint64_t t42 = 390068LLU;
int64_t x213 = -7LL;
static int32_t x217 = INT32_MIN;
static int64_t t46 = 238168192LL;
uint64_t x233 = 108734LLU;
int32_t x235 = -1;
uint16_t x236 = 4726U;
static int16_t x246 = -1;
uint8_t x247 = 14U;
int8_t x250 = INT8_MIN;
int32_t t52 = 5;
volatile int64_t t53 = -27108985LL;
int64_t x259 = INT64_MAX;
int64_t x264 = INT64_MAX;
static int32_t x270 = 5616185;
int32_t x278 = INT32_MAX;
int8_t x279 = INT8_MAX;
static volatile int32_t t59 = -298101;
volatile int64_t x287 = INT64_MIN;
uint32_t x292 = UINT32_MAX;
volatile int64_t x305 = -5950361628969LL;
volatile int16_t x307 = INT16_MIN;
uint32_t x311 = 887673U;
int32_t x312 = 8173;
int32_t x313 = INT32_MAX;
static int64_t x325 = INT64_MAX;
volatile uint64_t t72 = 1873630980LLU;
int64_t x339 = -718182LL;
uint32_t x344 = UINT32_MAX;
int64_t t74 = -692286LL;
int64_t x356 = 214603405448391LL;
uint64_t x358 = UINT64_MAX;
uint16_t x360 = UINT16_MAX;
volatile uint64_t t76 = 494254184830454388LLU;
volatile int8_t x363 = 0;
uint16_t x364 = UINT16_MAX;
int16_t x366 = 1582;
uint32_t x370 = 768593U;
volatile int64_t t79 = 97506207625LL;
uint64_t t80 = 793443709794627LLU;
volatile int64_t x378 = INT64_MIN;
int8_t x380 = INT8_MIN;
volatile int8_t x391 = -1;
int16_t x397 = -1;
int64_t x399 = -468658134407397LL;
volatile int64_t t85 = 5994LL;
int16_t x403 = 142;
uint64_t t86 = 56207254876487LLU;
volatile uint64_t t88 = 863487564294243297LLU;
volatile int64_t x422 = -1LL;
volatile int64_t x423 = 1LL;
uint8_t x426 = UINT8_MAX;
volatile int64_t t91 = 66236LL;
static uint8_t x430 = UINT8_MAX;
int32_t x432 = INT32_MIN;
int8_t x434 = 27;
int8_t x437 = 1;
int16_t x449 = -1;


void f0(void) {
	uint32_t x1 = 191533U;
	int64_t x2 = 11626334010LL;
	static int8_t x3 = -27;
	uint64_t x4 = 2LLU;
	uint64_t t0 = 75774191160284LLU;

	t0 = ((x1%(x2-x3))-x4);

	if (t0 != 191531LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint32_t x6 = 7U;
	static uint32_t t1 = 3U;

	t1 = ((x5%(x6-x7))-x8);

	if (t1 != 2147483639U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 5809;
	uint16_t x11 = 1U;
	uint8_t x12 = 5U;
	volatile int32_t t2 = -196353393;

	t2 = ((x9%(x10-x11))-x12);

	if (t2 != 5804) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 3U;
	int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MIN;

	t3 = ((x13%(x14-x15))-x16);

	if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = -1;

	t4 = ((x21%(x22-x23))-x24);

	if (t4 != 32768U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint16_t x26 = 2772U;
	static int16_t x27 = -3;
	int8_t x28 = 13;

	t5 = ((x25%(x26-x27))-x28);

	if (t5 != 1697) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int16_t x30 = INT16_MAX;
	static int64_t x31 = INT64_MAX;
	static int64_t t6 = 46990368499821799LL;

	t6 = ((x29%(x30-x31))-x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	static volatile uint16_t x35 = UINT16_MAX;
	int16_t x36 = 5793;
	volatile uint64_t t7 = 12694LLU;

	t7 = ((x33%(x34-x35))-x36);

	if (t7 != 709343624671766253LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = -29;
	volatile int16_t x39 = INT16_MAX;
	volatile int32_t x40 = 959;
	int32_t t8 = 115;

	t8 = ((x37%(x38-x39))-x40);

	if (t8 != -954) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = UINT16_MAX;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -14773;
	static uint16_t x44 = UINT16_MAX;
	int64_t t9 = 497216007750LL;

	t9 = ((x41%(x42-x43))-x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = 48444768138216LLU;
	int32_t x47 = 84721410;
	uint32_t x48 = UINT32_MAX;

	t10 = ((x45%(x46-x47))-x48);

	if (t10 != 37201517530979LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -1;
	static volatile int32_t x50 = INT32_MIN;
	uint32_t x51 = 161535868U;
	int32_t x52 = INT32_MAX;

	t11 = ((x49%(x50-x51))-x52);

	if (t11 != 2470555384U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 13060U;
	uint32_t x58 = 14U;
	uint32_t t12 = 13U;

	t12 = ((x57%(x58-x59))-x60);

	if (t12 != 13061U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x65 = INT32_MIN;
	static uint8_t x66 = 2U;
	volatile int32_t x67 = -1;
	uint64_t x68 = 1LLU;

	t13 = ((x65%(x66-x67))-x68);

	if (t13 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = -1LL;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = 243225609LL;
	int64_t t14 = -29086528651478318LL;

	t14 = ((x69%(x70-x71))-x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	volatile int64_t x74 = INT64_MIN;
	int32_t x76 = INT32_MAX;
	int64_t t15 = -8467304LL;

	t15 = ((x73%(x74-x75))-x76);

	if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = INT16_MIN;
	uint8_t x78 = 2U;
	static uint32_t x79 = UINT32_MAX;
	int16_t x80 = 5;
	uint32_t t16 = 1026614855U;

	t16 = ((x77%(x78-x79))-x80);

	if (t16 != 4294967293U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = -1;
	uint64_t x87 = 1LLU;
	uint8_t x88 = UINT8_MAX;
	uint64_t t17 = 25666294160814LLU;

	t17 = ((x85%(x86-x87))-x88);

	if (t17 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = INT16_MAX;
	int8_t x91 = -3;
	uint8_t x92 = UINT8_MAX;
	static int32_t t18 = -61;

	t18 = ((x89%(x90-x91))-x92);

	if (t18 != -254) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x93 = -27875919688LL;
	uint64_t x94 = 2854468LLU;
	int64_t x95 = INT64_MIN;
	int64_t x96 = -1448525823426671384LL;
	volatile uint64_t t19 = 1418219LLU;

	t19 = ((x93%(x94-x95))-x96);

	if (t19 != 10671897832402673036LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 10772U;
	int32_t x102 = -718730090;
	int16_t x104 = 6984;

	t20 = ((x101%(x102-x103))-x104);

	if (t20 != 3788LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = INT16_MIN;
	volatile int8_t x106 = -1;

	t21 = ((x105%(x106-x107))-x108);

	if (t21 != -98303LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = 62893LL;
	static int16_t x110 = INT16_MAX;
	uint32_t x111 = 510U;
	uint64_t x112 = UINT64_MAX;
	uint64_t t22 = 8535931LLU;

	t22 = ((x109%(x110-x111))-x112);

	if (t22 != 30637LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x113 = -1;
	int64_t x114 = INT64_MIN;
	int32_t x116 = INT32_MIN;
	uint64_t t23 = 28574968LLU;

	t23 = ((x113%(x114-x115))-x116);

	if (t23 != 2147483651LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = UINT64_MAX;
	uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 1914U;
	volatile uint32_t x120 = UINT32_MAX;
	uint64_t t24 = 2779850776211571LLU;

	t24 = ((x117%(x118-x119))-x120);

	if (t24 != 18446744069418251545LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = -1LL;
	volatile int64_t t25 = 1099877673088534LL;

	t25 = ((x121%(x122-x123))-x124);

	if (t25 != -13LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = UINT64_MAX;
	static uint64_t x128 = 203568LLU;
	volatile uint64_t t26 = 365774698LLU;

	t26 = ((x125%(x126-x127))-x128);

	if (t26 != 554837346700LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = -6201;
	int32_t x130 = INT32_MIN;
	int32_t x131 = -1;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t27 = 1;

	t27 = ((x129%(x130-x131))-x132);

	if (t27 != -6073) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = 112289870067LL;
	uint8_t x134 = UINT8_MAX;
	int16_t x136 = INT16_MIN;
	uint64_t t28 = 2240858000734000LLU;

	t28 = ((x133%(x134-x135))-x136);

	if (t28 != 32771LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x141 = 44U;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = INT16_MIN;

	t29 = ((x141%(x142-x143))-x144);

	if (t29 != 32812LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = 84LL;
	int64_t x146 = INT64_MIN;
	int32_t x147 = INT32_MIN;
	volatile uint8_t x148 = UINT8_MAX;
	volatile int64_t t30 = 17293170452156472LL;

	t30 = ((x145%(x146-x147))-x148);

	if (t30 != -171LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x150 = INT64_MAX;
	uint32_t x151 = UINT32_MAX;
	int64_t t31 = 28991079LL;

	t31 = ((x149%(x150-x151))-x152);

	if (t31 != 26LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x153 = UINT16_MAX;
	int32_t x154 = 480013;
	static int16_t x155 = -1;
	volatile int16_t x156 = -1;
	int32_t t32 = 4112;

	t32 = ((x153%(x154-x155))-x156);

	if (t32 != 65536) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x158 = INT8_MIN;
	uint16_t x159 = 14U;
	volatile int32_t t33 = INT32_MIN;

	t33 = ((x157%(x158-x159))-x160);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x161 = INT64_MIN;
	int8_t x162 = -7;
	int8_t x163 = INT8_MAX;
	uint64_t x164 = UINT64_MAX;
	static volatile uint64_t t34 = 3913LLU;

	t34 = ((x161%(x162-x163))-x164);

	if (t34 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x165 = 13261005U;
	uint32_t x167 = 17U;
	int8_t x168 = 0;

	t35 = ((x165%(x166-x167))-x168);

	if (t35 != 13261005U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	static volatile uint64_t x170 = UINT64_MAX;
	uint16_t x171 = 5U;
	volatile uint32_t x172 = 10U;
	volatile uint64_t t36 = 780203656LLU;

	t36 = ((x169%(x170-x171))-x172);

	if (t36 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x173 = UINT16_MAX;
	int32_t x175 = INT32_MIN;
	volatile uint32_t x176 = 1U;
	uint32_t t37 = 412704884U;

	t37 = ((x173%(x174-x175))-x176);

	if (t37 != 65534U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = 0LLU;
	static int64_t x178 = -1LL;
	volatile uint64_t x179 = 7090481957453148697LLU;
	uint32_t x180 = 597415U;
	static volatile uint64_t t38 = 273577304202614569LLU;

	t38 = ((x177%(x178-x179))-x180);

	if (t38 != 18446744073708954201LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = UINT64_MAX;
	static int8_t x187 = INT8_MAX;
	int8_t x188 = 1;
	volatile uint64_t t39 = 643033190LLU;

	t39 = ((x185%(x186-x187))-x188);

	if (t39 != 254LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = INT16_MIN;
	int16_t x191 = INT16_MIN;
	uint32_t x192 = 603868700U;
	static uint32_t t40 = 6484U;

	t40 = ((x189%(x190-x191))-x192);

	if (t40 != 3691098595U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x198 = INT32_MAX;
	int32_t x199 = 405452;
	volatile int32_t x200 = 1547849;
	static volatile int32_t t41 = -60231;

	t41 = ((x197%(x198-x199))-x200);

	if (t41 != -1953302) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = INT16_MIN;
	int64_t x203 = 4730LL;
	uint64_t x204 = 6669628861LLU;

	t42 = ((x201%(x202-x203))-x204);

	if (t42 != 18446744067039889987LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = 8;
	uint16_t x206 = UINT16_MAX;
	static int16_t x207 = INT16_MAX;
	static uint64_t x208 = UINT64_MAX;
	volatile uint64_t t43 = 123488768LLU;

	t43 = ((x205%(x206-x207))-x208);

	if (t43 != 9LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x209 = INT8_MAX;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	uint32_t x212 = 178976858U;
	static volatile int64_t t44 = -1LL;

	t44 = ((x209%(x210-x211))-x212);

	if (t44 != -178976731LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x214 = 1U;
	static int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	int64_t t45 = 30907070587LL;

	t45 = ((x213%(x214-x215))-x216);

	if (t45 != 32761LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x218 = INT8_MAX;
	static int8_t x219 = -60;
	int64_t x220 = INT64_MIN;

	t46 = ((x217%(x218-x219))-x220);

	if (t46 != 9223372036854775663LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x221 = INT16_MIN;
	volatile int16_t x222 = -1;
	int8_t x223 = INT8_MIN;
	volatile uint64_t x224 = UINT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x221%(x222-x223))-x224);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MAX;
	uint32_t x226 = 1685987U;
	int32_t x227 = 436725;
	int32_t x228 = INT32_MAX;
	uint32_t t48 = 3562U;

	t48 = ((x225%(x226-x227))-x228);

	if (t48 != 2147483776U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x234 = UINT8_MAX;
	uint64_t t49 = 1529575LLU;

	t49 = ((x233%(x234-x235))-x236);

	if (t49 != 18446744073709547080LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x241 = INT8_MAX;
	volatile int16_t x242 = INT16_MAX;
	int16_t x243 = -1;
	static uint64_t x244 = 9122048184LLU;
	volatile uint64_t t50 = 5LLU;

	t50 = ((x241%(x242-x243))-x244);

	if (t50 != 18446744064587503559LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = 0;
	static uint64_t x248 = UINT64_MAX;
	volatile uint64_t t51 = 28LLU;

	t51 = ((x245%(x246-x247))-x248);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = INT8_MAX;
	int32_t x251 = -1;
	int16_t x252 = -953;

	t52 = ((x249%(x250-x251))-x252);

	if (t52 != 953) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x253 = 1093197163U;
	uint16_t x254 = 3829U;
	static int32_t x255 = -1;
	static int64_t x256 = -459730LL;

	t53 = ((x253%(x254-x255))-x256);

	if (t53 != 459993LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = -1;
	static int8_t x258 = 4;
	uint32_t x260 = 2023054429U;
	int64_t t54 = 34141LL;

	t54 = ((x257%(x258-x259))-x260);

	if (t54 != -2023054430LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x261 = -24604150987LL;
	static uint64_t x262 = 20918809587561LLU;
	int16_t x263 = INT16_MIN;
	volatile uint64_t t55 = 819231109LLU;

	t55 = ((x261%(x262-x263))-x264);

	if (t55 != 9223386792513556013LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x265 = -303215;
	int64_t x266 = INT64_MIN;
	static int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MIN;
	int64_t t56 = -1019869453697106LL;

	t56 = ((x265%(x266-x267))-x268);

	if (t56 != -303087LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = INT16_MIN;
	uint32_t x271 = UINT32_MAX;
	static volatile uint32_t x272 = 60752U;
	volatile uint32_t t57 = 37622U;

	t57 = ((x269%(x270-x271))-x272);

	if (t57 != 4107672U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t58 = 275489LL;

	t58 = ((x273%(x274-x275))-x276);

	if (t58 != 9223372036854775458LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = 1014242021;
	int8_t x280 = INT8_MIN;

	t59 = ((x277%(x278-x279))-x280);

	if (t59 != 1014242149) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = -1LL;
	uint64_t x282 = 7733137178720LLU;
	int64_t x283 = -1LL;
	volatile int16_t x284 = INT16_MIN;
	uint64_t t60 = 1983033735468257LLU;

	t60 = ((x281%(x282-x283))-x284);

	if (t60 != 2650530830168LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = -1LL;
	int16_t x286 = -14;
	static int16_t x288 = -1;
	volatile int64_t t61 = 2LL;

	t61 = ((x285%(x286-x287))-x288);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x289 = 2U;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	static volatile int64_t t62 = -1088LL;

	t62 = ((x289%(x290-x291))-x292);

	if (t62 != -4294967293LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = 3;
	int32_t x294 = -248044502;
	volatile uint64_t x295 = 838181364LLU;
	int32_t x296 = INT32_MIN;
	uint64_t t63 = 111718172008151725LLU;

	t63 = ((x293%(x294-x295))-x296);

	if (t63 != 2147483651LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x297 = 6U;
	uint16_t x298 = 5573U;
	static uint16_t x299 = 1703U;
	static uint16_t x300 = 8U;
	static int32_t t64 = -51944;

	t64 = ((x297%(x298-x299))-x300);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x301 = -1;
	uint8_t x302 = 42U;
	int16_t x303 = INT16_MAX;
	uint8_t x304 = 1U;
	volatile int32_t t65 = 207976733;

	t65 = ((x301%(x302-x303))-x304);

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x306 = UINT64_MAX;
	uint32_t x308 = UINT32_MAX;
	uint64_t t66 = 3532956620876207LLU;

	t66 = ((x305%(x306-x307))-x308);

	if (t66 != 18446744069414592224LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	uint32_t t67 = 252737963U;

	t67 = ((x309%(x310-x311))-x312);

	if (t67 != 846733U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x314 = 1;
	uint64_t x315 = 832703257019573LLU;
	static uint8_t x316 = UINT8_MAX;
	static volatile uint64_t t68 = 7787107739363187073LLU;

	t68 = ((x313%(x314-x315))-x316);

	if (t68 != 2147483392LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = INT32_MIN;
	static volatile uint64_t x318 = UINT64_MAX;
	uint32_t x319 = 156340U;
	volatile int8_t x320 = -1;
	uint64_t t69 = 7LLU;

	t69 = ((x317%(x318-x319))-x320);

	if (t69 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = 1;
	volatile uint32_t x322 = 39701635U;
	int64_t x323 = 2181660060754774LL;
	int16_t x324 = -1;
	volatile int64_t t70 = 67623427161396097LL;

	t70 = ((x321%(x322-x323))-x324);

	if (t70 != 2LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x326 = INT8_MIN;
	int64_t x327 = 238LL;
	int32_t x328 = INT32_MAX;
	int64_t t71 = 142LL;

	t71 = ((x325%(x326-x327))-x328);

	if (t71 != -2147483640LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = INT8_MIN;
	volatile int32_t x330 = -1;
	uint64_t x331 = 2734735315LLU;
	uint64_t x332 = 396464623246LLU;

	t72 = ((x329%(x330-x331))-x332);

	if (t72 != 18446743679979663558LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = 590611;
	static uint32_t x338 = UINT32_MAX;
	static uint16_t x340 = 30U;
	int64_t t73 = 13603869LL;

	t73 = ((x337%(x338-x339))-x340);

	if (t73 != 590581LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x341 = -1LL;
	uint8_t x342 = UINT8_MAX;
	uint32_t x343 = 151264375U;

	t74 = ((x341%(x342-x343))-x344);

	if (t74 != -4294967296LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MIN;
	uint32_t x354 = 6U;
	int16_t x355 = 11;
	int64_t t75 = -1392963LL;

	t75 = ((x353%(x354-x355))-x356);

	if (t75 != -214601257964743LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = INT8_MIN;
	uint64_t x359 = 914LLU;

	t76 = ((x357%(x358-x359))-x360);

	if (t76 != 18446744073709486868LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x361 = 21189238LLU;
	static uint16_t x362 = 57U;
	uint64_t t77 = 216LLU;

	t77 = ((x361%(x362-x363))-x364);

	if (t77 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = 0;
	int8_t x367 = -2;
	uint8_t x368 = 5U;
	static volatile int32_t t78 = 2527;

	t78 = ((x365%(x366-x367))-x368);

	if (t78 != -5) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x369 = INT64_MIN;
	volatile int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MIN;

	t79 = ((x369%(x370-x371))-x372);

	if (t79 != 2146715054LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x373 = 1U;
	uint64_t x374 = 0LLU;
	int8_t x375 = -1;
	int32_t x376 = INT32_MAX;

	t80 = ((x373%(x374-x375))-x376);

	if (t80 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x377 = INT8_MAX;
	int8_t x379 = INT8_MIN;
	int64_t t81 = 4369000998119868025LL;

	t81 = ((x377%(x378-x379))-x380);

	if (t81 != 255LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x385 = -1LL;
	volatile int32_t x386 = -15700;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MIN;
	static int64_t t82 = INT64_MAX;

	t82 = ((x385%(x386-x387))-x388);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x389 = 2000122U;
	uint16_t x390 = 2U;
	uint8_t x392 = UINT8_MAX;
	uint32_t t83 = 50676436U;

	t83 = ((x389%(x390-x391))-x392);

	if (t83 != 4294967042U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = INT8_MIN;
	volatile uint32_t x394 = 17U;
	static volatile int64_t x395 = -1LL;
	static int16_t x396 = INT16_MIN;
	static int64_t t84 = -81LL;

	t84 = ((x393%(x394-x395))-x396);

	if (t84 != 32766LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x398 = INT32_MAX;
	int16_t x400 = 1;

	t85 = ((x397%(x398-x399))-x400);

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int32_t x402 = -1;
	int8_t x404 = -1;

	t86 = ((x401%(x402-x403))-x404);

	if (t86 != 143LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x405 = UINT16_MAX;
	static int16_t x406 = -14987;
	int8_t x407 = INT8_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t87 = -20503418;

	t87 = ((x405%(x406-x407))-x408);

	if (t87 != 37847) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x413 = INT32_MAX;
	static volatile uint64_t x414 = 29LLU;
	volatile int16_t x415 = INT16_MIN;
	int32_t x416 = -60781;

	t88 = ((x413%(x414-x415))-x416);

	if (t88 != 62462LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = INT32_MIN;
	uint32_t x418 = 12629081U;
	volatile int32_t x419 = INT32_MAX;
	uint16_t x420 = 80U;
	uint32_t t89 = 3U;

	t89 = ((x417%(x418-x419))-x420);

	if (t89 != 2147483568U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x421 = INT16_MAX;
	int32_t x424 = -2;
	volatile int64_t t90 = 473643171LL;

	t90 = ((x421%(x422-x423))-x424);

	if (t90 != 3LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x425 = -1;
	volatile int64_t x427 = -3586689414715LL;
	int32_t x428 = INT32_MIN;

	t91 = ((x425%(x426-x427))-x428);

	if (t91 != 2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x429 = INT64_MIN;
	int8_t x431 = -29;
	static volatile int64_t t92 = -153707486LL;

	t92 = ((x429%(x430-x431))-x432);

	if (t92 != 2147483572LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = INT8_MIN;
	int16_t x435 = -9575;
	static int8_t x436 = -1;
	int32_t t93 = 19853410;

	t93 = ((x433%(x434-x435))-x436);

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x438 = 43U;
	int32_t x439 = 20101;
	int32_t x440 = 287702;
	static volatile uint32_t t94 = 11426502U;

	t94 = ((x437%(x438-x439))-x440);

	if (t94 != 4294679595U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = INT64_MIN;
	volatile int32_t x446 = 2823061;
	volatile int32_t x447 = INT32_MAX;
	int8_t x448 = -1;
	int64_t t95 = -4LL;

	t95 = ((x445%(x446-x447))-x448);

	if (t95 != -240636535LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x450 = INT64_MIN;
	static volatile int32_t x451 = -1;
	static int16_t x452 = INT16_MIN;
	int64_t t96 = 5046LL;

	t96 = ((x449%(x450-x451))-x452);

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x453 = UINT64_MAX;
	int16_t x454 = -1;
	uint64_t x455 = 270940957271127LLU;
	int64_t x456 = INT64_MIN;
	uint64_t t97 = 377201963359352308LLU;

	t97 = ((x453%(x454-x455))-x456);

	if (t97 != 9223642977812046935LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x457 = INT64_MIN;
	volatile int64_t x458 = INT64_MAX;
	static uint32_t x459 = 5046U;
	volatile uint16_t x460 = 479U;
	int64_t t98 = 1315590739104311827LL;

	t98 = ((x457%(x458-x459))-x460);

	if (t98 != -5526LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	static volatile int16_t x466 = 76;
	int64_t x467 = -2682LL;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t99 = 28582526056911731LLU;

	t99 = ((x465%(x466-x467))-x468);

	if (t99 != 18446744073709551489LLU) { NG(); } else { ; }
	
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

