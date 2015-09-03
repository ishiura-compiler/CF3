#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
uint16_t x8 = UINT16_MAX;
uint16_t x9 = 2542U;
int32_t t2 = 83;
int64_t x14 = INT64_MAX;
uint8_t x18 = UINT8_MAX;
volatile int64_t x22 = INT64_MIN;
uint64_t x25 = 24451618483026831LLU;
uint8_t x30 = UINT8_MAX;
static int32_t t7 = 770;
int16_t x35 = INT16_MIN;
int64_t x40 = INT64_MIN;
static volatile int32_t t12 = -10517;
uint32_t x53 = 368416845U;
int32_t x61 = INT32_MIN;
static volatile uint8_t x63 = 2U;
uint8_t x64 = 11U;
static volatile int32_t t15 = 2029;
volatile int32_t t16 = 1020114;
uint64_t x81 = 2716774401LLU;
static int16_t x87 = -193;
static int32_t t21 = 6771;
static int8_t x93 = 23;
uint8_t x95 = 119U;
int32_t x96 = INT32_MIN;
int8_t x98 = 36;
int64_t x100 = INT64_MIN;
static int64_t x103 = -1LL;
static volatile int32_t t25 = -921;
volatile int16_t x105 = 10;
int16_t x106 = -1;
int8_t x113 = 1;
int64_t x122 = INT64_MAX;
uint64_t x123 = UINT64_MAX;
uint16_t x129 = 333U;
volatile uint32_t x131 = 20U;
volatile uint64_t x134 = 7704954225LLU;
uint8_t x143 = 4U;
uint16_t x144 = 0U;
int32_t t36 = 1;
volatile int64_t x156 = -63308517112LL;
int32_t t41 = 163;
int32_t x179 = INT32_MIN;
int16_t x187 = INT16_MIN;
uint8_t x188 = 20U;
int16_t x189 = INT16_MAX;
volatile uint32_t x190 = UINT32_MAX;
volatile uint32_t x201 = 35U;
static volatile int32_t t50 = -330880;
int32_t t53 = 1399;
static volatile int16_t x217 = INT16_MIN;
int8_t x224 = INT8_MAX;
volatile int32_t x228 = -15643;
uint8_t x239 = UINT8_MAX;
int16_t x243 = INT16_MAX;
volatile int32_t x251 = INT32_MIN;
int8_t x252 = INT8_MIN;
uint8_t x254 = UINT8_MAX;
volatile int32_t t63 = 240981396;
uint8_t x258 = 1U;
static int16_t x259 = 14500;
int32_t t65 = -118249612;
static uint8_t x274 = UINT8_MAX;
int32_t t68 = -118702602;
int8_t x280 = 12;
volatile int32_t x285 = INT32_MIN;
int16_t x302 = -13;
int32_t t79 = 1787163;
uint64_t x324 = 498747589258575180LLU;
uint32_t x333 = UINT32_MAX;
int32_t x335 = -103864798;
int32_t t83 = -36629;
int8_t x337 = INT8_MIN;
volatile int32_t t85 = -6162636;
int16_t x351 = INT16_MIN;
int16_t x352 = -1;
int32_t t87 = 336499352;
volatile uint32_t x360 = 51635U;
int64_t x362 = 120977351133LL;
volatile int32_t t90 = -99290;
volatile int32_t x365 = INT32_MAX;
static uint8_t x368 = 24U;
volatile int32_t t92 = -5;
static uint64_t x375 = 417483832974088LLU;
volatile int32_t t94 = -2034;
static volatile int16_t x383 = INT16_MIN;
int32_t t95 = -4620002;
volatile int32_t x395 = 14407;
static volatile int32_t t98 = 13391171;


void f0(void) {
	int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 129541;

	t0 = (x1<=((x2<x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	uint8_t x7 = 9U;
	volatile int32_t t1 = 242516508;

	t1 = (x5<=((x6<x7)^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 3U;
	int16_t x11 = INT16_MIN;
	int16_t x12 = -14;

	t2 = (x9<=((x10<x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1259;
	int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = -105064;

	t3 = (x13<=((x14<x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int16_t x19 = -1;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 15388;

	t4 = (x17<=((x18<x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -21;
	volatile int16_t x23 = -1;
	int64_t x24 = INT64_MIN;
	static int32_t t5 = -34072;

	t5 = (x21<=((x22<x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	int16_t x27 = -1;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 232016918;

	t6 = (x25<=((x26<x27)^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	volatile int64_t x31 = -3LL;
	static int8_t x32 = INT8_MAX;

	t7 = (x29<=((x30<x31)^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint8_t x34 = 2U;
	static volatile int32_t x36 = -1;
	volatile int32_t t8 = -287972;

	t8 = (x33<=((x34<x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	static uint16_t x38 = 26U;
	uint8_t x39 = 3U;
	int32_t t9 = 17765070;

	t9 = (x37<=((x38<x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = INT64_MIN;
	uint64_t x42 = 1045702503986692LLU;
	static uint16_t x43 = UINT16_MAX;
	static int64_t x44 = INT64_MIN;
	int32_t t10 = -5;

	t10 = (x41<=((x42<x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = 1097856;
	int32_t x47 = -447874;
	int16_t x48 = 2;
	static volatile int32_t t11 = -149790234;

	t11 = (x45<=((x46<x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	static int32_t x50 = INT32_MAX;
	volatile int32_t x51 = INT32_MAX;
	volatile int16_t x52 = INT16_MAX;

	t12 = (x49<=((x50<x51)^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -56290635;

	t13 = (x53<=((x54<x55)^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	uint16_t x58 = 210U;
	int16_t x59 = INT16_MIN;
	int32_t x60 = 6;
	volatile int32_t t14 = -110448;

	t14 = (x57<=((x58<x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = -20;

	t15 = (x61<=((x62<x63)^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int16_t x66 = INT16_MAX;
	static int32_t x67 = INT32_MIN;
	int32_t x68 = 0;

	t16 = (x65<=((x66<x67)^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 133409589650LLU;
	int16_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = -34532088;
	int32_t t17 = 19736;

	t17 = (x69<=((x70<x71)^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 13U;
	int8_t x74 = INT8_MAX;
	volatile int8_t x75 = INT8_MIN;
	static int64_t x76 = INT64_MIN;
	int32_t t18 = 478;

	t18 = (x73<=((x74<x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MAX;
	uint64_t x78 = 220LLU;
	int64_t x79 = INT64_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 94310;

	t19 = (x77<=((x78<x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = 165LL;
	int32_t x84 = 712188176;
	volatile int32_t t20 = 9981541;

	t20 = (x81<=((x82<x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 0U;
	volatile int8_t x86 = -1;
	int16_t x88 = 6042;

	t21 = (x85<=((x86<x87)^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 0U;
	volatile uint16_t x90 = 1025U;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MAX;
	int32_t t22 = 63;

	t22 = (x89<=((x90<x91)^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x94 = 3LL;
	volatile int32_t t23 = 2;

	t23 = (x93<=((x94<x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	static volatile int64_t x99 = -1LL;
	int32_t t24 = -109176611;

	t24 = (x97<=((x98<x99)^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -870615024507160443LL;
	volatile uint16_t x102 = 1044U;
	int8_t x104 = -18;

	t25 = (x101<=((x102<x103)^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = INT32_MIN;
	static int8_t x108 = -2;
	int32_t t26 = -23;

	t26 = (x105<=((x106<x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int32_t x110 = INT32_MIN;
	static uint8_t x111 = UINT8_MAX;
	int32_t x112 = -1;
	volatile int32_t t27 = 289194;

	t27 = (x109<=((x110<x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 31U;
	uint16_t x115 = 21375U;
	uint8_t x116 = 60U;
	static int32_t t28 = 1998;

	t28 = (x113<=((x114<x115)^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 14U;
	int64_t x118 = -599004149LL;
	uint8_t x119 = 8U;
	static int64_t x120 = INT64_MAX;
	int32_t t29 = -3800;

	t29 = (x117<=((x118<x119)^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 309LLU;
	uint32_t x124 = UINT32_MAX;
	int32_t t30 = -257;

	t30 = (x121<=((x122<x123)^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -10;
	volatile int64_t x126 = -1LL;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = -1;
	static volatile int32_t t31 = -3;

	t31 = (x125<=((x126<x127)^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x130 = INT16_MIN;
	uint64_t x132 = UINT64_MAX;
	int32_t t32 = 22870;

	t32 = (x129<=((x130<x131)^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 23U;
	int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	int32_t t33 = -1;

	t33 = (x133<=((x134<x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 4LLU;
	uint8_t x138 = 10U;
	uint32_t x139 = 383U;
	static uint8_t x140 = 3U;
	volatile int32_t t34 = 892968976;

	t34 = (x137<=((x138<x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	int64_t x142 = INT64_MAX;
	int32_t t35 = 46;

	t35 = (x141<=((x142<x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 8;
	volatile int64_t x146 = -1LL;
	int32_t x147 = -1;
	static int32_t x148 = -26;

	t36 = (x145<=((x146<x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -36;
	int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MAX;
	static int32_t x152 = -1;
	int32_t t37 = 1104;

	t37 = (x149<=((x150<x151)^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MAX;
	volatile uint16_t x154 = 2681U;
	volatile int64_t x155 = 42464LL;
	static int32_t t38 = -151;

	t38 = (x153<=((x154<x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -19;
	int32_t x158 = INT32_MIN;
	int16_t x159 = INT16_MIN;
	int16_t x160 = -1;
	static volatile int32_t t39 = 239125;

	t39 = (x157<=((x158<x159)^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 3984913U;
	volatile int64_t x162 = 187442LL;
	static int32_t x163 = INT32_MIN;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t40 = -412;

	t40 = (x161<=((x162<x163)^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 0U;
	int8_t x166 = -4;
	volatile uint8_t x167 = 60U;
	int32_t x168 = -1;

	t41 = (x165<=((x166<x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	static uint16_t x170 = UINT16_MAX;
	static uint64_t x171 = 2382LLU;
	int8_t x172 = 0;
	int32_t t42 = 965;

	t42 = (x169<=((x170<x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	uint64_t x174 = 12LLU;
	int32_t x175 = -3;
	uint16_t x176 = 6U;
	volatile int32_t t43 = -20597;

	t43 = (x173<=((x174<x175)^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 6LLU;
	static volatile int32_t x178 = INT32_MIN;
	uint32_t x180 = 1559771615U;
	volatile int32_t t44 = -485728;

	t44 = (x177<=((x178<x179)^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = 236;
	int8_t x182 = INT8_MIN;
	static uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = -13326;

	t45 = (x181<=((x182<x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = -1;
	volatile uint64_t x186 = 702727LLU;
	int32_t t46 = -56;

	t46 = (x185<=((x186<x187)^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x191 = 25822;
	volatile int64_t x192 = INT64_MIN;
	static volatile int32_t t47 = 1536;

	t47 = (x189<=((x190<x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = 7810;
	int8_t x196 = -1;
	int32_t t48 = -1326783;

	t48 = (x193<=((x194<x195)^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 0U;
	int8_t x198 = -13;
	static uint64_t x199 = 42757LLU;
	uint16_t x200 = 28566U;
	static volatile int32_t t49 = -9399745;

	t49 = (x197<=((x198<x199)^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 2LLU;
	static volatile int64_t x203 = -399LL;
	int16_t x204 = INT16_MIN;

	t50 = (x201<=((x202<x203)^x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 5U;
	int8_t x206 = INT8_MAX;
	int64_t x207 = INT64_MIN;
	static int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = 787;

	t51 = (x205<=((x206<x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 8299;
	volatile uint8_t x210 = 1U;
	static int8_t x211 = 1;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 639469110;

	t52 = (x209<=((x210<x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = 507416LLU;
	int64_t x214 = -2382213133192047LL;
	volatile uint32_t x215 = 170U;
	int64_t x216 = INT64_MIN;

	t53 = (x213<=((x214<x215)^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x218 = 6101LLU;
	static int64_t x219 = 7LL;
	int16_t x220 = -1;
	static volatile int32_t t54 = -355;

	t54 = (x217<=((x218<x219)^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = -1;
	volatile int64_t x223 = INT64_MAX;
	volatile int32_t t55 = -6002472;

	t55 = (x221<=((x222<x223)^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = -33;
	volatile uint8_t x227 = UINT8_MAX;
	volatile int32_t t56 = -1;

	t56 = (x225<=((x226<x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 0U;
	static uint8_t x230 = UINT8_MAX;
	int16_t x231 = -61;
	int64_t x232 = -1LL;
	volatile int32_t t57 = 31854652;

	t57 = (x229<=((x230<x231)^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1336023921849LL;
	int16_t x234 = -1;
	int8_t x235 = INT8_MIN;
	int64_t x236 = -348325591853066493LL;
	int32_t t58 = 27336;

	t58 = (x233<=((x234<x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	uint16_t x238 = UINT16_MAX;
	uint8_t x240 = 80U;
	volatile int32_t t59 = -33904;

	t59 = (x237<=((x238<x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 38935145927LLU;
	static int8_t x242 = -1;
	int8_t x244 = -1;
	volatile int32_t t60 = 3272;

	t60 = (x241<=((x242<x243)^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 2387209922082355114LLU;
	static int32_t x246 = INT32_MIN;
	uint64_t x247 = 94292650785LLU;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t61 = -50739945;

	t61 = (x245<=((x246<x247)^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 31763LL;
	static int16_t x250 = -6;
	volatile int32_t t62 = -3;

	t62 = (x249<=((x250<x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 2U;
	volatile int8_t x255 = -2;
	int32_t x256 = 8060;

	t63 = (x253<=((x254<x255)^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int8_t x260 = -8;
	int32_t t64 = 162278;

	t64 = (x257<=((x258<x259)^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MAX;
	volatile uint64_t x262 = 40367819252LLU;
	uint64_t x263 = 4250048113235477LLU;
	volatile int64_t x264 = -1LL;

	t65 = (x261<=((x262<x263)^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -3;
	static int8_t x266 = -1;
	int16_t x267 = -1;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -31;

	t66 = (x265<=((x266<x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = 32061U;
	static uint64_t x270 = 81378996973166LLU;
	uint8_t x271 = 51U;
	volatile uint32_t x272 = 905492235U;
	volatile int32_t t67 = 7206781;

	t67 = (x269<=((x270<x271)^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int32_t x275 = INT32_MIN;
	static int16_t x276 = INT16_MIN;

	t68 = (x273<=((x274<x275)^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = 1;
	static int64_t x278 = INT64_MIN;
	volatile int8_t x279 = -1;
	volatile int32_t t69 = 55203;

	t69 = (x277<=((x278<x279)^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 57;
	uint8_t x282 = 31U;
	int8_t x283 = -27;
	volatile uint8_t x284 = 12U;
	volatile int32_t t70 = -205864;

	t70 = (x281<=((x282<x283)^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = INT16_MAX;
	int16_t x287 = 1843;
	uint32_t x288 = 632558162U;
	int32_t t71 = -8935873;

	t71 = (x285<=((x286<x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 0;
	uint16_t x290 = 5U;
	static volatile int64_t x291 = -1LL;
	static uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = 456610;

	t72 = (x289<=((x290<x291)^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = 0;
	volatile int16_t x295 = 0;
	int16_t x296 = -1;
	volatile int32_t t73 = 80696183;

	t73 = (x293<=((x294<x295)^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	int64_t x298 = 2147589812889LL;
	int16_t x299 = -1;
	uint32_t x300 = 695398U;
	int32_t t74 = -245;

	t74 = (x297<=((x298<x299)^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	static uint16_t x303 = 23U;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = -128;

	t75 = (x301<=((x302<x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t76 = 219587033;

	t76 = (x305<=((x306<x307)^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -35549501784658431LL;
	static int8_t x310 = INT8_MIN;
	static volatile int32_t x311 = 204;
	int64_t x312 = -1LL;
	volatile int32_t t77 = -1022;

	t77 = (x309<=((x310<x311)^x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	static volatile int64_t x314 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	volatile uint32_t x316 = 21U;
	int32_t t78 = -1559114;

	t78 = (x313<=((x314<x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 4034U;
	int16_t x318 = -1;
	static volatile int32_t x319 = INT32_MIN;
	uint16_t x320 = 15U;

	t79 = (x317<=((x318<x319)^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 792U;
	static volatile int64_t x322 = -3932314LL;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t t80 = -7373325;

	t80 = (x321<=((x322<x323)^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 1986LLU;
	int16_t x326 = -1;
	int8_t x327 = -15;
	static int64_t x328 = INT64_MAX;
	int32_t t81 = -4;

	t81 = (x325<=((x326<x327)^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = 1;
	volatile uint16_t x330 = 0U;
	uint16_t x331 = 27U;
	int64_t x332 = 5955LL;
	int32_t t82 = -56525657;

	t82 = (x329<=((x330<x331)^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = 5;
	static uint64_t x336 = 2LLU;

	t83 = (x333<=((x334<x335)^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = -191299128;
	int8_t x339 = INT8_MAX;
	volatile int16_t x340 = INT16_MIN;
	volatile int32_t t84 = -5;

	t84 = (x337<=((x338<x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static uint16_t x342 = 1623U;
	int16_t x343 = -33;
	uint16_t x344 = UINT16_MAX;

	t85 = (x341<=((x342<x343)^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	static int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	static int8_t x348 = -54;
	volatile int32_t t86 = -8;

	t86 = (x345<=((x346<x347)^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	int16_t x350 = INT16_MIN;

	t87 = (x349<=((x350<x351)^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	volatile int16_t x354 = -65;
	int32_t x355 = -1;
	uint64_t x356 = 0LLU;
	static volatile int32_t t88 = 347691;

	t88 = (x353<=((x354<x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1273;
	static int64_t x358 = -125754435LL;
	int64_t x359 = INT64_MIN;
	volatile int32_t t89 = -5232990;

	t89 = (x357<=((x358<x359)^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	int8_t x363 = INT8_MAX;
	int8_t x364 = -1;

	t90 = (x361<=((x362<x363)^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x366 = UINT32_MAX;
	volatile int16_t x367 = INT16_MIN;
	static volatile int32_t t91 = -15944817;

	t91 = (x365<=((x366<x367)^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	uint32_t x370 = UINT32_MAX;
	volatile int8_t x371 = 1;
	uint16_t x372 = UINT16_MAX;

	t92 = (x369<=((x370<x371)^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = 1;
	int32_t x374 = INT32_MIN;
	uint32_t x376 = 437125397U;
	int32_t t93 = 2711693;

	t93 = (x373<=((x374<x375)^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	volatile uint16_t x378 = 2U;
	int64_t x379 = 33278957LL;
	int8_t x380 = -1;

	t94 = (x377<=((x378<x379)^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	volatile int16_t x382 = INT16_MIN;
	int16_t x384 = 0;

	t95 = (x381<=((x382<x383)^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	volatile int32_t x386 = INT32_MAX;
	int32_t x387 = -1;
	int16_t x388 = INT16_MIN;
	int32_t t96 = -1411062;

	t96 = (x385<=((x386<x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 1105U;
	int64_t x390 = 1129479186600356LL;
	uint8_t x391 = 3U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 6;

	t97 = (x389<=((x390<x391)^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	int64_t x394 = 5619655155816537LL;
	int8_t x396 = -1;

	t98 = (x393<=((x394<x395)^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -6;
	int16_t x398 = -11787;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = 22U;
	volatile int32_t t99 = 11696345;

	t99 = (x397<=((x398<x399)^x400));

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

