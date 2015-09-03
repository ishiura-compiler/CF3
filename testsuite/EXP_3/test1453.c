#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -6;
int8_t x5 = INT8_MIN;
static int32_t x6 = -1;
int32_t x22 = -487317;
volatile int32_t t8 = 245343;
int16_t x38 = INT16_MIN;
int32_t t11 = -1;
uint8_t x50 = UINT8_MAX;
static volatile int32_t x53 = INT32_MIN;
static int16_t x54 = INT16_MAX;
uint8_t x60 = 16U;
uint16_t x61 = 15U;
static uint32_t x62 = UINT32_MAX;
static int8_t x64 = INT8_MIN;
int32_t t17 = 246982997;
uint8_t x75 = 2U;
int16_t x80 = INT16_MIN;
static int8_t x81 = -1;
volatile int8_t x83 = INT8_MIN;
static int32_t x84 = -1;
static uint32_t x86 = UINT32_MAX;
volatile int32_t x88 = INT32_MIN;
volatile int64_t x91 = INT64_MIN;
static int64_t x93 = -3546832215491153157LL;
static uint16_t x95 = UINT16_MAX;
int8_t x97 = 3;
volatile int8_t x99 = -1;
uint64_t x109 = 2320380286LLU;
uint16_t x116 = UINT16_MAX;
static uint8_t x119 = 12U;
uint16_t x127 = UINT16_MAX;
static int32_t x131 = 80663870;
static int32_t t32 = -1014;
uint64_t x134 = 7820080440161706LLU;
int16_t x140 = -1;
int16_t x145 = INT16_MIN;
uint32_t x149 = UINT32_MAX;
static int32_t t38 = -351031755;
static uint8_t x157 = 9U;
int8_t x161 = 0;
int16_t x162 = INT16_MIN;
volatile int8_t x163 = INT8_MIN;
static volatile int8_t x166 = INT8_MAX;
uint64_t x173 = 12449LLU;
int64_t x174 = -1LL;
volatile int32_t t43 = 41370;
int8_t x179 = -1;
int8_t x185 = INT8_MIN;
int32_t x187 = INT32_MIN;
int16_t x195 = -1;
volatile int16_t x198 = -1;
static uint32_t x200 = 59713U;
volatile int32_t t49 = -135050;
int16_t x202 = INT16_MIN;
uint16_t x205 = 145U;
uint32_t x206 = UINT32_MAX;
volatile int16_t x209 = INT16_MAX;
static volatile int32_t t52 = -4;
static uint8_t x214 = 92U;
uint32_t x217 = 1251426464U;
static uint32_t x222 = 2553726U;
uint64_t x223 = UINT64_MAX;
volatile uint32_t x225 = 44U;
volatile uint64_t x227 = 8860127317716793LLU;
int16_t x230 = INT16_MIN;
int64_t x232 = 857758038198LL;
int32_t t57 = 69;
static int64_t x241 = INT64_MIN;
uint32_t x243 = UINT32_MAX;
uint16_t x259 = UINT16_MAX;
uint16_t x262 = UINT16_MAX;
int32_t t65 = 302775751;
static volatile int32_t x276 = 138;
int32_t x288 = INT32_MIN;
static uint32_t x297 = 189911U;
uint64_t x298 = 268023167094455618LLU;
uint8_t x318 = 2U;
int8_t x320 = INT8_MIN;
int32_t x323 = INT32_MIN;
static uint64_t x329 = UINT64_MAX;
static uint64_t x332 = UINT64_MAX;
uint64_t x345 = 4222523LLU;
uint8_t x349 = UINT8_MAX;
static int64_t x352 = 3LL;
uint64_t x359 = 125916804097LLU;
volatile int32_t t89 = 1239;
int64_t x367 = INT64_MIN;
int16_t x375 = INT16_MIN;
int32_t t94 = 1;
int16_t x382 = -795;
uint16_t x390 = 14366U;
static int64_t x391 = 12818833LL;
volatile uint64_t x393 = 2LLU;
static int64_t x400 = -5LL;
int32_t t99 = -7280261;


void f0(void) {
	int32_t x1 = -1;
	static int16_t x2 = -1;
	static int32_t x3 = INT32_MIN;
	uint64_t x4 = 1695481219LLU;

	t0 = ((x1==x2)<=(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = INT64_MAX;
	static int8_t x8 = 3;
	volatile int32_t t1 = -105;

	t1 = ((x5==x6)<=(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = 6077LL;
	static int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -16;

	t2 = ((x9==x10)<=(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 9U;
	int32_t x14 = -1334;
	int16_t x15 = INT16_MIN;
	static volatile int16_t x16 = 2226;
	volatile int32_t t3 = 647487;

	t3 = ((x13==x14)<=(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 609U;
	static int16_t x18 = -259;
	static volatile int16_t x19 = INT16_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 3189921;

	t4 = ((x17==x18)<=(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 3;
	int16_t x23 = INT16_MAX;
	uint32_t x24 = 4U;
	int32_t t5 = 36332;

	t5 = ((x21==x22)<=(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = INT16_MIN;
	volatile int8_t x27 = -1;
	uint32_t x28 = 3U;
	int32_t t6 = -736050719;

	t6 = ((x25==x26)<=(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 0;
	int8_t x30 = -1;
	uint16_t x31 = 6U;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = 25799458;

	t7 = ((x29==x30)<=(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	volatile int16_t x34 = -11392;
	int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MAX;

	t8 = ((x33==x34)<=(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 50;
	volatile int8_t x39 = 1;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 949;

	t9 = ((x37==x38)<=(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MAX;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 1U;
	int32_t t10 = 88;

	t10 = ((x41==x42)<=(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 50;
	int16_t x46 = INT16_MAX;
	static int16_t x47 = 2;
	uint8_t x48 = 0U;

	t11 = ((x45==x46)<=(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 975U;
	int8_t x51 = 0;
	volatile int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -48083;

	t12 = ((x49==x50)<=(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = INT32_MIN;
	int32_t x56 = 112746;
	volatile int32_t t13 = 403;

	t13 = ((x53==x54)<=(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 17;
	int16_t x58 = -1;
	int8_t x59 = 3;
	volatile int32_t t14 = 33609;

	t14 = ((x57==x58)<=(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x63 = 5407674U;
	int32_t t15 = 64259;

	t15 = ((x61==x62)<=(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = UINT32_MAX;
	uint16_t x66 = 3158U;
	volatile uint8_t x67 = 14U;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 21125159;

	t16 = ((x65==x66)<=(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 63111719LLU;
	static int8_t x70 = -1;
	int16_t x71 = -1;
	int64_t x72 = INT64_MIN;

	t17 = ((x69==x70)<=(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static volatile int16_t x74 = INT16_MIN;
	static int8_t x76 = INT8_MAX;
	int32_t t18 = 6;

	t18 = ((x73==x74)<=(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int32_t x78 = 37;
	int8_t x79 = INT8_MAX;
	static int32_t t19 = 258;

	t19 = ((x77==x78)<=(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -21600LL;
	volatile int32_t t20 = -83670038;

	t20 = ((x81==x82)<=(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int64_t x87 = INT64_MIN;
	volatile int32_t t21 = -2341;

	t21 = ((x85==x86)<=(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	static int8_t x90 = -1;
	uint64_t x92 = 3148895883840LLU;
	volatile int32_t t22 = 16;

	t22 = ((x89==x90)<=(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x94 = UINT64_MAX;
	int64_t x96 = INT64_MAX;
	int32_t t23 = 8964;

	t23 = ((x93==x94)<=(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 1747U;
	int16_t x100 = -1839;
	int32_t t24 = 7;

	t24 = ((x97==x98)<=(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MAX;
	uint16_t x102 = 15995U;
	volatile int64_t x103 = 65746842717851LL;
	int64_t x104 = 6077850LL;
	int32_t t25 = -6864;

	t25 = ((x101==x102)<=(x103<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	volatile int32_t x106 = INT32_MAX;
	uint16_t x107 = 893U;
	int16_t x108 = INT16_MAX;
	static int32_t t26 = -460;

	t26 = ((x105==x106)<=(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = -1LL;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -3;

	t27 = ((x109==x110)<=(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint32_t x114 = 1U;
	static int64_t x115 = -849841290628LL;
	static volatile int32_t t28 = -6;

	t28 = ((x113==x114)<=(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	int32_t x120 = -1;
	volatile int32_t t29 = -27747;

	t29 = ((x117==x118)<=(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 4U;
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = -1;
	int8_t x124 = -63;
	volatile int32_t t30 = 31008;

	t30 = ((x121==x122)<=(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static int16_t x126 = INT16_MIN;
	int16_t x128 = INT16_MAX;
	static int32_t t31 = 4;

	t31 = ((x125==x126)<=(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	uint64_t x130 = 1521715LLU;
	static volatile int8_t x132 = -1;

	t32 = ((x129==x130)<=(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 12;
	int64_t x135 = INT64_MAX;
	static int32_t x136 = -1;
	static volatile int32_t t33 = 15583082;

	t33 = ((x133==x134)<=(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = 168;
	int32_t x138 = INT32_MIN;
	uint16_t x139 = 2U;
	int32_t t34 = 338338;

	t34 = ((x137==x138)<=(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	uint8_t x142 = 15U;
	int32_t x143 = INT32_MIN;
	int64_t x144 = -1LL;
	volatile int32_t t35 = 1047378608;

	t35 = ((x141==x142)<=(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -3207709;

	t36 = ((x145==x146)<=(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = 1502U;
	uint8_t x151 = UINT8_MAX;
	static int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 1644;

	t37 = ((x149==x150)<=(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 1;
	int16_t x154 = -1286;
	volatile int16_t x155 = INT16_MIN;
	static volatile int16_t x156 = INT16_MIN;

	t38 = ((x153==x154)<=(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = UINT8_MAX;
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -17012816;

	t39 = ((x157==x158)<=(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 304144489;

	t40 = ((x161==x162)<=(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 18839U;
	int64_t x167 = -24556212411LL;
	static uint32_t x168 = 5523117U;
	int32_t t41 = -7575;

	t41 = ((x165==x166)<=(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MAX;
	volatile int32_t x171 = INT32_MIN;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = 9205105;

	t42 = ((x169==x170)<=(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x175 = -1;
	static int16_t x176 = INT16_MAX;

	t43 = ((x173==x174)<=(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	volatile uint32_t x178 = 7137U;
	uint8_t x180 = 27U;
	int32_t t44 = -677301;

	t44 = ((x177==x178)<=(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x182 = UINT16_MAX;
	volatile int16_t x183 = -3;
	static int32_t x184 = INT32_MIN;
	int32_t t45 = -16;

	t45 = ((x181==x182)<=(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x186 = 175485629924LLU;
	static uint64_t x188 = 718696923LLU;
	int32_t t46 = -3824307;

	t46 = ((x185==x186)<=(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	uint32_t x190 = UINT32_MAX;
	int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t47 = 720321024;

	t47 = ((x189==x190)<=(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	int32_t x194 = -1;
	static int16_t x196 = -90;
	volatile int32_t t48 = -519422;

	t48 = ((x193==x194)<=(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 9U;
	static int64_t x199 = INT64_MIN;

	t49 = ((x197==x198)<=(x199<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MAX;
	volatile int8_t x203 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;
	static int32_t t50 = -163;

	t50 = ((x201==x202)<=(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 117887533;

	t51 = ((x205==x206)<=(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x210 = 188809;
	static volatile int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MAX;

	t52 = ((x209==x210)<=(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x213 = 1318U;
	int64_t x215 = 423576983347875LL;
	int32_t x216 = -345;
	static int32_t t53 = 2385171;

	t53 = ((x213==x214)<=(x215<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = 30828U;
	int8_t x219 = -3;
	int64_t x220 = INT64_MAX;
	static volatile int32_t t54 = 155;

	t54 = ((x217==x218)<=(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x221 = -28;
	uint8_t x224 = 17U;
	int32_t t55 = -10;

	t55 = ((x221==x222)<=(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 30U;
	int64_t x228 = INT64_MIN;
	int32_t t56 = -236944;

	t56 = ((x225==x226)<=(x227<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	int8_t x231 = 61;

	t57 = ((x229==x230)<=(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = UINT64_MAX;
	volatile int8_t x234 = INT8_MIN;
	volatile uint8_t x235 = 9U;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = -27178;

	t58 = ((x233==x234)<=(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -381;
	int16_t x238 = -2081;
	int8_t x239 = -2;
	static uint8_t x240 = 24U;
	volatile int32_t t59 = 920;

	t59 = ((x237==x238)<=(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MIN;
	int8_t x244 = -1;
	int32_t t60 = -136;

	t60 = ((x241==x242)<=(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MAX;
	static int32_t x246 = 1;
	int32_t x247 = -1;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t61 = 7;

	t61 = ((x245==x246)<=(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = UINT32_MAX;
	static int8_t x250 = INT8_MIN;
	int32_t x251 = INT32_MIN;
	static int16_t x252 = -1;
	volatile int32_t t62 = 0;

	t62 = ((x249==x250)<=(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 83U;
	volatile int8_t x254 = 1;
	volatile int16_t x255 = -526;
	int64_t x256 = 947403LL;
	static volatile int32_t t63 = -18;

	t63 = ((x253==x254)<=(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	static int64_t x258 = INT64_MAX;
	static int32_t x260 = -44250;
	static volatile int32_t t64 = -17;

	t64 = ((x257==x258)<=(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -1;
	static int64_t x263 = INT64_MAX;
	volatile int32_t x264 = INT32_MAX;

	t65 = ((x261==x262)<=(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x265 = INT32_MIN;
	static uint64_t x266 = UINT64_MAX;
	static int8_t x267 = -6;
	int16_t x268 = INT16_MAX;
	volatile int32_t t66 = 368480;

	t66 = ((x265==x266)<=(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = -1;
	int8_t x270 = 8;
	int16_t x271 = INT16_MIN;
	int16_t x272 = -1;
	volatile int32_t t67 = 51680789;

	t67 = ((x269==x270)<=(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	volatile int32_t x274 = INT32_MIN;
	static uint32_t x275 = UINT32_MAX;
	int32_t t68 = -135;

	t68 = ((x273==x274)<=(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = -9772122934261286LL;
	static int32_t x278 = INT32_MIN;
	static uint8_t x279 = UINT8_MAX;
	int16_t x280 = -4337;
	int32_t t69 = -2;

	t69 = ((x277==x278)<=(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	int16_t x282 = INT16_MIN;
	uint16_t x283 = 5555U;
	static uint8_t x284 = UINT8_MAX;
	int32_t t70 = 558150155;

	t70 = ((x281==x282)<=(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 0U;
	static int64_t x286 = INT64_MIN;
	int8_t x287 = -1;
	volatile int32_t t71 = 3211267;

	t71 = ((x285==x286)<=(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MAX;
	int16_t x291 = 0;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -69;

	t72 = ((x289==x290)<=(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x293 = 0LLU;
	static volatile int16_t x294 = -9917;
	int64_t x295 = INT64_MAX;
	int32_t x296 = -37708;
	static int32_t t73 = -1;

	t73 = ((x293==x294)<=(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x299 = INT32_MAX;
	int32_t x300 = -1;
	int32_t t74 = -119628;

	t74 = ((x297==x298)<=(x299<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 28U;
	uint8_t x302 = 9U;
	int64_t x303 = INT64_MIN;
	volatile int64_t x304 = INT64_MIN;
	volatile int32_t t75 = -55;

	t75 = ((x301==x302)<=(x303<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = 17;
	uint8_t x306 = UINT8_MAX;
	static int32_t x307 = 1931;
	int8_t x308 = -1;
	static volatile int32_t t76 = 551;

	t76 = ((x305==x306)<=(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 18432508LLU;
	static volatile int8_t x310 = -1;
	int32_t x311 = -1;
	int32_t x312 = -423464;
	volatile int32_t t77 = 1451;

	t77 = ((x309==x310)<=(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	int32_t x314 = -1;
	uint16_t x315 = 172U;
	uint8_t x316 = 13U;
	static volatile int32_t t78 = 15475;

	t78 = ((x313==x314)<=(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	static volatile uint32_t x319 = UINT32_MAX;
	volatile int32_t t79 = -15338627;

	t79 = ((x317==x318)<=(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	static int32_t x322 = -72;
	int16_t x324 = -1;
	volatile int32_t t80 = 1277;

	t80 = ((x321==x322)<=(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -22891098;
	static volatile int64_t x326 = -130550969787184LL;
	uint32_t x327 = 3669U;
	uint8_t x328 = 124U;
	int32_t t81 = 120;

	t81 = ((x325==x326)<=(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = 1LL;
	uint8_t x331 = 55U;
	volatile int32_t t82 = 4;

	t82 = ((x329==x330)<=(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -7480LL;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = 1;
	int64_t x336 = -1LL;
	int32_t t83 = -757374439;

	t83 = ((x333==x334)<=(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 101U;
	int32_t x338 = 3;
	int16_t x339 = 1;
	int16_t x340 = 94;
	int32_t t84 = 219446;

	t84 = ((x337==x338)<=(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	volatile uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MAX;
	int8_t x344 = -1;
	volatile int32_t t85 = -719067;

	t85 = ((x341==x342)<=(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MIN;
	int8_t x347 = -1;
	volatile uint16_t x348 = 25U;
	int32_t t86 = 52927071;

	t86 = ((x345==x346)<=(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MIN;
	static volatile uint64_t x351 = 7348467390587LLU;
	volatile int32_t t87 = 323462;

	t87 = ((x349==x350)<=(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = UINT8_MAX;
	int32_t t88 = -6533;

	t88 = ((x353==x354)<=(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 0U;
	static int8_t x358 = INT8_MIN;
	static uint8_t x360 = 0U;

	t89 = ((x357==x358)<=(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x361 = INT64_MAX;
	int64_t x362 = -52946LL;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = 2303LL;
	int32_t t90 = -256569;

	t90 = ((x361==x362)<=(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MAX;
	volatile uint8_t x366 = UINT8_MAX;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t91 = -444;

	t91 = ((x365==x366)<=(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MIN;
	uint8_t x370 = UINT8_MAX;
	static uint64_t x371 = UINT64_MAX;
	volatile int8_t x372 = INT8_MIN;
	int32_t t92 = -204367;

	t92 = ((x369==x370)<=(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	static int16_t x374 = -1;
	uint16_t x376 = UINT16_MAX;
	static int32_t t93 = 12777;

	t93 = ((x373==x374)<=(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = -1;
	static int8_t x378 = -1;
	int32_t x379 = INT32_MIN;
	int64_t x380 = 464LL;

	t94 = ((x377==x378)<=(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 2336126LL;
	uint32_t x383 = 330297812U;
	int32_t x384 = 6;
	int32_t t95 = 173465268;

	t95 = ((x381==x382)<=(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = 11048137U;
	int32_t x386 = -504202;
	int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	static int32_t t96 = 27853;

	t96 = ((x385==x386)<=(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	int32_t x392 = -13606523;
	volatile int32_t t97 = -449591;

	t97 = ((x389==x390)<=(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x394 = 179U;
	int64_t x395 = -1LL;
	uint8_t x396 = 67U;
	int32_t t98 = 996194;

	t98 = ((x393==x394)<=(x395<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -6;
	uint64_t x398 = 1436505539595884758LLU;
	static uint32_t x399 = 1746U;

	t99 = ((x397==x398)<=(x399<x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

