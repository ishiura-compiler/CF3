#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 5U;
int8_t x7 = INT8_MAX;
static volatile int8_t x15 = 0;
static int16_t x24 = INT16_MAX;
uint16_t x42 = 247U;
int32_t t7 = 3796518;
static uint16_t x53 = 11U;
int8_t x56 = -1;
int32_t t9 = -237408;
int32_t x61 = INT32_MIN;
uint8_t x67 = 0U;
uint64_t x68 = 15464611LLU;
static volatile int32_t t13 = -1217;
int16_t x79 = INT16_MAX;
static volatile uint64_t x84 = UINT64_MAX;
int64_t x85 = INT64_MIN;
uint16_t x87 = UINT16_MAX;
static int8_t x89 = -1;
int8_t x92 = 0;
int64_t x100 = -1LL;
static volatile int32_t t23 = -17;
int8_t x136 = INT8_MIN;
uint32_t x144 = 23332U;
int16_t x152 = INT16_MIN;
int32_t t27 = -289;
uint32_t x164 = UINT32_MAX;
uint16_t x170 = 0U;
int8_t x172 = INT8_MAX;
int32_t x174 = -1419841;
uint8_t x178 = 0U;
static int16_t x185 = INT16_MIN;
uint32_t x187 = 53U;
volatile uint16_t x199 = UINT16_MAX;
volatile int32_t t37 = 2791;
int16_t x212 = INT16_MAX;
static volatile uint32_t x219 = 272U;
volatile int16_t x231 = -1;
int64_t x244 = -1052190LL;
uint16_t x250 = UINT16_MAX;
volatile int32_t t46 = 2;
volatile int32_t t48 = 439183;
uint8_t x274 = 9U;
int8_t x279 = -1;
volatile int32_t t51 = -21;
int16_t x298 = 10;
static int64_t x308 = INT64_MIN;
volatile int16_t x314 = -1;
static int32_t x316 = -1;
int32_t t57 = 27700;
static int16_t x325 = -1;
volatile int32_t t60 = 97975;
int32_t t61 = -7585762;
static int64_t x342 = INT64_MIN;
int32_t t63 = 722;
volatile uint32_t x350 = 0U;
int32_t t64 = 31120;
int16_t x360 = -1;
int64_t x361 = INT64_MIN;
volatile int32_t x366 = INT32_MIN;
int16_t x367 = -249;
uint64_t x387 = 1648096LLU;
int16_t x388 = INT16_MIN;
int32_t t70 = 3;
int8_t x390 = INT8_MIN;
volatile int16_t x396 = INT16_MAX;
int8_t x408 = INT8_MIN;
volatile int32_t x422 = INT32_MIN;
volatile int16_t x427 = INT16_MIN;
volatile int16_t x431 = INT16_MAX;
static int16_t x432 = 6445;
volatile int16_t x433 = -1;
volatile uint64_t x434 = 36058794162541103LLU;
volatile int8_t x439 = 42;
uint8_t x454 = UINT8_MAX;
int32_t t82 = -378;
int64_t x458 = INT64_MIN;
volatile int64_t x463 = -1LL;
int8_t x476 = INT8_MIN;
int32_t x489 = INT32_MAX;
static uint8_t x490 = 33U;
int8_t x498 = -1;
int16_t x502 = INT16_MIN;
volatile int32_t t91 = -2347200;
volatile uint8_t x511 = 114U;
int64_t x513 = INT64_MIN;
volatile uint16_t x514 = UINT16_MAX;
uint64_t x515 = 3485381852LLU;
int32_t t94 = -6160746;
static uint16_t x523 = UINT16_MAX;
uint64_t x524 = 209057604301LLU;
static uint8_t x527 = 1U;
uint16_t x537 = 600U;
int8_t x538 = INT8_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint32_t x2 = 142356U;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 201;

	t0 = ((x1|x2)==(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 276307977943LL;
	int8_t x6 = INT8_MAX;
	static uint8_t x8 = 13U;
	int32_t t1 = -158205;

	t1 = ((x5|x6)==(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = 3U;
	static uint8_t x16 = 14U;
	volatile int32_t t2 = 29205426;

	t2 = ((x13|x14)==(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	static uint8_t x18 = 61U;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = 278089326;

	t3 = ((x17|x18)==(x19*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 1U;
	int64_t x22 = 188LL;
	static volatile int8_t x23 = -1;
	volatile int32_t t4 = 1;

	t4 = ((x21|x22)==(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	int16_t x26 = INT16_MAX;
	static volatile uint8_t x27 = 0U;
	int64_t x28 = INT64_MAX;
	static int32_t t5 = 333591776;

	t5 = ((x25|x26)==(x27*x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MIN;
	static volatile uint8_t x43 = 3U;
	uint64_t x44 = UINT64_MAX;
	int32_t t6 = -21848;

	t6 = ((x41|x42)==(x43*x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = 6;
	uint16_t x46 = UINT16_MAX;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = 1957;

	t7 = ((x45|x46)==(x47*x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = -1;
	static int64_t x50 = INT64_MIN;
	int32_t x51 = 61578;
	int8_t x52 = -23;
	int32_t t8 = -6443410;

	t8 = ((x49|x50)==(x51*x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x54 = UINT8_MAX;
	int16_t x55 = INT16_MIN;

	t9 = ((x53|x54)==(x55*x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = INT64_MAX;
	static int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	volatile uint32_t x60 = 5722U;
	volatile int32_t t10 = 212716832;

	t10 = ((x57|x58)==(x59*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t11 = 91439;

	t11 = ((x61|x62)==(x63*x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = INT64_MAX;
	uint32_t x66 = UINT32_MAX;
	int32_t t12 = 5448455;

	t12 = ((x65|x66)==(x67*x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x73 = -95743322753LL;
	uint16_t x74 = 30U;
	uint32_t x75 = 3713660U;
	int8_t x76 = INT8_MAX;

	t13 = ((x73|x74)==(x75*x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x77 = 1008U;
	uint16_t x78 = 55U;
	int32_t x80 = -1;
	int32_t t14 = -1012;

	t14 = ((x77|x78)==(x79*x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x82 = 85U;
	volatile int64_t x83 = 24861765320LL;
	int32_t t15 = 0;

	t15 = ((x81|x82)==(x83*x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x86 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t16 = 106744077;

	t16 = ((x85|x86)==(x87*x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x90 = -1;
	int64_t x91 = -35LL;
	int32_t t17 = 35;

	t17 = ((x89|x90)==(x91*x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = -143;
	uint64_t x94 = 265867LLU;
	uint16_t x95 = UINT16_MAX;
	uint32_t x96 = 162378U;
	static int32_t t18 = -8;

	t18 = ((x93|x94)==(x95*x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = INT64_MIN;
	int16_t x98 = -1;
	uint16_t x99 = 722U;
	int32_t t19 = 1;

	t19 = ((x97|x98)==(x99*x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 16831425611LLU;
	volatile int64_t x107 = -1LL;
	uint8_t x108 = UINT8_MAX;
	int32_t t20 = 30;

	t20 = ((x105|x106)==(x107*x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MIN;
	int8_t x110 = 50;
	int32_t x111 = 7698291;
	uint16_t x112 = 60U;
	volatile int32_t t21 = 14138167;

	t21 = ((x109|x110)==(x111*x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = -56;
	uint16_t x122 = 2U;
	volatile uint32_t x123 = 2132674U;
	int32_t x124 = 12936;
	volatile int32_t t22 = 112335393;

	t22 = ((x121|x122)==(x123*x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x129 = INT64_MAX;
	uint64_t x130 = 5135667645047942LLU;
	int32_t x131 = 432;
	int64_t x132 = -1080549679099LL;

	t23 = ((x129|x130)==(x131*x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x133 = 29232609U;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = INT16_MIN;
	int32_t t24 = -90;

	t24 = ((x133|x134)==(x135*x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = 53;
	static uint32_t x139 = 106466663U;
	static int32_t x140 = 7729;
	int32_t t25 = -971995825;

	t25 = ((x137|x138)==(x139*x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MAX;
	int64_t x142 = INT64_MAX;
	int32_t x143 = 7439289;
	static volatile int32_t t26 = -16;

	t26 = ((x141|x142)==(x143*x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = -3;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = UINT64_MAX;

	t27 = ((x149|x150)==(x151*x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = -1;
	uint16_t x155 = 3U;
	volatile int16_t x156 = INT16_MIN;
	int32_t t28 = 1;

	t28 = ((x153|x154)==(x155*x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = -1;
	uint16_t x162 = 347U;
	static int8_t x163 = INT8_MAX;
	int32_t t29 = 249327734;

	t29 = ((x161|x162)==(x163*x164));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x165 = INT64_MAX;
	volatile int32_t x166 = INT32_MAX;
	int8_t x167 = -4;
	static uint8_t x168 = 1U;
	static volatile int32_t t30 = -65186;

	t30 = ((x165|x166)==(x167*x168));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x169 = 11U;
	static int16_t x171 = -1072;
	static volatile int32_t t31 = 134121138;

	t31 = ((x169|x170)==(x171*x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x173 = INT8_MIN;
	static uint8_t x175 = 16U;
	int32_t x176 = -1;
	volatile int32_t t32 = 7236;

	t32 = ((x173|x174)==(x175*x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = -13255;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t33 = 1;

	t33 = ((x177|x178)==(x179*x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x181 = 620U;
	static int32_t x182 = INT32_MIN;
	volatile int64_t x183 = -189749LL;
	int32_t x184 = 30474;
	int32_t t34 = -15;

	t34 = ((x181|x182)==(x183*x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x186 = UINT16_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t35 = -235018;

	t35 = ((x185|x186)==(x187*x188));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MIN;
	uint32_t x200 = 3U;
	int32_t t36 = 14;

	t36 = ((x197|x198)==(x199*x200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x201 = 3605965LL;
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MIN;

	t37 = ((x201|x202)==(x203*x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = INT64_MIN;
	uint64_t x207 = UINT64_MAX;
	uint8_t x208 = 7U;
	static int32_t t38 = 20285;

	t38 = ((x205|x206)==(x207*x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = -2104610604633LL;
	int32_t x210 = 503850;
	uint32_t x211 = UINT32_MAX;
	static int32_t t39 = 56199582;

	t39 = ((x209|x210)==(x211*x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x213 = -1;
	volatile uint8_t x214 = 1U;
	uint8_t x215 = 29U;
	uint64_t x216 = UINT64_MAX;
	int32_t t40 = -599241609;

	t40 = ((x213|x214)==(x215*x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x217 = 202769118267LLU;
	int16_t x218 = INT16_MIN;
	static int8_t x220 = -41;
	volatile int32_t t41 = -12;

	t41 = ((x217|x218)==(x219*x220));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x229 = INT32_MIN;
	uint64_t x230 = UINT64_MAX;
	int16_t x232 = -1;
	int32_t t42 = 4;

	t42 = ((x229|x230)==(x231*x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x234 = -1LL;
	static int16_t x235 = INT16_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t43 = 1734525;

	t43 = ((x233|x234)==(x235*x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x237 = UINT32_MAX;
	static uint8_t x238 = UINT8_MAX;
	static int64_t x239 = -1653992566040150LL;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t44 = -522379;

	t44 = ((x237|x238)==(x239*x240));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x241 = INT64_MAX;
	int64_t x242 = 153975005239LL;
	uint64_t x243 = 1864151087LLU;
	volatile int32_t t45 = -10;

	t45 = ((x241|x242)==(x243*x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x249 = 10U;
	volatile int64_t x251 = -80572254LL;
	static volatile int64_t x252 = 9102LL;

	t46 = ((x249|x250)==(x251*x252));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = INT16_MAX;
	int64_t x254 = 83483662LL;
	int8_t x255 = 2;
	static int32_t x256 = 102465;
	static int32_t t47 = -37879;

	t47 = ((x253|x254)==(x255*x256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x261 = UINT64_MAX;
	int8_t x262 = -13;
	static uint8_t x263 = UINT8_MAX;
	uint16_t x264 = 130U;

	t48 = ((x261|x262)==(x263*x264));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x273 = INT32_MIN;
	int32_t x275 = 9017;
	static int64_t x276 = -1LL;
	int32_t t49 = -3517985;

	t49 = ((x273|x274)==(x275*x276));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x277 = UINT32_MAX;
	static int16_t x278 = -1;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t50 = -23031;

	t50 = ((x277|x278)==(x279*x280));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x285 = UINT16_MAX;
	static uint32_t x286 = UINT32_MAX;
	volatile int16_t x287 = -1;
	int8_t x288 = INT8_MAX;

	t51 = ((x285|x286)==(x287*x288));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x297 = INT16_MIN;
	volatile uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t52 = 826803174;

	t52 = ((x297|x298)==(x299*x300));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = INT32_MIN;
	static int16_t x303 = INT16_MIN;
	uint8_t x304 = 3U;
	volatile int32_t t53 = -1;

	t53 = ((x301|x302)==(x303*x304));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x305 = 3U;
	uint8_t x306 = 0U;
	volatile int8_t x307 = 1;
	volatile int32_t t54 = -60442;

	t54 = ((x305|x306)==(x307*x308));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	int64_t x311 = 4106383118664LL;
	int64_t x312 = -1LL;
	volatile int32_t t55 = 2;

	t55 = ((x309|x310)==(x311*x312));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x315 = UINT64_MAX;
	int32_t t56 = -1208;

	t56 = ((x313|x314)==(x315*x316));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = 799;
	volatile int8_t x319 = 1;
	uint32_t x320 = UINT32_MAX;

	t57 = ((x317|x318)==(x319*x320));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x321 = -1;
	int32_t x322 = INT32_MIN;
	volatile int8_t x323 = -1;
	int32_t x324 = 27;
	int32_t t58 = -755504553;

	t58 = ((x321|x322)==(x323*x324));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x326 = -124492211;
	uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MAX;
	volatile int32_t t59 = 20855261;

	t59 = ((x325|x326)==(x327*x328));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x329 = -7;
	volatile int16_t x330 = -47;
	int32_t x331 = 7095;
	uint16_t x332 = 0U;

	t60 = ((x329|x330)==(x331*x332));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	static uint32_t x335 = 433168U;
	uint64_t x336 = 5931918902556204443LLU;

	t61 = ((x333|x334)==(x335*x336));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x337 = -46;
	volatile uint16_t x338 = 27286U;
	uint8_t x339 = 2U;
	int32_t x340 = -11740;
	volatile int32_t t62 = -1944617;

	t62 = ((x337|x338)==(x339*x340));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x341 = 3LLU;
	int8_t x343 = INT8_MAX;
	static volatile int8_t x344 = -1;

	t63 = ((x341|x342)==(x343*x344));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x349 = INT16_MIN;
	int16_t x351 = -1;
	static int64_t x352 = -1LL;

	t64 = ((x349|x350)==(x351*x352));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x357 = INT16_MAX;
	int8_t x358 = 1;
	int8_t x359 = INT8_MAX;
	static volatile int32_t t65 = 5297299;

	t65 = ((x357|x358)==(x359*x360));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x362 = INT8_MIN;
	uint32_t x363 = 6523550U;
	uint32_t x364 = 4992710U;
	static int32_t t66 = -25;

	t66 = ((x361|x362)==(x363*x364));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x365 = UINT32_MAX;
	uint8_t x368 = 0U;
	static int32_t t67 = 1;

	t67 = ((x365|x366)==(x367*x368));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x369 = INT8_MIN;
	volatile uint8_t x370 = UINT8_MAX;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -38982205684491LL;
	static int32_t t68 = 0;

	t68 = ((x369|x370)==(x371*x372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x381 = INT32_MAX;
	volatile uint16_t x382 = 219U;
	uint64_t x383 = 214914096102195LLU;
	uint8_t x384 = UINT8_MAX;
	int32_t t69 = 3586;

	t69 = ((x381|x382)==(x383*x384));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x385 = -1;
	static volatile uint16_t x386 = 990U;

	t70 = ((x385|x386)==(x387*x388));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x389 = 2316790918804LLU;
	volatile uint64_t x391 = 148575722894198454LLU;
	uint64_t x392 = 850441LLU;
	int32_t t71 = 66;

	t71 = ((x389|x390)==(x391*x392));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -1;
	volatile int32_t t72 = -2513615;

	t72 = ((x393|x394)==(x395*x396));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x397 = UINT8_MAX;
	int16_t x398 = INT16_MIN;
	uint16_t x399 = 45U;
	uint16_t x400 = 584U;
	int32_t t73 = 96332;

	t73 = ((x397|x398)==(x399*x400));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x405 = UINT32_MAX;
	uint32_t x406 = 143037U;
	int16_t x407 = INT16_MAX;
	volatile int32_t t74 = -1;

	t74 = ((x405|x406)==(x407*x408));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x409 = -1;
	uint8_t x410 = UINT8_MAX;
	static uint16_t x411 = 7538U;
	int16_t x412 = 1676;
	static int32_t t75 = 6819641;

	t75 = ((x409|x410)==(x411*x412));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x421 = 0U;
	int16_t x423 = INT16_MAX;
	uint8_t x424 = 119U;
	volatile int32_t t76 = -1825;

	t76 = ((x421|x422)==(x423*x424));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x425 = INT32_MIN;
	static uint64_t x426 = UINT64_MAX;
	int64_t x428 = -8802752LL;
	volatile int32_t t77 = -13661407;

	t77 = ((x425|x426)==(x427*x428));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x429 = INT16_MIN;
	uint32_t x430 = UINT32_MAX;
	int32_t t78 = -1051481;

	t78 = ((x429|x430)==(x431*x432));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MIN;
	int32_t t79 = -23096092;

	t79 = ((x433|x434)==(x435*x436));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x437 = 36U;
	uint16_t x438 = UINT16_MAX;
	uint32_t x440 = UINT32_MAX;
	int32_t t80 = -1;

	t80 = ((x437|x438)==(x439*x440));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = -16595686026906783LL;
	static int32_t x446 = -29180;
	uint32_t x447 = 1U;
	volatile uint64_t x448 = 4LLU;
	volatile int32_t t81 = -366331265;

	t81 = ((x445|x446)==(x447*x448));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x453 = 58U;
	int8_t x455 = 3;
	volatile uint64_t x456 = 575351LLU;

	t82 = ((x453|x454)==(x455*x456));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x457 = INT32_MIN;
	int64_t x459 = -1LL;
	uint16_t x460 = UINT16_MAX;
	int32_t t83 = 21;

	t83 = ((x457|x458)==(x459*x460));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x461 = 3192U;
	int8_t x462 = -1;
	static int16_t x464 = -1;
	static volatile int32_t t84 = -3;

	t84 = ((x461|x462)==(x463*x464));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x465 = INT16_MIN;
	volatile int16_t x466 = INT16_MAX;
	uint64_t x467 = 1695969460LLU;
	uint8_t x468 = UINT8_MAX;
	static volatile int32_t t85 = 53648375;

	t85 = ((x465|x466)==(x467*x468));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x469 = 2;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 0U;
	int16_t x472 = 880;
	int32_t t86 = 3;

	t86 = ((x469|x470)==(x471*x472));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x473 = 13993U;
	int16_t x474 = INT16_MAX;
	int16_t x475 = INT16_MIN;
	volatile int32_t t87 = -15;

	t87 = ((x473|x474)==(x475*x476));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x477 = UINT8_MAX;
	int32_t x478 = INT32_MIN;
	uint16_t x479 = 0U;
	uint8_t x480 = UINT8_MAX;
	int32_t t88 = -1029611975;

	t88 = ((x477|x478)==(x479*x480));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x491 = INT16_MIN;
	int16_t x492 = INT16_MIN;
	static int32_t t89 = -1;

	t89 = ((x489|x490)==(x491*x492));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x497 = UINT32_MAX;
	int32_t x499 = -1;
	uint64_t x500 = 16759915963LLU;
	volatile int32_t t90 = -37;

	t90 = ((x497|x498)==(x499*x500));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x501 = INT8_MAX;
	static uint32_t x503 = 0U;
	int64_t x504 = INT64_MAX;

	t91 = ((x501|x502)==(x503*x504));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x505 = 127471U;
	int16_t x506 = INT16_MIN;
	uint16_t x507 = UINT16_MAX;
	int16_t x508 = INT16_MIN;
	int32_t t92 = -67054;

	t92 = ((x505|x506)==(x507*x508));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x509 = 126;
	uint32_t x510 = 87U;
	volatile int8_t x512 = INT8_MIN;
	int32_t t93 = -7;

	t93 = ((x509|x510)==(x511*x512));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x516 = 1;

	t94 = ((x513|x514)==(x515*x516));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x521 = -15;
	int16_t x522 = -1;
	int32_t t95 = -1255;

	t95 = ((x521|x522)==(x523*x524));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x525 = -1;
	int64_t x526 = -1LL;
	volatile int16_t x528 = INT16_MIN;
	volatile int32_t t96 = 16;

	t96 = ((x525|x526)==(x527*x528));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x529 = 5460;
	static uint16_t x530 = 2053U;
	static int64_t x531 = INT64_MIN;
	volatile int8_t x532 = 1;
	volatile int32_t t97 = 4093514;

	t97 = ((x529|x530)==(x531*x532));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x539 = UINT64_MAX;
	volatile int32_t x540 = -629;
	int32_t t98 = -2930;

	t98 = ((x537|x538)==(x539*x540));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x541 = 6488U;
	volatile int16_t x542 = INT16_MIN;
	int8_t x543 = -1;
	int16_t x544 = -1;
	volatile int32_t t99 = 1;

	t99 = ((x541|x542)==(x543*x544));

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

