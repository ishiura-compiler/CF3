#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t1 = 3465859792LL;
uint8_t x13 = 0U;
volatile int64_t t2 = -21549214046144LL;
static uint16_t x17 = UINT16_MAX;
volatile int32_t x26 = INT32_MIN;
int16_t x28 = INT16_MIN;
int64_t t6 = -230271162654591334LL;
uint32_t x37 = UINT32_MAX;
int32_t x43 = INT32_MAX;
static uint8_t x53 = 5U;
int32_t x57 = INT32_MIN;
volatile int64_t x58 = 231669374992331615LL;
int8_t x59 = INT8_MIN;
int32_t x60 = INT32_MAX;
uint32_t t12 = 1398U;
static volatile uint32_t t13 = 495822U;
static volatile uint64_t t15 = 193109632503869LLU;
volatile int64_t x81 = -1LL;
static volatile int32_t x82 = INT32_MAX;
int32_t x92 = INT32_MAX;
int8_t x93 = INT8_MIN;
int8_t x97 = -1;
int32_t x107 = -1;
volatile int16_t x108 = INT16_MIN;
uint64_t t24 = 3625372676LLU;
volatile int32_t t26 = -4;
static int32_t x132 = 2;
uint32_t x140 = 63557U;
int16_t x146 = INT16_MIN;
volatile uint64_t t31 = 289036545151080752LLU;
uint8_t x154 = 2U;
volatile uint64_t t34 = 137415170507605LLU;
int16_t x161 = INT16_MIN;
volatile uint64_t x174 = UINT64_MAX;
static volatile int64_t t39 = -11LL;
static int32_t x185 = -3;
int32_t x191 = INT32_MAX;
int64_t x193 = INT64_MIN;
int32_t x195 = INT32_MIN;
static volatile int16_t x198 = -13;
volatile int32_t t46 = -560354;
uint8_t x214 = 17U;
volatile int8_t x215 = 0;
static int8_t x230 = INT8_MAX;
int32_t x234 = -1;
volatile uint16_t x236 = 1U;
volatile int32_t x238 = 11513;
uint64_t t54 = 377LLU;
int64_t x242 = 128840LL;
int64_t t55 = 2257LL;
int8_t x250 = 0;
static uint64_t x251 = UINT64_MAX;
int16_t x254 = -1;
int8_t x258 = -15;
uint8_t x262 = 1U;
uint64_t x263 = UINT64_MAX;
int16_t x269 = 1;
int8_t x272 = INT8_MIN;
static volatile int64_t x275 = INT64_MIN;
int16_t x278 = INT16_MAX;
uint8_t x284 = 6U;
uint32_t x297 = 79196008U;
uint8_t x303 = 16U;
volatile uint32_t t68 = 197438518U;
int64_t t69 = 78705745LL;
volatile int64_t x316 = INT64_MAX;
static volatile uint32_t x317 = 18415876U;
uint8_t x327 = 0U;
volatile int64_t t75 = -28LL;
volatile int32_t x341 = 4229085;
volatile int8_t x343 = -1;
int64_t x346 = INT64_MAX;
static int16_t x348 = INT16_MAX;
volatile int64_t t78 = 1074486223511LL;
uint32_t x350 = 4133U;
uint32_t t79 = 72U;
int64_t x358 = 1LL;
int8_t x360 = INT8_MIN;
volatile int64_t t80 = -937373LL;
volatile int64_t x364 = INT64_MAX;
volatile int16_t x372 = 2644;
uint64_t t83 = 57988125590318203LLU;
int32_t x373 = -1;
int32_t x389 = INT32_MAX;
static int8_t x390 = INT8_MIN;
int32_t x393 = INT32_MIN;
uint64_t x406 = 454063988336467LLU;
static volatile uint64_t t91 = 38592529LLU;
uint64_t x423 = 6237465789622572742LLU;
int16_t x425 = -1;
int64_t x430 = -1LL;
int8_t x431 = -1;
static int8_t x432 = INT8_MIN;
uint64_t x435 = 34835365855436LLU;
static int64_t x443 = -175912466671628392LL;
uint64_t x448 = 31152096225LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int8_t x2 = -1;
	uint8_t x3 = 73U;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -1;

	t0 = ((x1+x2)/(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = UINT16_MAX;
	volatile int8_t x10 = INT8_MIN;
	static int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MIN;

	t1 = ((x9+x10)/(x11|x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x14 = INT32_MIN;
	uint8_t x15 = 47U;
	int64_t x16 = INT64_MIN;

	t2 = ((x13+x14)/(x15|x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MAX;
	static uint32_t x20 = 448U;
	volatile int64_t t3 = -293645190351849557LL;

	t3 = ((x17+x18)/(x19|x20));

	if (t3 != -4294967297LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	static int64_t x22 = -1LL;
	int32_t x23 = -7;
	int8_t x24 = INT8_MAX;
	volatile int64_t t4 = 838716276133LL;

	t4 = ((x21+x22)/(x23|x24));

	if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 1044;
	volatile int16_t x27 = -1;
	volatile int32_t t5 = 5700300;

	t5 = ((x25+x26)/(x27|x28));

	if (t5 != 2147482604) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	volatile int8_t x30 = -1;
	static int16_t x31 = INT16_MAX;
	int64_t x32 = -1LL;

	t6 = ((x29+x30)/(x31|x32));

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x38 = UINT64_MAX;
	uint8_t x39 = 7U;
	static uint64_t x40 = UINT64_MAX;
	uint64_t t7 = 65127224105626733LLU;

	t7 = ((x37+x38)/(x39|x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	volatile int16_t x42 = 5728;
	int8_t x44 = INT8_MIN;
	volatile int64_t t8 = 119421337593704758LL;

	t8 = ((x41+x42)/(x43|x44));

	if (t8 != 9223372036854770080LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x49 = -1;
	int32_t x50 = -27532;
	static int16_t x51 = -1;
	static volatile int16_t x52 = -33;
	volatile int32_t t9 = -1036139;

	t9 = ((x49+x50)/(x51|x52));

	if (t9 != 27533) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = 17U;
	uint32_t x55 = 52605U;
	int16_t x56 = -1;
	uint32_t t10 = 94U;

	t10 = ((x53+x54)/(x55|x56));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t t11 = 2029LL;

	t11 = ((x57+x58)/(x59|x60));

	if (t11 != -231669372844847967LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x61 = 2U;
	static volatile uint32_t x62 = 12U;
	volatile int8_t x63 = -8;
	uint16_t x64 = UINT16_MAX;

	t12 = ((x61+x62)/(x63|x64));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x65 = INT16_MAX;
	static uint32_t x66 = 83526U;
	static volatile int32_t x67 = -24;
	volatile int8_t x68 = 0;

	t13 = ((x65+x66)/(x67|x68));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = -1;
	static uint8_t x70 = 15U;
	volatile int16_t x71 = INT16_MAX;
	uint64_t x72 = 401791139979602LLU;
	volatile uint64_t t14 = 435098382040192LLU;

	t14 = ((x69+x70)/(x71|x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x77 = INT16_MAX;
	uint64_t x78 = 2264234803195627LLU;
	static volatile int8_t x79 = -1;
	static uint8_t x80 = 81U;

	t15 = ((x77+x78)/(x79|x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x83 = INT16_MIN;
	int8_t x84 = -3;
	volatile int64_t t16 = -1085LL;

	t16 = ((x81+x82)/(x83|x84));

	if (t16 != -715827882LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = 5U;
	uint32_t x86 = UINT32_MAX;
	int16_t x87 = -50;
	volatile int16_t x88 = INT16_MAX;
	volatile uint32_t t17 = 502U;

	t17 = ((x85+x86)/(x87|x88));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int64_t x90 = INT64_MIN;
	int64_t x91 = -40660425220335832LL;
	volatile uint64_t t18 = 510996565768LLU;

	t18 = ((x89+x90)/(x91|x92));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	uint32_t x96 = 4U;
	volatile uint64_t t19 = 1LLU;

	t19 = ((x93+x94)/(x95|x96));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x98 = INT16_MAX;
	int32_t x99 = -1;
	int32_t x100 = 117284;
	volatile int32_t t20 = -25924;

	t20 = ((x97+x98)/(x99|x100));

	if (t20 != -32766) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -1;
	int8_t x102 = INT8_MAX;
	volatile int16_t x103 = INT16_MIN;
	int64_t x104 = 1765331358616LL;
	volatile int64_t t21 = -15194551778754304LL;

	t21 = ((x101+x102)/(x103|x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -151839849;
	static uint32_t x106 = 860455U;
	uint32_t t22 = 78394795U;

	t22 = ((x105+x106)/(x107|x108));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = INT16_MIN;
	int32_t x110 = -1250360;
	static int32_t x111 = INT32_MAX;
	static int32_t x112 = INT32_MAX;
	int32_t t23 = 979000;

	t23 = ((x109+x110)/(x111|x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MIN;
	volatile int16_t x114 = INT16_MAX;
	static volatile uint64_t x115 = 3615167941624527LLU;
	int16_t x116 = 5;

	t24 = ((x113+x114)/(x115|x116));

	if (t24 != 5102LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x118 = -83920141336089LL;
	uint32_t x119 = 9031409U;
	volatile uint64_t x120 = 30LLU;
	volatile uint64_t t25 = 84909LLU;

	t25 = ((x117+x118)/(x119|x120));

	if (t25 != 2042497638917LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -2;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;

	t26 = ((x125+x126)/(x127|x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x129 = -6;
	int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MAX;
	int32_t t27 = 10025912;

	t27 = ((x129+x130)/(x131|x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	volatile uint32_t x134 = 5U;
	int8_t x135 = -1;
	int16_t x136 = INT16_MIN;
	static uint32_t t28 = 480920U;

	t28 = ((x133+x134)/(x135|x136));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MIN;
	uint64_t x139 = UINT64_MAX;
	uint64_t t29 = 1021LLU;

	t29 = ((x137+x138)/(x139|x140));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x141 = INT16_MIN;
	volatile int8_t x142 = -4;
	int32_t x143 = -1;
	int32_t x144 = INT32_MAX;
	static volatile int32_t t30 = 202;

	t30 = ((x141+x142)/(x143|x144));

	if (t30 != 32772) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x145 = 3U;
	static uint64_t x147 = 13246415LLU;
	uint32_t x148 = 884667863U;

	t31 = ((x145+x146)/(x147|x148));

	if (t31 != 20753151010LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MIN;
	static volatile int32_t x150 = 114166;
	volatile int16_t x151 = -1061;
	int64_t x152 = -1LL;
	volatile int64_t t32 = -3298267230035LL;

	t32 = ((x149+x150)/(x151|x152));

	if (t32 != 9223372036854661642LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x153 = 46832263244481LLU;
	uint64_t x155 = 977023735196LLU;
	uint32_t x156 = 1514U;
	volatile uint64_t t33 = 38593681721091LLU;

	t33 = ((x153+x154)/(x155|x156));

	if (t33 != 47LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = 8371LL;
	static uint8_t x158 = 10U;
	volatile int32_t x159 = -3269038;
	uint64_t x160 = 6304865004523527583LLU;

	t34 = ((x157+x158)/(x159|x160));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x162 = 1;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = 1308U;
	uint32_t t35 = 1446516684U;

	t35 = ((x161+x162)/(x163|x164));

	if (t35 != 131075U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = 5398LLU;
	int64_t x166 = 622277374842LL;
	volatile uint8_t x167 = 1U;
	uint32_t x168 = UINT32_MAX;
	volatile uint64_t t36 = 781LLU;

	t36 = ((x165+x166)/(x167|x168));

	if (t36 != 144LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = INT64_MAX;
	volatile int32_t x170 = -1;
	static int32_t x171 = -869;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t37 = 428938993381617LL;

	t37 = ((x169+x170)/(x171|x172));

	if (t37 != -10613776797301237LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	int64_t x175 = INT64_MIN;
	volatile int64_t x176 = -6646331LL;
	uint64_t t38 = 0LLU;

	t38 = ((x173+x174)/(x175|x176));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MAX;
	int32_t x178 = -1;
	int16_t x179 = -1;
	static int64_t x180 = 4918021LL;

	t39 = ((x177+x178)/(x179|x180));

	if (t39 != -2147483646LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x181 = INT8_MIN;
	uint32_t x182 = 2145U;
	volatile int16_t x183 = INT16_MIN;
	volatile int8_t x184 = -1;
	volatile uint32_t t40 = 1U;

	t40 = ((x181+x182)/(x183|x184));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x186 = UINT8_MAX;
	static int32_t x187 = INT32_MAX;
	static uint32_t x188 = 14710727U;
	volatile uint32_t t41 = 102U;

	t41 = ((x185+x186)/(x187|x188));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x189 = 42;
	static uint8_t x190 = 1U;
	volatile int32_t x192 = INT32_MAX;
	int32_t t42 = -108584707;

	t42 = ((x189+x190)/(x191|x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x194 = INT8_MAX;
	int8_t x196 = -46;
	static volatile int64_t t43 = 0LL;

	t43 = ((x193+x194)/(x195|x196));

	if (t43 != 200508087757712514LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x197 = -43325719245185LL;
	static int32_t x199 = INT32_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t44 = -9582705131709411LL;

	t44 = ((x197+x198)/(x199|x200));

	if (t44 != -10087LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x201 = UINT8_MAX;
	int8_t x202 = -1;
	int64_t x203 = -62289958928710381LL;
	static int32_t x204 = -451155;
	volatile int64_t t45 = -224644220070454LL;

	t45 = ((x201+x202)/(x203|x204));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = 59U;
	uint16_t x206 = 13U;
	int8_t x207 = INT8_MIN;
	static int32_t x208 = -1;

	t46 = ((x205+x206)/(x207|x208));

	if (t46 != -72) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = 125U;
	static volatile int32_t x211 = -1;
	int64_t x212 = 381LL;
	int64_t t47 = 27554LL;

	t47 = ((x209+x210)/(x211|x212));

	if (t47 != 9223372036854775683LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x213 = 657562648795LLU;
	static int8_t x216 = -1;
	uint64_t t48 = 7129205570LLU;

	t48 = ((x213+x214)/(x215|x216));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MAX;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = -1;
	static uint64_t t49 = 564915LLU;

	t49 = ((x217+x218)/(x219|x220));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x221 = INT8_MIN;
	volatile int64_t x222 = 918244528068916LL;
	uint8_t x223 = UINT8_MAX;
	static int16_t x224 = INT16_MIN;
	int64_t t50 = -21169166LL;

	t50 = ((x221+x222)/(x223|x224));

	if (t50 != -28242380834LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 120U;
	static int16_t x226 = INT16_MIN;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	static volatile uint32_t t51 = 9U;

	t51 = ((x225+x226)/(x227|x228));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MAX;
	volatile int64_t t52 = 825232298959462LL;

	t52 = ((x229+x230)/(x231|x232));

	if (t52 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x233 = 500U;
	uint8_t x235 = UINT8_MAX;
	uint32_t t53 = 10756412U;

	t53 = ((x233+x234)/(x235|x236));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 13U;
	int32_t x239 = 168541;
	volatile uint64_t x240 = 1300851LLU;

	t54 = ((x237+x238)/(x239|x240));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x241 = INT8_MIN;
	uint32_t x243 = 3505U;
	int32_t x244 = 2128269;

	t55 = ((x241+x242)/(x243|x244));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MAX;
	volatile int32_t x246 = -68243897;
	int16_t x247 = 1;
	static int32_t x248 = INT32_MAX;
	volatile int32_t t56 = 7577;

	t56 = ((x245+x246)/(x247|x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = INT32_MIN;
	int16_t x252 = -1008;
	uint64_t t57 = 306487971283492LLU;

	t57 = ((x249+x250)/(x251|x252));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x253 = -1;
	static int32_t x255 = INT32_MAX;
	static volatile int32_t x256 = INT32_MIN;
	volatile int32_t t58 = -470842;

	t58 = ((x253+x254)/(x255|x256));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x257 = -1;
	int32_t x259 = 7120495;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t59 = 291644;

	t59 = ((x257+x258)/(x259|x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x261 = UINT64_MAX;
	uint16_t x264 = 132U;
	static volatile uint64_t t60 = 16058746239747501LLU;

	t60 = ((x261+x262)/(x263|x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = -327193196;
	uint16_t x271 = 11664U;
	volatile int32_t t61 = -344131923;

	t61 = ((x269+x270)/(x271|x272));

	if (t61 != 2921367) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = UINT8_MAX;
	static uint32_t x274 = 383U;
	int16_t x276 = INT16_MIN;
	int64_t t62 = -13791698941LL;

	t62 = ((x273+x274)/(x275|x276));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x277 = 26;
	int16_t x279 = -1;
	int32_t x280 = INT32_MAX;
	int32_t t63 = 5;

	t63 = ((x277+x278)/(x279|x280));

	if (t63 != -32793) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x281 = 0U;
	static volatile uint32_t x282 = UINT32_MAX;
	static int8_t x283 = -3;
	uint32_t t64 = 90U;

	t64 = ((x281+x282)/(x283|x284));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x285 = 166406U;
	uint8_t x286 = UINT8_MAX;
	static int16_t x287 = -68;
	uint16_t x288 = UINT16_MAX;
	static uint32_t t65 = 1351473U;

	t65 = ((x285+x286)/(x287|x288));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 46U;
	int64_t x294 = INT64_MIN;
	static int8_t x295 = -1;
	int8_t x296 = -62;
	volatile int64_t t66 = 23633141LL;

	t66 = ((x293+x294)/(x295|x296));

	if (t66 != 9223372036854775762LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x298 = INT32_MAX;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MIN;
	uint32_t t67 = 68U;

	t67 = ((x297+x298)/(x299|x300));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x301 = INT32_MAX;
	int8_t x302 = -1;
	volatile uint32_t x304 = 1730U;

	t68 = ((x301+x302)/(x303|x304));

	if (t68 != 1229944U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = 161398819;
	int32_t x306 = INT32_MIN;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = INT64_MAX;

	t69 = ((x305+x306)/(x307|x308));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MIN;
	static int8_t x310 = INT8_MAX;
	static volatile uint16_t x311 = 9U;
	static int64_t x312 = -1LL;
	volatile int64_t t70 = 66930036066867390LL;

	t70 = ((x309+x310)/(x311|x312));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = -1;
	static int8_t x314 = INT8_MIN;
	static int16_t x315 = 1;
	int64_t t71 = 416422LL;

	t71 = ((x313+x314)/(x315|x316));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x318 = -1;
	static uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 2U;
	uint32_t t72 = 707U;

	t72 = ((x317+x318)/(x319|x320));

	if (t72 != 72219U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = INT8_MAX;
	volatile int8_t x322 = 0;
	volatile int8_t x323 = -2;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t73 = 544850581458761094LLU;

	t73 = ((x321+x322)/(x323|x324));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = 29U;
	int16_t x326 = INT16_MAX;
	int32_t x328 = -1;
	int32_t t74 = 778857;

	t74 = ((x325+x326)/(x327|x328));

	if (t74 != -32796) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = INT32_MIN;
	static uint8_t x330 = 1U;
	volatile int64_t x331 = INT64_MAX;
	int8_t x332 = -1;

	t75 = ((x329+x330)/(x331|x332));

	if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = -53;
	int8_t x334 = -2;
	uint64_t x335 = UINT64_MAX;
	volatile int8_t x336 = INT8_MIN;
	static uint64_t t76 = 11239376LLU;

	t76 = ((x333+x334)/(x335|x336));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x342 = 43U;
	int16_t x344 = 14197;
	static volatile int32_t t77 = 28764;

	t77 = ((x341+x342)/(x343|x344));

	if (t77 != -4229128) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = -1;
	static int16_t x347 = 179;

	t78 = ((x345+x346)/(x347|x348));

	if (t78 != 281483566907400LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = UINT16_MAX;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = 15942;

	t79 = ((x349+x350)/(x351|x352));

	if (t79 != 4U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = -3;
	volatile int16_t x359 = INT16_MIN;

	t80 = ((x357+x358)/(x359|x360));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = -1LL;
	uint64_t x363 = UINT64_MAX;
	volatile uint64_t t81 = 409235LLU;

	t81 = ((x361+x362)/(x363|x364));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = -57;
	volatile int32_t x366 = -1753255;
	int8_t x367 = INT8_MIN;
	volatile uint16_t x368 = UINT16_MAX;
	int32_t t82 = 2251;

	t82 = ((x365+x366)/(x367|x368));

	if (t82 != 1753312) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x369 = 9092672804097225315LLU;
	static uint16_t x370 = 25U;
	int32_t x371 = INT32_MIN;

	t83 = ((x369+x370)/(x371|x372));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x374 = 1580033LLU;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = UINT64_MAX;
	static volatile uint64_t t84 = 831847006358LLU;

	t84 = ((x373+x374)/(x375|x376));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = -1LL;
	int16_t x378 = INT16_MAX;
	volatile int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MIN;
	int64_t t85 = 567132LL;

	t85 = ((x377+x378)/(x379|x380));

	if (t85 != -32766LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MIN;
	static int16_t x383 = -2087;
	uint8_t x384 = 1U;
	uint32_t t86 = 127U;

	t86 = ((x381+x382)/(x383|x384));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x391 = 54842011840386590LL;
	int64_t x392 = INT64_MIN;
	static volatile int64_t t87 = 1176LL;

	t87 = ((x389+x390)/(x391|x392));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x394 = 2U;
	volatile int64_t x395 = INT64_MIN;
	uint64_t x396 = 98795482893LLU;
	uint64_t t88 = 3436357459790139922LLU;

	t88 = ((x393+x394)/(x395|x396));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = INT64_MIN;
	int32_t x407 = 0;
	volatile int8_t x408 = INT8_MIN;
	static volatile uint64_t t89 = 426422LLU;

	t89 = ((x405+x406)/(x407|x408));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x409 = UINT16_MAX;
	uint64_t x410 = 4278144057071LLU;
	int32_t x411 = 945073;
	int32_t x412 = 4737;
	static volatile uint64_t t90 = 15949104577LLU;

	t90 = ((x409+x410)/(x411|x412));

	if (t90 != 4507252LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 67389131984503295LLU;
	int16_t x414 = 16;
	int64_t x415 = INT64_MIN;
	static int64_t x416 = INT64_MIN;

	t91 = ((x413+x414)/(x415|x416));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x417 = 19315LLU;
	int16_t x418 = -3675;
	uint16_t x419 = 1717U;
	volatile uint32_t x420 = 69201U;
	static uint64_t t92 = 29718027020635710LLU;

	t92 = ((x417+x418)/(x419|x420));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = INT16_MAX;
	int16_t x424 = INT16_MIN;
	static volatile uint64_t t93 = 2LLU;

	t93 = ((x421+x422)/(x423|x424));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x426 = -24;
	static volatile uint8_t x427 = 44U;
	static int8_t x428 = INT8_MIN;
	volatile int32_t t94 = -459040761;

	t94 = ((x425+x426)/(x427|x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x429 = INT16_MIN;
	int64_t t95 = -1333LL;

	t95 = ((x429+x430)/(x431|x432));

	if (t95 != 32769LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x433 = 47943106764990LL;
	int64_t x434 = 97971822883376LL;
	int32_t x436 = INT32_MIN;
	volatile uint64_t t96 = 105830339322LLU;

	t96 = ((x433+x434)/(x435|x436));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x437 = 1495LLU;
	uint8_t x438 = 4U;
	volatile uint32_t x439 = 0U;
	static int32_t x440 = -87167;
	uint64_t t97 = 5960LLU;

	t97 = ((x437+x438)/(x439|x440));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x441 = UINT16_MAX;
	static int8_t x442 = -5;
	static int16_t x444 = INT16_MIN;
	volatile int64_t t98 = 451063LL;

	t98 = ((x441+x442)/(x443|x444));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = INT64_MIN;
	uint32_t x446 = 238524U;
	static uint32_t x447 = UINT32_MAX;
	uint64_t t99 = 19827768406LLU;

	t99 = ((x445+x446)/(x447|x448));

	if (t99 != 268435456LLU) { NG(); } else { ; }
	
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

