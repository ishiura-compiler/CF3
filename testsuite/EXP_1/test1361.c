#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
volatile int16_t x8 = INT16_MIN;
int16_t x9 = -47;
uint64_t x12 = 263567812003596202LLU;
volatile int32_t t2 = 394514088;
volatile int32_t t3 = 150;
int64_t x26 = -1LL;
uint32_t x30 = UINT32_MAX;
static volatile int16_t x47 = 1;
int16_t x50 = -1;
int32_t t12 = -102;
volatile int64_t x54 = -1LL;
int32_t x56 = INT32_MAX;
int32_t t15 = 116870;
int8_t x67 = -1;
static uint32_t x71 = UINT32_MAX;
volatile int32_t x72 = 25;
volatile int32_t t17 = 7832;
int32_t x73 = INT32_MAX;
uint64_t x74 = UINT64_MAX;
volatile int32_t t19 = -41;
static uint64_t x94 = 1035605246100016504LLU;
uint16_t x100 = UINT16_MAX;
static volatile int32_t t23 = 257718;
volatile uint16_t x107 = 12U;
int16_t x112 = -1;
volatile int16_t x113 = INT16_MIN;
int64_t x115 = -1LL;
uint8_t x119 = 15U;
int8_t x125 = INT8_MAX;
static int16_t x126 = INT16_MIN;
uint32_t x129 = 70U;
int16_t x132 = INT16_MAX;
int16_t x134 = INT16_MIN;
static int8_t x140 = INT8_MIN;
int32_t t33 = 0;
int32_t t35 = -593;
int8_t x152 = INT8_MIN;
int16_t x158 = -1;
int8_t x166 = -1;
static uint16_t x168 = 1U;
int32_t t40 = -1;
uint8_t x175 = UINT8_MAX;
static int16_t x176 = INT16_MAX;
static uint32_t x184 = UINT32_MAX;
volatile int16_t x186 = INT16_MAX;
int8_t x188 = -50;
static int8_t x190 = 1;
volatile uint32_t x191 = 5817U;
int8_t x192 = INT8_MIN;
static int64_t x201 = INT64_MIN;
int16_t x207 = -54;
int16_t x208 = -1;
int8_t x216 = INT8_MIN;
volatile int32_t t52 = -1;
uint64_t x223 = 240982286102101212LLU;
int16_t x242 = INT16_MAX;
uint64_t x244 = 7525209068307750LLU;
int32_t x248 = -1;
uint64_t x252 = 5659819774971886216LLU;
volatile int32_t t61 = 672325779;
volatile int64_t x260 = -71681LL;
int32_t t64 = 608003;
volatile int8_t x269 = 1;
volatile int32_t x270 = 3595722;
int64_t x278 = 1217313384LL;
int32_t x279 = -106855;
uint16_t x286 = UINT16_MAX;
int16_t x287 = -3;
int32_t t69 = -51;
static volatile int32_t t70 = -1;
volatile int8_t x294 = -1;
int32_t x304 = 146356;
volatile int8_t x306 = -22;
int8_t x321 = INT8_MIN;
volatile uint64_t x334 = UINT64_MAX;
int8_t x338 = INT8_MIN;
uint32_t x342 = 36972U;
uint8_t x346 = 0U;
static int8_t x349 = 0;
int16_t x351 = -1;
int64_t x353 = INT64_MAX;
static int64_t x356 = -1LL;
volatile int8_t x358 = INT8_MIN;
int8_t x360 = INT8_MIN;
int64_t x371 = 300079404LL;
volatile int32_t t90 = -1224;
static int32_t x373 = -29134915;
static int8_t x387 = INT8_MIN;
int32_t t94 = 264109;
int32_t x391 = 9591;
int32_t t95 = 751;
int8_t x396 = INT8_MIN;
int32_t x400 = 91315;
uint32_t x402 = UINT32_MAX;
uint16_t x405 = 2981U;


void f0(void) {
	volatile uint8_t x1 = 19U;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = 11056U;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 414;

	t0 = (((x1<x2)+x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MAX;
	static int32_t t1 = 742668742;

	t1 = (((x5<x6)+x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	uint8_t x11 = 6U;

	t2 = (((x9<x10)+x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -801200;
	static int16_t x14 = -900;
	uint32_t x15 = UINT32_MAX;
	volatile int32_t x16 = INT32_MAX;

	t3 = (((x13<x14)+x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = 244;
	volatile int8_t x19 = INT8_MIN;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = 5881616;

	t4 = (((x17<x18)+x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int64_t x22 = INT64_MIN;
	static int32_t x23 = INT32_MIN;
	int64_t x24 = -1LL;
	volatile int32_t t5 = -23118;

	t5 = (((x21<x22)+x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 19U;
	int32_t x27 = -1;
	static int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -2022882;

	t6 = (((x25<x26)+x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -8965;
	int64_t x31 = INT64_MIN;
	int64_t x32 = 572997013283909370LL;
	static volatile int32_t t7 = -183370537;

	t7 = (((x29<x30)+x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static int32_t x34 = -1129039;
	static int64_t x35 = 1455879172LL;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = -260;

	t8 = (((x33<x34)+x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 899554653835523067LLU;
	int32_t x38 = INT32_MAX;
	int32_t x39 = INT32_MIN;
	static volatile int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 9226;

	t9 = (((x37<x38)+x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	static int8_t x42 = 5;
	uint16_t x43 = 1884U;
	int8_t x44 = -1;
	volatile int32_t t10 = -12785917;

	t10 = (((x41<x42)+x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MAX;
	static int8_t x48 = INT8_MIN;
	int32_t t11 = 0;

	t11 = (((x45<x46)+x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -468;
	static uint64_t x51 = UINT64_MAX;
	uint16_t x52 = UINT16_MAX;

	t12 = (((x49<x50)+x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = UINT16_MAX;
	int64_t x55 = INT64_MIN;
	volatile int32_t t13 = 5;

	t13 = (((x53<x54)+x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MAX;
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = -1;
	volatile int32_t t14 = 0;

	t14 = (((x57<x58)+x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int32_t x62 = INT32_MIN;
	volatile uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MIN;

	t15 = (((x61<x62)+x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -2433097LL;
	uint64_t x66 = UINT64_MAX;
	static volatile int16_t x68 = 0;
	volatile int32_t t16 = 8;

	t16 = (((x65<x66)+x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = 14;
	int32_t x70 = 1;

	t17 = (((x69<x70)+x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x75 = 0U;
	static int8_t x76 = 4;
	volatile int32_t t18 = 256932;

	t18 = (((x73<x74)+x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int8_t x78 = INT8_MAX;
	int64_t x79 = 20455696760LL;
	int16_t x80 = -1;

	t19 = (((x77<x78)+x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -1;
	int8_t x82 = INT8_MIN;
	int32_t x83 = INT32_MAX;
	static int32_t x84 = -1;
	int32_t t20 = 420382;

	t20 = (((x81<x82)+x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = UINT8_MAX;
	int16_t x90 = -1;
	int32_t x91 = INT32_MIN;
	int16_t x92 = 964;
	int32_t t21 = 2044487;

	t21 = (((x89<x90)+x91)<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = INT8_MAX;
	volatile uint32_t x95 = UINT32_MAX;
	static volatile uint64_t x96 = 15849835699495LLU;
	static volatile int32_t t22 = -30;

	t22 = (((x93<x94)+x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	static volatile uint64_t x98 = 0LLU;
	int32_t x99 = -2;

	t23 = (((x97<x98)+x99)<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x103 = -1;
	int8_t x104 = INT8_MIN;
	int32_t t24 = 828011;

	t24 = (((x101<x102)+x103)<x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	static int8_t x106 = 1;
	int16_t x108 = INT16_MIN;
	int32_t t25 = 1128;

	t25 = (((x105<x106)+x107)<x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -30;
	volatile int64_t x110 = INT64_MAX;
	int32_t x111 = -1;
	volatile int32_t t26 = -741565;

	t26 = (((x109<x110)+x111)<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = INT8_MAX;
	int16_t x116 = -139;
	int32_t t27 = 48230281;

	t27 = (((x113<x114)+x115)<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x117 = -23902520;
	uint64_t x118 = UINT64_MAX;
	volatile int16_t x120 = INT16_MAX;
	int32_t t28 = -1;

	t28 = (((x117<x118)+x119)<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = 0;
	static int32_t x122 = INT32_MIN;
	uint8_t x123 = 4U;
	uint32_t x124 = 128U;
	volatile int32_t t29 = 28414;

	t29 = (((x121<x122)+x123)<x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x127 = -1;
	static int16_t x128 = INT16_MIN;
	int32_t t30 = 56994;

	t30 = (((x125<x126)+x127)<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x130 = UINT64_MAX;
	int64_t x131 = INT64_MIN;
	int32_t t31 = 3;

	t31 = (((x129<x130)+x131)<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -25291447;
	static int8_t x135 = INT8_MIN;
	uint64_t x136 = 108922710664299200LLU;
	int32_t t32 = 0;

	t32 = (((x133<x134)+x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int32_t x139 = INT32_MAX;

	t33 = (((x137<x138)+x139)<x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 0U;
	volatile int16_t x142 = -6916;
	uint16_t x143 = UINT16_MAX;
	static int32_t x144 = INT32_MIN;
	int32_t t34 = -3434694;

	t34 = (((x141<x142)+x143)<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = -1676764084229LL;
	uint16_t x146 = UINT16_MAX;
	uint16_t x147 = 1289U;
	int32_t x148 = INT32_MIN;

	t35 = (((x145<x146)+x147)<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -1LL;
	int64_t x150 = 54584822416LL;
	static int64_t x151 = -1106015680059LL;
	static volatile int32_t t36 = 667853;

	t36 = (((x149<x150)+x151)<x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = INT16_MAX;
	static int8_t x154 = 0;
	uint64_t x155 = 1LLU;
	int32_t x156 = INT32_MIN;
	int32_t t37 = -133822981;

	t37 = (((x153<x154)+x155)<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MIN;
	volatile int8_t x159 = INT8_MIN;
	int8_t x160 = -1;
	int32_t t38 = 24;

	t38 = (((x157<x158)+x159)<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x162 = 7;
	uint8_t x163 = UINT8_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t39 = -1;

	t39 = (((x161<x162)+x163)<x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = -1;
	static uint16_t x167 = 1877U;

	t40 = (((x165<x166)+x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 12U;
	volatile int64_t x170 = -1LL;
	int64_t x171 = -1LL;
	int8_t x172 = INT8_MIN;
	int32_t t41 = 4376098;

	t41 = (((x169<x170)+x171)<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = UINT8_MAX;
	uint32_t x174 = 79207277U;
	volatile int32_t t42 = 603608179;

	t42 = (((x173<x174)+x175)<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	volatile int64_t x178 = INT64_MIN;
	int64_t x179 = -1LL;
	int64_t x180 = 233253339160LL;
	int32_t t43 = 195764;

	t43 = (((x177<x178)+x179)<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = 509U;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = 8955U;
	volatile int32_t t44 = 54640;

	t44 = (((x181<x182)+x183)<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = UINT8_MAX;
	static uint32_t x187 = UINT32_MAX;
	volatile int32_t t45 = 1;

	t45 = (((x185<x186)+x187)<x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	volatile int32_t t46 = -258918924;

	t46 = (((x189<x190)+x191)<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = INT64_MAX;
	uint32_t x194 = 32282U;
	volatile uint64_t x195 = 1317965428239790506LLU;
	int8_t x196 = INT8_MAX;
	volatile int32_t t47 = 1477;

	t47 = (((x193<x194)+x195)<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x197 = -1LL;
	int16_t x198 = -1;
	int8_t x199 = INT8_MAX;
	static int64_t x200 = -1LL;
	volatile int32_t t48 = 1355;

	t48 = (((x197<x198)+x199)<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = INT64_MIN;
	volatile int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MAX;
	volatile int32_t t49 = -2622334;

	t49 = (((x201<x202)+x203)<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = UINT8_MAX;
	static uint8_t x206 = 44U;
	volatile int32_t t50 = -29284;

	t50 = (((x205<x206)+x207)<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x209 = 1042864LL;
	int8_t x210 = INT8_MIN;
	int32_t x211 = -1;
	int8_t x212 = -4;
	volatile int32_t t51 = 12519;

	t51 = (((x209<x210)+x211)<x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MIN;

	t52 = (((x213<x214)+x215)<x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	volatile int8_t x220 = INT8_MIN;
	int32_t t53 = 1;

	t53 = (((x217<x218)+x219)<x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	volatile uint64_t x224 = 438391931720159868LLU;
	volatile int32_t t54 = 104;

	t54 = (((x221<x222)+x223)<x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	static volatile int64_t x227 = INT64_MIN;
	uint8_t x228 = 16U;
	volatile int32_t t55 = -204843;

	t55 = (((x225<x226)+x227)<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = UINT64_MAX;
	static int16_t x230 = 0;
	static uint8_t x231 = UINT8_MAX;
	uint8_t x232 = UINT8_MAX;
	int32_t t56 = 28363;

	t56 = (((x229<x230)+x231)<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x233 = 0U;
	static int8_t x234 = INT8_MIN;
	uint16_t x235 = UINT16_MAX;
	volatile uint16_t x236 = UINT16_MAX;
	static volatile int32_t t57 = 5196552;

	t57 = (((x233<x234)+x235)<x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = 4U;
	static volatile uint32_t x243 = 298U;
	static volatile int32_t t58 = 0;

	t58 = (((x241<x242)+x243)<x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 205854360;
	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	int32_t t59 = -25675818;

	t59 = (((x245<x246)+x247)<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = -1;
	static uint16_t x251 = 8U;
	static volatile int32_t t60 = -12073;

	t60 = (((x249<x250)+x251)<x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 71679625451LLU;
	uint64_t x254 = 76029224025LLU;
	static int16_t x255 = 296;
	uint32_t x256 = 1U;

	t61 = (((x253<x254)+x255)<x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x257 = 487895002;
	volatile int64_t x258 = INT64_MAX;
	static int16_t x259 = INT16_MIN;
	volatile int32_t t62 = -899645;

	t62 = (((x257<x258)+x259)<x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x261 = UINT16_MAX;
	uint8_t x262 = 1U;
	int64_t x263 = INT64_MIN;
	int32_t x264 = 4;
	volatile int32_t t63 = 62939177;

	t63 = (((x261<x262)+x263)<x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x265 = INT16_MAX;
	uint16_t x266 = UINT16_MAX;
	uint64_t x267 = 124532LLU;
	int16_t x268 = -1;

	t64 = (((x265<x266)+x267)<x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x271 = INT16_MIN;
	static int64_t x272 = -1023404146459030575LL;
	volatile int32_t t65 = -1;

	t65 = (((x269<x270)+x271)<x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x273 = 1;
	volatile uint16_t x274 = 12U;
	volatile uint64_t x275 = 7537LLU;
	uint32_t x276 = 1U;
	int32_t t66 = 0;

	t66 = (((x273<x274)+x275)<x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x277 = INT64_MAX;
	int16_t x280 = -1;
	volatile int32_t t67 = 98;

	t67 = (((x277<x278)+x279)<x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = 1U;
	uint32_t x282 = UINT32_MAX;
	uint32_t x283 = 57U;
	int8_t x284 = INT8_MIN;
	static int32_t t68 = -2318;

	t68 = (((x281<x282)+x283)<x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = 1486;
	int64_t x288 = INT64_MIN;

	t69 = (((x285<x286)+x287)<x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -518462LL;
	volatile int16_t x290 = INT16_MAX;
	static int8_t x291 = -1;
	static uint8_t x292 = 31U;

	t70 = (((x289<x290)+x291)<x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x293 = 1U;
	static volatile int32_t x295 = INT32_MIN;
	int64_t x296 = -1LL;
	int32_t t71 = 0;

	t71 = (((x293<x294)+x295)<x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = 6;
	int8_t x298 = INT8_MAX;
	int64_t x299 = -1LL;
	int32_t x300 = -36;
	volatile int32_t t72 = 52;

	t72 = (((x297<x298)+x299)<x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -1;
	uint8_t x302 = 0U;
	int16_t x303 = INT16_MIN;
	int32_t t73 = -10386502;

	t73 = (((x301<x302)+x303)<x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = UINT64_MAX;
	int32_t x307 = -1;
	volatile int16_t x308 = INT16_MAX;
	volatile int32_t t74 = -103584673;

	t74 = (((x305<x306)+x307)<x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = -1;
	int16_t x310 = INT16_MIN;
	int8_t x311 = INT8_MIN;
	static int16_t x312 = 0;
	volatile int32_t t75 = 0;

	t75 = (((x309<x310)+x311)<x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	int64_t x315 = -1LL;
	int32_t x316 = 1718931;
	volatile int32_t t76 = -350296;

	t76 = (((x313<x314)+x315)<x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -1LL;
	int32_t x318 = INT32_MIN;
	int64_t x319 = -103LL;
	volatile int16_t x320 = -1;
	int32_t t77 = -1;

	t77 = (((x317<x318)+x319)<x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x322 = 82924LLU;
	volatile uint16_t x323 = 31U;
	static int16_t x324 = -2298;
	int32_t t78 = 131932;

	t78 = (((x321<x322)+x323)<x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	static uint8_t x326 = 12U;
	int64_t x327 = -1LL;
	volatile int8_t x328 = INT8_MIN;
	volatile int32_t t79 = -100;

	t79 = (((x325<x326)+x327)<x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x329 = 8;
	volatile int16_t x330 = -1;
	int8_t x331 = -2;
	static volatile uint8_t x332 = UINT8_MAX;
	static volatile int32_t t80 = 358112;

	t80 = (((x329<x330)+x331)<x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x333 = INT16_MAX;
	static int8_t x335 = INT8_MIN;
	int32_t x336 = 424;
	int32_t t81 = -39602583;

	t81 = (((x333<x334)+x335)<x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x337 = INT32_MIN;
	static int8_t x339 = INT8_MIN;
	static int64_t x340 = INT64_MIN;
	int32_t t82 = -413671844;

	t82 = (((x337<x338)+x339)<x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x341 = 93099U;
	int8_t x343 = -1;
	static volatile int64_t x344 = 2845927062LL;
	int32_t t83 = -142310;

	t83 = (((x341<x342)+x343)<x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = -1;
	volatile uint8_t x347 = 1U;
	int16_t x348 = -55;
	volatile int32_t t84 = 685;

	t84 = (((x345<x346)+x347)<x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x350 = 16113LLU;
	int8_t x352 = -22;
	static int32_t t85 = -9;

	t85 = (((x349<x350)+x351)<x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x354 = 1031U;
	uint64_t x355 = 199518560799422LLU;
	static volatile int32_t t86 = -16021;

	t86 = (((x353<x354)+x355)<x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MIN;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t t87 = -3934235;

	t87 = (((x357<x358)+x359)<x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x361 = 765U;
	int32_t x362 = INT32_MAX;
	static int8_t x363 = 0;
	uint64_t x364 = 3207LLU;
	int32_t t88 = -14496494;

	t88 = (((x361<x362)+x363)<x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = -3331883LL;
	static int64_t x366 = -5LL;
	int32_t x367 = -556517;
	int8_t x368 = INT8_MAX;
	int32_t t89 = -3365;

	t89 = (((x365<x366)+x367)<x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x369 = -1;
	uint64_t x370 = 289529LLU;
	volatile int32_t x372 = -29911;

	t90 = (((x369<x370)+x371)<x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x374 = -785658004355LL;
	static int16_t x375 = INT16_MIN;
	volatile uint16_t x376 = 3319U;
	volatile int32_t t91 = -20492;

	t91 = (((x373<x374)+x375)<x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MIN;
	static uint8_t x378 = 24U;
	int32_t x379 = INT32_MIN;
	int64_t x380 = 418337411686LL;
	volatile int32_t t92 = 0;

	t92 = (((x377<x378)+x379)<x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = 2161922505604587LLU;
	uint32_t x382 = UINT32_MAX;
	static int8_t x383 = INT8_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t93 = 253;

	t93 = (((x381<x382)+x383)<x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = 0;
	int8_t x386 = INT8_MIN;
	static volatile int16_t x388 = INT16_MIN;

	t94 = (((x385<x386)+x387)<x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = INT8_MIN;
	volatile uint16_t x390 = UINT16_MAX;
	int64_t x392 = -174LL;

	t95 = (((x389<x390)+x391)<x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x393 = INT8_MIN;
	int64_t x394 = -1LL;
	volatile uint16_t x395 = 65U;
	volatile int32_t t96 = -6;

	t96 = (((x393<x394)+x395)<x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = 0U;
	volatile int16_t x398 = -1;
	int32_t x399 = INT32_MIN;
	static volatile int32_t t97 = 1013668697;

	t97 = (((x397<x398)+x399)<x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MIN;
	uint8_t x403 = UINT8_MAX;
	uint16_t x404 = UINT16_MAX;
	int32_t t98 = -336456;

	t98 = (((x401<x402)+x403)<x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x406 = INT16_MIN;
	int32_t x407 = -16055;
	int8_t x408 = -1;
	static volatile int32_t t99 = -7059;

	t99 = (((x405<x406)+x407)<x408);

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

