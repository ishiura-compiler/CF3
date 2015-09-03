#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 3U;
int64_t x10 = -1LL;
volatile int16_t x27 = 49;
static int16_t x28 = INT16_MIN;
int64_t x34 = 28792107825212703LL;
int16_t x36 = INT16_MIN;
static int16_t x42 = 1;
int8_t x49 = -4;
uint64_t x50 = 214LLU;
int16_t x54 = -1;
int8_t x55 = INT8_MIN;
volatile int32_t t14 = -1;
volatile uint16_t x70 = 28U;
uint32_t x71 = UINT32_MAX;
static int8_t x80 = 1;
volatile int32_t t17 = 2650;
static int32_t x81 = -1;
int8_t x83 = INT8_MIN;
int8_t x84 = 0;
static int32_t x89 = INT32_MIN;
int32_t x93 = INT32_MIN;
static int8_t x96 = -1;
int8_t x106 = -1;
uint16_t x109 = 448U;
uint16_t x112 = 116U;
volatile int32_t t24 = -51515546;
volatile uint8_t x113 = UINT8_MAX;
volatile int64_t x128 = 33740789944LL;
static volatile int8_t x130 = INT8_MAX;
uint64_t x133 = 17LLU;
int64_t x141 = INT64_MAX;
int64_t x142 = INT64_MAX;
static uint16_t x144 = 1U;
int16_t x148 = 43;
uint64_t x152 = UINT64_MAX;
uint32_t t35 = 216U;
int16_t x158 = -1;
volatile int64_t t38 = 422704955674386LL;
static volatile int32_t t40 = 61683170;
int64_t x194 = -1LL;
uint8_t x195 = 1U;
uint64_t x203 = 3819779094998391036LLU;
static int16_t x208 = INT16_MIN;
int64_t x220 = 430859938305568LL;
int8_t x229 = -1;
uint16_t x232 = 31U;
static int32_t x234 = INT32_MAX;
volatile int64_t t50 = -67667497410299LL;
static volatile uint32_t x237 = 12414U;
int16_t x239 = INT16_MIN;
int32_t x244 = INT32_MIN;
static volatile int32_t t55 = -4;
int64_t x277 = INT64_MAX;
int64_t x280 = 15039522182991LL;
static int16_t x285 = INT16_MIN;
int16_t x293 = INT16_MAX;
static volatile int32_t x304 = INT32_MIN;
static int32_t x306 = INT32_MIN;
int16_t x308 = -1;
static volatile int16_t x310 = INT16_MIN;
uint32_t x317 = 414803668U;
int64_t x320 = INT64_MAX;
int32_t x325 = INT32_MAX;
int64_t x326 = INT64_MAX;
int8_t x327 = INT8_MIN;
static volatile int32_t t72 = 226620;
volatile uint32_t x341 = 85642147U;
int32_t t74 = -504646;
uint16_t x349 = UINT16_MAX;
static uint64_t t75 = 135919LLU;
int64_t x366 = -1LL;
static uint32_t x382 = 375563381U;
uint16_t x387 = 15U;
uint16_t x388 = UINT16_MAX;
static int32_t x393 = INT32_MIN;
uint8_t x403 = UINT8_MAX;
int64_t x415 = -1LL;
static int32_t x416 = 20299450;
static volatile uint16_t x418 = UINT16_MAX;
volatile uint8_t x420 = 7U;
int8_t x422 = INT8_MAX;
int16_t x425 = INT16_MIN;
int16_t x434 = INT16_MAX;
uint8_t x440 = UINT8_MAX;
static uint16_t x442 = 161U;
uint64_t x448 = 4491LLU;
volatile uint64_t t97 = 888296LLU;
int64_t x458 = INT64_MAX;


void f0(void) {
	volatile int16_t x5 = INT16_MIN;
	static uint8_t x6 = UINT8_MAX;
	int32_t x8 = INT32_MAX;
	volatile int32_t t0 = -131;

	t0 = ((x5<x6)+(x7-x8));

	if (t0 != -2147483643) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MAX;
	volatile uint16_t x11 = 3U;
	volatile int64_t x12 = -1LL;
	int64_t t1 = 20047022669LL;

	t1 = ((x9<x10)+(x11-x12));

	if (t1 != 4LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	int8_t x14 = INT8_MIN;
	uint8_t x15 = 106U;
	int16_t x16 = -1533;
	static volatile int32_t t2 = 278;

	t2 = ((x13<x14)+(x15-x16));

	if (t2 != 1639) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 15372U;
	int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MIN;
	int64_t t3 = 182LL;

	t3 = ((x17<x18)+(x19-x20));

	if (t3 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 3137329191650LL;
	uint16_t x22 = 25U;
	int16_t x23 = INT16_MIN;
	volatile uint8_t x24 = 21U;
	int32_t t4 = 107992;

	t4 = ((x21<x22)+(x23-x24));

	if (t4 != -32789) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int32_t t5 = -33163708;

	t5 = ((x25<x26)+(x27-x28));

	if (t5 != 32817) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 0U;
	volatile int16_t x30 = INT16_MAX;
	uint8_t x31 = 10U;
	int16_t x32 = INT16_MIN;
	static int32_t t6 = 28406;

	t6 = ((x29<x30)+(x31-x32));

	if (t6 != 32779) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = 54231332761426899LL;
	int16_t x35 = 1;
	volatile int32_t t7 = -85;

	t7 = ((x33<x34)+(x35-x36));

	if (t7 != 32769) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = 4916;
	int64_t x39 = -111LL;
	int8_t x40 = -27;
	int64_t t8 = 4114085168LL;

	t8 = ((x37<x38)+(x39-x40));

	if (t8 != -83LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	volatile int64_t x43 = -167LL;
	static uint32_t x44 = UINT32_MAX;
	int64_t t9 = -1620654928997971434LL;

	t9 = ((x41<x42)+(x43-x44));

	if (t9 != -4294967461LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -3;
	static int8_t x46 = 1;
	int64_t x47 = -523070019LL;
	int64_t x48 = INT64_MIN;
	int64_t t10 = -12886236380967339LL;

	t10 = ((x45<x46)+(x47-x48));

	if (t10 != 9223372036331705790LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x51 = INT16_MIN;
	uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 201LLU;

	t11 = ((x49<x50)+(x51-x52));

	if (t11 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = 1837;

	t12 = ((x53<x54)+(x55-x56));

	if (t12 != 2147483521) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	volatile uint32_t x59 = 24U;
	volatile int64_t x60 = 22925LL;
	volatile int64_t t13 = -21702684744972LL;

	t13 = ((x57<x58)+(x59-x60));

	if (t13 != -22900LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 18U;
	int8_t x66 = -1;
	int32_t x67 = INT32_MIN;
	int32_t x68 = -1;

	t14 = ((x65<x66)+(x67-x68));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	volatile int8_t x72 = 5;
	volatile uint32_t t15 = 0U;

	t15 = ((x69<x70)+(x71-x72));

	if (t15 != 4294967291U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = UINT8_MAX;
	int32_t x74 = -2;
	volatile int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t16 = -273234224937LL;

	t16 = ((x73<x74)+(x75-x76));

	if (t16 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = INT16_MAX;
	int8_t x78 = -1;
	uint16_t x79 = 101U;

	t17 = ((x77<x78)+(x79-x80));

	if (t17 != 100) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x82 = 770922739380358LLU;
	int32_t t18 = -32182;

	t18 = ((x81<x82)+(x83-x84));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	int8_t x86 = 0;
	int16_t x87 = INT16_MIN;
	int8_t x88 = 0;
	volatile int32_t t19 = 12751005;

	t19 = ((x85<x86)+(x87-x88));

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -2079813876137LL;
	int64_t x92 = INT64_MIN;
	volatile int64_t t20 = 1LL;

	t20 = ((x89<x90)+(x91-x92));

	if (t20 != 9223369957040899672LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x94 = -1;
	static int32_t x95 = 284;
	int32_t t21 = -491699011;

	t21 = ((x93<x94)+(x95-x96));

	if (t21 != 286) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x101 = -1LL;
	int64_t x102 = INT64_MIN;
	uint64_t x103 = 84LLU;
	int64_t x104 = INT64_MIN;
	volatile uint64_t t22 = 15534147677478110LLU;

	t22 = ((x101<x102)+(x103-x104));

	if (t22 != 9223372036854775892LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MIN;
	int16_t x107 = -15344;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t23 = 178966013146LLU;

	t23 = ((x105<x106)+(x107-x108));

	if (t23 != 18446744073709536274LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = -1;
	int8_t x111 = INT8_MAX;

	t24 = ((x109<x110)+(x111-x112));

	if (t24 != 11) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x114 = INT8_MIN;
	uint32_t x115 = 41695673U;
	int32_t x116 = INT32_MIN;
	uint32_t t25 = 178U;

	t25 = ((x113<x114)+(x115-x116));

	if (t25 != 2189179321U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x117 = -1LL;
	int16_t x118 = INT16_MIN;
	static uint32_t x119 = 696U;
	uint64_t x120 = 25028613813878LLU;
	uint64_t t26 = 79174128LLU;

	t26 = ((x117<x118)+(x119-x120));

	if (t26 != 18446719045095738434LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = INT32_MIN;
	int16_t x122 = -1;
	int8_t x123 = -1;
	static int8_t x124 = INT8_MAX;
	int32_t t27 = 65208694;

	t27 = ((x121<x122)+(x123-x124));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = -90;
	volatile int32_t x126 = -163;
	static int64_t x127 = -1LL;
	int64_t t28 = -2984659581304041LL;

	t28 = ((x125<x126)+(x127-x128));

	if (t28 != -33740789945LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MAX;
	int32_t x131 = -86197937;
	int16_t x132 = INT16_MAX;
	static int32_t t29 = -2;

	t29 = ((x129<x130)+(x131-x132));

	if (t29 != -86230704) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = INT16_MIN;
	static uint32_t x135 = 2U;
	int16_t x136 = -40;
	static uint32_t t30 = 49837U;

	t30 = ((x133<x134)+(x135-x136));

	if (t30 != 43U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = 129;
	uint32_t x139 = 116U;
	int32_t x140 = 5710;
	volatile uint32_t t31 = 1U;

	t31 = ((x137<x138)+(x139-x140));

	if (t31 != 4294961703U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x143 = INT16_MAX;
	static int32_t t32 = -54010;

	t32 = ((x141<x142)+(x143-x144));

	if (t32 != 32766) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 0;
	static uint8_t x146 = 2U;
	volatile int64_t x147 = -1LL;
	static int64_t t33 = -155273875375LL;

	t33 = ((x145<x146)+(x147-x148));

	if (t33 != -43LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	uint64_t t34 = 2LLU;

	t34 = ((x149<x150)+(x151-x152));

	if (t34 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x153 = INT32_MIN;
	uint64_t x154 = 54781418LLU;
	static uint32_t x155 = 1U;
	int16_t x156 = 15;

	t35 = ((x153<x154)+(x155-x156));

	if (t35 != 4294967282U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = 2856;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	int32_t t36 = 122065;

	t36 = ((x157<x158)+(x159-x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x165 = 18;
	static int64_t x166 = INT64_MAX;
	int8_t x167 = -1;
	uint32_t x168 = 882537U;
	volatile uint32_t t37 = 3U;

	t37 = ((x165<x166)+(x167-x168));

	if (t37 != 4294084759U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = 3;
	int16_t x170 = 0;
	volatile int64_t x171 = INT64_MAX;
	uint32_t x172 = UINT32_MAX;

	t38 = ((x169<x170)+(x171-x172));

	if (t38 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x177 = 307025331881LLU;
	volatile uint16_t x178 = UINT16_MAX;
	static volatile int16_t x179 = INT16_MIN;
	int8_t x180 = -5;
	int32_t t39 = -18889473;

	t39 = ((x177<x178)+(x179-x180));

	if (t39 != -32763) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x185 = -1;
	int32_t x186 = 0;
	int8_t x187 = INT8_MIN;
	static uint16_t x188 = 9170U;

	t40 = ((x185<x186)+(x187-x188));

	if (t40 != -9297) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x189 = UINT16_MAX;
	uint8_t x190 = 99U;
	uint8_t x191 = UINT8_MAX;
	static uint32_t x192 = UINT32_MAX;
	volatile uint32_t t41 = 398U;

	t41 = ((x189<x190)+(x191-x192));

	if (t41 != 256U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = -1;
	volatile int64_t x196 = -2161845382509441LL;
	static volatile int64_t t42 = -188256LL;

	t42 = ((x193<x194)+(x195-x196));

	if (t42 != 2161845382509442LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = 2864173;
	volatile uint64_t t43 = 15906312142796376LLU;

	t43 = ((x197<x198)+(x199-x200));

	if (t43 != 18446744073706687442LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = -1LL;
	volatile int16_t x202 = INT16_MIN;
	uint16_t x204 = UINT16_MAX;
	volatile uint64_t t44 = 206067858332970LLU;

	t44 = ((x201<x202)+(x203-x204));

	if (t44 != 3819779094998325501LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MIN;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t t45 = -3017002;

	t45 = ((x205<x206)+(x207-x208));

	if (t45 != 33024) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = 2090506989789286LL;
	int16_t x210 = 1594;
	int8_t x211 = INT8_MIN;
	static int32_t x212 = INT32_MIN;
	int32_t t46 = -61575436;

	t46 = ((x209<x210)+(x211-x212));

	if (t46 != 2147483520) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x213 = UINT64_MAX;
	uint32_t x214 = UINT32_MAX;
	static int32_t x215 = 532029;
	uint32_t x216 = 250274U;
	volatile uint32_t t47 = 144295643U;

	t47 = ((x213<x214)+(x215-x216));

	if (t47 != 281755U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = INT64_MAX;
	int16_t x218 = -8666;
	volatile uint16_t x219 = 2996U;
	volatile int64_t t48 = -66029880LL;

	t48 = ((x217<x218)+(x219-x220));

	if (t48 != -430859938302572LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x230 = 131U;
	static int16_t x231 = -70;
	volatile int32_t t49 = 6097;

	t49 = ((x229<x230)+(x231-x232));

	if (t49 != -101) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MAX;
	static volatile int64_t x235 = -1LL;
	int8_t x236 = INT8_MAX;

	t50 = ((x233<x234)+(x235-x236));

	if (t50 != -127LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x238 = 3U;
	uint16_t x240 = 31U;
	int32_t t51 = -117;

	t51 = ((x237<x238)+(x239-x240));

	if (t51 != -32799) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1;
	int16_t x242 = INT16_MIN;
	int16_t x243 = -1;
	volatile int32_t t52 = INT32_MAX;

	t52 = ((x241<x242)+(x243-x244));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = 1167;
	int64_t x246 = INT64_MIN;
	int64_t x247 = 1LL;
	int16_t x248 = INT16_MAX;
	static volatile int64_t t53 = 387LL;

	t53 = ((x245<x246)+(x247-x248));

	if (t53 != -32766LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -24539619763835026LL;
	static uint64_t x262 = 2802830339LLU;
	volatile int32_t x263 = 6;
	int8_t x264 = 0;
	int32_t t54 = 783947;

	t54 = ((x261<x262)+(x263-x264));

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x265 = -1LL;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = 1;
	static int16_t x268 = INT16_MAX;

	t55 = ((x265<x266)+(x267-x268));

	if (t55 != -32765) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x269 = INT8_MIN;
	int64_t x270 = -13829472638093505LL;
	int64_t x271 = 55033385161845948LL;
	int8_t x272 = INT8_MAX;
	int64_t t56 = 15450LL;

	t56 = ((x269<x270)+(x271-x272));

	if (t56 != 55033385161845821LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = INT8_MAX;
	int8_t x274 = 19;
	uint64_t x275 = UINT64_MAX;
	int64_t x276 = -17135LL;
	uint64_t t57 = 515727195LLU;

	t57 = ((x273<x274)+(x275-x276));

	if (t57 != 17134LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x278 = 43409LLU;
	uint64_t x279 = UINT64_MAX;
	volatile uint64_t t58 = 2108279506255014836LLU;

	t58 = ((x277<x278)+(x279-x280));

	if (t58 != 18446729034187368624LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = INT64_MAX;
	int32_t x282 = INT32_MIN;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	static int64_t t59 = 1LL;

	t59 = ((x281<x282)+(x283-x284));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x286 = -1;
	static int16_t x287 = -7121;
	uint64_t x288 = UINT64_MAX;
	static uint64_t t60 = 47517103556681535LLU;

	t60 = ((x285<x286)+(x287-x288));

	if (t60 != 18446744073709544497LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x289 = 62603592U;
	int16_t x290 = 0;
	int64_t x291 = -1LL;
	volatile int16_t x292 = -1;
	static volatile int64_t t61 = 13784660LL;

	t61 = ((x289<x290)+(x291-x292));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x294 = INT64_MIN;
	volatile uint8_t x295 = UINT8_MAX;
	static int64_t x296 = INT64_MAX;
	volatile int64_t t62 = -18565LL;

	t62 = ((x293<x294)+(x295-x296));

	if (t62 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = 222489058550LL;
	volatile uint32_t x298 = 15U;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = 29;
	volatile int32_t t63 = -127;

	t63 = ((x297<x298)+(x299-x300));

	if (t63 != 65506) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = -1;
	static int64_t x303 = -2534766346LL;
	int64_t t64 = 307915707884397719LL;

	t64 = ((x301<x302)+(x303-x304));

	if (t64 != -387282698LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = INT32_MAX;
	static int64_t x307 = INT64_MIN;
	volatile int64_t t65 = -250LL;

	t65 = ((x305<x306)+(x307-x308));

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = 3739;
	uint16_t x311 = UINT16_MAX;
	volatile int8_t x312 = INT8_MAX;
	static int32_t t66 = -944;

	t66 = ((x309<x310)+(x311-x312));

	if (t66 != 65408) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x313 = 963U;
	uint8_t x314 = UINT8_MAX;
	volatile int32_t x315 = 49;
	int8_t x316 = -1;
	int32_t t67 = 8208;

	t67 = ((x313<x314)+(x315-x316));

	if (t67 != 50) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x318 = 184497278849442LLU;
	int64_t x319 = -1LL;
	int64_t t68 = 33523469332734208LL;

	t68 = ((x317<x318)+(x319-x320));

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x328 = INT32_MIN;
	volatile int32_t t69 = -74317;

	t69 = ((x325<x326)+(x327-x328));

	if (t69 != 2147483521) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x329 = 453188629056593LLU;
	static uint16_t x330 = UINT16_MAX;
	int8_t x331 = 45;
	int64_t x332 = -9035473860868LL;
	static volatile int64_t t70 = -4005361382645903LL;

	t70 = ((x329<x330)+(x331-x332));

	if (t70 != 9035473860913LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x333 = 44;
	volatile uint16_t x334 = 45U;
	int64_t x335 = -1LL;
	static int8_t x336 = 2;
	volatile int64_t t71 = -3037576862030048LL;

	t71 = ((x333<x334)+(x335-x336));

	if (t71 != -2LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x337 = UINT8_MAX;
	uint64_t x338 = 14LLU;
	volatile int32_t x339 = INT32_MIN;
	static volatile int16_t x340 = INT16_MIN;

	t72 = ((x337<x338)+(x339-x340));

	if (t72 != -2147450880) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x342 = -1LL;
	int32_t x343 = 19;
	volatile uint64_t x344 = 13610147003233LLU;
	static uint64_t t73 = 1289LLU;

	t73 = ((x341<x342)+(x343-x344));

	if (t73 != 18446730463562548402LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = INT8_MIN;
	static int64_t x346 = INT64_MIN;
	volatile uint8_t x347 = 8U;
	uint16_t x348 = UINT16_MAX;

	t74 = ((x345<x346)+(x347-x348));

	if (t74 != -65527) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x350 = 2;
	uint64_t x351 = 19738230LLU;
	uint64_t x352 = UINT64_MAX;

	t75 = ((x349<x350)+(x351-x352));

	if (t75 != 19738231LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x353 = INT8_MIN;
	static volatile int16_t x354 = INT16_MIN;
	uint8_t x355 = UINT8_MAX;
	int16_t x356 = 923;
	int32_t t76 = -4;

	t76 = ((x353<x354)+(x355-x356));

	if (t76 != -668) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = -19670030685310LL;
	volatile int64_t x358 = -1LL;
	uint8_t x359 = 83U;
	uint32_t x360 = UINT32_MAX;
	static volatile uint32_t t77 = 19889593U;

	t77 = ((x357<x358)+(x359-x360));

	if (t77 != 85U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x365 = INT64_MIN;
	uint64_t x367 = 3018727662840413LLU;
	int16_t x368 = INT16_MIN;
	volatile uint64_t t78 = 2444628644939029LLU;

	t78 = ((x365<x366)+(x367-x368));

	if (t78 != 3018727662873182LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	static volatile int8_t x371 = INT8_MIN;
	static volatile int16_t x372 = INT16_MIN;
	int32_t t79 = 829;

	t79 = ((x369<x370)+(x371-x372));

	if (t79 != 32640) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x373 = 28U;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = 19165U;
	uint16_t x376 = UINT16_MAX;
	static volatile int32_t t80 = -31995482;

	t80 = ((x373<x374)+(x375-x376));

	if (t80 != -46370) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x377 = 1U;
	volatile uint64_t x378 = UINT64_MAX;
	static uint64_t x379 = UINT64_MAX;
	uint32_t x380 = 21U;
	volatile uint64_t t81 = 9266675LLU;

	t81 = ((x377<x378)+(x379-x380));

	if (t81 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MAX;
	uint32_t t82 = 247U;

	t82 = ((x381<x382)+(x383-x384));

	if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x385 = -1;
	int8_t x386 = INT8_MIN;
	volatile int32_t t83 = -49;

	t83 = ((x385<x386)+(x387-x388));

	if (t83 != -65520) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x389 = 15875859U;
	uint32_t x390 = 10296U;
	static uint32_t x391 = 1259U;
	int8_t x392 = INT8_MAX;
	uint32_t t84 = 4682942U;

	t84 = ((x389<x390)+(x391-x392));

	if (t84 != 1132U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x394 = INT16_MAX;
	int64_t x395 = INT64_MAX;
	volatile int16_t x396 = INT16_MAX;
	int64_t t85 = -149609291562555429LL;

	t85 = ((x393<x394)+(x395-x396));

	if (t85 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int32_t x402 = 7693204;
	volatile int16_t x404 = 12;
	int32_t t86 = -224079;

	t86 = ((x401<x402)+(x403-x404));

	if (t86 != 244) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = -8;
	static volatile int64_t x406 = INT64_MIN;
	static int8_t x407 = -51;
	int32_t x408 = INT32_MIN;
	int32_t t87 = 14231;

	t87 = ((x405<x406)+(x407-x408));

	if (t87 != 2147483597) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = -33423LL;
	static int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	uint32_t x412 = 10U;
	uint32_t t88 = 0U;

	t88 = ((x409<x410)+(x411-x412));

	if (t88 != 2147483639U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MIN;
	static int64_t t89 = 68LL;

	t89 = ((x413<x414)+(x415-x416));

	if (t89 != -20299450LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x417 = INT64_MIN;
	int64_t x419 = INT64_MAX;
	static volatile int64_t t90 = -105754757797429LL;

	t90 = ((x417<x418)+(x419-x420));

	if (t90 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = 13;
	static int32_t x423 = -615;
	static uint64_t x424 = UINT64_MAX;
	volatile uint64_t t91 = 108040LLU;

	t91 = ((x421<x422)+(x423-x424));

	if (t91 != 18446744073709551003LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x426 = UINT64_MAX;
	uint16_t x427 = 1587U;
	volatile int64_t x428 = INT64_MAX;
	int64_t t92 = 70736295899LL;

	t92 = ((x425<x426)+(x427-x428));

	if (t92 != -9223372036854774219LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = 1;
	uint8_t x430 = UINT8_MAX;
	int32_t x431 = 86401520;
	int32_t x432 = INT32_MAX;
	int32_t t93 = 6649842;

	t93 = ((x429<x430)+(x431-x432));

	if (t93 != -2061082126) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x433 = INT32_MAX;
	int32_t x435 = -8780936;
	int32_t x436 = -178071;
	static volatile int32_t t94 = -9386;

	t94 = ((x433<x434)+(x435-x436));

	if (t94 != -8602865) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x437 = -6498;
	int16_t x438 = -139;
	uint8_t x439 = UINT8_MAX;
	int32_t t95 = -4;

	t95 = ((x437<x438)+(x439-x440));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x441 = INT16_MAX;
	uint8_t x443 = 27U;
	int32_t x444 = INT32_MAX;
	volatile int32_t t96 = 20944582;

	t96 = ((x441<x442)+(x443-x444));

	if (t96 != -2147483620) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x445 = INT8_MIN;
	volatile int32_t x446 = -123539;
	uint16_t x447 = UINT16_MAX;

	t97 = ((x445<x446)+(x447-x448));

	if (t97 != 61044LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = 2;
	int64_t x450 = -1013LL;
	int64_t x451 = -1LL;
	volatile int16_t x452 = INT16_MIN;
	volatile int64_t t98 = 807339129493760935LL;

	t98 = ((x449<x450)+(x451-x452));

	if (t98 != 32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = 2724;
	int64_t x459 = INT64_MIN;
	volatile int8_t x460 = INT8_MIN;
	static int64_t t99 = -18649929320835LL;

	t99 = ((x457<x458)+(x459-x460));

	if (t99 != -9223372036854775679LL) { NG(); } else { ; }
	
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

