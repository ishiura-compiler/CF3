#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static int8_t x3 = -1;
int32_t x5 = -1;
static volatile int64_t t1 = 27666459080514LL;
int32_t x11 = INT32_MIN;
int64_t x12 = -1LL;
uint16_t x19 = UINT16_MAX;
int32_t t4 = -1024984;
int32_t x21 = INT32_MIN;
int32_t t6 = -507;
int32_t x29 = INT32_MIN;
static int32_t t8 = INT32_MIN;
volatile int32_t t9 = 51;
uint32_t x41 = 1646219U;
int32_t x42 = 859826;
int8_t x44 = 45;
uint32_t x46 = UINT32_MAX;
volatile int8_t x48 = INT8_MIN;
uint32_t x50 = 121U;
volatile int32_t t12 = 4202;
uint32_t x55 = UINT32_MAX;
uint16_t x57 = UINT16_MAX;
int64_t x63 = -8588976778LL;
static int64_t t16 = 127361LL;
uint32_t x69 = 1460960537U;
static uint16_t x71 = 852U;
uint64_t t17 = 994LLU;
int32_t x74 = INT32_MIN;
static int16_t x76 = -1;
uint64_t x81 = UINT64_MAX;
int32_t x95 = INT32_MIN;
int64_t x99 = 2482136086229619681LL;
static int8_t x104 = INT8_MIN;
static int64_t x109 = -1LL;
volatile uint8_t x118 = UINT8_MAX;
int32_t x120 = INT32_MIN;
volatile uint64_t x130 = UINT64_MAX;
volatile uint32_t x131 = 3U;
volatile int32_t x133 = 42;
volatile int32_t t34 = 17737355;
static uint8_t x147 = UINT8_MAX;
static uint32_t x153 = 903U;
int32_t x154 = INT32_MIN;
static volatile uint64_t t40 = UINT64_MAX;
uint64_t t41 = 805LLU;
static int32_t x170 = -1;
int32_t t42 = 12713407;
int32_t x175 = -2950;
static uint64_t x177 = 90506925172455017LLU;
int32_t x179 = INT32_MAX;
volatile int32_t t44 = -988940348;
static int16_t x187 = 0;
static uint16_t x188 = 204U;
volatile uint64_t x191 = 79358097LLU;
static uint64_t x202 = 101781614LLU;
int32_t x203 = INT32_MIN;
uint8_t x206 = 21U;
static uint32_t x212 = 1470U;
static uint32_t t52 = 6874186U;
static int64_t t54 = 3307743423474501610LL;
static uint64_t x234 = UINT64_MAX;
uint32_t t61 = 7912U;
int64_t x249 = INT64_MAX;
uint8_t x250 = UINT8_MAX;
int64_t x254 = -1LL;
static int16_t x258 = 119;
volatile int16_t x262 = -1;
int32_t x264 = -1;
uint16_t x268 = 144U;
volatile int32_t t67 = -2643910;
int32_t x274 = INT32_MIN;
static uint64_t t68 = 755778LLU;
int16_t x279 = -6;
int64_t x281 = -1LL;
uint8_t x284 = 58U;
static int32_t x287 = -1;
volatile int8_t x294 = 1;
static uint64_t x297 = 67LLU;
volatile int64_t x299 = INT64_MIN;
uint64_t x304 = UINT64_MAX;
int8_t x312 = INT8_MIN;
int16_t x319 = INT16_MIN;
volatile uint16_t x323 = 986U;
int16_t x324 = 13913;
volatile int64_t x326 = 219851712LL;
static uint8_t x332 = 61U;
volatile int32_t t82 = -3437;
volatile int32_t x335 = INT32_MAX;
uint32_t x336 = 3095U;
uint32_t t83 = 27931674U;
uint32_t x345 = 635U;
volatile uint16_t x347 = UINT16_MAX;
volatile int64_t x349 = INT64_MIN;
int16_t x350 = -468;
uint64_t t88 = 48414260LLU;
static int16_t x359 = INT16_MIN;
int16_t x364 = INT16_MIN;
volatile int64_t x368 = 1371LL;
static int64_t x371 = INT64_MIN;
static volatile int32_t t92 = -1022199906;
static volatile int32_t x375 = -1;
int32_t t94 = -14;
uint8_t x381 = 3U;
uint8_t x385 = UINT8_MAX;
uint64_t x388 = 96083490087278059LLU;
uint8_t x389 = 12U;
static int64_t x391 = INT64_MAX;
uint32_t t97 = 62034U;
static int16_t x395 = INT16_MIN;
static int32_t x398 = -6182414;
int32_t x400 = INT32_MIN;


void f0(void) {
	volatile uint32_t x2 = 6447U;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -42358769;

	t0 = (((x1<=x2)<x3)|x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = 15U;
	int32_t x7 = INT32_MAX;
	int64_t x8 = 128286LL;

	t1 = (((x5<=x6)<x7)|x8);

	if (t1 != 128287LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x10 = 993901421410LLU;
	volatile int64_t t2 = 31LL;

	t2 = (((x9<=x10)<x11)|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 0;
	uint64_t x14 = 152510LLU;
	uint16_t x15 = 8111U;
	volatile int32_t x16 = -1;
	int32_t t3 = -6;

	t3 = (((x13<=x14)<x15)|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -48;
	static uint16_t x18 = UINT16_MAX;
	static int32_t x20 = 253;

	t4 = (((x17<=x18)<x19)|x20);

	if (t4 != 253) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x22 = INT8_MAX;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = 695305;

	t5 = (((x21<=x22)<x23)|x24);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -2644;
	int64_t x26 = INT64_MAX;
	static uint16_t x27 = 103U;
	volatile uint16_t x28 = 15957U;

	t6 = (((x25<=x26)<x27)|x28);

	if (t6 != 15957) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 6945U;
	uint32_t x31 = 12U;
	uint8_t x32 = UINT8_MAX;
	static int32_t t7 = 4911;

	t7 = (((x29<=x30)<x31)|x32);

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 108U;
	uint16_t x34 = 1270U;
	int32_t x35 = -1;
	int32_t x36 = INT32_MIN;

	t8 = (((x33<=x34)<x35)|x36);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	uint8_t x38 = 0U;
	static volatile int32_t x39 = INT32_MAX;
	static int8_t x40 = INT8_MIN;

	t9 = (((x37<=x38)<x39)|x40);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = 1902LL;
	int32_t t10 = -31938;

	t10 = (((x41<=x42)<x43)|x44);

	if (t10 != 45) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 38U;
	uint32_t x47 = 1210645U;
	int32_t t11 = 164968196;

	t11 = (((x45<=x46)<x47)|x48);

	if (t11 != -127) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x51 = INT8_MAX;
	int8_t x52 = -1;

	t12 = (((x49<=x50)<x51)|x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -84;
	int64_t x54 = INT64_MAX;
	int8_t x56 = -62;
	int32_t t13 = -2304526;

	t13 = (((x53<=x54)<x55)|x56);

	if (t13 != -61) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MAX;
	volatile uint16_t x60 = 2U;
	static int32_t t14 = 128303335;

	t14 = (((x57<=x58)<x59)|x60);

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x61 = 48U;
	uint8_t x62 = 44U;
	static volatile int32_t x64 = -1;
	int32_t t15 = 64410;

	t15 = (((x61<=x62)<x63)|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	static int16_t x66 = INT16_MAX;
	static uint32_t x67 = UINT32_MAX;
	static int64_t x68 = -1LL;

	t16 = (((x65<=x66)<x67)|x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -1;
	uint64_t x72 = 4506708074369296176LLU;

	t17 = (((x69<=x70)<x71)|x72);

	if (t17 != 4506708074369296177LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -12;
	int64_t x75 = -187544LL;
	static int32_t t18 = 634558149;

	t18 = (((x73<=x74)<x75)|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	uint16_t x78 = 6915U;
	int32_t x79 = INT32_MIN;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

	t19 = (((x77<=x78)<x79)|x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	int8_t x83 = -1;
	volatile uint8_t x84 = 43U;
	int32_t t20 = -337326;

	t20 = (((x81<=x82)<x83)|x84);

	if (t20 != 43) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -7501;
	static int32_t x86 = -47;
	volatile int32_t x87 = INT32_MIN;
	static int32_t x88 = 598;
	static volatile int32_t t21 = -410217;

	t21 = (((x85<=x86)<x87)|x88);

	if (t21 != 598) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int64_t x90 = -1LL;
	uint8_t x91 = 28U;
	static volatile uint32_t x92 = 63722U;
	uint32_t t22 = 305336U;

	t22 = (((x89<=x90)<x91)|x92);

	if (t22 != 63723U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int32_t x94 = -1;
	static volatile uint16_t x96 = UINT16_MAX;
	int32_t t23 = -614;

	t23 = (((x93<=x94)<x95)|x96);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 81U;
	static int8_t x98 = -1;
	int8_t x100 = 15;
	int32_t t24 = -37620120;

	t24 = (((x97<=x98)<x99)|x100);

	if (t24 != 15) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int16_t x102 = -1922;
	uint16_t x103 = 300U;
	int32_t t25 = 10710;

	t25 = (((x101<=x102)<x103)|x104);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 625283114U;
	uint64_t x107 = 86351443950111467LLU;
	static uint8_t x108 = 0U;
	int32_t t26 = 13421518;

	t26 = (((x105<=x106)<x107)|x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x110 = 921168219563578LLU;
	int32_t x111 = 14873;
	uint8_t x112 = 7U;
	volatile int32_t t27 = -1;

	t27 = (((x109<=x110)<x111)|x112);

	if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	static int64_t x115 = -4655LL;
	int8_t x116 = INT8_MAX;
	volatile int32_t t28 = -2537;

	t28 = (((x113<=x114)<x115)|x116);

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	uint8_t x119 = 1U;
	int32_t t29 = INT32_MIN;

	t29 = (((x117<=x118)<x119)|x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -6228;
	int16_t x122 = -1;
	int16_t x123 = -1935;
	uint16_t x124 = 3489U;
	volatile int32_t t30 = -187038090;

	t30 = (((x121<=x122)<x123)|x124);

	if (t30 != 3489) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 0U;
	static int64_t x126 = INT64_MIN;
	uint64_t x127 = 105118153LLU;
	volatile uint8_t x128 = 38U;
	volatile int32_t t31 = 44;

	t31 = (((x125<=x126)<x127)|x128);

	if (t31 != 39) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 53;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (((x129<=x130)<x131)|x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MIN;
	int64_t x135 = INT64_MAX;
	volatile int8_t x136 = 40;
	int32_t t33 = 31465;

	t33 = (((x133<=x134)<x135)|x136);

	if (t33 != 41) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 10U;
	volatile uint32_t x138 = UINT32_MAX;
	volatile int8_t x139 = -1;
	uint8_t x140 = 2U;

	t34 = (((x137<=x138)<x139)|x140);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static uint16_t x142 = 3U;
	int32_t x143 = 1265735;
	int8_t x144 = 6;
	volatile int32_t t35 = -14227037;

	t35 = (((x141<=x142)<x143)|x144);

	if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MIN;
	uint16_t x146 = 16825U;
	int64_t x148 = INT64_MAX;
	volatile int64_t t36 = INT64_MAX;

	t36 = (((x145<=x146)<x147)|x148);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = -1LL;
	int32_t x150 = INT32_MIN;
	int8_t x151 = 0;
	int32_t x152 = -1;
	int32_t t37 = -164723742;

	t37 = (((x149<=x150)<x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x155 = 2794;
	volatile int64_t x156 = -1LL;
	int64_t t38 = 5882697LL;

	t38 = (((x153<=x154)<x155)|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	static int16_t x158 = -71;
	uint16_t x159 = 31141U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 1;

	t39 = (((x157<=x158)<x159)|x160);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 1U;
	volatile int32_t x162 = 298185;
	int16_t x163 = INT16_MAX;
	uint64_t x164 = UINT64_MAX;

	t40 = (((x161<=x162)<x163)|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = UINT32_MAX;
	int64_t x166 = -1LL;
	static uint16_t x167 = 7397U;
	uint64_t x168 = 206840LLU;

	t41 = (((x165<=x166)<x167)|x168);

	if (t41 != 206841LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = UINT64_MAX;
	volatile int32_t x171 = -1;
	int32_t x172 = 498;

	t42 = (((x169<=x170)<x171)|x172);

	if (t42 != 498) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = 173440U;
	uint8_t x176 = 1U;
	static volatile int32_t t43 = 1;

	t43 = (((x173<=x174)<x175)|x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x178 = -28188857LL;
	uint16_t x180 = UINT16_MAX;

	t44 = (((x177<=x178)<x179)|x180);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	uint32_t x182 = 5329U;
	int8_t x183 = INT8_MIN;
	int16_t x184 = -20;
	int32_t t45 = -266;

	t45 = (((x181<=x182)<x183)|x184);

	if (t45 != -20) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 991689335508LLU;
	int16_t x186 = INT16_MIN;
	volatile int32_t t46 = 17883;

	t46 = (((x185<=x186)<x187)|x188);

	if (t46 != 204) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 1U;
	int64_t x190 = -488LL;
	volatile uint64_t x192 = 989949801193306LLU;
	volatile uint64_t t47 = 11LLU;

	t47 = (((x189<=x190)<x191)|x192);

	if (t47 != 989949801193307LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 301LLU;
	uint64_t t48 = 60659164LLU;

	t48 = (((x193<=x194)<x195)|x196);

	if (t48 != 301LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	static int8_t x198 = -1;
	volatile int32_t x199 = 1;
	int32_t x200 = -1;
	int32_t t49 = 30;

	t49 = (((x197<=x198)<x199)|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x201 = 32632797U;
	uint16_t x204 = UINT16_MAX;
	int32_t t50 = -24248793;

	t50 = (((x201<=x202)<x203)|x204);

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 7;
	int64_t x207 = -1LL;
	int32_t x208 = -306177;
	int32_t t51 = -9868534;

	t51 = (((x205<=x206)<x207)|x208);

	if (t51 != -306177) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 22U;
	int8_t x210 = 3;
	int32_t x211 = 16814918;

	t52 = (((x209<=x210)<x211)|x212);

	if (t52 != 1471U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = UINT16_MAX;
	int32_t x214 = 26641133;
	int16_t x215 = INT16_MIN;
	volatile int16_t x216 = 676;
	int32_t t53 = -1025644785;

	t53 = (((x213<=x214)<x215)|x216);

	if (t53 != 676) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	int16_t x218 = 14690;
	int16_t x219 = INT16_MIN;
	static int64_t x220 = -4394661978996LL;

	t54 = (((x217<=x218)<x219)|x220);

	if (t54 != -4394661978996LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 23809U;
	int32_t x222 = 447;
	int64_t x223 = -1LL;
	uint64_t x224 = 2LLU;
	volatile uint64_t t55 = 138127023LLU;

	t55 = (((x221<=x222)<x223)|x224);

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = UINT8_MAX;
	int8_t x226 = 11;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 617;

	t56 = (((x225<=x226)<x227)|x228);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int64_t x230 = -1LL;
	int64_t x231 = INT64_MIN;
	volatile uint16_t x232 = UINT16_MAX;
	static int32_t t57 = -1;

	t57 = (((x229<=x230)<x231)|x232);

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 181U;
	uint16_t x235 = 8899U;
	static volatile uint8_t x236 = 0U;
	int32_t t58 = 7542627;

	t58 = (((x233<=x234)<x235)|x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 1LL;
	int64_t x238 = INT64_MIN;
	int32_t x239 = -1;
	int8_t x240 = -25;
	int32_t t59 = -8;

	t59 = (((x237<=x238)<x239)|x240);

	if (t59 != -25) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -30;
	volatile int64_t x242 = INT64_MIN;
	uint16_t x243 = UINT16_MAX;
	int32_t x244 = 646522187;
	static int32_t t60 = -30;

	t60 = (((x241<=x242)<x243)|x244);

	if (t60 != 646522187) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	int8_t x247 = INT8_MIN;
	volatile uint32_t x248 = 1U;

	t61 = (((x245<=x246)<x247)|x248);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x251 = -1;
	int64_t x252 = INT64_MIN;
	volatile int64_t t62 = INT64_MIN;

	t62 = (((x249<=x250)<x251)|x252);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int64_t x255 = 14739902707615LL;
	uint32_t x256 = 861930581U;
	static uint32_t t63 = 572537U;

	t63 = (((x253<=x254)<x255)|x256);

	if (t63 != 861930581U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int16_t x259 = 3118;
	int64_t x260 = INT64_MIN;
	static volatile int64_t t64 = 50892LL;

	t64 = (((x257<=x258)<x259)|x260);

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = UINT32_MAX;
	int32_t x263 = INT32_MAX;
	static int32_t t65 = -35603980;

	t65 = (((x261<=x262)<x263)|x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MAX;
	int8_t x267 = -26;
	int32_t t66 = 100748;

	t66 = (((x265<=x266)<x267)|x268);

	if (t66 != 144) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = INT16_MIN;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MAX;
	int16_t x272 = -1;

	t67 = (((x269<=x270)<x271)|x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	volatile int32_t x275 = INT32_MAX;
	uint64_t x276 = 125133LLU;

	t68 = (((x273<=x274)<x275)|x276);

	if (t68 != 125133LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = 1752LL;
	uint64_t x280 = 43519367088LLU;
	volatile uint64_t t69 = 14582261697285519LLU;

	t69 = (((x277<=x278)<x279)|x280);

	if (t69 != 43519367088LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x282 = -1309LL;
	static int64_t x283 = INT64_MIN;
	int32_t t70 = -240730;

	t70 = (((x281<=x282)<x283)|x284);

	if (t70 != 58) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	static int64_t x286 = INT64_MIN;
	int32_t x288 = -1;
	int32_t t71 = 1364;

	t71 = (((x285<=x286)<x287)|x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1100LL;
	static volatile int16_t x290 = -1;
	int8_t x291 = 1;
	int64_t x292 = -567217152767566760LL;
	int64_t t72 = -2415753LL;

	t72 = (((x289<=x290)<x291)|x292);

	if (t72 != -567217152767566760LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 194136LLU;
	static volatile uint32_t x295 = UINT32_MAX;
	static int64_t x296 = -1LL;
	int64_t t73 = 38577859697101219LL;

	t73 = (((x293<=x294)<x295)|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MAX;
	volatile uint32_t x300 = 18U;
	uint32_t t74 = 31U;

	t74 = (((x297<=x298)<x299)|x300);

	if (t74 != 18U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	uint32_t x302 = 3U;
	volatile uint16_t x303 = 1129U;
	static volatile uint64_t t75 = UINT64_MAX;

	t75 = (((x301<=x302)<x303)|x304);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = 47U;
	volatile int32_t x306 = -7993177;
	static uint32_t x307 = 4399U;
	uint64_t x308 = UINT64_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (((x305<=x306)<x307)|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	int16_t x310 = 6902;
	static int32_t x311 = INT32_MAX;
	int32_t t77 = 192141130;

	t77 = (((x309<=x310)<x311)|x312);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	int64_t x314 = INT64_MIN;
	volatile int8_t x315 = 1;
	static int64_t x316 = INT64_MIN;
	static volatile int64_t t78 = 11455944LL;

	t78 = (((x313<=x314)<x315)|x316);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 4163895LLU;
	int32_t x318 = INT32_MIN;
	int8_t x320 = INT8_MAX;
	static int32_t t79 = 54;

	t79 = (((x317<=x318)<x319)|x320);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MAX;
	int64_t x322 = -1LL;
	volatile int32_t t80 = -228463103;

	t80 = (((x321<=x322)<x323)|x324);

	if (t80 != 13913) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -140;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -48;

	t81 = (((x325<=x326)<x327)|x328);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 14921230U;
	uint32_t x330 = 1621335309U;
	uint64_t x331 = UINT64_MAX;

	t82 = (((x329<=x330)<x331)|x332);

	if (t82 != 61) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = 101266142994763LLU;
	static int8_t x334 = INT8_MIN;

	t83 = (((x333<=x334)<x335)|x336);

	if (t83 != 3095U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	static uint32_t x340 = UINT32_MAX;
	static uint32_t t84 = UINT32_MAX;

	t84 = (((x337<=x338)<x339)|x340);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 3U;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	uint32_t x344 = 390U;
	uint32_t t85 = 73897468U;

	t85 = (((x341<=x342)<x343)|x344);

	if (t85 != 390U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x346 = 149701U;
	static uint32_t x348 = 120219U;
	static volatile uint32_t t86 = 69U;

	t86 = (((x345<=x346)<x347)|x348);

	if (t86 != 120219U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x351 = 290730U;
	static volatile int64_t x352 = -5263LL;
	volatile int64_t t87 = -180LL;

	t87 = (((x349<=x350)<x351)|x352);

	if (t87 != -5263LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	static uint32_t x354 = 9063U;
	int64_t x355 = INT64_MIN;
	uint64_t x356 = 67667LLU;

	t88 = (((x353<=x354)<x355)|x356);

	if (t88 != 67667LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -15118;
	int64_t x358 = -1LL;
	static int8_t x360 = 4;
	static int32_t t89 = 25;

	t89 = (((x357<=x358)<x359)|x360);

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 230;
	int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MIN;
	int32_t t90 = 1240726;

	t90 = (((x361<=x362)<x363)|x364);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 7327244U;
	uint8_t x366 = UINT8_MAX;
	static int32_t x367 = -50212;
	int64_t t91 = 0LL;

	t91 = (((x365<=x366)<x367)|x368);

	if (t91 != 1371LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MAX;
	int16_t x370 = -1;
	uint8_t x372 = 63U;

	t92 = (((x369<=x370)<x371)|x372);

	if (t92 != 63) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -9048;
	static int8_t x374 = INT8_MIN;
	int32_t x376 = INT32_MIN;
	int32_t t93 = INT32_MIN;

	t93 = (((x373<=x374)<x375)|x376);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -2;
	int64_t x378 = INT64_MIN;
	int32_t x379 = -3;
	uint16_t x380 = 897U;

	t94 = (((x377<=x378)<x379)|x380);

	if (t94 != 897) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MIN;
	static uint8_t x383 = UINT8_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -3661;

	t95 = (((x381<=x382)<x383)|x384);

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = UINT32_MAX;
	volatile uint8_t x387 = 1U;
	uint64_t t96 = 1664926563085299362LLU;

	t96 = (((x385<=x386)<x387)|x388);

	if (t96 != 96083490087278059LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MAX;
	uint32_t x392 = 277U;

	t97 = (((x389<=x390)<x391)|x392);

	if (t97 != 277U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 16025U;
	int16_t x394 = INT16_MAX;
	static volatile int8_t x396 = -28;
	int32_t t98 = -84159827;

	t98 = (((x393<=x394)<x395)|x396);

	if (t98 != -28) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	static int32_t x399 = INT32_MIN;
	static int32_t t99 = INT32_MIN;

	t99 = (((x397<=x398)<x399)|x400);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

