#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 35U;
volatile int64_t x6 = 17935551583LL;
static int8_t x12 = 49;
volatile int64_t t2 = 0LL;
uint64_t x15 = 91363096974383LLU;
volatile uint64_t x16 = UINT64_MAX;
int16_t x24 = -1;
int32_t x25 = -56566;
int8_t x29 = INT8_MIN;
uint8_t x30 = 3U;
int64_t x33 = INT64_MIN;
volatile int32_t x37 = -1;
int16_t x38 = INT16_MIN;
int64_t x40 = INT64_MIN;
volatile uint8_t x41 = UINT8_MAX;
static int16_t x42 = INT16_MIN;
static volatile int16_t x44 = 454;
int8_t x45 = INT8_MIN;
volatile uint8_t x49 = 22U;
static uint32_t x50 = 29649551U;
uint64_t x53 = 95234930493993LLU;
static int32_t x54 = INT32_MIN;
int64_t x55 = INT64_MAX;
int16_t x57 = INT16_MIN;
int8_t x63 = -1;
int32_t t15 = 36951612;
int32_t x69 = INT32_MIN;
static int64_t x75 = 340914LL;
int8_t x76 = 62;
volatile int64_t t21 = 77150659671369LL;
volatile uint64_t x95 = 54LLU;
uint64_t x96 = 206LLU;
volatile uint64_t t22 = 3417422289556518703LLU;
int16_t x97 = INT16_MIN;
uint16_t x98 = UINT16_MAX;
int16_t x101 = INT16_MIN;
static volatile int32_t t24 = -7937861;
uint8_t x109 = 0U;
uint32_t t26 = 11512268U;
uint8_t x127 = UINT8_MAX;
volatile int16_t x131 = -1;
int16_t x135 = 6;
uint64_t t33 = 818164520424150210LLU;
static volatile int32_t t34 = -1966;
static volatile uint64_t x147 = 160463758254994405LLU;
volatile uint64_t t35 = 177117LLU;
static uint64_t x153 = UINT64_MAX;
int16_t x154 = -8316;
volatile uint64_t t36 = 18911738597579728LLU;
uint32_t x157 = 15U;
volatile uint16_t x160 = 8U;
int64_t x161 = INT64_MIN;
volatile uint64_t x164 = UINT64_MAX;
static int64_t x170 = 1519311485002318585LL;
volatile int8_t x172 = INT8_MIN;
static volatile int64_t t40 = 16038067503LL;
int64_t x175 = INT64_MIN;
int64_t t42 = -1005405LL;
volatile uint64_t t43 = 146LLU;
static int32_t x188 = 3993;
int16_t x189 = 211;
int32_t x190 = INT32_MAX;
int32_t x191 = INT32_MIN;
int8_t x196 = 0;
uint32_t x197 = 2U;
volatile int8_t x198 = INT8_MIN;
int8_t x201 = -1;
int32_t x212 = 193378626;
int32_t x215 = 1131906;
uint32_t x217 = UINT32_MAX;
int32_t x221 = INT32_MIN;
uint16_t x225 = 4889U;
int64_t x228 = INT64_MIN;
uint8_t x229 = 37U;
int16_t x230 = INT16_MAX;
volatile int8_t x232 = 0;
volatile int32_t t55 = 425476224;
int8_t x235 = -4;
int8_t x238 = INT8_MIN;
int64_t x243 = INT64_MAX;
int64_t x246 = INT64_MAX;
uint8_t x248 = UINT8_MAX;
int8_t x253 = -1;
uint64_t x255 = 2914296322088792848LLU;
uint64_t x272 = 56567LLU;
int32_t x284 = -14;
uint64_t t67 = 4947254LLU;
volatile int16_t x290 = INT16_MIN;
int8_t x294 = -1;
volatile int32_t x298 = INT32_MAX;
uint8_t x310 = 35U;
uint64_t x312 = 13456640887515LLU;
int64_t x317 = INT64_MAX;
volatile uint32_t x319 = UINT32_MAX;
uint8_t x325 = UINT8_MAX;
int32_t x327 = -1;
static uint64_t x339 = UINT64_MAX;
int64_t x340 = INT64_MAX;
int64_t x356 = INT64_MIN;
volatile int64_t t84 = -436288891623597LL;
int16_t x357 = INT16_MAX;
volatile uint64_t t86 = 277779002452369581LLU;
volatile uint16_t x365 = 810U;
volatile uint8_t x366 = 3U;
int64_t x369 = -1LL;
int16_t x370 = -1;
static int8_t x374 = INT8_MIN;
volatile uint64_t x375 = 14LLU;
int32_t x386 = INT32_MAX;
static uint32_t x389 = UINT32_MAX;
uint32_t x390 = UINT32_MAX;
uint32_t x392 = 73361U;
int16_t x394 = -10;
int16_t x395 = INT16_MAX;
uint32_t x400 = 1280013U;
int64_t x408 = 1455721199530085750LL;
int8_t x416 = -2;
int64_t x421 = INT64_MAX;


void f0(void) {
	static int8_t x1 = 62;
	static int16_t x3 = INT16_MAX;
	static volatile int16_t x4 = -1;
	static volatile int32_t t0 = 988;

	t0 = (x1&((x2/x3)^x4));

	if (t0 != 62) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	int8_t x7 = -1;
	static int8_t x8 = INT8_MIN;
	int64_t t1 = 897670427594580LL;

	t1 = (x5&((x6/x7)^x8));

	if (t1 != 17179869184LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -24;
	volatile int64_t x10 = INT64_MIN;
	uint32_t x11 = 106U;

	t2 = (x9&((x10/x11)^x12));

	if (t2 != -87012943743913016LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 3412U;
	int16_t x14 = INT16_MIN;
	uint64_t t3 = 362408182218480LLU;

	t3 = (x13&((x14/x15)^x16));

	if (t3 != 2372LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = 14902937192141270LLU;
	static uint64_t x19 = 30788444LLU;
	int64_t x20 = INT64_MIN;
	uint64_t t4 = 85LLU;

	t4 = (x17&((x18/x19)^x20));

	if (t4 != 9223372037338819015LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	static int32_t x22 = INT32_MIN;
	static int32_t x23 = -6;
	volatile int32_t t5 = 554;

	t5 = (x21&((x22/x23)^x24));

	if (t5 != 42) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 28U;
	uint8_t x27 = 2U;
	int8_t x28 = 1;
	int32_t t6 = 15;

	t6 = (x25&((x26/x27)^x28));

	if (t6 != 10) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x31 = UINT16_MAX;
	static volatile uint16_t x32 = UINT16_MAX;
	static volatile int32_t t7 = -21;

	t7 = (x29&((x30/x31)^x32));

	if (t7 != 65408) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 11;
	uint32_t x35 = 9568608U;
	int64_t x36 = INT64_MIN;
	int64_t t8 = INT64_MIN;

	t8 = (x33&((x34/x35)^x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x39 = 90U;
	volatile int64_t t9 = -175400396179LL;

	t9 = (x37&((x38/x39)^x40));

	if (t9 != 9223372036854775444LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x43 = -1;
	volatile int32_t t10 = -225;

	t10 = (x41&((x42/x43)^x44));

	if (t10 != 198) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -187363728704LL;
	uint32_t x47 = 5061U;
	int8_t x48 = INT8_MAX;
	int64_t t11 = 907384128613776869LL;

	t11 = (x45&((x46/x47)^x48));

	if (t11 != -37021184LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x51 = 106U;
	int16_t x52 = INT16_MIN;
	uint32_t t12 = 163U;

	t12 = (x49&((x50/x51)^x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x56 = 20152U;
	uint64_t t13 = 158584813753386786LLU;

	t13 = (x53&((x54/x55)^x56));

	if (t13 != 18984LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x58 = -1;
	int8_t x59 = -1;
	int32_t x60 = 38;
	int32_t t14 = 405400764;

	t14 = (x57&((x58/x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	static volatile uint16_t x62 = 17U;
	int32_t x64 = 108512;

	t15 = (x61&((x62/x63)^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 583380711477LLU;
	int64_t x66 = -261386850131388LL;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = 1210125475275LLU;
	uint64_t t16 = 16860811LLU;

	t16 = (x65&((x66/x67)^x68));

	if (t16 != 560830949424LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x70 = UINT64_MAX;
	volatile uint16_t x71 = 10602U;
	int32_t x72 = -26919;
	volatile uint64_t t17 = 4182805929342LLU;

	t17 = (x69&((x70/x71)^x72));

	if (t17 != 18445004141655752704LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = INT8_MIN;
	volatile int64_t x74 = -78036201LL;
	volatile int64_t t18 = 131015355LL;

	t18 = (x73&((x74/x75)^x76));

	if (t18 != -256LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 3946U;
	static int32_t x82 = -1;
	int32_t x83 = INT32_MAX;
	static uint64_t x84 = 8182702979946LLU;
	volatile uint64_t t19 = 8070177982525LLU;

	t19 = (x81&((x82/x83)^x84));

	if (t19 != 2922LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = 2625968061273LL;
	uint64_t x86 = 31020647638210LLU;
	uint8_t x87 = 2U;
	volatile int16_t x88 = INT16_MIN;
	volatile uint64_t t20 = 17LLU;

	t20 = (x85&((x86/x87)^x88));

	if (t20 != 412864262721LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 112LL;
	int16_t x90 = -14387;
	int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MAX;

	t21 = (x89&((x90/x91)^x92));

	if (t21 != 112LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;

	t22 = (x93&((x94/x95)^x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x99 = UINT32_MAX;
	volatile int64_t x100 = INT64_MAX;
	int64_t t23 = 1155346LL;

	t23 = (x97&((x98/x99)^x100));

	if (t23 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x102 = INT16_MIN;
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = INT8_MIN;

	t24 = (x101&((x102/x103)^x104));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 4U;
	int64_t x106 = 40593533235984564LL;
	int64_t x107 = -1LL;
	int64_t x108 = INT64_MAX;
	int64_t t25 = 1512989LL;

	t25 = (x105&((x106/x107)^x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x110 = UINT32_MAX;
	int32_t x111 = -328669;
	static int32_t x112 = INT32_MAX;

	t26 = (x109&((x110/x111)^x112));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -10779972358720LL;
	static uint64_t x114 = 4168713668145LLU;
	static int16_t x115 = -156;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t27 = 1221411777LLU;

	t27 = (x113&((x114/x115)^x116));

	if (t27 != 18446733293737181184LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = 69;
	int32_t x118 = 4;
	int8_t x119 = 5;
	int64_t x120 = -1LL;
	static int64_t t28 = 200031155LL;

	t28 = (x117&((x118/x119)^x120));

	if (t28 != 69LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	int8_t x122 = INT8_MIN;
	uint16_t x123 = 1106U;
	int16_t x124 = -4;
	volatile int32_t t29 = -35;

	t29 = (x121&((x122/x123)^x124));

	if (t29 != 32764) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x126 = INT32_MIN;
	uint16_t x128 = 1U;
	uint64_t t30 = 224229102654450752LLU;

	t30 = (x125&((x126/x127)^x128));

	if (t30 != 18446744073701130113LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 154U;
	uint16_t x130 = 13U;
	uint8_t x132 = 4U;
	int32_t t31 = 2439078;

	t31 = (x129&((x130/x131)^x132));

	if (t31 != 146) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -3106;
	uint16_t x134 = 1U;
	static int32_t x136 = -1;
	int32_t t32 = 53;

	t32 = (x133&((x134/x135)^x136));

	if (t32 != -3106) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = -1;
	int8_t x139 = -19;
	volatile uint16_t x140 = 9U;

	t33 = (x137&((x138/x139)^x140));

	if (t33 != 9LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MIN;
	int16_t x144 = -5177;

	t34 = (x141&((x142/x143)^x144));

	if (t34 != -16782464) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = INT8_MIN;
	uint16_t x146 = 1607U;
	int8_t x148 = INT8_MIN;

	t35 = (x145&((x146/x147)^x148));

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x155 = 11083982525809114LLU;
	int32_t x156 = -5604;

	t36 = (x153&((x154/x155)^x156));

	if (t36 != 18446744073709546652LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = INT8_MAX;
	uint8_t x159 = 9U;
	uint32_t t37 = 2398U;

	t37 = (x157&((x158/x159)^x160));

	if (t37 != 6U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x162 = UINT16_MAX;
	uint32_t x163 = UINT32_MAX;
	volatile uint64_t t38 = 53240277389058LLU;

	t38 = (x161&((x162/x163)^x164));

	if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = UINT16_MAX;
	static int32_t x166 = INT32_MIN;
	int32_t x167 = 83;
	uint16_t x168 = 25127U;
	static int32_t t39 = 383865;

	t39 = (x165&((x166/x167)^x168));

	if (t39 != 22103) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = 4LL;
	int8_t x171 = 12;

	t40 = (x169&((x170/x171)^x172));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	int16_t x174 = INT16_MAX;
	volatile int32_t x176 = INT32_MIN;
	static volatile int64_t t41 = -370LL;

	t41 = (x173&((x174/x175)^x176));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = 90;
	int32_t x178 = INT32_MAX;
	static int64_t x179 = -70506335343429LL;
	int32_t x180 = 60;

	t42 = (x177&((x178/x179)^x180));

	if (t42 != 24LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MAX;
	uint32_t x182 = UINT32_MAX;
	static int64_t x183 = -1LL;
	uint64_t x184 = UINT64_MAX;

	t43 = (x181&((x182/x183)^x184));

	if (t43 != 126LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x185 = -184;
	static int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MIN;
	volatile int64_t t44 = -4502232992697543LL;

	t44 = (x185&((x186/x187)^x188));

	if (t44 != 4294971144LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x192 = UINT8_MAX;
	int32_t t45 = -2040997;

	t45 = (x189&((x190/x191)^x192));

	if (t45 != 211) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = -1;
	int32_t x194 = 0;
	volatile uint8_t x195 = 102U;
	volatile int32_t t46 = -34;

	t46 = (x193&((x194/x195)^x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x199 = 3390838586181LLU;
	static volatile int64_t x200 = INT64_MIN;
	volatile uint64_t t47 = 267389322369LLU;

	t47 = (x197&((x198/x199)^x200));

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x202 = INT32_MAX;
	int64_t x203 = INT64_MIN;
	static int16_t x204 = 3;
	static int64_t t48 = 5289807791356LL;

	t48 = (x201&((x202/x203)^x204));

	if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MAX;
	static int16_t x208 = -1;
	volatile int64_t t49 = -2LL;

	t49 = (x205&((x206/x207)^x208));

	if (t49 != 281483566907399LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = 51929521156014LL;
	volatile int16_t x211 = -29;
	static int64_t t50 = -208033LL;

	t50 = (x209&((x210/x211)^x212));

	if (t50 != -1790597234560LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x213 = -30;
	int32_t x214 = -1;
	int16_t x216 = 1881;
	int32_t t51 = -19389;

	t51 = (x213&((x214/x215)^x216));

	if (t51 != 1856) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MAX;
	int64_t x220 = INT64_MIN;
	int64_t t52 = -37528348826627LL;

	t52 = (x217&((x218/x219)^x220));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x222 = 2U;
	static int32_t x223 = INT32_MIN;
	static int16_t x224 = 439;
	volatile uint32_t t53 = 118713270U;

	t53 = (x221&((x222/x223)^x224));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x226 = 19688982;
	static int16_t x227 = -49;
	int64_t t54 = -1521848LL;

	t54 = (x225&((x226/x227)^x228));

	if (t54 != 4617LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x231 = INT16_MAX;

	t55 = (x229&((x230/x231)^x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x233 = INT8_MAX;
	volatile int64_t x234 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	volatile int64_t t56 = 34086801417310LL;

	t56 = (x233&((x234/x235)^x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x237 = INT64_MAX;
	volatile int16_t x239 = 54;
	int16_t x240 = 3;
	static volatile int64_t t57 = -1912741676856117895LL;

	t57 = (x237&((x238/x239)^x240));

	if (t57 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	volatile int32_t x242 = 1;
	volatile uint32_t x244 = UINT32_MAX;
	volatile int64_t t58 = -427362525LL;

	t58 = (x241&((x242/x243)^x244));

	if (t58 != 4294967168LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MAX;
	int8_t x247 = INT8_MIN;
	volatile int64_t t59 = -3334232747177LL;

	t59 = (x245&((x246/x247)^x248));

	if (t59 != 9151314442816848126LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x249 = 7U;
	int16_t x250 = 8212;
	volatile int16_t x251 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;
	volatile uint32_t t60 = 423008934U;

	t60 = (x249&((x250/x251)^x252));

	if (t60 != 7U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x254 = UINT8_MAX;
	volatile int64_t x256 = INT64_MIN;
	uint64_t t61 = 2278144625178LLU;

	t61 = (x253&((x254/x255)^x256));

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MAX;
	int32_t x258 = INT32_MAX;
	static int8_t x259 = 2;
	uint16_t x260 = 1U;
	int32_t t62 = 7397;

	t62 = (x257&((x258/x259)^x260));

	if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = INT16_MAX;
	int16_t x263 = 47;
	volatile int16_t x264 = -1;
	static int32_t t63 = 1667;

	t63 = (x261&((x262/x263)^x264));

	if (t63 != -768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile uint64_t x266 = 7775200095811464184LLU;
	uint64_t x267 = 230LLU;
	volatile int16_t x268 = INT16_MIN;
	static volatile uint64_t t64 = 27792536996257029LLU;

	t64 = (x265&((x266/x267)^x268));

	if (t64 != 18412938855901659136LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x269 = 1;
	volatile uint32_t x270 = 68459U;
	uint64_t x271 = 308335678719734645LLU;
	uint64_t t65 = 13LLU;

	t65 = (x269&((x270/x271)^x272));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = INT8_MIN;
	static int32_t x279 = INT32_MIN;
	int16_t x280 = -1;
	int32_t t66 = INT32_MAX;

	t66 = (x277&((x278/x279)^x280));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	uint64_t x283 = 27040LLU;

	t67 = (x281&((x282/x283)^x284));

	if (t67 != 18446402972672655360LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = -1LL;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x285&((x286/x287)^x288));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -1;
	int32_t x291 = INT32_MAX;
	static int64_t x292 = INT64_MAX;
	int64_t t69 = INT64_MAX;

	t69 = (x289&((x290/x291)^x292));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = -195;
	static uint16_t x295 = 254U;
	int8_t x296 = -1;
	volatile int32_t t70 = 317;

	t70 = (x293&((x294/x295)^x296));

	if (t70 != -195) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x297 = UINT8_MAX;
	uint32_t x299 = 40513U;
	int8_t x300 = INT8_MIN;
	uint32_t t71 = 30U;

	t71 = (x297&((x298/x299)^x300));

	if (t71 != 143U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = 83U;
	static int64_t x302 = -1LL;
	int8_t x303 = INT8_MAX;
	volatile int8_t x304 = -27;
	volatile int64_t t72 = 1216349982753969LL;

	t72 = (x301&((x302/x303)^x304));

	if (t72 != 65LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x305 = -1LL;
	uint64_t x306 = 351586636865084307LLU;
	volatile int8_t x307 = INT8_MIN;
	volatile int64_t x308 = INT64_MIN;
	static volatile uint64_t t73 = 7094161919711LLU;

	t73 = (x305&((x306/x307)^x308));

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x309 = 555386150U;
	uint8_t x311 = UINT8_MAX;
	uint64_t t74 = 241789236236LLU;

	t74 = (x309&((x310/x311)^x312));

	if (t74 != 557058LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x313 = 6U;
	static uint8_t x314 = 3U;
	int16_t x315 = -51;
	int64_t x316 = 248387851148797078LL;
	int64_t t75 = 14078251LL;

	t75 = (x313&((x314/x315)^x316));

	if (t75 != 6LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x318 = INT32_MAX;
	uint8_t x320 = 34U;
	int64_t t76 = 293790579LL;

	t76 = (x317&((x318/x319)^x320));

	if (t76 != 34LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = -1;
	int16_t x322 = -1;
	volatile int32_t x323 = -1;
	volatile int64_t x324 = INT64_MIN;
	static volatile int64_t t77 = 471LL;

	t77 = (x321&((x322/x323)^x324));

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x326 = -6369;
	int16_t x328 = INT16_MAX;
	int32_t t78 = -87732892;

	t78 = (x325&((x326/x327)^x328));

	if (t78 != 30) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x329 = INT8_MIN;
	int16_t x330 = 2000;
	static volatile uint16_t x331 = UINT16_MAX;
	static uint64_t x332 = 862LLU;
	volatile uint64_t t79 = 472546585997082454LLU;

	t79 = (x329&((x330/x331)^x332));

	if (t79 != 768LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = -1;
	uint16_t x334 = 14941U;
	uint32_t x335 = UINT32_MAX;
	int64_t x336 = INT64_MIN;
	static volatile int64_t t80 = INT64_MIN;

	t80 = (x333&((x334/x335)^x336));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x337 = 3U;
	int16_t x338 = INT16_MIN;
	uint64_t t81 = 81LLU;

	t81 = (x337&((x338/x339)^x340));

	if (t81 != 3LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x345 = INT64_MIN;
	volatile int64_t x346 = INT64_MAX;
	uint32_t x347 = 70U;
	int16_t x348 = INT16_MIN;
	volatile int64_t t82 = INT64_MIN;

	t82 = (x345&((x346/x347)^x348));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	volatile int8_t x350 = INT8_MIN;
	int64_t x351 = 846596879273550494LL;
	uint64_t x352 = 46LLU;
	uint64_t t83 = 2LLU;

	t83 = (x349&((x350/x351)^x352));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x353 = 1853728260580LL;
	uint16_t x354 = 723U;
	volatile int8_t x355 = 2;

	t84 = (x353&((x354/x355)^x356));

	if (t84 != 352LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x358 = 22U;
	static volatile int64_t x359 = 79956687665780LL;
	uint32_t x360 = 738568U;
	static int64_t t85 = 994635161LL;

	t85 = (x357&((x358/x359)^x360));

	if (t85 != 17672LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x361 = UINT16_MAX;
	static int8_t x362 = 5;
	int64_t x363 = -1LL;
	static uint64_t x364 = 3398393LLU;

	t86 = (x361&((x362/x363)^x364));

	if (t86 != 9474LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x367 = INT8_MAX;
	volatile uint8_t x368 = 61U;
	volatile int32_t t87 = -25785;

	t87 = (x365&((x366/x367)^x368));

	if (t87 != 40) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x371 = 27739U;
	uint8_t x372 = 11U;
	int64_t t88 = 290LL;

	t88 = (x369&((x370/x371)^x372));

	if (t88 != 11LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 403U;
	uint32_t x376 = 193U;
	volatile uint64_t t89 = 3147901LLU;

	t89 = (x373&((x374/x375)^x376));

	if (t89 != 129LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x381 = UINT8_MAX;
	uint32_t x382 = 3224031U;
	static uint64_t x383 = UINT64_MAX;
	volatile int32_t x384 = INT32_MAX;
	uint64_t t90 = 2818740551LLU;

	t90 = (x381&((x382/x383)^x384));

	if (t90 != 255LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x385 = INT16_MAX;
	static uint64_t x387 = UINT64_MAX;
	int8_t x388 = -52;
	static volatile uint64_t t91 = 33153990000LLU;

	t91 = (x385&((x386/x387)^x388));

	if (t91 != 32716LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x391 = 19579809LLU;
	static volatile uint64_t t92 = 426666680523LLU;

	t92 = (x389&((x390/x391)^x392));

	if (t92 != 73290LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = 1152LL;
	int16_t x396 = INT16_MIN;
	volatile int64_t t93 = 936941370847639979LL;

	t93 = (x393&((x394/x395)^x396));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x397 = 8892U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = -1LL;
	static volatile int64_t t94 = -14003998LL;

	t94 = (x397&((x398/x399)^x400));

	if (t94 != 12LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = 11155;
	static int32_t x402 = INT32_MAX;
	static int8_t x403 = -1;
	int16_t x404 = -1;
	int32_t t95 = -1;

	t95 = (x401&((x402/x403)^x404));

	if (t95 != 11154) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x405 = INT16_MAX;
	uint32_t x406 = UINT32_MAX;
	int8_t x407 = -1;
	static volatile int64_t t96 = -83673557506LL;

	t96 = (x405&((x406/x407)^x408));

	if (t96 != 3447LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x413 = INT64_MAX;
	int16_t x414 = 834;
	volatile int16_t x415 = -612;
	volatile int64_t t97 = -125777108455813548LL;

	t97 = (x413&((x414/x415)^x416));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x417 = UINT32_MAX;
	uint8_t x418 = 1U;
	uint8_t x419 = UINT8_MAX;
	uint64_t x420 = 522397592212425181LLU;
	uint64_t t98 = 140978LLU;

	t98 = (x417&((x418/x419)^x420));

	if (t98 != 2740406749LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x422 = 13112U;
	int16_t x423 = INT16_MIN;
	int8_t x424 = -1;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x421&((x422/x423)^x424));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

