#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -20792180;
int8_t x16 = INT8_MIN;
volatile int32_t t3 = -19;
int16_t x17 = INT16_MIN;
uint64_t x18 = UINT64_MAX;
static int16_t x25 = -1;
static int64_t x29 = INT64_MAX;
static int64_t x30 = INT64_MAX;
int32_t t7 = -2087;
int32_t x34 = INT32_MAX;
volatile int32_t t9 = 1;
static uint8_t x43 = 0U;
static int64_t x53 = INT64_MAX;
int8_t x61 = -1;
volatile uint64_t x62 = 150342442682LLU;
int32_t x63 = INT32_MIN;
volatile int32_t t15 = -225950512;
int32_t x66 = 11978;
static uint64_t x67 = 223032111010653839LLU;
uint16_t x71 = UINT16_MAX;
int8_t x72 = -1;
volatile int64_t x78 = -1LL;
int64_t x80 = -114424120642LL;
static volatile uint64_t x84 = 31213879896LLU;
int8_t x87 = INT8_MIN;
int32_t x90 = 92972;
int16_t x91 = -1;
volatile int32_t x99 = -294643;
volatile int16_t x101 = -238;
int32_t t25 = 2475882;
int32_t t26 = 13806007;
int32_t x111 = -1628881;
int16_t x113 = -389;
volatile uint16_t x116 = 1U;
static volatile int16_t x118 = -1844;
uint16_t x134 = 3U;
static volatile int8_t x139 = INT8_MAX;
uint16_t x149 = UINT16_MAX;
static int8_t x154 = -21;
volatile int32_t t39 = -254;
int32_t t40 = 0;
static int8_t x167 = INT8_MAX;
volatile int16_t x168 = INT16_MAX;
int32_t t41 = 46543414;
static int64_t x180 = -1LL;
volatile int32_t t44 = 184;
volatile int64_t x183 = -1LL;
int16_t x190 = -1;
int16_t x193 = -2295;
int32_t t48 = 2;
static int32_t x198 = INT32_MAX;
int16_t x202 = INT16_MIN;
volatile int32_t t53 = 39;
int16_t x217 = 11477;
volatile int16_t x225 = INT16_MAX;
volatile int32_t x226 = -113;
uint32_t x228 = 738368353U;
volatile int32_t t56 = -75217845;
int32_t x235 = -444;
int64_t x240 = 920932028228710LL;
static int32_t t59 = -39443848;
int32_t x241 = -7239422;
int8_t x242 = 8;
uint8_t x245 = 12U;
int64_t x248 = 2496556914LL;
volatile int32_t t62 = -721;
int32_t x255 = INT32_MIN;
int8_t x256 = 0;
int32_t t63 = -788;
static int64_t x259 = INT64_MIN;
int8_t x261 = -1;
static volatile uint32_t x264 = 344447441U;
int32_t t65 = 96358;
int64_t x267 = INT64_MIN;
int16_t x268 = INT16_MAX;
uint16_t x280 = UINT16_MAX;
static int32_t x288 = INT32_MIN;
int32_t t71 = -1;
volatile int16_t x301 = 40;
int64_t x306 = -1LL;
int64_t x307 = INT64_MIN;
static int8_t x312 = INT8_MIN;
int32_t t79 = -3809;
volatile int64_t x322 = INT64_MIN;
int8_t x323 = 0;
volatile int32_t t80 = -9584;
uint64_t x325 = UINT64_MAX;
int16_t x327 = -12;
volatile int64_t x337 = INT64_MIN;
uint16_t x340 = 3828U;
static uint8_t x348 = UINT8_MAX;
volatile int32_t t88 = 28911;
uint8_t x365 = 10U;
int32_t x371 = -297;
volatile int32_t t92 = 29817121;
int8_t x373 = INT8_MIN;
static volatile int64_t x387 = INT64_MIN;
static int64_t x396 = INT64_MIN;
volatile uint32_t x399 = UINT32_MAX;


void f0(void) {
	int32_t x1 = -1;
	uint16_t x2 = 6152U;
	int64_t x3 = -525233113202LL;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 7749802;

	t0 = (x1==((x2<x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int16_t x6 = INT16_MIN;
	static int8_t x7 = 0;
	int16_t x8 = INT16_MAX;

	t1 = (x5==((x6<x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static uint16_t x10 = 1241U;
	int64_t x11 = INT64_MAX;
	static uint32_t x12 = 71047710U;
	int32_t t2 = -3;

	t2 = (x9==((x10<x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1629986312U;
	volatile int64_t x14 = -276LL;
	uint64_t x15 = 242197217787665760LLU;

	t3 = (x13==((x14<x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 1;

	t4 = (x17==((x18<x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MAX;
	int8_t x22 = 0;
	volatile int32_t x23 = -89398118;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 2683;

	t5 = (x21==((x22<x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 3346782U;
	static uint16_t x27 = UINT16_MAX;
	uint32_t x28 = 5U;
	int32_t t6 = -861138;

	t6 = (x25==((x26<x27)*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x31 = 1407U;
	int64_t x32 = INT64_MIN;

	t7 = (x29==((x30<x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	int64_t x35 = INT64_MAX;
	volatile int16_t x36 = -1;
	int32_t t8 = 43666963;

	t8 = (x33==((x34<x35)*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 109U;
	uint64_t x38 = UINT64_MAX;
	uint32_t x39 = UINT32_MAX;
	int32_t x40 = INT32_MIN;

	t9 = (x37==((x38<x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint32_t x42 = 16025U;
	int16_t x44 = INT16_MIN;
	int32_t t10 = 79224;

	t10 = (x41==((x42<x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = 243;
	int16_t x47 = INT16_MIN;
	uint64_t x48 = 1LLU;
	int32_t t11 = 24377;

	t11 = (x45==((x46<x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = UINT64_MAX;
	uint8_t x50 = UINT8_MAX;
	volatile int32_t x51 = -1078136;
	int8_t x52 = -18;
	volatile int32_t t12 = 55633;

	t12 = (x49==((x50<x51)*x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 6690U;
	static int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t13 = 6250564;

	t13 = (x53==((x54<x55)*x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 11913U;
	volatile int8_t x58 = 5;
	volatile uint16_t x59 = UINT16_MAX;
	int64_t x60 = 5LL;
	volatile int32_t t14 = -28627;

	t14 = (x57==((x58<x59)*x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x64 = 116888LLU;

	t15 = (x61==((x62<x63)*x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int32_t x68 = -1478;
	volatile int32_t t16 = 10627465;

	t16 = (x65==((x66<x67)*x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	volatile uint8_t x70 = UINT8_MAX;
	volatile int32_t t17 = -15370;

	t17 = (x69==((x70<x71)*x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 10138;
	uint16_t x74 = UINT16_MAX;
	static int8_t x75 = 14;
	volatile uint8_t x76 = UINT8_MAX;
	static volatile int32_t t18 = -447;

	t18 = (x73==((x74<x75)*x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint64_t x79 = UINT64_MAX;
	volatile int32_t t19 = 0;

	t19 = (x77==((x78<x79)*x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -29;
	int16_t x82 = 485;
	int64_t x83 = INT64_MIN;
	int32_t t20 = 1;

	t20 = (x81==((x82<x83)*x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int64_t x86 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 6;

	t21 = (x85==((x86<x87)*x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 106601824151050LLU;
	int32_t x92 = -1;
	volatile int32_t t22 = 1;

	t22 = (x89==((x90<x91)*x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	uint32_t x94 = 265U;
	static uint16_t x95 = 3063U;
	int8_t x96 = -1;
	int32_t t23 = -1320625;

	t23 = (x93==((x94<x95)*x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint16_t x98 = 2U;
	volatile int32_t x100 = INT32_MIN;
	int32_t t24 = 1;

	t24 = (x97==((x98<x99)*x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x102 = UINT64_MAX;
	volatile int32_t x103 = INT32_MAX;
	volatile int8_t x104 = INT8_MAX;

	t25 = (x101==((x102<x103)*x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	volatile uint16_t x106 = UINT16_MAX;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -1;

	t26 = (x105==((x106<x107)*x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	volatile uint8_t x110 = UINT8_MAX;
	int16_t x112 = 3;
	volatile int32_t t27 = -632164;

	t27 = (x109==((x110<x111)*x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 109U;
	volatile int16_t x115 = INT16_MIN;
	volatile int32_t t28 = -1805;

	t28 = (x113==((x114<x115)*x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -31;
	volatile uint64_t x119 = 15541754488073034LLU;
	volatile int16_t x120 = 28;
	int32_t t29 = -13;

	t29 = (x117==((x118<x119)*x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 246821587U;
	int64_t x122 = INT64_MAX;
	static int64_t x123 = INT64_MIN;
	static uint32_t x124 = 386888875U;
	int32_t t30 = 431537507;

	t30 = (x121==((x122<x123)*x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 124U;
	uint16_t x126 = UINT16_MAX;
	int16_t x127 = -1;
	uint32_t x128 = 196989U;
	int32_t t31 = 96;

	t31 = (x125==((x126<x127)*x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	uint16_t x130 = 3253U;
	static uint8_t x131 = 3U;
	volatile int64_t x132 = INT64_MIN;
	int32_t t32 = 2803;

	t32 = (x129==((x130<x131)*x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int8_t x135 = INT8_MAX;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 4232;

	t33 = (x133==((x134<x135)*x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MAX;
	static uint16_t x138 = 3U;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 4039;

	t34 = (x137==((x138<x139)*x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 0;
	int16_t x142 = -1830;
	uint8_t x143 = 111U;
	int8_t x144 = 2;
	static volatile int32_t t35 = -96439740;

	t35 = (x141==((x142<x143)*x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	int8_t x146 = INT8_MIN;
	int32_t x147 = -75330809;
	uint64_t x148 = 113LLU;
	static int32_t t36 = -38692810;

	t36 = (x145==((x146<x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = UINT32_MAX;
	int32_t x151 = 4893;
	volatile int64_t x152 = INT64_MIN;
	static volatile int32_t t37 = 14501673;

	t37 = (x149==((x150<x151)*x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 16321877;
	int16_t x155 = INT16_MIN;
	static volatile int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -1;

	t38 = (x153==((x154<x155)*x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 83U;
	int64_t x158 = INT64_MAX;
	int8_t x159 = -1;
	int64_t x160 = INT64_MAX;

	t39 = (x157==((x158<x159)*x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	uint8_t x162 = UINT8_MAX;
	static int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MIN;

	t40 = (x161==((x162<x163)*x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	int32_t x166 = INT32_MIN;

	t41 = (x165==((x166<x167)*x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 4650154884815464714LLU;
	uint8_t x170 = 6U;
	static uint32_t x171 = 7U;
	int8_t x172 = INT8_MAX;
	int32_t t42 = -130561;

	t42 = (x169==((x170<x171)*x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int8_t x174 = INT8_MIN;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 637921883;

	t43 = (x173==((x174<x175)*x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	uint8_t x178 = UINT8_MAX;
	static uint32_t x179 = UINT32_MAX;

	t44 = (x177==((x178<x179)*x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 126682412627693LL;
	int32_t x182 = INT32_MIN;
	int8_t x184 = 0;
	static volatile int32_t t45 = -1243;

	t45 = (x181==((x182<x183)*x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int64_t x186 = INT64_MIN;
	volatile uint16_t x187 = UINT16_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = -241;

	t46 = (x185==((x186<x187)*x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 490U;
	volatile int8_t x191 = -2;
	uint64_t x192 = 120826LLU;
	int32_t t47 = 14666054;

	t47 = (x189==((x190<x191)*x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x194 = 2086270;
	volatile uint16_t x195 = 13499U;
	int64_t x196 = -1LL;

	t48 = (x193==((x194<x195)*x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = UINT16_MAX;
	uint16_t x199 = UINT16_MAX;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t49 = -5985;

	t49 = (x197==((x198<x199)*x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	uint32_t x203 = 29429U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 3120;

	t50 = (x201==((x202<x203)*x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -25830032690407LL;
	static int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MAX;
	int64_t x208 = INT64_MIN;
	int32_t t51 = -198767;

	t51 = (x205==((x206<x207)*x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 14484268846402LLU;
	int32_t x210 = INT32_MIN;
	int32_t x211 = 248679;
	static int16_t x212 = INT16_MIN;
	int32_t t52 = -15249;

	t52 = (x209==((x210<x211)*x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	int64_t x215 = 12930234LL;
	volatile int8_t x216 = -1;

	t53 = (x213==((x214<x215)*x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x218 = UINT16_MAX;
	static int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -68063;

	t54 = (x217==((x218<x219)*x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	static uint8_t x222 = 17U;
	int32_t x223 = 5462;
	uint64_t x224 = 82LLU;
	volatile int32_t t55 = 191944064;

	t55 = (x221==((x222<x223)*x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x227 = UINT64_MAX;

	t56 = (x225==((x226<x227)*x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	static int32_t x230 = INT32_MAX;
	uint32_t x231 = UINT32_MAX;
	volatile int16_t x232 = -3;
	volatile int32_t t57 = 139;

	t57 = (x229==((x230<x231)*x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MAX;
	static int64_t x234 = -1LL;
	volatile uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = 3;

	t58 = (x233==((x234<x235)*x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 10U;
	uint8_t x238 = UINT8_MAX;
	int16_t x239 = INT16_MIN;

	t59 = (x237==((x238<x239)*x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x243 = INT64_MIN;
	int64_t x244 = 99934LL;
	volatile int32_t t60 = 55806;

	t60 = (x241==((x242<x243)*x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x246 = 2991U;
	int32_t x247 = INT32_MAX;
	volatile int32_t t61 = 4560060;

	t61 = (x245==((x246<x247)*x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x249 = 42U;
	int32_t x250 = INT32_MIN;
	uint64_t x251 = UINT64_MAX;
	static int32_t x252 = INT32_MAX;

	t62 = (x249==((x250<x251)*x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 159403274299LL;
	uint16_t x254 = 2U;

	t63 = (x253==((x254<x255)*x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MIN;
	int8_t x260 = 3;
	volatile int32_t t64 = -3993139;

	t64 = (x257==((x258<x259)*x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x262 = 1;
	int64_t x263 = INT64_MAX;

	t65 = (x261==((x262<x263)*x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static volatile int32_t x266 = -3;
	int32_t t66 = 272;

	t66 = (x265==((x266<x267)*x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	uint32_t x270 = UINT32_MAX;
	static uint16_t x271 = 3U;
	volatile int64_t x272 = 31542108037986761LL;
	int32_t t67 = -140;

	t67 = (x269==((x270<x271)*x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MAX;
	int32_t x274 = 7648755;
	static uint32_t x275 = UINT32_MAX;
	static int8_t x276 = -1;
	int32_t t68 = 3;

	t68 = (x273==((x274<x275)*x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 13;
	int64_t x278 = INT64_MAX;
	int16_t x279 = INT16_MAX;
	volatile int32_t t69 = -608272;

	t69 = (x277==((x278<x279)*x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -1;
	int32_t x282 = -1;
	volatile int64_t x283 = 11830010476LL;
	uint32_t x284 = 1677U;
	int32_t t70 = -12123;

	t70 = (x281==((x282<x283)*x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	static int8_t x286 = INT8_MAX;
	volatile int16_t x287 = -1;

	t71 = (x285==((x286<x287)*x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 12488362;
	int8_t x290 = -1;
	volatile int16_t x291 = 63;
	int64_t x292 = 1LL;
	int32_t t72 = -5883159;

	t72 = (x289==((x290<x291)*x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	static int64_t x294 = INT64_MAX;
	int8_t x295 = -9;
	uint64_t x296 = 1988544LLU;
	volatile int32_t t73 = 2590512;

	t73 = (x293==((x294<x295)*x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MAX;
	int16_t x299 = 3;
	uint32_t x300 = 409165451U;
	static volatile int32_t t74 = -31;

	t74 = (x297==((x298<x299)*x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -5;
	static int8_t x303 = -1;
	int16_t x304 = 0;
	int32_t t75 = 8519;

	t75 = (x301==((x302<x303)*x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int32_t x308 = INT32_MAX;
	volatile int32_t t76 = 15;

	t76 = (x305==((x306<x307)*x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 0;
	int8_t x310 = -24;
	int8_t x311 = -3;
	volatile int32_t t77 = 848;

	t77 = (x309==((x310<x311)*x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = INT32_MIN;
	static volatile int16_t x315 = INT16_MIN;
	volatile uint16_t x316 = 0U;
	static volatile int32_t t78 = -702;

	t78 = (x313==((x314<x315)*x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MAX;
	int16_t x319 = INT16_MIN;
	int8_t x320 = -1;

	t79 = (x317==((x318<x319)*x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint16_t x324 = UINT16_MAX;

	t80 = (x321==((x322<x323)*x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 6U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -1610833;

	t81 = (x325==((x326<x327)*x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 213815031LLU;
	int16_t x330 = 4;
	uint8_t x331 = 20U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 1376747;

	t82 = (x329==((x330<x331)*x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 765U;
	volatile int64_t x334 = INT64_MIN;
	static int16_t x335 = 96;
	int16_t x336 = INT16_MAX;
	int32_t t83 = -10143304;

	t83 = (x333==((x334<x335)*x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x338 = -143484029462330LL;
	volatile uint64_t x339 = 414450LLU;
	static int32_t t84 = -4;

	t84 = (x337==((x338<x339)*x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint16_t x342 = UINT16_MAX;
	volatile int16_t x343 = 26;
	uint32_t x344 = 1670040U;
	static int32_t t85 = -3349823;

	t85 = (x341==((x342<x343)*x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int32_t x346 = 84519;
	int8_t x347 = -1;
	volatile int32_t t86 = 30150;

	t86 = (x345==((x346<x347)*x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 772845LL;
	int64_t x350 = -23LL;
	static int16_t x351 = -68;
	static int32_t x352 = INT32_MAX;
	int32_t t87 = 466523582;

	t87 = (x349==((x350<x351)*x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	int64_t x354 = INT64_MIN;
	static volatile int16_t x355 = INT16_MAX;
	uint64_t x356 = 167964180LLU;

	t88 = (x353==((x354<x355)*x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 122081569;
	int64_t x358 = -549689588380104LL;
	static uint8_t x359 = 78U;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = -75;

	t89 = (x357==((x358<x359)*x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = -375232917;
	static volatile uint8_t x363 = 25U;
	static int32_t x364 = -23;
	int32_t t90 = -7689;

	t90 = (x361==((x362<x363)*x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = UINT64_MAX;
	volatile uint64_t x367 = 1476203156627535313LLU;
	uint32_t x368 = 2009U;
	int32_t t91 = 430007;

	t91 = (x365==((x366<x367)*x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = UINT16_MAX;
	volatile uint8_t x370 = 3U;
	uint8_t x372 = 13U;

	t92 = (x369==((x370<x371)*x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = 0;
	static uint64_t x375 = 522765457LLU;
	static uint8_t x376 = UINT8_MAX;
	volatile int32_t t93 = 43636;

	t93 = (x373==((x374<x375)*x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	uint8_t x378 = 0U;
	int32_t x379 = -1;
	static int64_t x380 = INT64_MAX;
	int32_t t94 = 20515;

	t94 = (x377==((x378<x379)*x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	volatile int16_t x382 = -1;
	int32_t x383 = 3498488;
	int64_t x384 = INT64_MIN;
	int32_t t95 = 1012;

	t95 = (x381==((x382<x383)*x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 36LLU;
	static uint32_t x386 = 6195U;
	volatile int64_t x388 = INT64_MAX;
	int32_t t96 = -13656763;

	t96 = (x385==((x386<x387)*x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 87U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = -15791;

	t97 = (x389==((x390<x391)*x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	uint8_t x394 = 7U;
	int32_t x395 = 10855336;
	int32_t t98 = -5;

	t98 = (x393==((x394<x395)*x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -6316LL;
	volatile uint8_t x398 = 0U;
	int64_t x400 = INT64_MAX;
	int32_t t99 = -9445;

	t99 = (x397==((x398<x399)*x400));

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

