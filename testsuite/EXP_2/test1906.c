#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 1U;
static volatile uint8_t x20 = 7U;
static int32_t x22 = INT32_MIN;
static int32_t t6 = 30501447;
uint16_t x29 = UINT16_MAX;
static int64_t x31 = 1846249679305775114LL;
static uint8_t x35 = 5U;
uint32_t x38 = UINT32_MAX;
volatile int32_t t9 = -13;
volatile int16_t x45 = -11;
volatile int32_t x55 = INT32_MIN;
volatile int64_t x61 = INT64_MAX;
static int16_t x62 = -4;
volatile uint32_t x65 = UINT32_MAX;
static int16_t x66 = -1;
int32_t x76 = -105553057;
int64_t x81 = INT64_MIN;
static int8_t x83 = -45;
int16_t x84 = INT16_MIN;
volatile uint8_t x86 = 29U;
int32_t x87 = -4;
int64_t x90 = 4314917LL;
static int32_t t21 = 97400365;
uint16_t x93 = UINT16_MAX;
int32_t x94 = 2029;
uint32_t x96 = 10U;
static int32_t t22 = 19680;
uint64_t x105 = 7833618774923466524LLU;
int64_t x106 = -86875LL;
volatile int32_t t25 = 40688;
static uint32_t x110 = UINT32_MAX;
static int32_t t26 = -738377453;
int8_t x117 = INT8_MAX;
int32_t x120 = INT32_MAX;
volatile int8_t x129 = -1;
int32_t x132 = -32638937;
int8_t x137 = INT8_MIN;
uint64_t x141 = UINT64_MAX;
volatile uint32_t x147 = 28U;
int32_t t34 = -6970;
static uint64_t x149 = 62776050406495735LLU;
volatile uint64_t x151 = 188320255893273067LLU;
int64_t x154 = 845330364LL;
int8_t x155 = 1;
int8_t x164 = -1;
static int32_t x167 = -2272673;
volatile uint64_t x168 = 1LLU;
static uint8_t x171 = 1U;
volatile uint8_t x181 = UINT8_MAX;
volatile int32_t t43 = -44170;
uint16_t x185 = UINT16_MAX;
int32_t t44 = 15723;
static int64_t x192 = INT64_MIN;
int64_t x193 = -1748972LL;
volatile uint64_t x203 = UINT64_MAX;
int32_t x210 = INT32_MIN;
int64_t x211 = INT64_MIN;
int32_t x214 = INT32_MAX;
volatile int64_t x216 = INT64_MAX;
static volatile int32_t t51 = -310474;
int32_t x224 = -1;
static int32_t t53 = 2932495;
static int32_t x227 = INT32_MAX;
static int32_t x228 = -96;
uint8_t x229 = UINT8_MAX;
static int32_t x232 = -51026;
volatile int32_t t56 = 0;
uint16_t x245 = 12902U;
int16_t x246 = INT16_MAX;
volatile uint8_t x248 = UINT8_MAX;
int64_t x250 = 17LL;
int16_t x252 = INT16_MIN;
uint8_t x265 = 121U;
static uint64_t x268 = 6007833LLU;
int16_t x270 = 1787;
volatile int8_t x271 = 3;
static int16_t x273 = INT16_MIN;
int32_t x276 = INT32_MIN;
volatile int32_t t66 = 204145093;
uint32_t x282 = 6792521U;
static volatile int32_t t68 = -31;
uint16_t x287 = 17573U;
volatile int32_t t70 = 1;
int8_t x294 = -2;
int8_t x295 = 14;
uint32_t x297 = UINT32_MAX;
int64_t x301 = INT64_MAX;
uint64_t x303 = 90776237222LLU;
int32_t x306 = INT32_MIN;
static uint8_t x307 = 1U;
volatile int64_t x312 = INT64_MIN;
uint32_t x318 = 1174716U;
static volatile int32_t t77 = -78336;
int64_t x321 = 7387457536020654LL;
int32_t t79 = 481324345;
int8_t x329 = 1;
volatile uint16_t x331 = 1U;
static volatile int32_t t80 = 118921;
int16_t x333 = -1380;
uint8_t x335 = UINT8_MAX;
int16_t x342 = INT16_MIN;
static uint8_t x347 = UINT8_MAX;
volatile int32_t x356 = INT32_MIN;
static uint64_t x359 = 63208729LLU;
static int32_t t87 = 27318;
static int64_t x361 = 796LL;
int8_t x362 = INT8_MIN;
volatile int32_t t88 = -69;
volatile int32_t t89 = 93691;
int8_t x371 = -1;
volatile int8_t x372 = INT8_MIN;
int32_t t90 = 2043131;
volatile uint32_t x374 = 476U;
uint64_t x382 = UINT64_MAX;
int16_t x384 = INT16_MAX;
int64_t x386 = INT64_MIN;
uint16_t x387 = 3U;
int32_t t94 = 59;
int8_t x390 = INT8_MIN;
uint32_t x399 = UINT32_MAX;
int64_t x410 = INT64_MIN;
volatile int32_t t99 = -862;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MIN;
	static int64_t x3 = 448202LL;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = 485500329;

	t0 = ((x1/(x2|x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	int16_t x7 = INT16_MIN;
	static int32_t t1 = 120;

	t1 = ((x5/(x6|x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 27U;
	static int8_t x10 = -1;
	uint16_t x11 = 4U;
	int32_t x12 = INT32_MAX;
	int32_t t2 = 2428207;

	t2 = ((x9/(x10|x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1637122U;
	uint32_t x14 = 197028U;
	static uint16_t x15 = 16U;
	uint16_t x16 = 14U;
	volatile int32_t t3 = -1295;

	t3 = ((x13/(x14|x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 5451736777180LL;
	static volatile uint16_t x18 = UINT16_MAX;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = 213766907;

	t4 = ((x17/(x18|x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -3553;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = -1;
	static int32_t t5 = -108401138;

	t5 = ((x21/(x22|x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = INT16_MAX;
	int64_t x27 = 16472384686919433LL;
	int64_t x28 = 4038616322170402LL;

	t6 = ((x25/(x26|x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = -17090;

	t7 = ((x29/(x30|x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	uint16_t x34 = 794U;
	static int8_t x36 = 7;
	volatile int32_t t8 = -12414550;

	t8 = ((x33/(x34|x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint64_t x39 = 2219084004787LLU;
	volatile uint64_t x40 = 11569573712492279LLU;

	t9 = ((x37/(x38|x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	int64_t x42 = 4723978357093LL;
	static volatile uint8_t x43 = 17U;
	int64_t x44 = 56863548865067LL;
	static int32_t t10 = 541154831;

	t10 = ((x41/(x42|x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	int32_t x48 = -1;
	volatile int32_t t11 = 48876;

	t11 = ((x45/(x46|x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	int64_t x54 = INT64_MIN;
	static volatile int32_t x56 = INT32_MIN;
	static volatile int32_t t12 = 70878300;

	t12 = ((x53/(x54|x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	static uint16_t x58 = 11U;
	int8_t x59 = -17;
	int64_t x60 = -1LL;
	int32_t t13 = -5;

	t13 = ((x57/(x58|x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x63 = 34U;
	uint64_t x64 = UINT64_MAX;
	int32_t t14 = 0;

	t14 = ((x61/(x62|x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x67 = -1;
	int32_t x68 = -1053942686;
	int32_t t15 = 13928462;

	t15 = ((x65/(x66|x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = -1;
	volatile int64_t x70 = 22418920120140LL;
	int32_t x71 = INT32_MIN;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t16 = 63622;

	t16 = ((x69/(x70|x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	static uint16_t x74 = UINT16_MAX;
	int8_t x75 = 2;
	int32_t t17 = 208;

	t17 = ((x73/(x74|x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	int16_t x78 = 1198;
	static int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MAX;
	int32_t t18 = 887;

	t18 = ((x77/(x78|x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x82 = UINT32_MAX;
	volatile int32_t t19 = 86056;

	t19 = ((x81/(x82|x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	uint32_t x88 = UINT32_MAX;
	volatile int32_t t20 = -1434228;

	t20 = ((x85/(x86|x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 11U;
	static int64_t x91 = 40186285370976LL;
	static volatile int32_t x92 = INT32_MAX;

	t21 = ((x89/(x90|x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x95 = INT64_MIN;

	t22 = ((x93/(x94|x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -1;
	int16_t x98 = 3197;
	uint32_t x99 = 62563247U;
	int16_t x100 = INT16_MIN;
	int32_t t23 = 16112;

	t23 = ((x97/(x98|x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	uint8_t x104 = UINT8_MAX;
	static volatile int32_t t24 = -3596;

	t24 = ((x101/(x102|x103))==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x107 = 141996383632387792LLU;
	uint64_t x108 = 39504131185LLU;

	t25 = ((x105/(x106|x107))==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 43159322LL;
	static int32_t x111 = INT32_MIN;
	static volatile int32_t x112 = INT32_MAX;

	t26 = ((x109/(x110|x111))==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = 0;
	int8_t x114 = INT8_MIN;
	volatile int16_t x115 = INT16_MAX;
	volatile int16_t x116 = -124;
	volatile int32_t t27 = -21753;

	t27 = ((x113/(x114|x115))==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x118 = UINT32_MAX;
	int8_t x119 = 22;
	int32_t t28 = 101464010;

	t28 = ((x117/(x118|x119))==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	int32_t x122 = -119063;
	int8_t x123 = -1;
	static volatile uint32_t x124 = 167003U;
	volatile int32_t t29 = -71177;

	t29 = ((x121/(x122|x123))==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MIN;
	uint64_t x127 = UINT64_MAX;
	uint8_t x128 = 1U;
	int32_t t30 = 476;

	t30 = ((x125/(x126|x127))==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x130 = 358U;
	static int16_t x131 = INT16_MAX;
	int32_t t31 = -903686381;

	t31 = ((x129/(x130|x131))==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x138 = 6419;
	uint64_t x139 = 1065783277157873LLU;
	int64_t x140 = INT64_MAX;
	int32_t t32 = -220499696;

	t32 = ((x137/(x138|x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x142 = 1;
	uint32_t x143 = UINT32_MAX;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t33 = 133174789;

	t33 = ((x141/(x142|x143))==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = 0;
	volatile uint64_t x148 = 15469033LLU;

	t34 = ((x145/(x146|x147))==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x150 = 1442598434848649LL;
	int8_t x152 = INT8_MAX;
	volatile int32_t t35 = 235;

	t35 = ((x149/(x150|x151))==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = 1;
	int64_t x156 = -1LL;
	volatile int32_t t36 = 46466255;

	t36 = ((x153/(x154|x155))==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	static int64_t x158 = INT64_MIN;
	int32_t x159 = -25795391;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t37 = 397244906;

	t37 = ((x157/(x158|x159))==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = -1;
	uint16_t x162 = UINT16_MAX;
	int16_t x163 = INT16_MAX;
	int32_t t38 = 60208360;

	t38 = ((x161/(x162|x163))==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -1;
	static uint64_t x166 = UINT64_MAX;
	volatile int32_t t39 = 187030;

	t39 = ((x165/(x166|x167))==x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = 1;
	static uint32_t x170 = UINT32_MAX;
	uint32_t x172 = 708298998U;
	volatile int32_t t40 = 147220898;

	t40 = ((x169/(x170|x171))==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -11839;
	static int64_t x174 = -1LL;
	static volatile int32_t x175 = INT32_MIN;
	volatile uint16_t x176 = 0U;
	volatile int32_t t41 = -318303;

	t41 = ((x173/(x174|x175))==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = 2;
	static uint16_t x178 = 267U;
	int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t42 = -2;

	t42 = ((x177/(x178|x179))==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = INT8_MIN;
	int64_t x183 = 50018198869164LL;
	static int8_t x184 = -1;

	t43 = ((x181/(x182|x183))==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x186 = 114106;
	static uint16_t x187 = 18U;
	uint32_t x188 = UINT32_MAX;

	t44 = ((x185/(x186|x187))==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x189 = UINT8_MAX;
	uint16_t x190 = UINT16_MAX;
	int8_t x191 = INT8_MIN;
	int32_t t45 = -2;

	t45 = ((x189/(x190|x191))==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x194 = 828138708289869508LLU;
	uint16_t x195 = 11905U;
	int8_t x196 = INT8_MAX;
	volatile int32_t t46 = 832;

	t46 = ((x193/(x194|x195))==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 74U;
	static volatile uint8_t x198 = 3U;
	int16_t x199 = -1;
	int16_t x200 = -1520;
	int32_t t47 = -46584;

	t47 = ((x197/(x198|x199))==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x201 = -1;
	int64_t x202 = -265067429LL;
	int64_t x204 = 23850751LL;
	volatile int32_t t48 = 503847;

	t48 = ((x201/(x202|x203))==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x205 = 17738U;
	int32_t x206 = -11;
	int8_t x207 = 1;
	int64_t x208 = INT64_MIN;
	int32_t t49 = -836087720;

	t49 = ((x205/(x206|x207))==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x209 = UINT64_MAX;
	int64_t x212 = INT64_MAX;
	volatile int32_t t50 = -33;

	t50 = ((x209/(x210|x211))==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x213 = 2U;
	volatile uint16_t x215 = 0U;

	t51 = ((x213/(x214|x215))==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x217 = 129790LLU;
	int32_t x218 = 526;
	volatile int32_t x219 = INT32_MIN;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t52 = -783;

	t52 = ((x217/(x218|x219))==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x221 = INT64_MIN;
	static int16_t x222 = 12363;
	static int64_t x223 = INT64_MAX;

	t53 = ((x221/(x222|x223))==x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = 4;
	volatile int64_t x226 = 683868LL;
	static volatile int32_t t54 = -1;

	t54 = ((x225/(x226|x227))==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x230 = 3U;
	int64_t x231 = INT64_MAX;
	static int32_t t55 = 56;

	t55 = ((x229/(x230|x231))==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	int16_t x235 = 31;
	static int32_t x236 = INT32_MAX;

	t56 = ((x233/(x234|x235))==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	static int32_t x238 = INT32_MIN;
	volatile int32_t x239 = -1;
	static int64_t x240 = -1952803953642863LL;
	volatile int32_t t57 = 57076713;

	t57 = ((x237/(x238|x239))==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MAX;
	uint8_t x242 = 2U;
	int16_t x243 = INT16_MIN;
	int32_t x244 = 58673;
	int32_t t58 = -1;

	t58 = ((x241/(x242|x243))==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x247 = INT32_MIN;
	static volatile int32_t t59 = 5595;

	t59 = ((x245/(x246|x247))==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -221535818016272LL;
	int8_t x251 = INT8_MAX;
	int32_t t60 = 57;

	t60 = ((x249/(x250|x251))==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x253 = 10053150200239LL;
	uint16_t x254 = UINT16_MAX;
	int32_t x255 = 22201627;
	static int8_t x256 = INT8_MAX;
	int32_t t61 = 836979;

	t61 = ((x253/(x254|x255))==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -1LL;
	int8_t x258 = -1;
	static int8_t x259 = INT8_MIN;
	volatile int32_t x260 = -1;
	int32_t t62 = 33359658;

	t62 = ((x257/(x258|x259))==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x261 = 101625;
	uint8_t x262 = UINT8_MAX;
	uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MAX;
	int32_t t63 = -7740585;

	t63 = ((x261/(x262|x263))==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x266 = INT32_MIN;
	volatile int32_t x267 = INT32_MIN;
	int32_t t64 = -60199141;

	t64 = ((x265/(x266|x267))==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x269 = INT8_MAX;
	uint32_t x272 = 2119U;
	volatile int32_t t65 = 126916;

	t65 = ((x269/(x270|x271))==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x274 = INT16_MIN;
	static int8_t x275 = 1;

	t66 = ((x273/(x274|x275))==x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x277 = 22533U;
	static int64_t x278 = INT64_MAX;
	int64_t x279 = -1LL;
	int64_t x280 = INT64_MAX;
	int32_t t67 = -19;

	t67 = ((x277/(x278|x279))==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = 8124U;
	static volatile int32_t x283 = INT32_MAX;
	uint16_t x284 = 0U;

	t68 = ((x281/(x282|x283))==x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -60;
	volatile int32_t x286 = 22;
	volatile uint32_t x288 = 88169U;
	int32_t t69 = -535056659;

	t69 = ((x285/(x286|x287))==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 169919427LLU;
	int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;

	t70 = ((x289/(x290|x291))==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x293 = -1;
	static int64_t x296 = -14378935LL;
	static volatile int32_t t71 = -10102883;

	t71 = ((x293/(x294|x295))==x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x298 = 0U;
	static volatile int16_t x299 = INT16_MIN;
	static volatile int8_t x300 = 2;
	volatile int32_t t72 = -11;

	t72 = ((x297/(x298|x299))==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x302 = -1;
	static uint8_t x304 = UINT8_MAX;
	int32_t t73 = -15;

	t73 = ((x301/(x302|x303))==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x305 = 351834LLU;
	volatile int32_t x308 = INT32_MAX;
	int32_t t74 = 1;

	t74 = ((x305/(x306|x307))==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x309 = INT32_MIN;
	uint64_t x310 = 43LLU;
	int64_t x311 = -1LL;
	static volatile int32_t t75 = -361;

	t75 = ((x309/(x310|x311))==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = 49U;
	int32_t x315 = 9;
	int16_t x316 = INT16_MAX;
	int32_t t76 = 432671;

	t76 = ((x313/(x314|x315))==x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MAX;
	static uint32_t x319 = 427625U;
	int32_t x320 = INT32_MIN;

	t77 = ((x317/(x318|x319))==x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x322 = INT64_MIN;
	volatile uint16_t x323 = 351U;
	int64_t x324 = -1LL;
	volatile int32_t t78 = -2054;

	t78 = ((x321/(x322|x323))==x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x326 = UINT8_MAX;
	uint8_t x327 = 4U;
	volatile int64_t x328 = INT64_MIN;

	t79 = ((x325/(x326|x327))==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x330 = UINT32_MAX;
	volatile uint8_t x332 = UINT8_MAX;

	t80 = ((x329/(x330|x331))==x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x334 = 130;
	int64_t x336 = INT64_MIN;
	static int32_t t81 = 5367289;

	t81 = ((x333/(x334|x335))==x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x337 = 1U;
	int64_t x338 = INT64_MIN;
	volatile uint16_t x339 = UINT16_MAX;
	static int64_t x340 = INT64_MIN;
	int32_t t82 = 63;

	t82 = ((x337/(x338|x339))==x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x343 = INT8_MAX;
	volatile uint8_t x344 = 112U;
	volatile int32_t t83 = 92321147;

	t83 = ((x341/(x342|x343))==x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x345 = UINT32_MAX;
	static volatile int64_t x346 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t84 = -73;

	t84 = ((x345/(x346|x347))==x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = INT16_MIN;
	static int64_t x350 = INT64_MIN;
	uint8_t x351 = 101U;
	volatile uint16_t x352 = 2502U;
	volatile int32_t t85 = 18800;

	t85 = ((x349/(x350|x351))==x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x353 = 2491U;
	volatile int8_t x354 = -1;
	uint8_t x355 = 1U;
	volatile int32_t t86 = -6639212;

	t86 = ((x353/(x354|x355))==x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 2U;
	int16_t x358 = INT16_MAX;
	static int8_t x360 = 4;

	t87 = ((x357/(x358|x359))==x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x363 = 1;
	int8_t x364 = -1;

	t88 = ((x361/(x362|x363))==x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int32_t x366 = 42724596;
	int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MIN;

	t89 = ((x365/(x366|x367))==x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;

	t90 = ((x369/(x370|x371))==x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = UINT32_MAX;
	static int64_t x375 = INT64_MIN;
	uint8_t x376 = UINT8_MAX;
	int32_t t91 = -368283534;

	t91 = ((x373/(x374|x375))==x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = -3706;
	int32_t x378 = INT32_MAX;
	int64_t x379 = 28015448740485LL;
	volatile uint8_t x380 = 4U;
	int32_t t92 = -2497876;

	t92 = ((x377/(x378|x379))==x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = -17732;
	static int8_t x383 = INT8_MIN;
	volatile int32_t t93 = -1;

	t93 = ((x381/(x382|x383))==x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x385 = -16183;
	uint64_t x388 = UINT64_MAX;

	t94 = ((x385/(x386|x387))==x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x389 = UINT8_MAX;
	volatile uint64_t x391 = UINT64_MAX;
	volatile int64_t x392 = -1LL;
	static int32_t t95 = 3814;

	t95 = ((x389/(x390|x391))==x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x394 = -1LL;
	volatile uint8_t x395 = 25U;
	volatile int32_t x396 = -3;
	volatile int32_t t96 = 24495;

	t96 = ((x393/(x394|x395))==x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	int32_t x400 = -11;
	volatile int32_t t97 = -1;

	t97 = ((x397/(x398|x399))==x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = INT8_MAX;
	static uint32_t x402 = UINT32_MAX;
	uint16_t x403 = 20U;
	int8_t x404 = 58;
	volatile int32_t t98 = 5;

	t98 = ((x401/(x402|x403))==x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 3658631300LLU;
	static volatile int32_t x411 = -1;
	int16_t x412 = INT16_MIN;

	t99 = ((x409/(x410|x411))==x412);

	if (t99 != 0) { NG(); } else { ; }
	
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

