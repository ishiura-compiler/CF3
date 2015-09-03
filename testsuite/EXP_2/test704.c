#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
static volatile int64_t x10 = -14LL;
uint64_t t1 = 110324LLU;
static int32_t x22 = INT32_MIN;
uint64_t x23 = 9413798796960985LLU;
uint64_t x25 = 127895749LLU;
static uint64_t t4 = 5644LLU;
int64_t x32 = -240390244013584LL;
volatile int64_t t8 = 97726329LL;
uint64_t x51 = 184205914904488LLU;
volatile int64_t x64 = INT64_MAX;
static volatile int64_t t12 = -4LL;
uint64_t x80 = 108045833329955555LLU;
uint16_t x83 = UINT16_MAX;
volatile int64_t x90 = INT64_MAX;
int16_t x96 = 1248;
static volatile int64_t x103 = INT64_MIN;
static int64_t x106 = 209LL;
static volatile int8_t x115 = -2;
int16_t x119 = INT16_MAX;
int32_t x122 = INT32_MIN;
uint32_t x126 = UINT32_MAX;
int32_t x127 = INT32_MIN;
volatile int16_t x146 = 34;
uint32_t t29 = 48355U;
int64_t t31 = -136LL;
int64_t x170 = 2LL;
int8_t x185 = INT8_MAX;
static int16_t x186 = -308;
static uint32_t t36 = 4101005U;
uint32_t x197 = 87U;
int64_t x201 = -35LL;
int32_t x202 = INT32_MAX;
volatile int64_t t39 = 1615LL;
volatile int8_t x209 = -1;
int32_t t40 = 31112;
volatile int64_t t41 = -49264079LL;
uint32_t x220 = 5368U;
int32_t x223 = INT32_MAX;
uint64_t x227 = 51060258LLU;
volatile int64_t x231 = INT64_MIN;
volatile int64_t t45 = -25618757LL;
volatile uint32_t t46 = 248582U;
int16_t x239 = INT16_MIN;
static uint16_t x248 = UINT16_MAX;
int32_t x250 = INT32_MAX;
uint16_t x260 = 0U;
int64_t t51 = -89480433039079457LL;
static int64_t x272 = INT64_MAX;
uint8_t x273 = 4U;
uint16_t x277 = 465U;
int16_t x278 = -1;
int64_t x279 = -260LL;
int64_t t56 = 315LL;
static uint32_t x282 = UINT32_MAX;
uint32_t t57 = 24711993U;
uint64_t x289 = 3581266650709LLU;
int64_t x290 = INT64_MAX;
uint64_t t59 = 26759311LLU;
uint64_t t60 = 26077LLU;
volatile int32_t x304 = INT32_MAX;
uint64_t x306 = 234876LLU;
static volatile uint64_t t62 = 8532322366LLU;
static int32_t x309 = INT32_MIN;
static int32_t x312 = -992;
uint32_t t63 = 131665405U;
volatile int16_t x313 = -1;
int32_t x323 = INT32_MIN;
volatile uint64_t x328 = UINT64_MAX;
static int16_t x330 = -1;
uint32_t x332 = 748286U;
uint32_t x335 = UINT32_MAX;
uint64_t x346 = 20158715128LLU;
static uint32_t x348 = UINT32_MAX;
volatile uint64_t t70 = 498LLU;
int64_t x350 = INT64_MIN;
uint64_t x354 = 932LLU;
static volatile uint64_t t72 = 9342810738774344LLU;
static volatile uint64_t t74 = 191251LLU;
volatile int16_t x371 = -1;
volatile uint64_t t75 = 170299932937176LLU;
int64_t x382 = -1LL;
int32_t x383 = -1;
volatile int64_t t79 = 951526921LL;
int8_t x397 = 1;
int16_t x400 = -26;
uint64_t x403 = 2127086641422LLU;
uint8_t x406 = 36U;
int32_t x410 = INT32_MIN;
int8_t x417 = 1;
int8_t x419 = INT8_MIN;
uint32_t x420 = 4031U;
int64_t t86 = -474803141LL;
uint16_t x425 = 254U;
int32_t x426 = INT32_MIN;
uint32_t x427 = 959U;
int32_t x429 = -1;
uint8_t x437 = 2U;
int8_t x438 = 14;
volatile int8_t x445 = INT8_MIN;
static uint64_t x446 = 6170147923LLU;
int16_t x452 = -349;
volatile uint64_t t93 = 1463782414074LLU;
int8_t x467 = 5;
volatile int32_t t95 = 2;
static volatile int32_t x473 = INT32_MAX;
int32_t t99 = -47265;


void f0(void) {
	volatile int32_t x5 = -1;
	volatile int16_t x6 = -28;
	static uint8_t x8 = UINT8_MAX;
	volatile int32_t t0 = -3016539;

	t0 = ((x5*(x6%x7))-x8);

	if (t0 != -227) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = INT64_MAX;
	uint64_t x11 = 174578LLU;
	static volatile uint16_t x12 = 12U;

	t1 = ((x9*(x10%x11))-x12);

	if (t1 != 18446744073709465174LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -2;
	volatile int8_t x18 = 1;
	int32_t x19 = INT32_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t2 = -13699988LL;

	t2 = ((x17*(x18%x19))-x20);

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = INT8_MIN;
	static uint16_t x24 = 31756U;
	volatile uint64_t t3 = 3LLU;

	t3 = ((x21*(x22%x23))-x24);

	if (t3 != 17792378849325730676LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x26 = 193U;
	static int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MIN;

	t4 = ((x25*(x26%x27))-x28);

	if (t4 != 24683879685LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = 25;
	int16_t x30 = 13;
	int16_t x31 = INT16_MIN;
	int64_t t5 = -228832469257LL;

	t5 = ((x29*(x30%x31))-x32);

	if (t5 != 240390244013909LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = INT8_MAX;
	volatile int8_t x34 = -1;
	uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 92U;
	volatile uint64_t t6 = 94045505264418LLU;

	t6 = ((x33*(x34%x35))-x36);

	if (t6 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 65684533U;
	uint32_t x42 = 1050322899U;
	volatile int16_t x43 = INT16_MAX;
	int16_t x44 = 998;
	static volatile uint32_t t7 = 73U;

	t7 = ((x41*(x42%x43))-x44);

	if (t7 != 4279765751U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = 299014784;

	t8 = ((x45*(x46%x47))-x48);

	if (t8 != -299014784LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x49 = -1;
	volatile int16_t x50 = INT16_MIN;
	int64_t x52 = INT64_MAX;
	static uint64_t t9 = 276785465693735189LLU;

	t9 = ((x49*(x50%x51))-x52);

	if (t9 != 9223192487595589769LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = 39270978;
	volatile uint32_t x54 = 23741U;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = INT8_MIN;
	uint32_t t10 = 4772986U;

	t10 = ((x53*(x54%x55))-x56);

	if (t10 != 324385594U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	volatile int16_t x59 = -14;
	static int8_t x60 = -1;
	int32_t t11 = -20;

	t11 = ((x57*(x58%x59))-x60);

	if (t11 != 32769) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = 2112;
	int64_t x62 = 3550603800933608LL;
	int32_t x63 = -64;

	t12 = ((x61*(x62%x63))-x64);

	if (t12 != -9223372036854691327LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MAX;
	static int16_t x70 = 6024;
	uint32_t x71 = UINT32_MAX;
	int16_t x72 = -1;
	volatile uint32_t t13 = 49708856U;

	t13 = ((x69*(x70%x71))-x72);

	if (t13 != 4294961273U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = -1;
	volatile int16_t x78 = -306;
	int32_t x79 = -1;
	uint64_t t14 = 376201480LLU;

	t14 = ((x77*(x78%x79))-x80);

	if (t14 != 18338698240379596061LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = -1;
	uint32_t x82 = 7940U;
	static int16_t x84 = 11977;
	uint32_t t15 = 6192U;

	t15 = ((x81*(x82%x83))-x84);

	if (t15 != 4294947379U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x85 = INT16_MAX;
	int64_t x86 = INT64_MIN;
	uint32_t x87 = 1U;
	uint16_t x88 = 13U;
	int64_t t16 = 2496092318672LL;

	t16 = ((x85*(x86%x87))-x88);

	if (t16 != -13LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x89 = 6;
	volatile int8_t x91 = INT8_MIN;
	volatile uint32_t x92 = UINT32_MAX;
	static volatile int64_t t17 = 21323342946LL;

	t17 = ((x89*(x90%x91))-x92);

	if (t17 != -4294966533LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -1;
	int16_t x94 = INT16_MAX;
	uint16_t x95 = 240U;
	volatile int32_t t18 = 1797804;

	t18 = ((x93*(x94%x95))-x96);

	if (t18 != -1375) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x97 = INT32_MIN;
	uint8_t x98 = 14U;
	uint64_t x99 = UINT64_MAX;
	volatile uint32_t x100 = 96U;
	static uint64_t t19 = 1263554845338LLU;

	t19 = ((x97*(x98%x99))-x100);

	if (t19 != 18446744043644780448LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 23;
	volatile uint8_t x102 = UINT8_MAX;
	int32_t x104 = INT32_MAX;
	volatile int64_t t20 = 337964675145142LL;

	t20 = ((x101*(x102%x103))-x104);

	if (t20 != -2147477782LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MAX;
	static uint16_t x107 = 13U;
	int16_t x108 = -1;
	int64_t t21 = -4674363925353LL;

	t21 = ((x105*(x106%x107))-x108);

	if (t21 != 2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x113 = -1;
	int16_t x114 = 3;
	volatile int32_t x116 = 38948;
	int32_t t22 = 3144240;

	t22 = ((x113*(x114%x115))-x116);

	if (t22 != -38949) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	volatile uint32_t x118 = UINT32_MAX;
	static volatile uint16_t x120 = 1233U;
	uint32_t t23 = 6516U;

	t23 = ((x117*(x118%x119))-x120);

	if (t23 != 97068U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x121 = 102U;
	static uint32_t x123 = UINT32_MAX;
	int16_t x124 = 3;
	volatile uint32_t t24 = 19349U;

	t24 = ((x121*(x122%x123))-x124);

	if (t24 != 4294967293U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x128 = INT8_MIN;
	static volatile uint32_t t25 = 2008U;

	t25 = ((x125*(x126%x127))-x128);

	if (t25 != 256U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = INT8_MAX;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = 1660711128831655061LL;
	volatile uint64_t t26 = 245039LLU;

	t26 = ((x129*(x130%x131))-x132);

	if (t26 != 16786032944877896428LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = -1;
	int16_t x134 = INT16_MAX;
	volatile int16_t x135 = INT16_MIN;
	int32_t x136 = -1;
	volatile int32_t t27 = -309640953;

	t27 = ((x133*(x134%x135))-x136);

	if (t27 != -32766) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x137 = -1;
	volatile int8_t x138 = INT8_MIN;
	uint32_t x139 = 107U;
	uint16_t x140 = UINT16_MAX;
	volatile uint32_t t28 = 201077U;

	t28 = ((x137*(x138%x139))-x140);

	if (t28 != 4294901753U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x145 = UINT32_MAX;
	int8_t x147 = -1;
	int32_t x148 = INT32_MIN;

	t29 = ((x145*(x146%x147))-x148);

	if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = -1;
	int32_t x150 = 11287118;
	int16_t x151 = -1;
	int32_t x152 = -585477355;
	int32_t t30 = -7;

	t30 = ((x149*(x150%x151))-x152);

	if (t30 != 585477355) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MIN;
	int64_t x156 = 1989LL;

	t31 = ((x153*(x154%x155))-x156);

	if (t31 != 14395LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = 29;
	static int64_t x158 = INT64_MAX;
	int8_t x159 = INT8_MIN;
	int16_t x160 = -72;
	static int64_t t32 = 12955044281937264LL;

	t32 = ((x157*(x158%x159))-x160);

	if (t32 != 3755LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x169 = -454;
	int32_t x171 = INT32_MAX;
	static volatile int16_t x172 = 29;
	static int64_t t33 = -151695914919LL;

	t33 = ((x169*(x170%x171))-x172);

	if (t33 != -937LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x173 = 15299U;
	volatile uint64_t x174 = UINT64_MAX;
	volatile int32_t x175 = -119;
	uint32_t x176 = UINT32_MAX;
	volatile uint64_t t34 = 1872832416LLU;

	t34 = ((x173*(x174%x175))-x176);

	if (t34 != 18446744069416389603LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x177 = INT8_MIN;
	int8_t x178 = -1;
	int64_t x179 = 436793510931134979LL;
	volatile int32_t x180 = INT32_MIN;
	static volatile int64_t t35 = -11079183LL;

	t35 = ((x177*(x178%x179))-x180);

	if (t35 != 2147483776LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x187 = -1;
	uint32_t x188 = 1588U;

	t36 = ((x185*(x186%x187))-x188);

	if (t36 != 4294965708U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = 19622264599744466LL;
	uint16_t x190 = 211U;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MAX;
	volatile int64_t t37 = 50046558279616LL;

	t37 = ((x189*(x190%x191))-x192);

	if (t37 != -5083074206308693481LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x198 = -1;
	static uint32_t x199 = 515U;
	int8_t x200 = -1;
	volatile uint32_t t38 = 1796634857U;

	t38 = ((x197*(x198%x199))-x200);

	if (t38 != 14356U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x203 = INT8_MIN;
	int16_t x204 = -6868;

	t39 = ((x201*(x202%x203))-x204);

	if (t39 != 2423LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x210 = 0U;
	int16_t x211 = INT16_MAX;
	int16_t x212 = 463;

	t40 = ((x209*(x210%x211))-x212);

	if (t40 != -463) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	volatile int32_t x215 = -456;
	static int32_t x216 = INT32_MIN;

	t41 = ((x213*(x214%x215))-x216);

	if (t41 != 2147476608LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x217 = UINT16_MAX;
	volatile int32_t x218 = 4934778;
	static volatile int16_t x219 = INT16_MAX;
	static uint32_t t42 = 64642U;

	t42 = ((x217*(x218%x219))-x220);

	if (t42 != 1292869112U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x221 = 6;
	uint16_t x222 = 49U;
	static uint8_t x224 = 10U;
	volatile int32_t t43 = -83063;

	t43 = ((x221*(x222%x223))-x224);

	if (t43 != 284) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x225 = 1787544852U;
	static int16_t x226 = 8395;
	uint8_t x228 = 2U;
	uint64_t t44 = 403LLU;

	t44 = ((x225*(x226%x227))-x228);

	if (t44 != 15006439032538LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x229 = INT32_MAX;
	volatile int8_t x230 = -1;
	uint32_t x232 = 4229689U;

	t45 = ((x229*(x230%x231))-x232);

	if (t45 != -2151713336LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x233 = 120U;
	int8_t x234 = -1;
	uint32_t x235 = 7879878U;
	int32_t x236 = -52;

	t46 = ((x233*(x234%x235))-x236);

	if (t46 != 52054252U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x237 = 59LLU;
	int8_t x238 = INT8_MAX;
	uint16_t x240 = 132U;
	volatile uint64_t t47 = 3625LLU;

	t47 = ((x237*(x238%x239))-x240);

	if (t47 != 7361LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x241 = 60;
	static int8_t x242 = INT8_MAX;
	int8_t x243 = INT8_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t48 = -1;

	t48 = ((x241*(x242%x243))-x244);

	if (t48 != 7748) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = INT8_MIN;
	static uint64_t x246 = 4525080577105404706LLU;
	volatile int8_t x247 = INT8_MIN;
	static volatile uint64_t t49 = 13LLU;

	t49 = ((x245*(x246%x247))-x248);

	if (t49 != 11085496489213783809LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = INT32_MIN;
	int64_t x251 = 248316902784LL;
	static uint8_t x252 = 79U;
	int64_t t50 = -38030323490LL;

	t50 = ((x249*(x250%x251))-x252);

	if (t50 != -4611686016279904335LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = 232386LL;
	static int64_t x258 = INT64_MIN;
	int64_t x259 = -25954LL;

	t51 = ((x257*(x258%x259))-x260);

	if (t51 != -4702098324LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x261 = 30LLU;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	static volatile uint64_t x264 = 124644LLU;
	uint64_t t52 = 336LLU;

	t52 = ((x261*(x262%x263))-x264);

	if (t52 != 18446744073708443932LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x265 = 5018610U;
	uint16_t x266 = 2109U;
	int64_t x267 = INT64_MAX;
	static int16_t x268 = -1;
	int64_t t53 = -213LL;

	t53 = ((x265*(x266%x267))-x268);

	if (t53 != 10584248491LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	volatile int8_t x271 = -2;
	int64_t t54 = 2LL;

	t54 = ((x269*(x270%x271))-x272);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x274 = 311U;
	static int32_t x275 = 91;
	uint32_t x276 = 389U;
	uint32_t t55 = 1U;

	t55 = ((x273*(x274%x275))-x276);

	if (t55 != 4294967059U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x280 = -60604362827LL;

	t56 = ((x277*(x278%x279))-x280);

	if (t56 != 60604362362LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x281 = -1093;
	int8_t x283 = INT8_MAX;
	int32_t x284 = INT32_MAX;

	t57 = ((x281*(x282%x283))-x284);

	if (t57 != 2147467254U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x285 = UINT16_MAX;
	static volatile int32_t x286 = INT32_MAX;
	volatile int8_t x287 = 2;
	int16_t x288 = INT16_MAX;
	static volatile int32_t t58 = 12096386;

	t58 = ((x285*(x286%x287))-x288);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x291 = INT16_MAX;
	int8_t x292 = INT8_MAX;

	t59 = ((x289*(x290%x291))-x292);

	if (t59 != 25068866554836LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x293 = 350420649LLU;
	int8_t x294 = INT8_MIN;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MAX;

	t60 = ((x293*(x294%x295))-x296);

	if (t60 != 9223371992000932737LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MIN;
	static int32_t x302 = -72013264;
	volatile uint8_t x303 = 59U;
	int32_t t61 = -762;

	t61 = ((x301*(x302%x303))-x304);

	if (t61 != -2145943551) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x305 = UINT32_MAX;
	static int16_t x307 = INT16_MAX;
	static int32_t x308 = INT32_MAX;

	t62 = ((x305*(x306%x307))-x308);

	if (t62 != 23650237409918LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x310 = -1;
	uint32_t x311 = 15U;

	t63 = ((x309*(x310%x311))-x312);

	if (t63 != 992U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x314 = 253U;
	static volatile int64_t x315 = INT64_MIN;
	volatile int16_t x316 = INT16_MIN;
	int64_t t64 = -301LL;

	t64 = ((x313*(x314%x315))-x316);

	if (t64 != 32515LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x321 = -154;
	int8_t x322 = INT8_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t65 = 564008744;

	t65 = ((x321*(x322%x323))-x324);

	if (t65 != 19840) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = 57LLU;
	int32_t x327 = INT32_MIN;
	uint64_t t66 = 414871965931468973LLU;

	t66 = ((x325*(x326%x327))-x328);

	if (t66 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x329 = 809573LLU;
	int16_t x331 = INT16_MIN;
	uint64_t t67 = 100690271LLU;

	t67 = ((x329*(x330%x331))-x332);

	if (t67 != 18446744073707993757LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x333 = -1;
	uint64_t x334 = 7LLU;
	static int32_t x336 = -1;
	volatile uint64_t t68 = 1310375033LLU;

	t68 = ((x333*(x334%x335))-x336);

	if (t68 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x337 = 14948205173882LLU;
	uint64_t x338 = UINT64_MAX;
	int64_t x339 = -6369LL;
	uint8_t x340 = UINT8_MAX;
	uint64_t t69 = 16432146329LLU;

	t69 = ((x337*(x338%x339))-x340);

	if (t69 != 95190170547280321LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x345 = INT64_MAX;
	static volatile uint8_t x347 = 19U;

	t70 = ((x345*(x346%x347))-x348);

	if (t70 != 18446744069414584307LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x349 = -183;
	volatile int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MAX;
	int64_t t71 = -3973LL;

	t71 = ((x349*(x350%x351))-x352);

	if (t71 != -2147482183LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = INT64_MIN;
	uint8_t x355 = 14U;
	int64_t x356 = -6151LL;

	t72 = ((x353*(x354%x355))-x356);

	if (t72 != 6151LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	volatile uint8_t x363 = UINT8_MAX;
	volatile uint32_t x364 = UINT32_MAX;
	uint32_t t73 = 2004505U;

	t73 = ((x361*(x362%x363))-x364);

	if (t73 != 4194305U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x365 = UINT32_MAX;
	int16_t x366 = INT16_MAX;
	uint64_t x367 = 44193261311881530LLU;
	uint16_t x368 = 602U;

	t74 = ((x365*(x366%x367))-x368);

	if (t74 != 140733193354663LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int16_t x370 = INT16_MAX;
	static int32_t x372 = -1;

	t75 = ((x369*(x370%x371))-x372);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x373 = INT16_MAX;
	uint32_t x374 = UINT32_MAX;
	volatile int32_t x375 = -1;
	volatile int16_t x376 = INT16_MAX;
	volatile uint32_t t76 = 343761898U;

	t76 = ((x373*(x374%x375))-x376);

	if (t76 != 4294934529U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x377 = -8408702360LL;
	uint64_t x378 = 72990LLU;
	uint16_t x379 = 860U;
	uint16_t x380 = 0U;
	uint64_t t77 = 217646LLU;

	t77 = ((x377*(x378%x379))-x380);

	if (t77 != 18446737767182781616LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x381 = 5;
	volatile int8_t x384 = INT8_MIN;
	volatile int64_t t78 = -1649659914LL;

	t78 = ((x381*(x382%x383))-x384);

	if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = -1LL;
	static int32_t x390 = 93395;
	uint32_t x391 = 24773U;
	int64_t x392 = INT64_MIN;

	t79 = ((x389*(x390%x391))-x392);

	if (t79 != 9223372036854756732LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x393 = -7;
	static volatile uint16_t x394 = 9849U;
	static int64_t x395 = 1LL;
	int16_t x396 = -1;
	volatile int64_t t80 = 14919560319LL;

	t80 = ((x393*(x394%x395))-x396);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x398 = -1;
	int8_t x399 = -1;
	static volatile int32_t t81 = 86245958;

	t81 = ((x397*(x398%x399))-x400);

	if (t81 != 26) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x401 = INT16_MIN;
	uint32_t x402 = 10U;
	uint16_t x404 = 7581U;
	volatile uint64_t t82 = 216273131719466902LLU;

	t82 = ((x401*(x402%x403))-x404);

	if (t82 != 18446744073709216355LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = INT16_MAX;
	uint8_t x407 = UINT8_MAX;
	uint64_t x408 = 11225LLU;
	volatile uint64_t t83 = 483881LLU;

	t83 = ((x405*(x406%x407))-x408);

	if (t83 != 1168387LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = -1;
	int16_t x411 = INT16_MIN;
	int32_t x412 = -1;
	int32_t t84 = -4;

	t84 = ((x409*(x410%x411))-x412);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = -291270;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = 647;
	static uint8_t x416 = UINT8_MAX;
	static volatile uint64_t t85 = 0LLU;

	t85 = ((x413*(x414%x415))-x416);

	if (t85 != 18446744073599160031LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x418 = INT64_MIN;

	t86 = ((x417*(x418%x419))-x420);

	if (t86 != -4031LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x421 = 11U;
	volatile uint16_t x422 = UINT16_MAX;
	int8_t x423 = -1;
	static volatile int8_t x424 = 27;
	int32_t t87 = 9;

	t87 = ((x421*(x422%x423))-x424);

	if (t87 != -27) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x428 = UINT64_MAX;
	uint64_t t88 = 12702173LLU;

	t88 = ((x425*(x426%x427))-x428);

	if (t88 != 178309LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x430 = UINT32_MAX;
	int64_t x431 = -1LL;
	volatile int8_t x432 = INT8_MAX;
	static volatile int64_t t89 = -131011LL;

	t89 = ((x429*(x430%x431))-x432);

	if (t89 != -127LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x439 = INT8_MAX;
	int8_t x440 = 54;
	volatile int32_t t90 = 79342;

	t90 = ((x437*(x438%x439))-x440);

	if (t90 != -26) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x447 = 30311U;
	uint32_t x448 = UINT32_MAX;
	volatile uint64_t t91 = 27057LLU;

	t91 = ((x445*(x446%x447))-x448);

	if (t91 != 18446744069413246465LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = -107;
	int16_t x450 = -15;
	static int64_t x451 = INT64_MIN;
	volatile int64_t t92 = -27218513922790LL;

	t92 = ((x449*(x450%x451))-x452);

	if (t92 != 1954LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x453 = 1;
	volatile uint64_t x454 = 37LLU;
	uint32_t x455 = UINT32_MAX;
	static int16_t x456 = 7;

	t93 = ((x453*(x454%x455))-x456);

	if (t93 != 30LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x457 = INT32_MIN;
	volatile int64_t x458 = -15001231684216023LL;
	int32_t x459 = -1;
	int16_t x460 = INT16_MIN;
	volatile int64_t t94 = 30812LL;

	t94 = ((x457*(x458%x459))-x460);

	if (t94 != 32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x465 = INT8_MIN;
	uint16_t x466 = 15U;
	int32_t x468 = INT32_MAX;

	t95 = ((x465*(x466%x467))-x468);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x469 = -1;
	volatile int8_t x470 = INT8_MIN;
	static int64_t x471 = 1785589325887LL;
	volatile int32_t x472 = 39770;
	int64_t t96 = 556LL;

	t96 = ((x469*(x470%x471))-x472);

	if (t96 != -39642LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x474 = -1;
	volatile int8_t x475 = -2;
	uint64_t x476 = 332574023250864877LLU;
	uint64_t t97 = 82432835150563459LLU;

	t97 = ((x473*(x474%x475))-x476);

	if (t97 != 18114170048311203092LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x477 = -225;
	int16_t x478 = INT16_MAX;
	int16_t x479 = -1;
	int8_t x480 = INT8_MIN;
	static int32_t t98 = 101;

	t98 = ((x477*(x478%x479))-x480);

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x481 = 6U;
	static volatile int16_t x482 = -1;
	static int32_t x483 = 1117731;
	volatile uint8_t x484 = 20U;

	t99 = ((x481*(x482%x483))-x484);

	if (t99 != -26) { NG(); } else { ; }
	
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

