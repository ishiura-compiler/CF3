#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = 1261466U;
uint64_t t1 = 6537097LLU;
int16_t x22 = -1;
int32_t t5 = -17;
uint16_t x31 = 3U;
uint32_t x34 = UINT32_MAX;
static volatile int8_t x35 = 4;
int8_t x52 = INT8_MAX;
int32_t x53 = -46436740;
int32_t t11 = -605416;
uint16_t x64 = 7U;
volatile int16_t x70 = INT16_MIN;
int8_t x71 = INT8_MIN;
volatile int16_t x87 = 4;
int8_t x97 = 2;
int32_t x101 = -10562;
volatile int32_t x103 = INT32_MIN;
int64_t t22 = 10505206LL;
static int32_t x115 = 1241813;
static uint8_t x119 = 2U;
uint64_t x121 = 1599412070876227LLU;
volatile int64_t t26 = 1398300LL;
int32_t x135 = INT32_MAX;
static volatile int8_t x136 = -3;
static volatile int32_t t28 = 113;
int32_t x150 = -1;
static int32_t x151 = 354;
volatile int32_t t32 = -1;
volatile uint64_t t34 = 18562LLU;
int8_t x163 = -1;
int16_t x164 = 271;
int16_t x179 = INT16_MAX;
static uint16_t x197 = 43U;
int8_t x198 = INT8_MIN;
int32_t x206 = INT32_MIN;
int64_t x217 = INT64_MIN;
volatile uint16_t x223 = 107U;
static volatile int64_t t50 = 3158291716027LL;
int8_t x238 = INT8_MIN;
int64_t t51 = 7856053231137042LL;
volatile uint32_t x246 = 227105U;
uint16_t x255 = 589U;
uint64_t x267 = UINT64_MAX;
int16_t x268 = INT16_MAX;
int8_t x269 = INT8_MAX;
int32_t x274 = -38;
static volatile uint32_t t58 = 1888U;
volatile int64_t t59 = -138490412169937732LL;
static int32_t x282 = INT32_MAX;
static int16_t x291 = INT16_MAX;
uint8_t x295 = 2U;
volatile int64_t t65 = 51230225261LL;
static int32_t x310 = -235;
uint64_t x317 = UINT64_MAX;
int32_t x330 = 2546010;
uint8_t x331 = UINT8_MAX;
volatile int32_t t70 = 10105834;
int8_t x336 = 3;
int8_t x338 = INT8_MIN;
int8_t x339 = -16;
volatile int8_t x348 = -1;
volatile uint32_t t73 = 915U;
int16_t x353 = INT16_MIN;
int8_t x358 = 1;
volatile int16_t x361 = INT16_MIN;
volatile int16_t x365 = INT16_MIN;
uint16_t x369 = UINT16_MAX;
uint8_t x371 = UINT8_MAX;
uint32_t x372 = 20423U;
static int8_t x373 = 1;
volatile int16_t x376 = -1;
static volatile uint16_t x377 = UINT16_MAX;
int32_t x378 = INT32_MIN;
int8_t x383 = 34;
static int32_t t81 = -258639;
static uint8_t x398 = 0U;
int8_t x401 = 0;
int16_t x404 = INT16_MIN;
uint64_t x420 = UINT64_MAX;
volatile uint64_t t87 = 205379013694072677LLU;
volatile uint64_t t88 = 1426082392LLU;
static int64_t x425 = INT64_MAX;
uint64_t x426 = 547517537157199LLU;
int8_t x427 = INT8_MAX;
int64_t x430 = -11LL;
volatile int16_t x432 = INT16_MAX;
static uint64_t x434 = 59855003LLU;
uint32_t x439 = 167166631U;
int32_t x440 = INT32_MAX;
volatile int64_t x441 = 4213454012LL;
static uint32_t x449 = 1011074U;
static int16_t x457 = -49;
volatile int16_t x459 = INT16_MAX;
int32_t x461 = -76;
int16_t x463 = -3854;
uint8_t x464 = 15U;
volatile int32_t t96 = 8;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static uint8_t x2 = 121U;
	static int32_t x4 = -202;
	volatile int64_t t0 = 135220LL;

	t0 = ((x1+(x2==x3))+x4);

	if (t0 != 9223372036854775605LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	volatile uint64_t x7 = 1026961117846466650LLU;
	uint64_t x8 = 27429145276LLU;

	t1 = ((x5+(x6==x7))+x8);

	if (t1 != 9223372064283921084LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 965U;
	static uint64_t x10 = 2882032970LLU;
	static uint8_t x11 = UINT8_MAX;
	int16_t x12 = -1;
	static uint32_t t2 = 3017U;

	t2 = ((x9+(x10==x11))+x12);

	if (t2 != 964U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 91161652LL;
	int32_t x14 = INT32_MAX;
	uint16_t x15 = UINT16_MAX;
	static uint16_t x16 = 322U;
	volatile int64_t t3 = -889809351LL;

	t3 = ((x13+(x14==x15))+x16);

	if (t3 != 91161974LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = -69;
	uint64_t x18 = 2LLU;
	int16_t x19 = -1;
	volatile int64_t x20 = -1LL;
	int64_t t4 = -171LL;

	t4 = ((x17+(x18==x19))+x20);

	if (t4 != -70LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -29;
	static uint8_t x23 = 76U;
	static volatile int16_t x24 = -189;

	t5 = ((x21+(x22==x23))+x24);

	if (t5 != -218) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	uint16_t x30 = 38U;
	uint8_t x32 = 1U;
	static int32_t t6 = -15;

	t6 = ((x29+(x30==x31))+x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	static int32_t x36 = 0;
	volatile int32_t t7 = -64;

	t7 = ((x33+(x34==x35))+x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	static uint32_t x38 = 32686000U;
	int64_t x39 = 195227359883677857LL;
	int16_t x40 = -9873;
	volatile int64_t t8 = -481485163468555LL;

	t8 = ((x37+(x38==x39))+x40);

	if (t8 != -9874LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x45 = 1U;
	int64_t x46 = INT64_MIN;
	volatile int16_t x47 = -11;
	uint8_t x48 = 29U;
	static int32_t t9 = 362594;

	t9 = ((x45+(x46==x47))+x48);

	if (t9 != 30) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = INT16_MIN;
	static volatile int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MIN;
	volatile int32_t t10 = 44506100;

	t10 = ((x49+(x50==x51))+x52);

	if (t10 != -32641) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x54 = UINT32_MAX;
	static int32_t x55 = 4659022;
	int16_t x56 = INT16_MIN;

	t11 = ((x53+(x54==x55))+x56);

	if (t11 != -46469508) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x61 = -1;
	int8_t x62 = -1;
	int32_t x63 = INT32_MIN;
	static volatile int32_t t12 = 2;

	t12 = ((x61+(x62==x63))+x64);

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x65 = INT64_MAX;
	int8_t x66 = -3;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = INT8_MIN;
	volatile int64_t t13 = -1793816746LL;

	t13 = ((x65+(x66==x67))+x68);

	if (t13 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x69 = UINT64_MAX;
	volatile uint16_t x72 = 3727U;
	uint64_t t14 = 9148324778828572277LLU;

	t14 = ((x69+(x70==x71))+x72);

	if (t14 != 3726LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 1872LLU;
	int16_t x74 = 10;
	int16_t x75 = -1;
	int8_t x76 = -1;
	uint64_t t15 = 1360LLU;

	t15 = ((x73+(x74==x75))+x76);

	if (t15 != 1871LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x81 = 0U;
	static uint32_t x82 = 1063795872U;
	uint16_t x83 = 0U;
	volatile int32_t x84 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = ((x81+(x82==x83))+x84);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x85 = 267;
	int16_t x86 = INT16_MIN;
	uint8_t x88 = 0U;
	volatile int32_t t17 = 284439;

	t17 = ((x85+(x86==x87))+x88);

	if (t17 != 267) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = 3075;
	static int64_t x90 = -34731952643LL;
	static int8_t x91 = INT8_MIN;
	static int64_t x92 = INT64_MIN;
	volatile int64_t t18 = -954LL;

	t18 = ((x89+(x90==x91))+x92);

	if (t18 != -9223372036854772733LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 158956393575503250LLU;
	static int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	static volatile uint64_t t19 = 1214489494822665412LLU;

	t19 = ((x93+(x94==x95))+x96);

	if (t19 != 158956397870470545LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x98 = INT8_MAX;
	int8_t x99 = -49;
	uint16_t x100 = 88U;
	int32_t t20 = 2605;

	t20 = ((x97+(x98==x99))+x100);

	if (t20 != 90) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x102 = INT8_MIN;
	uint16_t x104 = 49U;
	volatile int32_t t21 = -7184;

	t21 = ((x101+(x102==x103))+x104);

	if (t21 != -10513) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MAX;
	int8_t x106 = 34;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MIN;

	t22 = ((x105+(x106==x107))+x108);

	if (t22 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 60U;
	volatile int64_t x116 = 261052130774924LL;
	int64_t t23 = 33061587887906965LL;

	t23 = ((x113+(x114==x115))+x116);

	if (t23 != 261056425742219LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x117 = 1;
	int16_t x118 = INT16_MIN;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t24 = 3120406;

	t24 = ((x117+(x118==x119))+x120);

	if (t24 != 65536) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x122 = 85U;
	static int64_t x123 = INT64_MIN;
	static int32_t x124 = -15797;
	static volatile uint64_t t25 = 485LLU;

	t25 = ((x121+(x122==x123))+x124);

	if (t25 != 1599412070860430LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x125 = UINT32_MAX;
	volatile int8_t x126 = -1;
	static uint64_t x127 = 550946LLU;
	int64_t x128 = -1LL;

	t26 = ((x125+(x126==x127))+x128);

	if (t26 != 4294967294LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MAX;
	uint16_t x131 = 12U;
	volatile int8_t x132 = 1;
	static volatile int32_t t27 = 3501;

	t27 = ((x129+(x130==x131))+x132);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = INT32_MAX;
	static int32_t x134 = INT32_MIN;

	t28 = ((x133+(x134==x135))+x136);

	if (t28 != 2147483644) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = -1LL;
	volatile int32_t x138 = INT32_MAX;
	int8_t x139 = -1;
	int64_t x140 = -33263181753999LL;
	int64_t t29 = -2022897448LL;

	t29 = ((x137+(x138==x139))+x140);

	if (t29 != -33263181754000LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x141 = 398;
	static volatile int64_t x142 = INT64_MAX;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = -97;
	volatile int32_t t30 = -229171642;

	t30 = ((x141+(x142==x143))+x144);

	if (t30 != 301) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x145 = INT16_MIN;
	static int8_t x146 = INT8_MIN;
	int8_t x147 = 38;
	int16_t x148 = INT16_MIN;
	volatile int32_t t31 = -3832;

	t31 = ((x145+(x146==x147))+x148);

	if (t31 != -65536) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = 2633;
	int8_t x152 = INT8_MAX;

	t32 = ((x149+(x150==x151))+x152);

	if (t32 != 2760) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MAX;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	uint8_t x156 = UINT8_MAX;
	int32_t t33 = 0;

	t33 = ((x153+(x154==x155))+x156);

	if (t33 != 382) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -1LL;
	volatile int32_t x158 = 15858188;
	uint16_t x159 = 0U;
	static uint64_t x160 = 651918418274LLU;

	t34 = ((x157+(x158==x159))+x160);

	if (t34 != 651918418273LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = 2U;
	volatile uint8_t x162 = 1U;
	uint32_t t35 = 547U;

	t35 = ((x161+(x162==x163))+x164);

	if (t35 != 273U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x165 = 53U;
	int64_t x166 = -1LL;
	int32_t x167 = -937;
	volatile int32_t x168 = -1;
	volatile int32_t t36 = 58828;

	t36 = ((x165+(x166==x167))+x168);

	if (t36 != 52) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x169 = 0;
	uint16_t x170 = 754U;
	volatile uint64_t x171 = 42613427130477LLU;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t37 = -1750;

	t37 = ((x169+(x170==x171))+x172);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x173 = 5207U;
	uint16_t x174 = 4U;
	int64_t x175 = 303295161LL;
	int64_t x176 = INT64_MIN;
	volatile int64_t t38 = -8143LL;

	t38 = ((x173+(x174==x175))+x176);

	if (t38 != -9223372036854770601LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x177 = INT16_MIN;
	volatile int8_t x178 = -3;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t39 = -30;

	t39 = ((x177+(x178==x179))+x180);

	if (t39 != -65536) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = 2;
	int8_t x182 = 1;
	int16_t x183 = INT16_MAX;
	int16_t x184 = INT16_MIN;
	int32_t t40 = -579;

	t40 = ((x181+(x182==x183))+x184);

	if (t40 != -32766) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x199 = -1LL;
	static uint64_t x200 = UINT64_MAX;
	volatile uint64_t t41 = 31033060LLU;

	t41 = ((x197+(x198==x199))+x200);

	if (t41 != 42LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MIN;
	int8_t x203 = 1;
	volatile int8_t x204 = 41;
	volatile int32_t t42 = 120;

	t42 = ((x201+(x202==x203))+x204);

	if (t42 != -2147483607) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = INT32_MIN;
	int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MAX;
	int32_t t43 = -1;

	t43 = ((x205+(x206==x207))+x208);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = INT64_MAX;
	volatile uint8_t x211 = UINT8_MAX;
	static int32_t x212 = -209;
	volatile int32_t t44 = -892152210;

	t44 = ((x209+(x210==x211))+x212);

	if (t44 != -337) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = 4531321;
	int32_t x214 = INT32_MAX;
	int8_t x215 = INT8_MIN;
	static int8_t x216 = -1;
	volatile int32_t t45 = 6656460;

	t45 = ((x213+(x214==x215))+x216);

	if (t45 != 4531320) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x218 = -1;
	static uint64_t x219 = 8586201411LLU;
	uint64_t x220 = 1770LLU;
	static uint64_t t46 = 243009527689506LLU;

	t46 = ((x217+(x218==x219))+x220);

	if (t46 != 9223372036854777578LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = -1;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t47 = -5455316;

	t47 = ((x221+(x222==x223))+x224);

	if (t47 != -2147418113) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = -1;
	int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = UINT64_MAX;
	int32_t x228 = -2179;
	volatile int32_t t48 = 32845288;

	t48 = ((x225+(x226==x227))+x228);

	if (t48 != -2180) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x229 = UINT32_MAX;
	volatile uint8_t x230 = 33U;
	int16_t x231 = INT16_MIN;
	int16_t x232 = -1;
	static uint32_t t49 = 516U;

	t49 = ((x229+(x230==x231))+x232);

	if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MIN;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = INT64_MIN;
	int64_t x236 = -25362797298LL;

	t50 = ((x233+(x234==x235))+x236);

	if (t50 != -27510280946LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = 739881076U;
	uint32_t x239 = 125918848U;
	volatile int64_t x240 = -1175119055923LL;

	t51 = ((x237+(x238==x239))+x240);

	if (t51 != -1174379174847LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = UINT64_MAX;
	static uint8_t x247 = 21U;
	static volatile uint8_t x248 = 3U;
	uint64_t t52 = 179367255LLU;

	t52 = ((x245+(x246==x247))+x248);

	if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int64_t x250 = -1512173LL;
	static int64_t x251 = INT64_MAX;
	int8_t x252 = -45;
	uint64_t t53 = 12LLU;

	t53 = ((x249+(x250==x251))+x252);

	if (t53 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = 3LLU;
	int16_t x254 = 86;
	int8_t x256 = INT8_MIN;
	static volatile uint64_t t54 = 55113882335LLU;

	t54 = ((x253+(x254==x255))+x256);

	if (t54 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = -1LL;
	int8_t x258 = -1;
	int64_t x259 = 175LL;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t55 = 61327354121543LLU;

	t55 = ((x257+(x258==x259))+x260);

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MIN;
	volatile uint64_t t56 = 99LLU;

	t56 = ((x265+(x266==x267))+x268);

	if (t56 != 32766LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x270 = INT8_MAX;
	volatile int64_t x271 = -1LL;
	uint32_t x272 = 60880U;
	uint32_t t57 = 6298929U;

	t57 = ((x269+(x270==x271))+x272);

	if (t57 != 61007U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	uint32_t x276 = 407U;

	t58 = ((x273+(x274==x275))+x276);

	if (t58 != 279U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = 98712;
	static uint16_t x278 = 8U;
	int64_t x279 = 0LL;
	int64_t x280 = INT64_MIN;

	t59 = ((x277+(x278==x279))+x280);

	if (t59 != -9223372036854677096LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = 846;
	static int16_t x283 = INT16_MIN;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t60 = 295;

	t60 = ((x281+(x282==x283))+x284);

	if (t60 != -2147482802) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = -1;
	uint32_t x286 = 89577109U;
	static int8_t x287 = -1;
	uint8_t x288 = UINT8_MAX;
	int32_t t61 = 189446456;

	t61 = ((x285+(x286==x287))+x288);

	if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = INT32_MIN;
	static uint16_t x290 = 23349U;
	volatile uint32_t x292 = 49738U;
	volatile uint32_t t62 = 2247U;

	t62 = ((x289+(x290==x291))+x292);

	if (t62 != 2147533386U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x293 = -1;
	int64_t x294 = -1LL;
	int64_t x296 = -1LL;
	int64_t t63 = -1023507148361LL;

	t63 = ((x293+(x294==x295))+x296);

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x301 = 36U;
	static uint16_t x302 = 209U;
	volatile int32_t x303 = INT32_MIN;
	uint64_t x304 = 188290764280547LLU;
	uint64_t t64 = 37309967LLU;

	t64 = ((x301+(x302==x303))+x304);

	if (t64 != 188290764280583LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = 25;
	uint32_t x306 = 6U;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;

	t65 = ((x305+(x306==x307))+x308);

	if (t65 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = 41U;
	uint32_t x311 = 0U;
	int32_t x312 = -1;
	volatile int32_t t66 = -210702;

	t66 = ((x309+(x310==x311))+x312);

	if (t66 != 40) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x314 = -1;
	static uint8_t x315 = 0U;
	int8_t x316 = -45;
	volatile uint64_t t67 = 160110116873LLU;

	t67 = ((x313+(x314==x315))+x316);

	if (t67 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x318 = INT64_MAX;
	volatile int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MAX;
	uint64_t t68 = 280792192698173332LLU;

	t68 = ((x317+(x318==x319))+x320);

	if (t68 != 32766LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x321 = -1;
	int64_t x322 = 2916696212428386376LL;
	volatile int8_t x323 = INT8_MIN;
	volatile int16_t x324 = INT16_MAX;
	int32_t t69 = 3836134;

	t69 = ((x321+(x322==x323))+x324);

	if (t69 != 32766) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = 7557515;
	int8_t x332 = INT8_MAX;

	t70 = ((x329+(x330==x331))+x332);

	if (t70 != 7557642) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x333 = 2044;
	int64_t x334 = -7950LL;
	int8_t x335 = INT8_MIN;
	int32_t t71 = -327092;

	t71 = ((x333+(x334==x335))+x336);

	if (t71 != 2047) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x337 = 0U;
	volatile uint8_t x340 = 50U;
	int32_t t72 = 0;

	t72 = ((x337+(x338==x339))+x340);

	if (t72 != 50) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x345 = UINT32_MAX;
	static uint32_t x346 = 1140974U;
	int8_t x347 = INT8_MAX;

	t73 = ((x345+(x346==x347))+x348);

	if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x354 = INT16_MAX;
	int64_t x355 = INT64_MAX;
	int32_t x356 = 16577;
	volatile int32_t t74 = -679408;

	t74 = ((x353+(x354==x355))+x356);

	if (t74 != -16191) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x357 = 6;
	int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t75 = 460051289;

	t75 = ((x357+(x358==x359))+x360);

	if (t75 != -32762) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x362 = -1;
	uint32_t x363 = 6U;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t76 = 0;

	t76 = ((x361+(x362==x363))+x364);

	if (t76 != -32896) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x366 = -1;
	volatile int32_t x367 = -234007;
	static int16_t x368 = INT16_MIN;
	int32_t t77 = 16536922;

	t77 = ((x365+(x366==x367))+x368);

	if (t77 != -65536) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x370 = UINT16_MAX;
	uint32_t t78 = 3445612U;

	t78 = ((x369+(x370==x371))+x372);

	if (t78 != 85958U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x374 = UINT32_MAX;
	int8_t x375 = 1;
	int32_t t79 = 110;

	t79 = ((x373+(x374==x375))+x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x379 = INT16_MIN;
	int32_t x380 = -3;
	int32_t t80 = -36;

	t80 = ((x377+(x378==x379))+x380);

	if (t80 != 65532) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x381 = 196U;
	int16_t x382 = INT16_MIN;
	uint8_t x384 = 42U;

	t81 = ((x381+(x382==x383))+x384);

	if (t81 != 238) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MAX;
	uint8_t x391 = UINT8_MAX;
	uint16_t x392 = 106U;
	volatile int32_t t82 = 0;

	t82 = ((x389+(x390==x391))+x392);

	if (t82 != -32662) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = INT64_MAX;
	static int8_t x399 = INT8_MIN;
	int64_t x400 = -3LL;
	int64_t t83 = 1368195266794340LL;

	t83 = ((x397+(x398==x399))+x400);

	if (t83 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x402 = 8U;
	int8_t x403 = -46;
	static volatile int32_t t84 = 10695;

	t84 = ((x401+(x402==x403))+x404);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x409 = -7LL;
	int16_t x410 = INT16_MAX;
	int64_t x411 = INT64_MIN;
	int16_t x412 = INT16_MAX;
	volatile int64_t t85 = -712LL;

	t85 = ((x409+(x410==x411))+x412);

	if (t85 != 32760LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x413 = INT64_MIN;
	int16_t x414 = -1;
	int64_t x415 = INT64_MIN;
	int8_t x416 = 52;
	int64_t t86 = -6LL;

	t86 = ((x413+(x414==x415))+x416);

	if (t86 != -9223372036854775756LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x417 = 2U;
	volatile int16_t x418 = INT16_MAX;
	volatile int8_t x419 = -12;

	t87 = ((x417+(x418==x419))+x420);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x421 = 33LLU;
	uint16_t x422 = 0U;
	volatile int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MAX;

	t88 = ((x421+(x422==x423))+x424);

	if (t88 != 32800LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x428 = -2367597;
	int64_t t89 = -17744145930LL;

	t89 = ((x425+(x426==x427))+x428);

	if (t89 != 9223372036852408210LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x429 = -1;
	uint16_t x431 = UINT16_MAX;
	volatile int32_t t90 = 218;

	t90 = ((x429+(x430==x431))+x432);

	if (t90 != 32766) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x433 = 494029137LLU;
	volatile int32_t x435 = INT32_MIN;
	static uint16_t x436 = 646U;
	uint64_t t91 = 211512582658525LLU;

	t91 = ((x433+(x434==x435))+x436);

	if (t91 != 494029783LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = INT8_MIN;
	int32_t x438 = -124430441;
	int32_t t92 = -7;

	t92 = ((x437+(x438==x439))+x440);

	if (t92 != 2147483519) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x442 = INT16_MIN;
	uint8_t x443 = 24U;
	uint8_t x444 = 15U;
	int64_t t93 = 10841415LL;

	t93 = ((x441+(x442==x443))+x444);

	if (t93 != 4213454027LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x450 = INT32_MIN;
	int8_t x451 = INT8_MIN;
	uint64_t x452 = 810LLU;
	uint64_t t94 = 35014859LLU;

	t94 = ((x449+(x450==x451))+x452);

	if (t94 != 1011884LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x458 = -1;
	static int8_t x460 = INT8_MAX;
	static int32_t t95 = -2;

	t95 = ((x457+(x458==x459))+x460);

	if (t95 != 78) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x462 = 760130427LL;

	t96 = ((x461+(x462==x463))+x464);

	if (t96 != -61) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = -60;
	int32_t x466 = 608048;
	uint32_t x467 = 1778U;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t97 = -1051406476;

	t97 = ((x465+(x466==x467))+x468);

	if (t97 != 195) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x473 = -1;
	static volatile uint16_t x474 = 1713U;
	uint32_t x475 = 251U;
	static volatile int64_t x476 = INT64_MAX;
	static volatile int64_t t98 = 7136881LL;

	t98 = ((x473+(x474==x475))+x476);

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x481 = -1;
	uint32_t x482 = 3U;
	int8_t x483 = -38;
	static volatile uint8_t x484 = 1U;
	volatile int32_t t99 = 257353;

	t99 = ((x481+(x482==x483))+x484);

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

