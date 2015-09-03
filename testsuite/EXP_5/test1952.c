#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
int16_t x6 = -1;
volatile int32_t x9 = -131904;
static int32_t x10 = INT32_MIN;
uint16_t x12 = UINT16_MAX;
volatile int32_t t2 = 296401802;
int16_t x18 = 9;
volatile int32_t t4 = 1;
int32_t x24 = INT32_MIN;
static uint64_t x26 = 11303055957LLU;
volatile int32_t t7 = -245243;
int64_t x35 = INT64_MIN;
volatile int32_t x39 = INT32_MIN;
volatile uint64_t x40 = UINT64_MAX;
int16_t x44 = INT16_MIN;
int32_t x45 = 127;
int32_t t12 = -2593766;
uint64_t t16 = 118476116LLU;
static int64_t x71 = 59LL;
int32_t x73 = INT32_MIN;
int32_t x74 = -1;
int8_t x78 = INT8_MIN;
int32_t t19 = INT32_MAX;
volatile int32_t t23 = -1871;
volatile uint16_t x100 = UINT16_MAX;
static uint32_t t24 = UINT32_MAX;
int8_t x106 = 2;
static int64_t x108 = -1LL;
int16_t x110 = INT16_MIN;
int64_t x124 = INT64_MAX;
static volatile int64_t x125 = -135LL;
uint8_t x128 = 47U;
int32_t t32 = -1249;
volatile int32_t x138 = -1007658;
static int32_t t34 = -716;
static uint64_t x145 = UINT64_MAX;
int32_t x152 = INT32_MIN;
volatile uint64_t x155 = 733LLU;
uint32_t x158 = UINT32_MAX;
volatile int32_t x162 = INT32_MIN;
volatile uint8_t x166 = UINT8_MAX;
int16_t x170 = INT16_MAX;
volatile uint32_t x188 = 73U;
int32_t t47 = 493021;
int8_t x209 = 2;
static int16_t x215 = -1;
uint64_t x219 = UINT64_MAX;
uint8_t x224 = 0U;
int32_t x226 = INT32_MIN;
int32_t x229 = -1972;
static int32_t x232 = 0;
static volatile uint16_t x239 = 233U;
volatile int64_t x244 = -592948092536582408LL;
static int32_t x245 = 64777;
uint32_t x251 = UINT32_MAX;
static int32_t x253 = -22;
int64_t x255 = -1LL;
static volatile int64_t x258 = -8044893849LL;
int16_t x260 = 2636;
int32_t x262 = INT32_MAX;
int64_t x265 = INT64_MAX;
int8_t x273 = -1;
int32_t x275 = -1;
int32_t x290 = -50501;
uint16_t x291 = 190U;
uint16_t x295 = 474U;
volatile int8_t x299 = INT8_MAX;
int8_t x301 = 37;
volatile int32_t x304 = INT32_MIN;
static volatile uint8_t x306 = UINT8_MAX;
int16_t x307 = INT16_MAX;
uint16_t x308 = 2U;
static int16_t x309 = -799;
int8_t x315 = -63;
int8_t x321 = INT8_MIN;
volatile int64_t x322 = INT64_MAX;
static int32_t t80 = -9;
int16_t x328 = INT16_MAX;
int32_t x339 = INT32_MIN;
uint32_t x343 = 75499065U;
volatile int32_t t85 = -5031962;
uint16_t x345 = 15U;
static int32_t x347 = 85;
volatile uint8_t x352 = 1U;
int16_t x363 = -5;
uint64_t x368 = UINT64_MAX;
volatile int8_t x371 = INT8_MIN;
uint16_t x374 = 223U;
volatile uint64_t t93 = 8055212LLU;
int64_t x378 = INT64_MIN;
volatile int64_t x386 = INT64_MAX;
uint8_t x387 = 0U;
static int64_t x389 = -8477625868568005LL;
uint32_t x391 = UINT32_MAX;
int16_t x395 = -1;
int8_t x397 = -1;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	int32_t x2 = INT32_MAX;
	int8_t x3 = 0;
	static uint64_t t0 = UINT64_MAX;

	t0 = (x1-((x2|x3)==x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int32_t x7 = INT32_MAX;
	static int16_t x8 = -1358;
	static int32_t t1 = 5;

	t1 = (x5-((x6|x7)==x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x11 = -1;

	t2 = (x9-((x10|x11)==x12));

	if (t2 != -131904) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 0U;
	uint64_t x14 = 2117685663224358LLU;
	int16_t x15 = INT16_MAX;
	volatile int8_t x16 = 8;
	int32_t t3 = -4017802;

	t3 = (x13-((x14|x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 64176138U;

	t4 = (x17-((x18|x19)==x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -2;
	volatile int32_t x22 = -1;
	int32_t x23 = INT32_MAX;
	volatile int32_t t5 = -408848;

	t5 = (x21-((x22|x23)==x24));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 204922LLU;
	int16_t x27 = -1;
	int16_t x28 = INT16_MAX;
	volatile uint64_t t6 = 3201LLU;

	t6 = (x25-((x26|x27)==x28));

	if (t6 != 204922LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile int32_t x30 = 2987504;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = 0U;

	t7 = (x29-((x30|x31)==x32));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile int32_t x34 = INT32_MIN;
	volatile int8_t x36 = INT8_MAX;
	int64_t t8 = INT64_MIN;

	t8 = (x33-((x34|x35)==x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	int64_t x38 = -8621314396LL;
	static int32_t t9 = 98808;

	t9 = (x37-((x38|x39)==x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 0;
	int8_t x42 = 2;
	int16_t x43 = INT16_MIN;
	int32_t t10 = -51887751;

	t10 = (x41-((x42|x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = INT8_MIN;
	int64_t x47 = 797LL;
	uint32_t x48 = 13066561U;
	volatile int32_t t11 = -534205431;

	t11 = (x45-((x46|x47)==x48));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MAX;
	uint16_t x52 = UINT16_MAX;

	t12 = (x49-((x50|x51)==x52));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	volatile int8_t x54 = INT8_MIN;
	volatile int64_t x55 = -1LL;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x53-((x54|x55)==x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 44U;
	uint32_t x58 = 8117U;
	volatile int8_t x59 = -23;
	int32_t x60 = -1;
	volatile int32_t t14 = -99;

	t14 = (x57-((x58|x59)==x60));

	if (t14 != 44) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 1422398U;
	uint16_t x62 = UINT16_MAX;
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	uint32_t t15 = 3U;

	t15 = (x61-((x62|x63)==x64));

	if (t15 != 1422398U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 437751767031648168LLU;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = 3898620585346LLU;
	int64_t x68 = 69960726099523LL;

	t16 = (x65-((x66|x67)==x68));

	if (t16 != 437751767031648168LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 5U;
	static int32_t x70 = 5;
	int16_t x72 = INT16_MIN;
	volatile uint32_t t17 = 112U;

	t17 = (x69-((x70|x71)==x72));

	if (t17 != 5U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = -1LL;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t18 = INT32_MIN;

	t18 = (x73-((x74|x75)==x76));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	static volatile uint32_t x79 = 10275910U;
	static uint8_t x80 = 42U;

	t19 = (x77-((x78|x79)==x80));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	volatile int8_t x82 = INT8_MAX;
	uint8_t x83 = UINT8_MAX;
	static int8_t x84 = INT8_MAX;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x81-((x82|x83)==x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -19;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = INT64_MAX;
	uint16_t x88 = 92U;
	volatile int32_t t21 = 39210;

	t21 = (x85-((x86|x87)==x88));

	if (t21 != -19) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -48154139056382666LL;
	int16_t x90 = INT16_MAX;
	int16_t x91 = -1;
	volatile int32_t x92 = -1;
	volatile int64_t t22 = -39992498687LL;

	t22 = (x89-((x90|x91)==x92));

	if (t22 != -48154139056382667LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MAX;
	volatile int8_t x94 = INT8_MIN;
	int8_t x95 = -1;
	static volatile int8_t x96 = INT8_MAX;

	t23 = (x93-((x94|x95)==x96));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = UINT32_MAX;
	int32_t x98 = -1;
	int16_t x99 = -6;

	t24 = (x97-((x98|x99)==x100));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 0U;
	volatile int32_t x102 = -1;
	int16_t x103 = -114;
	static int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -1;

	t25 = (x101-((x102|x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x107 = 386U;
	int32_t t26 = -595193;

	t26 = (x105-((x106|x107)==x108));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	static int16_t x111 = -1;
	uint8_t x112 = 61U;
	volatile int32_t t27 = 4134450;

	t27 = (x109-((x110|x111)==x112));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = UINT32_MAX;
	static volatile int16_t x116 = INT16_MIN;
	int32_t t28 = 15416426;

	t28 = (x113-((x114|x115)==x116));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -192097857;

	t29 = (x117-((x118|x119)==x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	volatile int32_t t30 = 1538894;

	t30 = (x121-((x122|x123)==x124));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = INT16_MIN;
	int32_t x127 = -1;
	int64_t t31 = -980315270LL;

	t31 = (x125-((x126|x127)==x128));

	if (t31 != -135LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 3U;
	volatile int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	volatile int8_t x132 = -1;

	t32 = (x129-((x130|x131)==x132));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 696214718;
	volatile int16_t x134 = INT16_MIN;
	int64_t x135 = 2093LL;
	uint64_t x136 = 0LLU;
	int32_t t33 = -4156710;

	t33 = (x133-((x134|x135)==x136));

	if (t33 != 696214718) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	int16_t x139 = 2106;
	static volatile uint64_t x140 = 40598LLU;

	t34 = (x137-((x138|x139)==x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int16_t x142 = 238;
	static int64_t x143 = 738753496678290LL;
	static int64_t x144 = -7757114358LL;
	volatile int32_t t35 = -47483656;

	t35 = (x141-((x142|x143)==x144));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = 18;
	int64_t x147 = 18731100LL;
	int16_t x148 = INT16_MAX;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x145-((x146|x147)==x148));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MIN;
	uint16_t x150 = UINT16_MAX;
	static uint64_t x151 = 18963LLU;
	volatile int32_t t37 = -90697633;

	t37 = (x149-((x150|x151)==x152));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	uint64_t x154 = 2794LLU;
	uint16_t x156 = 133U;
	uint64_t t38 = UINT64_MAX;

	t38 = (x153-((x154|x155)==x156));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 10;
	uint16_t x159 = 1U;
	volatile uint64_t x160 = 3679728LLU;
	volatile int32_t t39 = -2;

	t39 = (x157-((x158|x159)==x160));

	if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MAX;
	int32_t t40 = -23011486;

	t40 = (x161-((x162|x163)==x164));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static int64_t x167 = INT64_MAX;
	volatile uint64_t x168 = 2416884751696785LLU;
	volatile int32_t t41 = -15191;

	t41 = (x165-((x166|x167)==x168));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	static volatile int64_t x171 = -336350330657LL;
	int32_t x172 = -1;
	uint32_t t42 = UINT32_MAX;

	t42 = (x169-((x170|x171)==x172));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 2812351U;
	int64_t x174 = 18277324410645LL;
	uint16_t x175 = UINT16_MAX;
	volatile uint16_t x176 = 1U;
	uint32_t t43 = 26453890U;

	t43 = (x173-((x174|x175)==x176));

	if (t43 != 2812351U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 624755LLU;
	int8_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	int64_t x180 = INT64_MAX;
	volatile uint64_t t44 = 3869LLU;

	t44 = (x177-((x178|x179)==x180));

	if (t44 != 624755LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -817LL;
	int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MIN;
	int16_t x184 = -3099;
	volatile int64_t t45 = -1634LL;

	t45 = (x181-((x182|x183)==x184));

	if (t45 != -817LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = INT16_MAX;
	uint16_t x187 = 31U;
	int32_t t46 = INT32_MAX;

	t46 = (x185-((x186|x187)==x188));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 124U;
	volatile int32_t x190 = 970405305;
	int64_t x191 = -1LL;
	static volatile uint64_t x192 = UINT64_MAX;

	t47 = (x189-((x190|x191)==x192));

	if (t47 != 123) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 24U;
	volatile uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t48 = 86U;

	t48 = (x193-((x194|x195)==x196));

	if (t48 != 23U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -4229;
	int32_t x198 = -7890;
	int8_t x199 = -1;
	int32_t x200 = INT32_MAX;
	static int32_t t49 = -5595550;

	t49 = (x197-((x198|x199)==x200));

	if (t49 != -4229) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = 1899084;
	int8_t x202 = 63;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -25;
	volatile int32_t t50 = 908698;

	t50 = (x201-((x202|x203)==x204));

	if (t50 != 1899084) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 25U;
	static volatile int16_t x206 = -1;
	volatile int64_t x207 = 323864LL;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = -6;

	t51 = (x205-((x206|x207)==x208));

	if (t51 != 25) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = -310;
	static volatile int16_t x211 = INT16_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t52 = -172;

	t52 = (x209-((x210|x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	int64_t x214 = INT64_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -1219;

	t53 = (x213-((x214|x215)==x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	uint8_t x218 = 3U;
	int32_t x220 = INT32_MIN;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x217-((x218|x219)==x220));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = -90936LL;
	int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MIN;
	volatile int64_t t55 = 10442692599932LL;

	t55 = (x221-((x222|x223)==x224));

	if (t55 != -90936LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MIN;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MAX;
	int32_t t56 = -4155022;

	t56 = (x225-((x226|x227)==x228));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	int32_t t57 = -21670;

	t57 = (x229-((x230|x231)==x232));

	if (t57 != -1972) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 177417013LL;
	uint8_t x234 = 1U;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	int64_t t58 = -1583LL;

	t58 = (x233-((x234|x235)==x236));

	if (t58 != 177417013LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = -37877;
	volatile uint64_t x238 = 944944LLU;
	volatile uint64_t x240 = 236LLU;
	volatile int32_t t59 = 357763;

	t59 = (x237-((x238|x239)==x240));

	if (t59 != -37877) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -1;
	static int16_t x242 = 39;
	volatile int64_t x243 = INT64_MIN;
	static int32_t t60 = 0;

	t60 = (x241-((x242|x243)==x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = -230;
	int64_t x247 = -30670327LL;
	int64_t x248 = INT64_MIN;
	volatile int32_t t61 = -14584;

	t61 = (x245-((x246|x247)==x248));

	if (t61 != 64777) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	uint32_t x250 = UINT32_MAX;
	int8_t x252 = -32;
	static int32_t t62 = -8101830;

	t62 = (x249-((x250|x251)==x252));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MIN;
	static volatile int16_t x256 = 2390;
	static volatile int32_t t63 = 47470573;

	t63 = (x253-((x254|x255)==x256));

	if (t63 != -22) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = 28341LL;
	int32_t x259 = INT32_MIN;
	volatile int64_t t64 = 129043942237916481LL;

	t64 = (x257-((x258|x259)==x260));

	if (t64 != 28341LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 21924U;
	uint8_t x263 = 61U;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -6;

	t65 = (x261-((x262|x263)==x264));

	if (t65 != 21924) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x266 = 30256327LLU;
	int8_t x267 = -1;
	int8_t x268 = 1;
	static volatile int64_t t66 = INT64_MAX;

	t66 = (x265-((x266|x267)==x268));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 14U;
	int64_t x270 = INT64_MIN;
	int64_t x271 = 0LL;
	int8_t x272 = -1;
	int32_t t67 = 4;

	t67 = (x269-((x270|x271)==x272));

	if (t67 != 14) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = -156225375;
	static int32_t x276 = INT32_MAX;
	static int32_t t68 = 60;

	t68 = (x273-((x274|x275)==x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 1U;
	int64_t x278 = INT64_MAX;
	uint8_t x279 = 4U;
	static uint32_t x280 = 2189U;
	static volatile int32_t t69 = -6;

	t69 = (x277-((x278|x279)==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -101;
	static volatile uint8_t x282 = 11U;
	volatile int64_t x283 = -1LL;
	static volatile int16_t x284 = 14;
	volatile int32_t t70 = -2;

	t70 = (x281-((x282|x283)==x284));

	if (t70 != -101) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 4601882U;
	int32_t x286 = -1;
	int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MIN;
	uint32_t t71 = 0U;

	t71 = (x285-((x286|x287)==x288));

	if (t71 != 4601882U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile int64_t x292 = INT64_MIN;
	volatile int32_t t72 = 34710732;

	t72 = (x289-((x290|x291)==x292));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = 2300133889996900784LL;
	int16_t x294 = INT16_MIN;
	static uint8_t x296 = 126U;
	volatile int64_t t73 = -63408LL;

	t73 = (x293-((x294|x295)==x296));

	if (t73 != 2300133889996900784LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	int64_t x298 = 13914LL;
	int8_t x300 = 2;
	volatile int32_t t74 = 0;

	t74 = (x297-((x298|x299)==x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MIN;
	uint16_t x303 = 350U;
	volatile int32_t t75 = -2;

	t75 = (x301-((x302|x303)==x304));

	if (t75 != 37) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 2397U;
	uint32_t t76 = 5250U;

	t76 = (x305-((x306|x307)==x308));

	if (t76 != 2397U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = 440623737344LLU;
	static int16_t x311 = -9706;
	uint32_t x312 = 895423U;
	int32_t t77 = -35381525;

	t77 = (x309-((x310|x311)==x312));

	if (t77 != -799) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MAX;
	volatile int64_t x314 = INT64_MIN;
	volatile int64_t x316 = 1020312875524963418LL;
	int32_t t78 = -844;

	t78 = (x313-((x314|x315)==x316));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -1;
	volatile uint16_t x318 = 32U;
	uint64_t x319 = 293618LLU;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = 933;

	t79 = (x317-((x318|x319)==x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MAX;

	t80 = (x321-((x322|x323)==x324));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MAX;
	volatile int32_t x326 = -1;
	static int64_t x327 = INT64_MIN;
	int32_t t81 = -1675;

	t81 = (x325-((x326|x327)==x328));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile uint64_t x330 = 9LLU;
	static int16_t x331 = -1;
	uint16_t x332 = UINT16_MAX;
	static int32_t t82 = 1;

	t82 = (x329-((x330|x331)==x332));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 27047;
	int8_t x334 = INT8_MAX;
	int32_t x335 = 1;
	int32_t x336 = -1924;
	volatile int32_t t83 = -1;

	t83 = (x333-((x334|x335)==x336));

	if (t83 != 27047) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -11050633;
	static int32_t x338 = -297306;
	uint32_t x340 = 519577U;
	volatile int32_t t84 = 16061613;

	t84 = (x337-((x338|x339)==x340));

	if (t84 != -11050633) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	volatile uint16_t x342 = 3U;
	uint16_t x344 = 26320U;

	t85 = (x341-((x342|x343)==x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x346 = UINT64_MAX;
	int64_t x348 = -1LL;
	int32_t t86 = -286500;

	t86 = (x345-((x346|x347)==x348));

	if (t86 != 14) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MAX;
	uint64_t x351 = 55818207020LLU;
	static int32_t t87 = INT32_MIN;

	t87 = (x349-((x350|x351)==x352));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -161748844641455928LL;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = 20553524191LLU;
	int8_t x356 = INT8_MIN;
	int64_t t88 = -2LL;

	t88 = (x353-((x354|x355)==x356));

	if (t88 != -161748844641455928LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 64539291478097LLU;
	static int64_t x358 = -103853LL;
	int16_t x359 = -1;
	static volatile int8_t x360 = INT8_MIN;
	volatile uint64_t t89 = 811292LLU;

	t89 = (x357-((x358|x359)==x360));

	if (t89 != 64539291478097LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	volatile int16_t x362 = -1;
	static uint16_t x364 = UINT16_MAX;
	int32_t t90 = 3407784;

	t90 = (x361-((x362|x363)==x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	uint16_t x366 = 3U;
	static int64_t x367 = 57059908341LL;
	int64_t t91 = -74054311502085LL;

	t91 = (x365-((x366|x367)==x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = -13;
	int16_t x370 = INT16_MIN;
	volatile int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -24374;

	t92 = (x369-((x370|x371)==x372));

	if (t92 != -13) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 758258LLU;
	int32_t x375 = INT32_MIN;
	int16_t x376 = -1039;

	t93 = (x373-((x374|x375)==x376));

	if (t93 != 758258LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int64_t x379 = -1LL;
	static uint32_t x380 = 349295U;
	volatile int32_t t94 = INT32_MIN;

	t94 = (x377-((x378|x379)==x380));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 3U;
	int8_t x382 = 3;
	int64_t x383 = 2191137LL;
	uint16_t x384 = 2U;
	volatile int32_t t95 = 29226213;

	t95 = (x381-((x382|x383)==x384));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = -1LL;
	volatile int8_t x388 = 3;
	volatile int64_t t96 = 7LL;

	t96 = (x385-((x386|x387)==x388));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MIN;
	int64_t x392 = 10427LL;
	int64_t t97 = -218438675720216220LL;

	t97 = (x389-((x390|x391)==x392));

	if (t97 != -8477625868568005LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int8_t x394 = INT8_MIN;
	uint16_t x396 = 14790U;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x393-((x394|x395)==x396));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	static volatile int32_t x400 = INT32_MIN;
	int32_t t99 = -3;

	t99 = (x397-((x398|x399)==x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

