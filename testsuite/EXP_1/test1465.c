#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
uint16_t x13 = UINT16_MAX;
int8_t x17 = 0;
uint32_t x23 = 15828179U;
uint32_t x26 = 4436577U;
static int32_t x27 = 1496606;
int32_t x28 = INT32_MIN;
uint32_t x38 = 443U;
int32_t t9 = 713;
static volatile int32_t x42 = -234;
volatile int16_t x48 = INT16_MIN;
uint8_t x55 = 16U;
volatile int32_t t15 = 50113;
int64_t x67 = INT64_MAX;
int16_t x68 = INT16_MIN;
int32_t x71 = INT32_MAX;
uint64_t x73 = 4080881263420995008LLU;
uint8_t x74 = 51U;
static uint16_t x77 = 1U;
int64_t x78 = INT64_MIN;
int32_t t19 = -892698491;
int32_t t20 = -665906972;
int16_t x85 = INT16_MIN;
uint32_t x90 = 871U;
uint32_t x92 = 58528U;
int32_t t24 = 225;
int16_t x119 = INT16_MIN;
int64_t x124 = -14LL;
static int8_t x127 = INT8_MAX;
int64_t x129 = INT64_MIN;
volatile int64_t x130 = -1LL;
static uint8_t x135 = 21U;
static volatile int32_t t33 = 419230307;
int16_t x140 = -1;
int16_t x143 = INT16_MIN;
int64_t x151 = INT64_MIN;
int64_t x152 = 965848377942057LL;
int32_t x162 = -1;
volatile int32_t t40 = 1135922;
static int64_t x168 = INT64_MAX;
static int16_t x170 = -1;
uint32_t x171 = 1852U;
uint16_t x174 = UINT16_MAX;
int8_t x180 = INT8_MIN;
int8_t x182 = -1;
volatile int8_t x186 = INT8_MIN;
int32_t t47 = -3;
int32_t x194 = -23328166;
static int32_t x198 = 982;
int64_t x204 = INT64_MAX;
volatile int16_t x206 = INT16_MIN;
volatile uint32_t x215 = UINT32_MAX;
static int64_t x220 = INT64_MIN;
int32_t t54 = 2;
int32_t t55 = -1788420;
uint16_t x226 = 815U;
uint32_t x227 = 494U;
int64_t x233 = INT64_MIN;
volatile int32_t t58 = 83;
int8_t x237 = -49;
int16_t x244 = INT16_MIN;
int8_t x250 = -1;
int8_t x258 = INT8_MIN;
uint64_t x260 = 34759248675897LLU;
volatile int32_t x262 = INT32_MAX;
static volatile int32_t t65 = 1018801489;
uint32_t x269 = UINT32_MAX;
static int32_t x274 = INT32_MAX;
static int64_t x284 = INT64_MAX;
static volatile uint64_t x286 = 14217LLU;
static volatile int16_t x287 = -1;
uint64_t x290 = UINT64_MAX;
int8_t x292 = INT8_MIN;
static volatile int32_t x294 = INT32_MIN;
uint32_t x298 = 106U;
int16_t x302 = -1;
int32_t t75 = 0;
int32_t t76 = 6036;
uint32_t x311 = 1U;
int16_t x316 = 0;
int32_t t78 = -732728802;
volatile int32_t x324 = INT32_MIN;
volatile int32_t t80 = -31390863;
uint64_t x327 = UINT64_MAX;
int16_t x329 = INT16_MAX;
volatile int64_t x331 = INT64_MIN;
int64_t x332 = -1LL;
static volatile int64_t x333 = INT64_MIN;
int8_t x334 = -7;
uint8_t x337 = 18U;
static int32_t x338 = -1;
int16_t x340 = -275;
int32_t t84 = 387;
int8_t x343 = -1;
static volatile int32_t t85 = 12040;
static uint16_t x346 = UINT16_MAX;
int8_t x350 = INT8_MIN;
int8_t x353 = 13;
int8_t x355 = INT8_MIN;
int32_t x362 = INT32_MAX;
static uint8_t x364 = 2U;
uint32_t x365 = 1793473956U;
static int32_t t91 = -76;
int16_t x372 = INT16_MIN;
static int32_t t92 = 115366;
volatile int32_t t93 = 251028;
volatile int8_t x381 = INT8_MAX;
static int16_t x386 = -3;
volatile int8_t x389 = INT8_MIN;
int16_t x391 = -1;
int8_t x395 = -1;
static int32_t x397 = INT32_MIN;
int64_t x400 = 14495762384725185LL;


void f0(void) {
	static volatile uint8_t x1 = UINT8_MAX;
	int32_t x3 = -201189;
	static int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = -1383980;

	t0 = (((x1<x2)<x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 56U;
	uint16_t x6 = 23885U;
	int64_t x7 = 20432479698LL;
	static int16_t x8 = INT16_MAX;
	int32_t t1 = 712579639;

	t1 = (((x5<x6)<x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -7314;
	int16_t x10 = 0;
	int16_t x11 = -1;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 164256;

	t2 = (((x9<x10)<x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	int64_t x15 = INT64_MAX;
	int16_t x16 = INT16_MAX;
	int32_t t3 = 667;

	t3 = (((x13<x14)<x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	static volatile uint64_t x19 = 149408853815519LLU;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 56927926;

	t4 = (((x17<x18)<x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MIN;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -102;

	t5 = (((x21<x22)<x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = -97726587;
	int32_t t6 = 53541436;

	t6 = (((x25<x26)<x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	static uint8_t x30 = 19U;
	static int16_t x31 = INT16_MIN;
	volatile int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -743970;

	t7 = (((x29<x30)<x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int8_t x34 = 22;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -340210935;

	t8 = (((x33<x34)<x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	int32_t x39 = 853;
	volatile int16_t x40 = 1;

	t9 = (((x37<x38)<x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 34822;
	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -140824;

	t10 = (((x41<x42)<x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	static int64_t x46 = 62389LL;
	int32_t x47 = INT32_MIN;
	int32_t t11 = -11783;

	t11 = (((x45<x46)<x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = -82348567609015704LL;
	int16_t x50 = -712;
	int32_t x51 = -1;
	static volatile int64_t x52 = 480LL;
	volatile int32_t t12 = 1034448991;

	t12 = (((x49<x50)<x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int32_t x54 = 332732375;
	uint64_t x56 = 199712LLU;
	int32_t t13 = 1025208;

	t13 = (((x53<x54)<x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	static int32_t x58 = INT32_MIN;
	int32_t x59 = -26;
	int8_t x60 = 1;
	volatile int32_t t14 = 3842;

	t14 = (((x57<x58)<x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -152;
	int32_t x62 = -307;
	static int8_t x63 = INT8_MIN;
	static int64_t x64 = -1LL;

	t15 = (((x61<x62)<x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	uint8_t x66 = 119U;
	int32_t t16 = -54;

	t16 = (((x65<x66)<x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	static int8_t x70 = INT8_MIN;
	int16_t x72 = -1;
	volatile int32_t t17 = 162436014;

	t17 = (((x69<x70)<x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x75 = -36;
	int32_t x76 = 102;
	int32_t t18 = 1;

	t18 = (((x73<x74)<x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x79 = INT32_MAX;
	static int8_t x80 = INT8_MAX;

	t19 = (((x77<x78)<x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 13U;
	int32_t x82 = INT32_MIN;
	int16_t x83 = 20;
	static int32_t x84 = -18002478;

	t20 = (((x81<x82)<x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = 13518054746LL;
	uint32_t x87 = 48655U;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 1297956;

	t21 = (((x85<x86)<x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int32_t x91 = -222;
	int32_t t22 = -1;

	t22 = (((x89<x90)<x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = 924;
	volatile uint64_t x94 = 1427214LLU;
	volatile int64_t x95 = 1503416LL;
	uint16_t x96 = 672U;
	int32_t t23 = 426758;

	t23 = (((x93<x94)<x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -1;
	volatile int8_t x98 = -1;
	int32_t x99 = INT32_MIN;
	int64_t x100 = INT64_MIN;

	t24 = (((x97<x98)<x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 981U;
	volatile int64_t x102 = 1LL;
	int64_t x103 = -1LL;
	volatile uint32_t x104 = 1104041687U;
	int32_t t25 = -131;

	t25 = (((x101<x102)<x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -4003559566165172LL;
	int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	int8_t x108 = -1;
	volatile int32_t t26 = 4958;

	t26 = (((x105<x106)<x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -1LL;
	int32_t x110 = -2029;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = 3253U;
	volatile int32_t t27 = 50;

	t27 = (((x109<x110)<x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile int8_t x114 = -4;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = INT8_MAX;
	static int32_t t28 = -6;

	t28 = (((x113<x114)<x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 674U;
	uint32_t x118 = 1U;
	static int8_t x120 = INT8_MIN;
	static int32_t t29 = 16;

	t29 = (((x117<x118)<x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int32_t x122 = 2;
	uint32_t x123 = 25395U;
	int32_t t30 = -63268145;

	t30 = (((x121<x122)<x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -14LL;
	static int16_t x126 = -1;
	volatile int64_t x128 = -254881382LL;
	volatile int32_t t31 = 3964112;

	t31 = (((x125<x126)<x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x131 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = -1369;

	t32 = (((x129<x130)<x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	volatile int64_t x134 = INT64_MIN;
	int32_t x136 = -54066;

	t33 = (((x133<x134)<x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x137 = UINT8_MAX;
	int32_t x138 = -215;
	volatile uint64_t x139 = 3LLU;
	volatile int32_t t34 = -7635747;

	t34 = (((x137<x138)<x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 1;
	int64_t x142 = 0LL;
	int32_t x144 = INT32_MAX;
	volatile int32_t t35 = -11;

	t35 = (((x141<x142)<x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -25;
	uint64_t x146 = UINT64_MAX;
	static uint16_t x147 = UINT16_MAX;
	volatile int16_t x148 = INT16_MIN;
	int32_t t36 = -3574675;

	t36 = (((x145<x146)<x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	static uint64_t x150 = 7357613200762553237LLU;
	int32_t t37 = 299;

	t37 = (((x149<x150)<x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 7879489770366400LL;
	int16_t x154 = -58;
	int16_t x155 = INT16_MAX;
	int32_t x156 = 605;
	int32_t t38 = 127348;

	t38 = (((x153<x154)<x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -191829963;
	int32_t x158 = -32304;
	volatile uint64_t x159 = 4423LLU;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 12;

	t39 = (((x157<x158)<x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x163 = UINT32_MAX;
	uint32_t x164 = UINT32_MAX;

	t40 = (((x161<x162)<x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 108820LLU;
	int8_t x166 = INT8_MIN;
	static int16_t x167 = 103;
	static volatile int32_t t41 = 2;

	t41 = (((x165<x166)<x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	volatile int8_t x172 = INT8_MAX;
	static volatile int32_t t42 = -108;

	t42 = (((x169<x170)<x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = -1;
	int16_t x175 = -10;
	static int64_t x176 = 2002849084273669748LL;
	volatile int32_t t43 = -217239434;

	t43 = (((x173<x174)<x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int32_t x178 = INT32_MIN;
	int32_t x179 = 17;
	int32_t t44 = -120;

	t44 = (((x177<x178)<x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 4243U;
	int16_t x183 = INT16_MAX;
	static volatile int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -28156;

	t45 = (((x181<x182)<x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 4;
	int8_t x187 = 7;
	int32_t x188 = -2;
	volatile int32_t t46 = 34205;

	t46 = (((x185<x186)<x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 4417LLU;
	int32_t x190 = -7401362;
	volatile uint32_t x191 = 25247422U;
	int16_t x192 = -1;

	t47 = (((x189<x190)<x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MIN;
	int32_t t48 = -26058952;

	t48 = (((x193<x194)<x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 13660274U;
	static int16_t x199 = 1719;
	int16_t x200 = 105;
	static volatile int32_t t49 = 3;

	t49 = (((x197<x198)<x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 5U;
	volatile uint8_t x202 = 97U;
	uint16_t x203 = UINT16_MAX;
	volatile int32_t t50 = 16449;

	t50 = (((x201<x202)<x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 17481;

	t51 = (((x205<x206)<x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	int8_t x210 = 0;
	int8_t x211 = -15;
	int16_t x212 = 420;
	volatile int32_t t52 = 583547126;

	t52 = (((x209<x210)<x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	int8_t x214 = -1;
	volatile int32_t x216 = INT32_MIN;
	static volatile int32_t t53 = 2;

	t53 = (((x213<x214)<x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = 18U;
	static uint64_t x218 = UINT64_MAX;
	static int16_t x219 = INT16_MIN;

	t54 = (((x217<x218)<x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 40U;
	int16_t x222 = -1;
	static uint32_t x223 = 14595U;
	static int8_t x224 = INT8_MAX;

	t55 = (((x221<x222)<x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 2109646438876168LL;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = -10495;

	t56 = (((x225<x226)<x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 1091U;
	int8_t x230 = INT8_MIN;
	uint16_t x231 = UINT16_MAX;
	uint8_t x232 = 24U;
	int32_t t57 = -75;

	t57 = (((x229<x230)<x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	static int8_t x236 = INT8_MIN;

	t58 = (((x233<x234)<x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = 1495307;
	int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 7;

	t59 = (((x237<x238)<x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	volatile int8_t x242 = -1;
	int16_t x243 = -1;
	int32_t t60 = 10360372;

	t60 = (((x241<x242)<x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MAX;
	uint32_t x246 = 4U;
	int16_t x247 = INT16_MAX;
	volatile int32_t x248 = 18901751;
	static volatile int32_t t61 = 66;

	t61 = (((x245<x246)<x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	static int64_t x251 = INT64_MIN;
	uint32_t x252 = 6205U;
	int32_t t62 = -2753230;

	t62 = (((x249<x250)<x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	int32_t x254 = INT32_MIN;
	static volatile int32_t x255 = -11686669;
	static int16_t x256 = INT16_MAX;
	int32_t t63 = -193315909;

	t63 = (((x253<x254)<x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	uint32_t x259 = UINT32_MAX;
	static volatile int32_t t64 = -6876431;

	t64 = (((x257<x258)<x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x261 = 109U;
	int32_t x263 = INT32_MAX;
	uint8_t x264 = UINT8_MAX;

	t65 = (((x261<x262)<x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	volatile int16_t x266 = INT16_MIN;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = INT64_MAX;
	int32_t t66 = 11656;

	t66 = (((x265<x266)<x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = 27;
	static uint64_t x271 = UINT64_MAX;
	uint32_t x272 = UINT32_MAX;
	volatile int32_t t67 = 1053274;

	t67 = (((x269<x270)<x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MAX;
	int32_t t68 = 548;

	t68 = (((x273<x274)<x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	static int32_t x278 = -9;
	int8_t x279 = 2;
	int8_t x280 = INT8_MIN;
	int32_t t69 = 11055;

	t69 = (((x277<x278)<x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 683LLU;
	int64_t x282 = -1LL;
	static volatile uint8_t x283 = 23U;
	int32_t t70 = 10394;

	t70 = (((x281<x282)<x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t71 = -4;

	t71 = (((x285<x286)<x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 1U;
	static volatile uint32_t x291 = UINT32_MAX;
	static int32_t t72 = -60820470;

	t72 = (((x289<x290)<x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t73 = 3;

	t73 = (((x293<x294)<x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = 1591U;
	static int8_t x299 = -2;
	uint16_t x300 = UINT16_MAX;
	static volatile int32_t t74 = 831670;

	t74 = (((x297<x298)<x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = 14471;
	volatile uint32_t x303 = 3989U;
	volatile int32_t x304 = INT32_MIN;

	t75 = (((x301<x302)<x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	static int32_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	static volatile int16_t x308 = INT16_MIN;

	t76 = (((x305<x306)<x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 1195222U;
	uint16_t x310 = 10U;
	static int16_t x312 = -25;
	int32_t t77 = 89901;

	t77 = (((x309<x310)<x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MAX;
	uint8_t x315 = 1U;

	t78 = (((x313<x314)<x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	volatile int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MIN;
	volatile int8_t x320 = INT8_MIN;
	volatile int32_t t79 = -16;

	t79 = (((x317<x318)<x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -382;
	volatile uint8_t x322 = 1U;
	uint64_t x323 = 2217124023272664018LLU;

	t80 = (((x321<x322)<x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int32_t x326 = -1;
	uint16_t x328 = 969U;
	int32_t t81 = 15;

	t81 = (((x325<x326)<x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x330 = INT64_MIN;
	int32_t t82 = -226455635;

	t82 = (((x329<x330)<x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x335 = -17018882;
	static int32_t x336 = -3;
	int32_t t83 = -1;

	t83 = (((x333<x334)<x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x339 = 477019730;

	t84 = (((x337<x338)<x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MAX;
	static volatile int64_t x344 = -776843389077LL;

	t85 = (((x341<x342)<x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 11U;
	int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = -3084;

	t86 = (((x345<x346)<x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 66754654U;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 2U;
	volatile int32_t t87 = 1;

	t87 = (((x349<x350)<x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x354 = INT8_MAX;
	volatile int16_t x356 = 12;
	volatile int32_t t88 = -285225351;

	t88 = (((x353<x354)<x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	static int16_t x358 = 908;
	volatile int8_t x359 = -2;
	static int16_t x360 = INT16_MIN;
	static int32_t t89 = 1554389;

	t89 = (((x357<x358)<x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 3U;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t t90 = 7173;

	t90 = (((x361<x362)<x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1LL;
	volatile int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;

	t91 = (((x365<x366)<x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 0;
	int64_t x370 = INT64_MIN;
	uint8_t x371 = UINT8_MAX;

	t92 = (((x369<x370)<x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = 1;
	uint16_t x374 = 23273U;
	static int32_t x375 = -5862647;
	int16_t x376 = -396;

	t93 = (((x373<x374)<x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	volatile uint8_t x378 = 2U;
	int8_t x379 = -6;
	int32_t x380 = -111;
	static int32_t t94 = 1017297892;

	t94 = (((x377<x378)<x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x382 = -1;
	int32_t x383 = INT32_MIN;
	static int16_t x384 = 0;
	int32_t t95 = -314658;

	t95 = (((x381<x382)<x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -6;
	int64_t x387 = -224216490509314830LL;
	static uint64_t x388 = 16001442LLU;
	volatile int32_t t96 = -567;

	t96 = (((x385<x386)<x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x390 = INT16_MAX;
	uint32_t x392 = 4U;
	static int32_t t97 = -19;

	t97 = (((x389<x390)<x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = 4U;
	int16_t x394 = INT16_MIN;
	int16_t x396 = INT16_MAX;
	int32_t t98 = -3;

	t98 = (((x393<x394)<x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = 1;
	int64_t x399 = -1LL;
	volatile int32_t t99 = -11;

	t99 = (((x397<x398)<x399)<x400);

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

