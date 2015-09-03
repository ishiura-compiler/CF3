#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int8_t x12 = 5;
volatile int64_t x14 = 6990497185017LL;
volatile int32_t t2 = -4146423;
int16_t x23 = INT16_MIN;
uint32_t t4 = 889U;
int32_t t5 = -19645664;
uint8_t x38 = 3U;
volatile uint32_t t7 = 261352U;
uint8_t x47 = UINT8_MAX;
int32_t x53 = 7;
volatile int64_t x69 = -1LL;
uint8_t x75 = 1U;
static volatile int32_t t15 = -136418681;
int16_t x80 = INT16_MIN;
uint32_t x84 = UINT32_MAX;
int16_t x86 = -1;
volatile int64_t x87 = -1LL;
static int16_t x88 = INT16_MIN;
int64_t x101 = INT64_MIN;
int64_t x110 = -1LL;
int64_t x111 = INT64_MAX;
static int8_t x112 = INT8_MIN;
int16_t x114 = INT16_MIN;
volatile int64_t x138 = -14331993300353LL;
int16_t x143 = 393;
uint16_t x145 = 1U;
int64_t x152 = -3209356519LL;
int64_t t33 = 168LL;
volatile int64_t x154 = INT64_MIN;
int64_t x156 = INT64_MIN;
int32_t t35 = -616993;
static int64_t x162 = INT64_MAX;
volatile int8_t x165 = INT8_MAX;
int8_t x172 = INT8_MAX;
int64_t x177 = -128586484183503LL;
uint8_t x180 = UINT8_MAX;
volatile uint32_t t40 = 234U;
uint16_t x185 = UINT16_MAX;
volatile int32_t t42 = -148032610;
volatile int32_t x191 = INT32_MAX;
int16_t x193 = INT16_MAX;
static int32_t t45 = -14;
volatile int8_t x203 = INT8_MIN;
volatile int16_t x209 = 247;
uint16_t x220 = 24580U;
int16_t x221 = 1;
uint8_t x223 = 96U;
volatile uint8_t x226 = 0U;
static uint32_t t52 = 25702668U;
volatile uint32_t x231 = 28041897U;
int64_t x236 = -1LL;
static volatile uint8_t x243 = 0U;
int64_t x251 = 16087447139LL;
uint8_t x259 = UINT8_MAX;
volatile int32_t t62 = 11893881;
static uint32_t x269 = 13092529U;
uint32_t x270 = 30910U;
static volatile int32_t x288 = -1;
static int16_t x293 = INT16_MAX;
volatile int64_t t69 = 283034926104733LL;
static int8_t x298 = -1;
static int64_t x299 = -2035265662625146LL;
uint8_t x302 = 15U;
volatile int32_t t71 = 264417;
int32_t x309 = -1;
volatile int64_t x310 = -444185459048439608LL;
static int64_t x319 = INT64_MIN;
static volatile int32_t t76 = -34;
int32_t x328 = INT32_MIN;
int64_t t78 = 4342235174722145LL;
int16_t x334 = INT16_MIN;
int8_t x338 = 5;
uint32_t t80 = 10459059U;
static volatile uint16_t x349 = 14461U;
static int64_t x354 = 13272787211668329LL;
static volatile uint32_t x359 = UINT32_MAX;
static uint8_t x367 = 22U;
volatile int64_t t87 = 1207LL;
uint32_t x369 = 16959051U;
int8_t x370 = INT8_MIN;
static int32_t t89 = -14939261;
uint16_t x379 = 48U;
int8_t x385 = INT8_MAX;
int64_t x395 = INT64_MIN;
int16_t x401 = INT16_MIN;
int32_t x407 = INT32_MAX;
int16_t x408 = INT16_MIN;
int32_t t97 = 255110;


void f0(void) {
	volatile uint8_t x1 = 2U;
	int16_t x3 = -1;
	uint64_t x4 = 399505834LLU;
	uint64_t t0 = 135786083270940LLU;

	t0 = ((x1<x2)/(x3^x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 445543U;
	int64_t x10 = -1LL;
	volatile uint8_t x11 = 0U;
	volatile int32_t t1 = -59846;

	t1 = ((x9<x10)/(x11^x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 993U;
	static volatile int8_t x15 = -3;
	int16_t x16 = -1;

	t2 = ((x13<x14)/(x15^x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -11;
	int32_t x18 = 96717084;
	uint16_t x19 = 711U;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t3 = -214;

	t3 = ((x17<x18)/(x19^x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1;
	volatile int16_t x22 = INT16_MAX;
	volatile uint32_t x24 = 2U;

	t4 = ((x21<x22)/(x23^x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = 127474860;
	uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;

	t5 = ((x29<x30)/(x31^x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	static int8_t x35 = INT8_MIN;
	int8_t x36 = 2;
	int32_t t6 = 26642652;

	t6 = ((x33<x34)/(x35^x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = UINT32_MAX;

	t7 = ((x37<x38)/(x39^x40));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x41 = UINT8_MAX;
	static int8_t x42 = 25;
	uint64_t x43 = UINT64_MAX;
	static uint16_t x44 = UINT16_MAX;
	volatile uint64_t t8 = 1778446689LLU;

	t8 = ((x41<x42)/(x43^x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = 28;
	int32_t x46 = 118194984;
	static uint64_t x48 = 4516804182176302LLU;
	volatile uint64_t t9 = 2109838LLU;

	t9 = ((x45<x46)/(x47^x48));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	static int32_t x50 = 2436795;
	uint16_t x51 = 3548U;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t10 = -26766;

	t10 = ((x49<x50)/(x51^x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	volatile int32_t x56 = 6078696;
	volatile int64_t t11 = 12028415687LL;

	t11 = ((x53<x54)/(x55^x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 0LLU;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = 1;
	static int8_t x64 = -3;
	volatile int32_t t12 = 78301730;

	t12 = ((x61<x62)/(x63^x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 36519253992LLU;
	static volatile uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 0U;
	uint16_t x68 = UINT16_MAX;
	int32_t t13 = 1596;

	t13 = ((x65<x66)/(x67^x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x70 = 30543061;
	volatile uint32_t x71 = 1U;
	static int16_t x72 = -99;
	volatile uint32_t t14 = 153404U;

	t14 = ((x69<x70)/(x71^x72));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MIN;
	int8_t x74 = 0;
	uint8_t x76 = 3U;

	t15 = ((x73<x74)/(x75^x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 75U;
	volatile uint16_t x78 = 1947U;
	int32_t x79 = -1;
	volatile int32_t t16 = -15308;

	t16 = ((x77<x78)/(x79^x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	static int64_t x82 = INT64_MAX;
	uint8_t x83 = 13U;
	uint32_t t17 = 116U;

	t17 = ((x81<x82)/(x83^x84));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 14U;
	volatile int64_t t18 = 17291869504850824LL;

	t18 = ((x85<x86)/(x87^x88));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = INT8_MAX;
	int32_t x90 = 30733456;
	uint32_t x91 = 1029614626U;
	volatile int64_t x92 = -1LL;
	volatile int64_t t19 = -372LL;

	t19 = ((x89<x90)/(x91^x92));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 1415656060921LLU;
	int8_t x94 = INT8_MAX;
	int8_t x95 = 53;
	static int16_t x96 = 1;
	int32_t t20 = 0;

	t20 = ((x93<x94)/(x95^x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 10;
	uint8_t x98 = UINT8_MAX;
	static int8_t x99 = 1;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t21 = -33601416;

	t21 = ((x97<x98)/(x99^x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	static int8_t x104 = -15;
	int32_t t22 = -3392;

	t22 = ((x101<x102)/(x103^x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = -1;
	int64_t t23 = -12LL;

	t23 = ((x109<x110)/(x111^x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MIN;
	int32_t x115 = -1;
	int32_t x116 = 116;
	int32_t t24 = -59086509;

	t24 = ((x113<x114)/(x115^x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1;
	volatile uint32_t x118 = 3425U;
	int32_t x119 = -30;
	int16_t x120 = INT16_MAX;
	volatile int32_t t25 = 2;

	t25 = ((x117<x118)/(x119^x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x121 = 14U;
	int8_t x122 = -59;
	uint32_t x123 = UINT32_MAX;
	volatile int8_t x124 = -17;
	uint32_t t26 = 85988U;

	t26 = ((x121<x122)/(x123^x124));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x125 = 28;
	static uint8_t x126 = 5U;
	volatile int32_t x127 = INT32_MIN;
	int16_t x128 = -1;
	static volatile int32_t t27 = -305675892;

	t27 = ((x125<x126)/(x127^x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = -1;
	int8_t x130 = -3;
	uint64_t x131 = 3278535932102551LLU;
	static uint64_t x132 = 15LLU;
	uint64_t t28 = 5402069498864437057LLU;

	t28 = ((x129<x130)/(x131^x132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 5677U;
	uint8_t x134 = 5U;
	int64_t x135 = INT64_MIN;
	static int64_t x136 = INT64_MAX;
	int64_t t29 = 92459189673LL;

	t29 = ((x133<x134)/(x135^x136));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = -1;
	int16_t x139 = -1;
	volatile uint8_t x140 = 0U;
	static volatile int32_t t30 = -42811;

	t30 = ((x137<x138)/(x139^x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = INT8_MIN;
	uint8_t x142 = 78U;
	int32_t x144 = INT32_MAX;
	volatile int32_t t31 = 35;

	t31 = ((x141<x142)/(x143^x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x146 = -1;
	volatile int8_t x147 = INT8_MIN;
	int32_t x148 = -1;
	int32_t t32 = 4774;

	t32 = ((x145<x146)/(x147^x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = 7416;
	static uint16_t x150 = 17939U;
	volatile int64_t x151 = -1LL;

	t33 = ((x149<x150)/(x151^x152));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int8_t x155 = INT8_MAX;
	volatile int64_t t34 = 27495LL;

	t34 = ((x153<x154)/(x155^x156));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MIN;
	volatile int32_t x159 = 1283387;
	volatile int8_t x160 = INT8_MIN;

	t35 = ((x157<x158)/(x159^x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 2U;
	int32_t x163 = 1;
	int16_t x164 = 53;
	volatile int32_t t36 = 10313147;

	t36 = ((x161<x162)/(x163^x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x166 = 37299163601753LLU;
	int64_t x167 = INT64_MIN;
	int32_t x168 = 0;
	static int64_t t37 = 18LL;

	t37 = ((x165<x166)/(x167^x168));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 40U;
	uint32_t x171 = UINT32_MAX;
	volatile uint32_t t38 = 159472545U;

	t38 = ((x169<x170)/(x171^x172));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = 17;
	uint16_t x174 = 33U;
	uint64_t x175 = 25232630LLU;
	int16_t x176 = 1;
	uint64_t t39 = 15832656446948LLU;

	t39 = ((x173<x174)/(x175^x176));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x178 = INT8_MIN;
	uint32_t x179 = 1U;

	t40 = ((x177<x178)/(x179^x180));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = UINT16_MAX;
	static int32_t x182 = INT32_MAX;
	volatile int32_t x183 = 148;
	uint8_t x184 = UINT8_MAX;
	static int32_t t41 = -44;

	t41 = ((x181<x182)/(x183^x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x186 = 19823465LLU;
	static uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 0U;

	t42 = ((x185<x186)/(x187^x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MAX;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t43 = 33;

	t43 = ((x189<x190)/(x191^x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x194 = 86630684;
	uint64_t x195 = UINT64_MAX;
	static int16_t x196 = INT16_MAX;
	static uint64_t t44 = 11141008626LLU;

	t44 = ((x193<x194)/(x195^x196));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	int64_t x198 = -24LL;
	static int16_t x199 = INT16_MIN;
	static int32_t x200 = INT32_MIN;

	t45 = ((x197<x198)/(x199^x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MAX;
	static uint32_t x202 = 1809U;
	volatile int32_t x204 = INT32_MIN;
	volatile int32_t t46 = 334838198;

	t46 = ((x201<x202)/(x203^x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x205 = 2468460U;
	int32_t x206 = 277221862;
	static int64_t x207 = INT64_MIN;
	uint16_t x208 = 118U;
	int64_t t47 = -93LL;

	t47 = ((x205<x206)/(x207^x208));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x210 = INT32_MIN;
	volatile int64_t x211 = -6636782924999LL;
	uint16_t x212 = 346U;
	int64_t t48 = 8260102525LL;

	t48 = ((x209<x210)/(x211^x212));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = 318831679LLU;
	uint32_t x214 = 1928U;
	int64_t x215 = -33109596318LL;
	int16_t x216 = INT16_MIN;
	int64_t t49 = -342857023347011LL;

	t49 = ((x213<x214)/(x215^x216));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = 4842;
	int32_t x218 = -1;
	volatile uint32_t x219 = UINT32_MAX;
	uint32_t t50 = 1U;

	t50 = ((x217<x218)/(x219^x220));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x222 = INT32_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t51 = 122699LLU;

	t51 = ((x221<x222)/(x223^x224));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MIN;
	static uint32_t x227 = 11633442U;
	int32_t x228 = -2438;

	t52 = ((x225<x226)/(x227^x228));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 119169464249646894LLU;
	int64_t x230 = 856609538LL;
	uint32_t x232 = 19499460U;
	uint32_t t53 = 3183180U;

	t53 = ((x229<x230)/(x231^x232));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = UINT8_MAX;
	int8_t x234 = INT8_MIN;
	int32_t x235 = INT32_MIN;
	volatile int64_t t54 = -201604LL;

	t54 = ((x233<x234)/(x235^x236));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = 0;
	static volatile int8_t x238 = INT8_MIN;
	uint16_t x239 = 237U;
	uint64_t x240 = 2648188223389672488LLU;
	uint64_t t55 = 6210440806324681LLU;

	t55 = ((x237<x238)/(x239^x240));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x241 = INT64_MIN;
	int8_t x242 = INT8_MAX;
	static int8_t x244 = INT8_MIN;
	int32_t t56 = 77018;

	t56 = ((x241<x242)/(x243^x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = 3LLU;
	int16_t x247 = -1;
	static uint64_t x248 = 148414606687812406LLU;
	volatile uint64_t t57 = 327970849415688LLU;

	t57 = ((x245<x246)/(x247^x248));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x249 = 1;
	static int64_t x250 = INT64_MIN;
	uint8_t x252 = 9U;
	volatile int64_t t58 = 747239LL;

	t58 = ((x249<x250)/(x251^x252));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = UINT16_MAX;
	static int16_t x254 = -1;
	static int32_t x255 = 21029;
	int64_t x256 = INT64_MIN;
	int64_t t59 = -32561LL;

	t59 = ((x253<x254)/(x255^x256));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x257 = INT16_MIN;
	uint16_t x258 = UINT16_MAX;
	static uint8_t x260 = 98U;
	volatile int32_t t60 = -28;

	t60 = ((x257<x258)/(x259^x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = 352U;
	int64_t x262 = -15545569LL;
	int8_t x263 = INT8_MIN;
	volatile int8_t x264 = -1;
	volatile int32_t t61 = -4;

	t61 = ((x261<x262)/(x263^x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = UINT16_MAX;
	int8_t x266 = 23;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = 3U;

	t62 = ((x265<x266)/(x267^x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x271 = UINT64_MAX;
	int64_t x272 = 276569593166082165LL;
	volatile uint64_t t63 = 6928542581LLU;

	t63 = ((x269<x270)/(x271^x272));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = 7920U;
	volatile uint16_t x274 = UINT16_MAX;
	static int16_t x275 = 9249;
	int16_t x276 = INT16_MIN;
	volatile int32_t t64 = 0;

	t64 = ((x273<x274)/(x275^x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MAX;
	uint16_t x279 = 13U;
	int64_t x280 = -2133145910LL;
	volatile int64_t t65 = -225876LL;

	t65 = ((x277<x278)/(x279^x280));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x281 = INT8_MIN;
	static int32_t x282 = INT32_MAX;
	int16_t x283 = INT16_MAX;
	static volatile int8_t x284 = INT8_MIN;
	volatile int32_t t66 = -171;

	t66 = ((x281<x282)/(x283^x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -9;
	static int16_t x286 = INT16_MAX;
	uint8_t x287 = 1U;
	int32_t t67 = -2087731;

	t67 = ((x285<x286)/(x287^x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -66485879;
	volatile int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	int64_t t68 = 58847714929578LL;

	t68 = ((x289<x290)/(x291^x292));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x294 = -4;
	int16_t x295 = -612;
	static int64_t x296 = INT64_MAX;

	t69 = ((x293<x294)/(x295^x296));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x297 = -163;
	int8_t x300 = -21;
	static int64_t t70 = 9815746375LL;

	t70 = ((x297<x298)/(x299^x300));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x301 = 1374897962123462084LL;
	uint8_t x303 = 124U;
	int8_t x304 = -2;

	t71 = ((x301<x302)/(x303^x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = UINT64_MAX;
	uint8_t x306 = 46U;
	int64_t x307 = INT64_MAX;
	int16_t x308 = -1;
	static volatile int64_t t72 = -238226448LL;

	t72 = ((x305<x306)/(x307^x308));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x311 = UINT8_MAX;
	volatile uint16_t x312 = 10711U;
	volatile int32_t t73 = 750;

	t73 = ((x309<x310)/(x311^x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	static int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	volatile int64_t t74 = -222216246732912815LL;

	t74 = ((x313<x314)/(x315^x316));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x318 = 41U;
	static uint16_t x320 = 0U;
	int64_t t75 = 34769010404874922LL;

	t75 = ((x317<x318)/(x319^x320));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x321 = INT32_MIN;
	uint16_t x322 = 0U;
	static uint8_t x323 = 4U;
	static int32_t x324 = -1;

	t76 = ((x321<x322)/(x323^x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x325 = -44697183;
	uint64_t x326 = 108056LLU;
	volatile int32_t x327 = -231085660;
	volatile int32_t t77 = -15795027;

	t77 = ((x325<x326)/(x327^x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = 5441550;
	uint64_t x330 = 181504018587751060LLU;
	static int64_t x331 = INT64_MIN;
	uint32_t x332 = 3268U;

	t78 = ((x329<x330)/(x331^x332));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x333 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	uint64_t x336 = 1594754LLU;
	static uint64_t t79 = 7LLU;

	t79 = ((x333<x334)/(x335^x336));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x337 = 764537U;
	uint32_t x339 = 323908U;
	volatile int16_t x340 = INT16_MIN;

	t80 = ((x337<x338)/(x339^x340));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	uint8_t x342 = 40U;
	int64_t x343 = INT64_MAX;
	int16_t x344 = -22;
	volatile int64_t t81 = -824882LL;

	t81 = ((x341<x342)/(x343^x344));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x345 = 204U;
	int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MAX;
	volatile int32_t t82 = -72327;

	t82 = ((x345<x346)/(x347^x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x350 = 0U;
	volatile int64_t x351 = -17952134948711822LL;
	static int16_t x352 = INT16_MAX;
	volatile int64_t t83 = -1082987LL;

	t83 = ((x349<x350)/(x351^x352));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x353 = -1;
	int8_t x355 = 3;
	static int64_t x356 = -1LL;
	volatile int64_t t84 = -24279LL;

	t84 = ((x353<x354)/(x355^x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x357 = INT8_MIN;
	int64_t x358 = 240413226797997026LL;
	static int32_t x360 = 296127;
	uint32_t t85 = 13533294U;

	t85 = ((x357<x358)/(x359^x360));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = 1;
	static volatile int8_t x363 = INT8_MIN;
	volatile int64_t x364 = INT64_MIN;
	static int64_t t86 = -14035063976589LL;

	t86 = ((x361<x362)/(x363^x364));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -1;
	int16_t x366 = INT16_MIN;
	static volatile int64_t x368 = INT64_MIN;

	t87 = ((x365<x366)/(x367^x368));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x371 = 0U;
	volatile uint16_t x372 = 11956U;
	volatile int32_t t88 = -263292091;

	t88 = ((x369<x370)/(x371^x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -724656;
	static uint8_t x374 = 90U;
	int16_t x375 = INT16_MAX;
	volatile int8_t x376 = INT8_MIN;

	t89 = ((x373<x374)/(x375^x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 124U;
	int16_t x378 = INT16_MIN;
	int16_t x380 = INT16_MAX;
	volatile int32_t t90 = -37;

	t90 = ((x377<x378)/(x379^x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x381 = INT64_MIN;
	int64_t x382 = 130860281210874LL;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MAX;
	volatile int32_t t91 = 0;

	t91 = ((x381<x382)/(x383^x384));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x386 = -1;
	static int32_t x387 = 519139429;
	static uint64_t x388 = UINT64_MAX;
	uint64_t t92 = 263804936541LLU;

	t92 = ((x385<x386)/(x387^x388));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = UINT8_MAX;
	static int64_t x390 = -1LL;
	static int8_t x391 = INT8_MIN;
	volatile uint16_t x392 = UINT16_MAX;
	int32_t t93 = -20;

	t93 = ((x389<x390)/(x391^x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = -1;
	int32_t x394 = -1;
	int64_t x396 = -1LL;
	volatile int64_t t94 = 2356471195LL;

	t94 = ((x393<x394)/(x395^x396));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x397 = INT64_MIN;
	static uint8_t x398 = 7U;
	int64_t x399 = -4LL;
	int16_t x400 = -1;
	volatile int64_t t95 = -249335700LL;

	t95 = ((x397<x398)/(x399^x400));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = 12;
	int16_t x403 = 467;
	static volatile int32_t x404 = 527994;
	volatile int32_t t96 = 344;

	t96 = ((x401<x402)/(x403^x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x405 = INT8_MIN;
	volatile uint32_t x406 = 52U;

	t97 = ((x405<x406)/(x407^x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = UINT32_MAX;
	static int16_t x411 = INT16_MIN;
	int32_t x412 = 4;
	int32_t t98 = -12486454;

	t98 = ((x409<x410)/(x411^x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x413 = -1;
	int64_t x414 = -50693648106924558LL;
	int16_t x415 = INT16_MIN;
	int32_t x416 = -1;
	int32_t t99 = -23600;

	t99 = ((x413<x414)/(x415^x416));

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

