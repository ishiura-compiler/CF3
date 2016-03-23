
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
int16_t x3 = 184;
static int16_t x16 = INT16_MIN;
int32_t x22 = -1;
static int32_t t4 = 26;
uint8_t x37 = 0U;
uint8_t x45 = 7U;
static int64_t x46 = INT64_MIN;
uint16_t x48 = UINT16_MAX;
static uint8_t x49 = 57U;
uint16_t x60 = UINT16_MAX;
int32_t x76 = 128;
uint64_t x78 = 52791809LLU;
static volatile int64_t x81 = INT64_MAX;
static int64_t x82 = 37806654LL;
uint32_t x83 = 105050240U;
uint16_t x84 = 1U;
uint16_t x87 = 0U;
volatile uint16_t x96 = 0U;
static int64_t x132 = INT64_MAX;
static int32_t x136 = INT32_MAX;
int64_t x145 = 12709034422452304LL;
static uint8_t x146 = 0U;
uint16_t x147 = 27U;
int32_t t21 = 117;
static volatile uint8_t x149 = UINT8_MAX;
int8_t x151 = INT8_MAX;
static uint16_t x160 = 3147U;
volatile uint64_t x170 = 30LLU;
uint64_t x172 = 52144339863149LLU;
volatile int8_t x175 = 25;
int64_t x176 = -1LL;
volatile uint8_t x184 = 2U;
static int32_t t27 = -3412617;
volatile int32_t t30 = -965;
static volatile int64_t x209 = 28739LL;
volatile int32_t x220 = -1342751;
uint8_t x223 = 52U;
int32_t x238 = INT32_MIN;
volatile int32_t t38 = -39;
uint16_t x267 = 831U;
static volatile int32_t t44 = -512458823;
int8_t x282 = -8;
volatile int32_t x298 = -8200737;
static int32_t t51 = -14017;
int8_t x318 = INT8_MIN;
static int16_t x325 = -1;
static int16_t x338 = INT16_MIN;
static int32_t x351 = INT32_MAX;
static int16_t x373 = -1128;
int64_t x377 = -1LL;
int16_t x378 = INT16_MIN;
int32_t x421 = 563671566;
int32_t x428 = INT32_MIN;
static uint16_t x430 = 54U;
uint64_t x431 = UINT64_MAX;
volatile int32_t x433 = -1;
int8_t x435 = INT8_MIN;
uint8_t x437 = 22U;
uint64_t x440 = 19550LLU;
int16_t x477 = INT16_MIN;
int32_t t76 = -164313;
uint8_t x498 = UINT8_MAX;
uint32_t x503 = UINT32_MAX;
int16_t x504 = INT16_MIN;
uint8_t x514 = 14U;
static int64_t x521 = INT64_MAX;
int64_t x527 = INT64_MAX;
volatile uint16_t x531 = 348U;
int16_t x534 = INT16_MIN;
int32_t x550 = INT32_MIN;
static volatile int16_t x552 = -2;
volatile int32_t t87 = -149052627;
int16_t x576 = -1;
static int64_t x581 = -224802495579070LL;
static uint32_t x585 = 4495423U;
uint64_t x587 = 349LLU;
int64_t x592 = INT64_MIN;
int64_t x605 = 28325785488LL;
uint32_t x615 = UINT32_MAX;
uint32_t x625 = UINT32_MAX;
int32_t t98 = -51615;
int32_t t99 = 1;
int64_t x642 = -1LL;
volatile uint16_t x643 = 28U;
static volatile int32_t t103 = 914953604;
int8_t x662 = INT8_MIN;
int8_t x676 = -20;
volatile int32_t t105 = -7;
uint8_t x700 = 2U;
static volatile int32_t t109 = 13183;
uint16_t x703 = UINT16_MAX;
static volatile int32_t t110 = 332600581;
volatile uint64_t x711 = UINT64_MAX;
static volatile int32_t t112 = 0;
uint64_t x730 = 1916469092LLU;
int32_t t115 = 31598;
volatile uint64_t x739 = 3499880502695978028LLU;
uint32_t x740 = UINT32_MAX;
int16_t x741 = INT16_MIN;
volatile int32_t t118 = -941;
uint32_t x781 = 268U;
int16_t x791 = INT16_MAX;
static uint8_t x804 = 45U;
uint32_t x814 = 21031U;
uint8_t x823 = 30U;
uint32_t x843 = 32803451U;
static uint32_t x846 = 420251841U;
int32_t x848 = -251;
int16_t x868 = -45;
int32_t x876 = 460215235;
int32_t t136 = 107539555;
int64_t x921 = -239968814031738032LL;
int8_t x930 = -1;
static uint32_t x948 = 499690677U;
int8_t x954 = INT8_MIN;
static uint16_t x955 = 139U;
int64_t x956 = -554766LL;
volatile int64_t x978 = -58549354461603LL;
static volatile int64_t x979 = -61LL;
int32_t x981 = INT32_MIN;
volatile uint32_t x982 = 290U;
int16_t x984 = 142;
int32_t t146 = 0;
volatile int8_t x986 = INT8_MIN;
volatile int32_t t147 = 27619;
uint32_t x1000 = 70803942U;
uint32_t x1005 = UINT32_MAX;
volatile int32_t x1008 = -1;
volatile int32_t x1026 = -1;
uint32_t x1028 = 1U;
volatile int32_t x1033 = 41;
uint8_t x1034 = 6U;
static volatile int16_t x1043 = 8596;
uint32_t x1045 = UINT32_MAX;
volatile int64_t x1046 = -1725660LL;
uint32_t x1049 = 1774175983U;
volatile int32_t t159 = 181192;
volatile uint8_t x1055 = 122U;
static uint64_t x1056 = 71205661182LLU;
volatile int32_t t161 = -223236;
uint64_t x1070 = 19793LLU;
static volatile int16_t x1077 = -1;
static volatile uint64_t x1089 = 76033470100462LLU;
static int32_t x1096 = -181769;
int16_t x1097 = INT16_MIN;
uint16_t x1100 = 4451U;
volatile int8_t x1102 = INT8_MAX;
static int32_t x1103 = INT32_MAX;
volatile int32_t t167 = 499;
int8_t x1105 = INT8_MAX;
static uint32_t x1118 = UINT32_MAX;
static int16_t x1119 = -1;
uint16_t x1128 = 0U;
int8_t x1131 = -1;
int64_t x1139 = -1LL;
int32_t t174 = -7198;
volatile int16_t x1162 = INT16_MIN;
volatile uint16_t x1186 = 7U;
int32_t t176 = 0;
static int32_t x1194 = -1;
int32_t t179 = -104358;
static uint8_t x1225 = 0U;
int64_t x1231 = -1LL;
int8_t x1234 = INT8_MIN;
static uint8_t x1236 = 41U;
static uint32_t x1238 = 149U;
uint16_t x1259 = UINT16_MAX;
static volatile int64_t x1264 = 2031576826LL;
int32_t x1277 = 0;
volatile int32_t x1289 = INT32_MAX;
static uint64_t x1292 = UINT64_MAX;
int8_t x1295 = INT8_MAX;
int32_t t193 = 446;
volatile int32_t t194 = 4081;
int16_t x1343 = INT16_MAX;


void f0(void) {
    	volatile uint8_t x2 = 12U;
	uint16_t x4 = 3730U;
	volatile int32_t t0 = 0;

    t0 = ((x1/(x2<=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x13 = 7306U;
	int8_t x14 = 3;
	uint64_t x15 = 722105311758LLU;
	volatile int32_t t1 = 34;

    t1 = ((x13/(x14<=x15))==x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x21 = INT8_MAX;
	int32_t x23 = -1;
	volatile int16_t x24 = INT16_MIN;
	volatile int32_t t2 = 7801096;

    t2 = ((x21/(x22<=x23))==x24);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x25 = 2U;
	volatile int8_t x26 = INT8_MIN;
	static int8_t x27 = INT8_MAX;
	int8_t x28 = -1;
	volatile int32_t t3 = -21069;

    t3 = ((x25/(x26<=x27))==x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x33 = -145;
	int8_t x34 = 0;
	int8_t x35 = INT8_MAX;
	volatile int64_t x36 = -287LL;

    t4 = ((x33/(x34<=x35))==x36);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x38 = -1;
	static uint8_t x39 = 1U;
	volatile int16_t x40 = INT16_MIN;
	volatile int32_t t5 = 502890875;

    t5 = ((x37/(x38<=x39))==x40);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x47 = INT32_MIN;
	int32_t t6 = -478237;

    t6 = ((x45/(x46<=x47))==x48);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x50 = INT32_MIN;
	uint16_t x51 = 0U;
	uint8_t x52 = 1U;
	static volatile int32_t t7 = -613095968;

    t7 = ((x49/(x50<=x51))==x52);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x57 = 2690;
	int32_t x58 = INT32_MIN;
	uint8_t x59 = UINT8_MAX;
	static volatile int32_t t8 = -941;

    t8 = ((x57/(x58<=x59))==x60);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x69 = 2U;
	int16_t x70 = INT16_MIN;
	volatile int16_t x71 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	volatile int32_t t9 = 434074;

    t9 = ((x69/(x70<=x71))==x72);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x73 = -1;
	int64_t x74 = INT64_MIN;
	static uint8_t x75 = 11U;
	volatile int32_t t10 = -1411361;

    t10 = ((x73/(x74<=x75))==x76);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x77 = 11255453U;
	volatile uint64_t x79 = 3046849561704LLU;
	static int8_t x80 = -1;
	int32_t t11 = 9165395;

    t11 = ((x77/(x78<=x79))==x80);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t t12 = 261479644;

    t12 = ((x81/(x82<=x83))==x84);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x85 = UINT64_MAX;
	int8_t x86 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t13 = 197;

    t13 = ((x85/(x86<=x87))==x88);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x89 = 11U;
	int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MIN;
	volatile int64_t x92 = INT64_MIN;
	int32_t t14 = 11;

    t14 = ((x89/(x90<=x91))==x92);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x93 = 58U;
	uint8_t x94 = 10U;
	int16_t x95 = INT16_MAX;
	static volatile int32_t t15 = -779422;

    t15 = ((x93/(x94<=x95))==x96);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x105 = -384;
	uint64_t x106 = 27LLU;
	int32_t x107 = INT32_MAX;
	int64_t x108 = 12LL;
	volatile int32_t t16 = -2387282;

    t16 = ((x105/(x106<=x107))==x108);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x113 = INT16_MIN;
	static int8_t x114 = INT8_MAX;
	static uint16_t x115 = 208U;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t17 = 807326;

    t17 = ((x113/(x114<=x115))==x116);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x129 = UINT8_MAX;
	int64_t x130 = -173803384745175018LL;
	volatile int32_t x131 = INT32_MIN;
	int32_t t18 = -1;

    t18 = ((x129/(x130<=x131))==x132);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x133 = 0;
	uint16_t x134 = 2U;
	volatile uint64_t x135 = 1351874422LLU;
	int32_t t19 = 2286;

    t19 = ((x133/(x134<=x135))==x136);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x141 = -1255348025225543LL;
	static int16_t x142 = INT16_MAX;
	static int64_t x143 = 1136907368920427228LL;
	static int64_t x144 = -1600LL;
	volatile int32_t t20 = -83;

    t20 = ((x141/(x142<=x143))==x144);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x148 = 18834LL;

    t21 = ((x145/(x146<=x147))==x148);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x150 = -1;
	int8_t x152 = 1;
	int32_t t22 = -53728;

    t22 = ((x149/(x150<=x151))==x152);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x157 = -252;
	volatile uint64_t x158 = 7LLU;
	volatile int64_t x159 = -1LL;
	int32_t t23 = -1059541;

    t23 = ((x157/(x158<=x159))==x160);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x169 = -1;
	static int64_t x171 = -1LL;
	int32_t t24 = 8933;

    t24 = ((x169/(x170<=x171))==x172);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x173 = 1U;
	volatile int16_t x174 = INT16_MIN;
	int32_t t25 = -453894976;

    t25 = ((x173/(x174<=x175))==x176);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x181 = INT64_MAX;
	static int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	volatile int32_t t26 = -306308526;

    t26 = ((x181/(x182<=x183))==x184);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x185 = 33U;
	uint64_t x186 = 7267574LLU;
	static int64_t x187 = INT64_MIN;
	static int32_t x188 = 484072;

    t27 = ((x185/(x186<=x187))==x188);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x189 = 238LLU;
	uint8_t x190 = 1U;
	uint64_t x191 = 10268614274LLU;
	volatile uint8_t x192 = 9U;
	volatile int32_t t28 = 9146;

    t28 = ((x189/(x190<=x191))==x192);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x201 = INT64_MAX;
	uint64_t x202 = 5LLU;
	int8_t x203 = INT8_MIN;
	static volatile uint32_t x204 = 12259841U;
	volatile int32_t t29 = 92167;

    t29 = ((x201/(x202<=x203))==x204);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x205 = 28U;
	int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MAX;
	int16_t x208 = -94;

    t30 = ((x205/(x206<=x207))==x208);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x210 = UINT32_MAX;
	volatile uint64_t x211 = UINT64_MAX;
	int64_t x212 = INT64_MAX;
	int32_t t31 = 2;

    t31 = ((x209/(x210<=x211))==x212);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile uint8_t x218 = 2U;
	uint64_t x219 = 248972LLU;
	int32_t t32 = 2953;

    t32 = ((x217/(x218<=x219))==x220);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x221 = INT8_MIN;
	int64_t x222 = -10LL;
	int32_t x224 = 65545657;
	int32_t t33 = -710;

    t33 = ((x221/(x222<=x223))==x224);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x225 = 31U;
	static int32_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = -1;
	volatile int32_t t34 = 6;

    t34 = ((x225/(x226<=x227))==x228);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x229 = -1LL;
	uint8_t x230 = 0U;
	uint64_t x231 = 13338991004662LLU;
	volatile int8_t x232 = 6;
	int32_t t35 = -5;

    t35 = ((x229/(x230<=x231))==x232);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x237 = 6LLU;
	int64_t x239 = 29698318946022648LL;
	uint8_t x240 = 3U;
	int32_t t36 = 216181;

    t36 = ((x237/(x238<=x239))==x240);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x245 = 2U;
	static int16_t x246 = -1;
	int32_t x247 = -1;
	int8_t x248 = INT8_MAX;
	volatile int32_t t37 = -159621326;

    t37 = ((x245/(x246<=x247))==x248);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x253 = -1;
	volatile int32_t x254 = -1;
	int64_t x255 = 1886084978446LL;
	int8_t x256 = INT8_MIN;

    t38 = ((x253/(x254<=x255))==x256);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x257 = 235;
	int8_t x258 = -31;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t39 = -15;

    t39 = ((x257/(x258<=x259))==x260);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x261 = 0U;
	int32_t x262 = -468801;
	int8_t x263 = INT8_MIN;
	volatile int16_t x264 = -1;
	int32_t t40 = -76532852;

    t40 = ((x261/(x262<=x263))==x264);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x265 = INT8_MAX;
	int16_t x266 = -13;
	static int32_t x268 = 898321;
	int32_t t41 = 152109;

    t41 = ((x265/(x266<=x267))==x268);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x269 = INT64_MAX;
	int64_t x270 = INT64_MIN;
	static volatile uint8_t x271 = UINT8_MAX;
	volatile uint8_t x272 = 28U;
	volatile int32_t t42 = -637152;

    t42 = ((x269/(x270<=x271))==x272);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x273 = 506196U;
	static int8_t x274 = INT8_MIN;
	volatile int16_t x275 = 28;
	volatile int32_t x276 = INT32_MAX;
	static volatile int32_t t43 = -4553488;

    t43 = ((x273/(x274<=x275))==x276);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int8_t x279 = -1;
	int64_t x280 = INT64_MIN;

    t44 = ((x277/(x278<=x279))==x280);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x281 = -66843178;
	volatile uint64_t x283 = UINT64_MAX;
	uint64_t x284 = 31745256261264LLU;
	volatile int32_t t45 = 1446;

    t45 = ((x281/(x282<=x283))==x284);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x285 = 95901LL;
	int64_t x286 = INT64_MIN;
	uint32_t x287 = 192888333U;
	int64_t x288 = -159395LL;
	volatile int32_t t46 = 1;

    t46 = ((x285/(x286<=x287))==x288);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x293 = 22;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = 1U;
	static uint32_t x296 = 15900U;
	static volatile int32_t t47 = 1151439;

    t47 = ((x293/(x294<=x295))==x296);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x297 = INT16_MIN;
	uint16_t x299 = 2U;
	volatile uint8_t x300 = 15U;
	volatile int32_t t48 = -240021;

    t48 = ((x297/(x298<=x299))==x300);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	int8_t x303 = -1;
	uint64_t x304 = 160LLU;
	int32_t t49 = 40805957;

    t49 = ((x301/(x302<=x303))==x304);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	int32_t x307 = -1;
	static uint64_t x308 = 12LLU;
	volatile int32_t t50 = -1;

    t50 = ((x305/(x306<=x307))==x308);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x309 = INT8_MIN;
	static int8_t x310 = INT8_MAX;
	uint8_t x311 = UINT8_MAX;
	static int32_t x312 = INT32_MIN;

    t51 = ((x309/(x310<=x311))==x312);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x317 = INT16_MIN;
	int32_t x319 = 113065;
	uint32_t x320 = UINT32_MAX;
	int32_t t52 = 25;

    t52 = ((x317/(x318<=x319))==x320);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x321 = UINT32_MAX;
	static uint16_t x322 = 696U;
	static uint64_t x323 = UINT64_MAX;
	static int16_t x324 = -3098;
	static int32_t t53 = -8930919;

    t53 = ((x321/(x322<=x323))==x324);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x326 = 325933951140466LLU;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = 2U;
	int32_t t54 = 0;

    t54 = ((x325/(x326<=x327))==x328);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x329 = 312;
	int32_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	volatile uint64_t x332 = UINT64_MAX;
	static volatile int32_t t55 = 16837;

    t55 = ((x329/(x330<=x331))==x332);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x337 = UINT64_MAX;
	int32_t x339 = -420;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t56 = 3;

    t56 = ((x337/(x338<=x339))==x340);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x349 = INT32_MIN;
	volatile int32_t x350 = INT32_MIN;
	volatile uint64_t x352 = UINT64_MAX;
	volatile int32_t t57 = 516478;

    t57 = ((x349/(x350<=x351))==x352);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x353 = -1;
	int8_t x354 = INT8_MIN;
	int16_t x355 = 1;
	uint64_t x356 = 17630431877682LLU;
	volatile int32_t t58 = -1;

    t58 = ((x353/(x354<=x355))==x356);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x361 = 91U;
	int8_t x362 = 0;
	static int16_t x363 = INT16_MAX;
	int8_t x364 = -1;
	static volatile int32_t t59 = -987725678;

    t59 = ((x361/(x362<=x363))==x364);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x369 = UINT64_MAX;
	volatile int16_t x370 = -1;
	int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t60 = 9;

    t60 = ((x369/(x370<=x371))==x372);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x374 = 10;
	uint8_t x375 = 57U;
	int32_t x376 = 26170;
	int32_t t61 = -30;

    t61 = ((x373/(x374<=x375))==x376);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x379 = -1;
	static int32_t x380 = -1;
	volatile int32_t t62 = -949638;

    t62 = ((x377/(x378<=x379))==x380);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x393 = INT64_MAX;
	static int16_t x394 = -1;
	int16_t x395 = -1;
	int32_t x396 = INT32_MAX;
	volatile int32_t t63 = -6322;

    t63 = ((x393/(x394<=x395))==x396);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x397 = 42277526163LLU;
	volatile int64_t x398 = -1LL;
	static volatile int16_t x399 = 42;
	static uint32_t x400 = 126U;
	volatile int32_t t64 = 3;

    t64 = ((x397/(x398<=x399))==x400);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x401 = INT32_MAX;
	uint32_t x402 = 0U;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;
	int32_t t65 = 2828;

    t65 = ((x401/(x402<=x403))==x404);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x409 = -1;
	int16_t x410 = 4;
	static int64_t x411 = 157398LL;
	uint32_t x412 = UINT32_MAX;
	int32_t t66 = -406417286;

    t66 = ((x409/(x410<=x411))==x412);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x422 = UINT32_MAX;
	int64_t x423 = INT64_MAX;
	static uint64_t x424 = 34127501602905414LLU;
	int32_t t67 = 704487;

    t67 = ((x421/(x422<=x423))==x424);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x425 = INT64_MIN;
	static uint32_t x426 = 30U;
	int32_t x427 = INT32_MIN;
	static volatile int32_t t68 = -614792077;

    t68 = ((x425/(x426<=x427))==x428);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x429 = -1LL;
	volatile uint8_t x432 = 16U;
	volatile int32_t t69 = 426;

    t69 = ((x429/(x430<=x431))==x432);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x434 = INT16_MIN;
	int8_t x436 = -1;
	int32_t t70 = 0;

    t70 = ((x433/(x434<=x435))==x436);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x438 = 0U;
	volatile int16_t x439 = INT16_MAX;
	volatile int32_t t71 = 248674;

    t71 = ((x437/(x438<=x439))==x440);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x445 = -1LL;
	int32_t x446 = INT32_MIN;
	int64_t x447 = INT64_MAX;
	uint8_t x448 = 30U;
	int32_t t72 = 503417589;

    t72 = ((x445/(x446<=x447))==x448);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x457 = INT64_MAX;
	uint16_t x458 = UINT16_MAX;
	uint16_t x459 = UINT16_MAX;
	volatile int8_t x460 = INT8_MIN;
	static int32_t t73 = 66077980;

    t73 = ((x457/(x458<=x459))==x460);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x469 = INT32_MIN;
	int64_t x470 = INT64_MIN;
	int16_t x471 = INT16_MIN;
	uint32_t x472 = UINT32_MAX;
	static int32_t t74 = 14058;

    t74 = ((x469/(x470<=x471))==x472);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x478 = INT8_MIN;
	static int8_t x479 = INT8_MIN;
	static int16_t x480 = -178;
	int32_t t75 = -78173591;

    t75 = ((x477/(x478<=x479))==x480);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x485 = INT32_MIN;
	static uint8_t x486 = UINT8_MAX;
	volatile uint8_t x487 = UINT8_MAX;
	int8_t x488 = INT8_MIN;

    t76 = ((x485/(x486<=x487))==x488);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x497 = -1047718;
	uint64_t x499 = UINT64_MAX;
	volatile uint16_t x500 = UINT16_MAX;
	volatile int32_t t77 = 4002;

    t77 = ((x497/(x498<=x499))==x500);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x501 = 23531U;
	int16_t x502 = INT16_MIN;
	static int32_t t78 = 13773;

    t78 = ((x501/(x502<=x503))==x504);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x505 = 48U;
	int32_t x506 = INT32_MIN;
	volatile int64_t x507 = INT64_MAX;
	int16_t x508 = INT16_MAX;
	int32_t t79 = -2033958;

    t79 = ((x505/(x506<=x507))==x508);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x509 = -3041;
	uint64_t x510 = 38316LLU;
	volatile int64_t x511 = -910453826455532LL;
	int8_t x512 = -1;
	int32_t t80 = -6;

    t80 = ((x509/(x510<=x511))==x512);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x513 = 1U;
	int64_t x515 = INT64_MAX;
	static uint32_t x516 = UINT32_MAX;
	int32_t t81 = 40;

    t81 = ((x513/(x514<=x515))==x516);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x522 = INT32_MIN;
	volatile uint8_t x523 = UINT8_MAX;
	int16_t x524 = 3027;
	static int32_t t82 = 14;

    t82 = ((x521/(x522<=x523))==x524);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x525 = INT16_MIN;
	volatile int32_t x526 = -3063896;
	static int32_t x528 = INT32_MIN;
	static int32_t t83 = -5662;

    t83 = ((x525/(x526<=x527))==x528);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x529 = -1;
	int32_t x530 = -1;
	volatile int16_t x532 = -820;
	int32_t t84 = 14794895;

    t84 = ((x529/(x530<=x531))==x532);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x533 = 1411U;
	volatile int16_t x535 = 6205;
	static int16_t x536 = -1;
	volatile int32_t t85 = -42041249;

    t85 = ((x533/(x534<=x535))==x536);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x549 = 24125U;
	int8_t x551 = INT8_MIN;
	int32_t t86 = 518624;

    t86 = ((x549/(x550<=x551))==x552);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x553 = -1;
	static uint32_t x554 = 188U;
	volatile int16_t x555 = INT16_MIN;
	uint16_t x556 = 1462U;

    t87 = ((x553/(x554<=x555))==x556);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x565 = 115;
	int16_t x566 = -3;
	int32_t x567 = INT32_MAX;
	uint16_t x568 = UINT16_MAX;
	static int32_t t88 = -4;

    t88 = ((x565/(x566<=x567))==x568);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x569 = INT64_MIN;
	int16_t x570 = -3;
	uint32_t x571 = UINT32_MAX;
	int64_t x572 = 20LL;
	int32_t t89 = -8158;

    t89 = ((x569/(x570<=x571))==x572);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x573 = 1;
	static uint8_t x574 = UINT8_MAX;
	uint64_t x575 = 1672309968242LLU;
	static volatile int32_t t90 = -2372493;

    t90 = ((x573/(x574<=x575))==x576);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x582 = INT16_MIN;
	int16_t x583 = 40;
	uint32_t x584 = 209090U;
	int32_t t91 = 1133566;

    t91 = ((x581/(x582<=x583))==x584);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x586 = 155U;
	int8_t x588 = -1;
	volatile int32_t t92 = 38010;

    t92 = ((x585/(x586<=x587))==x588);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x589 = INT32_MIN;
	volatile int32_t x590 = -1;
	volatile uint16_t x591 = 1U;
	volatile int32_t t93 = -220074;

    t93 = ((x589/(x590<=x591))==x592);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x593 = 255503131LL;
	int16_t x594 = 1;
	uint32_t x595 = 6U;
	static int32_t x596 = INT32_MAX;
	volatile int32_t t94 = 718;

    t94 = ((x593/(x594<=x595))==x596);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x606 = 0LLU;
	int16_t x607 = INT16_MIN;
	uint8_t x608 = 20U;
	int32_t t95 = 0;

    t95 = ((x605/(x606<=x607))==x608);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x613 = INT32_MIN;
	int8_t x614 = 0;
	uint8_t x616 = UINT8_MAX;
	int32_t t96 = -5511;

    t96 = ((x613/(x614<=x615))==x616);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x617 = 224013117840335885LLU;
	int32_t x618 = 0;
	volatile uint16_t x619 = 389U;
	volatile int64_t x620 = INT64_MIN;
	volatile int32_t t97 = -192371137;

    t97 = ((x617/(x618<=x619))==x620);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x626 = INT32_MIN;
	int16_t x627 = -84;
	volatile uint16_t x628 = UINT16_MAX;

    t98 = ((x625/(x626<=x627))==x628);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x629 = 7005U;
	int16_t x630 = 1936;
	int16_t x631 = INT16_MAX;
	static volatile int32_t x632 = -1;

    t99 = ((x629/(x630<=x631))==x632);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x633 = INT8_MIN;
	int32_t x634 = -1;
	int64_t x635 = 1LL;
	static uint64_t x636 = UINT64_MAX;
	volatile int32_t t100 = -72;

    t100 = ((x633/(x634<=x635))==x636);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x641 = INT8_MIN;
	int16_t x644 = INT16_MIN;
	volatile int32_t t101 = -6747808;

    t101 = ((x641/(x642<=x643))==x644);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x653 = 88LLU;
	volatile uint64_t x654 = 141LLU;
	int16_t x655 = INT16_MIN;
	uint32_t x656 = 233U;
	volatile int32_t t102 = -1;

    t102 = ((x653/(x654<=x655))==x656);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x657 = INT64_MAX;
	volatile int8_t x658 = INT8_MIN;
	int32_t x659 = INT32_MAX;
	int32_t x660 = -6;

    t103 = ((x657/(x658<=x659))==x660);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x661 = UINT8_MAX;
	int16_t x663 = INT16_MAX;
	uint64_t x664 = 4LLU;
	int32_t t104 = 2569715;

    t104 = ((x661/(x662<=x663))==x664);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x673 = 1;
	static uint64_t x674 = 9079020038677096LLU;
	volatile int64_t x675 = INT64_MAX;

    t105 = ((x673/(x674<=x675))==x676);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x686 = INT64_MIN;
	uint16_t x687 = UINT16_MAX;
	volatile int8_t x688 = INT8_MIN;
	int32_t t106 = 520289;

    t106 = ((x685/(x686<=x687))==x688);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x689 = 0;
	int64_t x690 = INT64_MIN;
	int8_t x691 = 0;
	uint16_t x692 = 300U;
	volatile int32_t t107 = 11915369;

    t107 = ((x689/(x690<=x691))==x692);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x693 = UINT32_MAX;
	int64_t x694 = INT64_MIN;
	volatile int32_t x695 = -93384276;
	int32_t x696 = -76;
	volatile int32_t t108 = -811;

    t108 = ((x693/(x694<=x695))==x696);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x697 = INT32_MIN;
	int32_t x698 = INT32_MIN;
	static volatile int32_t x699 = -1;

    t109 = ((x697/(x698<=x699))==x700);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x701 = INT8_MIN;
	int8_t x702 = INT8_MIN;
	uint32_t x704 = UINT32_MAX;

    t110 = ((x701/(x702<=x703))==x704);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x709 = 76560439U;
	static volatile int64_t x710 = INT64_MIN;
	uint16_t x712 = 7834U;
	volatile int32_t t111 = -704353131;

    t111 = ((x709/(x710<=x711))==x712);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x717 = -6;
	int16_t x718 = INT16_MAX;
	uint32_t x719 = UINT32_MAX;
	int32_t x720 = 7623502;

    t112 = ((x717/(x718<=x719))==x720);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x721 = 123;
	int32_t x722 = -54368;
	uint32_t x723 = UINT32_MAX;
	int64_t x724 = -1LL;
	int32_t t113 = 1923576;

    t113 = ((x721/(x722<=x723))==x724);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x729 = -1;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t114 = 612676;

    t114 = ((x729/(x730<=x731))==x732);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x733 = INT8_MIN;
	static volatile int8_t x734 = 15;
	uint8_t x735 = UINT8_MAX;
	int16_t x736 = -1;

    t115 = ((x733/(x734<=x735))==x736);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x737 = INT8_MIN;
	static volatile uint64_t x738 = 1538LLU;
	int32_t t116 = 211157160;

    t116 = ((x737/(x738<=x739))==x740);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x742 = -1;
	volatile int64_t x743 = -1LL;
	int32_t x744 = 1;
	int32_t t117 = 0;

    t117 = ((x741/(x742<=x743))==x744);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x749 = INT32_MIN;
	volatile uint8_t x750 = 7U;
	int16_t x751 = 19;
	volatile uint16_t x752 = 18U;

    t118 = ((x749/(x750<=x751))==x752);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x757 = 69U;
	int16_t x758 = -18;
	int64_t x759 = -1LL;
	uint16_t x760 = 7U;
	volatile int32_t t119 = -52787;

    t119 = ((x757/(x758<=x759))==x760);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x782 = INT32_MIN;
	static int8_t x783 = 4;
	uint32_t x784 = UINT32_MAX;
	volatile int32_t t120 = -13541739;

    t120 = ((x781/(x782<=x783))==x784);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x785 = INT8_MIN;
	static volatile int32_t x786 = INT32_MIN;
	uint8_t x787 = UINT8_MAX;
	volatile int64_t x788 = 8981LL;
	int32_t t121 = -3;

    t121 = ((x785/(x786<=x787))==x788);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x789 = INT8_MAX;
	int16_t x790 = INT16_MIN;
	int32_t x792 = 13181901;
	volatile int32_t t122 = -10142407;

    t122 = ((x789/(x790<=x791))==x792);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x793 = 359403;
	int8_t x794 = -2;
	int32_t x795 = -1;
	int64_t x796 = 8268062568081LL;
	static int32_t t123 = -142;

    t123 = ((x793/(x794<=x795))==x796);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x801 = -1;
	uint16_t x802 = UINT16_MAX;
	int32_t x803 = INT32_MAX;
	int32_t t124 = -133719;

    t124 = ((x801/(x802<=x803))==x804);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x813 = UINT8_MAX;
	int8_t x815 = INT8_MIN;
	volatile uint8_t x816 = UINT8_MAX;
	volatile int32_t t125 = 643315255;

    t125 = ((x813/(x814<=x815))==x816);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x821 = UINT16_MAX;
	int32_t x822 = -4514596;
	int16_t x824 = -1;
	int32_t t126 = -2;

    t126 = ((x821/(x822<=x823))==x824);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x829 = INT16_MIN;
	static uint64_t x830 = UINT64_MAX;
	int8_t x831 = -1;
	uint8_t x832 = 3U;
	static int32_t t127 = -14;

    t127 = ((x829/(x830<=x831))==x832);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x841 = INT32_MIN;
	uint8_t x842 = 68U;
	int64_t x844 = INT64_MAX;
	static int32_t t128 = -3324368;

    t128 = ((x841/(x842<=x843))==x844);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x845 = INT32_MIN;
	int16_t x847 = -683;
	volatile int32_t t129 = 51346833;

    t129 = ((x845/(x846<=x847))==x848);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x853 = -11162;
	volatile uint64_t x854 = 747172717093LLU;
	int16_t x855 = -799;
	uint32_t x856 = UINT32_MAX;
	int32_t t130 = 34;

    t130 = ((x853/(x854<=x855))==x856);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x857 = 0U;
	volatile uint32_t x858 = 4009204U;
	static volatile int8_t x859 = -1;
	int8_t x860 = INT8_MIN;
	volatile int32_t t131 = -1048079547;

    t131 = ((x857/(x858<=x859))==x860);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x861 = -1;
	static int64_t x862 = INT64_MIN;
	int8_t x863 = INT8_MIN;
	int16_t x864 = 6567;
	int32_t t132 = 456216239;

    t132 = ((x861/(x862<=x863))==x864);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x865 = UINT8_MAX;
	uint32_t x866 = 207U;
	static uint64_t x867 = 184656082LLU;
	int32_t t133 = 251;

    t133 = ((x865/(x866<=x867))==x868);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x873 = INT32_MIN;
	int32_t x874 = INT32_MIN;
	int32_t x875 = INT32_MIN;
	volatile int32_t t134 = 989610177;

    t134 = ((x873/(x874<=x875))==x876);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x885 = 79U;
	volatile int8_t x886 = INT8_MAX;
	int8_t x887 = INT8_MAX;
	int8_t x888 = 0;
	static volatile int32_t t135 = -70;

    t135 = ((x885/(x886<=x887))==x888);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x897 = INT16_MIN;
	uint16_t x898 = 1482U;
	uint64_t x899 = UINT64_MAX;
	int16_t x900 = INT16_MIN;

    t136 = ((x897/(x898<=x899))==x900);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x913 = -1;
	volatile int32_t x914 = -1;
	int32_t x915 = -1;
	uint8_t x916 = UINT8_MAX;
	int32_t t137 = -95540;

    t137 = ((x913/(x914<=x915))==x916);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x922 = 53093130479605LLU;
	int64_t x923 = 263972318176578477LL;
	uint32_t x924 = UINT32_MAX;
	int32_t t138 = 220;

    t138 = ((x921/(x922<=x923))==x924);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x929 = UINT32_MAX;
	volatile uint64_t x931 = UINT64_MAX;
	uint64_t x932 = 1772103LLU;
	static volatile int32_t t139 = -8381;

    t139 = ((x929/(x930<=x931))==x932);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x933 = 1U;
	int64_t x934 = INT64_MIN;
	int8_t x935 = INT8_MIN;
	int8_t x936 = INT8_MIN;
	int32_t t140 = -226;

    t140 = ((x933/(x934<=x935))==x936);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x945 = INT16_MIN;
	uint32_t x946 = 87002U;
	static uint32_t x947 = 7353087U;
	static volatile int32_t t141 = -6866266;

    t141 = ((x945/(x946<=x947))==x948);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x953 = INT16_MAX;
	int32_t t142 = -4;

    t142 = ((x953/(x954<=x955))==x956);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x957 = -1;
	int64_t x958 = INT64_MIN;
	static int32_t x959 = INT32_MAX;
	int8_t x960 = -9;
	int32_t t143 = -36935989;

    t143 = ((x957/(x958<=x959))==x960);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x965 = UINT8_MAX;
	int16_t x966 = -1409;
	int8_t x967 = INT8_MIN;
	static uint8_t x968 = UINT8_MAX;
	volatile int32_t t144 = 22;

    t144 = ((x965/(x966<=x967))==x968);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x977 = 1U;
	uint32_t x980 = 455U;
	int32_t t145 = 117999;

    t145 = ((x977/(x978<=x979))==x980);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x983 = INT8_MIN;

    t146 = ((x981/(x982<=x983))==x984);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x985 = INT16_MAX;
	int64_t x987 = -1LL;
	int8_t x988 = INT8_MAX;

    t147 = ((x985/(x986<=x987))==x988);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x993 = -440684680132780LL;
	volatile uint32_t x994 = 114U;
	static int16_t x995 = -37;
	static uint64_t x996 = 327LLU;
	volatile int32_t t148 = 2775950;

    t148 = ((x993/(x994<=x995))==x996);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x997 = 747U;
	int8_t x998 = -1;
	volatile uint32_t x999 = UINT32_MAX;
	static int32_t t149 = 9052943;

    t149 = ((x997/(x998<=x999))==x1000);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x1001 = INT16_MIN;
	static uint16_t x1002 = UINT16_MAX;
	uint64_t x1003 = UINT64_MAX;
	uint16_t x1004 = 13U;
	volatile int32_t t150 = 140;

    t150 = ((x1001/(x1002<=x1003))==x1004);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x1006 = 114201LLU;
	int32_t x1007 = -1;
	volatile int32_t t151 = -4;

    t151 = ((x1005/(x1006<=x1007))==x1008);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x1017 = -1LL;
	int16_t x1018 = INT16_MIN;
	volatile int32_t x1019 = -15134;
	int64_t x1020 = INT64_MIN;
	static int32_t t152 = 233;

    t152 = ((x1017/(x1018<=x1019))==x1020);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x1025 = INT8_MAX;
	int8_t x1027 = INT8_MAX;
	volatile int32_t t153 = 99157995;

    t153 = ((x1025/(x1026<=x1027))==x1028);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x1029 = INT8_MAX;
	static int32_t x1030 = INT32_MIN;
	int32_t x1031 = -54;
	int64_t x1032 = INT64_MIN;
	volatile int32_t t154 = -5453595;

    t154 = ((x1029/(x1030<=x1031))==x1032);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1035 = 1303280U;
	volatile int16_t x1036 = INT16_MIN;
	volatile int32_t t155 = -30408356;

    t155 = ((x1033/(x1034<=x1035))==x1036);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1037 = 2296U;
	static volatile uint8_t x1038 = 1U;
	static uint32_t x1039 = UINT32_MAX;
	volatile int64_t x1040 = 62434779880LL;
	int32_t t156 = -1977417;

    t156 = ((x1037/(x1038<=x1039))==x1040);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x1041 = 2;
	volatile int8_t x1042 = -1;
	int16_t x1044 = INT16_MIN;
	int32_t t157 = -2;

    t157 = ((x1041/(x1042<=x1043))==x1044);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1047 = 38U;
	volatile uint16_t x1048 = 19U;
	int32_t t158 = 112554068;

    t158 = ((x1045/(x1046<=x1047))==x1048);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1050 = 336U;
	volatile int32_t x1051 = -2668168;
	uint16_t x1052 = 929U;

    t159 = ((x1049/(x1050<=x1051))==x1052);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x1053 = INT8_MAX;
	uint8_t x1054 = 1U;
	int32_t t160 = -12;

    t160 = ((x1053/(x1054<=x1055))==x1056);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1065 = INT8_MAX;
	int32_t x1066 = -1;
	static int16_t x1067 = INT16_MAX;
	static uint64_t x1068 = UINT64_MAX;

    t161 = ((x1065/(x1066<=x1067))==x1068);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1069 = INT8_MIN;
	volatile int64_t x1071 = INT64_MAX;
	volatile int32_t x1072 = 454503;
	static int32_t t162 = 106713081;

    t162 = ((x1069/(x1070<=x1071))==x1072);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1078 = -9941365984405LL;
	int32_t x1079 = 110765186;
	int32_t x1080 = -1;
	volatile int32_t t163 = 195692;

    t163 = ((x1077/(x1078<=x1079))==x1080);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1090 = INT32_MIN;
	int16_t x1091 = INT16_MIN;
	uint16_t x1092 = UINT16_MAX;
	static volatile int32_t t164 = 103;

    t164 = ((x1089/(x1090<=x1091))==x1092);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1093 = UINT16_MAX;
	uint32_t x1094 = UINT32_MAX;
	uint32_t x1095 = UINT32_MAX;
	int32_t t165 = 1;

    t165 = ((x1093/(x1094<=x1095))==x1096);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1098 = INT32_MIN;
	uint64_t x1099 = UINT64_MAX;
	static int32_t t166 = -552309678;

    t166 = ((x1097/(x1098<=x1099))==x1100);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x1101 = UINT16_MAX;
	uint64_t x1104 = 48038076300798914LLU;

    t167 = ((x1101/(x1102<=x1103))==x1104);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1106 = INT64_MIN;
	uint8_t x1107 = 20U;
	static uint32_t x1108 = UINT32_MAX;
	int32_t t168 = -23712205;

    t168 = ((x1105/(x1106<=x1107))==x1108);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x1117 = INT16_MIN;
	int8_t x1120 = INT8_MAX;
	int32_t t169 = -45;

    t169 = ((x1117/(x1118<=x1119))==x1120);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1121 = -1;
	int64_t x1122 = INT64_MIN;
	volatile int32_t x1123 = INT32_MIN;
	volatile int32_t x1124 = INT32_MAX;
	static int32_t t170 = 8280926;

    t170 = ((x1121/(x1122<=x1123))==x1124);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x1125 = INT8_MAX;
	uint32_t x1126 = 246951942U;
	static uint64_t x1127 = UINT64_MAX;
	static int32_t t171 = 43073754;

    t171 = ((x1125/(x1126<=x1127))==x1128);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1129 = INT32_MIN;
	int32_t x1130 = -413509574;
	int64_t x1132 = INT64_MIN;
	int32_t t172 = 0;

    t172 = ((x1129/(x1130<=x1131))==x1132);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1137 = -1;
	static int8_t x1138 = INT8_MIN;
	uint16_t x1140 = 1U;
	volatile int32_t t173 = 2183316;

    t173 = ((x1137/(x1138<=x1139))==x1140);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x1141 = UINT64_MAX;
	uint32_t x1142 = 12U;
	int8_t x1143 = -1;
	int16_t x1144 = -1;

    t174 = ((x1141/(x1142<=x1143))==x1144);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1161 = 958605LLU;
	int32_t x1163 = 22987227;
	uint16_t x1164 = 0U;
	int32_t t175 = 1635149;

    t175 = ((x1161/(x1162<=x1163))==x1164);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1185 = -1LL;
	static uint16_t x1187 = UINT16_MAX;
	int16_t x1188 = -1;

    t176 = ((x1185/(x1186<=x1187))==x1188);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1189 = -852;
	int16_t x1190 = INT16_MIN;
	int8_t x1191 = -26;
	volatile uint32_t x1192 = 144375142U;
	volatile int32_t t177 = -643;

    t177 = ((x1189/(x1190<=x1191))==x1192);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x1193 = 62U;
	uint8_t x1195 = UINT8_MAX;
	volatile uint16_t x1196 = 1355U;
	static int32_t t178 = -41;

    t178 = ((x1193/(x1194<=x1195))==x1196);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1205 = 3272308LL;
	volatile uint16_t x1206 = 2389U;
	static uint16_t x1207 = UINT16_MAX;
	volatile int8_t x1208 = 3;

    t179 = ((x1205/(x1206<=x1207))==x1208);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1226 = 13741U;
	uint16_t x1227 = 15044U;
	int16_t x1228 = 808;
	int32_t t180 = 11664000;

    t180 = ((x1225/(x1226<=x1227))==x1228);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x1229 = UINT8_MAX;
	int32_t x1230 = -1;
	uint8_t x1232 = 25U;
	int32_t t181 = 759;

    t181 = ((x1229/(x1230<=x1231))==x1232);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x1233 = INT64_MIN;
	int64_t x1235 = -1LL;
	volatile int32_t t182 = -670;

    t182 = ((x1233/(x1234<=x1235))==x1236);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1237 = INT8_MIN;
	static uint16_t x1239 = UINT16_MAX;
	volatile uint8_t x1240 = 13U;
	static volatile int32_t t183 = 1676812;

    t183 = ((x1237/(x1238<=x1239))==x1240);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1253 = 29;
	static volatile int8_t x1254 = INT8_MIN;
	volatile int16_t x1255 = 1;
	int32_t x1256 = INT32_MIN;
	int32_t t184 = 3509192;

    t184 = ((x1253/(x1254<=x1255))==x1256);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x1257 = INT16_MIN;
	uint16_t x1258 = 767U;
	int32_t x1260 = INT32_MAX;
	volatile int32_t t185 = 47743;

    t185 = ((x1257/(x1258<=x1259))==x1260);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1261 = -1;
	int32_t x1262 = 313;
	uint16_t x1263 = 8469U;
	int32_t t186 = -2045513;

    t186 = ((x1261/(x1262<=x1263))==x1264);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1265 = INT8_MIN;
	uint16_t x1266 = UINT16_MAX;
	static uint64_t x1267 = 17093021919LLU;
	static uint32_t x1268 = UINT32_MAX;
	int32_t t187 = -1;

    t187 = ((x1265/(x1266<=x1267))==x1268);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x1273 = UINT16_MAX;
	volatile int64_t x1274 = 64347827LL;
	uint64_t x1275 = UINT64_MAX;
	int64_t x1276 = INT64_MIN;
	int32_t t188 = -832;

    t188 = ((x1273/(x1274<=x1275))==x1276);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x1278 = INT64_MIN;
	volatile int64_t x1279 = -1LL;
	volatile int16_t x1280 = INT16_MIN;
	int32_t t189 = 754435718;

    t189 = ((x1277/(x1278<=x1279))==x1280);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1290 = INT8_MIN;
	uint8_t x1291 = UINT8_MAX;
	volatile int32_t t190 = 488197179;

    t190 = ((x1289/(x1290<=x1291))==x1292);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1293 = INT32_MAX;
	static int16_t x1294 = INT16_MIN;
	static uint16_t x1296 = UINT16_MAX;
	int32_t t191 = -338499;

    t191 = ((x1293/(x1294<=x1295))==x1296);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1301 = 4U;
	int64_t x1302 = INT64_MIN;
	int64_t x1303 = INT64_MIN;
	int16_t x1304 = INT16_MIN;
	volatile int32_t t192 = -74494;

    t192 = ((x1301/(x1302<=x1303))==x1304);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1309 = -1LL;
	int8_t x1310 = INT8_MIN;
	volatile uint8_t x1311 = 1U;
	int32_t x1312 = -1;

    t193 = ((x1309/(x1310<=x1311))==x1312);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1317 = INT32_MAX;
	int16_t x1318 = INT16_MIN;
	int8_t x1319 = INT8_MIN;
	volatile int32_t x1320 = -1;

    t194 = ((x1317/(x1318<=x1319))==x1320);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1321 = -29;
	int64_t x1322 = -1LL;
	static int64_t x1323 = INT64_MAX;
	int16_t x1324 = -1;
	volatile int32_t t195 = -4656;

    t195 = ((x1321/(x1322<=x1323))==x1324);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1337 = 6U;
	static int64_t x1338 = 282LL;
	uint16_t x1339 = 2071U;
	static int8_t x1340 = 0;
	int32_t t196 = -238616;

    t196 = ((x1337/(x1338<=x1339))==x1340);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1341 = 2474U;
	uint16_t x1342 = 5618U;
	uint8_t x1344 = 1U;
	volatile int32_t t197 = 14805;

    t197 = ((x1341/(x1342<=x1343))==x1344);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1345 = 2;
	static uint16_t x1346 = 168U;
	uint64_t x1347 = 29951164LLU;
	uint8_t x1348 = 1U;
	volatile int32_t t198 = 5148383;

    t198 = ((x1345/(x1346<=x1347))==x1348);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1349 = INT16_MIN;
	volatile int16_t x1350 = 0;
	volatile int32_t x1351 = INT32_MAX;
	static int32_t x1352 = -1;
	static volatile int32_t t199 = -1;

    t199 = ((x1349/(x1350<=x1351))==x1352);

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

