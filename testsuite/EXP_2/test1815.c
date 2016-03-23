
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

static uint8_t x14 = UINT8_MAX;
int16_t x18 = INT16_MIN;
int64_t x33 = INT64_MAX;
uint32_t x66 = 5U;
int16_t x68 = 1;
volatile int8_t x80 = INT8_MIN;
int32_t x84 = 1;
volatile int32_t t9 = -196311;
int32_t x89 = INT32_MAX;
volatile int32_t t10 = -2315;
volatile int8_t x101 = -1;
int32_t x112 = -1;
uint32_t x119 = 14456969U;
uint16_t x122 = UINT16_MAX;
uint16_t x123 = UINT16_MAX;
int32_t x124 = INT32_MIN;
uint64_t x132 = 9113314210262811623LLU;
static volatile int32_t t15 = 77;
int16_t x136 = -92;
uint16_t x141 = UINT16_MAX;
int64_t x143 = 14LL;
volatile int32_t x144 = INT32_MIN;
uint8_t x152 = 84U;
int32_t x157 = INT32_MIN;
int16_t x162 = INT16_MIN;
int32_t x181 = -27;
int16_t x183 = INT16_MIN;
uint64_t x185 = 32563635594LLU;
uint16_t x197 = 22U;
volatile uint16_t x233 = 14U;
static uint8_t x234 = 0U;
static volatile uint16_t x235 = UINT16_MAX;
int64_t x236 = INT64_MAX;
int16_t x238 = 242;
volatile int32_t t28 = 38;
int32_t t29 = 775741;
static int8_t x252 = INT8_MIN;
static uint8_t x265 = 5U;
int8_t x268 = 45;
int8_t x277 = -1;
volatile int16_t x290 = INT16_MIN;
uint16_t x303 = 131U;
static volatile int32_t t35 = 10;
int32_t x314 = -125;
uint32_t x316 = UINT32_MAX;
int32_t x323 = -1;
int32_t x326 = INT32_MIN;
int32_t x334 = -14;
volatile int8_t x351 = INT8_MIN;
volatile int32_t x365 = INT32_MIN;
volatile int32_t x368 = INT32_MAX;
int32_t t42 = -118330;
int8_t x369 = INT8_MAX;
static uint32_t x371 = 108020U;
int32_t t43 = 32774369;
int32_t x373 = -1;
volatile int64_t x382 = INT64_MIN;
static int32_t t45 = -2609171;
volatile uint64_t x389 = 11913LLU;
int16_t x398 = INT16_MIN;
static volatile uint64_t x400 = UINT64_MAX;
volatile int32_t t47 = -29720;
int16_t x424 = -3186;
volatile int32_t t51 = 10;
int32_t x436 = -2179;
uint8_t x449 = 32U;
int32_t x450 = INT32_MIN;
uint8_t x457 = 48U;
int16_t x466 = 5;
static int32_t t57 = -3279;
static uint64_t x469 = UINT64_MAX;
int32_t x501 = -16;
volatile int32_t t64 = -949916648;
int32_t x510 = INT32_MIN;
volatile int32_t t65 = -2100;
static volatile int32_t t66 = -4184;
uint8_t x539 = 9U;
int8_t x546 = INT8_MAX;
volatile int32_t t70 = 146;
uint8_t x577 = UINT8_MAX;
volatile int16_t x582 = INT16_MAX;
int8_t x584 = 12;
int32_t x595 = 15897;
int32_t x617 = INT32_MAX;
static volatile int32_t t78 = 583036012;
int64_t x631 = INT64_MAX;
int32_t t81 = -7884169;
uint32_t x638 = 103U;
static volatile uint32_t x641 = 5728U;
static volatile int32_t t84 = 110;
uint8_t x650 = 113U;
volatile uint64_t x651 = 83228LLU;
int32_t t85 = -1185;
int32_t x670 = INT32_MIN;
static int32_t t88 = -109286779;
int16_t x682 = INT16_MIN;
static int16_t x689 = -1;
volatile int32_t t91 = -478284;
int64_t x701 = INT64_MIN;
uint64_t x706 = 534LLU;
static uint16_t x707 = UINT16_MAX;
uint64_t x725 = 17655047088195420LLU;
int32_t x731 = INT32_MIN;
static uint8_t x732 = UINT8_MAX;
static volatile int32_t t96 = 29907232;
int16_t x733 = 1;
int32_t x735 = -1;
int32_t t98 = 863;
uint64_t x770 = 1625577102557626234LLU;
int32_t t100 = -438;
volatile int32_t x778 = INT32_MIN;
volatile int16_t x788 = -133;
int64_t x820 = -5479LL;
int64_t x825 = INT64_MAX;
int32_t t107 = 0;
static uint16_t x833 = 5614U;
int8_t x848 = -1;
static int32_t x850 = INT32_MIN;
int32_t t112 = -121;
uint8_t x860 = UINT8_MAX;
uint16_t x861 = UINT16_MAX;
static int32_t x866 = INT32_MIN;
int32_t x869 = -309017;
int32_t t116 = 2088241;
int64_t x874 = INT64_MIN;
uint32_t x877 = 3006U;
int32_t t118 = -206424;
int32_t x884 = INT32_MIN;
int64_t x887 = 4880288877099159LL;
uint16_t x894 = 200U;
static int32_t t121 = -16537583;
int64_t x898 = INT64_MIN;
volatile int64_t x903 = INT64_MAX;
uint8_t x906 = 35U;
int16_t x908 = INT16_MAX;
volatile int32_t t124 = -50;
int64_t x915 = 5863371631664LL;
int16_t x916 = -56;
int16_t x917 = INT16_MAX;
static volatile int32_t t126 = 335300;
uint64_t x926 = 1396266997156178LLU;
int16_t x927 = -983;
uint64_t x933 = 17563LLU;
static uint64_t x935 = 6398631570210371LLU;
volatile int32_t t129 = 913200;
static uint16_t x970 = 1160U;
int16_t x975 = -1;
volatile int32_t t135 = -1;
int32_t x984 = 126;
int16_t x986 = 0;
int8_t x988 = 51;
static int8_t x992 = INT8_MIN;
uint16_t x993 = UINT16_MAX;
volatile int32_t x996 = INT32_MIN;
int16_t x998 = -79;
static int16_t x1001 = 0;
static uint64_t x1003 = UINT64_MAX;
static uint16_t x1005 = UINT16_MAX;
int16_t x1036 = -63;
int64_t x1048 = INT64_MIN;
int8_t x1057 = INT8_MIN;
volatile uint16_t x1064 = UINT16_MAX;
int32_t x1067 = -1;
uint16_t x1068 = UINT16_MAX;
int32_t t152 = 0;
int16_t x1089 = INT16_MIN;
int32_t t155 = -5352412;
int16_t x1093 = INT16_MIN;
static uint16_t x1095 = 93U;
volatile int32_t x1106 = -1;
int32_t x1126 = -1390945;
int32_t x1129 = INT32_MAX;
static uint32_t x1130 = 1317883286U;
volatile int32_t t161 = 881439;
int32_t x1143 = INT32_MAX;
volatile int32_t x1150 = INT32_MIN;
int32_t x1158 = 1068912360;
int32_t t164 = -1;
int32_t x1165 = 1762895;
volatile int64_t x1167 = 12420439642296LL;
static volatile int32_t t166 = -39941;
volatile int8_t x1175 = -30;
uint8_t x1186 = UINT8_MAX;
volatile int16_t x1188 = -1;
int32_t t171 = -5702284;
static int64_t x1237 = -7LL;
static uint8_t x1238 = 9U;
int32_t t172 = -21;
int16_t x1247 = -1;
int16_t x1248 = INT16_MIN;
volatile uint16_t x1260 = 914U;
volatile int32_t x1261 = 9572051;
uint32_t x1262 = 219U;
volatile int32_t t176 = -7613773;
volatile int8_t x1269 = INT8_MAX;
static int16_t x1271 = -1;
static int64_t x1278 = INT64_MIN;
uint16_t x1280 = 1051U;
int8_t x1281 = INT8_MAX;
static int8_t x1297 = INT8_MAX;
static int32_t x1308 = -1;
int32_t t182 = 1;
int64_t x1319 = INT64_MAX;
int8_t x1320 = INT8_MIN;
int32_t t184 = 831;
volatile int64_t x1325 = 1357768964363698403LL;
volatile int16_t x1331 = INT16_MAX;
int16_t x1350 = -298;
int16_t x1351 = -185;
static int8_t x1355 = INT8_MIN;
int64_t x1365 = INT64_MIN;
volatile int32_t x1372 = INT32_MAX;
int32_t x1378 = INT32_MIN;
static uint8_t x1387 = UINT8_MAX;
int32_t x1400 = INT32_MIN;
uint32_t x1401 = 193U;
volatile int64_t x1406 = -13397843895128LL;
int64_t x1418 = INT64_MIN;


void f0(void) {
    	volatile int8_t x1 = 14;
	int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MAX;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = 5678784;

    t0 = ((x1/(x2<=x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	int16_t x6 = -1;
	int16_t x7 = -1;
	int64_t x8 = 4364193134904332LL;
	volatile int32_t t1 = 697;

    t1 = ((x5/(x6<=x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = -452576221;
	int64_t x15 = 2335267329094LL;
	int8_t x16 = INT8_MIN;
	volatile int32_t t2 = 770903;

    t2 = ((x13/(x14<=x15))>x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = 2;
	int16_t x19 = 0;
	int32_t x20 = INT32_MIN;
	volatile int32_t t3 = 100255;

    t3 = ((x17/(x18<=x19))>x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x25 = INT8_MIN;
	static int8_t x26 = -1;
	volatile int32_t x27 = INT32_MAX;
	uint32_t x28 = UINT32_MAX;
	int32_t t4 = -1081;

    t4 = ((x25/(x26<=x27))>x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x34 = 2110047LL;
	uint64_t x35 = UINT64_MAX;
	int64_t x36 = INT64_MIN;
	int32_t t5 = 970;

    t5 = ((x33/(x34<=x35))>x36);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x65 = 118U;
	int8_t x67 = -1;
	volatile int32_t t6 = 20;

    t6 = ((x65/(x66<=x67))>x68);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x77 = 13427U;
	static volatile int16_t x78 = 2987;
	int32_t x79 = 986999993;
	static int32_t t7 = -117324793;

    t7 = ((x77/(x78<=x79))>x80);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x81 = 0;
	static int64_t x82 = INT64_MIN;
	uint8_t x83 = 14U;
	int32_t t8 = -1558759;

    t8 = ((x81/(x82<=x83))>x84);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x85 = 19;
	uint64_t x86 = 9LLU;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = 0U;

    t9 = ((x85/(x86<=x87))>x88);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x90 = INT16_MIN;
	static int8_t x91 = -1;
	int32_t x92 = 6893;

    t10 = ((x89/(x90<=x91))>x92);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x102 = 31701001264932548LLU;
	int64_t x103 = INT64_MIN;
	uint32_t x104 = UINT32_MAX;
	static int32_t t11 = -21049660;

    t11 = ((x101/(x102<=x103))>x104);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x109 = INT64_MIN;
	static volatile int16_t x110 = INT16_MIN;
	volatile uint8_t x111 = UINT8_MAX;
	static int32_t t12 = -546328;

    t12 = ((x109/(x110<=x111))>x112);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x117 = -2LL;
	int64_t x118 = -3LL;
	uint16_t x120 = UINT16_MAX;
	int32_t t13 = -439242850;

    t13 = ((x117/(x118<=x119))>x120);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x121 = INT32_MIN;
	volatile int32_t t14 = 7;

    t14 = ((x121/(x122<=x123))>x124);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x129 = INT16_MIN;
	volatile int16_t x130 = INT16_MAX;
	uint64_t x131 = UINT64_MAX;

    t15 = ((x129/(x130<=x131))>x132);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x133 = INT16_MIN;
	volatile int16_t x134 = -1;
	volatile int32_t x135 = INT32_MAX;
	int32_t t16 = 0;

    t16 = ((x133/(x134<=x135))>x136);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x137 = -1;
	int16_t x138 = 14827;
	static int64_t x139 = 44136315LL;
	int64_t x140 = -9181969670565LL;
	int32_t t17 = -3;

    t17 = ((x137/(x138<=x139))>x140);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x142 = 0;
	static volatile int32_t t18 = -32911432;

    t18 = ((x141/(x142<=x143))>x144);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x149 = 856812U;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MAX;
	volatile int32_t t19 = -1;

    t19 = ((x149/(x150<=x151))>x152);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x158 = INT64_MIN;
	int64_t x159 = 346019683LL;
	uint16_t x160 = 115U;
	static volatile int32_t t20 = 15;

    t20 = ((x157/(x158<=x159))>x160);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x161 = UINT64_MAX;
	int64_t x163 = INT64_MAX;
	int64_t x164 = 522981LL;
	static volatile int32_t t21 = 23;

    t21 = ((x161/(x162<=x163))>x164);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x182 = INT32_MIN;
	uint8_t x184 = UINT8_MAX;
	int32_t t22 = 3;

    t22 = ((x181/(x182<=x183))>x184);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x186 = UINT16_MAX;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MAX;
	static volatile int32_t t23 = 187179860;

    t23 = ((x185/(x186<=x187))>x188);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x198 = -1LL;
	int32_t x199 = INT32_MAX;
	int16_t x200 = INT16_MAX;
	int32_t t24 = -13295;

    t24 = ((x197/(x198<=x199))>x200);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x201 = UINT32_MAX;
	uint16_t x202 = 0U;
	static uint16_t x203 = 213U;
	uint64_t x204 = 11LLU;
	static volatile int32_t t25 = -242847219;

    t25 = ((x201/(x202<=x203))>x204);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x209 = 77142370;
	static int32_t x210 = -2873605;
	int32_t x211 = -1355;
	int64_t x212 = INT64_MIN;
	static volatile int32_t t26 = -31459;

    t26 = ((x209/(x210<=x211))>x212);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t t27 = -1484;

    t27 = ((x233/(x234<=x235))>x236);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x237 = INT8_MAX;
	int16_t x239 = 3173;
	int32_t x240 = -59536451;

    t28 = ((x237/(x238<=x239))>x240);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x241 = 1U;
	uint16_t x242 = 27U;
	uint64_t x243 = UINT64_MAX;
	uint8_t x244 = 109U;

    t29 = ((x241/(x242<=x243))>x244);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x249 = INT16_MAX;
	uint8_t x250 = UINT8_MAX;
	static uint64_t x251 = 104268LLU;
	volatile int32_t t30 = -41105233;

    t30 = ((x249/(x250<=x251))>x252);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x266 = 54;
	uint64_t x267 = 505296025445010959LLU;
	static volatile int32_t t31 = 96421269;

    t31 = ((x265/(x266<=x267))>x268);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x269 = INT16_MIN;
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = 312233935LL;
	int32_t x272 = INT32_MIN;
	int32_t t32 = 713370436;

    t32 = ((x269/(x270<=x271))>x272);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x278 = UINT16_MAX;
	static uint16_t x279 = UINT16_MAX;
	uint32_t x280 = 0U;
	static volatile int32_t t33 = -5663;

    t33 = ((x277/(x278<=x279))>x280);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x289 = -23;
	static uint64_t x291 = UINT64_MAX;
	int8_t x292 = 1;
	int32_t t34 = -3382502;

    t34 = ((x289/(x290<=x291))>x292);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x301 = 47U;
	uint8_t x302 = 16U;
	volatile uint16_t x304 = 198U;

    t35 = ((x301/(x302<=x303))>x304);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x313 = 13447638U;
	int16_t x315 = 0;
	volatile int32_t t36 = 1020897;

    t36 = ((x313/(x314<=x315))>x316);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x317 = UINT32_MAX;
	int8_t x318 = INT8_MAX;
	volatile uint16_t x319 = 210U;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t37 = 36595;

    t37 = ((x317/(x318<=x319))>x320);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MIN;
	uint8_t x324 = UINT8_MAX;
	static int32_t t38 = -133;

    t38 = ((x321/(x322<=x323))>x324);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x325 = 5321996458405623LL;
	int32_t x327 = 3165613;
	int8_t x328 = 1;
	int32_t t39 = -89477929;

    t39 = ((x325/(x326<=x327))>x328);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x333 = -1;
	int16_t x335 = 7451;
	int32_t x336 = -24085950;
	volatile int32_t t40 = 92147;

    t40 = ((x333/(x334<=x335))>x336);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x349 = 642773439458234LLU;
	int32_t x350 = INT32_MIN;
	volatile uint32_t x352 = 137U;
	int32_t t41 = 467;

    t41 = ((x349/(x350<=x351))>x352);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x366 = 97LLU;
	int8_t x367 = INT8_MIN;

    t42 = ((x365/(x366<=x367))>x368);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x370 = 4;
	volatile uint32_t x372 = UINT32_MAX;

    t43 = ((x369/(x370<=x371))>x372);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x374 = UINT16_MAX;
	int32_t x375 = INT32_MAX;
	uint8_t x376 = 92U;
	int32_t t44 = 39;

    t44 = ((x373/(x374<=x375))>x376);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x381 = 34U;
	uint8_t x383 = 13U;
	static int8_t x384 = INT8_MIN;

    t45 = ((x381/(x382<=x383))>x384);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x390 = 161U;
	uint32_t x391 = 123253U;
	int32_t x392 = INT32_MIN;
	int32_t t46 = 169840025;

    t46 = ((x389/(x390<=x391))>x392);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x397 = 24U;
	int16_t x399 = -1;

    t47 = ((x397/(x398<=x399))>x400);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x401 = INT64_MAX;
	volatile int16_t x402 = -6;
	int8_t x403 = INT8_MAX;
	int32_t x404 = -18245;
	int32_t t48 = 182388112;

    t48 = ((x401/(x402<=x403))>x404);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x409 = INT32_MAX;
	uint8_t x410 = 34U;
	uint8_t x411 = UINT8_MAX;
	volatile int16_t x412 = -17;
	static int32_t t49 = -15;

    t49 = ((x409/(x410<=x411))>x412);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x413 = 80U;
	int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MIN;
	int64_t x416 = INT64_MIN;
	volatile int32_t t50 = -4965;

    t50 = ((x413/(x414<=x415))>x416);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x421 = -1;
	int64_t x422 = -10LL;
	int16_t x423 = INT16_MAX;

    t51 = ((x421/(x422<=x423))>x424);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x433 = 2840;
	static volatile int16_t x434 = INT16_MIN;
	int32_t x435 = -1;
	volatile int32_t t52 = -29;

    t52 = ((x433/(x434<=x435))>x436);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x445 = UINT8_MAX;
	uint8_t x446 = 3U;
	uint16_t x447 = 1600U;
	int64_t x448 = 161718411LL;
	int32_t t53 = -440351312;

    t53 = ((x445/(x446<=x447))>x448);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x451 = -1;
	static int8_t x452 = INT8_MIN;
	static int32_t t54 = -1668;

    t54 = ((x449/(x450<=x451))>x452);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x453 = -28;
	uint64_t x454 = 0LLU;
	static volatile int8_t x455 = -1;
	int8_t x456 = INT8_MAX;
	int32_t t55 = 221947865;

    t55 = ((x453/(x454<=x455))>x456);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x458 = -1;
	static int16_t x459 = INT16_MAX;
	int16_t x460 = -1;
	int32_t t56 = -9;

    t56 = ((x457/(x458<=x459))>x460);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x465 = 512102LLU;
	uint16_t x467 = UINT16_MAX;
	uint32_t x468 = 1570U;

    t57 = ((x465/(x466<=x467))>x468);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x470 = UINT32_MAX;
	int16_t x471 = -1;
	int32_t x472 = 2181;
	volatile int32_t t58 = 3863472;

    t58 = ((x469/(x470<=x471))>x472);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x473 = INT64_MIN;
	uint32_t x474 = 30159138U;
	uint32_t x475 = UINT32_MAX;
	int64_t x476 = INT64_MAX;
	volatile int32_t t59 = -451759222;

    t59 = ((x473/(x474<=x475))>x476);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x481 = INT64_MAX;
	static int32_t x482 = 5268;
	int64_t x483 = INT64_MAX;
	volatile int8_t x484 = 13;
	volatile int32_t t60 = 113;

    t60 = ((x481/(x482<=x483))>x484);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x485 = -1;
	int64_t x486 = 90LL;
	uint64_t x487 = UINT64_MAX;
	uint32_t x488 = 1U;
	volatile int32_t t61 = 92119154;

    t61 = ((x485/(x486<=x487))>x488);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x489 = INT64_MAX;
	volatile int16_t x490 = INT16_MIN;
	static int8_t x491 = INT8_MIN;
	static int64_t x492 = -7993685923LL;
	volatile int32_t t62 = 1;

    t62 = ((x489/(x490<=x491))>x492);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x497 = 12;
	static uint16_t x498 = 6U;
	static volatile int64_t x499 = 31802731LL;
	int16_t x500 = -339;
	volatile int32_t t63 = 8617;

    t63 = ((x497/(x498<=x499))>x500);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x502 = INT64_MIN;
	int32_t x503 = 387;
	int8_t x504 = INT8_MAX;

    t64 = ((x501/(x502<=x503))>x504);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x509 = 9818LLU;
	uint32_t x511 = UINT32_MAX;
	volatile int32_t x512 = INT32_MIN;

    t65 = ((x509/(x510<=x511))>x512);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x521 = -1LL;
	int64_t x522 = INT64_MAX;
	uint64_t x523 = UINT64_MAX;
	int64_t x524 = INT64_MIN;

    t66 = ((x521/(x522<=x523))>x524);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x529 = INT64_MAX;
	int32_t x530 = -1;
	static uint64_t x531 = UINT64_MAX;
	static int16_t x532 = INT16_MAX;
	int32_t t67 = -1280;

    t67 = ((x529/(x530<=x531))>x532);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x537 = 94735U;
	int16_t x538 = INT16_MIN;
	static int64_t x540 = INT64_MAX;
	static int32_t t68 = -1292492;

    t68 = ((x537/(x538<=x539))>x540);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x545 = -1LL;
	static uint32_t x547 = UINT32_MAX;
	static uint64_t x548 = 11228816515689LLU;
	volatile int32_t t69 = 22406;

    t69 = ((x545/(x546<=x547))>x548);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x549 = -3;
	static uint32_t x550 = 6U;
	int32_t x551 = -1;
	int16_t x552 = INT16_MAX;

    t70 = ((x549/(x550<=x551))>x552);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x565 = UINT8_MAX;
	int8_t x566 = INT8_MIN;
	int32_t x567 = INT32_MAX;
	static uint32_t x568 = 80349U;
	volatile int32_t t71 = -3;

    t71 = ((x565/(x566<=x567))>x568);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x573 = 3U;
	int64_t x574 = -1LL;
	int8_t x575 = -1;
	static uint16_t x576 = 8U;
	volatile int32_t t72 = 0;

    t72 = ((x573/(x574<=x575))>x576);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x578 = -1;
	int16_t x579 = -1;
	static uint32_t x580 = UINT32_MAX;
	static volatile int32_t t73 = -1529;

    t73 = ((x577/(x578<=x579))>x580);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x581 = 0;
	uint64_t x583 = 253604090295739326LLU;
	static volatile int32_t t74 = -10;

    t74 = ((x581/(x582<=x583))>x584);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x593 = INT8_MIN;
	int64_t x594 = INT64_MIN;
	uint16_t x596 = 35U;
	volatile int32_t t75 = -2;

    t75 = ((x593/(x594<=x595))>x596);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x601 = -1;
	uint32_t x602 = 127U;
	uint8_t x603 = UINT8_MAX;
	int32_t x604 = -1;
	int32_t t76 = -7;

    t76 = ((x601/(x602<=x603))>x604);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x605 = UINT16_MAX;
	uint8_t x606 = 50U;
	uint32_t x607 = UINT32_MAX;
	int8_t x608 = INT8_MIN;
	volatile int32_t t77 = -555682076;

    t77 = ((x605/(x606<=x607))>x608);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x618 = INT8_MAX;
	static uint32_t x619 = UINT32_MAX;
	volatile uint16_t x620 = 16U;

    t78 = ((x617/(x618<=x619))>x620);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x621 = UINT64_MAX;
	uint8_t x622 = 86U;
	static uint8_t x623 = UINT8_MAX;
	uint32_t x624 = 28936U;
	volatile int32_t t79 = -4191452;

    t79 = ((x621/(x622<=x623))>x624);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x629 = -1LL;
	volatile uint32_t x630 = UINT32_MAX;
	int16_t x632 = -1;
	int32_t t80 = 110225863;

    t80 = ((x629/(x630<=x631))>x632);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x633 = -1LL;
	int64_t x634 = -17079LL;
	static int8_t x635 = INT8_MIN;
	volatile int32_t x636 = -4651;

    t81 = ((x633/(x634<=x635))>x636);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x637 = INT64_MAX;
	int16_t x639 = INT16_MAX;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t82 = 375;

    t82 = ((x637/(x638<=x639))>x640);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x642 = INT64_MIN;
	uint16_t x643 = UINT16_MAX;
	static int32_t x644 = INT32_MIN;
	volatile int32_t t83 = 3565353;

    t83 = ((x641/(x642<=x643))>x644);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x645 = -4262LL;
	volatile int32_t x646 = INT32_MIN;
	uint16_t x647 = 31U;
	static int8_t x648 = 5;

    t84 = ((x645/(x646<=x647))>x648);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x649 = 4265U;
	volatile int32_t x652 = INT32_MIN;

    t85 = ((x649/(x650<=x651))>x652);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x657 = -451322895805785975LL;
	int32_t x658 = -1;
	volatile int64_t x659 = 6713876693061535LL;
	static int16_t x660 = 1;
	volatile int32_t t86 = 4;

    t86 = ((x657/(x658<=x659))>x660);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x661 = 767494733LL;
	int64_t x662 = -2119LL;
	uint32_t x663 = 63977U;
	static int16_t x664 = INT16_MIN;
	int32_t t87 = 4;

    t87 = ((x661/(x662<=x663))>x664);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x669 = 11;
	int64_t x671 = INT64_MAX;
	int8_t x672 = -1;

    t88 = ((x669/(x670<=x671))>x672);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x681 = 687U;
	uint16_t x683 = 6U;
	static volatile int32_t x684 = -1;
	volatile int32_t t89 = 291025;

    t89 = ((x681/(x682<=x683))>x684);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x690 = 5U;
	uint8_t x691 = 6U;
	uint16_t x692 = UINT16_MAX;
	int32_t t90 = 0;

    t90 = ((x689/(x690<=x691))>x692);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x697 = 28302832U;
	int64_t x698 = -1LL;
	int8_t x699 = INT8_MAX;
	volatile int64_t x700 = 726441632515782LL;

    t91 = ((x697/(x698<=x699))>x700);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x702 = INT16_MIN;
	static int32_t x703 = -1;
	uint64_t x704 = 48638LLU;
	int32_t t92 = 378161939;

    t92 = ((x701/(x702<=x703))>x704);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x705 = UINT64_MAX;
	static int8_t x708 = INT8_MIN;
	int32_t t93 = -330025;

    t93 = ((x705/(x706<=x707))>x708);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x709 = -1;
	int16_t x710 = -1;
	int32_t x711 = 1155;
	int8_t x712 = -1;
	volatile int32_t t94 = -26614;

    t94 = ((x709/(x710<=x711))>x712);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x726 = INT32_MIN;
	int16_t x727 = -1;
	volatile int16_t x728 = INT16_MAX;
	static volatile int32_t t95 = 0;

    t95 = ((x725/(x726<=x727))>x728);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x729 = UINT8_MAX;
	uint64_t x730 = 0LLU;

    t96 = ((x729/(x730<=x731))>x732);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x734 = 57558876LLU;
	static int16_t x736 = INT16_MAX;
	int32_t t97 = -15386911;

    t97 = ((x733/(x734<=x735))>x736);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x749 = 1;
	uint16_t x750 = UINT16_MAX;
	static volatile uint32_t x751 = 554549U;
	volatile uint16_t x752 = 6253U;

    t98 = ((x749/(x750<=x751))>x752);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x769 = UINT64_MAX;
	volatile int64_t x771 = -32666485575904395LL;
	uint16_t x772 = UINT16_MAX;
	static volatile int32_t t99 = 109547;

    t99 = ((x769/(x770<=x771))>x772);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x773 = INT8_MIN;
	int8_t x774 = INT8_MIN;
	int32_t x775 = 29918945;
	int16_t x776 = INT16_MIN;

    t100 = ((x773/(x774<=x775))>x776);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x777 = -6;
	int8_t x779 = 1;
	uint16_t x780 = UINT16_MAX;
	static int32_t t101 = 29507;

    t101 = ((x777/(x778<=x779))>x780);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x785 = 49U;
	volatile int8_t x786 = -1;
	static int8_t x787 = 0;
	static volatile int32_t t102 = -451833115;

    t102 = ((x785/(x786<=x787))>x788);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x789 = INT8_MIN;
	static int16_t x790 = INT16_MIN;
	int8_t x791 = 1;
	int64_t x792 = INT64_MIN;
	int32_t t103 = -10;

    t103 = ((x789/(x790<=x791))>x792);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x793 = 78U;
	int32_t x794 = -1;
	int64_t x795 = INT64_MAX;
	int64_t x796 = INT64_MAX;
	int32_t t104 = -1397542;

    t104 = ((x793/(x794<=x795))>x796);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x817 = -6521;
	volatile int64_t x818 = -1LL;
	uint8_t x819 = UINT8_MAX;
	volatile int32_t t105 = -9;

    t105 = ((x817/(x818<=x819))>x820);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x821 = INT16_MAX;
	int8_t x822 = -1;
	int32_t x823 = 196307;
	uint32_t x824 = 12724592U;
	static volatile int32_t t106 = -110;

    t106 = ((x821/(x822<=x823))>x824);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x826 = 14U;
	int64_t x827 = 52492544938LL;
	volatile int16_t x828 = INT16_MAX;

    t107 = ((x825/(x826<=x827))>x828);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x829 = -6;
	static int8_t x830 = -60;
	int8_t x831 = -1;
	static volatile int64_t x832 = -145686226745427LL;
	static volatile int32_t t108 = -825882;

    t108 = ((x829/(x830<=x831))>x832);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x834 = INT8_MIN;
	int16_t x835 = -1;
	uint64_t x836 = 436997413LLU;
	int32_t t109 = -6796;

    t109 = ((x833/(x834<=x835))>x836);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x841 = 0U;
	int16_t x842 = INT16_MIN;
	int16_t x843 = INT16_MIN;
	int32_t x844 = 0;
	volatile int32_t t110 = 0;

    t110 = ((x841/(x842<=x843))>x844);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x845 = INT32_MIN;
	static volatile uint16_t x846 = 228U;
	uint32_t x847 = UINT32_MAX;
	int32_t t111 = -15;

    t111 = ((x845/(x846<=x847))>x848);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x849 = UINT8_MAX;
	int32_t x851 = INT32_MAX;
	static uint8_t x852 = UINT8_MAX;

    t112 = ((x849/(x850<=x851))>x852);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x857 = INT16_MAX;
	uint16_t x858 = 7U;
	uint16_t x859 = 23U;
	int32_t t113 = -829415435;

    t113 = ((x857/(x858<=x859))>x860);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x862 = INT8_MIN;
	uint16_t x863 = 4534U;
	int64_t x864 = INT64_MIN;
	int32_t t114 = 1;

    t114 = ((x861/(x862<=x863))>x864);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x865 = UINT16_MAX;
	static uint16_t x867 = 1528U;
	uint16_t x868 = UINT16_MAX;
	int32_t t115 = -45118965;

    t115 = ((x865/(x866<=x867))>x868);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x870 = INT32_MIN;
	static volatile int16_t x871 = 3995;
	int8_t x872 = INT8_MAX;

    t116 = ((x869/(x870<=x871))>x872);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x873 = INT8_MIN;
	int64_t x875 = -1LL;
	uint64_t x876 = 95506876043LLU;
	volatile int32_t t117 = -78877;

    t117 = ((x873/(x874<=x875))>x876);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x878 = UINT8_MAX;
	static uint64_t x879 = 366002835125173LLU;
	uint64_t x880 = 15173491749361LLU;

    t118 = ((x877/(x878<=x879))>x880);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x881 = -33148793LL;
	volatile uint16_t x882 = 12U;
	volatile int64_t x883 = INT64_MAX;
	static int32_t t119 = 192345803;

    t119 = ((x881/(x882<=x883))>x884);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x885 = 160LLU;
	int16_t x886 = 24;
	int64_t x888 = -92200714618LL;
	volatile int32_t t120 = -73986020;

    t120 = ((x885/(x886<=x887))>x888);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x893 = 5584LLU;
	int64_t x895 = INT64_MAX;
	uint8_t x896 = 9U;

    t121 = ((x893/(x894<=x895))>x896);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x897 = 294612U;
	int32_t x899 = INT32_MIN;
	volatile int32_t x900 = INT32_MAX;
	int32_t t122 = -191196031;

    t122 = ((x897/(x898<=x899))>x900);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x901 = INT8_MIN;
	static int16_t x902 = -1485;
	uint16_t x904 = 31U;
	static volatile int32_t t123 = 481;

    t123 = ((x901/(x902<=x903))>x904);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x905 = INT32_MIN;
	uint16_t x907 = 2938U;

    t124 = ((x905/(x906<=x907))>x908);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x913 = 3568U;
	static volatile int32_t x914 = -1;
	int32_t t125 = 964121559;

    t125 = ((x913/(x914<=x915))>x916);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x918 = -423;
	static int8_t x919 = INT8_MAX;
	int64_t x920 = 168998854797905LL;

    t126 = ((x917/(x918<=x919))>x920);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x921 = 110855379801LL;
	int8_t x922 = -1;
	static int32_t x923 = -1;
	static uint8_t x924 = 7U;
	volatile int32_t t127 = 0;

    t127 = ((x921/(x922<=x923))>x924);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x925 = -31;
	uint32_t x928 = 1144958U;
	int32_t t128 = -3595030;

    t128 = ((x925/(x926<=x927))>x928);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x934 = 1U;
	uint8_t x936 = 101U;

    t129 = ((x933/(x934<=x935))>x936);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x953 = INT32_MIN;
	static int32_t x954 = INT32_MIN;
	int32_t x955 = INT32_MAX;
	int64_t x956 = INT64_MIN;
	int32_t t130 = -578819;

    t130 = ((x953/(x954<=x955))>x956);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x957 = INT64_MAX;
	static int8_t x958 = -52;
	static volatile uint32_t x959 = UINT32_MAX;
	uint32_t x960 = UINT32_MAX;
	int32_t t131 = 1185;

    t131 = ((x957/(x958<=x959))>x960);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x961 = -1;
	int32_t x962 = -1;
	uint8_t x963 = 7U;
	int16_t x964 = INT16_MAX;
	static int32_t t132 = 1966;

    t132 = ((x961/(x962<=x963))>x964);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x965 = 57U;
	int64_t x966 = -1LL;
	int64_t x967 = -1LL;
	static volatile int32_t x968 = -255;
	volatile int32_t t133 = -172;

    t133 = ((x965/(x966<=x967))>x968);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x969 = UINT16_MAX;
	static uint64_t x971 = UINT64_MAX;
	int16_t x972 = INT16_MIN;
	int32_t t134 = -11188370;

    t134 = ((x969/(x970<=x971))>x972);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x973 = 19U;
	static int64_t x974 = INT64_MIN;
	uint64_t x976 = 0LLU;

    t135 = ((x973/(x974<=x975))>x976);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x977 = -4488;
	int32_t x978 = 18707;
	volatile uint16_t x979 = UINT16_MAX;
	volatile int64_t x980 = INT64_MAX;
	int32_t t136 = 580281;

    t136 = ((x977/(x978<=x979))>x980);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x981 = 3667;
	volatile uint32_t x982 = 14284783U;
	volatile int8_t x983 = INT8_MIN;
	int32_t t137 = 0;

    t137 = ((x981/(x982<=x983))>x984);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x985 = INT64_MIN;
	int32_t x987 = 1;
	static int32_t t138 = -131005;

    t138 = ((x985/(x986<=x987))>x988);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x989 = 7013;
	int64_t x990 = INT64_MIN;
	int8_t x991 = 1;
	volatile int32_t t139 = 822;

    t139 = ((x989/(x990<=x991))>x992);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x994 = -1;
	uint16_t x995 = 1259U;
	static volatile int32_t t140 = -394293725;

    t140 = ((x993/(x994<=x995))>x996);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x997 = UINT8_MAX;
	uint16_t x999 = 45U;
	int32_t x1000 = 603;
	int32_t t141 = 146618059;

    t141 = ((x997/(x998<=x999))>x1000);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x1002 = INT64_MIN;
	static int32_t x1004 = INT32_MIN;
	int32_t t142 = -10866;

    t142 = ((x1001/(x1002<=x1003))>x1004);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1006 = -1;
	int64_t x1007 = -1LL;
	int32_t x1008 = INT32_MIN;
	volatile int32_t t143 = 5955;

    t143 = ((x1005/(x1006<=x1007))>x1008);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1009 = 598293022183LLU;
	int64_t x1010 = INT64_MIN;
	volatile uint32_t x1011 = UINT32_MAX;
	int32_t x1012 = INT32_MAX;
	int32_t t144 = -8851;

    t144 = ((x1009/(x1010<=x1011))>x1012);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1029 = -1;
	int32_t x1030 = INT32_MIN;
	int16_t x1031 = -102;
	uint64_t x1032 = 502668316LLU;
	int32_t t145 = 363980;

    t145 = ((x1029/(x1030<=x1031))>x1032);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1033 = -2;
	static int8_t x1034 = INT8_MIN;
	uint64_t x1035 = UINT64_MAX;
	static int32_t t146 = -319007990;

    t146 = ((x1033/(x1034<=x1035))>x1036);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1037 = 85665824557125LLU;
	static int16_t x1038 = INT16_MIN;
	int16_t x1039 = -11786;
	int64_t x1040 = INT64_MIN;
	volatile int32_t t147 = 261;

    t147 = ((x1037/(x1038<=x1039))>x1040);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x1045 = INT16_MAX;
	uint64_t x1046 = 1906LLU;
	uint64_t x1047 = 128411405LLU;
	int32_t t148 = 22210911;

    t148 = ((x1045/(x1046<=x1047))>x1048);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1049 = UINT64_MAX;
	uint16_t x1050 = 8330U;
	volatile uint64_t x1051 = 143399850577LLU;
	int64_t x1052 = -1551306LL;
	volatile int32_t t149 = -819;

    t149 = ((x1049/(x1050<=x1051))>x1052);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1058 = 26497561U;
	int32_t x1059 = INT32_MAX;
	int8_t x1060 = INT8_MIN;
	static volatile int32_t t150 = 1;

    t150 = ((x1057/(x1058<=x1059))>x1060);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1061 = UINT64_MAX;
	volatile int32_t x1062 = -1;
	static volatile int32_t x1063 = INT32_MAX;
	int32_t t151 = -807276;

    t151 = ((x1061/(x1062<=x1063))>x1064);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1065 = UINT16_MAX;
	volatile int8_t x1066 = -1;

    t152 = ((x1065/(x1066<=x1067))>x1068);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1077 = -4;
	volatile int64_t x1078 = INT64_MIN;
	uint16_t x1079 = UINT16_MAX;
	uint16_t x1080 = UINT16_MAX;
	volatile int32_t t153 = -6;

    t153 = ((x1077/(x1078<=x1079))>x1080);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1085 = 1350U;
	int16_t x1086 = INT16_MIN;
	uint8_t x1087 = 13U;
	volatile int64_t x1088 = -1LL;
	static volatile int32_t t154 = -540;

    t154 = ((x1085/(x1086<=x1087))>x1088);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x1090 = INT8_MAX;
	int8_t x1091 = INT8_MAX;
	static int16_t x1092 = 1;

    t155 = ((x1089/(x1090<=x1091))>x1092);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1094 = 1U;
	uint8_t x1096 = UINT8_MAX;
	int32_t t156 = 2902;

    t156 = ((x1093/(x1094<=x1095))>x1096);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x1101 = 1328248U;
	static int64_t x1102 = -21019LL;
	int8_t x1103 = 1;
	uint16_t x1104 = UINT16_MAX;
	int32_t t157 = -309;

    t157 = ((x1101/(x1102<=x1103))>x1104);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x1105 = 22455U;
	uint16_t x1107 = 19979U;
	int64_t x1108 = INT64_MIN;
	int32_t t158 = -65349;

    t158 = ((x1105/(x1106<=x1107))>x1108);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x1125 = 0;
	uint8_t x1127 = 51U;
	int64_t x1128 = -1LL;
	static int32_t t159 = -6;

    t159 = ((x1125/(x1126<=x1127))>x1128);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1131 = INT64_MAX;
	int64_t x1132 = 236587096160LL;
	volatile int32_t t160 = 99842157;

    t160 = ((x1129/(x1130<=x1131))>x1132);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1133 = INT16_MIN;
	int16_t x1134 = INT16_MIN;
	static int16_t x1135 = INT16_MIN;
	int16_t x1136 = INT16_MIN;

    t161 = ((x1133/(x1134<=x1135))>x1136);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x1141 = INT32_MAX;
	int8_t x1142 = INT8_MIN;
	static int32_t x1144 = INT32_MIN;
	int32_t t162 = 598;

    t162 = ((x1141/(x1142<=x1143))>x1144);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x1149 = -10406LL;
	uint8_t x1151 = 0U;
	volatile int32_t x1152 = INT32_MAX;
	volatile int32_t t163 = 1004;

    t163 = ((x1149/(x1150<=x1151))>x1152);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x1157 = INT16_MIN;
	uint64_t x1159 = 4461161114504749LLU;
	int8_t x1160 = 6;

    t164 = ((x1157/(x1158<=x1159))>x1160);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1166 = INT32_MAX;
	static uint8_t x1168 = UINT8_MAX;
	int32_t t165 = -6304;

    t165 = ((x1165/(x1166<=x1167))>x1168);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x1169 = 3914U;
	int32_t x1170 = -25715;
	uint16_t x1171 = UINT16_MAX;
	uint8_t x1172 = 3U;

    t166 = ((x1169/(x1170<=x1171))>x1172);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x1173 = 124;
	static int64_t x1174 = INT64_MIN;
	int16_t x1176 = -1;
	int32_t t167 = 3286201;

    t167 = ((x1173/(x1174<=x1175))>x1176);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1181 = -1LL;
	int32_t x1182 = INT32_MIN;
	int16_t x1183 = INT16_MIN;
	uint16_t x1184 = UINT16_MAX;
	volatile int32_t t168 = 5;

    t168 = ((x1181/(x1182<=x1183))>x1184);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1185 = 2;
	int16_t x1187 = INT16_MAX;
	int32_t t169 = 0;

    t169 = ((x1185/(x1186<=x1187))>x1188);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1225 = 2307;
	int64_t x1226 = -47047168LL;
	volatile uint16_t x1227 = 14949U;
	uint8_t x1228 = 2U;
	volatile int32_t t170 = 78253156;

    t170 = ((x1225/(x1226<=x1227))>x1228);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1229 = INT16_MIN;
	volatile int32_t x1230 = INT32_MIN;
	static uint32_t x1231 = UINT32_MAX;
	int8_t x1232 = 1;

    t171 = ((x1229/(x1230<=x1231))>x1232);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x1239 = 36676269258991476LLU;
	uint8_t x1240 = 37U;

    t172 = ((x1237/(x1238<=x1239))>x1240);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1241 = UINT16_MAX;
	static uint64_t x1242 = 4092407958253LLU;
	static int64_t x1243 = INT64_MIN;
	int16_t x1244 = 873;
	static int32_t t173 = -435;

    t173 = ((x1241/(x1242<=x1243))>x1244);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1245 = INT8_MIN;
	int16_t x1246 = INT16_MIN;
	volatile int32_t t174 = -78483024;

    t174 = ((x1245/(x1246<=x1247))>x1248);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1257 = 2U;
	uint16_t x1258 = 233U;
	static volatile int64_t x1259 = INT64_MAX;
	static int32_t t175 = 58888797;

    t175 = ((x1257/(x1258<=x1259))>x1260);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1263 = UINT64_MAX;
	static int8_t x1264 = INT8_MIN;

    t176 = ((x1261/(x1262<=x1263))>x1264);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1270 = 0U;
	int16_t x1272 = -11;
	int32_t t177 = 1689572;

    t177 = ((x1269/(x1270<=x1271))>x1272);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1277 = INT8_MIN;
	static int8_t x1279 = -12;
	int32_t t178 = -54402820;

    t178 = ((x1277/(x1278<=x1279))>x1280);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1282 = UINT16_MAX;
	volatile uint64_t x1283 = UINT64_MAX;
	static int16_t x1284 = INT16_MIN;
	static int32_t t179 = -372181752;

    t179 = ((x1281/(x1282<=x1283))>x1284);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1293 = INT8_MAX;
	static int64_t x1294 = INT64_MIN;
	int64_t x1295 = 4LL;
	int32_t x1296 = 1;
	int32_t t180 = -61704;

    t180 = ((x1293/(x1294<=x1295))>x1296);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1298 = -902427266LL;
	static volatile int64_t x1299 = -1LL;
	int8_t x1300 = 0;
	int32_t t181 = -11658;

    t181 = ((x1297/(x1298<=x1299))>x1300);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1305 = -9;
	int8_t x1306 = 1;
	uint8_t x1307 = UINT8_MAX;

    t182 = ((x1305/(x1306<=x1307))>x1308);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1313 = INT64_MAX;
	int16_t x1314 = INT16_MIN;
	uint16_t x1315 = 13612U;
	int64_t x1316 = -125LL;
	int32_t t183 = -2418716;

    t183 = ((x1313/(x1314<=x1315))>x1316);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x1317 = -1LL;
	int64_t x1318 = -1LL;

    t184 = ((x1317/(x1318<=x1319))>x1320);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1326 = 0U;
	uint16_t x1327 = 10U;
	int64_t x1328 = 13222355LL;
	volatile int32_t t185 = -11210;

    t185 = ((x1325/(x1326<=x1327))>x1328);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1329 = 390946331559LLU;
	volatile int64_t x1330 = -655224LL;
	int32_t x1332 = INT32_MIN;
	static int32_t t186 = -376;

    t186 = ((x1329/(x1330<=x1331))>x1332);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1333 = INT16_MIN;
	int32_t x1334 = -138613776;
	int32_t x1335 = -1;
	int16_t x1336 = INT16_MIN;
	int32_t t187 = 890;

    t187 = ((x1333/(x1334<=x1335))>x1336);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1341 = INT64_MIN;
	static int64_t x1342 = INT64_MIN;
	int8_t x1343 = INT8_MIN;
	uint16_t x1344 = 3U;
	int32_t t188 = -432813994;

    t188 = ((x1341/(x1342<=x1343))>x1344);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1349 = -1LL;
	int32_t x1352 = 237;
	int32_t t189 = 723220;

    t189 = ((x1349/(x1350<=x1351))>x1352);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1353 = INT64_MIN;
	static int8_t x1354 = INT8_MIN;
	static int64_t x1356 = 454088918164LL;
	int32_t t190 = 3563578;

    t190 = ((x1353/(x1354<=x1355))>x1356);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1357 = INT32_MIN;
	static volatile int16_t x1358 = INT16_MIN;
	uint8_t x1359 = 16U;
	static uint8_t x1360 = 1U;
	volatile int32_t t191 = 192010225;

    t191 = ((x1357/(x1358<=x1359))>x1360);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1366 = -662;
	volatile int8_t x1367 = INT8_MIN;
	int16_t x1368 = 16186;
	int32_t t192 = -3913897;

    t192 = ((x1365/(x1366<=x1367))>x1368);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1369 = UINT64_MAX;
	int8_t x1370 = 0;
	static volatile int64_t x1371 = INT64_MAX;
	volatile int32_t t193 = 429011896;

    t193 = ((x1369/(x1370<=x1371))>x1372);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1377 = INT8_MIN;
	int32_t x1379 = INT32_MIN;
	volatile uint64_t x1380 = 38510880LLU;
	int32_t t194 = 31467;

    t194 = ((x1377/(x1378<=x1379))>x1380);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1385 = INT64_MAX;
	int8_t x1386 = -1;
	int16_t x1388 = INT16_MAX;
	int32_t t195 = 1;

    t195 = ((x1385/(x1386<=x1387))>x1388);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x1397 = INT8_MAX;
	int64_t x1398 = -1042145060132LL;
	uint16_t x1399 = 10590U;
	volatile int32_t t196 = -501;

    t196 = ((x1397/(x1398<=x1399))>x1400);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1402 = INT64_MIN;
	volatile int64_t x1403 = 1LL;
	int16_t x1404 = INT16_MIN;
	volatile int32_t t197 = -295;

    t197 = ((x1401/(x1402<=x1403))>x1404);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1405 = 31U;
	int8_t x1407 = INT8_MIN;
	uint16_t x1408 = 46U;
	volatile int32_t t198 = -30707;

    t198 = ((x1405/(x1406<=x1407))>x1408);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1417 = INT64_MIN;
	int16_t x1419 = INT16_MAX;
	static uint8_t x1420 = UINT8_MAX;
	int32_t t199 = -23764270;

    t199 = ((x1417/(x1418<=x1419))>x1420);

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

