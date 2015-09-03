#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 22468U;
static volatile int32_t t5 = -5672;
static int8_t x25 = INT8_MAX;
uint64_t x26 = 1LLU;
uint64_t x27 = UINT64_MAX;
static int64_t x29 = 326450087LL;
volatile int8_t x32 = -1;
int32_t t8 = 127012;
static int8_t x38 = INT8_MIN;
volatile int16_t x45 = INT16_MIN;
int8_t x48 = -1;
static uint64_t x51 = UINT64_MAX;
volatile int64_t x65 = -1LL;
uint8_t x68 = 3U;
int32_t x75 = INT32_MAX;
static volatile int32_t x77 = INT32_MAX;
int64_t x78 = INT64_MAX;
uint16_t x79 = 25U;
uint16_t x83 = 11165U;
int8_t x84 = -13;
static volatile int8_t x87 = INT8_MAX;
int8_t x88 = INT8_MAX;
int32_t x90 = INT32_MAX;
int16_t x96 = INT16_MAX;
volatile uint16_t x98 = 3U;
int8_t x111 = -1;
int8_t x114 = INT8_MIN;
static int8_t x115 = 2;
int64_t t29 = -310965080324065LL;
static uint16_t x124 = UINT16_MAX;
volatile int32_t t30 = -77359564;
static int8_t x131 = -1;
volatile int32_t t32 = 32176;
static int32_t t34 = -5128;
int8_t x141 = -1;
int64_t x143 = 3LL;
static volatile int32_t x147 = INT32_MIN;
int64_t x148 = INT64_MIN;
static uint8_t x149 = 1U;
static uint64_t x150 = 11447LLU;
int32_t t37 = -2736264;
uint64_t x154 = UINT64_MAX;
volatile int32_t x155 = 408;
volatile int16_t x157 = INT16_MAX;
uint16_t x158 = UINT16_MAX;
int32_t x159 = 654;
volatile int16_t x162 = INT16_MIN;
int8_t x164 = -1;
int32_t x166 = INT32_MIN;
volatile uint16_t x168 = 0U;
int32_t x171 = 3938867;
int32_t t42 = INT32_MIN;
int64_t t43 = INT64_MAX;
int8_t x180 = INT8_MIN;
static int32_t t45 = 7528616;
int16_t x186 = -151;
uint32_t x191 = UINT32_MAX;
volatile int64_t t48 = INT64_MAX;
uint64_t x198 = UINT64_MAX;
volatile int64_t x199 = INT64_MIN;
uint8_t x200 = UINT8_MAX;
int32_t x210 = 1530;
uint8_t x211 = 25U;
volatile int64_t x214 = INT64_MAX;
volatile int32_t x216 = -90160;
volatile int32_t t53 = 0;
volatile uint64_t x218 = 996860LLU;
volatile int64_t x229 = INT64_MIN;
int32_t x234 = INT32_MIN;
uint32_t x236 = 5U;
int32_t x244 = INT32_MAX;
uint64_t x252 = UINT64_MAX;
uint64_t t62 = UINT64_MAX;
int16_t x255 = INT16_MIN;
volatile uint32_t t63 = 34589U;
int64_t x262 = INT64_MIN;
volatile int16_t x266 = -38;
int8_t x276 = INT8_MAX;
static uint16_t x277 = 11U;
static int32_t t71 = -3377;
volatile int32_t x291 = INT32_MIN;
volatile uint16_t x296 = 46U;
int64_t x304 = INT64_MAX;
volatile int64_t t75 = INT64_MAX;
int64_t x310 = 322903289LL;
volatile int8_t x311 = INT8_MIN;
int32_t x316 = INT32_MIN;
uint16_t x333 = UINT16_MAX;
int32_t x339 = -127416342;
int8_t x340 = INT8_MAX;
volatile int32_t t84 = -45229;
volatile uint8_t x348 = UINT8_MAX;
volatile int32_t t86 = -35309;
uint64_t x353 = 17812LLU;
int32_t x355 = 192241332;
uint8_t x356 = 56U;
volatile uint16_t x362 = 0U;
volatile int32_t t90 = 232;
uint16_t x366 = UINT16_MAX;
int32_t x368 = 30;
int64_t x370 = -23LL;
static int8_t x381 = INT8_MIN;
volatile int32_t x382 = 0;
volatile int16_t x384 = INT16_MIN;
volatile int32_t t95 = 8721373;
static uint64_t x390 = 828LLU;
int64_t x394 = INT64_MIN;
uint8_t x396 = UINT8_MAX;
uint64_t x397 = UINT64_MAX;
int32_t t99 = 0;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -1083649;

	t0 = ((x1==(x2<x3))^x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile int32_t x6 = INT32_MAX;
	int8_t x7 = INT8_MIN;
	volatile uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x5==(x6<x7))^x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int16_t x10 = INT16_MIN;
	uint16_t x11 = UINT16_MAX;
	static uint16_t x12 = 130U;
	volatile int32_t t2 = -37;

	t2 = ((x9==(x10<x11))^x12);

	if (t2 != 130) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -54;
	uint8_t x14 = 2U;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 186018706;

	t3 = ((x13==(x14<x15))^x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 3U;
	int16_t x18 = -1;
	int16_t x19 = -1;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = -3618;

	t4 = ((x17==(x18<x19))^x20);

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -55;
	static int64_t x22 = -1LL;
	uint64_t x23 = UINT64_MAX;
	volatile int32_t x24 = -3684;

	t5 = ((x21==(x22<x23))^x24);

	if (t5 != -3684) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = -469;

	t6 = ((x25==(x26<x27))^x28);

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	static int64_t x31 = INT64_MIN;
	int32_t t7 = -5551476;

	t7 = ((x29==(x30<x31))^x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -41;
	volatile int8_t x34 = INT8_MIN;
	volatile int8_t x35 = INT8_MAX;
	int32_t x36 = -1;

	t8 = ((x33==(x34<x35))^x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	uint64_t x39 = 6843855LLU;
	uint16_t x40 = 1U;
	static int32_t t9 = 1195335;

	t9 = ((x37==(x38<x39))^x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 1916369341116705550LLU;
	uint8_t x43 = 52U;
	static uint32_t x44 = 1202377U;
	uint32_t t10 = 543767140U;

	t10 = ((x41==(x42<x43))^x44);

	if (t10 != 1202377U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x46 = INT32_MIN;
	int64_t x47 = 1LL;
	volatile int32_t t11 = 1132;

	t11 = ((x45==(x46<x47))^x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 7U;
	int8_t x50 = -1;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -1;

	t12 = ((x49==(x50<x51))^x52);

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MIN;
	int64_t x55 = 168LL;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 351585;

	t13 = ((x53==(x54<x55))^x56);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile int64_t x58 = INT64_MIN;
	uint32_t x59 = 66121686U;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -22;

	t14 = ((x57==(x58<x59))^x60);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int16_t x62 = 1000;
	int32_t x63 = INT32_MAX;
	int16_t x64 = 0;
	int32_t t15 = 979;

	t15 = ((x61==(x62<x63))^x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 205U;
	int64_t x67 = INT64_MIN;
	int32_t t16 = 25;

	t16 = ((x65==(x66<x67))^x68);

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	static uint16_t x70 = UINT16_MAX;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = INT32_MAX;

	t17 = ((x69==(x70<x71))^x72);

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int8_t x74 = 1;
	static int32_t x76 = 136;
	volatile int32_t t18 = -791;

	t18 = ((x73==(x74<x75))^x76);

	if (t18 != 136) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x80 = 448;
	volatile int32_t t19 = 199622;

	t19 = ((x77==(x78<x79))^x80);

	if (t19 != 448) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x81 = 7U;
	int8_t x82 = -1;
	volatile int32_t t20 = -419147;

	t20 = ((x81==(x82<x83))^x84);

	if (t20 != -13) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x86 = -7;
	volatile int32_t t21 = -1;

	t21 = ((x85==(x86<x87))^x88);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	volatile int16_t x91 = -3279;
	uint8_t x92 = 0U;
	volatile int32_t t22 = 4815777;

	t22 = ((x89==(x90<x91))^x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile int64_t x94 = 26059LL;
	static int64_t x95 = 260222634137949LL;
	int32_t t23 = -14;

	t23 = ((x93==(x94<x95))^x96);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	volatile int64_t x99 = -1LL;
	static uint64_t x100 = 6810615161270709809LLU;
	static uint64_t t24 = 635434377921LLU;

	t24 = ((x97==(x98<x99))^x100);

	if (t24 != 6810615161270709809LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = ((x101==(x102<x103))^x104);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -101;
	uint8_t x106 = 4U;
	int64_t x107 = INT64_MIN;
	int16_t x108 = -1;
	static int32_t t26 = 220047273;

	t26 = ((x105==(x106<x107))^x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	volatile int32_t x110 = INT32_MIN;
	int8_t x112 = 38;
	static int32_t t27 = 1;

	t27 = ((x109==(x110<x111))^x112);

	if (t27 != 38) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	uint8_t x116 = 36U;
	int32_t t28 = 64911;

	t28 = ((x113==(x114<x115))^x116);

	if (t28 != 36) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1LL;
	static volatile int64_t x118 = INT64_MIN;
	volatile uint64_t x119 = UINT64_MAX;
	volatile int64_t x120 = INT64_MIN;

	t29 = ((x117==(x118<x119))^x120);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static uint64_t x122 = 533LLU;
	int64_t x123 = INT64_MIN;

	t30 = ((x121==(x122<x123))^x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 3579;
	uint16_t x126 = 106U;
	uint32_t x127 = 119U;
	int32_t x128 = INT32_MAX;
	int32_t t31 = INT32_MAX;

	t31 = ((x125==(x126<x127))^x128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int32_t x130 = INT32_MAX;
	static int8_t x132 = INT8_MIN;

	t32 = ((x129==(x130<x131))^x132);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 1742LLU;
	int64_t x134 = -1LL;
	int32_t x135 = INT32_MAX;
	int64_t x136 = -1LL;
	int64_t t33 = 13560915LL;

	t33 = ((x133==(x134<x135))^x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -3;
	int8_t x138 = -17;
	uint32_t x139 = UINT32_MAX;
	int16_t x140 = INT16_MAX;

	t34 = ((x137==(x138<x139))^x140);

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x142 = -1;
	volatile int16_t x144 = INT16_MIN;
	static int32_t t35 = 49503;

	t35 = ((x141==(x142<x143))^x144);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int32_t x146 = INT32_MIN;
	int64_t t36 = INT64_MIN;

	t36 = ((x145==(x146<x147))^x148);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x151 = 5944LLU;
	static volatile int8_t x152 = 58;

	t37 = ((x149==(x150<x151))^x152);

	if (t37 != 58) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 0U;
	uint8_t x156 = 3U;
	int32_t t38 = -7;

	t38 = ((x153==(x154<x155))^x156);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x160 = -1;
	volatile int32_t t39 = 12868;

	t39 = ((x157==(x158<x159))^x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int32_t x163 = INT32_MIN;
	volatile int32_t t40 = -48;

	t40 = ((x161==(x162<x163))^x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -57678284;
	uint32_t x167 = 3182600U;
	volatile int32_t t41 = -1671327;

	t41 = ((x165==(x166<x167))^x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	uint32_t x170 = 3657U;
	static int32_t x172 = INT32_MIN;

	t42 = ((x169==(x170<x171))^x172);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	int32_t x174 = 464545;
	int16_t x175 = -2;
	int64_t x176 = INT64_MAX;

	t43 = ((x173==(x174<x175))^x176);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -2;
	static int8_t x179 = INT8_MAX;
	volatile int32_t t44 = -220376;

	t44 = ((x177==(x178<x179))^x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = 37115U;
	uint32_t x182 = 1754U;
	volatile uint16_t x183 = UINT16_MAX;
	uint8_t x184 = 22U;

	t45 = ((x181==(x182<x183))^x184);

	if (t45 != 22) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 15524U;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MAX;
	volatile int64_t t46 = INT64_MAX;

	t46 = ((x185==(x186<x187))^x188);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	uint8_t x190 = 1U;
	int16_t x192 = INT16_MIN;
	int32_t t47 = 4157558;

	t47 = ((x189==(x190<x191))^x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int8_t x194 = -1;
	static int32_t x195 = 22464829;
	int64_t x196 = INT64_MAX;

	t48 = ((x193==(x194<x195))^x196);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	volatile int32_t t49 = -26133527;

	t49 = ((x197==(x198<x199))^x200);

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	int16_t x202 = -1;
	uint8_t x203 = 17U;
	int8_t x204 = 1;
	volatile int32_t t50 = 614503903;

	t50 = ((x201==(x202<x203))^x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	volatile int64_t x206 = 12205174522LL;
	int32_t x207 = INT32_MIN;
	static int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 451037;

	t51 = ((x205==(x206<x207))^x208);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -47;

	t52 = ((x209==(x210<x211))^x212);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int8_t x215 = 25;

	t53 = ((x213==(x214<x215))^x216);

	if (t53 != -90160) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 13766U;
	uint16_t x219 = 13U;
	int64_t x220 = -1608881LL;
	volatile int64_t t54 = -2890602147812LL;

	t54 = ((x217==(x218<x219))^x220);

	if (t54 != -1608881LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	uint8_t x222 = UINT8_MAX;
	int64_t x223 = 124482765LL;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t55 = 64136904;

	t55 = ((x221==(x222<x223))^x224);

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = ((x225==(x226<x227))^x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = -1;
	static int64_t x231 = -3726849883242978LL;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 101448493;

	t57 = ((x229==(x230<x231))^x232);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 1071220U;
	volatile int64_t x235 = INT64_MAX;
	uint32_t t58 = 805U;

	t58 = ((x233==(x234<x235))^x236);

	if (t58 != 5U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 4016U;
	volatile int16_t x238 = INT16_MIN;
	static int64_t x239 = -141LL;
	int64_t x240 = INT64_MAX;
	volatile int64_t t59 = INT64_MAX;

	t59 = ((x237==(x238<x239))^x240);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	volatile int8_t x242 = -1;
	int64_t x243 = -1LL;
	volatile int32_t t60 = INT32_MAX;

	t60 = ((x241==(x242<x243))^x244);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	uint32_t x246 = 325U;
	volatile int16_t x247 = 6955;
	int64_t x248 = INT64_MAX;
	volatile int64_t t61 = INT64_MAX;

	t61 = ((x245==(x246<x247))^x248);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	uint8_t x250 = 0U;
	static volatile uint8_t x251 = 1U;

	t62 = ((x249==(x250<x251))^x252);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 56913905298LLU;
	volatile int16_t x254 = INT16_MIN;
	uint32_t x256 = 124231U;

	t63 = ((x253==(x254<x255))^x256);

	if (t63 != 124231U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -51;
	int8_t x258 = -1;
	int64_t x259 = -1LL;
	static uint8_t x260 = 16U;
	int32_t t64 = 188;

	t64 = ((x257==(x258<x259))^x260);

	if (t64 != 16) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int64_t x263 = -1LL;
	volatile int16_t x264 = -1;
	static volatile int32_t t65 = 24942;

	t65 = ((x261==(x262<x263))^x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 350559U;
	int8_t x267 = INT8_MIN;
	volatile int16_t x268 = -1;
	static volatile int32_t t66 = 1988525;

	t66 = ((x265==(x266<x267))^x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MAX;
	uint16_t x271 = 97U;
	volatile int64_t x272 = -1LL;
	volatile int64_t t67 = 117457789357817LL;

	t67 = ((x269==(x270<x271))^x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int8_t x274 = -1;
	int32_t x275 = -4;
	volatile int32_t t68 = 12433;

	t68 = ((x273==(x274<x275))^x276);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	static int32_t x279 = 606743;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t69 = 121352280;

	t69 = ((x277==(x278<x279))^x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = 5021196254483436LL;
	uint64_t x282 = 2826111LLU;
	int16_t x283 = INT16_MIN;
	int64_t x284 = 3753LL;
	int64_t t70 = 14LL;

	t70 = ((x281==(x282<x283))^x284);

	if (t70 != 3753LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	int32_t x287 = INT32_MIN;
	int8_t x288 = -18;

	t71 = ((x285==(x286<x287))^x288);

	if (t71 != -18) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = -979;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = ((x289==(x290<x291))^x292);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = -1;
	volatile int64_t x294 = -1LL;
	uint16_t x295 = UINT16_MAX;
	static volatile int32_t t73 = -20546579;

	t73 = ((x293==(x294<x295))^x296);

	if (t73 != 46) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	int8_t x298 = 0;
	volatile uint64_t x299 = UINT64_MAX;
	int32_t x300 = INT32_MIN;
	int32_t t74 = INT32_MIN;

	t74 = ((x297==(x298<x299))^x300);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MAX;
	int32_t x303 = INT32_MAX;

	t75 = ((x301==(x302<x303))^x304);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	uint32_t x306 = 1U;
	int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MAX;
	static int32_t t76 = -41;

	t76 = ((x305==(x306<x307))^x308);

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int8_t x312 = -1;
	int32_t t77 = 801708293;

	t77 = ((x309==(x310<x311))^x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = 12U;
	uint64_t x314 = 848635483LLU;
	int64_t x315 = -1LL;
	int32_t t78 = INT32_MIN;

	t78 = ((x313==(x314<x315))^x316);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -16194809898295698LL;
	uint16_t x318 = UINT16_MAX;
	volatile int8_t x319 = INT8_MAX;
	int32_t x320 = -1;
	int32_t t79 = 58187589;

	t79 = ((x317==(x318<x319))^x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	static int64_t x322 = -13077799738074LL;
	volatile int32_t x323 = INT32_MIN;
	int32_t x324 = 0;
	volatile int32_t t80 = 518317;

	t80 = ((x321==(x322<x323))^x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -26LL;
	int16_t x326 = INT16_MAX;
	static int16_t x327 = 4;
	int16_t x328 = -1210;
	volatile int32_t t81 = 7058375;

	t81 = ((x325==(x326<x327))^x328);

	if (t81 != -1210) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MIN;
	static volatile uint8_t x330 = 76U;
	volatile uint32_t x331 = 62039U;
	int32_t x332 = INT32_MAX;
	int32_t t82 = INT32_MAX;

	t82 = ((x329==(x330<x331))^x332);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = -63;
	static uint32_t x336 = 11243438U;
	volatile uint32_t t83 = 6970U;

	t83 = ((x333==(x334<x335))^x336);

	if (t83 != 11243438U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 17185U;
	uint16_t x338 = UINT16_MAX;

	t84 = ((x337==(x338<x339))^x340);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int32_t x342 = 5851;
	volatile int8_t x343 = INT8_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 5;

	t85 = ((x341==(x342<x343))^x344);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	uint64_t x346 = 4286299816927631614LLU;
	static uint64_t x347 = 22LLU;

	t86 = ((x345==(x346<x347))^x348);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 1U;
	static uint8_t x350 = 11U;
	uint32_t x351 = 56133U;
	int16_t x352 = -1;
	int32_t t87 = -1776050;

	t87 = ((x349==(x350<x351))^x352);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MAX;
	volatile int32_t t88 = -2;

	t88 = ((x353==(x354<x355))^x356);

	if (t88 != 56) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 180116481U;
	int16_t x358 = 1;
	volatile uint64_t x359 = UINT64_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = -172355;

	t89 = ((x357==(x358<x359))^x360);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 1U;
	uint64_t x363 = 0LLU;
	static volatile uint16_t x364 = 3875U;

	t90 = ((x361==(x362<x363))^x364);

	if (t90 != 3875) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -1;
	volatile int16_t x367 = 3;
	volatile int32_t t91 = -1257420;

	t91 = ((x365==(x366<x367))^x368);

	if (t91 != 30) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = 2U;
	static int32_t x371 = INT32_MIN;
	uint64_t x372 = 120229892LLU;
	volatile uint64_t t92 = 148993231920295500LLU;

	t92 = ((x369==(x370<x371))^x372);

	if (t92 != 120229892LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int64_t x374 = -8285896885LL;
	static uint64_t x375 = UINT64_MAX;
	uint64_t x376 = 54057564031LLU;
	volatile uint64_t t93 = 322LLU;

	t93 = ((x373==(x374<x375))^x376);

	if (t93 != 54057564031LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -1LL;
	int16_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = -806;

	t94 = ((x377==(x378<x379))^x380);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x383 = -1;

	t95 = ((x381==(x382<x383))^x384);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	uint16_t x386 = 6U;
	volatile int16_t x387 = INT16_MIN;
	static volatile int64_t x388 = -1LL;
	volatile int64_t t96 = 6599365LL;

	t96 = ((x385==(x386<x387))^x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -4863;
	volatile int32_t x391 = INT32_MAX;
	int16_t x392 = -1;
	volatile int32_t t97 = -1128178;

	t97 = ((x389==(x390<x391))^x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	int8_t x395 = -1;
	static int32_t t98 = 2;

	t98 = ((x393==(x394<x395))^x396);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	static uint64_t x399 = 2326LLU;
	uint16_t x400 = 7U;

	t99 = ((x397==(x398<x399))^x400);

	if (t99 != 7) { NG(); } else { ; }
	
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

