#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -109;
int64_t x9 = -1LL;
int32_t x12 = 0;
int64_t x15 = INT64_MIN;
int32_t t4 = -1945;
int32_t x24 = INT32_MIN;
int16_t x26 = -1;
uint32_t x31 = 6U;
uint8_t x32 = UINT8_MAX;
int16_t x40 = -13;
volatile int32_t t9 = -2773738;
volatile int32_t t10 = -21798;
int16_t x56 = 190;
int16_t x62 = 834;
int32_t t15 = 3;
static uint32_t x66 = 661U;
volatile int16_t x67 = INT16_MIN;
int8_t x79 = -3;
volatile int32_t t19 = -3608817;
int8_t x81 = INT8_MIN;
volatile uint8_t x84 = 2U;
int32_t x85 = -639;
volatile int32_t t21 = 58;
uint64_t x92 = 5641371199392975LLU;
uint8_t x101 = UINT8_MAX;
static int8_t x103 = 1;
int32_t t25 = -7;
int8_t x106 = INT8_MAX;
volatile int32_t t28 = 201995;
static uint32_t x119 = 20U;
int32_t t29 = 121898;
static int32_t x124 = 0;
int16_t x125 = -1801;
uint8_t x130 = 27U;
int64_t x135 = INT64_MIN;
volatile uint64_t x154 = 107174467099LLU;
static uint64_t x156 = UINT64_MAX;
uint64_t x158 = 14061LLU;
uint16_t x172 = UINT16_MAX;
volatile int32_t t42 = -354969;
uint16_t x174 = UINT16_MAX;
static int32_t t43 = -1045751;
static int32_t t44 = 0;
static uint8_t x194 = 92U;
int8_t x196 = -22;
int16_t x197 = INT16_MIN;
int8_t x198 = INT8_MAX;
volatile uint64_t x204 = 1496351101662844530LLU;
static int32_t t50 = 73563;
volatile uint64_t x211 = UINT64_MAX;
int8_t x213 = INT8_MAX;
uint64_t x214 = 358LLU;
volatile int32_t t53 = 2031;
static int32_t x218 = INT32_MIN;
int32_t x223 = -1;
uint8_t x225 = 127U;
volatile int16_t x248 = INT16_MIN;
int64_t x250 = INT64_MIN;
static uint16_t x253 = UINT16_MAX;
uint64_t x254 = UINT64_MAX;
static int32_t x257 = 7382;
static uint64_t x259 = 1004408281LLU;
uint8_t x264 = UINT8_MAX;
static volatile int32_t t65 = 445682;
int16_t x276 = -4134;
int64_t x277 = -1LL;
int16_t x278 = INT16_MIN;
uint32_t x281 = 605U;
int32_t x295 = INT32_MIN;
volatile int32_t x298 = 271;
static volatile int64_t x303 = INT64_MIN;
volatile int8_t x304 = 12;
volatile int32_t x306 = -1;
static int64_t x309 = INT64_MAX;
int32_t x312 = 12780930;
volatile int32_t x313 = INT32_MIN;
uint16_t x314 = 1204U;
int64_t x315 = -1LL;
volatile int32_t t78 = -84263241;
static volatile int32_t t79 = -46008;
volatile int32_t x321 = INT32_MAX;
int16_t x323 = INT16_MIN;
int8_t x328 = INT8_MIN;
static volatile uint16_t x331 = 968U;
volatile int8_t x334 = INT8_MIN;
volatile int16_t x343 = INT16_MIN;
int64_t x345 = INT64_MIN;
static int16_t x351 = INT16_MIN;
uint8_t x353 = 10U;
static volatile int32_t t91 = 20423224;
static volatile uint16_t x371 = UINT16_MAX;
uint8_t x375 = 33U;
uint32_t x380 = 12824957U;
int16_t x395 = -1;
uint32_t x399 = 5103U;


void f0(void) {
	uint8_t x1 = 0U;
	int8_t x2 = INT8_MIN;
	static int16_t x3 = -1324;
	static uint32_t x4 = 16U;
	static int32_t t0 = -4150;

	t0 = (x1<=((x2<x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -107;
	volatile int32_t x6 = INT32_MIN;
	uint32_t x8 = 1U;
	volatile int32_t t1 = -15679361;

	t1 = (x5<=((x6<x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 0U;
	static uint32_t x11 = 53064U;
	int32_t t2 = 0;

	t2 = (x9<=((x10<x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 5154644489056LL;
	static int8_t x14 = 1;
	int64_t x16 = INT64_MIN;
	static int32_t t3 = 29;

	t3 = (x13<=((x14<x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 26;
	volatile int64_t x18 = 31073401742956LL;
	static int64_t x19 = -1LL;
	static int32_t x20 = -1;

	t4 = (x17<=((x18<x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint8_t x22 = 0U;
	int64_t x23 = 1919160754352937307LL;
	volatile int32_t t5 = 70292;

	t5 = (x21<=((x22<x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint16_t x27 = 2017U;
	uint16_t x28 = 49U;
	volatile int32_t t6 = 16052351;

	t6 = (x25<=((x26<x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int8_t x30 = -1;
	volatile int32_t t7 = 78;

	t7 = (x29<=((x30<x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 5387U;
	int32_t x34 = -9624;
	uint32_t x35 = UINT32_MAX;
	static volatile int16_t x36 = -1;
	volatile int32_t t8 = -5796239;

	t8 = (x33<=((x34<x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = 0;
	static uint8_t x39 = 6U;

	t9 = (x37<=((x38<x39)<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	static uint64_t x42 = 293763273315336787LLU;
	int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MAX;

	t10 = (x41<=((x42<x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 2;
	uint64_t x46 = 907831LLU;
	static int64_t x47 = 23390438043352077LL;
	int64_t x48 = INT64_MAX;
	volatile int32_t t11 = 3878;

	t11 = (x45<=((x46<x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MAX;
	uint16_t x51 = 1U;
	uint16_t x52 = 4249U;
	volatile int32_t t12 = -51788;

	t12 = (x49<=((x50<x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MAX;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MAX;
	static volatile int32_t t13 = 247240729;

	t13 = (x53<=((x54<x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	int8_t x59 = 23;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = -19;

	t14 = (x57<=((x58<x59)<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -1;
	static uint8_t x63 = 43U;
	static int16_t x64 = -1;

	t15 = (x61<=((x62<x63)<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 3LLU;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 23;

	t16 = (x65<=((x66<x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = -31;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t17 = -3695;

	t17 = (x69<=((x70<x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -14;
	uint64_t x74 = 108305890LLU;
	int8_t x75 = INT8_MAX;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 39604553;

	t18 = (x73<=((x74<x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int16_t x78 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;

	t19 = (x77<=((x78<x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 256456U;
	int32_t x83 = INT32_MAX;
	volatile int32_t t20 = -13759;

	t20 = (x81<=((x82<x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x86 = UINT32_MAX;
	int64_t x87 = INT64_MAX;
	uint16_t x88 = UINT16_MAX;

	t21 = (x85<=((x86<x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x89 = 20397U;
	int64_t x90 = -1LL;
	volatile uint16_t x91 = UINT16_MAX;
	static volatile int32_t t22 = 4350091;

	t22 = (x89<=((x90<x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 1666394U;
	int64_t x94 = 8622512105LL;
	int64_t x95 = -631LL;
	int32_t x96 = 81139417;
	int32_t t23 = 905914;

	t23 = (x93<=((x94<x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 20U;
	static uint64_t x98 = 94501058749LLU;
	int32_t x99 = -3437;
	static int8_t x100 = INT8_MIN;
	int32_t t24 = -200918;

	t24 = (x97<=((x98<x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 0;
	int8_t x104 = -4;

	t25 = (x101<=((x102<x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 0U;
	int64_t x107 = 20LL;
	static volatile uint64_t x108 = 1513395833653LLU;
	int32_t t26 = 220448;

	t26 = (x105<=((x106<x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 102909491658LLU;
	static int8_t x110 = -3;
	int64_t x111 = 236579004635LL;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = -48060;

	t27 = (x109<=((x110<x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	uint64_t x114 = 2748LLU;
	int64_t x115 = -239826LL;
	int64_t x116 = -2344888LL;

	t28 = (x113<=((x114<x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MIN;
	static volatile uint32_t x120 = 24U;

	t29 = (x117<=((x118<x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 68U;
	int8_t x122 = 14;
	static volatile uint8_t x123 = 3U;
	int32_t t30 = 278;

	t30 = (x121<=((x122<x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	uint16_t x127 = 13854U;
	int16_t x128 = INT16_MIN;
	static int32_t t31 = -370946;

	t31 = (x125<=((x126<x127)<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 3343568287131082LLU;
	static int32_t x131 = INT32_MAX;
	int64_t x132 = 344399035352102413LL;
	int32_t t32 = 102609;

	t32 = (x129<=((x130<x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 20;
	static int64_t x134 = 584044949LL;
	volatile int16_t x136 = 1003;
	volatile int32_t t33 = 929;

	t33 = (x133<=((x134<x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 1140275794782729LLU;
	int8_t x138 = INT8_MIN;
	static int64_t x139 = INT64_MIN;
	volatile int64_t x140 = INT64_MIN;
	int32_t t34 = -215;

	t34 = (x137<=((x138<x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	int16_t x142 = INT16_MIN;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -1470;

	t35 = (x141<=((x142<x143)<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MIN;
	int32_t x146 = -43023406;
	static uint16_t x147 = 2U;
	uint8_t x148 = 82U;
	volatile int32_t t36 = 1014;

	t36 = (x145<=((x146<x147)<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int8_t x150 = 3;
	int16_t x151 = INT16_MIN;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t37 = -328403;

	t37 = (x149<=((x150<x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 1;
	int32_t x155 = 0;
	static int32_t t38 = -676359251;

	t38 = (x153<=((x154<x155)<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 1993648U;
	volatile uint16_t x159 = UINT16_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = 1822609;

	t39 = (x157<=((x158<x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 15642U;
	int16_t x162 = -5233;
	static int8_t x163 = -14;
	int64_t x164 = INT64_MIN;
	static volatile int32_t t40 = 1;

	t40 = (x161<=((x162<x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	uint64_t x166 = UINT64_MAX;
	static int32_t x167 = -15;
	uint64_t x168 = 8125885LLU;
	int32_t t41 = 28602407;

	t41 = (x165<=((x166<x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = 1;
	int64_t x170 = 905LL;
	static int8_t x171 = -3;

	t42 = (x169<=((x170<x171)<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -3633;
	int8_t x175 = INT8_MAX;
	int32_t x176 = -694720;

	t43 = (x173<=((x174<x175)<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -33636570096079LL;
	int16_t x178 = INT16_MAX;
	volatile int64_t x179 = INT64_MAX;
	uint32_t x180 = 8U;

	t44 = (x177<=((x178<x179)<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = INT8_MIN;
	volatile uint32_t x182 = 10621U;
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = -1;
	static int32_t t45 = -5;

	t45 = (x181<=((x182<x183)<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -7;
	int64_t x186 = INT64_MAX;
	int16_t x187 = -1;
	static int8_t x188 = INT8_MAX;
	static int32_t t46 = -32010;

	t46 = (x185<=((x186<x187)<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	volatile int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	volatile int64_t x192 = 3512LL;
	int32_t t47 = -51;

	t47 = (x189<=((x190<x191)<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	int8_t x195 = 1;
	volatile int32_t t48 = 128641610;

	t48 = (x193<=((x194<x195)<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x199 = INT8_MAX;
	static int32_t x200 = INT32_MIN;
	int32_t t49 = -215;

	t49 = (x197<=((x198<x199)<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	int32_t x202 = -105;
	int16_t x203 = -1;

	t50 = (x201<=((x202<x203)<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -4;
	int8_t x206 = 12;
	static volatile int16_t x207 = 1277;
	volatile int64_t x208 = 409LL;
	static int32_t t51 = 131;

	t51 = (x205<=((x206<x207)<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 49U;
	uint16_t x210 = 24621U;
	volatile int8_t x212 = INT8_MAX;
	volatile int32_t t52 = 1122213;

	t52 = (x209<=((x210<x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x215 = -1;
	uint32_t x216 = 213445009U;

	t53 = (x213<=((x214<x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 215U;
	int32_t t54 = 50242;

	t54 = (x217<=((x218<x219)<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -1;
	static volatile int16_t x222 = -1;
	volatile int32_t x224 = INT32_MIN;
	static volatile int32_t t55 = 27189160;

	t55 = (x221<=((x222<x223)<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 22U;
	int16_t x227 = INT16_MIN;
	int8_t x228 = 0;
	static int32_t t56 = 1516898;

	t56 = (x225<=((x226<x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	volatile int32_t x230 = -1619;
	static int8_t x231 = -1;
	volatile uint8_t x232 = 3U;
	static volatile int32_t t57 = 38552;

	t57 = (x229<=((x230<x231)<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 949668U;
	uint32_t x234 = 2U;
	static uint32_t x235 = 19U;
	volatile int32_t x236 = INT32_MIN;
	static int32_t t58 = -10650;

	t58 = (x233<=((x234<x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = 53203113378568LL;
	int16_t x238 = -1;
	int16_t x239 = -1;
	static int32_t x240 = INT32_MIN;
	int32_t t59 = 3532;

	t59 = (x237<=((x238<x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -3;
	int8_t x242 = INT8_MIN;
	static volatile int64_t x243 = -113834808LL;
	int64_t x244 = INT64_MAX;
	int32_t t60 = 0;

	t60 = (x241<=((x242<x243)<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 17085709693087910LLU;
	static int32_t x246 = 109619;
	int8_t x247 = 18;
	int32_t t61 = -15213248;

	t61 = (x245<=((x246<x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 49U;
	int32_t x251 = -9477477;
	volatile uint16_t x252 = 981U;
	volatile int32_t t62 = 481;

	t62 = (x249<=((x250<x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	static volatile int32_t t63 = 0;

	t63 = (x253<=((x254<x255)<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = 15;
	int16_t x260 = -1;
	volatile int32_t t64 = -572941273;

	t64 = (x257<=((x258<x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MIN;
	volatile int32_t x263 = INT32_MAX;

	t65 = (x261<=((x262<x263)<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	volatile uint8_t x266 = UINT8_MAX;
	int64_t x267 = -1LL;
	int32_t x268 = -2;
	int32_t t66 = -32049;

	t66 = (x265<=((x266<x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -14;
	int8_t x270 = INT8_MIN;
	uint16_t x271 = 749U;
	uint16_t x272 = 2U;
	volatile int32_t t67 = -1;

	t67 = (x269<=((x270<x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int64_t x274 = 3LL;
	static volatile uint8_t x275 = UINT8_MAX;
	volatile int32_t t68 = -3315;

	t68 = (x273<=((x274<x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x279 = 1137793918LL;
	volatile uint64_t x280 = 1454LLU;
	static volatile int32_t t69 = 14600;

	t69 = (x277<=((x278<x279)<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = 3291;
	int64_t x283 = 4354269360066LL;
	volatile int8_t x284 = INT8_MAX;
	int32_t t70 = 6750;

	t70 = (x281<=((x282<x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 1U;
	int8_t x286 = INT8_MIN;
	static int16_t x287 = 33;
	uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = -9;

	t71 = (x285<=((x286<x287)<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	volatile uint8_t x290 = 2U;
	int8_t x291 = -58;
	int32_t x292 = INT32_MAX;
	int32_t t72 = 235;

	t72 = (x289<=((x290<x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	uint16_t x294 = UINT16_MAX;
	int64_t x296 = -1LL;
	volatile int32_t t73 = -14678;

	t73 = (x293<=((x294<x295)<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x297 = INT64_MAX;
	static uint16_t x299 = 17131U;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = 1;

	t74 = (x297<=((x298<x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	static int32_t t75 = -7200379;

	t75 = (x301<=((x302<x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int64_t x307 = -9LL;
	int8_t x308 = 0;
	static volatile int32_t t76 = 8;

	t76 = (x305<=((x306<x307)<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = INT16_MAX;
	static volatile uint32_t x311 = UINT32_MAX;
	static int32_t t77 = -285391275;

	t77 = (x309<=((x310<x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x316 = 0U;

	t78 = (x313<=((x314<x315)<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 43U;
	int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	volatile uint16_t x320 = 162U;

	t79 = (x317<=((x318<x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = 8337240;
	uint64_t x324 = UINT64_MAX;
	int32_t t80 = -12;

	t80 = (x321<=((x322<x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	static int64_t x326 = INT64_MIN;
	static uint32_t x327 = 52221716U;
	volatile int32_t t81 = -3736;

	t81 = (x325<=((x326<x327)<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -8232;
	uint16_t x330 = 767U;
	int64_t x332 = -835535127176962LL;
	volatile int32_t t82 = -1;

	t82 = (x329<=((x330<x331)<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x333 = 16116U;
	uint8_t x335 = 3U;
	int64_t x336 = INT64_MAX;
	volatile int32_t t83 = 1264478;

	t83 = (x333<=((x334<x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	int64_t x338 = 51984571999163279LL;
	static int32_t x339 = 0;
	uint8_t x340 = UINT8_MAX;
	int32_t t84 = -837;

	t84 = (x337<=((x338<x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 23;
	static volatile uint8_t x342 = UINT8_MAX;
	static volatile uint8_t x344 = 2U;
	static int32_t t85 = 44274;

	t85 = (x341<=((x342<x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x346 = INT64_MIN;
	static int32_t x347 = INT32_MIN;
	uint8_t x348 = 15U;
	volatile int32_t t86 = 10;

	t86 = (x345<=((x346<x347)<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MAX;
	int32_t x352 = 357;
	volatile int32_t t87 = 33696724;

	t87 = (x349<=((x350<x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x354 = UINT8_MAX;
	int16_t x355 = INT16_MIN;
	int64_t x356 = 277148251162203114LL;
	volatile int32_t t88 = 379;

	t88 = (x353<=((x354<x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile uint8_t x358 = 2U;
	int16_t x359 = 1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 17415;

	t89 = (x357<=((x358<x359)<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MIN;
	volatile int16_t x364 = INT16_MIN;
	int32_t t90 = -12759050;

	t90 = (x361<=((x362<x363)<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 0U;
	uint8_t x366 = 1U;
	uint64_t x367 = UINT64_MAX;
	uint32_t x368 = UINT32_MAX;

	t91 = (x365<=((x366<x367)<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 1961;
	int16_t x370 = 0;
	int64_t x372 = -1LL;
	int32_t t92 = 232827641;

	t92 = (x369<=((x370<x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 302452U;
	int16_t x374 = -1;
	int8_t x376 = -1;
	int32_t t93 = 486;

	t93 = (x373<=((x374<x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = -1;
	int16_t x378 = INT16_MAX;
	uint8_t x379 = 14U;
	int32_t t94 = 7740;

	t94 = (x377<=((x378<x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	int32_t x382 = INT32_MAX;
	volatile int32_t x383 = INT32_MIN;
	uint32_t x384 = 12U;
	static int32_t t95 = -541181599;

	t95 = (x381<=((x382<x383)<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 305852795LLU;
	static uint8_t x386 = UINT8_MAX;
	volatile uint32_t x387 = 33095U;
	int64_t x388 = INT64_MIN;
	static int32_t t96 = -6229;

	t96 = (x385<=((x386<x387)<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 1LLU;
	uint8_t x390 = 0U;
	uint16_t x391 = 31U;
	int64_t x392 = 246068295942LL;
	int32_t t97 = 130786;

	t97 = (x389<=((x390<x391)<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 502702215337LL;
	int16_t x394 = INT16_MAX;
	int32_t x396 = -415708;
	int32_t t98 = 78587247;

	t98 = (x393<=((x394<x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	uint64_t x398 = 172LLU;
	int8_t x400 = 0;
	int32_t t99 = 134408052;

	t99 = (x397<=((x398<x399)<=x400));

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

