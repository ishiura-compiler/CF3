#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 574039478646581641LL;
int8_t x7 = INT8_MIN;
int8_t x8 = -33;
int32_t t1 = 1960235;
int16_t x11 = INT16_MIN;
int16_t x16 = INT16_MIN;
int16_t x18 = INT16_MAX;
volatile uint32_t x20 = UINT32_MAX;
int32_t t4 = 1;
volatile int32_t t5 = 0;
uint32_t t6 = 194802393U;
volatile int8_t x30 = 0;
static int32_t t8 = 285260;
int16_t x46 = -1;
int32_t x51 = INT32_MIN;
volatile int32_t x67 = INT32_MIN;
int16_t x76 = 124;
int32_t x77 = INT32_MAX;
volatile int16_t x78 = -1;
volatile uint64_t x79 = 66870717948139630LLU;
volatile int32_t t18 = INT32_MAX;
int32_t x82 = -629;
volatile int64_t x86 = -34LL;
uint16_t x90 = 406U;
uint16_t x100 = 1929U;
int32_t x101 = INT32_MAX;
static volatile uint64_t x102 = UINT64_MAX;
static volatile int32_t x104 = INT32_MAX;
volatile int32_t t24 = INT32_MAX;
static int8_t x107 = INT8_MAX;
volatile int16_t x108 = INT16_MIN;
uint32_t x114 = 144668U;
int8_t x117 = -1;
int32_t x118 = INT32_MAX;
static volatile int32_t t28 = 5008;
uint32_t x122 = UINT32_MAX;
uint8_t x123 = 7U;
int32_t t29 = 1;
uint32_t x126 = UINT32_MAX;
static volatile int64_t x132 = -571407586877785592LL;
int64_t x137 = INT64_MIN;
int32_t t34 = -52108010;
uint8_t x145 = 3U;
int32_t x146 = -1;
int16_t x147 = -9795;
uint32_t x150 = UINT32_MAX;
int64_t t36 = -999993633799LL;
volatile int16_t x153 = -1054;
static uint64_t x154 = UINT64_MAX;
uint32_t x155 = 230998746U;
volatile uint8_t x158 = 3U;
int32_t t38 = -7334;
int32_t x171 = -1;
volatile int64_t t41 = -163671172863285521LL;
static int64_t x175 = -249LL;
uint32_t x190 = 1U;
static int32_t x192 = 121321;
volatile uint8_t x199 = 12U;
uint32_t t50 = UINT32_MAX;
uint16_t x210 = UINT16_MAX;
int32_t x212 = 96512102;
int32_t x219 = INT32_MIN;
uint8_t x221 = 78U;
int64_t x224 = -3883LL;
static int32_t t54 = -238648593;
uint32_t x227 = 3U;
volatile uint64_t x229 = 177409LLU;
int8_t x233 = INT8_MIN;
volatile uint8_t x236 = 1U;
uint8_t x237 = 3U;
static uint8_t x239 = 3U;
int16_t x242 = -1;
int32_t x243 = INT32_MIN;
int64_t x244 = -15347986145515649LL;
int64_t t59 = 1738926824LL;
int64_t t60 = -48521855771919041LL;
static int32_t x252 = -2080;
static int8_t x255 = INT8_MIN;
volatile int16_t x256 = -1;
int64_t t63 = 62748286LL;
int32_t x262 = -1;
int32_t t64 = 1;
static int64_t x267 = -3LL;
static volatile int8_t x281 = INT8_MAX;
int16_t x298 = INT16_MIN;
int8_t x299 = INT8_MAX;
int32_t x302 = -1;
static int8_t x306 = INT8_MIN;
int64_t t75 = -9194313241870395LL;
uint64_t x310 = UINT64_MAX;
int32_t x312 = INT32_MIN;
int16_t x314 = INT16_MIN;
int8_t x319 = -2;
int64_t x322 = INT64_MIN;
static uint32_t x323 = 335933738U;
uint64_t x326 = 1LLU;
volatile int32_t t81 = 116201284;
volatile int64_t t82 = 44852514LL;
static int16_t x338 = INT16_MAX;
uint8_t x343 = 45U;
int16_t x347 = INT16_MIN;
static int8_t x348 = -1;
uint8_t x351 = 15U;
int16_t x354 = INT16_MIN;
volatile int64_t x358 = -1LL;
volatile int64_t t88 = -501296LL;
static uint64_t x362 = 1052153LLU;
volatile int32_t x367 = INT32_MAX;
uint8_t x369 = UINT8_MAX;
int16_t x374 = INT16_MIN;
int32_t x375 = 10626;
uint64_t t92 = 346585207778743443LLU;
uint64_t x377 = 5LLU;
volatile uint32_t x382 = 14855U;
int32_t t94 = 1;
uint32_t x385 = UINT32_MAX;
int32_t x386 = -1;
int32_t x388 = -1;
uint32_t t95 = UINT32_MAX;
static uint64_t x389 = 214398LLU;
int32_t x393 = -9043431;
volatile int32_t t97 = 27876961;


void f0(void) {
	int64_t x1 = -4376857482715482LL;
	volatile uint32_t x2 = UINT32_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	int64_t x4 = INT64_MIN;

	t0 = (x1|((x2%x3)<=x4));

	if (t0 != -4376857482715482LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -57;
	uint32_t x6 = 1803915022U;

	t1 = (x5|((x6%x7)<=x8));

	if (t1 != -57) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	uint16_t x10 = 221U;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -20;

	t2 = (x9|((x10%x11)<=x12));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	int64_t x14 = -1LL;
	int16_t x15 = -1;
	static volatile uint64_t t3 = UINT64_MAX;

	t3 = (x13|((x14%x15)<=x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 0U;
	static volatile uint64_t x19 = 2205086512463236LLU;

	t4 = (x17|((x18%x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 456U;
	volatile int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MIN;

	t5 = (x21|((x22%x23)<=x24));

	if (t5 != 456) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 0U;
	uint64_t x26 = 815391LLU;
	static uint32_t x27 = 6U;
	int32_t x28 = -1046241684;

	t6 = (x25|((x26%x27)<=x28));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = -16130;

	t7 = (x29|((x30%x31)<=x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static int16_t x34 = INT16_MIN;
	int32_t x35 = -1664509;
	int16_t x36 = INT16_MIN;

	t8 = (x33|((x34%x35)<=x36));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = 3395760855LLU;
	static int32_t x39 = 3;
	volatile int16_t x40 = -1;
	volatile int64_t t9 = -3638230LL;

	t9 = (x37|((x38%x39)<=x40));

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int16_t x43 = -5;
	uint8_t x44 = 108U;
	volatile int32_t t10 = -67984;

	t10 = (x41|((x42%x43)<=x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 0U;
	static int32_t x47 = -1314966;
	uint8_t x48 = 15U;
	int32_t t11 = 221818265;

	t11 = (x45|((x46%x47)<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -116141LL;
	uint16_t x50 = 27718U;
	volatile int16_t x52 = 8952;
	int64_t t12 = 64717LL;

	t12 = (x49|((x50%x51)<=x52));

	if (t12 != -116141LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	static volatile int8_t x54 = INT8_MAX;
	volatile int8_t x55 = 1;
	volatile int32_t x56 = INT32_MIN;
	int32_t t13 = INT32_MIN;

	t13 = (x53|((x54%x55)<=x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x57 = 2U;
	int16_t x58 = INT16_MIN;
	volatile uint32_t x59 = UINT32_MAX;
	int64_t x60 = -1LL;
	volatile uint32_t t14 = 243U;

	t14 = (x57|((x58%x59)<=x60));

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 575889LLU;
	int16_t x62 = 3885;
	static int16_t x63 = INT16_MAX;
	uint64_t x64 = 333512473028585459LLU;
	volatile uint64_t t15 = 430138440155914LLU;

	t15 = (x61|((x62%x63)<=x64));

	if (t15 != 575889LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -51;
	int8_t x66 = INT8_MAX;
	uint8_t x68 = 1U;
	volatile int32_t t16 = 13;

	t16 = (x65|((x66%x67)<=x68));

	if (t16 != -51) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 2;
	static int64_t x74 = INT64_MIN;
	static int8_t x75 = INT8_MIN;
	int32_t t17 = -1261579;

	t17 = (x73|((x74%x75)<=x76));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x80 = INT32_MIN;

	t18 = (x77|((x78%x79)<=x80));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int32_t x83 = -650;
	uint16_t x84 = 3U;
	int32_t t19 = -4;

	t19 = (x81|((x82%x83)<=x84));

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	int8_t x87 = -1;
	int64_t x88 = INT64_MIN;
	static int32_t t20 = INT32_MIN;

	t20 = (x85|((x86%x87)<=x88));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 31391249614158941LLU;
	static uint32_t x91 = 248878U;
	int32_t x92 = INT32_MIN;
	uint64_t t21 = 1415488825993LLU;

	t21 = (x89|((x90%x91)<=x92));

	if (t21 != 31391249614158941LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x93 = 4LLU;
	volatile uint32_t x94 = 1U;
	uint64_t x95 = 13673LLU;
	volatile int32_t x96 = -1;
	static volatile uint64_t t22 = 11LLU;

	t22 = (x93|((x94%x95)<=x96));

	if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 6425LLU;
	int8_t x98 = -5;
	volatile int8_t x99 = INT8_MAX;
	uint64_t t23 = 919552647659640LLU;

	t23 = (x97|((x98%x99)<=x100));

	if (t23 != 6425LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x103 = 36U;

	t24 = (x101|((x102%x103)<=x104));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x105 = 35U;
	volatile uint64_t x106 = UINT64_MAX;
	volatile int32_t t25 = 61;

	t25 = (x105|((x106%x107)<=x108));

	if (t25 != 35) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = 6607536435478LL;
	int8_t x110 = -1;
	int64_t x111 = 785177114669277398LL;
	uint16_t x112 = 910U;
	int64_t t26 = 2LL;

	t26 = (x109|((x110%x111)<=x112));

	if (t26 != 6607536435479LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x113 = 33U;
	volatile int32_t x115 = -1;
	int16_t x116 = INT16_MAX;
	volatile int32_t t27 = 1;

	t27 = (x113|((x114%x115)<=x116));

	if (t27 != 33) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x119 = INT64_MIN;
	uint8_t x120 = 7U;

	t28 = (x117|((x118%x119)<=x120));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = 73600;
	static volatile uint64_t x124 = 470154229294582536LLU;

	t29 = (x121|((x122%x123)<=x124));

	if (t29 != 73601) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 46U;
	uint32_t x127 = 2U;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t30 = -4361984;

	t30 = (x125|((x126%x127)<=x128));

	if (t30 != 47) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = INT32_MIN;
	int16_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	static int32_t t31 = -8829;

	t31 = (x129|((x130%x131)<=x132));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x134 = 29618U;
	uint64_t x135 = 265109947LLU;
	int64_t x136 = 162994402305502850LL;
	static int32_t t32 = -1;

	t32 = (x133|((x134%x135)<=x136));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	static int32_t x140 = -148;
	int64_t t33 = INT64_MIN;

	t33 = (x137|((x138%x139)<=x140));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 17U;
	uint32_t x142 = 1398353U;
	static volatile int16_t x143 = INT16_MAX;
	static int32_t x144 = INT32_MIN;

	t34 = (x141|((x142%x143)<=x144));

	if (t34 != 17) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x148 = 3U;
	int32_t t35 = -795506222;

	t35 = (x145|((x146%x147)<=x148));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = INT64_MIN;
	uint8_t x151 = 61U;
	static int8_t x152 = -1;

	t36 = (x149|((x150%x151)<=x152));

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x156 = 3;
	int32_t t37 = 93;

	t37 = (x153|((x154%x155)<=x156));

	if (t37 != -1054) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x157 = 3U;
	static int32_t x159 = INT32_MIN;
	uint16_t x160 = 565U;

	t38 = (x157|((x158%x159)<=x160));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	static uint32_t x164 = 16077910U;
	int64_t t39 = INT64_MIN;

	t39 = (x161|((x162%x163)<=x164));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -1;
	static int8_t x166 = INT8_MAX;
	static volatile int16_t x167 = -58;
	uint8_t x168 = 2U;
	int32_t t40 = 0;

	t40 = (x165|((x166%x167)<=x168));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = 0LL;
	static int64_t x170 = INT64_MIN;
	volatile int64_t x172 = INT64_MIN;

	t41 = (x169|((x170%x171)<=x172));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -256493;
	static uint64_t x174 = UINT64_MAX;
	uint32_t x176 = 101860U;
	volatile int32_t t42 = 474772;

	t42 = (x173|((x174%x175)<=x176));

	if (t42 != -256493) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MAX;
	int8_t x179 = 2;
	static int16_t x180 = INT16_MAX;
	int32_t t43 = -195400;

	t43 = (x177|((x178%x179)<=x180));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 4359U;
	int32_t x182 = -466540504;
	int16_t x183 = -1;
	uint16_t x184 = 1008U;
	volatile uint32_t t44 = 570795266U;

	t44 = (x181|((x182%x183)<=x184));

	if (t44 != 4359U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x185 = UINT16_MAX;
	static int64_t x186 = INT64_MIN;
	uint8_t x187 = UINT8_MAX;
	static uint16_t x188 = 1U;
	volatile int32_t t45 = -19552;

	t45 = (x185|((x186%x187)<=x188));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 1U;
	int8_t x191 = INT8_MAX;
	int32_t t46 = -6891089;

	t46 = (x189|((x190%x191)<=x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x193 = 48;
	uint32_t x194 = 324U;
	int16_t x195 = 286;
	int16_t x196 = INT16_MIN;
	int32_t t47 = -6390367;

	t47 = (x193|((x194%x195)<=x196));

	if (t47 != 49) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = 17LLU;
	static int8_t x198 = INT8_MAX;
	uint8_t x200 = 7U;
	uint64_t t48 = 8613794234550391471LLU;

	t48 = (x197|((x198%x199)<=x200));

	if (t48 != 17LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	static volatile uint64_t x202 = UINT64_MAX;
	int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MAX;
	static int32_t t49 = -1293617;

	t49 = (x201|((x202%x203)<=x204));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = UINT32_MAX;
	int16_t x206 = INT16_MIN;
	int64_t x207 = -1LL;
	static int64_t x208 = -73048152952LL;

	t50 = (x205|((x206%x207)<=x208));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -1;
	uint64_t x211 = 130011281197LLU;
	static volatile int32_t t51 = 192328;

	t51 = (x209|((x210%x211)<=x212));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x213 = 105753143U;
	int64_t x214 = -8443LL;
	int16_t x215 = INT16_MAX;
	static int32_t x216 = INT32_MIN;
	uint32_t t52 = 2299U;

	t52 = (x213|((x214%x215)<=x216));

	if (t52 != 105753143U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MAX;
	static int16_t x218 = INT16_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t53 = -470;

	t53 = (x217|((x218%x219)<=x220));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x222 = INT16_MAX;
	int32_t x223 = INT32_MAX;

	t54 = (x221|((x222%x223)<=x224));

	if (t54 != 78) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 0U;
	static uint32_t x226 = UINT32_MAX;
	int32_t x228 = -9429820;
	int32_t t55 = -2076684;

	t55 = (x225|((x226%x227)<=x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x230 = INT64_MIN;
	uint8_t x231 = 84U;
	int32_t x232 = INT32_MAX;
	uint64_t t56 = 6LLU;

	t56 = (x229|((x230%x231)<=x232));

	if (t56 != 177409LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x234 = -6362;
	static int16_t x235 = 6556;
	static volatile int32_t t57 = -552251899;

	t57 = (x233|((x234%x235)<=x236));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x238 = -1;
	static uint16_t x240 = UINT16_MAX;
	static int32_t t58 = 4;

	t58 = (x237|((x238%x239)<=x240));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1LL;

	t59 = (x241|((x242%x243)<=x244));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x245 = -1LL;
	volatile uint8_t x246 = UINT8_MAX;
	volatile int16_t x247 = INT16_MAX;
	volatile int64_t x248 = INT64_MAX;

	t60 = (x245|((x246%x247)<=x248));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -792881;
	int8_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	volatile int32_t t61 = -369;

	t61 = (x249|((x250%x251)<=x252));

	if (t61 != -792881) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MAX;
	uint32_t x254 = 32269U;
	int64_t t62 = INT64_MAX;

	t62 = (x253|((x254%x255)<=x256));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = 3894LL;
	int16_t x258 = -3;
	static int64_t x259 = INT64_MIN;
	static volatile int32_t x260 = -650;

	t63 = (x257|((x258%x259)<=x260));

	if (t63 != 3894LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	volatile int32_t x263 = INT32_MIN;
	static int32_t x264 = -1;

	t64 = (x261|((x262%x263)<=x264));

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x265 = -627;
	static uint8_t x266 = 3U;
	int64_t x268 = 1005183189467LL;
	int32_t t65 = -14846602;

	t65 = (x265|((x266%x267)<=x268));

	if (t65 != -627) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x269 = -1;
	uint8_t x270 = 0U;
	int32_t x271 = INT32_MAX;
	int16_t x272 = 4;
	volatile int32_t t66 = 7447524;

	t66 = (x269|((x270%x271)<=x272));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MAX;
	uint64_t x274 = 248LLU;
	int64_t x275 = -17LL;
	int8_t x276 = INT8_MIN;
	static int32_t t67 = -43924027;

	t67 = (x273|((x274%x275)<=x276));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x277 = INT64_MAX;
	int16_t x278 = INT16_MAX;
	int8_t x279 = 1;
	uint32_t x280 = 191727200U;
	int64_t t68 = INT64_MAX;

	t68 = (x277|((x278%x279)<=x280));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x282 = INT16_MAX;
	int32_t x283 = INT32_MAX;
	int16_t x284 = -2416;
	volatile int32_t t69 = -17;

	t69 = (x281|((x282%x283)<=x284));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = -539608LL;
	int64_t x286 = INT64_MAX;
	static volatile int16_t x287 = 139;
	int8_t x288 = INT8_MIN;
	static int64_t t70 = -3453814896740LL;

	t70 = (x285|((x286%x287)<=x288));

	if (t70 != -539608LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x289 = 100U;
	volatile uint16_t x290 = 1025U;
	volatile int64_t x291 = 2405224767LL;
	int8_t x292 = 27;
	static int32_t t71 = -3784588;

	t71 = (x289|((x290%x291)<=x292));

	if (t71 != 100) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 2119589537LLU;
	int32_t x294 = 1395002;
	static volatile int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	uint64_t t72 = 1874385LLU;

	t72 = (x293|((x294%x295)<=x296));

	if (t72 != 2119589537LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x297 = -1;
	int64_t x300 = 24248501469LL;
	volatile int32_t t73 = -63350518;

	t73 = (x297|((x298%x299)<=x300));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MAX;
	volatile int8_t x303 = 1;
	static int8_t x304 = INT8_MIN;
	int32_t t74 = 103910408;

	t74 = (x301|((x302%x303)<=x304));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = -7543LL;
	static int32_t x307 = -1;
	int32_t x308 = INT32_MIN;

	t75 = (x305|((x306%x307)<=x308));

	if (t75 != -7543LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = UINT64_MAX;
	int16_t x311 = -1;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x309|((x310%x311)<=x312));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MAX;
	int32_t x315 = -1;
	volatile int8_t x316 = -1;
	volatile int32_t t77 = 500;

	t77 = (x313|((x314%x315)<=x316));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 14U;
	volatile int16_t x318 = -1;
	int64_t x320 = -1LL;
	volatile uint32_t t78 = 249781936U;

	t78 = (x317|((x318%x319)<=x320));

	if (t78 != 15U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x321 = 112212;
	int64_t x324 = INT64_MIN;
	int32_t t79 = -1;

	t79 = (x321|((x322%x323)<=x324));

	if (t79 != 112212) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = INT16_MIN;
	static int8_t x327 = INT8_MIN;
	int8_t x328 = -1;
	volatile int32_t t80 = 1;

	t80 = (x325|((x326%x327)<=x328));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = -1117784;
	int32_t x330 = -1;
	int32_t x331 = -1382;
	volatile uint32_t x332 = UINT32_MAX;

	t81 = (x329|((x330%x331)<=x332));

	if (t81 != -1117783) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MIN;
	static int32_t x334 = -24;
	uint8_t x335 = UINT8_MAX;
	volatile int32_t x336 = INT32_MAX;

	t82 = (x333|((x334%x335)<=x336));

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = -745;
	volatile int8_t x339 = INT8_MIN;
	static uint32_t x340 = 140U;
	volatile int32_t t83 = 28;

	t83 = (x337|((x338%x339)<=x340));

	if (t83 != -745) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = INT64_MIN;
	static int16_t x342 = INT16_MIN;
	int32_t x344 = -1;
	volatile int64_t t84 = 15580909525361808LL;

	t84 = (x341|((x342%x343)<=x344));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = -10;
	int32_t x346 = -1;
	int32_t t85 = -521158554;

	t85 = (x345|((x346%x347)<=x348));

	if (t85 != -9) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x349 = INT16_MIN;
	static int32_t x350 = -1;
	static int32_t x352 = 951;
	int32_t t86 = -205938863;

	t86 = (x349|((x350%x351)<=x352));

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x355 = INT8_MIN;
	int32_t x356 = 0;
	volatile int32_t t87 = -99501836;

	t87 = (x353|((x354%x355)<=x356));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x357 = INT64_MIN;
	static uint16_t x359 = UINT16_MAX;
	uint32_t x360 = 23U;

	t88 = (x357|((x358%x359)<=x360));

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = INT64_MIN;
	uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	int64_t t89 = -163441LL;

	t89 = (x361|((x362%x363)<=x364));

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x365 = -1;
	uint32_t x366 = 9U;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t90 = 220800446;

	t90 = (x365|((x366%x367)<=x368));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x370 = 0U;
	volatile int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MIN;
	volatile int32_t t91 = -796523290;

	t91 = (x369|((x370%x371)<=x372));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x373 = 1872719554LLU;
	int64_t x376 = INT64_MIN;

	t92 = (x373|((x374%x375)<=x376));

	if (t92 != 1872719554LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x378 = INT32_MIN;
	uint8_t x379 = UINT8_MAX;
	volatile uint64_t x380 = UINT64_MAX;
	uint64_t t93 = 10954014734538028LLU;

	t93 = (x377|((x378%x379)<=x380));

	if (t93 != 5LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = INT8_MAX;
	uint16_t x383 = 13U;
	volatile uint16_t x384 = UINT16_MAX;

	t94 = (x381|((x382%x383)<=x384));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x387 = 7U;

	t95 = (x385|((x386%x387)<=x388));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x390 = -1LL;
	static volatile int32_t x391 = INT32_MAX;
	uint32_t x392 = UINT32_MAX;
	uint64_t t96 = 1042469121589913051LLU;

	t96 = (x389|((x390%x391)<=x392));

	if (t96 != 214399LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x394 = 910137821276500361LLU;
	volatile uint16_t x395 = 6U;
	static volatile uint64_t x396 = 96108815LLU;

	t97 = (x393|((x394%x395)<=x396));

	if (t97 != -9043431) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = -1;
	int32_t x398 = -84516260;
	static int16_t x399 = -1;
	volatile int16_t x400 = INT16_MIN;
	static volatile int32_t t98 = 222005;

	t98 = (x397|((x398%x399)<=x400));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x401 = -6;
	uint32_t x402 = 1342931U;
	int32_t x403 = INT32_MIN;
	static int32_t x404 = INT32_MIN;
	volatile int32_t t99 = -33871420;

	t99 = (x401|((x402%x403)<=x404));

	if (t99 != -5) { NG(); } else { ; }
	
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

