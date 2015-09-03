#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 943567568U;
volatile int16_t x4 = INT16_MIN;
int64_t t1 = -60830LL;
volatile int32_t t2 = -507241;
static int32_t x18 = INT32_MIN;
int8_t x30 = INT8_MIN;
int64_t x36 = -1LL;
static volatile uint64_t x37 = 85270LLU;
uint64_t t7 = 458727965LLU;
int32_t x72 = INT32_MIN;
static int32_t x84 = INT32_MIN;
int32_t x85 = 2890;
uint64_t x86 = 955470LLU;
volatile int64_t x89 = INT64_MAX;
static volatile uint64_t x91 = 344LLU;
uint8_t x93 = UINT8_MAX;
int32_t x95 = INT32_MIN;
static volatile uint64_t t16 = 952802282973LLU;
uint8_t x104 = UINT8_MAX;
int64_t x106 = -1LL;
volatile int16_t x115 = INT16_MIN;
int32_t x117 = -3283;
uint8_t x118 = UINT8_MAX;
static volatile uint16_t x122 = 384U;
static int16_t x123 = 111;
uint32_t x129 = 86U;
int16_t x132 = 8152;
static int8_t x141 = INT8_MIN;
int16_t x143 = 2776;
uint64_t t25 = 88LLU;
uint16_t x153 = UINT16_MAX;
volatile uint16_t x158 = 1U;
static int8_t x159 = INT8_MIN;
static int16_t x160 = 1;
int64_t x169 = 39373543738289LL;
int64_t x170 = INT64_MIN;
int32_t x181 = -1;
static int64_t x184 = INT64_MAX;
int8_t x186 = -1;
volatile int16_t x188 = -1;
uint64_t t34 = 1LLU;
uint16_t x196 = 324U;
static int16_t x205 = 89;
uint32_t x207 = UINT32_MAX;
static volatile uint64_t x208 = UINT64_MAX;
int64_t x213 = -1663458070060123LL;
uint16_t x214 = 0U;
int64_t t39 = 164259976LL;
uint32_t x217 = 226365U;
int32_t x219 = -1;
volatile int16_t x220 = -1;
uint64_t t40 = 1403700747LLU;
int16_t x231 = INT16_MIN;
volatile int16_t x234 = -1;
int64_t x240 = INT64_MIN;
int16_t x242 = INT16_MIN;
volatile uint16_t x251 = 1U;
volatile int64_t t48 = -10226249570333LL;
int16_t x257 = -869;
int16_t x258 = -73;
int8_t x262 = INT8_MIN;
uint16_t x263 = 3U;
static volatile uint8_t x265 = 2U;
int64_t x266 = -3629872LL;
uint32_t x269 = UINT32_MAX;
volatile int64_t t52 = 53376466043LL;
int32_t x278 = 13593;
int32_t x282 = INT32_MIN;
uint32_t x283 = 114002U;
int32_t x285 = -1;
volatile uint8_t x288 = 3U;
uint8_t x289 = 0U;
int64_t x290 = -1LL;
int8_t x301 = -1;
int32_t x304 = -111355231;
uint64_t t61 = 4332LLU;
volatile int32_t x309 = INT32_MIN;
int32_t x310 = INT32_MAX;
uint32_t x322 = UINT32_MAX;
volatile int64_t x341 = INT64_MAX;
int64_t x352 = 1526018254581LL;
uint64_t t72 = 7LLU;
int16_t x360 = INT16_MAX;
int64_t x361 = INT64_MIN;
int16_t x364 = INT16_MAX;
int32_t x369 = INT32_MIN;
int16_t x372 = 13339;
int16_t x374 = 30;
int32_t x377 = -16;
int32_t x391 = INT32_MIN;
int16_t x392 = -4;
volatile int64_t t80 = -47415LL;
uint64_t x397 = UINT64_MAX;
int32_t x402 = -1;
uint64_t x404 = UINT64_MAX;
int8_t x417 = INT8_MIN;
static int16_t x418 = 58;
uint32_t t87 = 280239091U;
int16_t x435 = INT16_MAX;
static int64_t x443 = 24526988473492682LL;
static int64_t x448 = -1LL;
int8_t x459 = INT8_MIN;
volatile uint32_t x462 = 7U;
int8_t x464 = INT8_MAX;
static int64_t x474 = INT64_MAX;
int32_t x481 = -1;
int16_t x482 = -1;


void f0(void) {
	uint16_t x1 = 14U;
	uint64_t x3 = UINT64_MAX;
	static volatile uint64_t t0 = 286LLU;

	t0 = (((x1+x2)/x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	int32_t x6 = -1;
	int64_t x7 = -3245985088715LL;
	volatile uint16_t x8 = 9U;

	t1 = (((x5+x6)/x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = UINT8_MAX;
	volatile int16_t x15 = 2821;
	int32_t x16 = -16539762;

	t2 = (((x13+x14)/x15)/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 94U;
	uint32_t x19 = UINT32_MAX;
	static volatile int32_t x20 = INT32_MIN;
	volatile uint32_t t3 = 265273664U;

	t3 = (((x17+x18)/x19)/x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = -3204975044LL;
	int64_t x31 = INT64_MAX;
	static int8_t x32 = INT8_MAX;
	static volatile int64_t t4 = -21LL;

	t4 = (((x29+x30)/x31)/x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x33 = INT32_MIN;
	static uint8_t x34 = 2U;
	static uint64_t x35 = UINT64_MAX;
	volatile uint64_t t5 = 13LLU;

	t5 = (((x33+x34)/x35)/x36);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x38 = 8U;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MAX;
	static volatile uint64_t t6 = 2729638768507LLU;

	t6 = (((x37+x38)/x39)/x40);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MAX;
	uint32_t x50 = 14U;
	volatile int16_t x51 = INT16_MAX;
	uint64_t x52 = 15LLU;

	t7 = (((x49+x50)/x51)/x52);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x57 = -3151784;
	int32_t x58 = 0;
	static uint16_t x59 = 7734U;
	volatile int8_t x60 = 43;
	volatile int32_t t8 = 23139;

	t8 = (((x57+x58)/x59)/x60);

	if (t8 != -9) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x65 = -1LL;
	static volatile int16_t x66 = 3;
	volatile uint16_t x67 = 15U;
	int8_t x68 = -1;
	int64_t t9 = -1581077LL;

	t9 = (((x65+x66)/x67)/x68);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x69 = 1U;
	static int32_t x70 = 1;
	uint32_t x71 = 16806839U;
	uint32_t t10 = 2U;

	t10 = (((x69+x70)/x71)/x72);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x73 = UINT8_MAX;
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = -10;
	static int32_t t11 = -7422449;

	t11 = (((x73+x74)/x75)/x76);

	if (t11 != 51) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = 0;
	int8_t x83 = INT8_MIN;
	static int64_t t12 = 146504542641LL;

	t12 = (((x81+x82)/x83)/x84);

	if (t12 != -33554432LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x87 = 5824;
	int16_t x88 = INT16_MIN;
	static volatile uint64_t t13 = 1459680131350191249LLU;

	t13 = (((x85+x86)/x87)/x88);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x90 = INT32_MIN;
	int64_t x92 = INT64_MAX;
	volatile uint64_t t14 = 1193LLU;

	t14 = (((x89+x90)/x91)/x92);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x94 = -1;
	volatile uint16_t x96 = 333U;
	int32_t t15 = 16231245;

	t15 = (((x93+x94)/x95)/x96);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x97 = 20707U;
	volatile int16_t x98 = INT16_MIN;
	uint64_t x99 = UINT64_MAX;
	volatile int16_t x100 = INT16_MAX;

	t16 = (((x97+x98)/x99)/x100);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = 10;
	int64_t x103 = -1LL;
	int64_t t17 = -465227235LL;

	t17 = (((x101+x102)/x103)/x104);

	if (t17 != 8421504LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x105 = -41;
	volatile int64_t x107 = INT64_MIN;
	uint16_t x108 = UINT16_MAX;
	static volatile int64_t t18 = 4LL;

	t18 = (((x105+x106)/x107)/x108);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x109 = UINT64_MAX;
	volatile uint8_t x110 = UINT8_MAX;
	int64_t x111 = -1LL;
	static int32_t x112 = -1;
	static volatile uint64_t t19 = 721480397LLU;

	t19 = (((x109+x110)/x111)/x112);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -26;
	uint8_t x114 = UINT8_MAX;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t20 = -794;

	t20 = (((x113+x114)/x115)/x116);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x119 = INT16_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	static uint64_t t21 = 65403354624246LLU;

	t21 = (((x117+x118)/x119)/x120);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x124 = 11495493473630718LLU;
	volatile uint64_t t22 = 11507LLU;

	t22 = (((x121+x122)/x123)/x124);

	if (t22 != 1604LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x130 = INT64_MIN;
	volatile uint64_t x131 = UINT64_MAX;
	uint64_t t23 = 2225LLU;

	t23 = (((x129+x130)/x131)/x132);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x142 = 8U;
	int8_t x144 = -35;
	static int32_t t24 = -13;

	t24 = (((x141+x142)/x143)/x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x145 = 1766718558LLU;
	int32_t x146 = INT32_MIN;
	static int8_t x147 = INT8_MIN;
	static int64_t x148 = INT64_MIN;

	t25 = (((x145+x146)/x147)/x148);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = -17;
	static int16_t x150 = -1;
	volatile int32_t x151 = -7733;
	static int32_t x152 = 3252;
	volatile int32_t t26 = 3980;

	t26 = (((x149+x150)/x151)/x152);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x154 = INT8_MAX;
	int8_t x155 = INT8_MAX;
	uint32_t x156 = UINT32_MAX;
	static volatile uint32_t t27 = 178U;

	t27 = (((x153+x154)/x155)/x156);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x157 = UINT32_MAX;
	static uint32_t t28 = 1583587183U;

	t28 = (((x157+x158)/x159)/x160);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MAX;
	volatile uint32_t x167 = 1081839541U;
	static uint16_t x168 = UINT16_MAX;
	static volatile int64_t t29 = 4519LL;

	t29 = (((x165+x166)/x167)/x168);

	if (t29 != -130092LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x171 = 460;
	int64_t x172 = -1LL;
	int64_t t30 = 18396930348LL;

	t30 = (((x169+x170)/x171)/x172);

	if (t30 != 20050723181110951LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x174 = -1;
	volatile int16_t x175 = -63;
	uint32_t x176 = 2915U;
	static volatile uint32_t t31 = 105U;

	t31 = (((x173+x174)/x175)/x176);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x177 = -624595846;
	int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MIN;
	int16_t x180 = -1;
	volatile int32_t t32 = -120;

	t32 = (((x177+x178)/x179)/x180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x182 = UINT32_MAX;
	volatile uint8_t x183 = UINT8_MAX;
	int64_t t33 = -1554214652925834502LL;

	t33 = (((x181+x182)/x183)/x184);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = -1LL;
	static uint64_t x187 = 117399746194435LLU;

	t34 = (((x185+x186)/x187)/x188);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x193 = 9U;
	int32_t x194 = 79955;
	static int32_t x195 = INT32_MIN;
	static int32_t t35 = 253;

	t35 = (((x193+x194)/x195)/x196);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x197 = 1484651LLU;
	volatile int64_t x198 = INT64_MAX;
	int32_t x199 = INT32_MAX;
	int8_t x200 = -11;
	volatile uint64_t t36 = 672052LLU;

	t36 = (((x197+x198)/x199)/x200);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x206 = UINT8_MAX;
	volatile uint64_t t37 = 1957229926697LLU;

	t37 = (((x205+x206)/x207)/x208);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x209 = 6U;
	static uint32_t x210 = 4U;
	int64_t x211 = INT64_MAX;
	int32_t x212 = INT32_MIN;
	volatile int64_t t38 = 810047LL;

	t38 = (((x209+x210)/x211)/x212);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x215 = 13;
	uint16_t x216 = 700U;

	t39 = (((x213+x214)/x215)/x216);

	if (t39 != -182797590116LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x218 = 214940366056LLU;

	t40 = (((x217+x218)/x219)/x220);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = -1;
	int32_t t41 = 56;

	t41 = (((x221+x222)/x223)/x224);

	if (t41 != 257) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x229 = -1;
	uint64_t x230 = 295581LLU;
	int32_t x232 = INT32_MIN;
	static volatile uint64_t t42 = 15452LLU;

	t42 = (((x229+x230)/x231)/x232);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x233 = -17;
	int64_t x235 = -10371750552LL;
	static int8_t x236 = -1;
	int64_t t43 = 79674LL;

	t43 = (((x233+x234)/x235)/x236);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x237 = 12U;
	uint8_t x238 = 1U;
	volatile int16_t x239 = INT16_MIN;
	int64_t t44 = 100LL;

	t44 = (((x237+x238)/x239)/x240);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x241 = INT32_MAX;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	int64_t t45 = -654191LL;

	t45 = (((x241+x242)/x243)/x244);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = INT32_MIN;
	static volatile uint32_t x246 = 1933864U;
	int8_t x247 = -31;
	int32_t x248 = 39818;
	static volatile uint32_t t46 = 6666U;

	t46 = (((x245+x246)/x247)/x248);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x249 = 6U;
	uint32_t x250 = 1U;
	uint8_t x252 = 10U;
	volatile uint32_t t47 = 11129208U;

	t47 = (((x249+x250)/x251)/x252);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = -4;
	int32_t x254 = 1;
	int64_t x255 = -1LL;
	static int8_t x256 = INT8_MIN;

	t48 = (((x253+x254)/x255)/x256);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MAX;
	uint64_t t49 = 630925375716LLU;

	t49 = (((x257+x258)/x259)/x260);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = INT8_MIN;
	int64_t x264 = -16LL;
	volatile int64_t t50 = -38879LL;

	t50 = (((x261+x262)/x263)/x264);

	if (t50 != 5LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x267 = INT32_MIN;
	static int8_t x268 = INT8_MIN;
	int64_t t51 = -746LL;

	t51 = (((x265+x266)/x267)/x268);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x270 = -12505120504LL;
	int64_t x271 = -236470400640088LL;
	int8_t x272 = INT8_MAX;

	t52 = (((x269+x270)/x271)/x272);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x273 = UINT32_MAX;
	static int16_t x274 = INT16_MIN;
	uint64_t x275 = 8400601685465265524LLU;
	static int16_t x276 = -1;
	volatile uint64_t t53 = 1LLU;

	t53 = (((x273+x274)/x275)/x276);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x277 = 1368416789522790000LLU;
	static int32_t x279 = 807;
	volatile int16_t x280 = INT16_MIN;
	volatile uint64_t t54 = 8010003512046345LLU;

	t54 = (((x277+x278)/x279)/x280);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x281 = INT64_MAX;
	int8_t x284 = INT8_MAX;
	static int64_t t55 = 1057999093LL;

	t55 = (((x281+x282)/x283)/x284);

	if (t55 != 637050022378LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x286 = 2303U;
	static uint8_t x287 = 4U;
	static int32_t t56 = -6;

	t56 = (((x285+x286)/x287)/x288);

	if (t56 != 191) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t57 = 437625088LL;

	t57 = (((x289+x290)/x291)/x292);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x293 = 875U;
	volatile int16_t x294 = -1;
	volatile int16_t x295 = INT16_MIN;
	volatile uint32_t x296 = 1U;
	volatile uint32_t t58 = 232392U;

	t58 = (((x293+x294)/x295)/x296);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x297 = 75U;
	volatile uint8_t x298 = 1U;
	volatile uint16_t x299 = UINT16_MAX;
	uint32_t x300 = 7U;
	uint32_t t59 = 28518104U;

	t59 = (((x297+x298)/x299)/x300);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x302 = UINT16_MAX;
	volatile uint32_t x303 = 52U;
	volatile uint32_t t60 = 57U;

	t60 = (((x301+x302)/x303)/x304);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x305 = -1;
	static volatile uint32_t x306 = UINT32_MAX;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t x308 = 993087899336LLU;

	t61 = (((x305+x306)/x307)/x308);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x311 = -1LL;
	int64_t x312 = -1LL;
	static volatile int64_t t62 = -3094918225280651LL;

	t62 = (((x309+x310)/x311)/x312);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x313 = -1;
	static uint8_t x314 = 0U;
	int64_t x315 = INT64_MAX;
	uint32_t x316 = 725626574U;
	volatile int64_t t63 = -20180840017LL;

	t63 = (((x313+x314)/x315)/x316);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x321 = 8089LL;
	static int8_t x323 = -15;
	uint16_t x324 = 4356U;
	int64_t t64 = 5007634985831326LL;

	t64 = (((x321+x322)/x323)/x324);

	if (t64 != -65732LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = INT32_MIN;
	volatile uint8_t x326 = 1U;
	uint16_t x327 = UINT16_MAX;
	volatile int16_t x328 = INT16_MAX;
	volatile int32_t t65 = -494;

	t65 = (((x325+x326)/x327)/x328);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x329 = UINT8_MAX;
	int32_t x330 = -957158282;
	int64_t x331 = -1LL;
	int8_t x332 = 1;
	int64_t t66 = 721707LL;

	t66 = (((x329+x330)/x331)/x332);

	if (t66 != 957158027LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x333 = 36U;
	int8_t x334 = INT8_MAX;
	uint16_t x335 = 13U;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t67 = 1387295831794024243LLU;

	t67 = (((x333+x334)/x335)/x336);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = -1;
	uint32_t x339 = 1226214U;
	int16_t x340 = INT16_MIN;
	volatile uint32_t t68 = 398251306U;

	t68 = (((x337+x338)/x339)/x340);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x342 = -1;
	int32_t x343 = INT32_MAX;
	uint32_t x344 = 292U;
	static int64_t t69 = -7522308051LL;

	t69 = (((x341+x342)/x343)/x344);

	if (t69 != 14708792LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = -1;
	int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MAX;
	int32_t x348 = INT32_MIN;
	int32_t t70 = 5;

	t70 = (((x345+x346)/x347)/x348);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x349 = 3U;
	volatile uint32_t x350 = 2399U;
	uint32_t x351 = 95051165U;
	volatile int64_t t71 = 111791LL;

	t71 = (((x349+x350)/x351)/x352);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x353 = -1565941;
	int32_t x354 = -1;
	static uint64_t x355 = 795335118482789581LLU;
	int64_t x356 = -4092029LL;

	t72 = (((x353+x354)/x355)/x356);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x357 = 13U;
	volatile uint64_t x358 = 42637923163LLU;
	static int64_t x359 = 4171203678458318953LL;
	static volatile uint64_t t73 = 4817504302799LLU;

	t73 = (((x357+x358)/x359)/x360);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x362 = UINT32_MAX;
	int64_t x363 = -1196165543LL;
	volatile int64_t t74 = -2548552247LL;

	t74 = (((x361+x362)/x363)/x364);

	if (t74 != 235321LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x370 = UINT8_MAX;
	static uint32_t x371 = 6U;
	static uint32_t t75 = 519827U;

	t75 = (((x369+x370)/x371)/x372);

	if (t75 != 26832U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x373 = 0;
	uint32_t x375 = UINT32_MAX;
	volatile uint16_t x376 = 2U;
	static uint32_t t76 = 178U;

	t76 = (((x373+x374)/x375)/x376);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x378 = -1;
	volatile int16_t x379 = INT16_MAX;
	static volatile int16_t x380 = 1;
	int32_t t77 = 3;

	t77 = (((x377+x378)/x379)/x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x385 = INT32_MIN;
	volatile int16_t x386 = 957;
	static int32_t x387 = 76275591;
	int64_t x388 = INT64_MIN;
	int64_t t78 = 16581755234572LL;

	t78 = (((x385+x386)/x387)/x388);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x389 = 1;
	int32_t x390 = 1;
	int32_t t79 = 1;

	t79 = (((x389+x390)/x391)/x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x393 = -3450183741767LL;
	static int8_t x394 = -1;
	volatile int16_t x395 = 24;
	static uint16_t x396 = UINT16_MAX;

	t80 = (((x393+x394)/x395)/x396);

	if (t80 != -2193601LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x398 = -1;
	int64_t x399 = -1LL;
	static uint16_t x400 = 1U;
	volatile uint64_t t81 = 3925759133854937387LLU;

	t81 = (((x397+x398)/x399)/x400);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x401 = -1;
	static int16_t x403 = 13960;
	uint64_t t82 = 13842LLU;

	t82 = (((x401+x402)/x403)/x404);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x405 = INT32_MAX;
	int32_t x406 = -6418615;
	static int8_t x407 = INT8_MAX;
	int32_t x408 = -334;
	volatile int32_t t83 = 1;

	t83 = (((x405+x406)/x407)/x408);

	if (t83 != -50475) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = INT8_MIN;
	volatile uint16_t x410 = UINT16_MAX;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = UINT64_MAX;
	uint64_t t84 = 3891532611190LLU;

	t84 = (((x409+x410)/x411)/x412);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = INT16_MIN;
	static int32_t x414 = -1;
	uint8_t x415 = UINT8_MAX;
	static uint8_t x416 = UINT8_MAX;
	int32_t t85 = -498;

	t85 = (((x413+x414)/x415)/x416);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x419 = 7158;
	int16_t x420 = INT16_MAX;
	volatile int32_t t86 = 80519215;

	t86 = (((x417+x418)/x419)/x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x421 = INT16_MIN;
	volatile int8_t x422 = 0;
	uint32_t x423 = 14U;
	int16_t x424 = -1;

	t87 = (((x421+x422)/x423)/x424);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x425 = INT8_MAX;
	static int64_t x426 = 0LL;
	static uint64_t x427 = 7247908794LLU;
	volatile int32_t x428 = 3;
	volatile uint64_t t88 = 14001794119186946LLU;

	t88 = (((x425+x426)/x427)/x428);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x433 = 159U;
	static int16_t x434 = 11;
	int64_t x436 = -4604868567168LL;
	int64_t t89 = 1407272574498713522LL;

	t89 = (((x433+x434)/x435)/x436);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x437 = 186U;
	int16_t x438 = INT16_MIN;
	int64_t x439 = 29LL;
	int32_t x440 = 11851;
	static int64_t t90 = -7009175036150309LL;

	t90 = (((x437+x438)/x439)/x440);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x441 = 25;
	int64_t x442 = INT64_MIN;
	int64_t x444 = INT64_MIN;
	volatile int64_t t91 = -438700884LL;

	t91 = (((x441+x442)/x443)/x444);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x445 = 2924LLU;
	volatile uint64_t x446 = UINT64_MAX;
	int32_t x447 = INT32_MIN;
	volatile uint64_t t92 = 130872LLU;

	t92 = (((x445+x446)/x447)/x448);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x449 = 190597473158279586LL;
	static uint32_t x450 = 10590255U;
	int16_t x451 = -9148;
	int64_t x452 = INT64_MIN;
	static volatile int64_t t93 = 221099210LL;

	t93 = (((x449+x450)/x451)/x452);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x453 = UINT64_MAX;
	uint16_t x454 = 1211U;
	uint32_t x455 = 1305491057U;
	uint8_t x456 = UINT8_MAX;
	uint64_t t94 = 13838379181086LLU;

	t94 = (((x453+x454)/x455)/x456);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x457 = 509U;
	int8_t x458 = -22;
	volatile int32_t x460 = INT32_MIN;
	volatile int32_t t95 = 3093;

	t95 = (((x457+x458)/x459)/x460);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x461 = 1LLU;
	int64_t x463 = INT64_MIN;
	volatile uint64_t t96 = 61LLU;

	t96 = (((x461+x462)/x463)/x464);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x473 = UINT64_MAX;
	int32_t x475 = INT32_MAX;
	static int64_t x476 = -1LL;
	volatile uint64_t t97 = 109082704328LLU;

	t97 = (((x473+x474)/x475)/x476);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x477 = UINT16_MAX;
	uint64_t x478 = UINT64_MAX;
	uint8_t x479 = 8U;
	volatile int16_t x480 = INT16_MAX;
	uint64_t t98 = 1118373649567072281LLU;

	t98 = (((x477+x478)/x479)/x480);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x483 = 1;
	static uint32_t x484 = UINT32_MAX;
	uint32_t t99 = 28685U;

	t99 = (((x481+x482)/x483)/x484);

	if (t99 != 0U) { NG(); } else { ; }
	
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

