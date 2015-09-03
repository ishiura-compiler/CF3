#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 1775U;
int8_t x5 = -12;
int32_t t1 = 22129;
int32_t x9 = INT32_MAX;
uint8_t x10 = 2U;
int16_t x12 = 1135;
static int32_t t2 = 45;
int16_t x15 = -14;
int16_t x21 = INT16_MAX;
int32_t t6 = 6643395;
int8_t x35 = INT8_MAX;
volatile int32_t t8 = -35254;
int8_t x37 = INT8_MAX;
volatile int16_t x38 = INT16_MAX;
uint32_t x45 = 6U;
int32_t x47 = INT32_MIN;
int32_t x50 = INT32_MIN;
volatile int32_t t16 = -28;
uint32_t x70 = 27U;
int32_t x77 = INT32_MIN;
volatile int32_t t23 = 1;
int8_t x97 = INT8_MIN;
static int8_t x98 = -1;
static uint64_t x99 = UINT64_MAX;
int32_t x100 = 12536702;
uint8_t x103 = 6U;
int16_t x108 = -1;
static int16_t x110 = 39;
int8_t x111 = -12;
uint16_t x113 = 42U;
int32_t t28 = -683588021;
static int8_t x117 = 27;
volatile int32_t t29 = -112;
volatile int8_t x122 = 3;
static int32_t x129 = -1;
uint32_t x130 = 5U;
volatile int32_t t32 = 21;
volatile int64_t x137 = INT64_MAX;
uint16_t x138 = 14U;
volatile int8_t x146 = -11;
int64_t x152 = 36548318942257LL;
int32_t t39 = -7582;
int16_t x161 = INT16_MIN;
int8_t x168 = INT8_MIN;
int32_t t43 = 30435;
uint8_t x177 = 103U;
int8_t x181 = -1;
int64_t x188 = 1754631LL;
static uint16_t x189 = 16457U;
volatile int32_t t48 = -3;
static uint8_t x203 = UINT8_MAX;
int16_t x208 = INT16_MAX;
volatile int32_t x212 = -189347901;
static int32_t x218 = -110396656;
int64_t x219 = INT64_MIN;
int16_t x221 = INT16_MAX;
int32_t t55 = 174428;
int8_t x225 = INT8_MIN;
uint64_t x227 = UINT64_MAX;
volatile int32_t x231 = INT32_MAX;
static int32_t t57 = 0;
int32_t x236 = INT32_MIN;
static uint32_t x237 = UINT32_MAX;
uint16_t x248 = UINT16_MAX;
uint64_t x250 = 120292632958LLU;
int32_t x251 = 30036084;
int16_t x252 = INT16_MAX;
int32_t t62 = -324077315;
int64_t x256 = 67088069LL;
uint8_t x259 = 14U;
int32_t t65 = 25978;
static int16_t x265 = 31;
int64_t x267 = -7LL;
static uint16_t x270 = 57U;
int16_t x276 = INT16_MAX;
uint8_t x294 = 4U;
static volatile int32_t x298 = 55091484;
int32_t t74 = 69065;
int8_t x301 = -1;
volatile int32_t t75 = 3;
int64_t x311 = -1LL;
volatile int64_t x322 = INT64_MIN;
static int32_t x324 = -11;
volatile int32_t t81 = -128;
volatile int8_t x330 = INT8_MIN;
int16_t x337 = INT16_MAX;
int32_t t85 = 1;
uint8_t x346 = 0U;
volatile int32_t t87 = -447079057;
uint32_t x358 = 136U;
static volatile int32_t t89 = -9263891;
volatile uint32_t x365 = 244U;
int8_t x373 = -1;
int16_t x379 = 801;
static volatile uint16_t x380 = UINT16_MAX;
static volatile int32_t t94 = -536;
volatile int32_t x382 = INT32_MAX;
int16_t x390 = -1;
uint32_t x391 = 836U;
uint8_t x392 = 35U;
static int8_t x397 = INT8_MAX;
uint8_t x400 = 61U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = 15;
	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -90072332;

	t0 = (x1<((x2<x3)*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	static uint8_t x7 = 3U;
	volatile uint64_t x8 = UINT64_MAX;

	t1 = (x5<((x6<x7)*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = -1;

	t2 = (x9<((x10<x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	static int8_t x14 = 10;
	static int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 25684;

	t3 = (x13<((x14<x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile int16_t x18 = -1600;
	static int8_t x19 = 5;
	int16_t x20 = 9;
	int32_t t4 = 2824;

	t4 = (x17<((x18<x19)*x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -8247386;
	int32_t x23 = 0;
	static int64_t x24 = -1LL;
	int32_t t5 = -2554275;

	t5 = (x21<((x22<x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = 461;
	volatile int32_t x28 = -665;

	t6 = (x25<((x26<x27)*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	int32_t x30 = INT32_MIN;
	static int16_t x31 = -29;
	static uint64_t x32 = 4382924140LLU;
	volatile int32_t t7 = 0;

	t7 = (x29<((x30<x31)*x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 5U;
	volatile int32_t x34 = INT32_MIN;
	volatile uint64_t x36 = 9697LLU;

	t8 = (x33<((x34<x35)*x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x39 = 1345U;
	int64_t x40 = -1LL;
	static volatile int32_t t9 = -16;

	t9 = (x37<((x38<x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 100U;
	static int16_t x42 = -1;
	int16_t x43 = INT16_MIN;
	volatile uint16_t x44 = 10779U;
	int32_t t10 = 1483;

	t10 = (x41<((x42<x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;
	static int32_t t11 = -3584;

	t11 = (x45<((x46<x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 477637341U;
	uint16_t x51 = UINT16_MAX;
	uint32_t x52 = 21255209U;
	volatile int32_t t12 = 19335644;

	t12 = (x49<((x50<x51)*x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = 2;
	uint32_t x55 = UINT32_MAX;
	volatile int8_t x56 = 0;
	volatile int32_t t13 = -795;

	t13 = (x53<((x54<x55)*x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -6463026588792713LL;
	int64_t x58 = -8354230122LL;
	int64_t x59 = -1LL;
	uint16_t x60 = UINT16_MAX;
	static volatile int32_t t14 = 53154;

	t14 = (x57<((x58<x59)*x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 509598392LL;
	int64_t x62 = INT64_MAX;
	int32_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = -19520691;

	t15 = (x61<((x62<x63)*x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 2LLU;
	int64_t x66 = -1LL;
	volatile uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 268U;

	t16 = (x65<((x66<x67)*x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -943025LL;
	int8_t x71 = 0;
	int8_t x72 = -8;
	volatile int32_t t17 = -1;

	t17 = (x69<((x70<x71)*x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	volatile uint64_t x75 = 1950LLU;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 130104;

	t18 = (x73<((x74<x75)*x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 585829566LLU;
	uint32_t x79 = 738869U;
	uint32_t x80 = 19770449U;
	int32_t t19 = -226429688;

	t19 = (x77<((x78<x79)*x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int32_t x82 = -32134;
	volatile uint16_t x83 = 1U;
	int64_t x84 = INT64_MIN;
	int32_t t20 = 830673;

	t20 = (x81<((x82<x83)*x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 222727461121826237LLU;
	int16_t x86 = -14;
	int64_t x87 = INT64_MAX;
	static int16_t x88 = -1;
	volatile int32_t t21 = 3095045;

	t21 = (x85<((x86<x87)*x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 484U;
	uint32_t x90 = UINT32_MAX;
	int64_t x91 = INT64_MIN;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -16282;

	t22 = (x89<((x90<x91)*x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 14;
	uint32_t x94 = 98U;
	int64_t x95 = INT64_MAX;
	int16_t x96 = INT16_MAX;

	t23 = (x93<((x94<x95)*x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t t24 = 256153029;

	t24 = (x97<((x98<x99)*x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 10U;
	int16_t x102 = -3;
	int8_t x104 = 0;
	int32_t t25 = -31;

	t25 = (x101<((x102<x103)*x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	static int32_t x106 = INT32_MIN;
	uint64_t x107 = 1495871320326LLU;
	static volatile int32_t t26 = 211;

	t26 = (x105<((x106<x107)*x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -332343598154788998LL;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 18813998;

	t27 = (x109<((x110<x111)*x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = 108815493LLU;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;

	t28 = (x113<((x114<x115)*x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = UINT16_MAX;
	int16_t x119 = INT16_MIN;
	volatile int64_t x120 = INT64_MIN;

	t29 = (x117<((x118<x119)*x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 93U;
	int8_t x123 = INT8_MAX;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = 1;

	t30 = (x121<((x122<x123)*x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 0U;
	int8_t x126 = INT8_MAX;
	static int16_t x127 = INT16_MAX;
	uint32_t x128 = UINT32_MAX;
	int32_t t31 = 23;

	t31 = (x125<((x126<x127)*x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x131 = 23;
	uint8_t x132 = 50U;

	t32 = (x129<((x130<x131)*x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -23192787649LL;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = 72743433485048947LLU;
	volatile int32_t t33 = 3837472;

	t33 = (x133<((x134<x135)*x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = INT8_MAX;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = 188851378;

	t34 = (x137<((x138<x139)*x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint32_t x142 = 0U;
	uint16_t x143 = UINT16_MAX;
	static uint64_t x144 = 100933347999872LLU;
	volatile int32_t t35 = 72943345;

	t35 = (x141<((x142<x143)*x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -429003;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 298U;
	int32_t t36 = 922705;

	t36 = (x145<((x146<x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = 39741664875743LLU;
	int32_t t37 = -3410406;

	t37 = (x149<((x150<x151)*x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -290LL;
	int16_t x154 = INT16_MIN;
	int32_t x155 = -1;
	volatile uint32_t x156 = 416883U;
	int32_t t38 = 12;

	t38 = (x153<((x154<x155)*x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int64_t x158 = -1LL;
	static volatile uint64_t x159 = 6152993136LLU;
	uint16_t x160 = 25U;

	t39 = (x157<((x158<x159)*x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -6671747929633LL;
	int64_t x163 = 744120368791LL;
	int64_t x164 = INT64_MAX;
	volatile int32_t t40 = -672;

	t40 = (x161<((x162<x163)*x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = 781;
	volatile uint64_t x167 = 119923248721LLU;
	volatile int32_t t41 = -741;

	t41 = (x165<((x166<x167)*x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x169 = UINT16_MAX;
	static int32_t x170 = -1;
	uint32_t x171 = 311012U;
	uint8_t x172 = 0U;
	int32_t t42 = 12;

	t42 = (x169<((x170<x171)*x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 10;
	int32_t x174 = -1;
	int8_t x175 = -29;
	int16_t x176 = 53;

	t43 = (x173<((x174<x175)*x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x178 = INT8_MIN;
	uint32_t x179 = 117U;
	uint32_t x180 = UINT32_MAX;
	static volatile int32_t t44 = 11679585;

	t44 = (x177<((x178<x179)*x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x182 = 117U;
	static int16_t x183 = INT16_MIN;
	static volatile int32_t x184 = 17945;
	static volatile int32_t t45 = 2385908;

	t45 = (x181<((x182<x183)*x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x186 = -1;
	uint8_t x187 = UINT8_MAX;
	volatile int32_t t46 = 287434;

	t46 = (x185<((x186<x187)*x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x190 = INT16_MAX;
	uint8_t x191 = 11U;
	int8_t x192 = -9;
	volatile int32_t t47 = 35576496;

	t47 = (x189<((x190<x191)*x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 7;
	uint32_t x194 = 27575U;
	uint64_t x195 = UINT64_MAX;
	static int8_t x196 = INT8_MIN;

	t48 = (x193<((x194<x195)*x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -31808544LL;
	int8_t x198 = -10;
	static uint64_t x199 = UINT64_MAX;
	volatile uint8_t x200 = 0U;
	static int32_t t49 = 169;

	t49 = (x197<((x198<x199)*x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	int8_t x204 = INT8_MAX;
	static int32_t t50 = -29;

	t50 = (x201<((x202<x203)*x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 2375236000386LLU;
	uint16_t x206 = 45U;
	int8_t x207 = 11;
	volatile int32_t t51 = -7272255;

	t51 = (x205<((x206<x207)*x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = UINT8_MAX;
	volatile uint16_t x211 = 3U;
	int32_t t52 = 45;

	t52 = (x209<((x210<x211)*x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -1LL;
	volatile int32_t x214 = -1;
	static uint64_t x215 = 19LLU;
	int16_t x216 = 6;
	int32_t t53 = -1701001;

	t53 = (x213<((x214<x215)*x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = UINT64_MAX;
	uint16_t x220 = 7U;
	int32_t t54 = -61841794;

	t54 = (x217<((x218<x219)*x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = INT64_MAX;
	volatile uint32_t x223 = 50U;
	int64_t x224 = -1LL;

	t55 = (x221<((x222<x223)*x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	uint64_t x228 = 17482456124010LLU;
	volatile int32_t t56 = 3500623;

	t56 = (x225<((x226<x227)*x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -59;
	static int64_t x230 = -1LL;
	volatile int8_t x232 = INT8_MIN;

	t57 = (x229<((x230<x231)*x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MIN;
	volatile int64_t x234 = INT64_MIN;
	static int8_t x235 = INT8_MAX;
	int32_t t58 = -382630701;

	t58 = (x233<((x234<x235)*x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	volatile int64_t x239 = -1LL;
	int32_t x240 = INT32_MAX;
	int32_t t59 = -23014547;

	t59 = (x237<((x238<x239)*x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x241 = 1089540540644LL;
	volatile uint64_t x242 = 42452219494016LLU;
	int16_t x243 = INT16_MIN;
	volatile int16_t x244 = 230;
	volatile int32_t t60 = -6123;

	t60 = (x241<((x242<x243)*x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x245 = -4323941931539606895LL;
	volatile uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = -1;
	volatile int32_t t61 = 131539608;

	t61 = (x245<((x246<x247)*x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 107094793;

	t62 = (x249<((x250<x251)*x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	volatile int16_t x255 = 848;
	int32_t t63 = -78330;

	t63 = (x253<((x254<x255)*x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = -414;
	volatile uint64_t x258 = 1259614660366947LLU;
	int32_t x260 = 3333945;
	volatile int32_t t64 = 13855;

	t64 = (x257<((x258<x259)*x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	static volatile int32_t x262 = INT32_MAX;
	volatile uint64_t x263 = 0LLU;
	int32_t x264 = 103550508;

	t65 = (x261<((x262<x263)*x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = -1;
	int32_t x268 = INT32_MAX;
	volatile int32_t t66 = -312213;

	t66 = (x265<((x266<x267)*x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = -7566;
	int64_t x271 = 1013777305168695286LL;
	int64_t x272 = INT64_MIN;
	static int32_t t67 = -521212;

	t67 = (x269<((x270<x271)*x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MAX;
	volatile int32_t x274 = -29;
	uint32_t x275 = 2092720U;
	int32_t t68 = 110799332;

	t68 = (x273<((x274<x275)*x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MAX;
	int16_t x280 = 0;
	int32_t t69 = 12;

	t69 = (x277<((x278<x279)*x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MIN;
	uint32_t x282 = 399U;
	volatile int64_t x283 = -60313LL;
	int16_t x284 = 8;
	int32_t t70 = 711168329;

	t70 = (x281<((x282<x283)*x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 6476690509064557LLU;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	static int32_t x288 = 78261684;
	int32_t t71 = 1759496;

	t71 = (x285<((x286<x287)*x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	static int32_t x290 = INT32_MAX;
	volatile uint64_t x291 = 2219545282980875LLU;
	volatile uint8_t x292 = UINT8_MAX;
	int32_t t72 = -28947;

	t72 = (x289<((x290<x291)*x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	static int32_t x295 = -1;
	uint8_t x296 = 18U;
	static volatile int32_t t73 = -138634;

	t73 = (x293<((x294<x295)*x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = 0;
	volatile int64_t x299 = INT64_MIN;
	uint16_t x300 = UINT16_MAX;

	t74 = (x297<((x298<x299)*x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x302 = 1U;
	volatile uint32_t x303 = 541086U;
	int16_t x304 = -1;

	t75 = (x301<((x302<x303)*x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint32_t x306 = UINT32_MAX;
	int16_t x307 = INT16_MIN;
	uint32_t x308 = 113575187U;
	int32_t t76 = 147900;

	t76 = (x305<((x306<x307)*x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MIN;
	int64_t x312 = INT64_MAX;
	int32_t t77 = -311723;

	t77 = (x309<((x310<x311)*x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MAX;
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = -144;
	volatile int32_t t78 = -1701;

	t78 = (x313<((x314<x315)*x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = 3;
	volatile uint64_t x319 = 14510878LLU;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = 18646;

	t79 = (x317<((x318<x319)*x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	volatile int32_t t80 = -75328;

	t80 = (x321<((x322<x323)*x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	volatile int16_t x326 = INT16_MAX;
	volatile int16_t x327 = INT16_MIN;
	int64_t x328 = -648446961711882547LL;

	t81 = (x325<((x326<x327)*x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 111479784035750LLU;
	int32_t x331 = INT32_MAX;
	volatile int32_t x332 = -1;
	volatile int32_t t82 = 72970;

	t82 = (x329<((x330<x331)*x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 10282619554629051LLU;
	volatile int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = -5081;

	t83 = (x333<((x334<x335)*x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MIN;
	volatile int32_t x339 = INT32_MIN;
	volatile int8_t x340 = -1;
	volatile int32_t t84 = 326;

	t84 = (x337<((x338<x339)*x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = -54;
	volatile int8_t x342 = -1;
	uint32_t x343 = UINT32_MAX;
	static int16_t x344 = INT16_MAX;

	t85 = (x341<((x342<x343)*x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 767U;
	volatile int8_t x347 = -38;
	uint32_t x348 = 2U;
	int32_t t86 = 872021;

	t86 = (x345<((x346<x347)*x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	volatile int32_t x350 = INT32_MIN;
	int16_t x351 = -464;
	uint16_t x352 = 1U;

	t87 = (x349<((x350<x351)*x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	volatile int8_t x354 = -13;
	static int32_t x355 = INT32_MIN;
	int32_t x356 = -1;
	volatile int32_t t88 = 3357;

	t88 = (x353<((x354<x355)*x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -1;
	volatile uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;

	t89 = (x357<((x358<x359)*x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	uint64_t x362 = 386515027511354LLU;
	int8_t x363 = -12;
	static int32_t x364 = 1;
	volatile int32_t t90 = -1435;

	t90 = (x361<((x362<x363)*x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x366 = UINT16_MAX;
	static int8_t x367 = 0;
	static int64_t x368 = -236660044788LL;
	volatile int32_t t91 = -82145997;

	t91 = (x365<((x366<x367)*x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MAX;
	int16_t x371 = -1;
	volatile uint8_t x372 = 1U;
	int32_t t92 = 9991;

	t92 = (x369<((x370<x371)*x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x374 = -8658192887900997LL;
	static uint32_t x375 = 39U;
	volatile int64_t x376 = 16928LL;
	int32_t t93 = -2689992;

	t93 = (x373<((x374<x375)*x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 1U;
	int8_t x378 = INT8_MIN;

	t94 = (x377<((x378<x379)*x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = 10013143;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = 6U;
	volatile int32_t t95 = 420294;

	t95 = (x381<((x382<x383)*x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x386 = 6U;
	volatile int8_t x387 = INT8_MIN;
	int16_t x388 = -161;
	volatile int32_t t96 = 11;

	t96 = (x385<((x386<x387)*x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -96443LL;
	volatile int32_t t97 = 3482;

	t97 = (x389<((x390<x391)*x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MAX;
	int16_t x395 = 3;
	volatile int8_t x396 = -1;
	volatile int32_t t98 = -113;

	t98 = (x393<((x394<x395)*x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x398 = INT8_MAX;
	uint32_t x399 = 6170U;
	int32_t t99 = -6737726;

	t99 = (x397<((x398<x399)*x400));

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

