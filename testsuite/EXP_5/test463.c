#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 3015;
int8_t x26 = INT8_MIN;
volatile uint64_t x32 = 2517LLU;
static int64_t x35 = -752051009458276LL;
volatile int32_t t9 = 2527;
static int64_t x41 = INT64_MAX;
int32_t t10 = 409;
volatile int32_t x49 = -1;
int32_t x50 = -50;
volatile int64_t x51 = -1LL;
static int64_t x53 = INT64_MAX;
static uint8_t x55 = 13U;
uint8_t x56 = 8U;
volatile int8_t x58 = 2;
int32_t x59 = 292879;
volatile int16_t x60 = 1504;
int32_t t15 = -654;
uint8_t x75 = 2U;
int32_t t18 = 0;
int64_t x90 = -1LL;
static volatile int32_t t20 = -273;
static int32_t x107 = INT32_MAX;
static volatile uint16_t x109 = 15U;
static int64_t x111 = -1LL;
int8_t x114 = -12;
int32_t x123 = -1;
int32_t x124 = -1;
volatile uint32_t x126 = 3U;
int16_t x129 = -1;
int32_t t29 = 40910908;
static uint8_t x135 = UINT8_MAX;
static int16_t x148 = -1;
int8_t x152 = 5;
static int32_t t32 = 16180667;
uint32_t x160 = 527U;
static int32_t x161 = INT32_MIN;
uint32_t x162 = UINT32_MAX;
int16_t x165 = -1;
uint8_t x167 = UINT8_MAX;
int16_t x168 = INT16_MIN;
int64_t x176 = 1979872061014LL;
volatile int64_t x197 = -1LL;
static int8_t x199 = 0;
volatile int32_t t45 = 2044545;
static int32_t t46 = 2;
int8_t x213 = INT8_MIN;
int8_t x215 = INT8_MIN;
int32_t t48 = -7031337;
volatile int16_t x221 = INT16_MIN;
int8_t x223 = -1;
static volatile uint64_t x234 = 1022932531427725LLU;
int32_t x236 = INT32_MIN;
volatile int32_t t52 = 7190;
uint8_t x246 = 59U;
static int64_t x258 = -1LL;
uint32_t x264 = 13U;
int64_t x265 = INT64_MIN;
volatile uint64_t x292 = UINT64_MAX;
static int8_t x296 = 62;
static volatile uint16_t x311 = UINT16_MAX;
int32_t t68 = 15407212;
uint64_t x331 = 95LLU;
int32_t x338 = 2927;
volatile int16_t x341 = INT16_MIN;
int32_t t73 = 1;
static uint64_t x351 = 82LLU;
uint32_t x359 = 31U;
static int32_t x361 = 12;
uint8_t x378 = 41U;
uint64_t x379 = UINT64_MAX;
int16_t x383 = 14;
int16_t x404 = -1;
int32_t t83 = -3;
static uint32_t x409 = 10U;
int32_t t84 = -12;
int64_t x424 = -185714737252190LL;
uint16_t x425 = UINT16_MAX;
static volatile int8_t x428 = 41;
volatile int32_t t87 = -1;
int8_t x431 = -1;
volatile int32_t t89 = 10162;
volatile uint32_t x437 = UINT32_MAX;
volatile int32_t t90 = -30926;
static uint64_t x458 = 105762693171391LLU;
int32_t x463 = -306;
uint16_t x476 = UINT16_MAX;
int16_t x490 = 364;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int8_t x3 = 0;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 463;

	t0 = (x1==((x2*x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 10;
	static int32_t x6 = 14;
	volatile uint32_t x7 = 3U;
	static int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 22;

	t1 = (x5==((x6*x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 45LL;
	int8_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 27U;
	int32_t t2 = -1385492;

	t2 = (x9==((x10*x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	volatile int8_t x14 = -1;
	int64_t x15 = -1LL;
	volatile uint16_t x16 = 8U;
	volatile int32_t t3 = -3128;

	t3 = (x13==((x14*x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 19U;
	volatile uint8_t x18 = 1U;
	volatile uint16_t x19 = UINT16_MAX;
	uint16_t x20 = 2U;
	volatile int32_t t4 = -3;

	t4 = (x17==((x18*x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = 66736LL;
	uint8_t x23 = 3U;
	volatile int32_t x24 = -443353;
	int32_t t5 = 10440771;

	t5 = (x21==((x22*x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int64_t x27 = 41LL;
	int32_t x28 = -1;
	volatile int32_t t6 = 28;

	t6 = (x25==((x26*x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 4680U;
	volatile int32_t x30 = INT32_MAX;
	int16_t x31 = -1;
	int32_t t7 = 7;

	t7 = (x29==((x30*x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	static volatile uint64_t x34 = 0LLU;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -409;

	t8 = (x33==((x34*x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	int16_t x39 = 103;
	static int16_t x40 = 937;

	t9 = (x37==((x38*x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x42 = UINT64_MAX;
	volatile int16_t x43 = -1;
	volatile int8_t x44 = 31;

	t10 = (x41==((x42*x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MIN;
	volatile uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 10U;
	static int32_t t11 = 30238306;

	t11 = (x45==((x46*x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x52 = INT32_MIN;
	static int32_t t12 = 7;

	t12 = (x49==((x50*x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -12018;
	int32_t t13 = -1;

	t13 = (x53==((x54*x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 7128U;
	int32_t t14 = -690461206;

	t14 = (x57==((x58*x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	static int32_t x62 = -1;
	uint32_t x63 = 33537849U;
	uint64_t x64 = 4098LLU;

	t15 = (x61==((x62*x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int32_t x76 = INT32_MAX;
	int32_t t16 = 362;

	t16 = (x73==((x74*x75)<=x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = UINT8_MAX;
	uint16_t x78 = 17624U;
	int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MAX;
	int32_t t17 = -477868838;

	t17 = (x77==((x78*x79)<=x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = 23U;
	int64_t x82 = 0LL;
	uint32_t x83 = 96U;
	uint16_t x84 = UINT16_MAX;

	t18 = (x81==((x82*x83)<=x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 506U;
	uint32_t x91 = 60931U;
	volatile int8_t x92 = -1;
	volatile int32_t t19 = 1843;

	t19 = (x89==((x90*x91)<=x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x93 = 8U;
	uint8_t x94 = 26U;
	int16_t x95 = INT16_MAX;
	volatile int32_t x96 = -2709;

	t20 = (x93==((x94*x95)<=x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MIN;
	static uint64_t x98 = 60271400558172107LLU;
	int8_t x99 = -1;
	int32_t x100 = INT32_MAX;
	int32_t t21 = 281;

	t21 = (x97==((x98*x99)<=x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 22U;
	volatile uint8_t x102 = 0U;
	int64_t x103 = -1LL;
	static int32_t x104 = INT32_MIN;
	int32_t t22 = 414;

	t22 = (x101==((x102*x103)<=x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = 466LL;
	uint32_t x108 = 13790902U;
	volatile int32_t t23 = 0;

	t23 = (x105==((x106*x107)<=x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x110 = UINT32_MAX;
	static int64_t x112 = -1LL;
	static volatile int32_t t24 = 25;

	t24 = (x109==((x110*x111)<=x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x113 = 30U;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = -3;
	volatile int32_t t25 = -257390842;

	t25 = (x113==((x114*x115)<=x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x117 = 1458177514028740LL;
	uint64_t x118 = 258913978LLU;
	int64_t x119 = -1LL;
	volatile int8_t x120 = INT8_MAX;
	static int32_t t26 = -121387788;

	t26 = (x117==((x118*x119)<=x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 504U;
	uint64_t x122 = 1870138696505LLU;
	volatile int32_t t27 = 14822;

	t27 = (x121==((x122*x123)<=x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	volatile int32_t x127 = 1;
	uint32_t x128 = 45U;
	static int32_t t28 = 45;

	t28 = (x125==((x126*x127)<=x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x130 = INT8_MIN;
	int16_t x131 = -1;
	int64_t x132 = INT64_MAX;

	t29 = (x129==((x130*x131)<=x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	static volatile int64_t x134 = 65022059LL;
	static int8_t x136 = -2;
	volatile int32_t t30 = -12622539;

	t30 = (x133==((x134*x135)<=x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = 246;
	volatile int32_t x146 = INT32_MAX;
	uint32_t x147 = 483695627U;
	int32_t t31 = 6102;

	t31 = (x145==((x146*x147)<=x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = 7;
	static uint64_t x150 = 8200540626831LLU;
	int16_t x151 = INT16_MAX;

	t32 = (x149==((x150*x151)<=x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x153 = INT16_MAX;
	uint32_t x154 = 1566U;
	uint16_t x155 = 89U;
	int64_t x156 = -1LL;
	volatile int32_t t33 = -51042;

	t33 = (x153==((x154*x155)<=x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x157 = -9160;
	volatile uint64_t x158 = 32667835814LLU;
	int32_t x159 = -58901;
	volatile int32_t t34 = 1462;

	t34 = (x157==((x158*x159)<=x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x163 = INT16_MAX;
	int16_t x164 = 172;
	volatile int32_t t35 = 15430955;

	t35 = (x161==((x162*x163)<=x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x166 = 0U;
	int32_t t36 = 1;

	t36 = (x165==((x166*x167)<=x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = UINT64_MAX;
	int16_t x174 = INT16_MIN;
	uint16_t x175 = 28859U;
	static int32_t t37 = 1;

	t37 = (x173==((x174*x175)<=x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x177 = UINT8_MAX;
	volatile int32_t x178 = -6479160;
	int32_t x179 = -1;
	int64_t x180 = INT64_MIN;
	int32_t t38 = 64520776;

	t38 = (x177==((x178*x179)<=x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x181 = 17054554929243LLU;
	uint8_t x182 = UINT8_MAX;
	static volatile uint16_t x183 = 52U;
	uint16_t x184 = 4226U;
	volatile int32_t t39 = -28;

	t39 = (x181==((x182*x183)<=x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MAX;
	uint64_t x186 = 50388095797033217LLU;
	volatile uint64_t x187 = 22326LLU;
	int64_t x188 = -11919930328179757LL;
	int32_t t40 = -367123726;

	t40 = (x185==((x186*x187)<=x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = 450467453681203LLU;
	int8_t x190 = -3;
	int8_t x191 = 13;
	int16_t x192 = -1;
	static int32_t t41 = 389;

	t41 = (x189==((x190*x191)<=x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = -58544302134866LL;
	volatile int16_t x194 = INT16_MIN;
	volatile int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MIN;
	static volatile int32_t t42 = -12671;

	t42 = (x193==((x194*x195)<=x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x198 = INT32_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t43 = 7708616;

	t43 = (x197==((x198*x199)<=x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = -1;
	int32_t x202 = INT32_MIN;
	static int64_t x203 = -1LL;
	int16_t x204 = -1512;
	int32_t t44 = -1048475;

	t44 = (x201==((x202*x203)<=x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x205 = -10239;
	uint16_t x206 = 0U;
	int64_t x207 = -6332329539308830LL;
	int16_t x208 = INT16_MAX;

	t45 = (x205==((x206*x207)<=x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = 10U;
	uint64_t x210 = UINT64_MAX;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = 1;

	t46 = (x209==((x210*x211)<=x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x214 = INT8_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t47 = 5;

	t47 = (x213==((x214*x215)<=x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	uint64_t x218 = UINT64_MAX;
	uint64_t x219 = UINT64_MAX;
	int64_t x220 = INT64_MAX;

	t48 = (x217==((x218*x219)<=x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = 150;
	uint8_t x224 = UINT8_MAX;
	int32_t t49 = -32;

	t49 = (x221==((x222*x223)<=x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MAX;
	volatile int16_t x226 = -43;
	volatile int64_t x227 = -1LL;
	volatile int32_t x228 = 406226858;
	int32_t t50 = -470;

	t50 = (x225==((x226*x227)<=x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x229 = -1;
	uint16_t x230 = 1529U;
	uint16_t x231 = 25U;
	int8_t x232 = INT8_MIN;
	int32_t t51 = -233548;

	t51 = (x229==((x230*x231)<=x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = 121U;
	int16_t x235 = 1515;

	t52 = (x233==((x234*x235)<=x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x237 = -2;
	uint16_t x238 = UINT16_MAX;
	static uint16_t x239 = 58U;
	uint64_t x240 = 8390686LLU;
	int32_t t53 = 1003502;

	t53 = (x237==((x238*x239)<=x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = -7;
	volatile uint16_t x242 = 9U;
	uint16_t x243 = 654U;
	volatile int32_t x244 = -181148;
	volatile int32_t t54 = 1;

	t54 = (x241==((x242*x243)<=x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x245 = 16U;
	uint32_t x247 = UINT32_MAX;
	int32_t x248 = INT32_MIN;
	volatile int32_t t55 = -1;

	t55 = (x245==((x246*x247)<=x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x249 = UINT8_MAX;
	uint8_t x250 = 23U;
	static uint8_t x251 = 35U;
	static volatile uint16_t x252 = UINT16_MAX;
	static volatile int32_t t56 = -131054188;

	t56 = (x249==((x250*x251)<=x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x253 = 1615259LL;
	volatile uint64_t x254 = 9LLU;
	static uint32_t x255 = UINT32_MAX;
	uint32_t x256 = 303U;
	int32_t t57 = 0;

	t57 = (x253==((x254*x255)<=x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = INT32_MAX;
	static int16_t x259 = -22;
	volatile uint8_t x260 = 0U;
	static int32_t t58 = -45224;

	t58 = (x257==((x258*x259)<=x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = -20;
	volatile uint64_t x262 = 7956099263350738LLU;
	int64_t x263 = 74318LL;
	int32_t t59 = 88;

	t59 = (x261==((x262*x263)<=x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x266 = 24;
	int8_t x267 = INT8_MIN;
	int64_t x268 = -287931353229966718LL;
	volatile int32_t t60 = 402824055;

	t60 = (x265==((x266*x267)<=x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x277 = INT8_MIN;
	static uint32_t x278 = 20883311U;
	volatile int16_t x279 = INT16_MIN;
	static int64_t x280 = 7LL;
	static int32_t t61 = -124;

	t61 = (x277==((x278*x279)<=x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MAX;
	int16_t x286 = 3;
	int32_t x287 = -1;
	int32_t x288 = INT32_MIN;
	static volatile int32_t t62 = 0;

	t62 = (x285==((x286*x287)<=x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x289 = 840740U;
	int8_t x290 = INT8_MIN;
	uint8_t x291 = UINT8_MAX;
	int32_t t63 = 3772;

	t63 = (x289==((x290*x291)<=x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = 1378;
	volatile int16_t x294 = INT16_MIN;
	int8_t x295 = -1;
	int32_t t64 = 132977919;

	t64 = (x293==((x294*x295)<=x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x305 = 197053;
	volatile int16_t x306 = INT16_MIN;
	volatile int8_t x307 = INT8_MIN;
	static uint32_t x308 = 1U;
	volatile int32_t t65 = 1;

	t65 = (x305==((x306*x307)<=x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = 12;
	uint32_t x310 = UINT32_MAX;
	static int16_t x312 = INT16_MIN;
	static volatile int32_t t66 = -2619158;

	t66 = (x309==((x310*x311)<=x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x317 = INT32_MIN;
	uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 1587U;
	static uint64_t x320 = 6596742557590222LLU;
	volatile int32_t t67 = -254562896;

	t67 = (x317==((x318*x319)<=x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = 1;
	int32_t x322 = -1;
	uint8_t x323 = 3U;
	volatile int8_t x324 = INT8_MIN;

	t68 = (x321==((x322*x323)<=x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = -32598983;
	int64_t x330 = INT64_MIN;
	static int32_t x332 = 1;
	volatile int32_t t69 = -1000998;

	t69 = (x329==((x330*x331)<=x332));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x333 = -1;
	volatile uint8_t x334 = 4U;
	uint16_t x335 = 202U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t70 = 54;

	t70 = (x333==((x334*x335)<=x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = -1;
	static uint16_t x339 = UINT16_MAX;
	uint16_t x340 = UINT16_MAX;
	static int32_t t71 = 468499;

	t71 = (x337==((x338*x339)<=x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x342 = INT16_MIN;
	uint32_t x343 = 147941U;
	int32_t x344 = INT32_MIN;
	int32_t t72 = 83183;

	t72 = (x341==((x342*x343)<=x344));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x345 = UINT16_MAX;
	int16_t x346 = -10;
	int8_t x347 = INT8_MAX;
	uint32_t x348 = UINT32_MAX;

	t73 = (x345==((x346*x347)<=x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x349 = INT16_MAX;
	int64_t x350 = INT64_MIN;
	int16_t x352 = -1;
	static volatile int32_t t74 = 29106;

	t74 = (x349==((x350*x351)<=x352));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MIN;
	static int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MAX;
	static int64_t x356 = INT64_MIN;
	int32_t t75 = 13541201;

	t75 = (x353==((x354*x355)<=x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x357 = UINT64_MAX;
	volatile uint64_t x358 = 1623LLU;
	int32_t x360 = INT32_MIN;
	volatile int32_t t76 = 2495314;

	t76 = (x357==((x358*x359)<=x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x362 = -1;
	uint16_t x363 = 3U;
	int32_t x364 = 47;
	volatile int32_t t77 = 205740999;

	t77 = (x361==((x362*x363)<=x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x369 = 2;
	int8_t x370 = INT8_MIN;
	uint64_t x371 = 21470441559997LLU;
	int32_t x372 = 333;
	volatile int32_t t78 = 3;

	t78 = (x369==((x370*x371)<=x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x373 = 452305LLU;
	static uint8_t x374 = 0U;
	int32_t x375 = -433432130;
	int16_t x376 = INT16_MIN;
	volatile int32_t t79 = 3247;

	t79 = (x373==((x374*x375)<=x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x377 = -1;
	volatile int64_t x380 = INT64_MIN;
	int32_t t80 = -462627;

	t80 = (x377==((x378*x379)<=x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = -3;
	uint8_t x382 = 21U;
	int64_t x384 = INT64_MAX;
	int32_t t81 = 201;

	t81 = (x381==((x382*x383)<=x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x393 = -1;
	volatile uint16_t x394 = 1U;
	int8_t x395 = 21;
	uint32_t x396 = 3190951U;
	volatile int32_t t82 = 1;

	t82 = (x393==((x394*x395)<=x396));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x401 = UINT8_MAX;
	uint64_t x402 = 2326079009705LLU;
	volatile int8_t x403 = INT8_MIN;

	t83 = (x401==((x402*x403)<=x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x410 = -1LL;
	int32_t x411 = INT32_MAX;
	uint32_t x412 = 12U;

	t84 = (x409==((x410*x411)<=x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x413 = -1;
	static int8_t x414 = 12;
	int64_t x415 = -1002337335784083LL;
	int8_t x416 = INT8_MAX;
	int32_t t85 = 193256;

	t85 = (x413==((x414*x415)<=x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x421 = 79U;
	int16_t x422 = 10;
	int8_t x423 = INT8_MIN;
	int32_t t86 = 264;

	t86 = (x421==((x422*x423)<=x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x426 = UINT16_MAX;
	volatile int8_t x427 = -8;

	t87 = (x425==((x426*x427)<=x428));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x429 = UINT8_MAX;
	volatile int32_t x430 = -1;
	int16_t x432 = 2550;
	int32_t t88 = 122;

	t88 = (x429==((x430*x431)<=x432));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x433 = UINT64_MAX;
	int8_t x434 = INT8_MAX;
	uint64_t x435 = 68740LLU;
	volatile uint32_t x436 = 12U;

	t89 = (x433==((x434*x435)<=x436));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x438 = 1U;
	int8_t x439 = INT8_MIN;
	int16_t x440 = -217;

	t90 = (x437==((x438*x439)<=x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x453 = 119640LL;
	volatile uint32_t x454 = 18U;
	static int16_t x455 = INT16_MIN;
	int64_t x456 = -180544216816942598LL;
	static int32_t t91 = 7092791;

	t91 = (x453==((x454*x455)<=x456));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x457 = 118LLU;
	static uint8_t x459 = UINT8_MAX;
	int8_t x460 = INT8_MAX;
	int32_t t92 = 1;

	t92 = (x457==((x458*x459)<=x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x461 = INT64_MAX;
	volatile int32_t x462 = -1;
	volatile int32_t x464 = -11;
	static int32_t t93 = 4;

	t93 = (x461==((x462*x463)<=x464));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x465 = UINT16_MAX;
	int32_t x466 = -1330;
	uint16_t x467 = UINT16_MAX;
	static volatile int64_t x468 = INT64_MIN;
	volatile int32_t t94 = 1;

	t94 = (x465==((x466*x467)<=x468));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x469 = INT8_MIN;
	static uint64_t x470 = 130532737LLU;
	uint32_t x471 = 1279274731U;
	static uint8_t x472 = 19U;
	int32_t t95 = 21;

	t95 = (x469==((x470*x471)<=x472));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x473 = 4282180075667973642LLU;
	int32_t x474 = 6685;
	int8_t x475 = INT8_MIN;
	volatile int32_t t96 = 1;

	t96 = (x473==((x474*x475)<=x476));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x477 = INT16_MIN;
	static volatile int16_t x478 = 0;
	static int8_t x479 = 2;
	static int64_t x480 = -1LL;
	int32_t t97 = -13;

	t97 = (x477==((x478*x479)<=x480));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x481 = 1U;
	static int64_t x482 = 1557602779416450LL;
	volatile uint32_t x483 = 1U;
	static int16_t x484 = INT16_MAX;
	volatile int32_t t98 = -481915198;

	t98 = (x481==((x482*x483)<=x484));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x489 = UINT64_MAX;
	static int64_t x491 = -1LL;
	int8_t x492 = -1;
	int32_t t99 = -6;

	t99 = (x489==((x490*x491)<=x492));

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

