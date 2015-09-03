#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
int64_t x15 = 511595LL;
volatile uint64_t x16 = UINT64_MAX;
int16_t x27 = INT16_MIN;
int8_t x28 = INT8_MIN;
int64_t x32 = 101155558829970339LL;
int8_t x49 = INT8_MAX;
static volatile uint8_t x52 = UINT8_MAX;
int8_t x56 = -1;
int32_t x58 = 45267;
volatile uint64_t x60 = 10171960986845876LLU;
uint64_t x62 = 1790698033LLU;
static uint64_t x65 = UINT64_MAX;
volatile uint16_t x68 = UINT16_MAX;
uint8_t x75 = 13U;
int32_t t21 = 0;
int32_t t23 = -12;
static uint8_t x107 = UINT8_MAX;
uint32_t x109 = 4U;
static uint8_t x116 = 117U;
static int8_t x118 = INT8_MIN;
static int32_t x120 = -1;
int64_t x121 = -28904128604413LL;
static int64_t x124 = -1LL;
volatile int32_t t29 = 78432630;
volatile uint32_t x131 = 13U;
uint8_t x135 = 0U;
int8_t x136 = INT8_MIN;
int32_t t32 = 3;
int16_t x146 = 1211;
uint32_t x151 = 89474684U;
volatile int32_t t35 = -24;
volatile uint8_t x154 = UINT8_MAX;
uint64_t x159 = 9417155291LLU;
uint8_t x167 = 50U;
int32_t t38 = -14429147;
static int32_t x175 = INT32_MIN;
volatile int32_t x178 = -719868;
volatile int16_t x181 = INT16_MAX;
uint8_t x182 = UINT8_MAX;
uint32_t x187 = 1U;
int16_t x188 = 6;
uint64_t x190 = 1907LLU;
static volatile uint64_t x191 = 615LLU;
int32_t x194 = -1;
uint8_t x196 = UINT8_MAX;
int32_t t44 = -18844944;
int8_t x209 = 1;
int32_t t47 = -232213;
volatile int8_t x214 = INT8_MIN;
volatile uint64_t x218 = 689976667654543720LLU;
int8_t x230 = INT8_MAX;
static uint64_t x231 = UINT64_MAX;
uint8_t x236 = UINT8_MAX;
volatile int32_t t52 = -8;
volatile int32_t t54 = 1751;
static int16_t x248 = INT16_MIN;
volatile uint32_t x254 = 6383U;
int32_t t57 = -8430;
int64_t x258 = 70991973132505LL;
uint16_t x259 = 4333U;
static int32_t x263 = -1;
volatile int8_t x265 = INT8_MAX;
uint64_t x269 = UINT64_MAX;
int8_t x280 = 0;
static int8_t x284 = -25;
static int32_t t65 = 626485144;
uint32_t x289 = 56704U;
static int32_t x290 = INT32_MAX;
int64_t x293 = -157687780467082118LL;
static volatile int32_t x295 = -1;
volatile int32_t t68 = -546;
static volatile int32_t t70 = -918211679;
int16_t x309 = INT16_MIN;
int32_t t71 = -7468;
int16_t x316 = 15;
uint32_t x331 = 540U;
volatile int32_t t76 = -45617279;
static int64_t x340 = INT64_MIN;
int32_t t77 = -1;
int32_t x343 = INT32_MIN;
int64_t x348 = INT64_MAX;
int32_t x350 = INT32_MIN;
volatile int32_t x351 = INT32_MAX;
uint8_t x357 = 2U;
uint64_t x358 = UINT64_MAX;
int32_t x359 = 7;
int8_t x374 = -1;
static uint64_t x381 = 13LLU;
int8_t x384 = INT8_MAX;
int16_t x386 = INT16_MAX;
int16_t x387 = INT16_MIN;
int32_t x405 = INT32_MAX;
volatile int32_t x408 = INT32_MIN;
volatile int32_t t93 = -64001;
volatile int16_t x418 = -5425;
int32_t t94 = 251043454;
volatile int8_t x423 = -42;
static int16_t x424 = 1759;
static uint64_t x431 = 4099837LLU;
int32_t t97 = -15160045;
int32_t x433 = 324789;
uint16_t x434 = 23U;
uint32_t x436 = 123112718U;
int8_t x440 = -1;


void f0(void) {
	int64_t x1 = 3558672500027916016LL;
	uint8_t x3 = 0U;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -96283533;

	t0 = ((x1-x2)<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 40782774160673LLU;
	uint16_t x6 = 10U;
	volatile int16_t x7 = -10;
	static volatile uint8_t x8 = 6U;
	static volatile int32_t t1 = -20296634;

	t1 = ((x5-x6)<(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = 2152087390LL;
	static uint16_t x11 = UINT16_MAX;
	int16_t x12 = -1;
	int32_t t2 = -379198519;

	t2 = ((x9-x10)<(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	uint8_t x14 = 39U;
	static int32_t t3 = -8630;

	t3 = ((x13-x14)<(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static int8_t x18 = 34;
	int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 43788;

	t4 = ((x17-x18)<(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	uint32_t x26 = 791U;
	volatile int32_t t5 = 342332092;

	t5 = ((x25-x26)<(x27<x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = -1;
	static int64_t x30 = INT64_MAX;
	int16_t x31 = -1;
	int32_t t6 = 1;

	t6 = ((x29-x30)<(x31<x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	volatile uint16_t x38 = 15039U;
	volatile int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MAX;
	static volatile int32_t t7 = -4187610;

	t7 = ((x37-x38)<(x39<x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = 187;
	int8_t x42 = -1;
	int8_t x43 = INT8_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t8 = 22064605;

	t8 = ((x41-x42)<(x43<x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 39LLU;
	int8_t x47 = -1;
	static int8_t x48 = -1;
	static volatile int32_t t9 = 1;

	t9 = ((x45-x46)<(x47<x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = 1137U;
	static volatile uint8_t x51 = UINT8_MAX;
	int32_t t10 = 4123;

	t10 = ((x49-x50)<(x51<x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 1;
	static volatile int32_t x54 = -1;
	uint16_t x55 = 9616U;
	static volatile int32_t t11 = 29;

	t11 = ((x53-x54)<(x55<x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	static int64_t x59 = 1663699047166LL;
	int32_t t12 = 274748592;

	t12 = ((x57-x58)<(x59<x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	int8_t x63 = INT8_MAX;
	int8_t x64 = -52;
	int32_t t13 = -118848601;

	t13 = ((x61-x62)<(x63<x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = 1838U;
	static volatile int32_t t14 = 27395;

	t14 = ((x65-x66)<(x67<x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -3846;
	int32_t x70 = -330358610;
	uint16_t x71 = 17U;
	volatile uint8_t x72 = UINT8_MAX;
	volatile int32_t t15 = 5167;

	t15 = ((x69-x70)<(x71<x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -3359LL;
	int32_t x74 = INT32_MIN;
	int64_t x76 = 609916714LL;
	int32_t t16 = 3;

	t16 = ((x73-x74)<(x75<x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = 39979LL;
	int8_t x78 = -1;
	int32_t x79 = -1;
	int8_t x80 = INT8_MIN;
	volatile int32_t t17 = -578443096;

	t17 = ((x77-x78)<(x79<x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1;
	int8_t x82 = 2;
	uint8_t x83 = UINT8_MAX;
	uint32_t x84 = UINT32_MAX;
	int32_t t18 = -185;

	t18 = ((x81-x82)<(x83<x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	uint64_t x87 = UINT64_MAX;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t19 = -38782;

	t19 = ((x85-x86)<(x87<x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -37;
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = -1;
	static int64_t x92 = INT64_MIN;
	static int32_t t20 = 2580;

	t20 = ((x89-x90)<(x91<x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = -1;
	static uint8_t x94 = UINT8_MAX;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 255349;

	t21 = ((x93-x94)<(x95<x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x97 = 2768998U;
	uint32_t x98 = 40U;
	volatile int64_t x99 = 251703314LL;
	volatile uint64_t x100 = 13546320LLU;
	volatile int32_t t22 = 187069;

	t22 = ((x97-x98)<(x99<x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = 4U;
	static int64_t x102 = -1LL;
	uint64_t x103 = 42492733352LLU;
	uint16_t x104 = 16U;

	t23 = ((x101-x102)<(x103<x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x105 = 57U;
	static uint16_t x106 = UINT16_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t24 = 14756;

	t24 = ((x105-x106)<(x107<x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = 0;
	int64_t x111 = INT64_MIN;
	static int64_t x112 = INT64_MAX;
	volatile int32_t t25 = 6529872;

	t25 = ((x109-x110)<(x111<x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = -1;
	volatile uint8_t x114 = UINT8_MAX;
	int32_t x115 = INT32_MAX;
	volatile int32_t t26 = 413292;

	t26 = ((x113-x114)<(x115<x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 90;
	int32_t x119 = -1;
	volatile int32_t t27 = -60616175;

	t27 = ((x117-x118)<(x119<x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x122 = -1;
	int16_t x123 = -3740;
	volatile int32_t t28 = 357289316;

	t28 = ((x121-x122)<(x123<x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 93;
	int64_t x126 = -1LL;
	volatile int64_t x127 = -3943966673034LL;
	uint64_t x128 = UINT64_MAX;

	t29 = ((x125-x126)<(x127<x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x129 = 6;
	int8_t x130 = INT8_MAX;
	static uint64_t x132 = UINT64_MAX;
	int32_t t30 = 228;

	t30 = ((x129-x130)<(x131<x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 13445U;
	int32_t x134 = 3339070;
	volatile int32_t t31 = 167;

	t31 = ((x133-x134)<(x135<x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = 7953348669810484LL;
	int8_t x138 = -17;
	int32_t x139 = -81635;
	int16_t x140 = 1;

	t32 = ((x137-x138)<(x139<x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = 12054501279154LLU;
	int64_t x142 = INT64_MIN;
	int16_t x143 = -1;
	uint8_t x144 = 1U;
	volatile int32_t t33 = 3995789;

	t33 = ((x141-x142)<(x143<x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 26692008U;
	volatile int16_t x147 = -122;
	int64_t x148 = INT64_MAX;
	static int32_t t34 = 403693;

	t34 = ((x145-x146)<(x147<x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -1;
	static int64_t x150 = INT64_MIN;
	static int8_t x152 = INT8_MAX;

	t35 = ((x149-x150)<(x151<x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = UINT32_MAX;
	static volatile uint16_t x155 = 106U;
	int32_t x156 = -1;
	int32_t t36 = -3077141;

	t36 = ((x153-x154)<(x155<x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = INT64_MIN;
	volatile int16_t x158 = INT16_MIN;
	int8_t x160 = INT8_MAX;
	volatile int32_t t37 = 0;

	t37 = ((x157-x158)<(x159<x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 17U;
	int64_t x166 = -51979428737306LL;
	int32_t x168 = 3290977;

	t38 = ((x165-x166)<(x167<x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MAX;
	volatile int8_t x174 = INT8_MIN;
	uint64_t x176 = 289440390961849LLU;
	volatile int32_t t39 = 0;

	t39 = ((x173-x174)<(x175<x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	volatile uint16_t x179 = 3475U;
	int8_t x180 = -1;
	int32_t t40 = -1;

	t40 = ((x177-x178)<(x179<x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x183 = -1;
	uint16_t x184 = 10353U;
	static volatile int32_t t41 = 38535;

	t41 = ((x181-x182)<(x183<x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x185 = -58440009149121431LL;
	uint32_t x186 = 13515510U;
	static volatile int32_t t42 = 1;

	t42 = ((x185-x186)<(x187<x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 0U;
	int8_t x192 = 33;
	volatile int32_t t43 = 4184098;

	t43 = ((x189-x190)<(x191<x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x193 = 7781775U;
	static uint8_t x195 = UINT8_MAX;

	t44 = ((x193-x194)<(x195<x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = -3;
	static uint64_t x198 = 27049091820508642LLU;
	static uint64_t x199 = UINT64_MAX;
	int64_t x200 = INT64_MIN;
	volatile int32_t t45 = -492333296;

	t45 = ((x197-x198)<(x199<x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x205 = -1LL;
	uint32_t x206 = 15118296U;
	static uint32_t x207 = 167778U;
	uint64_t x208 = 29076082172288LLU;
	volatile int32_t t46 = -2088022;

	t46 = ((x205-x206)<(x207<x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x210 = INT16_MAX;
	volatile int16_t x211 = INT16_MIN;
	uint32_t x212 = 51U;

	t47 = ((x209-x210)<(x211<x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x215 = INT8_MAX;
	static volatile uint32_t x216 = 6073579U;
	int32_t t48 = -12;

	t48 = ((x213-x214)<(x215<x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = 88U;
	int16_t x219 = INT16_MIN;
	static uint8_t x220 = 10U;
	int32_t t49 = -16270973;

	t49 = ((x217-x218)<(x219<x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x221 = -334;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = 5891111346743LLU;
	static uint32_t x224 = UINT32_MAX;
	volatile int32_t t50 = -1383480;

	t50 = ((x221-x222)<(x223<x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int8_t x232 = INT8_MAX;
	volatile int32_t t51 = 1;

	t51 = ((x229-x230)<(x231<x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = UINT64_MAX;
	static volatile int16_t x234 = INT16_MIN;
	volatile int16_t x235 = INT16_MIN;

	t52 = ((x233-x234)<(x235<x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	int8_t x239 = -13;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t53 = -23556765;

	t53 = ((x237-x238)<(x239<x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 747U;
	volatile uint16_t x242 = UINT16_MAX;
	int8_t x243 = 3;
	static int64_t x244 = -1LL;

	t54 = ((x241-x242)<(x243<x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MAX;
	int32_t t55 = -41589220;

	t55 = ((x245-x246)<(x247<x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x249 = 50U;
	volatile uint32_t x250 = 15105U;
	int16_t x251 = 3815;
	int16_t x252 = INT16_MIN;
	volatile int32_t t56 = 3494008;

	t56 = ((x249-x250)<(x251<x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = INT8_MIN;
	static int64_t x255 = INT64_MIN;
	int16_t x256 = -1;

	t57 = ((x253-x254)<(x255<x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x257 = INT16_MIN;
	int8_t x260 = -1;
	volatile int32_t t58 = 0;

	t58 = ((x257-x258)<(x259<x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = INT16_MIN;
	int32_t x262 = -8606;
	int64_t x264 = INT64_MIN;
	int32_t t59 = -7;

	t59 = ((x261-x262)<(x263<x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x266 = 1U;
	volatile uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MAX;
	volatile int32_t t60 = -10;

	t60 = ((x265-x266)<(x267<x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	static int8_t x272 = -1;
	int32_t t61 = -6797;

	t61 = ((x269-x270)<(x271<x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x273 = INT8_MAX;
	int8_t x274 = -62;
	int64_t x275 = INT64_MIN;
	static uint16_t x276 = 4220U;
	volatile int32_t t62 = 3217493;

	t62 = ((x273-x274)<(x275<x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x277 = 1;
	static uint8_t x278 = 13U;
	static int64_t x279 = -45122428049889187LL;
	volatile int32_t t63 = -1;

	t63 = ((x277-x278)<(x279<x280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = 2540904U;
	uint64_t x282 = UINT64_MAX;
	static uint16_t x283 = 2U;
	volatile int32_t t64 = -1;

	t64 = ((x281-x282)<(x283<x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = -1356;
	uint64_t x286 = UINT64_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	volatile uint16_t x288 = UINT16_MAX;

	t65 = ((x285-x286)<(x287<x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x291 = 150890888;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t66 = -4248418;

	t66 = ((x289-x290)<(x291<x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x294 = 633U;
	static volatile int16_t x296 = 7;
	static int32_t t67 = -452;

	t67 = ((x293-x294)<(x295<x296));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = 9677LLU;
	uint64_t x298 = UINT64_MAX;
	volatile int8_t x299 = INT8_MAX;
	int32_t x300 = INT32_MIN;

	t68 = ((x297-x298)<(x299<x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = 10404;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	int8_t x304 = 2;
	volatile int32_t t69 = 1;

	t69 = ((x301-x302)<(x303<x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = UINT64_MAX;
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = 0U;
	int64_t x308 = INT64_MAX;

	t70 = ((x305-x306)<(x307<x308));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x310 = -1LL;
	int64_t x311 = -1LL;
	int8_t x312 = INT8_MIN;

	t71 = ((x309-x310)<(x311<x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x313 = INT32_MAX;
	uint64_t x314 = 31720803389427LLU;
	int8_t x315 = -5;
	volatile int32_t t72 = 0;

	t72 = ((x313-x314)<(x315<x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MAX;
	volatile int32_t t73 = -17;

	t73 = ((x317-x318)<(x319<x320));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = 20U;
	volatile int32_t x326 = INT32_MAX;
	int32_t x327 = -2851848;
	int64_t x328 = 243LL;
	volatile int32_t t74 = -13227076;

	t74 = ((x325-x326)<(x327<x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x329 = -1;
	volatile int32_t x330 = 0;
	int32_t x332 = 7101;
	volatile int32_t t75 = 1;

	t75 = ((x329-x330)<(x331<x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x333 = 3169U;
	uint64_t x334 = 4LLU;
	static int32_t x335 = INT32_MIN;
	static volatile uint64_t x336 = 71109766916420283LLU;

	t76 = ((x333-x334)<(x335<x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x337 = INT8_MAX;
	uint16_t x338 = 0U;
	int8_t x339 = 41;

	t77 = ((x337-x338)<(x339<x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x341 = 0U;
	int32_t x342 = 675866;
	static volatile int8_t x344 = INT8_MAX;
	int32_t t78 = -1;

	t78 = ((x341-x342)<(x343<x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = 25;
	volatile int32_t x346 = 14788;
	int16_t x347 = INT16_MIN;
	int32_t t79 = -318942;

	t79 = ((x345-x346)<(x347<x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MIN;
	int64_t x352 = INT64_MIN;
	int32_t t80 = 517185;

	t80 = ((x349-x350)<(x351<x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = INT16_MIN;
	volatile uint8_t x354 = UINT8_MAX;
	uint32_t x355 = UINT32_MAX;
	int64_t x356 = INT64_MIN;
	volatile int32_t t81 = -1;

	t81 = ((x353-x354)<(x355<x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x360 = 255LL;
	volatile int32_t t82 = -28;

	t82 = ((x357-x358)<(x359<x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = -1LL;
	uint64_t x366 = 152934052453LLU;
	static int8_t x367 = -1;
	static int32_t x368 = INT32_MAX;
	static int32_t t83 = 32336;

	t83 = ((x365-x366)<(x367<x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = 3165U;
	uint32_t x370 = 0U;
	int16_t x371 = INT16_MAX;
	static uint32_t x372 = UINT32_MAX;
	int32_t t84 = -104736;

	t84 = ((x369-x370)<(x371<x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MAX;
	static int16_t x375 = INT16_MAX;
	int16_t x376 = -15473;
	static int32_t t85 = 1138809;

	t85 = ((x373-x374)<(x375<x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = 1650269LLU;
	int64_t x378 = INT64_MAX;
	static int64_t x379 = INT64_MIN;
	uint32_t x380 = UINT32_MAX;
	int32_t t86 = 189;

	t86 = ((x377-x378)<(x379<x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x382 = 27U;
	static uint64_t x383 = 16499LLU;
	int32_t t87 = -923857;

	t87 = ((x381-x382)<(x383<x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x385 = 12391;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t88 = -330258637;

	t88 = ((x385-x386)<(x387<x388));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = -1LL;
	static int64_t x395 = -1LL;
	uint8_t x396 = 9U;
	int32_t t89 = -188422998;

	t89 = ((x393-x394)<(x395<x396));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = -420589686194LL;
	volatile uint64_t x398 = UINT64_MAX;
	static uint32_t x399 = 791016319U;
	int32_t x400 = INT32_MAX;
	int32_t t90 = -68;

	t90 = ((x397-x398)<(x399<x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x401 = -1539;
	static int64_t x402 = -1LL;
	volatile int8_t x403 = 2;
	volatile uint32_t x404 = 879238U;
	int32_t t91 = 4248594;

	t91 = ((x401-x402)<(x403<x404));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x406 = INT8_MAX;
	int64_t x407 = 69917454293504LL;
	int32_t t92 = 36255703;

	t92 = ((x405-x406)<(x407<x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x413 = 6806U;
	uint32_t x414 = 6767543U;
	int8_t x415 = 40;
	static volatile int32_t x416 = INT32_MIN;

	t93 = ((x413-x414)<(x415<x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x417 = 16433305444895148LLU;
	int32_t x419 = -1;
	uint8_t x420 = 3U;

	t94 = ((x417-x418)<(x419<x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x421 = UINT64_MAX;
	volatile int8_t x422 = 59;
	int32_t t95 = 5385292;

	t95 = ((x421-x422)<(x423<x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x425 = 646905124LLU;
	uint16_t x426 = UINT16_MAX;
	int8_t x427 = INT8_MAX;
	volatile int8_t x428 = INT8_MIN;
	static volatile int32_t t96 = -357442064;

	t96 = ((x425-x426)<(x427<x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = 32827986U;
	volatile int32_t x430 = INT32_MIN;
	uint64_t x432 = 6783264852916984986LLU;

	t97 = ((x429-x430)<(x431<x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x435 = 53LL;
	int32_t t98 = 92024721;

	t98 = ((x433-x434)<(x435<x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x437 = -1;
	uint16_t x438 = UINT16_MAX;
	int64_t x439 = INT64_MIN;
	int32_t t99 = 1;

	t99 = ((x437-x438)<(x439<x440));

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

