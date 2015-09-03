#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x5 = 4631LLU;
uint16_t x6 = UINT16_MAX;
static uint16_t x23 = UINT16_MAX;
int64_t x25 = INT64_MAX;
int16_t x33 = -1;
volatile uint8_t x37 = UINT8_MAX;
uint8_t x50 = 61U;
static int16_t x59 = 11;
uint8_t x63 = 29U;
volatile uint32_t t15 = UINT32_MAX;
volatile int64_t x65 = -1LL;
int32_t x68 = -1;
static uint64_t x69 = 31LLU;
int32_t x71 = -7;
uint64_t x72 = UINT64_MAX;
int16_t x73 = -1;
volatile uint8_t x75 = 1U;
volatile int16_t x87 = 5;
int64_t x93 = INT64_MIN;
int64_t t23 = 17812LL;
int16_t x102 = -1;
uint64_t x106 = 130640123078778252LLU;
int8_t x108 = 46;
int64_t x109 = INT64_MIN;
static int64_t x110 = 341632236329LL;
volatile int16_t x111 = INT16_MIN;
int32_t x112 = 248531435;
static uint16_t x113 = UINT16_MAX;
uint64_t x127 = 0LLU;
static int8_t x132 = INT8_MAX;
uint64_t x136 = 26LLU;
uint64_t t33 = 1551133LLU;
int8_t x138 = -1;
int64_t x149 = -1LL;
int8_t x153 = INT8_MAX;
uint32_t x163 = 1326458U;
uint64_t t40 = 117LLU;
int16_t x165 = -1;
static volatile int64_t t42 = -705232LL;
uint32_t x175 = 5920U;
uint64_t x176 = 13086043550LLU;
static volatile int32_t x177 = -1;
int32_t x178 = INT32_MIN;
static int32_t x182 = INT32_MIN;
int32_t x183 = -32707;
int8_t x184 = -1;
volatile uint64_t x186 = UINT64_MAX;
volatile uint64_t x192 = 4LLU;
uint64_t t47 = 309245198816542460LLU;
int64_t t48 = -2LL;
static int8_t x199 = -1;
uint16_t x205 = 0U;
uint8_t x214 = 0U;
volatile uint8_t x223 = 42U;
volatile int32_t x225 = -1594686;
uint8_t x227 = 79U;
int64_t x231 = INT64_MAX;
int16_t x232 = INT16_MIN;
volatile int64_t x233 = -1LL;
static volatile int8_t x234 = INT8_MIN;
static int64_t x235 = INT64_MAX;
volatile int32_t x239 = INT32_MIN;
uint8_t x240 = UINT8_MAX;
uint16_t x242 = UINT16_MAX;
static volatile int64_t t60 = -184207141326953710LL;
volatile int64_t t61 = 437797LL;
int16_t x250 = -1297;
uint16_t x251 = 4010U;
int16_t x252 = INT16_MIN;
uint8_t x254 = UINT8_MAX;
static volatile int64_t t63 = 66128347820982938LL;
int64_t x261 = 2113839430617250LL;
int64_t t65 = -86826LL;
uint32_t x265 = 55034537U;
int8_t x267 = 11;
int8_t x272 = INT8_MAX;
int64_t x276 = -1LL;
uint64_t x295 = 16299960LLU;
int32_t x296 = -1;
int32_t t74 = INT32_MAX;
int64_t x313 = INT64_MIN;
uint64_t x322 = 77177717035084LLU;
volatile int16_t x324 = INT16_MIN;
int32_t x330 = INT32_MAX;
static volatile uint32_t x333 = 1592331U;
static int8_t x338 = -1;
volatile int64_t t84 = INT64_MAX;
int32_t x342 = -1;
uint32_t x343 = 1979759586U;
uint64_t x346 = 1087925LLU;
volatile int8_t x348 = INT8_MIN;
uint32_t t86 = 1607545656U;
static volatile int32_t x351 = INT32_MIN;
volatile int64_t x356 = -771134LL;
int8_t x359 = 24;
volatile int32_t t89 = -262;
int64_t x361 = INT64_MAX;
uint64_t x368 = 126893259382LLU;
static volatile int64_t t92 = 172LL;
uint32_t t93 = 887886461U;
int64_t x389 = 15033692950585LL;
int8_t x398 = INT8_MIN;
int32_t x400 = INT32_MIN;


void f0(void) {
	int16_t x1 = -10822;
	static uint16_t x2 = UINT16_MAX;
	int32_t x3 = 78;
	int32_t x4 = -97742125;
	int32_t t0 = 81;

	t0 = ((x1*(x2==x3))|x4);

	if (t0 != -97742125) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = -1LL;
	volatile int16_t x8 = -1;
	uint64_t t1 = UINT64_MAX;

	t1 = ((x5*(x6==x7))|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int64_t x10 = -394328118LL;
	int16_t x11 = -408;
	int32_t x12 = INT32_MIN;
	uint64_t t2 = 17058522155045LLU;

	t2 = ((x9*(x10==x11))|x12);

	if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	static int32_t x14 = 313316;
	int32_t x15 = INT32_MIN;
	uint16_t x16 = 1U;
	int32_t t3 = 3268;

	t3 = ((x13*(x14==x15))|x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 44;
	int32_t x18 = 500768389;
	int64_t x19 = INT64_MIN;
	volatile int32_t x20 = -1;
	static volatile int32_t t4 = -26016016;

	t4 = ((x17*(x18==x19))|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 0U;
	int32_t x22 = INT32_MIN;
	int64_t x24 = -4015320730305LL;
	static volatile int64_t t5 = -1252575796389753577LL;

	t5 = ((x21*(x22==x23))|x24);

	if (t5 != -4015320730305LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x26 = 1659909406U;
	static int8_t x27 = -57;
	uint16_t x28 = 2U;
	volatile int64_t t6 = 29625118LL;

	t6 = ((x25*(x26==x27))|x28);

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -492242;
	int16_t x30 = -1;
	int32_t x31 = -1;
	uint32_t x32 = 19685048U;
	static uint32_t t7 = 0U;

	t7 = ((x29*(x30==x31))|x32);

	if (t7 != 4294737854U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MAX;
	static volatile uint64_t x35 = 0LLU;
	int32_t x36 = INT32_MIN;
	int32_t t8 = INT32_MIN;

	t8 = ((x33*(x34==x35))|x36);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MIN;
	uint32_t x39 = UINT32_MAX;
	uint8_t x40 = 4U;
	volatile int32_t t9 = 216;

	t9 = ((x37*(x38==x39))|x40);

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint16_t x42 = 134U;
	int8_t x43 = INT8_MIN;
	uint32_t x44 = 4177081U;
	uint32_t t10 = 15U;

	t10 = ((x41*(x42==x43))|x44);

	if (t10 != 4177081U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	int64_t x47 = -42927286572125974LL;
	uint64_t x48 = 61LLU;
	uint64_t t11 = 574854144292078892LLU;

	t11 = ((x45*(x46==x47))|x48);

	if (t11 != 61LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 643846664;
	int32_t x51 = -1400;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 14781;

	t12 = ((x49*(x50==x51))|x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 14U;
	volatile int64_t x54 = -13457LL;
	int32_t x55 = 26134;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = -80;

	t13 = ((x53*(x54==x55))|x56);

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 14U;
	int32_t x58 = -37154491;
	int16_t x60 = 58;
	volatile int32_t t14 = 6001;

	t14 = ((x57*(x58==x59))|x60);

	if (t14 != 58) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x62 = INT64_MAX;
	static uint32_t x64 = UINT32_MAX;

	t15 = ((x61*(x62==x63))|x64);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = INT16_MAX;
	int16_t x67 = -254;
	static volatile int64_t t16 = -10416LL;

	t16 = ((x65*(x66==x67))|x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x69*(x70==x71))|x72);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	uint64_t x76 = 1608128464581077LLU;
	static volatile uint64_t t18 = 3128LLU;

	t18 = ((x73*(x74==x75))|x76);

	if (t18 != 1608128464581077LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	int32_t x79 = INT32_MAX;
	static int32_t x80 = INT32_MAX;
	volatile int32_t t19 = INT32_MAX;

	t19 = ((x77*(x78==x79))|x80);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 57U;
	int64_t x82 = -1LL;
	uint16_t x83 = 0U;
	uint8_t x84 = 4U;
	uint32_t t20 = 161U;

	t20 = ((x81*(x82==x83))|x84);

	if (t20 != 4U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	int64_t x88 = -181229LL;
	static int64_t t21 = 4499431LL;

	t21 = ((x85*(x86==x87))|x88);

	if (t21 != -181229LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MIN;
	int8_t x91 = 2;
	static uint8_t x92 = 1U;
	int32_t t22 = 533034;

	t22 = ((x89*(x90==x91))|x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = -1;
	int16_t x96 = INT16_MAX;

	t23 = ((x93*(x94==x95))|x96);

	if (t23 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int64_t x98 = INT64_MIN;
	int32_t x99 = 16287;
	volatile uint32_t x100 = UINT32_MAX;
	int64_t t24 = -67LL;

	t24 = ((x97*(x98==x99))|x100);

	if (t24 != 4294967295LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int64_t x103 = 0LL;
	int32_t x104 = 49593812;
	int32_t t25 = -26278;

	t25 = ((x101*(x102==x103))|x104);

	if (t25 != 49593812) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 5U;
	uint32_t x107 = 2U;
	int32_t t26 = 5186;

	t26 = ((x105*(x106==x107))|x108);

	if (t26 != 46) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t t27 = 469046015LL;

	t27 = ((x109*(x110==x111))|x112);

	if (t27 != 248531435LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 923474584335LL;
	int16_t x115 = 506;
	int32_t x116 = INT32_MAX;
	static volatile int32_t t28 = INT32_MAX;

	t28 = ((x113*(x114==x115))|x116);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -34;
	uint16_t x118 = 7U;
	static int64_t x119 = INT64_MIN;
	int32_t x120 = 2;
	int32_t t29 = -41494324;

	t29 = ((x117*(x118==x119))|x120);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	volatile int16_t x123 = INT16_MIN;
	volatile int32_t x124 = INT32_MIN;
	int32_t t30 = INT32_MIN;

	t30 = ((x121*(x122==x123))|x124);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	uint32_t x126 = UINT32_MAX;
	int16_t x128 = INT16_MAX;
	volatile int32_t t31 = -9;

	t31 = ((x125*(x126==x127))|x128);

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 3U;
	uint64_t x130 = 71438048LLU;
	int8_t x131 = -12;
	volatile int32_t t32 = -112687110;

	t32 = ((x129*(x130==x131))|x132);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint8_t x134 = 64U;
	static int32_t x135 = -5785273;

	t33 = ((x133*(x134==x135))|x136);

	if (t33 != 26LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = UINT16_MAX;
	static int8_t x139 = 25;
	volatile uint8_t x140 = 39U;
	static volatile int32_t t34 = 185;

	t34 = ((x137*(x138==x139))|x140);

	if (t34 != 39) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 166226625U;
	static volatile int64_t x142 = INT64_MIN;
	int16_t x143 = -2;
	static int16_t x144 = -1040;
	uint32_t t35 = 507250U;

	t35 = ((x141*(x142==x143))|x144);

	if (t35 != 4294966256U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 34U;
	volatile int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MIN;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x145*(x146==x147))|x148);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = 5;
	int32_t x151 = -220;
	int64_t x152 = INT64_MAX;
	volatile int64_t t37 = INT64_MAX;

	t37 = ((x149*(x150==x151))|x152);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 0;
	static int64_t x155 = INT64_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x153*(x154==x155))|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 1;
	int64_t x158 = INT64_MIN;
	int64_t x159 = 119349889474850134LL;
	uint32_t x160 = 321U;
	volatile uint32_t t39 = 4019U;

	t39 = ((x157*(x158==x159))|x160);

	if (t39 != 321U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MAX;
	static uint64_t x164 = 31LLU;

	t40 = ((x161*(x162==x163))|x164);

	if (t40 != 31LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = 34250126548LLU;
	int64_t x167 = INT64_MIN;
	int32_t x168 = -1;
	static volatile int32_t t41 = 0;

	t41 = ((x165*(x166==x167))|x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int64_t x170 = INT64_MAX;
	uint16_t x171 = UINT16_MAX;
	volatile uint8_t x172 = UINT8_MAX;

	t42 = ((x169*(x170==x171))|x172);

	if (t42 != 255LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	static uint16_t x174 = 0U;
	uint64_t t43 = 54732938012LLU;

	t43 = ((x173*(x174==x175))|x176);

	if (t43 != 13086043550LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x179 = -1;
	static int8_t x180 = 1;
	volatile int32_t t44 = -185;

	t44 = ((x177*(x178==x179))|x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x181*(x182==x183))|x184);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MIN;
	int64_t x187 = 1660748284114839LL;
	static int32_t x188 = -209997;
	int32_t t46 = 24;

	t46 = ((x185*(x186==x187))|x188);

	if (t46 != -209997) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	uint64_t x190 = 62LLU;
	static int16_t x191 = INT16_MIN;

	t47 = ((x189*(x190==x191))|x192);

	if (t47 != 4LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	static uint16_t x194 = 5U;
	int8_t x195 = INT8_MIN;
	volatile int8_t x196 = -1;

	t48 = ((x193*(x194==x195))|x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	int16_t x198 = -1;
	uint8_t x200 = UINT8_MAX;
	int64_t t49 = INT64_MAX;

	t49 = ((x197*(x198==x199))|x200);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -12077183865266LL;
	static int16_t x202 = -1;
	int8_t x203 = INT8_MAX;
	uint32_t x204 = UINT32_MAX;
	int64_t t50 = 167LL;

	t50 = ((x201*(x202==x203))|x204);

	if (t50 != 4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = 1034863874;
	uint32_t x207 = 4943506U;
	uint32_t x208 = UINT32_MAX;
	uint32_t t51 = UINT32_MAX;

	t51 = ((x205*(x206==x207))|x208);

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	static uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	volatile int16_t x212 = -1;
	volatile int32_t t52 = 2329;

	t52 = ((x209*(x210==x211))|x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 162U;
	int16_t x215 = INT16_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = ((x213*(x214==x215))|x216);

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int16_t x218 = -1;
	int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = ((x217*(x218==x219))|x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int64_t x222 = 328739244LL;
	int64_t x224 = INT64_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = ((x221*(x222==x223))|x224);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MIN;
	int16_t x228 = -4466;
	static int32_t t56 = -2;

	t56 = ((x225*(x226==x227))|x228);

	if (t56 != -4466) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -24;
	static volatile uint32_t x230 = UINT32_MAX;
	volatile int32_t t57 = 5527964;

	t57 = ((x229*(x230==x231))|x232);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x236 = INT8_MIN;
	volatile int64_t t58 = 488763527093266LL;

	t58 = ((x233*(x234==x235))|x236);

	if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = -6122483;
	int8_t x238 = INT8_MAX;
	int32_t t59 = -402776870;

	t59 = ((x237*(x238==x239))|x240);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;

	t60 = ((x241*(x242==x243))|x244);

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MAX;
	int32_t x246 = 13677;
	volatile int32_t x247 = -92449;
	static volatile uint16_t x248 = 124U;

	t61 = ((x245*(x246==x247))|x248);

	if (t61 != 124LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -1;
	volatile int32_t t62 = -458289;

	t62 = ((x249*(x250==x251))|x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	volatile int16_t x255 = INT16_MAX;
	int8_t x256 = -1;

	t63 = ((x253*(x254==x255))|x256);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = 0;
	int32_t x259 = -1;
	int64_t x260 = -17835760LL;
	int64_t t64 = 1165928198749378LL;

	t64 = ((x257*(x258==x259))|x260);

	if (t64 != -17835760LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x262 = UINT8_MAX;
	int64_t x263 = -333078626629523LL;
	int64_t x264 = 4058065910206618LL;

	t65 = ((x261*(x262==x263))|x264);

	if (t65 != 4058065910206618LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = 1U;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = ((x265*(x266==x267))|x268);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	volatile int32_t x270 = -1;
	int16_t x271 = -1;
	volatile int32_t t67 = 968838;

	t67 = ((x269*(x270==x271))|x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	volatile int64_t x274 = -1LL;
	uint8_t x275 = 123U;
	int64_t t68 = -474820910656887458LL;

	t68 = ((x273*(x274==x275))|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	static int64_t x278 = INT64_MIN;
	static volatile int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t69 = 8097;

	t69 = ((x277*(x278==x279))|x280);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	volatile uint64_t x282 = 53367289296066LLU;
	uint32_t x283 = 2017021212U;
	uint8_t x284 = UINT8_MAX;
	static int32_t t70 = -36575;

	t70 = ((x281*(x282==x283))|x284);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MAX;
	int64_t x286 = -1LL;
	int8_t x287 = INT8_MAX;
	static volatile uint32_t x288 = UINT32_MAX;
	uint32_t t71 = UINT32_MAX;

	t71 = ((x285*(x286==x287))|x288);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	static int16_t x290 = INT16_MIN;
	static int64_t x291 = -1LL;
	uint32_t x292 = 30U;
	uint32_t t72 = 1380U;

	t72 = ((x289*(x290==x291))|x292);

	if (t72 != 30U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 6905161784107LLU;
	uint16_t x294 = 2923U;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x293*(x294==x295))|x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 1U;
	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	static volatile int32_t x300 = INT32_MAX;

	t74 = ((x297*(x298==x299))|x300);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = 1;
	int64_t x302 = -1LL;
	int8_t x303 = INT8_MIN;
	int8_t x304 = 0;
	volatile int32_t t75 = 1;

	t75 = ((x301*(x302==x303))|x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = -1LL;
	int64_t x306 = -1LL;
	volatile uint8_t x307 = 2U;
	volatile int64_t x308 = 0LL;
	volatile int64_t t76 = -1927757838LL;

	t76 = ((x305*(x306==x307))|x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	static int64_t x310 = 162766LL;
	int64_t x311 = 65682258LL;
	uint8_t x312 = 0U;
	static volatile int32_t t77 = 234;

	t77 = ((x309*(x310==x311))|x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x314 = INT8_MIN;
	static uint32_t x315 = 23256U;
	volatile int64_t x316 = -891934927268104698LL;
	static int64_t t78 = 4948662677LL;

	t78 = ((x313*(x314==x315))|x316);

	if (t78 != -891934927268104698LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MIN;
	static int16_t x318 = 28;
	uint8_t x319 = 111U;
	int64_t x320 = INT64_MIN;
	int64_t t79 = INT64_MIN;

	t79 = ((x317*(x318==x319))|x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = UINT64_MAX;
	static int32_t x323 = INT32_MIN;
	uint64_t t80 = 6064400449LLU;

	t80 = ((x321*(x322==x323))|x324);

	if (t80 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	int64_t x326 = 2545011580LL;
	int64_t x327 = -1LL;
	volatile int64_t x328 = -411451058LL;
	volatile int64_t t81 = -13363778605881075LL;

	t81 = ((x325*(x326==x327))|x328);

	if (t81 != -411451058LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 77897965U;
	int64_t x331 = INT64_MIN;
	volatile int8_t x332 = 1;
	static uint32_t t82 = 22262477U;

	t82 = ((x329*(x330==x331))|x332);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MIN;
	static volatile int16_t x335 = -1;
	static volatile uint16_t x336 = 4375U;
	volatile uint32_t t83 = 4737U;

	t83 = ((x333*(x334==x335))|x336);

	if (t83 != 4375U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 1104899942540399LL;
	static uint8_t x339 = 4U;
	int64_t x340 = INT64_MAX;

	t84 = ((x337*(x338==x339))|x340);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = 115458U;
	uint32_t x344 = 20508665U;
	static volatile uint32_t t85 = 12119U;

	t85 = ((x341*(x342==x343))|x344);

	if (t85 != 20508665U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 5267299U;
	static int8_t x347 = -1;

	t86 = ((x345*(x346==x347))|x348);

	if (t86 != 4294967168U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	uint64_t x350 = 6067298LLU;
	int32_t x352 = INT32_MAX;
	int32_t t87 = INT32_MAX;

	t87 = ((x349*(x350==x351))|x352);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	static int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MAX;
	int64_t t88 = -343LL;

	t88 = ((x353*(x354==x355))|x356);

	if (t88 != -771134LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -7;
	int8_t x358 = -1;
	int8_t x360 = -1;

	t89 = ((x357*(x358==x359))|x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x362 = 13343U;
	static int64_t x363 = -196027LL;
	volatile uint32_t x364 = 257460U;
	volatile int64_t t90 = 1153LL;

	t90 = ((x361*(x362==x363))|x364);

	if (t90 != 257460LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	uint64_t t91 = 437854008718675LLU;

	t91 = ((x365*(x366==x367))|x368);

	if (t91 != 9223372163748035190LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MAX;
	static uint16_t x370 = 1432U;
	int16_t x371 = INT16_MAX;
	static int8_t x372 = -15;

	t92 = ((x369*(x370==x371))|x372);

	if (t92 != -15LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 0;
	int64_t x374 = INT64_MIN;
	static volatile uint64_t x375 = 124133190583059617LLU;
	volatile uint32_t x376 = 473679U;

	t93 = ((x373*(x374==x375))|x376);

	if (t93 != 473679U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = -1LL;
	volatile uint32_t x378 = 14705757U;
	uint8_t x379 = 1U;
	uint64_t x380 = 448000LLU;
	static uint64_t t94 = 2344412554630048LLU;

	t94 = ((x377*(x378==x379))|x380);

	if (t94 != 448000LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	int16_t x382 = INT16_MAX;
	uint64_t x383 = 13930522LLU;
	static uint64_t x384 = 588LLU;
	uint64_t t95 = 14885LLU;

	t95 = ((x381*(x382==x383))|x384);

	if (t95 != 588LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = UINT16_MAX;
	volatile int16_t x386 = 7292;
	int8_t x387 = 13;
	volatile int8_t x388 = 1;
	int32_t t96 = -134;

	t96 = ((x385*(x386==x387))|x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x390 = UINT64_MAX;
	volatile int16_t x391 = INT16_MIN;
	volatile uint8_t x392 = 1U;
	static int64_t t97 = 86833165232LL;

	t97 = ((x389*(x390==x391))|x392);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = -1;
	static uint8_t x394 = UINT8_MAX;
	uint16_t x395 = 12420U;
	static int16_t x396 = INT16_MAX;
	volatile int32_t t98 = -1;

	t98 = ((x393*(x394==x395))|x396);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -5;
	static uint32_t x399 = 21040595U;
	static int32_t t99 = INT32_MIN;

	t99 = ((x397*(x398==x399))|x400);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

