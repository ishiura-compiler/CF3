#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 1U;
volatile uint64_t x15 = 13LLU;
int16_t x18 = -1;
static int32_t x20 = INT32_MIN;
volatile int64_t t4 = 8537786372397152LL;
volatile int8_t x37 = 0;
static int8_t x43 = INT8_MIN;
volatile int64_t t10 = -36617538462400LL;
int32_t x51 = INT32_MIN;
int32_t x61 = -1;
uint32_t x64 = 873297067U;
volatile int32_t t16 = 1186544;
int64_t x73 = -1LL;
int64_t x76 = INT64_MIN;
uint8_t x77 = 2U;
static int64_t x78 = -739188554LL;
int64_t x82 = INT64_MAX;
int64_t x84 = -1LL;
static int32_t x93 = 21886;
int16_t x96 = 683;
volatile int32_t t23 = 48118;
uint32_t x103 = 1688062U;
uint64_t x108 = 3603103981445085LLU;
volatile int64_t x109 = -28971LL;
static int64_t t26 = 3958741079407769LL;
volatile int32_t x114 = -1;
uint32_t x124 = 7786846U;
static volatile uint32_t x128 = 310799207U;
static int16_t x130 = -1;
uint32_t x148 = 737U;
uint64_t t34 = 27089429805347053LLU;
int16_t x156 = INT16_MAX;
volatile int8_t x157 = -1;
static uint16_t x159 = 1U;
int8_t x162 = INT8_MIN;
static int32_t x169 = -18;
static uint8_t x170 = 40U;
int8_t x173 = INT8_MIN;
static uint16_t x175 = 523U;
uint8_t x178 = 0U;
static int32_t x187 = INT32_MIN;
volatile int8_t x192 = -8;
uint64_t x193 = 371547442437LLU;
uint8_t x196 = 10U;
uint64_t x200 = UINT64_MAX;
int16_t x203 = -1;
uint16_t x216 = UINT16_MAX;
uint16_t x218 = 12900U;
int64_t x223 = INT64_MIN;
int32_t x226 = INT32_MIN;
uint32_t x228 = 1832U;
static uint64_t x231 = 3LLU;
uint64_t t54 = 4571825331690352646LLU;
volatile int64_t t55 = -1LL;
int64_t x240 = INT64_MAX;
int32_t x241 = -3630;
volatile uint16_t x249 = 33U;
static uint16_t x251 = UINT16_MAX;
int32_t x252 = INT32_MIN;
int32_t x253 = -1;
int32_t t60 = INT32_MAX;
volatile int32_t x258 = 29926;
static uint32_t x260 = 5188851U;
int64_t x264 = INT64_MAX;
volatile int64_t t62 = INT64_MIN;
int8_t x269 = INT8_MAX;
static int64_t t65 = -9560615LL;
int32_t x281 = -3070;
int32_t t68 = -569;
uint64_t x291 = UINT64_MAX;
static uint8_t x294 = 81U;
volatile int8_t x300 = INT8_MAX;
volatile uint64_t t72 = 55910372616LLU;
volatile uint64_t t73 = 497118794292077LLU;
int32_t x313 = INT32_MIN;
int32_t x320 = 18;
int64_t x324 = INT64_MAX;
uint16_t x329 = 1U;
volatile int16_t x332 = -7694;
uint32_t x336 = 228750333U;
uint8_t x340 = UINT8_MAX;
uint16_t x342 = 20U;
int64_t x350 = -1LL;
int8_t x353 = 1;
int64_t t85 = -33720091219492LL;
int32_t x357 = 34;
int8_t x371 = 51;
int64_t t89 = -16854LL;
static uint64_t x374 = UINT64_MAX;
int32_t x378 = 19;
int16_t x380 = 1;
static volatile int64_t t91 = 226021LL;
static int64_t x384 = -35116LL;
static int64_t t92 = 18053LL;
volatile uint8_t x388 = UINT8_MAX;
uint32_t x392 = UINT32_MAX;
volatile int64_t x398 = INT64_MIN;
int64_t x400 = 258004717280589LL;
int32_t x404 = INT32_MIN;
volatile int64_t t97 = 563LL;
static int32_t x405 = 38847583;
volatile int32_t x410 = INT32_MAX;
int16_t x411 = -52;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	static uint64_t x2 = 15634LLU;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 208357LLU;

	t0 = ((x1|(x2/x3))^x4);

	if (t0 != 2147450880LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 2553LLU;
	int64_t x6 = INT64_MIN;
	volatile uint8_t x7 = UINT8_MAX;
	volatile uint16_t x8 = 22896U;
	uint64_t t1 = 133889793659LLU;

	t1 = ((x5|(x6/x7))^x8);

	if (t1 != 18410573987290490505LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x10 = INT8_MIN;
	int32_t x11 = -58504;
	int32_t x12 = INT32_MIN;
	uint32_t t2 = 54495963U;

	t2 = ((x9|(x10/x11))^x12);

	if (t2 != 2147483649U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int32_t x14 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 5LLU;

	t3 = ((x13|(x14/x15))^x16);

	if (t3 != 7561LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int64_t x19 = INT64_MAX;

	t4 = ((x17|(x18/x19))^x20);

	if (t4 != 2147450880LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static volatile int32_t x22 = INT32_MAX;
	int32_t x23 = INT32_MIN;
	static volatile int8_t x24 = INT8_MIN;
	int32_t t5 = 5569;

	t5 = ((x21|(x22/x23))^x24);

	if (t5 != -2147483521) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 0U;
	volatile int32_t x26 = INT32_MIN;
	int32_t x27 = 252306;
	uint32_t x28 = 177884525U;
	uint32_t t6 = 30260U;

	t6 = ((x25|(x26/x27))^x28);

	if (t6 != 4117074860U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = -3;
	int16_t x31 = INT16_MIN;
	int32_t x32 = 1148;
	volatile int32_t t7 = 123217189;

	t7 = ((x29|(x30/x31))^x32);

	if (t7 != -31620) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = -1LL;
	int64_t x34 = INT64_MIN;
	int32_t x35 = 36;
	int16_t x36 = -1;
	volatile int64_t t8 = -24595LL;

	t8 = ((x33|(x34/x35))^x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	int8_t x39 = -3;
	static int32_t x40 = -202074;
	int32_t t9 = 5063767;

	t9 = ((x37|(x38/x39))^x40);

	if (t9 != 202096) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 344;
	int16_t x42 = -69;
	int64_t x44 = INT64_MAX;

	t10 = ((x41|(x42/x43))^x44);

	if (t10 != 9223372036854775463LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MAX;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	static volatile uint64_t t11 = 1622743LLU;

	t11 = ((x45|(x46/x47))^x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 251U;
	int64_t x50 = INT64_MIN;
	static int16_t x52 = -6151;
	volatile int64_t t12 = -3530464075LL;

	t12 = ((x49|(x50/x51))^x52);

	if (t12 != -4294973694LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 32645090298800LLU;
	int8_t x54 = INT8_MIN;
	static uint8_t x55 = 12U;
	int64_t x56 = INT64_MAX;
	uint64_t t13 = 10694202922123188LLU;

	t13 = ((x53|(x54/x55))^x56);

	if (t13 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int16_t x58 = -1;
	int64_t x59 = INT64_MAX;
	int8_t x60 = INT8_MIN;
	volatile int64_t t14 = 59LL;

	t14 = ((x57|(x58/x59))^x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 14533;
	volatile int32_t x63 = INT32_MAX;
	static uint32_t t15 = 4U;

	t15 = ((x61|(x62/x63))^x64);

	if (t15 != 3421670228U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = 7074811;
	uint16_t x67 = UINT16_MAX;
	int8_t x68 = INT8_MAX;

	t16 = ((x65|(x66/x67))^x68);

	if (t16 != -32748) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 1054504622;
	volatile int8_t x70 = 0;
	int32_t x71 = -1;
	int16_t x72 = -2;
	volatile int32_t t17 = -20386;

	t17 = ((x69|(x70/x71))^x72);

	if (t17 != -1054504624) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x74 = -1;
	int64_t x75 = INT64_MIN;
	volatile int64_t t18 = INT64_MAX;

	t18 = ((x73|(x74/x75))^x76);

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x79 = 107U;
	int64_t x80 = INT64_MAX;
	static int64_t t19 = 117638392816LL;

	t19 = ((x77|(x78/x79))^x80);

	if (t19 != -9223372036847867507LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = UINT16_MAX;
	volatile int8_t x83 = INT8_MAX;
	int64_t t20 = -778875783168712LL;

	t20 = ((x81|(x82/x83))^x84);

	if (t20 != -72624976668196864LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 2754U;
	uint64_t x86 = UINT64_MAX;
	uint8_t x87 = UINT8_MAX;
	volatile int32_t x88 = -1;
	uint64_t t21 = 393LLU;

	t21 = ((x85|(x86/x87))^x88);

	if (t21 != 18374403900871472188LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x94 = UINT8_MAX;
	uint8_t x95 = 1U;
	int32_t t22 = 7840;

	t22 = ((x93|(x94/x95))^x96);

	if (t22 != 22356) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 3018U;
	int32_t x98 = INT32_MIN;
	int16_t x99 = 8;
	volatile int8_t x100 = INT8_MIN;

	t23 = ((x97|(x98/x99))^x100);

	if (t23 != 268432458) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -3;
	int64_t x102 = -1LL;
	int16_t x104 = 26;
	volatile int64_t t24 = 2217409711516428548LL;

	t24 = ((x101|(x102/x103))^x104);

	if (t24 != -25LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = INT8_MIN;
	int16_t x106 = 110;
	uint8_t x107 = UINT8_MAX;
	static volatile uint64_t t25 = 12400257933557290LLU;

	t25 = ((x105|(x106/x107))^x108);

	if (t25 != 18443140969728106589LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x110 = 25906U;
	volatile int64_t x111 = -326LL;
	int8_t x112 = 5;

	t26 = ((x109|(x110/x111))^x112);

	if (t26 != -16LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = -1LL;
	uint16_t x115 = 23266U;
	static int32_t x116 = 27;
	int64_t t27 = 24375223241039LL;

	t27 = ((x113|(x114/x115))^x116);

	if (t27 != -28LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MIN;
	static int32_t x119 = -146134;
	uint8_t x120 = UINT8_MAX;
	int32_t t28 = 1;

	t28 = ((x117|(x118/x119))^x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 227334877454690285LLU;
	static int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = 182736U;
	volatile uint64_t t29 = 1072359662819289248LLU;

	t29 = ((x121|(x122/x123))^x124);

	if (t29 != 227334877455363761LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = -1;
	uint8_t x126 = 18U;
	static int16_t x127 = 106;
	uint32_t t30 = 191944259U;

	t30 = ((x125|(x126/x127))^x128);

	if (t30 != 3984168088U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MAX;
	static uint8_t x131 = UINT8_MAX;
	volatile int64_t x132 = INT64_MAX;
	static int64_t t31 = -7059453LL;

	t31 = ((x129|(x130/x131))^x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = INT8_MAX;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = 6527475719236LLU;
	int16_t x136 = INT16_MIN;
	volatile uint64_t t32 = 232266LLU;

	t32 = ((x133|(x134/x135))^x136);

	if (t32 != 18446744073708113919LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x141 = -467352337;
	static int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	int8_t x144 = INT8_MIN;
	volatile int64_t t33 = -78298955LL;

	t33 = ((x141|(x142/x143))^x144);

	if (t33 != 467352431LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	static uint64_t x146 = 7708872206266743LLU;
	static int64_t x147 = 39555708111LL;

	t34 = ((x145|(x146/x147))^x148);

	if (t34 != 18446744073709550503LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	int32_t x150 = -282658578;
	int16_t x151 = INT16_MIN;
	static int64_t x152 = 16703567837651LL;
	static volatile int64_t t35 = -27LL;

	t35 = ((x149|(x150/x151))^x152);

	if (t35 != -16704835282847LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = INT16_MAX;
	int8_t x154 = INT8_MAX;
	volatile int8_t x155 = INT8_MAX;
	int32_t t36 = 473;

	t36 = ((x153|(x154/x155))^x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x158 = 1;
	static uint32_t x160 = 205196941U;
	volatile uint32_t t37 = 10394U;

	t37 = ((x157|(x158/x159))^x160);

	if (t37 != 4089770354U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 3U;
	uint64_t x163 = UINT64_MAX;
	volatile int32_t x164 = INT32_MIN;
	volatile uint64_t t38 = 3593465LLU;

	t38 = ((x161|(x162/x163))^x164);

	if (t38 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -2742404830359663LL;
	volatile int8_t x166 = -7;
	volatile int16_t x167 = 1854;
	int32_t x168 = INT32_MIN;
	volatile int64_t t39 = -68173270686LL;

	t39 = ((x165|(x166/x167))^x168);

	if (t39 != 2742403698102161LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x171 = -1;
	static volatile int16_t x172 = 17;
	volatile int32_t t40 = 203;

	t40 = ((x169|(x170/x171))^x172);

	if (t40 != -17) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x174 = UINT16_MAX;
	static volatile int8_t x176 = INT8_MIN;
	static volatile int32_t t41 = -488451279;

	t41 = ((x173|(x174/x175))^x176);

	if (t41 != 125) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x177 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MIN;
	int32_t t42 = 1203;

	t42 = ((x177|(x178/x179))^x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = INT64_MIN;
	static int64_t x182 = -1LL;
	static uint16_t x183 = 9U;
	static volatile uint32_t x184 = 376590U;
	int64_t t43 = 0LL;

	t43 = ((x181|(x182/x183))^x184);

	if (t43 != -9223372036854399218LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MAX;
	int16_t x188 = -1;
	int32_t t44 = INT32_MIN;

	t44 = ((x185|(x186/x187))^x188);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = 29646734;
	int64_t x190 = -1LL;
	static uint32_t x191 = 7683177U;
	volatile int64_t t45 = 165LL;

	t45 = ((x189|(x190/x191))^x192);

	if (t45 != -29646730LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x194 = INT16_MIN;
	volatile int32_t x195 = -1;
	static volatile uint64_t t46 = 2062858981387008LLU;

	t46 = ((x193|(x194/x195))^x196);

	if (t46 != 371547475215LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	static int8_t x198 = -1;
	int32_t x199 = INT32_MIN;
	volatile uint64_t t47 = 0LLU;

	t47 = ((x197|(x198/x199))^x200);

	if (t47 != 127LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x201 = 1U;
	int8_t x202 = INT8_MIN;
	static int16_t x204 = INT16_MIN;
	static volatile int32_t t48 = -187;

	t48 = ((x201|(x202/x203))^x204);

	if (t48 != -32639) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x205 = 8U;
	volatile int8_t x206 = -1;
	static uint64_t x207 = 3705LLU;
	uint8_t x208 = 7U;
	volatile uint64_t t49 = 290029976529LLU;

	t49 = ((x205|(x206/x207))^x208);

	if (t49 != 4978878292499211LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x213 = -1LL;
	static uint32_t x214 = UINT32_MAX;
	uint64_t x215 = 33108174250863LLU;
	uint64_t t50 = 1112060378960365LLU;

	t50 = ((x213|(x214/x215))^x216);

	if (t50 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = -1;
	static int16_t x219 = -1;
	int8_t x220 = -26;
	int32_t t51 = 5684809;

	t51 = ((x217|(x218/x219))^x220);

	if (t51 != 25) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 1464U;
	static uint16_t x222 = 686U;
	int8_t x224 = INT8_MIN;
	volatile int64_t t52 = 32319747LL;

	t52 = ((x221|(x222/x223))^x224);

	if (t52 != -1480LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	int64_t x227 = 1036LL;
	int64_t t53 = 2447055815LL;

	t53 = ((x225|(x226/x227))^x228);

	if (t53 != -2074164LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = 21U;
	volatile int32_t x230 = -1;
	volatile uint8_t x232 = 19U;

	t54 = ((x229|(x230/x231))^x232);

	if (t54 != 6148914691236517190LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	volatile int16_t x235 = 1364;
	static int64_t x236 = 2722937349LL;

	t55 = ((x233|(x234/x235))^x236);

	if (t55 != 1572029946LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x237 = INT32_MIN;
	volatile int8_t x238 = INT8_MIN;
	static int16_t x239 = INT16_MIN;
	volatile int64_t t56 = 487865353010162335LL;

	t56 = ((x237|(x238/x239))^x240);

	if (t56 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x242 = INT16_MAX;
	static int16_t x243 = -1;
	uint16_t x244 = UINT16_MAX;
	int32_t t57 = 14044960;

	t57 = ((x241|(x242/x243))^x244);

	if (t57 != -61908) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MAX;
	int64_t x247 = INT64_MIN;
	static int64_t x248 = INT64_MIN;
	volatile int64_t t58 = -28806356106027679LL;

	t58 = ((x245|(x246/x247))^x248);

	if (t58 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x250 = 63;
	int32_t t59 = 3711466;

	t59 = ((x249|(x250/x251))^x252);

	if (t59 != -2147483615) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x254 = -5754;
	volatile int8_t x255 = INT8_MIN;
	volatile int32_t x256 = INT32_MIN;

	t60 = ((x253|(x254/x255))^x256);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 2968837663068426LLU;
	int64_t x259 = INT64_MIN;
	uint64_t t61 = 1758371035317053892LLU;

	t61 = ((x257|(x258/x259))^x260);

	if (t61 != 2968837658164729LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -1;
	int64_t x262 = INT64_MIN;
	uint16_t x263 = UINT16_MAX;

	t62 = ((x261|(x262/x263))^x264);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MIN;
	int8_t x267 = -1;
	static uint16_t x268 = 0U;
	volatile int64_t t63 = INT64_MAX;

	t63 = ((x265|(x266/x267))^x268);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x270 = -11490;
	volatile int16_t x271 = -5600;
	int32_t x272 = -1;
	static int32_t t64 = 11;

	t64 = ((x269|(x270/x271))^x272);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MAX;
	static uint8_t x274 = 7U;
	volatile uint16_t x275 = 350U;
	volatile int32_t x276 = INT32_MIN;

	t65 = ((x273|(x274/x275))^x276);

	if (t65 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x277 = INT16_MIN;
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = 8349;
	int64_t x280 = INT64_MAX;
	int64_t t66 = -32349928699LL;

	t66 = ((x277|(x278/x279))^x280);

	if (t66 != 9223372032559818371LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x282 = 628403930152LLU;
	uint32_t x283 = 59U;
	volatile int64_t x284 = INT64_MIN;
	uint64_t t67 = 48947LLU;

	t67 = ((x281|(x282/x283))^x284);

	if (t67 != 9223372036854775062LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 5959U;
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	static int32_t x288 = INT32_MIN;

	t68 = ((x285|(x286/x287))^x288);

	if (t68 != -2147477689) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x289 = INT8_MIN;
	static int64_t x290 = -1LL;
	uint32_t x292 = 402989053U;
	static volatile uint64_t t69 = 806952291LLU;

	t69 = ((x289|(x290/x291))^x292);

	if (t69 != 18446744073306562684LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x293 = 51U;
	uint64_t x295 = 493342201893LLU;
	int8_t x296 = INT8_MIN;
	uint64_t t70 = 120856262759634889LLU;

	t70 = ((x293|(x294/x295))^x296);

	if (t70 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = INT8_MIN;
	static uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MIN;
	int32_t t71 = -1729542;

	t71 = ((x297|(x298/x299))^x300);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = UINT16_MAX;
	volatile uint64_t x302 = UINT64_MAX;
	uint64_t x303 = 2388206906419LLU;
	int64_t x304 = INT64_MIN;

	t72 = ((x301|(x302/x303))^x304);

	if (t72 != 9223372036862509055LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x305 = -1;
	static volatile int32_t x306 = 535355756;
	uint64_t x307 = 1LLU;
	int16_t x308 = 373;

	t73 = ((x305|(x306/x307))^x308);

	if (t73 != 18446744073709551242LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -1;
	uint64_t x310 = 55661637620178169LLU;
	static int64_t x311 = -1LL;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t74 = 1515603974LLU;

	t74 = ((x309|(x310/x311))^x312);

	if (t74 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x314 = 12072012U;
	int64_t x315 = INT64_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t75 = 10460397353LL;

	t75 = ((x313|(x314/x315))^x316);

	if (t75 != -2147418113LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = -4;
	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MAX;
	volatile int32_t t76 = 1360;

	t76 = ((x317|(x318/x319))^x320);

	if (t76 != -18) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MIN;
	static int8_t x322 = -3;
	int32_t x323 = INT32_MIN;
	volatile int64_t t77 = 1910220247432714LL;

	t77 = ((x321|(x322/x323))^x324);

	if (t77 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	volatile int64_t x326 = -1154LL;
	int64_t x327 = INT64_MIN;
	uint8_t x328 = 0U;
	volatile int64_t t78 = 5LL;

	t78 = ((x325|(x326/x327))^x328);

	if (t78 != 32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x330 = 5;
	int32_t x331 = INT32_MAX;
	static volatile int32_t t79 = -172;

	t79 = ((x329|(x330/x331))^x332);

	if (t79 != -7693) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	static uint8_t x334 = UINT8_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	uint64_t t80 = 576162587LLU;

	t80 = ((x333|(x334/x335))^x336);

	if (t80 != 9223372037083526141LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = -1;
	volatile int16_t x338 = INT16_MIN;
	uint32_t x339 = 180U;
	uint32_t t81 = 1323U;

	t81 = ((x337|(x338/x339))^x340);

	if (t81 != 4294967040U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	uint32_t x343 = UINT32_MAX;
	volatile int32_t x344 = 0;
	uint32_t t82 = 397068U;

	t82 = ((x341|(x342/x343))^x344);

	if (t82 != 4294934528U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x345 = -1;
	int32_t x346 = 31773;
	volatile int32_t x347 = -1;
	int32_t x348 = -1;
	volatile int32_t t83 = 785;

	t83 = ((x345|(x346/x347))^x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = INT64_MAX;
	int64_t x351 = INT64_MAX;
	int64_t x352 = INT64_MIN;
	volatile int64_t t84 = -97700708974384LL;

	t84 = ((x349|(x350/x351))^x352);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x354 = 6435883597136714LL;
	int8_t x355 = INT8_MAX;
	static int16_t x356 = INT16_MIN;

	t85 = ((x353|(x354/x355))^x356);

	if (t85 != -50676248781631LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x358 = INT8_MIN;
	int8_t x359 = 55;
	uint16_t x360 = 1U;
	volatile int32_t t86 = 0;

	t86 = ((x357|(x358/x359))^x360);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = -25782;
	int32_t x363 = INT32_MAX;
	volatile uint32_t x364 = 22U;
	uint32_t t87 = 3U;

	t87 = ((x361|(x362/x363))^x364);

	if (t87 != 2147483670U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 4U;
	volatile uint64_t x367 = 67853626335026LLU;
	volatile int16_t x368 = INT16_MIN;
	uint64_t t88 = 39847782248LLU;

	t88 = ((x365|(x366/x367))^x368);

	if (t88 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MAX;
	uint32_t x372 = 63957U;

	t89 = ((x369|(x370/x371))^x372);

	if (t89 != -9223372036854711849LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = 0;
	static uint8_t x375 = 47U;
	int64_t x376 = 2725485572LL;
	uint64_t t90 = 460871308LLU;

	t90 = ((x373|(x374/x375))^x376);

	if (t90 != 392483913810282957LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = 72524426U;
	int64_t x379 = -1308281595LL;

	t91 = ((x377|(x378/x379))^x380);

	if (t91 != 72524427LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x381 = 372U;
	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;

	t92 = ((x381|(x382/x383))^x384);

	if (t92 != -100448LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x385 = INT64_MIN;
	int64_t x386 = -1LL;
	int16_t x387 = INT16_MIN;
	volatile int64_t t93 = -33834115115141LL;

	t93 = ((x385|(x386/x387))^x388);

	if (t93 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x389 = INT64_MIN;
	static int64_t x390 = 7939589LL;
	int16_t x391 = INT16_MIN;
	volatile int64_t t94 = 60LL;

	t94 = ((x389|(x390/x391))^x392);

	if (t94 != -4294967055LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x393 = 3U;
	volatile uint64_t x394 = UINT64_MAX;
	uint64_t x395 = 28LLU;
	uint16_t x396 = UINT16_MAX;
	static volatile uint64_t t95 = 267784660319054818LLU;

	t95 = ((x393|(x394/x395))^x396);

	if (t95 != 658812288346797784LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x397 = 488U;
	static uint32_t x399 = 30480U;
	int64_t t96 = 1173LL;

	t96 = ((x397|(x398/x399))^x400);

	if (t96 != -555875732762459LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MIN;
	uint32_t x402 = 4556U;
	volatile int8_t x403 = -1;

	t97 = ((x401|(x402/x403))^x404);

	if (t97 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x406 = 16770340LLU;
	uint64_t x407 = 1LLU;
	int16_t x408 = INT16_MIN;
	uint64_t t98 = 208850501906LLU;

	t98 = ((x405|(x406/x407))^x408);

	if (t98 != 18446744073659245951LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x409 = 491510U;
	int64_t x412 = -1LL;
	volatile int64_t t99 = -107905657881132697LL;

	t99 = ((x409|(x410/x411))^x412);

	if (t99 != -4254072831LL) { NG(); } else { ; }
	
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

