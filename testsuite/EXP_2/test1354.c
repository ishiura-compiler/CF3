#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
uint16_t x13 = UINT16_MAX;
int64_t x21 = -1LL;
int8_t x22 = INT8_MIN;
static uint8_t x23 = 7U;
int32_t t6 = -19091104;
int32_t t7 = -86375;
static int32_t x49 = 5308400;
static uint32_t t8 = 235389839U;
int64_t x58 = 5345857LL;
int64_t t10 = -3LL;
int32_t t12 = -7;
int32_t x76 = -831;
uint16_t x80 = 7482U;
static int16_t x84 = INT16_MAX;
int32_t t17 = 250983;
volatile int32_t t20 = -908908376;
int16_t x108 = INT16_MIN;
static uint64_t t24 = 8428687594763109655LLU;
int8_t x128 = -1;
int64_t x132 = -10LL;
volatile int32_t t30 = -541086;
int8_t x151 = INT8_MAX;
int32_t t32 = 14610318;
static volatile int8_t x157 = INT8_MIN;
uint16_t x165 = 15557U;
uint64_t x167 = 4380455214660882LLU;
uint64_t x169 = UINT64_MAX;
volatile int32_t t38 = -36;
static volatile uint64_t x177 = UINT64_MAX;
volatile int32_t x178 = INT32_MAX;
volatile uint64_t t39 = 0LLU;
uint64_t x181 = 40LLU;
uint8_t x186 = UINT8_MAX;
static int8_t x187 = INT8_MIN;
uint8_t x198 = 0U;
static int8_t x200 = -60;
uint16_t x206 = 22207U;
int32_t x207 = INT32_MAX;
int64_t t45 = 62948LL;
volatile int32_t t46 = 181916;
int64_t x215 = INT64_MAX;
int32_t t47 = 429685481;
int64_t x220 = -4955952755645332LL;
uint16_t x222 = 251U;
int32_t x223 = INT32_MIN;
uint64_t x226 = 3449460LLU;
uint32_t t50 = 0U;
uint16_t x229 = 17U;
static int16_t x232 = -1;
static int32_t x236 = INT32_MAX;
int32_t t52 = INT32_MIN;
int16_t x237 = -6;
static int64_t x241 = INT64_MIN;
int16_t x242 = INT16_MAX;
volatile int64_t x243 = INT64_MIN;
int32_t x245 = -49844144;
uint8_t x246 = 20U;
volatile int64_t x259 = -1LL;
static int32_t t57 = -14;
int32_t x263 = -1;
int8_t x265 = -1;
int16_t x266 = INT16_MIN;
uint8_t x269 = 1U;
int32_t x273 = -534667225;
int64_t x275 = INT64_MIN;
int32_t x278 = INT32_MIN;
uint64_t t62 = 3665566977538998LLU;
volatile uint32_t t63 = 0U;
volatile uint16_t x286 = 6859U;
static int64_t x287 = INT64_MIN;
uint64_t x290 = UINT64_MAX;
int32_t x295 = INT32_MAX;
int16_t x303 = INT16_MIN;
volatile uint64_t t67 = 37106105259LLU;
static uint8_t x307 = 115U;
uint32_t x309 = 4U;
int16_t x316 = 12380;
uint64_t x319 = UINT64_MAX;
uint16_t x323 = 58U;
static int8_t x329 = INT8_MIN;
volatile int32_t x331 = INT32_MIN;
volatile int8_t x338 = INT8_MIN;
int8_t x339 = -6;
int16_t x340 = -1;
int8_t x357 = INT8_MAX;
int8_t x361 = INT8_MAX;
int16_t x362 = -1;
volatile int8_t x374 = 9;
volatile int16_t x376 = 235;
int32_t t84 = 37760130;
uint8_t x393 = UINT8_MAX;
volatile uint8_t x394 = 3U;
int16_t x396 = -578;
int16_t x399 = INT16_MIN;
int16_t x408 = -1117;
uint16_t x426 = UINT16_MAX;
uint8_t x429 = 113U;
static int16_t x432 = 205;
volatile int32_t t95 = -3535;
uint32_t x443 = 6619U;
int8_t x445 = 1;
static int32_t x449 = 204;
int32_t t99 = 4895181;


void f0(void) {
	static uint8_t x6 = 1U;
	static uint64_t x7 = 129999586147LLU;
	volatile uint64_t x8 = UINT64_MAX;
	uint64_t t0 = 631255LLU;

	t0 = ((x5+(x6<x7))-x8);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	volatile int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = -1;

	t1 = ((x9+(x10<x11))-x12);

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x14 = 36U;
	static int32_t x15 = 20566;
	int32_t x16 = -31773;
	volatile int32_t t2 = 107213196;

	t2 = ((x13+(x14<x15))-x16);

	if (t2 != 97309) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	static int32_t x18 = -1;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = UINT64_MAX;
	uint64_t t3 = 58265192601358LLU;

	t3 = ((x17+(x18<x19))-x20);

	if (t3 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x24 = 20U;
	int64_t t4 = -188903742LL;

	t4 = ((x21+(x22<x23))-x24);

	if (t4 != -20LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	uint16_t x30 = 20882U;
	int8_t x31 = -1;
	uint32_t x32 = 20610622U;
	volatile uint32_t t5 = 5019285U;

	t5 = ((x29+(x30<x31))-x32);

	if (t5 != 4274356673U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	int64_t x34 = 2544LL;
	uint32_t x35 = 138935U;
	volatile int8_t x36 = INT8_MIN;

	t6 = ((x33+(x34<x35))-x36);

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x41 = 29U;
	int16_t x42 = -739;
	int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MIN;

	t7 = ((x41+(x42<x43))-x44);

	if (t7 != 32797) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x50 = INT16_MIN;
	volatile int64_t x51 = -1LL;
	uint32_t x52 = 1433679U;

	t8 = ((x49+(x50<x51))-x52);

	if (t8 != 3874722U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x53 = -1;
	static int64_t x54 = INT64_MAX;
	int32_t x55 = 18;
	static int32_t x56 = -1;
	volatile int32_t t9 = -31;

	t9 = ((x53+(x54<x55))-x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = INT64_MIN;
	int16_t x59 = 1;
	volatile int64_t x60 = -376323824393LL;

	t10 = ((x57+(x58<x59))-x60);

	if (t10 != -9223371660530951415LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x61 = -16LL;
	int32_t x62 = INT32_MAX;
	static int32_t x63 = -1;
	int64_t x64 = INT64_MIN;
	int64_t t11 = -296LL;

	t11 = ((x61+(x62<x63))-x64);

	if (t11 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	volatile int32_t x67 = -1;
	int16_t x68 = -1;

	t12 = ((x65+(x66<x67))-x68);

	if (t12 != -126) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x73 = INT32_MIN;
	volatile uint8_t x74 = UINT8_MAX;
	static int16_t x75 = INT16_MIN;
	int32_t t13 = 217129306;

	t13 = ((x73+(x74<x75))-x76);

	if (t13 != -2147482817) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = 92379902419LLU;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = -1LL;
	volatile uint64_t t14 = 334013573913496LLU;

	t14 = ((x77+(x78<x79))-x80);

	if (t14 != 92379894937LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = UINT8_MAX;
	static uint32_t x82 = 39810U;
	int16_t x83 = INT16_MAX;
	int32_t t15 = -51;

	t15 = ((x81+(x82<x83))-x84);

	if (t15 != -32512) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = INT8_MIN;
	volatile int8_t x86 = -1;
	static int64_t x87 = -1LL;
	static int8_t x88 = INT8_MIN;
	int32_t t16 = 0;

	t16 = ((x85+(x86<x87))-x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = 10U;
	volatile int32_t x90 = 7;
	int16_t x91 = -1;
	int8_t x92 = INT8_MIN;

	t17 = ((x89+(x90<x91))-x92);

	if (t17 != 138) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x94 = -33552909;
	static int64_t x95 = -1LL;
	int8_t x96 = INT8_MIN;
	volatile uint32_t t18 = 63354U;

	t18 = ((x93+(x94<x95))-x96);

	if (t18 != 128U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x97 = INT8_MIN;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MIN;
	volatile int32_t t19 = 46;

	t19 = ((x97+(x98<x99))-x100);

	if (t19 != 32640) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = 1006166159790184LLU;
	int64_t x103 = INT64_MIN;
	int16_t x104 = 940;

	t20 = ((x101+(x102<x103))-x104);

	if (t20 != -1067) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = 2272U;
	int16_t x106 = INT16_MAX;
	uint8_t x107 = UINT8_MAX;
	static volatile int32_t t21 = -232;

	t21 = ((x105+(x106<x107))-x108);

	if (t21 != 35040) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 233596727862818LLU;
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	volatile int8_t x112 = INT8_MAX;
	uint64_t t22 = 115770LLU;

	t22 = ((x109+(x110<x111))-x112);

	if (t22 != 233596727862691LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = INT16_MIN;
	uint64_t x114 = 511844409476493244LLU;
	static int8_t x115 = INT8_MIN;
	uint64_t x116 = 614575LLU;
	static uint64_t t23 = 112901635LLU;

	t23 = ((x113+(x114<x115))-x116);

	if (t23 != 18446744073708904274LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = -1;
	uint8_t x119 = UINT8_MAX;
	uint16_t x120 = UINT16_MAX;

	t24 = ((x117+(x118<x119))-x120);

	if (t24 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 11U;
	volatile uint8_t x122 = 2U;
	static uint64_t x123 = UINT64_MAX;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t25 = 6720102;

	t25 = ((x121+(x122<x123))-x124);

	if (t25 != -65523) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x125 = -1LL;
	int16_t x126 = -10;
	int32_t x127 = INT32_MIN;
	volatile int64_t t26 = 123863LL;

	t26 = ((x125+(x126<x127))-x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MAX;
	int64_t x131 = 1LL;
	int64_t t27 = 52860892828LL;

	t27 = ((x129+(x130<x131))-x132);

	if (t27 != -118LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = 2;
	int16_t x135 = 0;
	uint16_t x136 = UINT16_MAX;
	uint64_t t28 = 17129049092478LLU;

	t28 = ((x133+(x134<x135))-x136);

	if (t28 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int16_t x138 = -1;
	int64_t x139 = INT64_MAX;
	uint64_t x140 = UINT64_MAX;
	static uint64_t t29 = 236445946LLU;

	t29 = ((x137+(x138<x139))-x140);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = INT8_MIN;
	volatile uint64_t x142 = 4694LLU;
	uint64_t x143 = UINT64_MAX;
	static int8_t x144 = INT8_MAX;

	t30 = ((x141+(x142<x143))-x144);

	if (t30 != -254) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = -10;
	volatile int16_t x146 = 3;
	uint8_t x147 = UINT8_MAX;
	static uint32_t x148 = 59378U;
	static uint32_t t31 = 1U;

	t31 = ((x145+(x146<x147))-x148);

	if (t31 != 4294907909U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = -1;
	volatile int16_t x150 = 26;
	volatile int16_t x152 = -1009;

	t32 = ((x149+(x150<x151))-x152);

	if (t32 != 1009) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x153 = -30129440591166369LL;
	volatile uint16_t x154 = UINT16_MAX;
	int64_t x155 = -33349263104463LL;
	static int8_t x156 = -1;
	int64_t t33 = 5020838262171618LL;

	t33 = ((x153+(x154<x155))-x156);

	if (t33 != -30129440591166368LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x158 = -1;
	int16_t x159 = INT16_MAX;
	uint8_t x160 = UINT8_MAX;
	static int32_t t34 = 0;

	t34 = ((x157+(x158<x159))-x160);

	if (t34 != -382) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = 475299255LL;
	uint8_t x162 = 0U;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = -1;
	volatile int64_t t35 = -134543090393360886LL;

	t35 = ((x161+(x162<x163))-x164);

	if (t35 != 475299257LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = -1LL;
	static uint8_t x168 = 2U;
	int32_t t36 = 1;

	t36 = ((x165+(x166<x167))-x168);

	if (t36 != 15555) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x170 = INT8_MAX;
	static int8_t x171 = -1;
	int16_t x172 = -51;
	uint64_t t37 = 3LLU;

	t37 = ((x169+(x170<x171))-x172);

	if (t37 != 50LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x173 = 0U;
	static volatile int16_t x174 = -1;
	int16_t x175 = -364;
	int16_t x176 = INT16_MIN;

	t38 = ((x173+(x174<x175))-x176);

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x179 = 18546LLU;
	int32_t x180 = INT32_MAX;

	t39 = ((x177+(x178<x179))-x180);

	if (t39 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = 1374159665699LL;
	int32_t x183 = INT32_MIN;
	static int32_t x184 = 43918;
	uint64_t t40 = 11824LLU;

	t40 = ((x181+(x182<x183))-x184);

	if (t40 != 18446744073709507738LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x185 = 74U;
	int32_t x188 = -1;
	int32_t t41 = -844;

	t41 = ((x185+(x186<x187))-x188);

	if (t41 != 75) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x189 = INT8_MIN;
	int64_t x190 = -5LL;
	int16_t x191 = -1;
	volatile uint8_t x192 = 7U;
	int32_t t42 = -13;

	t42 = ((x189+(x190<x191))-x192);

	if (t42 != -134) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x197 = 92;
	int8_t x199 = -6;
	volatile int32_t t43 = 5302487;

	t43 = ((x197+(x198<x199))-x200);

	if (t43 != 152) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = 14094;
	uint32_t x202 = 222U;
	int8_t x203 = INT8_MIN;
	volatile uint16_t x204 = 0U;
	volatile int32_t t44 = 41824053;

	t44 = ((x201+(x202<x203))-x204);

	if (t44 != 14095) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x205 = -30;
	int64_t x208 = -21008887548329711LL;

	t45 = ((x205+(x206<x207))-x208);

	if (t45 != 21008887548329682LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MAX;
	static volatile uint64_t x210 = 1570LLU;
	volatile int64_t x211 = 14482646976LL;
	int8_t x212 = INT8_MIN;

	t46 = ((x209+(x210<x211))-x212);

	if (t46 != 256) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MIN;
	volatile uint32_t x214 = 12530U;
	volatile int16_t x216 = INT16_MAX;

	t47 = ((x213+(x214<x215))-x216);

	if (t47 != -32894) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x217 = INT32_MAX;
	volatile int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	int64_t t48 = -29331LL;

	t48 = ((x217+(x218<x219))-x220);

	if (t48 != 4955954903128979LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MAX;
	volatile int16_t x224 = INT16_MAX;
	int64_t t49 = 0LL;

	t49 = ((x221+(x222<x223))-x224);

	if (t49 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x225 = 1482U;
	int8_t x227 = 0;
	uint32_t x228 = UINT32_MAX;

	t50 = ((x225+(x226<x227))-x228);

	if (t50 != 1483U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x230 = -17977569002LL;
	static int32_t x231 = INT32_MAX;
	volatile int32_t t51 = -1;

	t51 = ((x229+(x230<x231))-x232);

	if (t51 != 19) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	uint16_t x235 = UINT16_MAX;

	t52 = ((x233+(x234<x235))-x236);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x238 = INT16_MIN;
	int32_t x239 = 407585;
	int8_t x240 = INT8_MIN;
	volatile int32_t t53 = -365339870;

	t53 = ((x237+(x238<x239))-x240);

	if (t53 != 123) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x244 = INT64_MIN;
	volatile int64_t t54 = 395333580125237093LL;

	t54 = ((x241+(x242<x243))-x244);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x247 = 246878746U;
	int64_t x248 = INT64_MIN;
	volatile int64_t t55 = 202136966997LL;

	t55 = ((x245+(x246<x247))-x248);

	if (t55 != 9223372036804931665LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MAX;
	int32_t x250 = INT32_MAX;
	volatile int32_t x251 = INT32_MIN;
	uint64_t x252 = 0LLU;
	uint64_t t56 = 31308452170LLU;

	t56 = ((x249+(x250<x251))-x252);

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x257 = UINT8_MAX;
	volatile int64_t x258 = -7595LL;
	static int8_t x260 = INT8_MAX;

	t57 = ((x257+(x258<x259))-x260);

	if (t57 != 129) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = 52;
	int64_t x262 = -1LL;
	static int16_t x264 = INT16_MIN;
	int32_t t58 = -1771411;

	t58 = ((x261+(x262<x263))-x264);

	if (t58 != 32820) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x267 = 0;
	volatile uint64_t x268 = 1LLU;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x265+(x266<x267))-x268);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x270 = -6944912535927338LL;
	uint64_t x271 = 2032521414366LLU;
	volatile uint64_t x272 = 2213LLU;
	volatile uint64_t t60 = 1339853LLU;

	t60 = ((x269+(x270<x271))-x272);

	if (t60 != 18446744073709549404LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x274 = INT32_MIN;
	uint64_t x276 = 3784928905LLU;
	uint64_t t61 = 60484873736LLU;

	t61 = ((x273+(x274<x275))-x276);

	if (t61 != 18446744069389955486LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x277 = 112894329240726LLU;
	volatile int32_t x279 = INT32_MIN;
	uint32_t x280 = 14682U;

	t62 = ((x277+(x278<x279))-x280);

	if (t62 != 112894329226044LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x281 = UINT32_MAX;
	int32_t x282 = -1;
	uint8_t x283 = 9U;
	static volatile int8_t x284 = 27;

	t63 = ((x281+(x282<x283))-x284);

	if (t63 != 4294967269U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = 769012014467135149LL;
	int16_t x288 = INT16_MIN;
	volatile int64_t t64 = 607247495617LL;

	t64 = ((x285+(x286<x287))-x288);

	if (t64 != 769012014467167917LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = 5;
	static int64_t x291 = INT64_MIN;
	uint16_t x292 = 1323U;
	int32_t t65 = 22918;

	t65 = ((x289+(x290<x291))-x292);

	if (t65 != -1318) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = 1;
	int8_t x294 = 0;
	uint64_t x296 = 0LLU;
	volatile uint64_t t66 = 1921192361LLU;

	t66 = ((x293+(x294<x295))-x296);

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x301 = -1;
	static uint8_t x302 = UINT8_MAX;
	static uint64_t x304 = 662048946160LLU;

	t67 = ((x301+(x302<x303))-x304);

	if (t67 != 18446743411660605455LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MIN;
	volatile int8_t x306 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t68 = 14LL;

	t68 = ((x305+(x306<x307))-x308);

	if (t68 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x310 = 385621352848LLU;
	int32_t x311 = 15159920;
	int32_t x312 = 55883251;
	static volatile uint32_t t69 = 2022966U;

	t69 = ((x309+(x310<x311))-x312);

	if (t69 != 4239084049U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	volatile int32_t x315 = -6;
	static volatile int32_t t70 = 2;

	t70 = ((x313+(x314<x315))-x316);

	if (t70 != -12507) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = INT8_MIN;
	uint32_t x318 = UINT32_MAX;
	uint8_t x320 = 14U;
	volatile int32_t t71 = -41774233;

	t71 = ((x317+(x318<x319))-x320);

	if (t71 != -141) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x321 = INT8_MIN;
	volatile int8_t x322 = INT8_MIN;
	uint64_t x324 = 4LLU;
	uint64_t t72 = 61986652LLU;

	t72 = ((x321+(x322<x323))-x324);

	if (t72 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 3915U;
	volatile int32_t x326 = INT32_MAX;
	static int16_t x327 = INT16_MIN;
	static int32_t x328 = -11540;
	int32_t t73 = -24481;

	t73 = ((x325+(x326<x327))-x328);

	if (t73 != 15455) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x330 = 0;
	int16_t x332 = INT16_MIN;
	int32_t t74 = -18;

	t74 = ((x329+(x330<x331))-x332);

	if (t74 != 32640) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x333 = INT8_MIN;
	static int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t75 = 9023318;

	t75 = ((x333+(x334<x335))-x336);

	if (t75 != 2147483520) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = 1;
	volatile int32_t t76 = 3026811;

	t76 = ((x337+(x338<x339))-x340);

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x345 = 68703484;
	int8_t x346 = -1;
	int32_t x347 = INT32_MAX;
	uint64_t x348 = 2263066065LLU;
	static volatile uint64_t t77 = 98446637969LLU;

	t77 = ((x345+(x346<x347))-x348);

	if (t77 != 18446744071515189036LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = INT16_MAX;
	uint32_t x350 = 204270992U;
	int16_t x351 = INT16_MIN;
	int64_t x352 = -1LL;
	int64_t t78 = -1436372336649048LL;

	t78 = ((x349+(x350<x351))-x352);

	if (t78 != 32769LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MIN;
	static int16_t x354 = INT16_MIN;
	static int32_t x355 = -1;
	static int8_t x356 = -6;
	volatile int32_t t79 = 6254;

	t79 = ((x353+(x354<x355))-x356);

	if (t79 != -121) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x358 = INT32_MIN;
	uint64_t x359 = UINT64_MAX;
	int32_t x360 = INT32_MAX;
	int32_t t80 = -910;

	t80 = ((x357+(x358<x359))-x360);

	if (t80 != -2147483519) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x363 = UINT8_MAX;
	int16_t x364 = -1;
	int32_t t81 = 1;

	t81 = ((x361+(x362<x363))-x364);

	if (t81 != 129) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	int16_t x367 = -1;
	int32_t x368 = INT32_MIN;
	int32_t t82 = 102620;

	t82 = ((x365+(x366<x367))-x368);

	if (t82 != 2147450881) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x369 = 34224LLU;
	static volatile uint64_t x370 = 2133280369LLU;
	static volatile int16_t x371 = INT16_MIN;
	uint32_t x372 = 990743070U;
	static volatile uint64_t t83 = 24593LLU;

	t83 = ((x369+(x370<x371))-x372);

	if (t83 != 18446744072718842771LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = -5460;
	static int64_t x375 = INT64_MIN;

	t84 = ((x373+(x374<x375))-x376);

	if (t84 != -5695) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = -701794LL;
	static int64_t x378 = -126571LL;
	volatile int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MIN;
	int64_t t85 = 133077LL;

	t85 = ((x377+(x378<x379))-x380);

	if (t85 != -701665LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = 15;
	volatile int16_t x386 = 823;
	volatile int32_t x387 = INT32_MIN;
	static uint8_t x388 = 2U;
	int32_t t86 = 1198716;

	t86 = ((x385+(x386<x387))-x388);

	if (t86 != 13) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x395 = -6109;
	volatile int32_t t87 = -14766445;

	t87 = ((x393+(x394<x395))-x396);

	if (t87 != 833) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x397 = 7129LLU;
	static int16_t x398 = 17;
	uint16_t x400 = 24U;
	volatile uint64_t t88 = 13600091665LLU;

	t88 = ((x397+(x398<x399))-x400);

	if (t88 != 7105LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x401 = 486679LLU;
	volatile uint8_t x402 = 3U;
	volatile uint32_t x403 = 86041U;
	uint32_t x404 = 1303U;
	static uint64_t t89 = 51981LLU;

	t89 = ((x401+(x402<x403))-x404);

	if (t89 != 485377LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = -1;
	int64_t x406 = 2451454530LL;
	static int32_t x407 = INT32_MIN;
	volatile int32_t t90 = 295;

	t90 = ((x405+(x406<x407))-x408);

	if (t90 != 1116) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x413 = UINT16_MAX;
	volatile int8_t x414 = -25;
	uint8_t x415 = 2U;
	int16_t x416 = 73;
	int32_t t91 = 3511;

	t91 = ((x413+(x414<x415))-x416);

	if (t91 != 65463) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x421 = 0;
	int32_t x422 = -165847771;
	static volatile int32_t x423 = 273;
	int8_t x424 = -1;
	int32_t t92 = 9120651;

	t92 = ((x421+(x422<x423))-x424);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = -2192492;
	volatile int16_t x427 = INT16_MIN;
	int64_t x428 = 47038574450767577LL;
	volatile int64_t t93 = -221862149LL;

	t93 = ((x425+(x426<x427))-x428);

	if (t93 != -47038574452960069LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x430 = INT64_MIN;
	uint8_t x431 = 3U;
	int32_t t94 = 13632;

	t94 = ((x429+(x430<x431))-x432);

	if (t94 != -91) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = INT16_MIN;
	static uint16_t x438 = 1U;
	static uint8_t x439 = 14U;
	volatile int32_t x440 = -1;

	t95 = ((x437+(x438<x439))-x440);

	if (t95 != -32766) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x441 = -1;
	int64_t x442 = INT64_MIN;
	uint16_t x444 = 217U;
	volatile int32_t t96 = 79;

	t96 = ((x441+(x442<x443))-x444);

	if (t96 != -217) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x446 = -1;
	uint8_t x447 = 0U;
	volatile int16_t x448 = 7;
	volatile int32_t t97 = -2997441;

	t97 = ((x445+(x446<x447))-x448);

	if (t97 != -5) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x450 = UINT64_MAX;
	int16_t x451 = INT16_MIN;
	int32_t x452 = -1084628;
	int32_t t98 = -250488;

	t98 = ((x449+(x450<x451))-x452);

	if (t98 != 1084832) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x453 = INT16_MIN;
	int32_t x454 = 1123551;
	uint64_t x455 = 101651117639LLU;
	uint8_t x456 = 47U;

	t99 = ((x453+(x454<x455))-x456);

	if (t99 != -32814) { NG(); } else { ; }
	
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

