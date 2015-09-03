#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t t0 = 106395;
int16_t x14 = 1;
static uint32_t x21 = 118586169U;
volatile uint32_t x24 = UINT32_MAX;
static int16_t x47 = INT16_MAX;
int64_t x60 = 1LL;
int64_t x63 = 4440717LL;
static volatile int32_t t11 = -2;
int64_t x67 = 58986153061230LL;
static int8_t x73 = 1;
int8_t x75 = INT8_MAX;
uint16_t x77 = 2U;
int32_t t15 = 30182;
volatile int64_t x94 = -1LL;
uint32_t x100 = 622665211U;
volatile int32_t t20 = -616760;
static volatile int32_t t23 = 80182;
int64_t x128 = -173843700622082LL;
volatile int32_t t24 = -426;
volatile int16_t x133 = INT16_MIN;
static int64_t x134 = INT64_MIN;
volatile uint64_t x147 = UINT64_MAX;
static int16_t x156 = -476;
volatile int32_t t29 = 659028952;
volatile int32_t x159 = INT32_MIN;
uint64_t x163 = UINT64_MAX;
static int32_t x164 = 385679581;
int64_t x168 = INT64_MAX;
int8_t x173 = INT8_MAX;
static volatile uint64_t x174 = 8391686190LLU;
static int16_t x183 = 3162;
int8_t x184 = 0;
uint8_t x197 = 15U;
int32_t x200 = 66;
int16_t x205 = 8937;
int32_t x215 = INT32_MIN;
static int32_t t41 = -9874;
int16_t x218 = INT16_MIN;
uint32_t x220 = 227456U;
int8_t x227 = 2;
volatile int32_t t44 = -2724;
static uint16_t x233 = 0U;
static uint16_t x234 = 108U;
static int32_t x236 = INT32_MIN;
int8_t x239 = INT8_MAX;
static uint64_t x253 = 4183153810738LLU;
uint8_t x255 = 58U;
int8_t x256 = INT8_MIN;
volatile int32_t t50 = -532689134;
uint16_t x281 = UINT16_MAX;
volatile int32_t t55 = 20;
static volatile int32_t t57 = 0;
volatile int32_t t58 = 62671809;
uint8_t x318 = 89U;
int8_t x319 = 1;
uint32_t x324 = 2995779U;
uint8_t x343 = 1U;
int8_t x348 = INT8_MIN;
int64_t x349 = -24986902718LL;
int8_t x352 = INT8_MAX;
int8_t x353 = INT8_MAX;
int32_t x359 = 29;
volatile int32_t x361 = -251;
int64_t x383 = -1LL;
int32_t t72 = -4;
int32_t x390 = -444851128;
int32_t t73 = -247;
uint16_t x393 = 1106U;
int32_t t74 = -3338;
static int16_t x399 = -1;
volatile int32_t t75 = -33549772;
uint16_t x402 = 1781U;
int64_t x422 = -1LL;
uint32_t x428 = UINT32_MAX;
int32_t x438 = INT32_MIN;
volatile int8_t x439 = 0;
static volatile int16_t x442 = 219;
volatile uint8_t x446 = 7U;
volatile int16_t x452 = INT16_MIN;
int32_t x454 = INT32_MIN;
int16_t x456 = INT16_MIN;
volatile uint64_t x462 = 359860LLU;
int16_t x466 = 3919;
volatile int32_t t87 = -585812;
int16_t x469 = INT16_MIN;
volatile int8_t x470 = -44;
int16_t x473 = INT16_MAX;
volatile int32_t t89 = -64;
volatile int32_t x479 = -213;
volatile int16_t x480 = INT16_MIN;
uint8_t x483 = 6U;
int32_t t92 = -42;
uint64_t x491 = 0LLU;
int64_t x492 = 1030057422LL;
int8_t x498 = 53;
static volatile int16_t x499 = INT16_MIN;
volatile int32_t t95 = 229;
int32_t t97 = -5930;


void f0(void) {
	int8_t x2 = INT8_MIN;
	uint64_t x3 = 5LLU;
	volatile int64_t x4 = -1LL;

	t0 = ((x1-x2)==(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	int32_t x6 = INT32_MAX;
	int16_t x7 = INT16_MAX;
	int64_t x8 = -1LL;
	int32_t t1 = -74022;

	t1 = ((x5-x6)==(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 2005002985U;
	volatile int64_t x10 = -101053823825809096LL;
	int32_t x11 = 396479367;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 10;

	t2 = ((x9-x10)==(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int64_t x15 = -1354229LL;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = -1;

	t3 = ((x13-x14)==(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MIN;
	static int32_t x23 = 396670719;
	int32_t t4 = 1042;

	t4 = ((x21-x22)==(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 124U;
	int16_t x26 = 505;
	static int16_t x27 = -1;
	int8_t x28 = -1;
	static volatile int32_t t5 = -1662;

	t5 = ((x25-x26)==(x27-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	static int16_t x30 = -141;
	int8_t x31 = INT8_MIN;
	uint32_t x32 = 260U;
	volatile int32_t t6 = 10131;

	t6 = ((x29-x30)==(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	volatile int16_t x34 = INT16_MIN;
	volatile uint16_t x35 = 0U;
	static int8_t x36 = INT8_MIN;
	int32_t t7 = -21355143;

	t7 = ((x33-x34)==(x35-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MAX;
	volatile uint8_t x42 = UINT8_MAX;
	int16_t x43 = -7;
	static int64_t x44 = INT64_MIN;
	int32_t t8 = -905582;

	t8 = ((x41-x42)==(x43-x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x45 = UINT8_MAX;
	volatile uint16_t x46 = 0U;
	static volatile int8_t x48 = 2;
	volatile int32_t t9 = 7178;

	t9 = ((x45-x46)==(x47-x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x57 = INT64_MIN;
	volatile int64_t x58 = INT64_MIN;
	uint64_t x59 = UINT64_MAX;
	static int32_t t10 = 211379779;

	t10 = ((x57-x58)==(x59-x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MAX;
	uint8_t x62 = UINT8_MAX;
	uint16_t x64 = 2U;

	t11 = ((x61-x62)==(x63-x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 4LLU;
	int8_t x66 = INT8_MIN;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t12 = 0;

	t12 = ((x65-x66)==(x67-x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 1908864070421805LLU;
	static int8_t x70 = INT8_MIN;
	static int8_t x71 = INT8_MAX;
	static int64_t x72 = INT64_MAX;
	int32_t t13 = -2392170;

	t13 = ((x69-x70)==(x71-x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x74 = 107464;
	int16_t x76 = INT16_MIN;
	volatile int32_t t14 = 76073507;

	t14 = ((x73-x74)==(x75-x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x78 = 466U;
	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MIN;

	t15 = ((x77-x78)==(x79-x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	int16_t x83 = 8;
	int32_t x84 = -1000132;
	int32_t t16 = 25094560;

	t16 = ((x81-x82)==(x83-x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = 247U;
	int8_t x86 = INT8_MAX;
	static int32_t x87 = 63438136;
	uint8_t x88 = 11U;
	volatile int32_t t17 = -1;

	t17 = ((x85-x86)==(x87-x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = -1204;
	volatile uint16_t x91 = 5U;
	static uint8_t x92 = 9U;
	volatile int32_t t18 = 222160;

	t18 = ((x89-x90)==(x91-x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	int32_t x95 = -302421403;
	volatile int16_t x96 = INT16_MIN;
	int32_t t19 = 282;

	t19 = ((x93-x94)==(x95-x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MAX;

	t20 = ((x97-x98)==(x99-x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = 7543;
	static uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MIN;
	int32_t x104 = -33599440;
	int32_t t21 = -3;

	t21 = ((x101-x102)==(x103-x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	uint16_t x114 = UINT16_MAX;
	volatile int16_t x115 = -1;
	int64_t x116 = INT64_MAX;
	volatile int32_t t22 = 3;

	t22 = ((x113-x114)==(x115-x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x121 = UINT8_MAX;
	int16_t x122 = INT16_MIN;
	static int8_t x123 = INT8_MIN;
	uint16_t x124 = UINT16_MAX;

	t23 = ((x121-x122)==(x123-x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x125 = 47U;
	int64_t x126 = -1LL;
	int64_t x127 = INT64_MIN;

	t24 = ((x125-x126)==(x127-x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x135 = -1;
	uint32_t x136 = 22182U;
	volatile int32_t t25 = -13431022;

	t25 = ((x133-x134)==(x135-x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MAX;
	static volatile int8_t x142 = 1;
	uint16_t x143 = UINT16_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t26 = 203089;

	t26 = ((x141-x142)==(x143-x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x145 = 1651LLU;
	static uint8_t x146 = 10U;
	static uint16_t x148 = 0U;
	int32_t t27 = -168560;

	t27 = ((x145-x146)==(x147-x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = -1;
	uint64_t x150 = 1505886LLU;
	static int32_t x151 = 1006;
	uint16_t x152 = 3U;
	int32_t t28 = -374387;

	t28 = ((x149-x150)==(x151-x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x153 = 28071U;
	int32_t x154 = INT32_MAX;
	int32_t x155 = INT32_MIN;

	t29 = ((x153-x154)==(x155-x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x157 = UINT32_MAX;
	volatile int32_t x158 = INT32_MAX;
	int64_t x160 = -1LL;
	int32_t t30 = 4;

	t30 = ((x157-x158)==(x159-x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = UINT32_MAX;
	int32_t t31 = -6906373;

	t31 = ((x161-x162)==(x163-x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = 1365LLU;
	uint64_t x166 = 35640973LLU;
	uint8_t x167 = 40U;
	int32_t t32 = 1032938215;

	t32 = ((x165-x166)==(x167-x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = 0U;
	int32_t t33 = -5682771;

	t33 = ((x169-x170)==(x171-x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x175 = -1LL;
	int16_t x176 = 5735;
	int32_t t34 = 541;

	t34 = ((x173-x174)==(x175-x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x181 = INT16_MIN;
	volatile int32_t x182 = INT32_MIN;
	int32_t t35 = 83;

	t35 = ((x181-x182)==(x183-x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x185 = -1;
	static int8_t x186 = INT8_MIN;
	uint8_t x187 = 1U;
	int16_t x188 = 0;
	volatile int32_t t36 = 4539845;

	t36 = ((x185-x186)==(x187-x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x189 = INT64_MAX;
	int16_t x190 = 4500;
	int8_t x191 = INT8_MIN;
	volatile uint32_t x192 = 14732558U;
	int32_t t37 = -29;

	t37 = ((x189-x190)==(x191-x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x198 = INT64_MAX;
	uint64_t x199 = UINT64_MAX;
	int32_t t38 = 4183;

	t38 = ((x197-x198)==(x199-x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = 13;
	volatile int64_t x208 = 7LL;
	volatile int32_t t39 = -196;

	t39 = ((x205-x206)==(x207-x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x209 = -1;
	uint64_t x210 = UINT64_MAX;
	uint8_t x211 = 5U;
	volatile int8_t x212 = INT8_MAX;
	volatile int32_t t40 = 330;

	t40 = ((x209-x210)==(x211-x212));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x213 = INT16_MAX;
	uint32_t x214 = UINT32_MAX;
	int64_t x216 = INT64_MIN;

	t41 = ((x213-x214)==(x215-x216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x217 = INT32_MIN;
	uint32_t x219 = UINT32_MAX;
	static int32_t t42 = -1;

	t42 = ((x217-x218)==(x219-x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x225 = 71U;
	static uint64_t x226 = 672LLU;
	int32_t x228 = INT32_MAX;
	int32_t t43 = -93894699;

	t43 = ((x225-x226)==(x227-x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x229 = -1;
	uint64_t x230 = UINT64_MAX;
	volatile int8_t x231 = INT8_MIN;
	static int8_t x232 = -1;

	t44 = ((x229-x230)==(x231-x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x235 = INT32_MIN;
	int32_t t45 = 1;

	t45 = ((x233-x234)==(x235-x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x237 = 2174567710772325LLU;
	static uint8_t x238 = 4U;
	int64_t x240 = 696LL;
	static int32_t t46 = -329;

	t46 = ((x237-x238)==(x239-x240));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x245 = 22966U;
	int16_t x246 = 1540;
	volatile int8_t x247 = INT8_MAX;
	static int64_t x248 = -1LL;
	static int32_t t47 = -794987;

	t47 = ((x245-x246)==(x247-x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x249 = 65183LLU;
	volatile int64_t x250 = -1LL;
	uint8_t x251 = 15U;
	uint16_t x252 = 2U;
	volatile int32_t t48 = -3110;

	t48 = ((x249-x250)==(x251-x252));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x254 = 3820287093LL;
	static int32_t t49 = -1;

	t49 = ((x253-x254)==(x255-x256));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = UINT32_MAX;
	uint64_t x259 = 27884014238LLU;
	int64_t x260 = -116332LL;

	t50 = ((x257-x258)==(x259-x260));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x261 = -1;
	uint8_t x262 = 114U;
	int8_t x263 = INT8_MIN;
	int8_t x264 = 22;
	int32_t t51 = 615;

	t51 = ((x261-x262)==(x263-x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x265 = 3825982595301994LL;
	static uint32_t x266 = 242813586U;
	int8_t x267 = -1;
	volatile uint8_t x268 = 15U;
	int32_t t52 = -102338121;

	t52 = ((x265-x266)==(x267-x268));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = 0;
	int64_t x278 = -22552320LL;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = UINT32_MAX;
	int32_t t53 = -625698934;

	t53 = ((x277-x278)==(x279-x280));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x282 = 8993U;
	static int32_t x283 = INT32_MIN;
	int64_t x284 = -1LL;
	static volatile int32_t t54 = -526666;

	t54 = ((x281-x282)==(x283-x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x297 = UINT32_MAX;
	volatile int16_t x298 = INT16_MAX;
	static int8_t x299 = -1;
	int8_t x300 = INT8_MAX;

	t55 = ((x297-x298)==(x299-x300));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x302 = INT32_MAX;
	int64_t x303 = 845997203652742931LL;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t56 = 6;

	t56 = ((x301-x302)==(x303-x304));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = -11789168341LL;
	int32_t x307 = -1;
	uint8_t x308 = UINT8_MAX;

	t57 = ((x305-x306)==(x307-x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x313 = UINT32_MAX;
	static int16_t x314 = INT16_MIN;
	static uint8_t x315 = 1U;
	uint8_t x316 = UINT8_MAX;

	t58 = ((x313-x314)==(x315-x316));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = -1LL;
	volatile uint16_t x320 = 114U;
	int32_t t59 = 62603;

	t59 = ((x317-x318)==(x319-x320));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = INT16_MAX;
	static int16_t x322 = INT16_MIN;
	int8_t x323 = -3;
	static int32_t t60 = -57;

	t60 = ((x321-x322)==(x323-x324));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = -47;
	int16_t x326 = INT16_MAX;
	static int16_t x327 = INT16_MIN;
	int64_t x328 = -1LL;
	volatile int32_t t61 = -22732483;

	t61 = ((x325-x326)==(x327-x328));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = -1;
	int16_t x330 = -1;
	int16_t x331 = 3818;
	int16_t x332 = INT16_MIN;
	int32_t t62 = -156719427;

	t62 = ((x329-x330)==(x331-x332));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t63 = -5;

	t63 = ((x333-x334)==(x335-x336));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = 1;
	int32_t x344 = -6947;
	static int32_t t64 = 23;

	t64 = ((x341-x342)==(x343-x344));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x345 = 0U;
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 16LLU;
	volatile int32_t t65 = -1595;

	t65 = ((x345-x346)==(x347-x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	static volatile int32_t t66 = 490;

	t66 = ((x349-x350)==(x351-x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x354 = 0U;
	uint16_t x355 = 1512U;
	int8_t x356 = INT8_MAX;
	volatile int32_t t67 = -682410;

	t67 = ((x353-x354)==(x355-x356));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x357 = UINT64_MAX;
	uint64_t x358 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t68 = -28;

	t68 = ((x357-x358)==(x359-x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x362 = 28389LL;
	int16_t x363 = INT16_MAX;
	int64_t x364 = INT64_MAX;
	int32_t t69 = 205268;

	t69 = ((x361-x362)==(x363-x364));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x365 = 13LLU;
	int64_t x366 = INT64_MIN;
	int32_t x367 = 0;
	int64_t x368 = INT64_MAX;
	volatile int32_t t70 = -14;

	t70 = ((x365-x366)==(x367-x368));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x369 = -1LL;
	int8_t x370 = INT8_MIN;
	static uint16_t x371 = 1U;
	int32_t x372 = -176946;
	volatile int32_t t71 = -39557;

	t71 = ((x369-x370)==(x371-x372));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x381 = INT32_MIN;
	int64_t x382 = -1LL;
	int8_t x384 = 3;

	t72 = ((x381-x382)==(x383-x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x389 = 6602U;
	int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MIN;

	t73 = ((x389-x390)==(x391-x392));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x394 = INT8_MAX;
	static uint32_t x395 = 1239U;
	volatile int32_t x396 = 1;

	t74 = ((x393-x394)==(x395-x396));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x397 = 139U;
	volatile uint32_t x398 = UINT32_MAX;
	int64_t x400 = -1LL;

	t75 = ((x397-x398)==(x399-x400));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x401 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	volatile int16_t x404 = INT16_MIN;
	volatile int32_t t76 = 20363392;

	t76 = ((x401-x402)==(x403-x404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x413 = UINT64_MAX;
	uint8_t x414 = 0U;
	volatile uint32_t x415 = UINT32_MAX;
	int8_t x416 = INT8_MAX;
	int32_t t77 = 14;

	t77 = ((x413-x414)==(x415-x416));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = INT64_MIN;
	volatile int8_t x418 = INT8_MIN;
	uint16_t x419 = UINT16_MAX;
	int8_t x420 = 7;
	static volatile int32_t t78 = 173281;

	t78 = ((x417-x418)==(x419-x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x421 = 1U;
	static uint32_t x423 = UINT32_MAX;
	static int64_t x424 = INT64_MAX;
	int32_t t79 = 5256;

	t79 = ((x421-x422)==(x423-x424));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x425 = INT16_MIN;
	volatile int16_t x426 = INT16_MIN;
	int8_t x427 = -1;
	static int32_t t80 = 72306176;

	t80 = ((x425-x426)==(x427-x428));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x437 = 742U;
	volatile int64_t x440 = INT64_MAX;
	volatile int32_t t81 = 438670967;

	t81 = ((x437-x438)==(x439-x440));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x441 = 17612812171488LL;
	static int8_t x443 = -1;
	int32_t x444 = INT32_MIN;
	static int32_t t82 = 9018988;

	t82 = ((x441-x442)==(x443-x444));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x445 = INT64_MAX;
	int64_t x447 = INT64_MAX;
	static uint64_t x448 = 3LLU;
	int32_t t83 = -397359;

	t83 = ((x445-x446)==(x447-x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x449 = 1898002LLU;
	volatile int32_t x450 = 0;
	int32_t x451 = 2011;
	volatile int32_t t84 = -452;

	t84 = ((x449-x450)==(x451-x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x453 = 280895U;
	static int32_t x455 = 95123;
	volatile int32_t t85 = 52436141;

	t85 = ((x453-x454)==(x455-x456));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x461 = INT8_MAX;
	int8_t x463 = INT8_MAX;
	static int8_t x464 = INT8_MAX;
	int32_t t86 = -5762;

	t86 = ((x461-x462)==(x463-x464));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = -1;
	int16_t x467 = 103;
	static volatile uint16_t x468 = 14U;

	t87 = ((x465-x466)==(x467-x468));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x471 = INT32_MIN;
	volatile int64_t x472 = -1LL;
	static volatile int32_t t88 = 151;

	t88 = ((x469-x470)==(x471-x472));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x474 = -356456278440LL;
	static volatile int16_t x475 = INT16_MIN;
	int32_t x476 = 245525;

	t89 = ((x473-x474)==(x475-x476));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x477 = INT8_MIN;
	int32_t x478 = -1;
	volatile int32_t t90 = 12;

	t90 = ((x477-x478)==(x479-x480));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x481 = UINT16_MAX;
	static uint8_t x482 = 30U;
	int16_t x484 = 1;
	int32_t t91 = 518759;

	t91 = ((x481-x482)==(x483-x484));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x485 = 241016LLU;
	volatile uint16_t x486 = 7U;
	uint32_t x487 = 3395U;
	int32_t x488 = INT32_MIN;

	t92 = ((x485-x486)==(x487-x488));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x489 = 8695U;
	int32_t x490 = -1;
	volatile int32_t t93 = 4149592;

	t93 = ((x489-x490)==(x491-x492));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x497 = -2591414746LL;
	volatile int32_t x500 = INT32_MIN;
	static volatile int32_t t94 = 242;

	t94 = ((x497-x498)==(x499-x500));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x501 = 1819U;
	uint32_t x502 = 37U;
	uint64_t x503 = 27717045486992880LLU;
	volatile int32_t x504 = INT32_MAX;

	t95 = ((x501-x502)==(x503-x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x505 = INT8_MIN;
	volatile uint32_t x506 = UINT32_MAX;
	uint64_t x507 = 8671LLU;
	int16_t x508 = INT16_MIN;
	int32_t t96 = 451773;

	t96 = ((x505-x506)==(x507-x508));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x509 = -15914LL;
	int16_t x510 = -126;
	volatile int32_t x511 = INT32_MIN;
	volatile int8_t x512 = -3;

	t97 = ((x509-x510)==(x511-x512));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = INT32_MIN;
	volatile uint32_t x518 = 11655U;
	int8_t x519 = INT8_MAX;
	int16_t x520 = INT16_MAX;
	int32_t t98 = 78;

	t98 = ((x517-x518)==(x519-x520));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x521 = 137;
	uint64_t x522 = 5233071618070354416LLU;
	uint32_t x523 = 0U;
	volatile int8_t x524 = INT8_MIN;
	volatile int32_t t99 = -601247;

	t99 = ((x521-x522)==(x523-x524));

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

