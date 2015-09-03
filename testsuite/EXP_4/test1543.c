#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x9 = INT8_MAX;
uint64_t x11 = 362716015007LLU;
static int32_t x17 = INT32_MIN;
int16_t x18 = INT16_MAX;
int32_t t3 = -93;
static volatile int16_t x24 = INT16_MIN;
uint32_t x26 = UINT32_MAX;
int32_t t5 = -1;
int32_t t6 = 36062;
static uint32_t x33 = UINT32_MAX;
int8_t x34 = -1;
uint64_t x36 = 58LLU;
int64_t x42 = INT64_MIN;
int16_t x47 = INT16_MIN;
int8_t x52 = -1;
int64_t x55 = INT64_MIN;
int32_t x64 = 28;
int32_t t15 = -1;
uint8_t x69 = 80U;
int64_t x70 = INT64_MIN;
int32_t x73 = INT32_MAX;
volatile int16_t x74 = INT16_MIN;
static int64_t x75 = INT64_MAX;
static uint8_t x77 = UINT8_MAX;
int64_t x80 = INT64_MIN;
int32_t t18 = 5017;
static uint32_t x85 = UINT32_MAX;
int64_t x86 = INT64_MIN;
int32_t t19 = 16461380;
uint8_t x89 = UINT8_MAX;
static int16_t x92 = INT16_MIN;
int8_t x93 = INT8_MAX;
static int32_t x102 = -384;
uint16_t x103 = 52U;
int32_t x114 = INT32_MIN;
static uint64_t x118 = 238LLU;
volatile int16_t x123 = -1;
uint64_t x126 = 1615496661356329353LLU;
int32_t t30 = -1;
uint16_t x134 = UINT16_MAX;
int16_t x136 = INT16_MIN;
int8_t x138 = 4;
int32_t t32 = -786977;
int32_t x144 = -19735097;
volatile int32_t t33 = 1545346;
int32_t t35 = -1025856222;
static int16_t x153 = 45;
int64_t x157 = 501295920111LL;
static uint16_t x166 = 6U;
int32_t x169 = -1;
volatile uint16_t x170 = UINT16_MAX;
volatile uint32_t x173 = 21812U;
uint8_t x175 = 22U;
uint8_t x178 = 3U;
int16_t x180 = INT16_MIN;
volatile int32_t t42 = -12688;
int64_t x184 = INT64_MIN;
static int8_t x185 = INT8_MAX;
uint32_t x187 = 199U;
int16_t x188 = INT16_MIN;
uint32_t x196 = 15466915U;
volatile int32_t t46 = -226041;
uint8_t x201 = 9U;
int16_t x203 = -4143;
static uint8_t x213 = UINT8_MAX;
volatile int64_t x216 = -312588LL;
int16_t x219 = 24;
int64_t x220 = 6152618926LL;
int64_t x221 = -1LL;
volatile int32_t x224 = INT32_MAX;
int16_t x226 = 13;
int32_t x230 = -3622890;
volatile int64_t x240 = INT64_MIN;
int32_t x241 = -1;
static volatile int32_t t57 = 13;
volatile int32_t t59 = 66980300;
volatile uint32_t x255 = UINT32_MAX;
int8_t x260 = INT8_MIN;
int8_t x263 = INT8_MIN;
static int8_t x264 = INT8_MIN;
int32_t t63 = -262;
volatile int32_t t68 = 21;
int32_t x290 = 875;
volatile int64_t x292 = INT64_MAX;
int32_t x293 = -129004;
int32_t x294 = -1;
static int32_t x311 = 454848;
uint64_t x314 = 108799316676LLU;
int32_t t76 = -945;
int64_t x329 = INT64_MIN;
int8_t x331 = INT8_MAX;
volatile int32_t t79 = -7465792;
int32_t t80 = -440914859;
uint8_t x339 = UINT8_MAX;
int16_t x349 = -1;
int16_t x350 = -1;
int32_t t84 = 1;
static int64_t x357 = INT64_MAX;
static int32_t x364 = 0;
uint32_t x369 = UINT32_MAX;
int64_t x371 = INT64_MIN;
int32_t x379 = INT32_MIN;
int32_t x382 = 126198751;
int32_t x383 = INT32_MIN;
uint8_t x387 = 1U;
int8_t x390 = 1;
int64_t x392 = INT64_MIN;
uint8_t x393 = 117U;
volatile uint64_t x394 = UINT64_MAX;
int8_t x400 = -6;
int32_t t96 = 0;
volatile int16_t x410 = 37;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	int32_t x3 = 32832400;
	uint32_t x4 = 200566U;
	int32_t t0 = 26;

	t0 = (x1<(x2-(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x10 = INT16_MAX;
	volatile uint32_t x12 = UINT32_MAX;
	int32_t t1 = 33526;

	t1 = (x9<(x10-(x11<=x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MIN;
	int64_t x15 = -760LL;
	uint16_t x16 = UINT16_MAX;
	static volatile int32_t t2 = 25111;

	t2 = (x13<(x14-(x15<=x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x19 = UINT64_MAX;
	int64_t x20 = INT64_MIN;

	t3 = (x17<(x18-(x19<=x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 39LL;
	int8_t x22 = 1;
	volatile int16_t x23 = INT16_MAX;
	volatile int32_t t4 = 4023476;

	t4 = (x21<(x22-(x23<=x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MIN;
	static uint64_t x27 = 2147702923LLU;
	static volatile uint64_t x28 = 18333528657026LLU;

	t5 = (x25<(x26-(x27<=x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	static uint32_t x30 = 253364U;
	volatile uint8_t x31 = UINT8_MAX;
	uint16_t x32 = 0U;

	t6 = (x29<(x30-(x31<=x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x35 = INT16_MIN;
	volatile int32_t t7 = -1;

	t7 = (x33<(x34-(x35<=x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	volatile int16_t x38 = -1;
	static uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t8 = -14;

	t8 = (x37<(x38-(x39<=x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 1;
	uint32_t x43 = UINT32_MAX;
	static int8_t x44 = -45;
	static int32_t t9 = -3;

	t9 = (x41<(x42-(x43<=x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	int16_t x46 = INT16_MIN;
	uint32_t x48 = UINT32_MAX;
	int32_t t10 = -969806;

	t10 = (x45<(x46-(x47<=x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = 0U;
	uint8_t x50 = 7U;
	int64_t x51 = INT64_MIN;
	int32_t t11 = 2040;

	t11 = (x49<(x50-(x51<=x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 16U;
	uint16_t x54 = UINT16_MAX;
	int32_t x56 = -1003862;
	static int32_t t12 = -22686700;

	t12 = (x53<(x54-(x55<=x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t13 = -4829247;

	t13 = (x57<(x58-(x59<=x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	static uint8_t x62 = UINT8_MAX;
	volatile uint32_t x63 = UINT32_MAX;
	volatile int32_t t14 = 6923;

	t14 = (x61<(x62-(x63<=x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	uint16_t x66 = 209U;
	volatile int64_t x67 = INT64_MIN;
	int32_t x68 = 3;

	t15 = (x65<(x66-(x67<=x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x71 = 1U;
	int8_t x72 = -1;
	int32_t t16 = 23379;

	t16 = (x69<(x70-(x71<=x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x76 = 12339820LL;
	int32_t t17 = 36155989;

	t17 = (x73<(x74-(x75<=x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x78 = 0U;
	uint32_t x79 = 14U;

	t18 = (x77<(x78-(x79<=x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x87 = 206346LLU;
	uint64_t x88 = 9486LLU;

	t19 = (x85<(x86-(x87<=x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x90 = 1U;
	int16_t x91 = 3;
	int32_t t20 = -4;

	t20 = (x89<(x90-(x91<=x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x94 = 8U;
	static int16_t x95 = INT16_MIN;
	static volatile uint8_t x96 = UINT8_MAX;
	static int32_t t21 = 613979170;

	t21 = (x93<(x94-(x95<=x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = 118;
	uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;
	int32_t t22 = 7871148;

	t22 = (x97<(x98-(x99<=x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x101 = UINT8_MAX;
	volatile uint8_t x104 = 0U;
	int32_t t23 = -461;

	t23 = (x101<(x102-(x103<=x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = 0;
	uint16_t x106 = 251U;
	static int16_t x107 = INT16_MIN;
	int32_t x108 = 0;
	int32_t t24 = -11;

	t24 = (x105<(x106-(x107<=x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = INT64_MAX;
	static uint16_t x110 = UINT16_MAX;
	static volatile int32_t x111 = INT32_MIN;
	int32_t x112 = -1;
	int32_t t25 = 21;

	t25 = (x109<(x110-(x111<=x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	int64_t x115 = 28999616173401LL;
	int32_t x116 = INT32_MIN;
	static int32_t t26 = -52;

	t26 = (x113<(x114-(x115<=x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = 764U;
	static int8_t x119 = -1;
	volatile int16_t x120 = INT16_MIN;
	static int32_t t27 = -1;

	t27 = (x117<(x118-(x119<=x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -1;
	uint8_t x122 = 83U;
	int16_t x124 = -1;
	int32_t t28 = -11935263;

	t28 = (x121<(x122-(x123<=x124)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -105;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -14;
	int32_t t29 = -1175;

	t29 = (x125<(x126-(x127<=x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 89U;
	uint8_t x130 = 3U;
	int16_t x131 = INT16_MIN;
	int16_t x132 = 100;

	t30 = (x129<(x130-(x131<=x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 0;
	uint64_t x135 = 3949359043LLU;
	volatile int32_t t31 = 14496346;

	t31 = (x133<(x134-(x135<=x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x137 = UINT8_MAX;
	int32_t x139 = -1765627;
	int64_t x140 = INT64_MIN;

	t32 = (x137<(x138-(x139<=x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MAX;
	volatile uint64_t x143 = 26LLU;

	t33 = (x141<(x142-(x143<=x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	uint64_t x146 = 20827LLU;
	volatile int8_t x147 = INT8_MIN;
	static int32_t x148 = -1;
	volatile int32_t t34 = -1;

	t34 = (x145<(x146-(x147<=x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -3961;
	int8_t x150 = 59;
	int64_t x151 = INT64_MIN;
	volatile int32_t x152 = -1;

	t35 = (x149<(x150-(x151<=x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x154 = 27208U;
	uint32_t x155 = 1115U;
	static uint32_t x156 = 1164U;
	int32_t t36 = 12;

	t36 = (x153<(x154-(x155<=x156)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x158 = UINT16_MAX;
	static int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t37 = 1799;

	t37 = (x157<(x158-(x159<=x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = -1;
	volatile uint64_t x162 = UINT64_MAX;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MAX;
	static volatile int32_t t38 = -433865603;

	t38 = (x161<(x162-(x163<=x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 19U;
	int64_t x167 = -125487LL;
	volatile uint64_t x168 = 501679786LLU;
	volatile int32_t t39 = -13589461;

	t39 = (x165<(x166-(x167<=x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x171 = INT32_MAX;
	uint16_t x172 = 0U;
	volatile int32_t t40 = 8;

	t40 = (x169<(x170-(x171<=x172)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x174 = -1;
	static volatile int16_t x176 = INT16_MIN;
	int32_t t41 = 25;

	t41 = (x173<(x174-(x175<=x176)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = -51;
	int32_t x179 = -1;

	t42 = (x177<(x178-(x179<=x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x181 = 3U;
	int8_t x182 = -1;
	int32_t x183 = -28571;
	volatile int32_t t43 = 20831513;

	t43 = (x181<(x182-(x183<=x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x186 = -1;
	int32_t t44 = 880;

	t44 = (x185<(x186-(x187<=x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MIN;
	int64_t x191 = -1LL;
	int64_t x192 = INT64_MIN;
	volatile int32_t t45 = -107536;

	t45 = (x189<(x190-(x191<=x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = -2;
	uint8_t x194 = 121U;
	volatile int64_t x195 = INT64_MIN;

	t46 = (x193<(x194-(x195<=x196)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x202 = 0;
	int16_t x204 = 1;
	int32_t t47 = 960837345;

	t47 = (x201<(x202-(x203<=x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x205 = -1LL;
	int64_t x206 = -1LL;
	volatile int16_t x207 = -1;
	int64_t x208 = INT64_MAX;
	int32_t t48 = -234025;

	t48 = (x205<(x206-(x207<=x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = INT16_MIN;
	static int8_t x210 = INT8_MIN;
	int32_t x211 = -1;
	uint8_t x212 = 60U;
	int32_t t49 = 164625340;

	t49 = (x209<(x210-(x211<=x212)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x214 = -1;
	int32_t x215 = -1004;
	volatile int32_t t50 = 524;

	t50 = (x213<(x214-(x215<=x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x217 = INT64_MAX;
	static volatile uint64_t x218 = 25475103372LLU;
	int32_t t51 = -119249;

	t51 = (x217<(x218-(x219<=x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x222 = -24;
	static int64_t x223 = INT64_MAX;
	int32_t t52 = -134;

	t52 = (x221<(x222-(x223<=x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x227 = -1;
	uint8_t x228 = 4U;
	int32_t t53 = -4854;

	t53 = (x225<(x226-(x227<=x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x229 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	static int64_t x232 = -1LL;
	int32_t t54 = -1437642;

	t54 = (x229<(x230-(x231<=x232)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x233 = INT64_MAX;
	int8_t x234 = -17;
	uint8_t x235 = 15U;
	int64_t x236 = -1LL;
	int32_t t55 = 107;

	t55 = (x233<(x234-(x235<=x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	volatile uint8_t x238 = 5U;
	static int64_t x239 = 26590997305561146LL;
	int32_t t56 = 176;

	t56 = (x237<(x238-(x239<=x240)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x242 = INT8_MAX;
	static int8_t x243 = -48;
	static uint64_t x244 = 3384689223LLU;

	t57 = (x241<(x242-(x243<=x244)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 120586021176686LLU;
	volatile int64_t x246 = 3051292452771LL;
	uint64_t x247 = 31LLU;
	int64_t x248 = INT64_MAX;
	int32_t t58 = -31;

	t58 = (x245<(x246-(x247<=x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MAX;
	int8_t x250 = INT8_MIN;
	int32_t x251 = INT32_MAX;
	int32_t x252 = 1908423;

	t59 = (x249<(x250-(x251<=x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	uint32_t x254 = 11044U;
	uint16_t x256 = 113U;
	volatile int32_t t60 = -89536;

	t60 = (x253<(x254-(x255<=x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MIN;
	uint32_t x259 = UINT32_MAX;
	int32_t t61 = -49;

	t61 = (x257<(x258-(x259<=x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	static volatile int16_t x262 = -496;
	volatile int32_t t62 = -22120399;

	t62 = (x261<(x262-(x263<=x264)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = 20836783500401LLU;
	uint16_t x266 = 33U;
	int32_t x267 = INT32_MIN;
	int8_t x268 = 0;

	t63 = (x265<(x266-(x267<=x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = -7;
	uint32_t x271 = 858369U;
	int32_t x272 = 1;
	int32_t t64 = -3872;

	t64 = (x269<(x270-(x271<=x272)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = 3U;
	uint16_t x274 = 1U;
	uint64_t x275 = UINT64_MAX;
	volatile int8_t x276 = 3;
	int32_t t65 = 35878478;

	t65 = (x273<(x274-(x275<=x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x277 = INT32_MAX;
	static int16_t x278 = INT16_MIN;
	static uint8_t x279 = 11U;
	int64_t x280 = INT64_MAX;
	volatile int32_t t66 = 0;

	t66 = (x277<(x278-(x279<=x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 28971063224415LLU;
	int64_t x283 = INT64_MIN;
	static volatile uint16_t x284 = 5U;
	volatile int32_t t67 = 486892;

	t67 = (x281<(x282-(x283<=x284)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = -37611LL;
	int16_t x286 = -13;
	volatile int8_t x287 = INT8_MIN;
	uint8_t x288 = 11U;

	t68 = (x285<(x286-(x287<=x288)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x289 = 15471U;
	int8_t x291 = INT8_MIN;
	int32_t t69 = 12;

	t69 = (x289<(x290-(x291<=x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x295 = 3687714U;
	int64_t x296 = INT64_MIN;
	int32_t t70 = -2354;

	t70 = (x293<(x294-(x295<=x296)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x297 = -5371204878450376LL;
	int16_t x298 = -1;
	int16_t x299 = -1;
	int64_t x300 = INT64_MAX;
	static int32_t t71 = 0;

	t71 = (x297<(x298-(x299<=x300)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = 25;
	static int32_t x302 = -15299;
	uint16_t x303 = 171U;
	int8_t x304 = INT8_MIN;
	int32_t t72 = -805495409;

	t72 = (x301<(x302-(x303<=x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = UINT64_MAX;
	uint32_t x306 = 387878363U;
	uint8_t x307 = 29U;
	int64_t x308 = 27915LL;
	int32_t t73 = 484333028;

	t73 = (x305<(x306-(x307<=x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -1;
	static volatile int64_t x310 = INT64_MIN;
	static uint8_t x312 = UINT8_MAX;
	int32_t t74 = 41324436;

	t74 = (x309<(x310-(x311<=x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = UINT16_MAX;
	static int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t75 = -1031691;

	t75 = (x313<(x314-(x315<=x316)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x317 = 2861940373838121LLU;
	uint8_t x318 = 61U;
	static int8_t x319 = -25;
	int16_t x320 = INT16_MIN;

	t76 = (x317<(x318-(x319<=x320)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x321 = INT32_MAX;
	volatile uint8_t x322 = 5U;
	uint32_t x323 = UINT32_MAX;
	static volatile int64_t x324 = -1LL;
	int32_t t77 = 186;

	t77 = (x321<(x322-(x323<=x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	static uint16_t x326 = UINT16_MAX;
	int8_t x327 = INT8_MIN;
	static volatile int64_t x328 = INT64_MAX;
	int32_t t78 = 11;

	t78 = (x325<(x326-(x327<=x328)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x330 = 1147036U;
	volatile uint64_t x332 = 175952454927764900LLU;

	t79 = (x329<(x330-(x331<=x332)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 11U;
	int16_t x334 = -250;
	volatile uint8_t x335 = 85U;
	uint32_t x336 = 429U;

	t80 = (x333<(x334-(x335<=x336)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MIN;
	int32_t x340 = 62;
	volatile int32_t t81 = 78757;

	t81 = (x337<(x338-(x339<=x340)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x341 = -1365;
	int32_t x342 = INT32_MIN;
	int8_t x343 = -1;
	uint32_t x344 = 2210U;
	int32_t t82 = -10;

	t82 = (x341<(x342-(x343<=x344)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x345 = UINT64_MAX;
	uint16_t x346 = UINT16_MAX;
	int8_t x347 = INT8_MAX;
	static uint64_t x348 = 996372320LLU;
	int32_t t83 = -6349813;

	t83 = (x345<(x346-(x347<=x348)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x351 = 11;
	int64_t x352 = 4806310014LL;

	t84 = (x349<(x350-(x351<=x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	static uint32_t x354 = UINT32_MAX;
	int8_t x355 = 0;
	uint8_t x356 = UINT8_MAX;
	int32_t t85 = -213462600;

	t85 = (x353<(x354-(x355<=x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x358 = INT64_MIN;
	int8_t x359 = 15;
	volatile uint8_t x360 = 2U;
	volatile int32_t t86 = -87;

	t86 = (x357<(x358-(x359<=x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x361 = -59016816LL;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = 3154U;
	volatile int32_t t87 = 3710;

	t87 = (x361<(x362-(x363<=x364)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MAX;
	static uint64_t x366 = UINT64_MAX;
	volatile uint8_t x367 = 1U;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t88 = -6459;

	t88 = (x365<(x366-(x367<=x368)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x370 = 9645U;
	static volatile int16_t x372 = 1;
	int32_t t89 = -1331805;

	t89 = (x369<(x370-(x371<=x372)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x373 = 61U;
	static uint8_t x374 = 2U;
	uint16_t x375 = 6U;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t90 = -2;

	t90 = (x373<(x374-(x375<=x376)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = 142U;
	uint16_t x378 = 4U;
	uint16_t x380 = UINT16_MAX;
	static volatile int32_t t91 = -13439552;

	t91 = (x377<(x378-(x379<=x380)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x381 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	volatile int32_t t92 = -47107872;

	t92 = (x381<(x382-(x383<=x384)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = 258698283LL;
	uint8_t x386 = 2U;
	volatile int32_t x388 = -83;
	int32_t t93 = -30724255;

	t93 = (x385<(x386-(x387<=x388)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x389 = UINT64_MAX;
	int16_t x391 = -6026;
	static int32_t t94 = 14483;

	t94 = (x389<(x390-(x391<=x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x395 = INT32_MIN;
	volatile int32_t x396 = INT32_MAX;
	int32_t t95 = 191;

	t95 = (x393<(x394-(x395<=x396)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x397 = 684;
	int64_t x398 = 79369209996LL;
	int64_t x399 = INT64_MAX;

	t96 = (x397<(x398-(x399<=x400)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	int64_t x402 = -4903370LL;
	int8_t x403 = 9;
	static uint8_t x404 = 1U;
	volatile int32_t t97 = 2;

	t97 = (x401<(x402-(x403<=x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = UINT8_MAX;
	int8_t x406 = -1;
	int8_t x407 = -1;
	static volatile int32_t x408 = -1;
	int32_t t98 = 958;

	t98 = (x405<(x406-(x407<=x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	int8_t x411 = -2;
	int16_t x412 = 3;
	static int32_t t99 = -1019539907;

	t99 = (x409<(x410-(x411<=x412)));

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

