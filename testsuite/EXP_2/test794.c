#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
int32_t x2 = INT32_MIN;
int8_t x3 = INT8_MIN;
uint64_t x13 = 26973129632286956LLU;
volatile uint8_t x21 = 10U;
volatile int16_t x28 = -27;
int32_t t5 = -530372326;
int32_t x30 = -1;
int32_t t6 = 2;
static uint64_t x35 = 241615149768LLU;
int8_t x40 = -1;
int64_t x43 = -128775612LL;
uint32_t x46 = 10U;
uint64_t x51 = 172227184LLU;
volatile int32_t x53 = INT32_MIN;
int16_t x55 = INT16_MIN;
static uint32_t x56 = 3975886U;
int32_t x63 = -1;
static volatile int32_t t14 = 6;
static int16_t x66 = INT16_MIN;
static int16_t x78 = INT16_MAX;
uint32_t x83 = 328U;
static int32_t t22 = 8498;
volatile uint32_t x109 = UINT32_MAX;
uint64_t x111 = 4330LLU;
volatile int32_t t25 = -203040;
int32_t x118 = -1;
static uint32_t x120 = UINT32_MAX;
volatile int64_t t28 = 143527888062195447LL;
volatile uint32_t x125 = UINT32_MAX;
volatile int8_t x126 = 14;
volatile int32_t t29 = 58188;
volatile int8_t x129 = INT8_MIN;
static int32_t x139 = -1;
uint16_t x141 = 1U;
int32_t x144 = -1;
uint16_t x154 = 297U;
volatile int64_t t36 = 58436774895LL;
int64_t x158 = 5286LL;
uint64_t x159 = UINT64_MAX;
int16_t x162 = 1;
volatile uint16_t x164 = 43U;
int32_t x173 = -571036323;
int32_t x175 = -1;
int32_t x187 = 81954;
int16_t x188 = INT16_MAX;
volatile int64_t x190 = -35603097490385395LL;
int16_t x192 = -7347;
int16_t x194 = 20;
int8_t x196 = INT8_MAX;
uint64_t x203 = 25415237320LLU;
int16_t x204 = INT16_MAX;
int8_t x215 = INT8_MIN;
static volatile uint8_t x224 = UINT8_MAX;
volatile int32_t t53 = -13845023;
volatile int16_t x233 = -125;
int64_t x234 = -1LL;
int8_t x238 = 1;
int64_t x239 = INT64_MIN;
static int32_t x246 = 8;
uint16_t x248 = UINT16_MAX;
volatile int32_t t58 = -33089513;
static int32_t x255 = 287696882;
uint8_t x258 = 7U;
volatile int32_t x265 = INT32_MIN;
int64_t x269 = -1LL;
volatile int16_t x283 = -1;
int64_t t67 = -2735053340796060431LL;
volatile uint32_t x292 = 0U;
uint8_t x303 = UINT8_MAX;
int32_t t70 = 138;
volatile int32_t t71 = -946919264;
int16_t x309 = -1;
int32_t t72 = 440424;
int16_t x323 = INT16_MAX;
int64_t x325 = -1LL;
uint32_t x326 = UINT32_MAX;
uint32_t x331 = 317723993U;
volatile int32_t x336 = INT32_MIN;
int32_t t78 = INT32_MIN;
static uint8_t x354 = 11U;
volatile int32_t x355 = -1;
volatile uint8_t x356 = 3U;
volatile int32_t t83 = -396953466;
uint64_t x364 = 442019015LLU;
int32_t x365 = -23681;
volatile int32_t t86 = 2;
int32_t x371 = INT32_MIN;
volatile uint16_t x373 = 0U;
uint8_t x374 = 0U;
int8_t x386 = INT8_MIN;
static uint16_t x389 = 5325U;
volatile uint64_t x391 = 2773196475553337LLU;
uint16_t x397 = 1084U;
volatile int64_t x399 = INT64_MIN;
static int16_t x400 = INT16_MIN;
int64_t x405 = -21681143095531043LL;
int64_t x409 = 19781655269746LL;
volatile uint32_t x419 = 1056904U;


void f0(void) {
	int16_t x4 = -1;
	volatile int32_t t0 = -7;

	t0 = ((x1<=(x2%x3))+x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -4;
	static int64_t x6 = 64501531642475468LL;
	int16_t x7 = INT16_MIN;
	static int32_t x8 = 1;
	volatile int32_t t1 = 293827;

	t1 = ((x5<=(x6%x7))+x8);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static int16_t x10 = -1;
	int16_t x11 = -1;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -1272528;

	t2 = ((x9<=(x10%x11))+x12);

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = -1;
	int64_t x15 = 14146244661205LL;
	uint16_t x16 = 153U;
	volatile int32_t t3 = 43552;

	t3 = ((x13<=(x14%x15))+x16);

	if (t3 != 154) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x22 = UINT32_MAX;
	int64_t x23 = -1LL;
	int64_t x24 = -1LL;
	int64_t t4 = -1765049034581342LL;

	t4 = ((x21<=(x22%x23))+x24);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static volatile uint16_t x26 = 32396U;
	uint8_t x27 = 7U;

	t5 = ((x25<=(x26%x27))+x28);

	if (t5 != -26) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = 73193286669566LL;
	int16_t x31 = INT16_MIN;
	static volatile int8_t x32 = INT8_MIN;

	t6 = ((x29<=(x30%x31))+x32);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x33 = 92517895598806LLU;
	static volatile int16_t x34 = 151;
	uint16_t x36 = 172U;
	int32_t t7 = -191;

	t7 = ((x33<=(x34%x35))+x36);

	if (t7 != 172) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = -240181357;
	int8_t x39 = -1;
	static volatile int32_t t8 = -2;

	t8 = ((x37<=(x38%x39))+x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int8_t x42 = -1;
	int8_t x44 = -4;
	volatile int32_t t9 = 218747;

	t9 = ((x41<=(x42%x43))+x44);

	if (t9 != -4) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 1;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t10 = -162856508;

	t10 = ((x45<=(x46%x47))+x48);

	if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = UINT32_MAX;
	static volatile int32_t x50 = -1;
	static volatile int64_t x52 = INT64_MAX;
	int64_t t11 = INT64_MAX;

	t11 = ((x49<=(x50%x51))+x52);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x54 = UINT16_MAX;
	uint32_t t12 = 23669835U;

	t12 = ((x53<=(x54%x55))+x56);

	if (t12 != 3975887U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	uint16_t x58 = 0U;
	int16_t x59 = INT16_MIN;
	int32_t x60 = -20128;
	static int32_t t13 = -96744;

	t13 = ((x57<=(x58%x59))+x60);

	if (t13 != -20127) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = 2U;
	int16_t x62 = -351;
	static int8_t x64 = INT8_MAX;

	t14 = ((x61<=(x62%x63))+x64);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 1;
	uint32_t x67 = UINT32_MAX;
	uint32_t x68 = 99U;
	static volatile uint32_t t15 = 6U;

	t15 = ((x65<=(x66%x67))+x68);

	if (t15 != 100U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 3LLU;
	static int8_t x70 = -1;
	int8_t x71 = 1;
	int32_t x72 = -378921969;
	static volatile int32_t t16 = -385;

	t16 = ((x69<=(x70%x71))+x72);

	if (t16 != -378921969) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MAX;
	static int16_t x75 = 1;
	static int8_t x76 = -16;
	int32_t t17 = 787436750;

	t17 = ((x73<=(x74%x75))+x76);

	if (t17 != -16) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 2U;
	uint64_t x79 = 1694639757433LLU;
	volatile int32_t x80 = -189;
	int32_t t18 = -28567;

	t18 = ((x77<=(x78%x79))+x80);

	if (t18 != -188) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	static volatile int8_t x82 = -1;
	static int16_t x84 = -14366;
	static int32_t t19 = 7103;

	t19 = ((x81<=(x82%x83))+x84);

	if (t19 != -14366) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 139U;
	int16_t x86 = INT16_MIN;
	static int16_t x87 = INT16_MAX;
	volatile int64_t x88 = -1LL;
	int64_t t20 = -14327272160583445LL;

	t20 = ((x85<=(x86%x87))+x88);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x89 = -1;
	static volatile int8_t x90 = INT8_MIN;
	static int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t21 = -17586;

	t21 = ((x89<=(x90%x91))+x92);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	int64_t x98 = INT64_MIN;
	static int64_t x99 = -1LL;
	volatile int32_t x100 = INT32_MIN;

	t22 = ((x97<=(x98%x99))+x100);

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = UINT64_MAX;
	volatile int8_t x102 = INT8_MIN;
	volatile uint16_t x103 = UINT16_MAX;
	static int64_t x104 = INT64_MIN;
	volatile int64_t t23 = INT64_MIN;

	t23 = ((x101<=(x102%x103))+x104);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -1LL;
	int8_t x106 = -2;
	uint32_t x107 = UINT32_MAX;
	uint16_t x108 = UINT16_MAX;
	int32_t t24 = 2019672;

	t24 = ((x105<=(x106%x107))+x108);

	if (t24 != 65536) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x110 = UINT64_MAX;
	static uint16_t x112 = UINT16_MAX;

	t25 = ((x109<=(x110%x111))+x112);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x113 = -1;
	int16_t x114 = -2;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = 809000578LLU;
	uint64_t t26 = 8402847402717806LLU;

	t26 = ((x113<=(x114%x115))+x116);

	if (t26 != 809000578LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -1;
	volatile int16_t x119 = INT16_MIN;
	uint32_t t27 = 5U;

	t27 = ((x117<=(x118%x119))+x120);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x121 = 122U;
	int16_t x122 = INT16_MIN;
	volatile int8_t x123 = 2;
	static volatile int64_t x124 = 234LL;

	t28 = ((x121<=(x122%x123))+x124);

	if (t28 != 234LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x127 = INT64_MAX;
	uint8_t x128 = 1U;

	t29 = ((x125<=(x126%x127))+x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = 0U;
	volatile int64_t x131 = INT64_MIN;
	uint16_t x132 = 6U;
	int32_t t30 = -1;

	t30 = ((x129<=(x130%x131))+x132);

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x133 = -1569;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	volatile int32_t x136 = -320336531;
	static int32_t t31 = 1350207;

	t31 = ((x133<=(x134%x135))+x136);

	if (t31 != -320336531) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	static int8_t x138 = INT8_MIN;
	int8_t x140 = -3;
	static int32_t t32 = -708165;

	t32 = ((x137<=(x138%x139))+x140);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = 4U;
	static volatile uint64_t x143 = 208564621LLU;
	static int32_t t33 = 0;

	t33 = ((x141<=(x142%x143))+x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -25496LL;
	int16_t x146 = -1;
	uint8_t x147 = 2U;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t34 = 494185239U;

	t34 = ((x145<=(x146%x147))+x148);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	static int8_t x150 = INT8_MIN;
	uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 6070U;
	int32_t t35 = -2811;

	t35 = ((x149<=(x150%x151))+x152);

	if (t35 != 6071) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	volatile uint16_t x155 = 1U;
	int64_t x156 = -1LL;

	t36 = ((x153<=(x154%x155))+x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = 9;
	int16_t x160 = INT16_MIN;
	int32_t t37 = 8839478;

	t37 = ((x157<=(x158%x159))+x160);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 1U;
	int8_t x163 = INT8_MIN;
	int32_t t38 = 390947571;

	t38 = ((x161<=(x162%x163))+x164);

	if (t38 != 44) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -1LL;
	int16_t x170 = -85;
	volatile uint16_t x171 = 16783U;
	static int64_t x172 = 12LL;
	int64_t t39 = -1373169084274108146LL;

	t39 = ((x169<=(x170%x171))+x172);

	if (t39 != 12LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x174 = UINT64_MAX;
	volatile int64_t x176 = -1LL;
	int64_t t40 = 139288074890811390LL;

	t40 = ((x173<=(x174%x175))+x176);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = UINT64_MAX;
	static int64_t x178 = INT64_MIN;
	int32_t x179 = 95;
	volatile int16_t x180 = 11380;
	volatile int32_t t41 = -3;

	t41 = ((x177<=(x178%x179))+x180);

	if (t41 != 11380) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 8U;
	static int64_t x182 = -1LL;
	int64_t x183 = -1LL;
	int8_t x184 = -1;
	int32_t t42 = -1;

	t42 = ((x181<=(x182%x183))+x184);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -1;
	volatile int32_t x186 = INT32_MIN;
	volatile int32_t t43 = 1;

	t43 = ((x185<=(x186%x187))+x188);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MAX;
	static int64_t x191 = INT64_MIN;
	volatile int32_t t44 = -24;

	t44 = ((x189<=(x190%x191))+x192);

	if (t44 != -7347) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MAX;
	static uint8_t x195 = 9U;
	int32_t t45 = 201;

	t45 = ((x193<=(x194%x195))+x196);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MAX;
	int64_t x198 = -1LL;
	int64_t x199 = INT64_MAX;
	uint8_t x200 = 12U;
	int32_t t46 = 80801660;

	t46 = ((x197<=(x198%x199))+x200);

	if (t46 != 12) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -63LL;
	volatile int64_t x202 = 131921726295LL;
	volatile int32_t t47 = 87276370;

	t47 = ((x201<=(x202%x203))+x204);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = INT16_MIN;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MIN;
	volatile int8_t x208 = INT8_MIN;
	static volatile int32_t t48 = -124020;

	t48 = ((x205<=(x206%x207))+x208);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	uint32_t x214 = 23U;
	int16_t x216 = INT16_MIN;
	volatile int32_t t49 = -31596;

	t49 = ((x213<=(x214%x215))+x216);

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x217 = 0;
	int32_t x218 = INT32_MIN;
	int64_t x219 = 87946998518480479LL;
	int32_t x220 = INT32_MAX;
	static int32_t t50 = INT32_MAX;

	t50 = ((x217<=(x218%x219))+x220);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = -54755766;
	static uint16_t x222 = 7691U;
	int64_t x223 = INT64_MAX;
	static int32_t t51 = -25365175;

	t51 = ((x221<=(x222%x223))+x224);

	if (t51 != 256) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 64919612688329149LLU;
	static volatile int16_t x226 = INT16_MAX;
	volatile int8_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	static uint64_t t52 = UINT64_MAX;

	t52 = ((x225<=(x226%x227))+x228);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = -1;
	int32_t x230 = 82344;
	int8_t x231 = INT8_MIN;
	int8_t x232 = -1;

	t53 = ((x229<=(x230%x231))+x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	static int32_t t54 = 1;

	t54 = ((x233<=(x234%x235))+x236);

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x237 = UINT16_MAX;
	static int16_t x240 = INT16_MIN;
	int32_t t55 = -1152528;

	t55 = ((x237<=(x238%x239))+x240);

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = 7690293;
	volatile uint64_t x242 = UINT64_MAX;
	uint32_t x243 = 38968U;
	volatile int8_t x244 = 0;
	static volatile int32_t t56 = -2;

	t56 = ((x241<=(x242%x243))+x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = INT64_MIN;
	static int8_t x247 = -1;
	volatile int32_t t57 = -8123;

	t57 = ((x245<=(x246%x247))+x248);

	if (t57 != 65536) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x249 = INT32_MIN;
	static volatile uint64_t x250 = 606932226016LLU;
	static uint16_t x251 = 235U;
	static volatile uint8_t x252 = 55U;

	t58 = ((x249<=(x250%x251))+x252);

	if (t58 != 55) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t59 = -49312;

	t59 = ((x253<=(x254%x255))+x256);

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = 125U;
	static int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	volatile int64_t t60 = INT64_MIN;

	t60 = ((x257<=(x258%x259))+x260);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -1LL;
	uint8_t x262 = UINT8_MAX;
	uint64_t x263 = 1021593194LLU;
	volatile int32_t x264 = -1;
	static int32_t t61 = 3645866;

	t61 = ((x261<=(x262%x263))+x264);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x266 = 1294590374723613524LLU;
	int16_t x267 = 4418;
	int16_t x268 = 17;
	static volatile int32_t t62 = -3873089;

	t62 = ((x265<=(x266%x267))+x268);

	if (t62 != 17) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 1U;
	volatile int32_t t63 = 84110;

	t63 = ((x269<=(x270%x271))+x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = -1;
	int64_t x274 = INT64_MIN;
	static int8_t x275 = INT8_MAX;
	int64_t x276 = 7323575048295217LL;
	static int64_t t64 = 2871617841681671LL;

	t64 = ((x273<=(x274%x275))+x276);

	if (t64 != 7323575048295218LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = 3307679003763LLU;
	volatile uint8_t x278 = 6U;
	uint32_t x279 = 97578U;
	uint8_t x280 = 1U;
	volatile int32_t t65 = -979473066;

	t65 = ((x277<=(x278%x279))+x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = 1022987;
	volatile int32_t x282 = 7800;
	volatile int8_t x284 = -30;
	int32_t t66 = 3333434;

	t66 = ((x281<=(x282%x283))+x284);

	if (t66 != -30) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x285 = 14;
	static int32_t x286 = 65;
	volatile int64_t x287 = -1LL;
	int64_t x288 = 252056377507LL;

	t67 = ((x285<=(x286%x287))+x288);

	if (t67 != 252056377507LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -3LL;
	int8_t x290 = -6;
	int32_t x291 = -1;
	static uint32_t t68 = 64481U;

	t68 = ((x289<=(x290%x291))+x292);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x297 = 2043U;
	int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t69 = -512232466;

	t69 = ((x297<=(x298%x299))+x300);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x301 = 7;
	static uint32_t x302 = UINT32_MAX;
	int16_t x304 = INT16_MIN;

	t70 = ((x301<=(x302%x303))+x304);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = INT16_MAX;
	int16_t x307 = -15848;
	int16_t x308 = -3147;

	t71 = ((x305<=(x306%x307))+x308);

	if (t71 != -3146) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x310 = 703420627U;
	int8_t x311 = INT8_MIN;
	int16_t x312 = -336;

	t72 = ((x309<=(x310%x311))+x312);

	if (t72 != -336) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x313 = 609U;
	uint32_t x314 = 1009679819U;
	uint64_t x315 = 13905860767LLU;
	int8_t x316 = INT8_MIN;
	volatile int32_t t73 = 238676451;

	t73 = ((x313<=(x314%x315))+x316);

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = -1;
	volatile int64_t x318 = -1LL;
	static int8_t x319 = -15;
	uint16_t x320 = 0U;
	volatile int32_t t74 = -92617;

	t74 = ((x317<=(x318%x319))+x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x322 = 33;
	uint16_t x324 = 6U;
	int32_t t75 = 460012351;

	t75 = ((x321<=(x322%x323))+x324);

	if (t75 != 6) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x327 = INT64_MIN;
	static int16_t x328 = -1;
	volatile int32_t t76 = -185531555;

	t76 = ((x325<=(x326%x327))+x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = -1LL;
	int32_t x330 = -1;
	uint16_t x332 = UINT16_MAX;
	static int32_t t77 = 2036;

	t77 = ((x329<=(x330%x331))+x332);

	if (t77 != 65536) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x333 = 4;
	int32_t x334 = INT32_MIN;
	uint16_t x335 = 7U;

	t78 = ((x333<=(x334%x335))+x336);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x337 = 23940421U;
	int32_t x338 = -1;
	int64_t x339 = INT64_MAX;
	volatile uint8_t x340 = 40U;
	static int32_t t79 = -370445;

	t79 = ((x337<=(x338%x339))+x340);

	if (t79 != 40) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -1;
	int8_t x342 = 0;
	static uint8_t x343 = 30U;
	uint32_t x344 = UINT32_MAX;
	uint32_t t80 = 328U;

	t80 = ((x341<=(x342%x343))+x344);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = INT32_MIN;
	static volatile uint32_t x346 = 17226194U;
	static uint16_t x347 = 30386U;
	uint64_t x348 = 99147048379282LLU;
	volatile uint64_t t81 = 888031LLU;

	t81 = ((x345<=(x346%x347))+x348);

	if (t81 != 99147048379282LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x349 = 92LLU;
	uint32_t x350 = 14824U;
	static int8_t x351 = 1;
	static volatile int8_t x352 = INT8_MAX;
	static int32_t t82 = -1;

	t82 = ((x349<=(x350%x351))+x352);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = 92433503383556836LLU;

	t83 = ((x353<=(x354%x355))+x356);

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = 7690;
	volatile uint8_t x359 = UINT8_MAX;
	volatile uint16_t x360 = 10U;
	static volatile int32_t t84 = 7;

	t84 = ((x357<=(x358%x359))+x360);

	if (t84 != 11) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x361 = INT32_MAX;
	int32_t x362 = INT32_MIN;
	volatile uint64_t x363 = 600774LLU;
	static volatile uint64_t t85 = 3458740131LLU;

	t85 = ((x361<=(x362%x363))+x364);

	if (t85 != 442019015LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x366 = INT64_MIN;
	int16_t x367 = 1858;
	static uint16_t x368 = UINT16_MAX;

	t86 = ((x365<=(x366%x367))+x368);

	if (t86 != 65536) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = INT8_MIN;
	volatile uint16_t x370 = 1U;
	int8_t x372 = 11;
	volatile int32_t t87 = 65228;

	t87 = ((x369<=(x370%x371))+x372);

	if (t87 != 12) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x375 = 2;
	static uint8_t x376 = 0U;
	int32_t t88 = -14509;

	t88 = ((x373<=(x374%x375))+x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MAX;
	int64_t x378 = 212714433125LL;
	uint8_t x379 = 3U;
	volatile int32_t x380 = INT32_MAX;
	volatile int32_t t89 = INT32_MAX;

	t89 = ((x377<=(x378%x379))+x380);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MAX;
	volatile uint32_t x382 = UINT32_MAX;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MAX;
	int32_t t90 = INT32_MAX;

	t90 = ((x381<=(x382%x383))+x384);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 20U;
	volatile uint16_t x387 = UINT16_MAX;
	volatile uint32_t x388 = 87670U;
	uint32_t t91 = 5U;

	t91 = ((x385<=(x386%x387))+x388);

	if (t91 != 87670U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x390 = UINT64_MAX;
	static int8_t x392 = -1;
	int32_t t92 = -23712;

	t92 = ((x389<=(x390%x391))+x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x393 = 241U;
	static volatile int16_t x394 = INT16_MIN;
	static int64_t x395 = 1556073916368LL;
	int64_t x396 = 3LL;
	int64_t t93 = -162901317LL;

	t93 = ((x393<=(x394%x395))+x396);

	if (t93 != 3LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x398 = INT64_MIN;
	int32_t t94 = 96;

	t94 = ((x397<=(x398%x399))+x400);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	uint64_t x402 = 1978309259LLU;
	uint32_t x403 = 23420362U;
	volatile int64_t x404 = 393507833119LL;
	volatile int64_t t95 = -309740548879587LL;

	t95 = ((x401<=(x402%x403))+x404);

	if (t95 != 393507833119LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x406 = UINT32_MAX;
	static uint64_t x407 = 18LLU;
	static uint32_t x408 = UINT32_MAX;
	uint32_t t96 = UINT32_MAX;

	t96 = ((x405<=(x406%x407))+x408);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x410 = INT32_MIN;
	uint16_t x411 = UINT16_MAX;
	uint16_t x412 = UINT16_MAX;
	static volatile int32_t t97 = -878701455;

	t97 = ((x409<=(x410%x411))+x412);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x413 = 17731400LLU;
	volatile int32_t x414 = INT32_MIN;
	volatile int8_t x415 = INT8_MAX;
	int8_t x416 = 23;
	volatile int32_t t98 = 274078444;

	t98 = ((x413<=(x414%x415))+x416);

	if (t98 != 24) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = INT64_MAX;
	int32_t x418 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	int32_t t99 = INT32_MIN;

	t99 = ((x417<=(x418%x419))+x420);

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

