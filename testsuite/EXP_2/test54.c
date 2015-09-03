#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = 8200U;
volatile uint64_t t1 = 124608291680771500LLU;
int16_t x19 = 10017;
int64_t x21 = -1LL;
int8_t x29 = INT8_MAX;
uint16_t x30 = UINT16_MAX;
volatile int8_t x32 = -41;
int64_t t6 = 462590948LL;
uint32_t x39 = 25U;
int64_t x48 = -1873444051944LL;
volatile int64_t t8 = -22157768385194181LL;
static int8_t x51 = INT8_MIN;
int32_t t10 = -43;
uint64_t t11 = 20324LLU;
static volatile int32_t t12 = -69;
uint64_t x67 = 262019008611990830LLU;
uint32_t x82 = UINT32_MAX;
int8_t x86 = INT8_MIN;
volatile int64_t t17 = 6269835094385114LL;
int8_t x92 = 12;
volatile uint64_t t18 = 51995151008LLU;
int16_t x97 = -4;
int16_t x99 = -1;
volatile uint16_t x105 = UINT16_MAX;
uint64_t t20 = 24742938LLU;
int8_t x109 = -1;
volatile int32_t t21 = INT32_MAX;
volatile uint8_t x118 = UINT8_MAX;
uint32_t t24 = 0U;
int64_t t25 = -423LL;
int64_t x137 = -1LL;
int8_t x142 = -41;
volatile int16_t x150 = -1;
volatile int64_t x151 = 192129654139LL;
int64_t t28 = 18787567282538LL;
volatile int8_t x153 = INT8_MIN;
uint16_t x155 = 955U;
int8_t x158 = INT8_MIN;
int16_t x160 = 15;
int32_t x167 = -1;
volatile int8_t x169 = 0;
int16_t x171 = -836;
volatile uint32_t x173 = UINT32_MAX;
volatile int8_t x176 = INT8_MIN;
int64_t x187 = 14LL;
int32_t x192 = INT32_MAX;
int32_t x199 = 17744290;
static uint16_t x202 = UINT16_MAX;
int64_t x205 = -1LL;
static int64_t x207 = -1LL;
uint8_t x210 = UINT8_MAX;
uint8_t x213 = 7U;
volatile uint64_t t44 = 518380189546167525LLU;
static int32_t x226 = INT32_MAX;
volatile int8_t x228 = -1;
uint8_t x230 = 0U;
int16_t x231 = 659;
volatile int32_t t46 = 252;
int16_t x238 = INT16_MIN;
volatile int64_t x241 = INT64_MIN;
static int8_t x244 = 0;
int64_t t49 = 4293218042504998LL;
int64_t x245 = -1LL;
uint16_t x249 = 9U;
int8_t x252 = INT8_MIN;
volatile int64_t t51 = 171084447LL;
int64_t x257 = 251LL;
int8_t x261 = -1;
int16_t x262 = 120;
uint8_t x263 = 27U;
int16_t x278 = INT16_MAX;
int8_t x281 = INT8_MIN;
static int32_t x286 = -1;
static int32_t x288 = -1;
uint64_t x289 = UINT64_MAX;
uint64_t x297 = UINT64_MAX;
static volatile uint64_t t60 = UINT64_MAX;
int16_t x308 = 756;
int32_t x314 = -1;
static int16_t x319 = 217;
static int64_t t64 = 8127082685321LL;
volatile int16_t x326 = -1;
static int64_t x338 = INT64_MIN;
static volatile int16_t x344 = -737;
uint16_t x345 = 6209U;
volatile uint64_t t71 = 2054295LLU;
volatile uint64_t x367 = UINT64_MAX;
int32_t x378 = 7813700;
int8_t x381 = 1;
uint16_t x383 = 2756U;
uint64_t x384 = 1668890211048168980LLU;
volatile int64_t x386 = 6255010LL;
int16_t x390 = 0;
volatile int16_t x396 = INT16_MIN;
volatile uint64_t x405 = 212995027579841411LLU;
int8_t x406 = INT8_MIN;
uint16_t x407 = UINT16_MAX;
uint64_t t86 = 6LLU;
uint16_t x442 = 12992U;
int8_t x444 = 0;
static int64_t x452 = -1009529LL;
volatile int64_t t91 = -5LL;
static volatile int8_t x464 = -1;
int64_t x468 = -1LL;
volatile int32_t t97 = -246104886;
static uint32_t x485 = 8U;
uint16_t x488 = 68U;


void f0(void) {
	uint32_t x1 = 6U;
	int16_t x2 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	uint32_t t0 = 351848U;

	t0 = ((x1%(x2+x3))-x4);

	if (t0 != 134U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = -240LL;
	uint64_t x7 = 15206576845LLU;
	int32_t x8 = INT32_MAX;

	t1 = ((x5%(x6+x7))-x8);

	if (t1 != 18446744072702000337LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	int32_t x14 = INT32_MIN;
	int16_t x15 = 11110;
	int8_t x16 = INT8_MAX;
	int32_t t2 = -27;

	t2 = ((x13%(x14+x15))-x16);

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -35404519;
	int16_t x18 = INT16_MIN;
	int16_t x20 = 1;
	static int32_t t3 = -156357795;

	t3 = ((x17%(x18+x19))-x20);

	if (t3 != -3964) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = -10;
	volatile int64_t x23 = INT64_MAX;
	int64_t x24 = INT64_MIN;
	volatile int64_t t4 = INT64_MAX;

	t4 = ((x21%(x22+x23))-x24);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x31 = INT16_MIN;
	int32_t t5 = -35;

	t5 = ((x29%(x30+x31))-x32);

	if (t5 != 168) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = INT64_MIN;
	int8_t x36 = 12;

	t6 = ((x33%(x34+x35))-x36);

	if (t6 != -2147483660LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x37 = 41U;
	int64_t x38 = -1LL;
	int32_t x40 = -1;
	volatile int64_t t7 = 25090LL;

	t7 = ((x37%(x38+x39))-x40);

	if (t7 != 18LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 13820U;
	uint32_t x46 = 5709U;
	int32_t x47 = -7216;

	t8 = ((x45%(x46+x47))-x48);

	if (t8 != 1873444065764LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x49 = -1;
	uint16_t x50 = UINT16_MAX;
	static volatile int64_t x52 = INT64_MAX;
	int64_t t9 = INT64_MIN;

	t9 = ((x49%(x50+x51))-x52);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	uint16_t x54 = 32642U;
	int16_t x55 = 176;
	int32_t x56 = -1;

	t10 = ((x53%(x54+x55))-x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x57 = 13403LLU;
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 0U;
	static int32_t x60 = 46309452;

	t11 = ((x57%(x58+x59))-x60);

	if (t11 != 18446744073663255567LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 54U;
	volatile int8_t x62 = -5;
	uint16_t x63 = 3U;
	int32_t x64 = INT32_MAX;

	t12 = ((x61%(x62+x63))-x64);

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x65 = 5855U;
	volatile int16_t x66 = INT16_MIN;
	static int16_t x68 = -1;
	volatile uint64_t t13 = 12401664183039450LLU;

	t13 = ((x65%(x66+x67))-x68);

	if (t13 != 5856LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 30950394095396LLU;
	volatile uint64_t x70 = UINT64_MAX;
	int16_t x71 = -944;
	static int32_t x72 = -1;
	uint64_t t14 = 126633308865141LLU;

	t14 = ((x69%(x70+x71))-x72);

	if (t14 != 30950394095397LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x77 = 27315U;
	uint8_t x78 = 3U;
	int16_t x79 = -14657;
	static int8_t x80 = -1;
	static int32_t t15 = -3;

	t15 = ((x77%(x78+x79))-x80);

	if (t15 != 12662) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	static volatile uint64_t x83 = 508LLU;
	static int16_t x84 = 18;
	volatile uint64_t t16 = 13872300934LLU;

	t16 = ((x81%(x82+x83))-x84);

	if (t16 != 109LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = INT16_MIN;
	int16_t x87 = INT16_MAX;
	int64_t x88 = -1LL;

	t17 = ((x85%(x86+x87))-x88);

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x89 = UINT8_MAX;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = 12096;

	t18 = ((x89%(x90+x91))-x92);

	if (t18 != 243LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x98 = -961859376;
	uint8_t x100 = 34U;
	int32_t t19 = 1529;

	t19 = ((x97%(x98+x99))-x100);

	if (t19 != -38) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x106 = UINT64_MAX;
	int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MIN;

	t20 = ((x105%(x106+x107))-x108);

	if (t20 != 2147549183LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x110 = -31;
	uint8_t x111 = UINT8_MAX;
	static volatile int32_t x112 = INT32_MIN;

	t21 = ((x109%(x110+x111))-x112);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = -1;
	static int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	int64_t t22 = INT64_MAX;

	t22 = ((x117%(x118+x119))-x120);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x125 = 2475U;
	static volatile int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;
	int64_t x128 = 87LL;
	static volatile int64_t t23 = -223894LL;

	t23 = ((x125%(x126+x127))-x128);

	if (t23 != -63LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = 1U;
	int32_t x130 = INT32_MIN;
	static int16_t x131 = 62;
	uint32_t x132 = 67U;

	t24 = ((x129%(x130+x131))-x132);

	if (t24 != 4294967230U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = 1;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = 51U;
	int32_t x136 = -50;

	t25 = ((x133%(x134+x135))-x136);

	if (t25 != 51LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x138 = -9;
	int8_t x139 = INT8_MAX;
	volatile int16_t x140 = INT16_MAX;
	volatile int64_t t26 = 73442880LL;

	t26 = ((x137%(x138+x139))-x140);

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x141 = -251;
	uint16_t x143 = 7112U;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t27 = 1298142;

	t27 = ((x141%(x142+x143))-x144);

	if (t27 != -65786) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x149 = 3U;
	static int32_t x152 = INT32_MIN;

	t28 = ((x149%(x150+x151))-x152);

	if (t28 != 2147483651LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x154 = 5U;
	int8_t x156 = INT8_MIN;
	volatile int32_t t29 = 103;

	t29 = ((x153%(x154+x155))-x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = INT32_MAX;
	static uint64_t x159 = 339LLU;
	volatile uint64_t t30 = 883LLU;

	t30 = ((x157%(x158+x159))-x160);

	if (t30 != 115LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MIN;
	uint32_t x166 = 419U;
	uint16_t x168 = 331U;
	volatile uint32_t t31 = 122U;

	t31 = ((x165%(x166+x167))-x168);

	if (t31 != 4294966995U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x170 = -1;
	uint16_t x172 = 107U;
	int32_t t32 = -3612;

	t32 = ((x169%(x170+x171))-x172);

	if (t32 != -107) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x174 = -30;
	uint32_t x175 = UINT32_MAX;
	volatile uint32_t t33 = 9U;

	t33 = ((x173%(x174+x175))-x176);

	if (t33 != 158U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = -3;
	int32_t x179 = -15449;
	int32_t x180 = INT32_MIN;
	int32_t t34 = -22;

	t34 = ((x177%(x178+x179))-x180);

	if (t34 != 2147481784) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = 8942;
	uint64_t x183 = 8428LLU;
	int8_t x184 = INT8_MIN;
	volatile uint64_t t35 = 1956570152LLU;

	t35 = ((x181%(x182+x183))-x184);

	if (t35 != 14536LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x185 = -1956;
	int8_t x186 = -1;
	int8_t x188 = INT8_MIN;
	static int64_t t36 = -1678526393567176679LL;

	t36 = ((x185%(x186+x187))-x188);

	if (t36 != 122LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x189 = -1;
	int16_t x190 = INT16_MIN;
	int8_t x191 = -1;
	volatile int32_t t37 = INT32_MIN;

	t37 = ((x189%(x190+x191))-x192);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x193 = UINT64_MAX;
	uint16_t x194 = UINT16_MAX;
	static int64_t x195 = INT64_MIN;
	uint16_t x196 = 792U;
	uint64_t t38 = 25637913020885LLU;

	t38 = ((x193%(x194+x195))-x196);

	if (t38 != 9223372036854709480LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	uint32_t x200 = 424999866U;
	static int64_t t39 = -1LL;

	t39 = ((x197%(x198+x199))-x200);

	if (t39 != -425032634LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = -1LL;
	int64_t x203 = -1LL;
	static int32_t x204 = INT32_MIN;
	volatile int64_t t40 = 254001121587674698LL;

	t40 = ((x201%(x202+x203))-x204);

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x206 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	volatile int64_t t41 = -223394LL;

	t41 = ((x205%(x206+x207))-x208);

	if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = -23517;
	uint16_t x211 = UINT16_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t42 = 0;

	t42 = ((x209%(x210+x211))-x212);

	if (t42 != -89052) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x214 = 5;
	uint16_t x215 = UINT16_MAX;
	volatile int16_t x216 = INT16_MIN;
	int32_t t43 = -646573903;

	t43 = ((x213%(x214+x215))-x216);

	if (t43 != 32775) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x217 = 28U;
	int8_t x218 = INT8_MAX;
	uint64_t x219 = UINT64_MAX;
	static int32_t x220 = INT32_MIN;

	t44 = ((x217%(x218+x219))-x220);

	if (t44 != 2147483676LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = -3511;
	int16_t x227 = INT16_MIN;
	volatile int32_t t45 = 1;

	t45 = ((x225%(x226+x227))-x228);

	if (t45 != -3510) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = INT8_MIN;
	volatile uint16_t x232 = UINT16_MAX;

	t46 = ((x229%(x230+x231))-x232);

	if (t46 != -65663) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = -17412747497LL;
	uint16_t x234 = 4U;
	static int64_t x235 = -1LL;
	int16_t x236 = -103;
	volatile int64_t t47 = -88514020LL;

	t47 = ((x233%(x234+x235))-x236);

	if (t47 != 101LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x237 = -1;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -349;
	volatile int32_t t48 = 1664;

	t48 = ((x237%(x238+x239))-x240);

	if (t48 != 348) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x242 = INT32_MIN;
	volatile int64_t x243 = 1221022482376184820LL;

	t49 = ((x241%(x242+x243))-x244);

	if (t49 != -676214675253867604LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x246 = -1;
	volatile int64_t x247 = -1LL;
	int16_t x248 = -5818;
	volatile int64_t t50 = -7903478647929LL;

	t50 = ((x245%(x246+x247))-x248);

	if (t50 != 5817LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x250 = -4;
	int64_t x251 = -1LL;

	t51 = ((x249%(x250+x251))-x252);

	if (t51 != 132LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = 56;
	uint32_t x255 = 13030U;
	static int16_t x256 = INT16_MAX;
	volatile uint32_t t52 = 32835U;

	t52 = ((x253%(x254+x255))-x256);

	if (t52 != 4294945764U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x258 = UINT8_MAX;
	int32_t x259 = 162;
	static int32_t x260 = INT32_MIN;
	int64_t t53 = -91LL;

	t53 = ((x257%(x258+x259))-x260);

	if (t53 != 2147483899LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x264 = -868;
	int32_t t54 = -528;

	t54 = ((x261%(x262+x263))-x264);

	if (t54 != 867) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = INT16_MIN;
	static uint32_t x274 = 6U;
	volatile uint64_t x275 = 397639473964LLU;
	volatile int8_t x276 = -1;
	uint64_t t55 = 1208902650LLU;

	t55 = ((x273%(x274+x275))-x276);

	if (t55 != 351569987599LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = INT32_MAX;
	int16_t x279 = -3716;
	int8_t x280 = -3;
	int32_t t56 = 472326;

	t56 = ((x277%(x278+x279))-x280);

	if (t56 != 4679) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x282 = INT32_MAX;
	uint32_t x283 = 33U;
	static uint32_t x284 = 1U;
	volatile uint32_t t57 = 7U;

	t57 = ((x281%(x282+x283))-x284);

	if (t57 != 2147483487U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x285 = INT64_MAX;
	static uint8_t x287 = UINT8_MAX;
	int64_t t58 = 4091LL;

	t58 = ((x285%(x286+x287))-x288);

	if (t58 != 128LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x290 = -1102095707597264730LL;
	int16_t x291 = INT16_MAX;
	int32_t x292 = INT32_MIN;
	static volatile uint64_t t59 = 134886348615211LLU;

	t59 = ((x289%(x290+x291))-x292);

	if (t59 != 1102095709744715610LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MIN;
	int8_t x300 = 1;

	t60 = ((x297%(x298+x299))-x300);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = 360;
	volatile int64_t x302 = INT64_MAX;
	int64_t x303 = -1550315420072869LL;
	int64_t x304 = 256004752133309431LL;
	volatile int64_t t61 = 431377269114013LL;

	t61 = ((x301%(x302+x303))-x304);

	if (t61 != -256004752133309071LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x305 = INT64_MIN;
	static int8_t x306 = 0;
	static int32_t x307 = -494119;
	volatile int64_t t62 = -175713744LL;

	t62 = ((x305%(x306+x307))-x308);

	if (t62 != -25170LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x313 = INT8_MAX;
	int32_t x315 = 1791343;
	int8_t x316 = -1;
	static volatile int32_t t63 = 1;

	t63 = ((x313%(x314+x315))-x316);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = -1LL;
	volatile int32_t x318 = INT32_MIN;
	uint16_t x320 = 18175U;

	t64 = ((x317%(x318+x319))-x320);

	if (t64 != -18176LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = 19581204U;
	volatile int16_t x323 = 1;
	volatile int8_t x324 = -1;
	volatile uint32_t t65 = 1805651085U;

	t65 = ((x321%(x322+x323))-x324);

	if (t65 != 6650634U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x325 = UINT8_MAX;
	static int8_t x327 = INT8_MAX;
	volatile uint16_t x328 = 5580U;
	volatile int32_t t66 = -289905765;

	t66 = ((x325%(x326+x327))-x328);

	if (t66 != -5577) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x333 = INT32_MIN;
	uint64_t x334 = 3737793953LLU;
	uint8_t x335 = 49U;
	int16_t x336 = INT16_MIN;
	volatile uint64_t t67 = 6LLU;

	t67 = ((x333%(x334+x335))-x336);

	if (t67 != 245001772LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = UINT64_MAX;
	static int64_t x339 = INT64_MAX;
	static int32_t x340 = INT32_MIN;
	uint64_t t68 = 61LLU;

	t68 = ((x337%(x338+x339))-x340);

	if (t68 != 2147483648LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x341 = -1;
	int8_t x342 = 8;
	int64_t x343 = -1LL;
	volatile int64_t t69 = -9642LL;

	t69 = ((x341%(x342+x343))-x344);

	if (t69 != 736LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x346 = 9;
	int64_t x347 = INT64_MIN;
	static int32_t x348 = INT32_MAX;
	int64_t t70 = 17164464198560128LL;

	t70 = ((x345%(x346+x347))-x348);

	if (t70 != -2147477438LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x349 = -32;
	static int32_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;

	t71 = ((x349%(x350+x351))-x352);

	if (t71 != 32736LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x361 = INT8_MIN;
	volatile int8_t x362 = INT8_MIN;
	uint16_t x363 = 16745U;
	volatile int16_t x364 = INT16_MIN;
	static int32_t t72 = 109;

	t72 = ((x361%(x362+x363))-x364);

	if (t72 != 32640) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MIN;
	static volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t73 = 1590LLU;

	t73 = ((x365%(x366+x367))-x368);

	if (t73 != 4294967423LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x369 = -1;
	volatile int32_t x370 = -52186;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t74 = INT32_MAX;

	t74 = ((x369%(x370+x371))-x372);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = 13742;
	uint16_t x375 = 3U;
	int64_t x376 = INT64_MIN;
	int64_t t75 = -27654875LL;

	t75 = ((x373%(x374+x375))-x376);

	if (t75 != 9223372036854769725LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x377 = 467556817513813LLU;
	static int8_t x379 = -1;
	static int64_t x380 = -1LL;
	static uint64_t t76 = 515077468LLU;

	t76 = ((x377%(x378+x379))-x380);

	if (t76 != 1332603LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x382 = INT32_MIN;
	static uint64_t t77 = 36638LLU;

	t77 = ((x381%(x382+x383))-x384);

	if (t77 != 16777853862661382637LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x385 = 42U;
	int64_t x387 = 3506LL;
	int32_t x388 = -44740272;
	volatile int64_t t78 = 240415LL;

	t78 = ((x385%(x386+x387))-x388);

	if (t78 != 44740314LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = 14271996U;
	volatile int16_t x391 = INT16_MAX;
	int32_t x392 = 55;
	volatile uint32_t t79 = 15U;

	t79 = ((x389%(x390+x391))-x392);

	if (t79 != 18296U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x393 = -1LL;
	int64_t x394 = INT64_MAX;
	int8_t x395 = INT8_MIN;
	int64_t t80 = 368331LL;

	t80 = ((x393%(x394+x395))-x396);

	if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x401 = INT32_MAX;
	static volatile int64_t x402 = -509177908143193774LL;
	uint32_t x403 = 6594U;
	uint32_t x404 = 680301724U;
	static int64_t t81 = 0LL;

	t81 = ((x401%(x402+x403))-x404);

	if (t81 != 1467181923LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x408 = 38395LL;
	uint64_t t82 = 217147334053496LLU;

	t82 = ((x405%(x406+x407))-x408);

	if (t82 != 23302LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x413 = UINT64_MAX;
	static uint32_t x414 = 180280U;
	int8_t x415 = INT8_MIN;
	static volatile int8_t x416 = 1;
	volatile uint64_t t83 = 51406355133LLU;

	t83 = ((x413%(x414+x415))-x416);

	if (t83 != 133126LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = 3431928LL;
	static int64_t x419 = INT64_MIN;
	uint8_t x420 = UINT8_MAX;
	static int64_t t84 = 1745247LL;

	t84 = ((x417%(x418+x419))-x420);

	if (t84 != -2147483903LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MAX;
	static uint64_t x423 = UINT64_MAX;
	volatile uint16_t x424 = 1U;
	uint64_t t85 = 202664077904463938LLU;

	t85 = ((x421%(x422+x423))-x424);

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x425 = INT16_MAX;
	volatile uint64_t x426 = 3LLU;
	volatile uint16_t x427 = 434U;
	uint32_t x428 = 1U;

	t86 = ((x425%(x426+x427))-x428);

	if (t86 != 428LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x429 = 17128711405804LLU;
	static int16_t x430 = INT16_MAX;
	uint16_t x431 = 1U;
	int32_t x432 = INT32_MAX;
	uint64_t t87 = 469444LLU;

	t87 = ((x429%(x430+x431))-x432);

	if (t87 != 18446744071562084589LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = INT8_MIN;
	volatile int16_t x434 = -1;
	int8_t x435 = INT8_MIN;
	int64_t x436 = -1LL;
	volatile int64_t t88 = -119999448686LL;

	t88 = ((x433%(x434+x435))-x436);

	if (t88 != -127LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x437 = 1;
	uint64_t x438 = UINT64_MAX;
	int8_t x439 = INT8_MAX;
	int16_t x440 = -115;
	static uint64_t t89 = 34823696423700251LLU;

	t89 = ((x437%(x438+x439))-x440);

	if (t89 != 116LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x441 = INT16_MAX;
	int8_t x443 = -1;
	int32_t t90 = 19;

	t90 = ((x441%(x442+x443))-x444);

	if (t90 != 6785) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x449 = INT16_MIN;
	uint8_t x450 = UINT8_MAX;
	int16_t x451 = INT16_MAX;

	t91 = ((x449%(x450+x451))-x452);

	if (t91 != 976761LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x457 = -27767250;
	uint32_t x458 = 3U;
	volatile int64_t x459 = -1LL;
	int64_t x460 = -1LL;
	static volatile int64_t t92 = -10LL;

	t92 = ((x457%(x458+x459))-x460);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x461 = UINT16_MAX;
	int64_t x462 = -1063273008773258LL;
	int16_t x463 = INT16_MIN;
	static int64_t t93 = 17841769162LL;

	t93 = ((x461%(x462+x463))-x464);

	if (t93 != 65536LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x465 = -1;
	static uint8_t x466 = 19U;
	int32_t x467 = INT32_MIN;
	int64_t t94 = 6907LL;

	t94 = ((x465%(x466+x467))-x468);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x469 = INT32_MAX;
	volatile int8_t x470 = INT8_MAX;
	uint8_t x471 = 14U;
	int16_t x472 = -1;
	volatile int32_t t95 = 1;

	t95 = ((x469%(x470+x471))-x472);

	if (t95 != 68) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x473 = -1;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	uint16_t x476 = UINT16_MAX;
	int32_t t96 = -8520842;

	t96 = ((x473%(x474+x475))-x476);

	if (t96 != -65536) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x481 = -1;
	volatile int8_t x482 = -1;
	uint16_t x483 = 15095U;
	static int8_t x484 = -1;

	t97 = ((x481%(x482+x483))-x484);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x486 = INT8_MIN;
	volatile int16_t x487 = 158;
	static uint32_t t98 = 2U;

	t98 = ((x485%(x486+x487))-x488);

	if (t98 != 4294967236U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x489 = -1;
	uint64_t x490 = 20190324519LLU;
	int8_t x491 = INT8_MIN;
	uint64_t x492 = 25LLU;
	volatile uint64_t t99 = 29987840LLU;

	t99 = ((x489%(x490+x491))-x492);

	if (t99 != 8395153392LLU) { NG(); } else { ; }
	
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

