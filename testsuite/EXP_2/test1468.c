#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x17 = 535U;
uint16_t x19 = 22276U;
volatile int64_t x20 = 607798775763833933LL;
int8_t x23 = INT8_MAX;
static volatile int32_t x25 = INT32_MIN;
int64_t x30 = INT64_MIN;
int64_t x31 = -2471317579LL;
int32_t t11 = -7528247;
volatile int64_t x55 = INT64_MIN;
int8_t x58 = -1;
volatile int16_t x59 = INT16_MIN;
int8_t x62 = INT8_MIN;
int16_t x69 = INT16_MIN;
volatile int64_t x76 = INT64_MIN;
int64_t t18 = INT64_MIN;
uint8_t x83 = 3U;
static volatile int32_t x90 = -1;
uint32_t x91 = UINT32_MAX;
int32_t x94 = -1;
uint16_t x95 = UINT16_MAX;
uint16_t x98 = 14060U;
int8_t x100 = INT8_MAX;
int8_t x103 = INT8_MIN;
int16_t x104 = 1;
static int32_t x108 = -401215;
static int64_t x111 = 111752543294059681LL;
static volatile int32_t t27 = -158538;
int16_t x116 = INT16_MIN;
static int8_t x125 = INT8_MIN;
int16_t x127 = INT16_MAX;
static int64_t x128 = -900986318102LL;
static int16_t x129 = INT16_MIN;
static volatile int32_t t32 = -1808066;
static volatile uint8_t x135 = 10U;
int16_t x138 = -4;
int16_t x140 = -1;
int16_t x141 = -1;
int32_t x147 = 241;
int64_t x148 = -1LL;
volatile int32_t t38 = 78747875;
int64_t t39 = INT64_MIN;
volatile int32_t t41 = INT32_MAX;
static int8_t x173 = -1;
int64_t x177 = -1LL;
volatile uint32_t t44 = UINT32_MAX;
uint16_t x192 = 551U;
int32_t t47 = -217425127;
volatile uint8_t x193 = 6U;
int64_t x198 = INT64_MAX;
uint64_t x199 = 50336785815243LLU;
int32_t t49 = -300003312;
int16_t x201 = INT16_MIN;
int64_t x203 = INT64_MAX;
static volatile int16_t x204 = INT16_MIN;
int32_t t50 = 1;
int64_t x215 = INT64_MAX;
int8_t x216 = INT8_MIN;
volatile int8_t x220 = -15;
volatile int32_t t54 = -106270848;
static int8_t x235 = -1;
int64_t t58 = INT64_MIN;
int16_t x238 = -6719;
uint16_t x239 = 0U;
int16_t x247 = INT16_MIN;
int32_t x255 = INT32_MAX;
uint32_t x258 = 46326U;
int32_t x264 = INT32_MIN;
int64_t x274 = INT64_MIN;
int8_t x278 = INT8_MAX;
uint32_t x280 = UINT32_MAX;
static int8_t x285 = INT8_MIN;
volatile int32_t t72 = -510121707;
int32_t x296 = 137517369;
volatile int32_t t73 = 513;
uint32_t x303 = 3U;
static volatile int64_t t75 = 26123202LL;
int16_t x311 = INT16_MIN;
int8_t x314 = INT8_MIN;
int16_t x317 = -1;
int64_t x318 = -1LL;
volatile int8_t x323 = -1;
int32_t x326 = -835168;
int64_t x334 = -2242281843878LL;
uint64_t x335 = UINT64_MAX;
volatile int64_t x349 = INT64_MIN;
int8_t x352 = INT8_MAX;
int32_t x356 = INT32_MAX;
static volatile int32_t t88 = INT32_MAX;
int32_t t89 = -20;
int32_t t91 = 181;
int32_t x369 = INT32_MAX;
static uint16_t x380 = 9U;
uint8_t x391 = 15U;
volatile int64_t t99 = INT64_MIN;


void f0(void) {
	int16_t x1 = -1;
	uint8_t x2 = UINT8_MAX;
	uint32_t x3 = 6391094U;
	static int32_t x4 = 517;
	volatile int32_t t0 = -3647269;

	t0 = ((x1<(x2<x3))|x4);

	if (t0 != 517) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	int32_t x6 = INT32_MIN;
	static volatile int8_t x7 = -1;
	int32_t x8 = INT32_MIN;
	int32_t t1 = INT32_MIN;

	t1 = ((x5<(x6<x7))|x8);

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int64_t x10 = 8541950524436LL;
	int8_t x11 = -1;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -272592428;

	t2 = ((x9<(x10<x11))|x12);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 10114U;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = ((x13<(x14<x15))|x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = 1;
	int64_t t4 = -64839LL;

	t4 = ((x17<(x18<x19))|x20);

	if (t4 != 607798775763833933LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile int8_t x22 = -25;
	int32_t x24 = 723955065;
	int32_t t5 = 0;

	t5 = ((x21<(x22<x23))|x24);

	if (t5 != 723955065) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	static uint32_t x27 = 539U;
	uint64_t x28 = 893222454LLU;
	volatile uint64_t t6 = 13316466993326245LLU;

	t6 = ((x25<(x26<x27))|x28);

	if (t6 != 893222455LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -783;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29<(x30<x31))|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 1U;
	int32_t x34 = 147261196;
	int16_t x35 = -1;
	uint32_t x36 = 16U;
	uint32_t t8 = 62363U;

	t8 = ((x33<(x34<x35))|x36);

	if (t8 != 16U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int16_t x38 = 819;
	int32_t x39 = 240508996;
	volatile int8_t x40 = -1;
	int32_t t9 = 15;

	t9 = ((x37<(x38<x39))|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	volatile uint8_t x42 = 63U;
	static volatile int16_t x43 = INT16_MAX;
	int64_t x44 = -1LL;
	static int64_t t10 = -1934924762282394070LL;

	t10 = ((x41<(x42<x43))|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 199;
	uint16_t x46 = UINT16_MAX;
	volatile int8_t x47 = INT8_MIN;
	int8_t x48 = 1;

	t11 = ((x45<(x46<x47))|x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 627231492U;
	int8_t x50 = 0;
	int16_t x51 = 218;
	int64_t x52 = INT64_MIN;
	static int64_t t12 = INT64_MIN;

	t12 = ((x49<(x50<x51))|x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MAX;
	uint16_t x54 = 12U;
	uint8_t x56 = 2U;
	static int32_t t13 = -1;

	t13 = ((x53<(x54<x55))|x56);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 2U;
	volatile uint64_t x60 = 923LLU;
	volatile uint64_t t14 = 12LLU;

	t14 = ((x57<(x58<x59))|x60);

	if (t14 != 923LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int64_t x63 = -1LL;
	uint64_t x64 = 1LLU;
	uint64_t t15 = 3330425LLU;

	t15 = ((x61<(x62<x63))|x64);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 77U;
	int8_t x66 = INT8_MAX;
	int8_t x67 = -1;
	int16_t x68 = 296;
	static volatile int32_t t16 = -6458252;

	t16 = ((x65<(x66<x67))|x68);

	if (t16 != 296) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x70 = 0;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	static int32_t t17 = 5184205;

	t17 = ((x69<(x70<x71))|x72);

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 1843071LLU;
	static uint16_t x74 = 877U;
	uint64_t x75 = 1755779563LLU;

	t18 = ((x73<(x74<x75))|x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	volatile int64_t x80 = INT64_MIN;
	int64_t t19 = -202678009LL;

	t19 = ((x77<(x78<x79))|x80);

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 9662235734117464LLU;
	uint8_t x82 = 2U;
	int8_t x84 = -6;
	volatile int32_t t20 = -4045;

	t20 = ((x81<(x82<x83))|x84);

	if (t20 != -6) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	static int32_t x86 = INT32_MAX;
	static volatile uint64_t x87 = UINT64_MAX;
	int32_t x88 = -1;
	static volatile int32_t t21 = -7587;

	t21 = ((x85<(x86<x87))|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = -1;
	int16_t x92 = -1;
	static volatile int32_t t22 = 111545076;

	t22 = ((x89<(x90<x91))|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 2U;
	int64_t x96 = INT64_MIN;
	int64_t t23 = INT64_MIN;

	t23 = ((x93<(x94<x95))|x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x99 = 14541196914492LLU;
	static volatile int32_t t24 = -2433430;

	t24 = ((x97<(x98<x99))|x100);

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = 9610;
	int64_t x102 = INT64_MIN;
	int32_t t25 = 259476;

	t25 = ((x101<(x102<x103))|x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 607460698456482LLU;
	int16_t x106 = 1;
	int8_t x107 = INT8_MAX;
	volatile int32_t t26 = -42503;

	t26 = ((x105<(x106<x107))|x108);

	if (t26 != -401215) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 467U;
	static uint8_t x110 = 7U;
	int16_t x112 = INT16_MAX;

	t27 = ((x109<(x110<x111))|x112);

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	volatile uint8_t x114 = 5U;
	static int64_t x115 = INT64_MAX;
	volatile int32_t t28 = 32019;

	t28 = ((x113<(x114<x115))|x116);

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 406454U;
	static int32_t x118 = -331808011;
	int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -18809540;

	t29 = ((x117<(x118<x119))|x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	static volatile int16_t x122 = INT16_MAX;
	volatile int8_t x123 = 62;
	static volatile int64_t x124 = 56772630957328094LL;
	volatile int64_t t30 = -12562101930648LL;

	t30 = ((x121<(x122<x123))|x124);

	if (t30 != 56772630957328094LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	static volatile int64_t t31 = -10995325LL;

	t31 = ((x125<(x126<x127))|x128);

	if (t31 != -900986318101LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = -1;
	int8_t x131 = -52;
	volatile uint16_t x132 = 63U;

	t32 = ((x129<(x130<x131))|x132);

	if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = -1208254LL;
	int8_t x136 = INT8_MAX;
	int32_t t33 = -449322;

	t33 = ((x133<(x134<x135))|x136);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x139 = UINT64_MAX;
	volatile int32_t t34 = -96206;

	t34 = ((x137<(x138<x139))|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = -1;
	int64_t x143 = -1LL;
	volatile int8_t x144 = -1;
	volatile int32_t t35 = -61;

	t35 = ((x141<(x142<x143))|x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	static int64_t x146 = INT64_MIN;
	int64_t t36 = 154310472800LL;

	t36 = ((x145<(x146<x147))|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -136698893242LL;
	int64_t x150 = INT64_MIN;
	static int16_t x151 = -1;
	int32_t x152 = 22368;
	int32_t t37 = -13920;

	t37 = ((x149<(x150<x151))|x152);

	if (t37 != 22369) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	static int16_t x154 = INT16_MAX;
	static int16_t x155 = -13566;
	int16_t x156 = 3260;

	t38 = ((x153<(x154<x155))|x156);

	if (t38 != 3260) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	uint8_t x158 = UINT8_MAX;
	static uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MIN;

	t39 = ((x157<(x158<x159))|x160);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = -1LL;
	volatile int32_t x162 = -1;
	int32_t x163 = -139;
	static uint32_t x164 = 38994U;
	uint32_t t40 = 103722U;

	t40 = ((x161<(x162<x163))|x164);

	if (t40 != 38995U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	static int32_t x166 = 64867128;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MAX;

	t41 = ((x165<(x166<x167))|x168);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 1U;
	static int16_t x170 = INT16_MAX;
	volatile uint16_t x171 = 13625U;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t42 = INT32_MIN;

	t42 = ((x169<(x170<x171))|x172);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = -1;
	volatile int64_t x175 = -1LL;
	uint64_t x176 = 7583557185LLU;
	uint64_t t43 = 1822LLU;

	t43 = ((x173<(x174<x175))|x176);

	if (t43 != 7583557185LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x178 = INT8_MAX;
	int64_t x179 = -1LL;
	uint32_t x180 = UINT32_MAX;

	t44 = ((x177<(x178<x179))|x180);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 439486LL;
	int8_t x182 = 20;
	volatile int64_t x183 = 22503LL;
	volatile int16_t x184 = INT16_MAX;
	volatile int32_t t45 = -1;

	t45 = ((x181<(x182<x183))|x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int64_t x186 = -1LL;
	uint16_t x187 = 121U;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t46 = INT32_MIN;

	t46 = ((x185<(x186<x187))|x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -2573;
	static int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;

	t47 = ((x189<(x190<x191))|x192);

	if (t47 != 551) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = 2U;
	uint64_t x195 = 5007LLU;
	int16_t x196 = INT16_MIN;
	static int32_t t48 = -498;

	t48 = ((x193<(x194<x195))|x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -42352LL;
	int16_t x200 = INT16_MIN;

	t49 = ((x197<(x198<x199))|x200);

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = 0U;

	t50 = ((x201<(x202<x203))|x204);

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = UINT32_MAX;
	int16_t x206 = 72;
	int8_t x207 = -1;
	volatile int32_t x208 = -1;
	volatile int32_t t51 = 25;

	t51 = ((x205<(x206<x207))|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -5;
	volatile int8_t x210 = 0;
	int8_t x211 = -3;
	int32_t x212 = INT32_MIN;
	int32_t t52 = 88;

	t52 = ((x209<(x210<x211))|x212);

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static uint64_t x214 = 1261481LLU;
	static int32_t t53 = 579;

	t53 = ((x213<(x214<x215))|x216);

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	uint8_t x218 = UINT8_MAX;
	uint8_t x219 = 58U;

	t54 = ((x217<(x218<x219))|x220);

	if (t54 != -15) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	volatile uint32_t x222 = UINT32_MAX;
	static int8_t x223 = -1;
	int64_t x224 = INT64_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = ((x221<(x222<x223))|x224);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -7;
	int16_t x226 = 2261;
	static uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -330266;

	t56 = ((x225<(x226<x227))|x228);

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = -1LL;
	static int8_t x231 = INT8_MIN;
	int8_t x232 = -1;
	int32_t t57 = -19304930;

	t57 = ((x229<(x230<x231))|x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	int16_t x234 = INT16_MIN;
	int64_t x236 = INT64_MIN;

	t58 = ((x233<(x234<x235))|x236);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 5;
	volatile uint64_t x240 = UINT64_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = ((x237<(x238<x239))|x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	static volatile int16_t x242 = INT16_MIN;
	static volatile uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 1;

	t60 = ((x241<(x242<x243))|x244);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint64_t x246 = 109LLU;
	static volatile int8_t x248 = 13;
	volatile int32_t t61 = -1419;

	t61 = ((x245<(x246<x247))|x248);

	if (t61 != 13) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = 26U;
	int64_t x252 = INT64_MIN;
	static volatile int64_t t62 = INT64_MIN;

	t62 = ((x249<(x250<x251))|x252);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 36U;
	int8_t x254 = -1;
	uint16_t x256 = 3711U;
	static volatile int32_t t63 = 240670;

	t63 = ((x253<(x254<x255))|x256);

	if (t63 != 3711) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -30787424686025LL;
	int32_t x259 = INT32_MIN;
	volatile int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -625591435;

	t64 = ((x257<(x258<x259))|x260);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MIN;
	int32_t x263 = -1;
	volatile int32_t t65 = INT32_MIN;

	t65 = ((x261<(x262<x263))|x264);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	uint32_t x266 = 3771535U;
	static int8_t x267 = -6;
	int64_t x268 = -1LL;
	volatile int64_t t66 = -1127557LL;

	t66 = ((x265<(x266<x267))|x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int16_t x270 = INT16_MIN;
	int32_t x271 = 773377;
	uint64_t x272 = 921LLU;
	uint64_t t67 = 140318578897LLU;

	t67 = ((x269<(x270<x271))|x272);

	if (t67 != 921LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = 16U;
	int16_t x275 = INT16_MAX;
	int8_t x276 = 9;
	int32_t t68 = 259;

	t68 = ((x273<(x274<x275))|x276);

	if (t68 != 9) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MAX;
	int32_t x279 = -1;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = ((x277<(x278<x279))|x280);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 328U;
	int8_t x282 = INT8_MIN;
	volatile uint64_t x283 = 8347988901782LLU;
	volatile uint32_t x284 = 8409244U;
	volatile uint32_t t70 = 1U;

	t70 = ((x281<(x282<x283))|x284);

	if (t70 != 8409244U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = 30914;
	int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 3703203;

	t71 = ((x285<(x286<x287))|x288);

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 44166U;
	uint32_t x290 = 162U;
	uint32_t x291 = 4245625U;
	static uint8_t x292 = UINT8_MAX;

	t72 = ((x289<(x290<x291))|x292);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -553955223152LL;
	int32_t x294 = INT32_MIN;
	volatile int16_t x295 = -1;

	t73 = ((x293<(x294<x295))|x296);

	if (t73 != 137517369) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -6;
	uint8_t x298 = 0U;
	int32_t x299 = INT32_MIN;
	static uint8_t x300 = 114U;
	static volatile int32_t t74 = -10206464;

	t74 = ((x297<(x298<x299))|x300);

	if (t74 != 115) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 3;
	uint8_t x302 = 0U;
	volatile int64_t x304 = 4039959362366LL;

	t75 = ((x301<(x302<x303))|x304);

	if (t75 != 4039959362366LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = 1;
	volatile uint32_t x307 = 1230495U;
	volatile uint32_t x308 = 608437U;
	volatile uint32_t t76 = 245071753U;

	t76 = ((x305<(x306<x307))|x308);

	if (t76 != 608437U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MAX;
	int16_t x310 = -724;
	static uint8_t x312 = UINT8_MAX;
	volatile int32_t t77 = 14;

	t77 = ((x309<(x310<x311))|x312);

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 532U;
	int64_t x315 = 6482398017269LL;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = INT32_MIN;

	t78 = ((x313<(x314<x315))|x316);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x319 = UINT32_MAX;
	int32_t x320 = 9625661;
	volatile int32_t t79 = -52;

	t79 = ((x317<(x318<x319))|x320);

	if (t79 != 9625661) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile uint8_t x322 = 1U;
	int32_t x324 = INT32_MAX;
	int32_t t80 = INT32_MAX;

	t80 = ((x321<(x322<x323))|x324);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = UINT32_MAX;
	static uint16_t x327 = 0U;
	static uint16_t x328 = 2U;
	int32_t t81 = 2465525;

	t81 = ((x325<(x326<x327))|x328);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = 426694558;
	volatile int32_t x330 = -1;
	uint8_t x331 = 9U;
	static uint64_t x332 = UINT64_MAX;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x329<(x330<x331))|x332);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -125985;
	uint32_t x336 = UINT32_MAX;
	uint32_t t83 = UINT32_MAX;

	t83 = ((x333<(x334<x335))|x336);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x337 = 617731140;
	volatile uint32_t x338 = UINT32_MAX;
	int64_t x339 = INT64_MAX;
	uint64_t x340 = UINT64_MAX;
	uint64_t t84 = UINT64_MAX;

	t84 = ((x337<(x338<x339))|x340);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	uint32_t x342 = 179065211U;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = ((x341<(x342<x343))|x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = UINT16_MAX;
	int16_t x346 = 4;
	int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = ((x345<(x346<x347))|x348);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = UINT16_MAX;
	uint32_t x351 = 126684U;
	volatile int32_t t87 = 159954383;

	t87 = ((x349<(x350<x351))|x352);

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 60U;
	uint8_t x354 = UINT8_MAX;
	int16_t x355 = INT16_MIN;

	t88 = ((x353<(x354<x355))|x356);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 3257979749916851LL;
	volatile int32_t x358 = -266650;
	volatile int8_t x359 = 1;
	int32_t x360 = -31;

	t89 = ((x357<(x358<x359))|x360);

	if (t89 != -31) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -86;
	static uint16_t x362 = UINT16_MAX;
	int64_t x363 = -1LL;
	static int16_t x364 = -1;
	static int32_t t90 = 447;

	t90 = ((x361<(x362<x363))|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = 5;
	int16_t x366 = -1;
	int8_t x367 = 1;
	static int8_t x368 = INT8_MAX;

	t91 = ((x365<(x366<x367))|x368);

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x370 = 27833LLU;
	int16_t x371 = -1;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 8;

	t92 = ((x369<(x370<x371))|x372);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x373 = 64U;
	uint16_t x374 = 1U;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;
	int64_t t93 = 4200452146LL;

	t93 = ((x373<(x374<x375))|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = -22;
	int16_t x379 = INT16_MIN;
	int32_t t94 = -85791;

	t94 = ((x377<(x378<x379))|x380);

	if (t94 != 9) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x381 = 66727;
	static int8_t x382 = INT8_MAX;
	int8_t x383 = -1;
	volatile int16_t x384 = -900;
	int32_t t95 = -212667503;

	t95 = ((x381<(x382<x383))|x384);

	if (t95 != -900) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 3709172U;
	int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = 321903468168973LLU;
	uint64_t t96 = 6382456719044LLU;

	t96 = ((x385<(x386<x387))|x388);

	if (t96 != 321903468168973LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 41228126U;
	volatile int64_t x390 = INT64_MIN;
	static int32_t x392 = 856;
	volatile int32_t t97 = -5467191;

	t97 = ((x389<(x390<x391))|x392);

	if (t97 != 856) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 245U;
	int16_t x395 = INT16_MIN;
	volatile int64_t x396 = INT64_MIN;
	volatile int64_t t98 = INT64_MIN;

	t98 = ((x393<(x394<x395))|x396);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int32_t x398 = 28201;
	int32_t x399 = INT32_MIN;
	volatile int64_t x400 = INT64_MIN;

	t99 = ((x397<(x398<x399))|x400);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

