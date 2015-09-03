#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -1281440;
int8_t x14 = INT8_MIN;
static volatile uint32_t x15 = 1525521U;
static int16_t x25 = 15370;
int32_t x31 = INT32_MIN;
static int64_t x32 = -7094224944245LL;
volatile uint64_t x33 = 3770266LLU;
volatile int64_t x36 = INT64_MAX;
uint16_t x37 = UINT16_MAX;
uint32_t x40 = UINT32_MAX;
int32_t t9 = -1;
volatile int32_t t11 = 4893;
int32_t x49 = 1;
uint8_t x57 = 3U;
int32_t x58 = INT32_MIN;
int16_t x64 = INT16_MIN;
int32_t x65 = 215;
int32_t x66 = -98536;
int64_t x67 = -16533895LL;
int64_t x68 = -1LL;
volatile uint8_t x69 = UINT8_MAX;
static volatile int32_t t19 = -287717;
static int64_t x84 = INT64_MIN;
int16_t x87 = 1;
static int64_t x91 = INT64_MIN;
volatile int64_t x95 = -1LL;
static int32_t x103 = INT32_MIN;
int8_t x110 = INT8_MAX;
static volatile int64_t x117 = 146221167LL;
int16_t x122 = INT16_MIN;
uint16_t x123 = UINT16_MAX;
volatile int32_t t30 = 55393;
static uint8_t x129 = 7U;
int8_t x133 = INT8_MAX;
static int16_t x137 = -9361;
static int8_t x147 = -1;
volatile int64_t x149 = -1LL;
int64_t x150 = INT64_MIN;
int64_t x156 = INT64_MIN;
static int32_t t36 = -132024832;
int16_t x170 = INT16_MAX;
int32_t x171 = 28151856;
int32_t x177 = -1;
static int32_t x188 = INT32_MIN;
volatile uint32_t x195 = 776U;
volatile int32_t x198 = INT32_MAX;
volatile int32_t t47 = -4200647;
int32_t t49 = -143;
static volatile int64_t x209 = INT64_MIN;
uint64_t x210 = 2986820952LLU;
int8_t x214 = -1;
volatile int32_t t51 = 1;
volatile int8_t x226 = INT8_MIN;
static int64_t x230 = INT64_MIN;
int8_t x233 = -2;
volatile uint8_t x248 = UINT8_MAX;
static uint8_t x250 = 30U;
uint16_t x256 = UINT16_MAX;
int64_t x257 = INT64_MIN;
uint16_t x261 = UINT16_MAX;
int64_t x263 = -121051020398535LL;
int32_t x277 = INT32_MIN;
uint8_t x291 = UINT8_MAX;
int32_t t69 = -60896010;
static int16_t x293 = INT16_MAX;
uint16_t x303 = 1398U;
int32_t t72 = -45;
int8_t x320 = INT8_MIN;
volatile uint8_t x328 = 31U;
uint64_t x329 = 43334852LLU;
static uint64_t x338 = UINT64_MAX;
uint16_t x341 = 1389U;
uint16_t x348 = UINT16_MAX;
int32_t x349 = 28;
int32_t x351 = -754603617;
int64_t x352 = -1LL;
static int32_t t84 = -882090084;
uint64_t x360 = UINT64_MAX;
int64_t x364 = INT64_MIN;
static volatile int32_t x365 = 47144;
int32_t t87 = -37970919;
static int16_t x372 = -1;
int32_t t88 = -802110;
int32_t x382 = 578068373;
uint64_t x386 = UINT64_MAX;
volatile uint16_t x390 = UINT16_MAX;
int8_t x392 = INT8_MIN;
static int32_t x393 = INT32_MAX;
volatile int32_t t94 = -695640;
int8_t x404 = 30;
int32_t t96 = 2127955;
int64_t x407 = -1LL;
int16_t x409 = 5501;
int8_t x412 = INT8_MIN;
int16_t x414 = INT16_MIN;
int64_t x416 = -121LL;


void f0(void) {
	int8_t x1 = 1;
	uint16_t x2 = UINT16_MAX;
	int16_t x3 = -18;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = 67;

	t0 = (((x1<x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint8_t x6 = UINT8_MAX;
	volatile int16_t x7 = INT16_MAX;
	int8_t x8 = INT8_MAX;

	t1 = (((x5<x6)+x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 2U;
	int64_t x10 = -6LL;
	volatile uint8_t x11 = UINT8_MAX;
	static int16_t x12 = INT16_MAX;
	int32_t t2 = 2808;

	t2 = (((x9<x10)+x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	volatile int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = 0;

	t3 = (((x13<x14)+x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static int8_t x18 = -1;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MAX;
	static volatile int32_t t4 = -7604248;

	t4 = (((x17<x18)+x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	uint64_t x22 = 2624150642734085LLU;
	static int16_t x23 = INT16_MIN;
	int16_t x24 = -7;
	int32_t t5 = -77;

	t5 = (((x21<x22)+x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = -1;
	volatile int16_t x27 = INT16_MAX;
	int64_t x28 = -1LL;
	int32_t t6 = -19;

	t6 = (((x25<x26)+x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = INT32_MAX;
	volatile int32_t t7 = -1013;

	t7 = (((x29<x30)+x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 1456U;
	int8_t x35 = INT8_MIN;
	static int32_t t8 = 13410;

	t8 = (((x33<x34)+x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MAX;

	t9 = (((x37<x38)+x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -6;
	volatile int64_t x42 = -387935277159LL;
	uint32_t x43 = 197290352U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -114686731;

	t10 = (((x41<x42)+x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MIN;
	static int64_t x47 = INT64_MIN;
	int64_t x48 = -136001502592LL;

	t11 = (((x45<x46)+x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = UINT8_MAX;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = UINT8_MAX;
	static int32_t t12 = -150;

	t12 = (((x49<x50)+x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -208199370123521011LL;
	static volatile int32_t x54 = INT32_MIN;
	int32_t x55 = -1;
	int32_t x56 = -1;
	volatile int32_t t13 = -1515;

	t13 = (((x53<x54)+x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x59 = INT16_MIN;
	volatile int32_t x60 = INT32_MIN;
	int32_t t14 = -35083487;

	t14 = (((x57<x58)+x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 5U;
	uint32_t x62 = 6U;
	int16_t x63 = INT16_MAX;
	int32_t t15 = -440085;

	t15 = (((x61<x62)+x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t t16 = -152;

	t16 = (((x65<x66)+x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	volatile uint64_t x71 = 1910944190LLU;
	int32_t x72 = -1;
	volatile int32_t t17 = -182;

	t17 = (((x69<x70)+x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 12778151LLU;
	uint32_t x74 = 10U;
	static uint64_t x75 = 14359148LLU;
	volatile uint32_t x76 = 11442619U;
	volatile int32_t t18 = -45483;

	t18 = (((x73<x74)+x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	volatile int8_t x79 = 42;
	uint16_t x80 = UINT16_MAX;

	t19 = (((x77<x78)+x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	uint32_t x82 = 6646U;
	uint32_t x83 = 41341253U;
	static int32_t t20 = -30;

	t20 = (((x81<x82)+x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	static int32_t t21 = 3;

	t21 = (((x85<x86)+x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	static int8_t x90 = INT8_MIN;
	volatile uint16_t x92 = 255U;
	volatile int32_t t22 = 13;

	t22 = (((x89<x90)+x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = INT32_MAX;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 1;

	t23 = (((x93<x94)+x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 1530144098654857102LLU;
	int64_t x98 = 6012261678110524LL;
	int64_t x99 = INT64_MAX;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -2446;

	t24 = (((x97<x98)+x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 25608U;
	int64_t x102 = INT64_MAX;
	volatile uint32_t x104 = 4229948U;
	volatile int32_t t25 = 389;

	t25 = (((x101<x102)+x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x105 = 2;
	volatile int8_t x106 = INT8_MIN;
	volatile int32_t x107 = 31149;
	int32_t x108 = INT32_MAX;
	int32_t t26 = -364662;

	t26 = (((x105<x106)+x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -199317603LL;
	int32_t x111 = INT32_MIN;
	int16_t x112 = 39;
	volatile int32_t t27 = 105214970;

	t27 = (((x109<x110)+x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = -1;
	volatile uint8_t x119 = 12U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t28 = -807093;

	t28 = (((x117<x118)+x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = -1;
	int64_t x124 = -938LL;
	volatile int32_t t29 = 760850;

	t29 = (((x121<x122)+x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -379362061088723965LL;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MAX;

	t30 = (((x125<x126)+x127)==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = INT8_MIN;
	uint16_t x131 = 5U;
	int8_t x132 = INT8_MAX;
	volatile int32_t t31 = -817;

	t31 = (((x129<x130)+x131)==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = INT32_MAX;
	volatile int8_t x135 = 1;
	volatile int8_t x136 = -1;
	static volatile int32_t t32 = 3157;

	t32 = (((x133<x134)+x135)==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x138 = 3;
	static int32_t x139 = INT32_MIN;
	uint64_t x140 = 1575371570LLU;
	volatile int32_t t33 = -521626553;

	t33 = (((x137<x138)+x139)==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = 93807769102134836LLU;
	int64_t x146 = 86475LL;
	static volatile int32_t x148 = 3685245;
	int32_t t34 = -3533;

	t34 = (((x145<x146)+x147)==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x151 = 0;
	int16_t x152 = -1;
	int32_t t35 = 148;

	t35 = (((x149<x150)+x151)==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = UINT64_MAX;
	uint32_t x154 = 11U;
	volatile int32_t x155 = INT32_MIN;

	t36 = (((x153<x154)+x155)==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -1;
	int16_t x158 = 6282;
	static int8_t x159 = 4;
	volatile int16_t x160 = INT16_MIN;
	int32_t t37 = 434;

	t37 = (((x157<x158)+x159)==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = -1;
	int16_t x162 = INT16_MIN;
	int16_t x163 = -1;
	int64_t x164 = -404933897863229LL;
	volatile int32_t t38 = 3167;

	t38 = (((x161<x162)+x163)==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = INT32_MIN;
	volatile int16_t x166 = INT16_MIN;
	int8_t x167 = -1;
	static volatile int64_t x168 = INT64_MIN;
	static int32_t t39 = 1;

	t39 = (((x165<x166)+x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = INT64_MIN;
	volatile int32_t x172 = INT32_MIN;
	int32_t t40 = -249;

	t40 = (((x169<x170)+x171)==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x173 = INT32_MIN;
	int8_t x174 = -6;
	uint32_t x175 = 47825U;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t41 = -4;

	t41 = (((x173<x174)+x175)==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x178 = 816152776489456383LLU;
	static int64_t x179 = INT64_MIN;
	uint64_t x180 = 61609805246LLU;
	int32_t t42 = -1;

	t42 = (((x177<x178)+x179)==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = 12;
	int16_t x183 = -1;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t43 = -627059005;

	t43 = (((x181<x182)+x183)==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = -1;
	static int16_t x186 = -13;
	int64_t x187 = INT64_MIN;
	static int32_t t44 = -846005;

	t44 = (((x185<x186)+x187)==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x189 = -1;
	static uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MAX;
	volatile uint64_t x192 = 19087210092427108LLU;
	int32_t t45 = 8634;

	t45 = (((x189<x190)+x191)==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -1;
	static int8_t x194 = 49;
	static int64_t x196 = INT64_MIN;
	int32_t t46 = -1887;

	t46 = (((x193<x194)+x195)==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x197 = 3991291431LLU;
	static int16_t x199 = INT16_MIN;
	static volatile uint16_t x200 = 18006U;

	t47 = (((x197<x198)+x199)==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = INT16_MIN;
	uint16_t x202 = 10U;
	int16_t x203 = INT16_MIN;
	uint8_t x204 = UINT8_MAX;
	static int32_t t48 = 48486908;

	t48 = (((x201<x202)+x203)==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -56022054LL;
	int32_t x206 = -160;
	int64_t x207 = -95LL;
	volatile uint64_t x208 = UINT64_MAX;

	t49 = (((x205<x206)+x207)==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x211 = INT16_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t50 = -42;

	t50 = (((x209<x210)+x211)==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = 30;
	int32_t x215 = INT32_MIN;
	static uint32_t x216 = 5417264U;

	t51 = (((x213<x214)+x215)==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 59745001083LLU;
	uint16_t x218 = 6520U;
	int32_t x219 = -4641;
	int32_t x220 = -114423371;
	volatile int32_t t52 = -220;

	t52 = (((x217<x218)+x219)==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x221 = 366199;
	int32_t x222 = -1;
	volatile int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MAX;
	volatile int32_t t53 = 2006;

	t53 = (((x221<x222)+x223)==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	int32_t x227 = -1;
	int64_t x228 = INT64_MIN;
	volatile int32_t t54 = 66;

	t54 = (((x225<x226)+x227)==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	int64_t x231 = 197583371381287LL;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t55 = 103915;

	t55 = (((x229<x230)+x231)==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x234 = INT64_MIN;
	int32_t x235 = -1;
	static volatile int32_t x236 = INT32_MIN;
	int32_t t56 = 461558448;

	t56 = (((x233<x234)+x235)==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x237 = INT64_MIN;
	int64_t x238 = -1LL;
	static volatile uint8_t x239 = 0U;
	static volatile int8_t x240 = 7;
	int32_t t57 = -446248;

	t57 = (((x237<x238)+x239)==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = 898640934LL;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = 1;
	uint32_t x244 = 33U;
	static int32_t t58 = -905730022;

	t58 = (((x241<x242)+x243)==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MAX;
	uint16_t x246 = 6U;
	uint32_t x247 = 2359U;
	static int32_t t59 = 811;

	t59 = (((x245<x246)+x247)==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -231;
	static int16_t x251 = 52;
	int32_t x252 = INT32_MIN;
	volatile int32_t t60 = 1278;

	t60 = (((x249<x250)+x251)==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = 36219459643278LL;
	static int8_t x255 = 1;
	int32_t t61 = -11294;

	t61 = (((x253<x254)+x255)==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x258 = INT8_MIN;
	int8_t x259 = 1;
	int32_t x260 = INT32_MIN;
	static int32_t t62 = 28;

	t62 = (((x257<x258)+x259)==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x262 = 6;
	static int16_t x264 = -1;
	int32_t t63 = 8152;

	t63 = (((x261<x262)+x263)==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x265 = INT64_MAX;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t64 = 565;

	t64 = (((x265<x266)+x267)==x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MAX;
	uint8_t x275 = UINT8_MAX;
	volatile int16_t x276 = INT16_MAX;
	volatile int32_t t65 = -605828701;

	t65 = (((x273<x274)+x275)==x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x278 = INT64_MIN;
	volatile uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t66 = 5949;

	t66 = (((x277<x278)+x279)==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -1;
	int64_t x282 = INT64_MAX;
	int8_t x283 = 19;
	int32_t x284 = INT32_MAX;
	volatile int32_t t67 = -459002550;

	t67 = (((x281<x282)+x283)==x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x285 = 21U;
	int16_t x286 = -45;
	static uint8_t x287 = 91U;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t68 = -375573;

	t68 = (((x285<x286)+x287)==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 20U;
	int32_t x290 = 4070;
	int16_t x292 = INT16_MAX;

	t69 = (((x289<x290)+x291)==x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x294 = INT8_MIN;
	static int16_t x295 = INT16_MIN;
	uint32_t x296 = 25U;
	volatile int32_t t70 = -27362733;

	t70 = (((x293<x294)+x295)==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x301 = INT16_MIN;
	volatile uint32_t x302 = 63679U;
	int8_t x304 = INT8_MIN;
	int32_t t71 = -143;

	t71 = (((x301<x302)+x303)==x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = 177;
	uint64_t x306 = 252022LLU;
	volatile int64_t x307 = -54753939410281562LL;
	uint8_t x308 = 124U;

	t72 = (((x305<x306)+x307)==x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x309 = -5LL;
	volatile uint32_t x310 = 0U;
	volatile int16_t x311 = -47;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t73 = 380;

	t73 = (((x309<x310)+x311)==x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = 247794944432LLU;
	int8_t x314 = -8;
	static int16_t x315 = INT16_MAX;
	uint8_t x316 = 0U;
	volatile int32_t t74 = -236076;

	t74 = (((x313<x314)+x315)==x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = -2073911040053407LL;
	static volatile int32_t t75 = -154;

	t75 = (((x317<x318)+x319)==x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = 4;
	static uint32_t x322 = UINT32_MAX;
	uint64_t x323 = 12LLU;
	int8_t x324 = INT8_MAX;
	volatile int32_t t76 = -9180;

	t76 = (((x321<x322)+x323)==x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -5089746650884LL;
	static uint8_t x326 = 7U;
	int64_t x327 = 1139326566LL;
	int32_t t77 = 1;

	t77 = (((x325<x326)+x327)==x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x330 = 76U;
	int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MAX;
	static volatile int32_t t78 = 872914;

	t78 = (((x329<x330)+x331)==x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x333 = 50254141;
	int8_t x334 = INT8_MAX;
	volatile int8_t x335 = INT8_MIN;
	int8_t x336 = 7;
	volatile int32_t t79 = 646326433;

	t79 = (((x333<x334)+x335)==x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x337 = INT64_MIN;
	int32_t x339 = 19;
	int8_t x340 = INT8_MAX;
	volatile int32_t t80 = -73;

	t80 = (((x337<x338)+x339)==x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x342 = -1;
	int8_t x343 = -1;
	static volatile int8_t x344 = INT8_MIN;
	int32_t t81 = -1;

	t81 = (((x341<x342)+x343)==x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 5995U;
	static int32_t x346 = -1;
	volatile int16_t x347 = INT16_MAX;
	static volatile int32_t t82 = 28873;

	t82 = (((x345<x346)+x347)==x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x350 = 1039746577676680LLU;
	int32_t t83 = 2550687;

	t83 = (((x349<x350)+x351)==x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MIN;

	t84 = (((x353<x354)+x355)==x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MAX;
	uint8_t x358 = 8U;
	int64_t x359 = INT64_MIN;
	int32_t t85 = -259911391;

	t85 = (((x357<x358)+x359)==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = INT8_MIN;
	int64_t x363 = -54LL;
	int32_t t86 = -507263203;

	t86 = (((x361<x362)+x363)==x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x366 = -1;
	int64_t x367 = INT64_MIN;
	volatile uint64_t x368 = UINT64_MAX;

	t87 = (((x365<x366)+x367)==x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x369 = 3U;
	int32_t x370 = INT32_MAX;
	uint8_t x371 = 0U;

	t88 = (((x369<x370)+x371)==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = -1;
	static int8_t x374 = 1;
	uint16_t x375 = 252U;
	int16_t x376 = -1;
	volatile int32_t t89 = 2455;

	t89 = (((x373<x374)+x375)==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x377 = -7;
	uint16_t x378 = 4U;
	static int32_t x379 = INT32_MIN;
	int8_t x380 = -9;
	volatile int32_t t90 = -10775;

	t90 = (((x377<x378)+x379)==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x381 = UINT8_MAX;
	int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	volatile int32_t t91 = 3619;

	t91 = (((x381<x382)+x383)==x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = -1LL;
	int64_t x387 = INT64_MIN;
	int32_t x388 = -1;
	int32_t t92 = 127;

	t92 = (((x385<x386)+x387)==x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x389 = -394;
	int16_t x391 = INT16_MIN;
	volatile int32_t t93 = -624851583;

	t93 = (((x389<x390)+x391)==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x394 = -1;
	int64_t x395 = -251442759988416199LL;
	uint64_t x396 = 1LLU;

	t94 = (((x393<x394)+x395)==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x397 = -2;
	static uint8_t x398 = UINT8_MAX;
	uint32_t x399 = 0U;
	int32_t x400 = 121088131;
	int32_t t95 = 1015110;

	t95 = (((x397<x398)+x399)==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x401 = 1U;
	static uint16_t x402 = UINT16_MAX;
	static int32_t x403 = 518173932;

	t96 = (((x401<x402)+x403)==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x405 = INT64_MAX;
	int64_t x406 = INT64_MAX;
	uint8_t x408 = UINT8_MAX;
	int32_t t97 = -717716;

	t97 = (((x405<x406)+x407)==x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x410 = 62U;
	int8_t x411 = INT8_MIN;
	volatile int32_t t98 = -3184636;

	t98 = (((x409<x410)+x411)==x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = UINT8_MAX;
	uint64_t x415 = UINT64_MAX;
	volatile int32_t t99 = 765576957;

	t99 = (((x413<x414)+x415)==x416);

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

