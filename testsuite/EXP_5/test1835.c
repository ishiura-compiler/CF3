#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = INT32_MIN;
int8_t x14 = 27;
uint64_t x17 = 29747350943LLU;
int16_t x21 = -11;
int16_t x24 = INT16_MIN;
int64_t x31 = -97254385LL;
int32_t x32 = -3180;
static uint64_t x33 = 44LLU;
int32_t x39 = INT32_MAX;
static volatile uint32_t t9 = 1498U;
volatile uint8_t x43 = 6U;
int8_t x45 = INT8_MIN;
int8_t x46 = INT8_MIN;
uint16_t x50 = UINT16_MAX;
static int16_t x52 = 8;
volatile int32_t t15 = -1;
int16_t x67 = 0;
int32_t x73 = INT32_MAX;
int16_t x79 = INT16_MIN;
int64_t t18 = 172LL;
int8_t x83 = 0;
volatile int64_t x88 = INT64_MAX;
int64_t t20 = 18524LL;
int8_t x89 = -1;
int16_t x90 = 147;
volatile int32_t x91 = -128;
int16_t x92 = INT16_MAX;
int32_t t21 = 362994068;
volatile int32_t x93 = -1;
static int64_t x96 = -1LL;
int16_t x100 = -1;
static int32_t x104 = INT32_MAX;
volatile uint8_t x116 = 5U;
static uint32_t x117 = 30641985U;
uint64_t x121 = UINT64_MAX;
uint32_t x122 = UINT32_MAX;
uint64_t t29 = 549115LLU;
int64_t t31 = -900869064LL;
static int8_t x146 = INT8_MAX;
volatile int8_t x148 = -1;
volatile uint64_t x160 = 8808514698275583391LLU;
int32_t t40 = 473319725;
volatile int16_t x171 = INT16_MIN;
int64_t x186 = -2LL;
volatile uint16_t x194 = 1631U;
volatile uint64_t t47 = 66493121LLU;
volatile int8_t x209 = -1;
int32_t x210 = INT32_MIN;
static int8_t x213 = INT8_MAX;
int32_t t50 = -4762413;
int8_t x219 = INT8_MIN;
int64_t x223 = INT64_MIN;
int64_t x224 = INT64_MIN;
int8_t x231 = INT8_MAX;
static uint32_t x233 = UINT32_MAX;
int32_t x249 = 193459776;
int32_t x251 = INT32_MAX;
volatile uint32_t t57 = 11U;
int8_t x253 = INT8_MIN;
uint16_t x254 = UINT16_MAX;
uint32_t t58 = 1U;
static int8_t x265 = -1;
static volatile uint8_t x266 = 5U;
uint8_t x271 = 1U;
int8_t x279 = INT8_MAX;
int32_t t64 = -59813;
uint8_t x286 = 1U;
int32_t x288 = -1;
int64_t x289 = 14231060176LL;
static int64_t t67 = -29LL;
int8_t x295 = 33;
static volatile int32_t x298 = INT32_MIN;
volatile int16_t x307 = -1;
volatile int8_t x308 = INT8_MAX;
volatile int32_t t71 = 3;
uint64_t t73 = 117034LLU;
uint32_t x317 = 752U;
int8_t x320 = 46;
uint32_t t74 = 59952U;
volatile int32_t t76 = 23;
uint64_t x345 = 57LLU;
volatile uint16_t x349 = 490U;
volatile uint16_t x352 = 26901U;
volatile int16_t x353 = INT16_MIN;
uint8_t x354 = 3U;
volatile int16_t x359 = 7;
static uint16_t x364 = UINT16_MAX;
uint16_t x366 = UINT16_MAX;
uint32_t x367 = 206702394U;
volatile uint64_t t85 = 34321659462433611LLU;
static uint32_t x370 = 4740U;
uint8_t x372 = 15U;
int8_t x378 = INT8_MAX;
uint32_t x379 = 27432486U;
uint64_t x381 = 4147343417301127LLU;
int32_t x389 = INT32_MIN;
volatile int8_t x392 = -1;
int32_t t91 = -625;
static int8_t x393 = 20;
int64_t x396 = 5026545LL;
volatile int16_t x399 = -13326;
volatile int32_t t93 = -2;
static int32_t x401 = INT32_MIN;
uint32_t x405 = 96263U;
volatile int64_t t95 = -21LL;
volatile uint64_t t96 = 3688370585399233LLU;
int16_t x413 = INT16_MIN;
static int64_t x420 = -1LL;
static int64_t t98 = -320591124725758303LL;
static int16_t x423 = -1;


void f0(void) {
	uint64_t x1 = 186546LLU;
	int16_t x2 = 1;
	volatile uint16_t x3 = 1U;
	int64_t x4 = 35378LL;
	static volatile uint64_t t0 = 54603284801598872LLU;

	t0 = (x1-((x2&x3)|x4));

	if (t0 != 151167LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 83;
	static int64_t x6 = INT64_MAX;
	uint32_t x7 = UINT32_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int64_t t1 = 6403LL;

	t1 = (x5-((x6&x7)|x8));

	if (t1 != -4294967212LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint8_t x10 = UINT8_MAX;
	uint32_t x11 = 55U;
	volatile int16_t x12 = INT16_MAX;
	volatile uint32_t t2 = 249U;

	t2 = (x9-((x10&x11)|x12));

	if (t2 != 32768U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = INT32_MIN;
	volatile uint32_t x16 = 1996U;
	volatile uint32_t t3 = 1U;

	t3 = (x13-((x14&x15)|x16));

	if (t3 != 2147481652U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = 1;
	static volatile int32_t x19 = -147002602;
	volatile int32_t x20 = -1;
	volatile uint64_t t4 = 2337LLU;

	t4 = (x17-((x18&x19)|x20));

	if (t4 != 29747350944LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 25LLU;
	uint64_t x23 = 2323010075328568LLU;
	static uint64_t t5 = 268382326LLU;

	t5 = (x21-((x22&x23)|x24));

	if (t5 != 32733LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int8_t x26 = -1;
	int8_t x27 = -1;
	int8_t x28 = -1;
	int32_t t6 = 1;

	t6 = (x25-((x26&x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int16_t x30 = 96;
	int64_t t7 = -5352716962LL;

	t7 = (x29-((x30&x31)|x32));

	if (t7 != 3179LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	volatile int8_t x35 = 13;
	uint32_t x36 = UINT32_MAX;
	static uint64_t t8 = 38131LLU;

	t8 = (x33-((x34&x35)|x36));

	if (t8 != 18446744069414584365LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	uint32_t x38 = UINT32_MAX;
	volatile uint16_t x40 = UINT16_MAX;

	t9 = (x37-((x38&x39)|x40));

	if (t9 != 2147549184U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 6712;
	static uint64_t x42 = UINT64_MAX;
	static int32_t x44 = -103757;
	volatile uint64_t t10 = 1LLU;

	t10 = (x41-((x42&x43)|x44));

	if (t10 != 110465LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x47 = UINT8_MAX;
	uint32_t x48 = UINT32_MAX;
	uint32_t t11 = 27709U;

	t11 = (x45-((x46&x47)|x48));

	if (t11 != 4294967169U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	uint8_t x51 = UINT8_MAX;
	static int32_t t12 = -191430;

	t12 = (x49-((x50&x51)|x52));

	if (t12 != -256) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 365598890LLU;
	int64_t x54 = -1LL;
	int16_t x55 = INT16_MIN;
	int8_t x56 = 1;
	static volatile uint64_t t13 = 2103866282647LLU;

	t13 = (x53-((x54&x55)|x56));

	if (t13 != 365631657LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MIN;
	static int16_t x60 = -1;
	volatile uint32_t t14 = 117330U;

	t14 = (x57-((x58&x59)|x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int32_t x62 = INT32_MIN;
	static int8_t x63 = INT8_MIN;
	uint16_t x64 = 753U;

	t15 = (x61-((x62&x63)|x64));

	if (t15 != 2147483022) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 21U;
	volatile int64_t x66 = -810495153327449714LL;
	uint8_t x68 = 2U;
	static int64_t t16 = -1339967975620LL;

	t16 = (x65-((x66&x67)|x68));

	if (t16 != 19LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x74 = INT64_MIN;
	uint64_t x75 = 355184LLU;
	uint8_t x76 = UINT8_MAX;
	volatile uint64_t t17 = 534LLU;

	t17 = (x73-((x74&x75)|x76));

	if (t17 != 2147483392LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MIN;
	volatile int64_t x78 = -46299284505359LL;
	int8_t x80 = INT8_MAX;

	t18 = (x77-((x78&x79)|x80));

	if (t18 != 46297137053569LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 9U;
	uint32_t x82 = 274453392U;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t19 = 1267271U;

	t19 = (x81-((x82&x83)|x84));

	if (t19 != 10U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = 579;
	int16_t x86 = -1613;
	volatile uint8_t x87 = 111U;

	t20 = (x85-((x86&x87)|x88));

	if (t20 != -9223372036854775228LL) { NG(); } else { ; }
	
}

void f21(void) {


	t21 = (x89-((x90&x91)|x92));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = INT16_MIN;
	int64_t x95 = INT64_MIN;
	int64_t t22 = 58LL;

	t22 = (x93-((x94&x95)|x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 203U;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = UINT32_MAX;
	int64_t t23 = -75007998362010288LL;

	t23 = (x97-((x98&x99)|x100));

	if (t23 != 204LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	static uint64_t x102 = 188016LLU;
	uint64_t x103 = UINT64_MAX;
	uint64_t t24 = 61870LLU;

	t24 = (x101-((x102&x103)|x104));

	if (t24 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 111U;
	int64_t x106 = INT64_MIN;
	static uint8_t x107 = UINT8_MAX;
	static int32_t x108 = INT32_MAX;
	volatile int64_t t25 = -14245LL;

	t25 = (x105-((x106&x107)|x108));

	if (t25 != -2147483536LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = 32472U;
	int16_t x110 = INT16_MIN;
	volatile uint16_t x111 = 88U;
	static uint32_t x112 = UINT32_MAX;
	uint32_t t26 = 1797U;

	t26 = (x109-((x110&x111)|x112));

	if (t26 != 32473U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 43611354669LLU;
	int32_t x114 = -6910444;
	static int32_t x115 = -1;
	uint64_t t27 = 34047096697967LLU;

	t27 = (x113-((x114&x115)|x116));

	if (t27 != 43618265112LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	volatile int8_t x120 = INT8_MIN;
	static int64_t t28 = 20243LL;

	t28 = (x117-((x118&x119)|x120));

	if (t28 != 30642113LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x123 = INT16_MIN;
	static int64_t x124 = INT64_MIN;

	t29 = (x121-((x122&x123)|x124));

	if (t29 != 9223372032559841279LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -3796562614581LL;
	uint8_t x126 = 1U;
	uint64_t x127 = 814149469265758610LLU;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t30 = 1907851587023439620LLU;

	t30 = (x125-((x126&x127)|x128));

	if (t30 != 9223368240292161227LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 7785U;
	int32_t x130 = -47068632;
	int8_t x131 = -1;
	int64_t x132 = INT64_MIN;

	t31 = (x129-((x130&x131)|x132));

	if (t31 != 47076417LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MIN;
	uint32_t x134 = 441766175U;
	static int64_t x135 = -16845LL;
	int32_t x136 = 3;
	static volatile int64_t t32 = -258650875663480309LL;

	t32 = (x133-((x134&x135)|x136));

	if (t32 != -2589233171LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = -2359636219870674616LL;
	static volatile int8_t x139 = INT8_MAX;
	volatile int8_t x140 = 0;
	static volatile int64_t t33 = -3368565220499LL;

	t33 = (x137-((x138&x139)|x140));

	if (t33 != 4294967223LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	int64_t x142 = -1LL;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = 128LLU;
	uint64_t t34 = 61LLU;

	t34 = (x141-((x142&x143)|x144));

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = UINT16_MAX;
	uint8_t x147 = UINT8_MAX;
	static volatile int32_t t35 = 166521206;

	t35 = (x145-((x146&x147)|x148));

	if (t35 != 65536) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -18;
	static volatile int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MAX;
	int16_t x152 = INT16_MIN;
	int64_t t36 = -208535363954111895LL;

	t36 = (x149-((x150&x151)|x152));

	if (t36 != 32750LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	int8_t x155 = -1;
	uint8_t x156 = 0U;
	volatile int32_t t37 = 352995;

	t37 = (x153-((x154&x155)|x156));

	if (t37 != -256) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	int8_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	static volatile uint64_t t38 = 17LLU;

	t38 = (x157-((x158&x159)|x160));

	if (t38 != 9638229374721327104LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x161 = 871316210449LLU;
	static int8_t x162 = INT8_MIN;
	volatile int8_t x163 = INT8_MAX;
	int32_t x164 = 3004;
	uint64_t t39 = 2210LLU;

	t39 = (x161-((x162&x163)|x164));

	if (t39 != 871316207445LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = INT16_MIN;
	static uint8_t x166 = 50U;
	uint16_t x167 = 30U;
	static volatile uint8_t x168 = UINT8_MAX;

	t40 = (x165-((x166&x167)|x168));

	if (t40 != -33023) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = INT64_MAX;
	uint8_t x170 = 2U;
	int64_t x172 = INT64_MAX;
	volatile int64_t t41 = 23478945740LL;

	t41 = (x169-((x170&x171)|x172));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x173 = 5757U;
	volatile uint16_t x174 = 1U;
	static uint64_t x175 = UINT64_MAX;
	static uint16_t x176 = 13U;
	volatile uint64_t t42 = 18386900309451LLU;

	t42 = (x173-((x174&x175)|x176));

	if (t42 != 5744LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	uint64_t x178 = 6LLU;
	static uint32_t x179 = UINT32_MAX;
	int32_t x180 = INT32_MIN;
	uint64_t t43 = 821079LLU;

	t43 = (x177-((x178&x179)|x180));

	if (t43 != 2147483641LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	volatile int64_t x183 = INT64_MIN;
	uint32_t x184 = UINT32_MAX;
	int64_t t44 = -2212387707LL;

	t44 = (x181-((x182&x183)|x184));

	if (t44 != -4294967295LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	int16_t x187 = INT16_MAX;
	int8_t x188 = INT8_MIN;
	int64_t t45 = -90923664151LL;

	t45 = (x185-((x186&x187)|x188));

	if (t45 != -32766LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = -2619;
	int8_t x195 = INT8_MIN;
	static int16_t x196 = INT16_MAX;
	int32_t t46 = 0;

	t46 = (x193-((x194&x195)|x196));

	if (t46 != -35386) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	uint64_t x202 = 367560962752973053LLU;
	volatile uint32_t x203 = 428U;
	static int64_t x204 = INT64_MAX;

	t47 = (x201-((x202&x203)|x204));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MIN;
	static int64_t x207 = -13573981756LL;
	static volatile int64_t x208 = -221560470378LL;
	volatile int64_t t48 = 11574708LL;

	t48 = (x205-((x206&x207)|x208));

	if (t48 != 10737418858LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x211 = 26444605467788LLU;
	int64_t x212 = -756848646LL;
	uint64_t t49 = 726996001LLU;

	t49 = (x209-((x210&x211)|x212));

	if (t49 != 756848645LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x214 = -1;
	static int16_t x215 = INT16_MAX;
	uint8_t x216 = 40U;

	t50 = (x213-((x214&x215)|x216));

	if (t50 != -32640) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x217 = 1U;
	uint8_t x218 = UINT8_MAX;
	uint64_t x220 = UINT64_MAX;
	uint64_t t51 = 311889696LLU;

	t51 = (x217-((x218&x219)|x220));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = -1;
	uint64_t x222 = 493330LLU;
	static volatile uint64_t t52 = 14279046507415793LLU;

	t52 = (x221-((x222&x223)|x224));

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = 13;
	int8_t x226 = INT8_MIN;
	int64_t x227 = -27835LL;
	static int16_t x228 = INT16_MIN;
	volatile int64_t t53 = -323LL;

	t53 = (x225-((x226&x227)|x228));

	if (t53 != 27917LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = -1;
	static volatile uint8_t x230 = 110U;
	static volatile int16_t x232 = INT16_MAX;
	static int32_t t54 = 49102237;

	t54 = (x229-((x230&x231)|x232));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x234 = INT16_MIN;
	volatile int8_t x235 = INT8_MAX;
	uint16_t x236 = 9U;
	static uint32_t t55 = 127296629U;

	t55 = (x233-((x234&x235)|x236));

	if (t55 != 4294967286U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = 68;
	int16_t x238 = INT16_MIN;
	volatile int8_t x239 = INT8_MIN;
	static uint32_t x240 = UINT32_MAX;
	uint32_t t56 = 5673355U;

	t56 = (x237-((x238&x239)|x240));

	if (t56 != 69U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x250 = UINT32_MAX;
	static uint32_t x252 = 172U;

	t57 = (x249-((x250&x251)|x252));

	if (t57 != 2340943425U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x255 = UINT32_MAX;
	static int16_t x256 = -1;

	t58 = (x253-((x254&x255)|x256));

	if (t58 != 4294967169U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = 36171062508528286LLU;
	int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	uint16_t x260 = UINT16_MAX;
	uint64_t t59 = 0LLU;

	t59 = (x257-((x258&x259)|x260));

	if (t59 != 9259543099363238559LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x261 = 202U;
	int16_t x262 = INT16_MIN;
	static int8_t x263 = INT8_MIN;
	static int16_t x264 = INT16_MIN;
	static volatile uint32_t t60 = 58032097U;

	t60 = (x261-((x262&x263)|x264));

	if (t60 != 32970U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x267 = 84754284;
	uint8_t x268 = 19U;
	static volatile int32_t t61 = -14;

	t61 = (x265-((x266&x267)|x268));

	if (t61 != -24) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x269 = -8;
	int64_t x270 = -1LL;
	static uint8_t x272 = 42U;
	volatile int64_t t62 = 0LL;

	t62 = (x269-((x270&x271)|x272));

	if (t62 != -51LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -5;
	int64_t x274 = -51LL;
	int16_t x275 = 8;
	int64_t x276 = 6161910LL;
	volatile int64_t t63 = -27301684658526583LL;

	t63 = (x273-((x274&x275)|x276));

	if (t63 != -6161923LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MAX;
	static volatile int16_t x278 = -1;
	volatile int8_t x280 = INT8_MIN;

	t64 = (x277-((x278&x279)|x280));

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x281 = 5963246916008LLU;
	static int64_t x282 = INT64_MAX;
	uint8_t x283 = 23U;
	static int16_t x284 = -66;
	uint64_t t65 = 136158799895065LLU;

	t65 = (x281-((x282&x283)|x284));

	if (t65 != 5963246916073LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x285 = -1;
	uint32_t x287 = 29U;
	volatile uint32_t t66 = 2317314U;

	t66 = (x285-((x286&x287)|x288));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x290 = INT64_MIN;
	static uint32_t x291 = 1038085U;
	volatile int32_t x292 = 37;

	t67 = (x289-((x290&x291)|x292));

	if (t67 != 14231060139LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 57U;
	int8_t x294 = 3;
	volatile uint8_t x296 = UINT8_MAX;
	static volatile uint32_t t68 = 31785U;

	t68 = (x293-((x294&x295)|x296));

	if (t68 != 4294967098U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = 0;
	static uint16_t x299 = UINT16_MAX;
	static volatile int8_t x300 = INT8_MIN;
	int32_t t69 = 142900080;

	t69 = (x297-((x298&x299)|x300));

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = 3698760491LLU;
	volatile int32_t x302 = 12895;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 697857914U;
	uint64_t t70 = 15375474715915LLU;

	t70 = (x301-((x302&x303)|x304));

	if (t70 != 3000902577LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MAX;
	int32_t x306 = -31145;

	t71 = (x305-((x306&x307)|x308));

	if (t71 != 63872) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x309 = -81961271;
	static int8_t x310 = -1;
	uint16_t x311 = 2U;
	uint16_t x312 = UINT16_MAX;
	static int32_t t72 = 1;

	t72 = (x309-((x310&x311)|x312));

	if (t72 != -82026806) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x313 = 4150U;
	static volatile int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MAX;
	uint64_t x316 = 7005634904018229368LLU;

	t73 = (x313-((x314&x315)|x316));

	if (t73 != 11441109169691326391LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x318 = UINT8_MAX;
	int32_t x319 = INT32_MIN;

	t74 = (x317-((x318&x319)|x320));

	if (t74 != 706U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = 1;
	uint16_t x322 = 6299U;
	int32_t x323 = 18334;
	static uint32_t x324 = 453760814U;
	uint32_t t75 = 1521084U;

	t75 = (x321-((x322&x323)|x324));

	if (t75 != 3841206339U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = UINT8_MAX;
	int32_t x326 = 11872;
	uint16_t x327 = 201U;
	int32_t x328 = -1;

	t76 = (x325-((x326&x327)|x328));

	if (t76 != 256) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x329 = 44494U;
	uint8_t x330 = 30U;
	int16_t x331 = -1;
	uint16_t x332 = UINT16_MAX;
	volatile uint32_t t77 = 1U;

	t77 = (x329-((x330&x331)|x332));

	if (t77 != 4294946255U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x337 = -1;
	int32_t x338 = INT32_MIN;
	static uint64_t x339 = 3LLU;
	uint64_t x340 = 26LLU;
	uint64_t t78 = 10998186LLU;

	t78 = (x337-((x338&x339)|x340));

	if (t78 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x341 = INT8_MIN;
	uint32_t x342 = 1183U;
	int8_t x343 = -1;
	int32_t x344 = INT32_MIN;
	uint32_t t79 = 6103U;

	t79 = (x341-((x342&x343)|x344));

	if (t79 != 2147482337U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x346 = 6U;
	volatile int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;
	static volatile uint64_t t80 = 290LLU;

	t80 = (x345-((x346&x347)|x348));

	if (t80 != 9223372036854775865LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x350 = 0U;
	static int64_t x351 = -3274420432LL;
	volatile int64_t t81 = -5LL;

	t81 = (x349-((x350&x351)|x352));

	if (t81 != -26411LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x355 = -4;
	int32_t x356 = 46;
	int32_t t82 = -1185;

	t82 = (x353-((x354&x355)|x356));

	if (t82 != -32814) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x357 = 91U;
	int8_t x358 = INT8_MIN;
	static int8_t x360 = -16;
	int32_t t83 = 1;

	t83 = (x357-((x358&x359)|x360));

	if (t83 != 107) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	volatile int64_t t84 = 12044827589LL;

	t84 = (x361-((x362&x363)|x364));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x365 = 175145024373LLU;
	int64_t x368 = INT64_MIN;

	t85 = (x365-((x366&x367)|x368));

	if (t85 != 9223372211999798331LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = 1;
	int64_t x371 = INT64_MAX;
	int64_t t86 = 508022878869376LL;

	t86 = (x369-((x370&x371)|x372));

	if (t86 != -4750LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = INT16_MAX;
	static int8_t x374 = 6;
	int16_t x375 = 5;
	uint32_t x376 = 7983U;
	volatile uint32_t t87 = 176U;

	t87 = (x373-((x374&x375)|x376));

	if (t87 != 24784U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = -1;
	int32_t x380 = INT32_MIN;
	uint32_t t88 = 0U;

	t88 = (x377-((x378&x379)|x380));

	if (t88 != 2147483609U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x382 = INT8_MAX;
	static int16_t x383 = 1;
	int32_t x384 = 87331701;
	volatile uint64_t t89 = 1620883479506695151LLU;

	t89 = (x381-((x382&x383)|x384));

	if (t89 != 4147343329969426LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x385 = 117U;
	volatile int8_t x386 = INT8_MIN;
	int64_t x387 = -1LL;
	int8_t x388 = -1;
	volatile int64_t t90 = 111LL;

	t90 = (x385-((x386&x387)|x388));

	if (t90 != 118LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x390 = -1;
	int16_t x391 = INT16_MAX;

	t91 = (x389-((x390&x391)|x392));

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = -1;
	volatile int64_t t92 = 0LL;

	t92 = (x393-((x394&x395)|x396));

	if (t92 != 9223372036849749283LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = 0;
	int16_t x400 = -1;

	t93 = (x397-((x398&x399)|x400));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x402 = 7U;
	uint16_t x403 = UINT16_MAX;
	int8_t x404 = INT8_MIN;
	static volatile int32_t t94 = 0;

	t94 = (x401-((x402&x403)|x404));

	if (t94 != -2147483527) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x406 = 1U;
	int64_t x407 = -1LL;
	int16_t x408 = INT16_MAX;

	t95 = (x405-((x406&x407)|x408));

	if (t95 != 63496LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = -14800;
	uint64_t x411 = 4437607921507924007LLU;
	int8_t x412 = INT8_MAX;

	t96 = (x409-((x410&x411)|x412));

	if (t96 != 14009136150054158209LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x414 = -1;
	int64_t x415 = INT64_MAX;
	volatile int16_t x416 = INT16_MIN;
	int64_t t97 = -387LL;

	t97 = (x413-((x414&x415)|x416));

	if (t97 != -32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = INT64_MIN;
	int8_t x418 = 15;
	int16_t x419 = INT16_MIN;

	t98 = (x417-((x418&x419)|x420));

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MAX;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t99 = -222342;

	t99 = (x421-((x422&x423)|x424));

	if (t99 != 65408) { NG(); } else { ; }
	
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

