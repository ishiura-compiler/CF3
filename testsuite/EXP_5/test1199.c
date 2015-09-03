#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile uint64_t x4 = UINT64_MAX;
uint64_t x5 = 16007069LLU;
volatile int8_t x17 = 2;
int32_t x32 = INT32_MAX;
int8_t x41 = 15;
uint8_t x42 = 2U;
static volatile int32_t t7 = 30;
uint32_t x53 = 35U;
uint64_t x55 = 7625458887235827479LLU;
static int8_t x56 = 54;
static int32_t x64 = INT32_MAX;
volatile int64_t x69 = -38941129LL;
volatile int16_t x71 = INT16_MIN;
volatile int64_t x86 = -33962936966648214LL;
static int8_t x96 = INT8_MIN;
int64_t x118 = -54740416LL;
static int64_t x121 = INT64_MIN;
volatile int32_t t20 = -1;
uint32_t x137 = 69941248U;
static int32_t x138 = -1;
uint8_t x140 = UINT8_MAX;
uint32_t t23 = 483U;
volatile uint32_t t24 = 1U;
int16_t x154 = INT16_MIN;
int64_t x162 = INT64_MAX;
int8_t x164 = INT8_MIN;
int32_t t29 = -501690516;
uint64_t x174 = 526928454568851LLU;
uint16_t x176 = 2U;
static int32_t t32 = 512148856;
static uint32_t t34 = 50812759U;
int32_t x191 = -6;
int16_t x204 = INT16_MIN;
static uint64_t x210 = UINT64_MAX;
uint32_t x237 = UINT32_MAX;
int32_t x239 = INT32_MAX;
volatile uint32_t t44 = 1047534178U;
static volatile int32_t t45 = -8;
int8_t x258 = 29;
int64_t x263 = INT64_MIN;
uint32_t t48 = 278085U;
int32_t x266 = 1232;
volatile int16_t x271 = 45;
static int32_t t50 = INT32_MAX;
int32_t t51 = -214932;
int16_t x277 = INT16_MIN;
static volatile int32_t t52 = -8031;
static int16_t x283 = INT16_MIN;
volatile int8_t x287 = -1;
static int16_t x289 = INT16_MAX;
int32_t x291 = -1;
int32_t t55 = 1021126;
int8_t x298 = -30;
static int32_t x300 = -1;
int8_t x313 = INT8_MAX;
int32_t t58 = 7124546;
static uint64_t t60 = 8540808229LLU;
static volatile int64_t x325 = INT64_MIN;
int32_t x327 = INT32_MAX;
uint64_t x328 = UINT64_MAX;
int32_t t64 = 3;
static int32_t t66 = -2089288;
static int64_t x349 = INT64_MAX;
int64_t t67 = INT64_MAX;
uint8_t x357 = UINT8_MAX;
static uint32_t x362 = 2U;
static uint16_t x369 = 55U;
volatile int64_t t71 = 0LL;
int8_t x375 = INT8_MIN;
int16_t x377 = 1269;
volatile int64_t x378 = INT64_MAX;
int16_t x405 = INT16_MIN;
int8_t x409 = -1;
static int32_t x411 = INT32_MAX;
int64_t x418 = -31LL;
volatile int32_t t78 = -115832823;
uint64_t t79 = 47917816LLU;
int8_t x441 = INT8_MIN;
int8_t x444 = -1;
static uint64_t x453 = UINT64_MAX;
volatile uint64_t t85 = 2035561180883LLU;
uint64_t x473 = UINT64_MAX;
uint8_t x474 = 99U;
static int16_t x476 = -1;
uint8_t x482 = 5U;
int32_t x486 = INT32_MAX;
uint8_t x488 = 7U;
volatile int8_t x492 = 1;
uint64_t x505 = 801LLU;
int32_t x507 = INT32_MIN;
uint8_t x510 = 1U;
volatile uint64_t x517 = UINT64_MAX;
volatile uint64_t t96 = UINT64_MAX;
uint32_t x521 = 673U;
uint32_t t98 = 0U;


void f0(void) {
	uint8_t x2 = 1U;
	static uint16_t x3 = 487U;
	volatile uint64_t t0 = 1LLU;

	t0 = (x1*((x2==x3)-x4));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MAX;
	int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	volatile uint64_t t1 = 1035551684043LLU;

	t1 = (x5*((x6==x7)-x8));

	if (t1 != 524519636992LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1;
	volatile uint8_t x14 = 25U;
	uint8_t x15 = 3U;
	volatile int32_t x16 = INT32_MAX;
	static volatile int32_t t2 = INT32_MAX;

	t2 = (x13*((x14==x15)-x16));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x18 = -1;
	static uint16_t x19 = 1U;
	static volatile uint64_t x20 = 14318141127908LLU;
	volatile uint64_t t3 = 1LLU;

	t3 = (x17*((x18==x19)-x20));

	if (t3 != 18446715437427295800LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x29 = 34590LLU;
	int8_t x30 = INT8_MAX;
	int64_t x31 = -1LL;
	volatile uint64_t t4 = 24695067LLU;

	t4 = (x29*((x30==x31)-x32));

	if (t4 != 18446669792250201886LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x33 = 736008LLU;
	volatile uint16_t x34 = UINT16_MAX;
	static int8_t x35 = INT8_MAX;
	int16_t x36 = INT16_MAX;
	static uint64_t t5 = 329463LLU;

	t5 = (x33*((x34==x35)-x36));

	if (t5 != 18446744049592777480LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = -15300;
	volatile int32_t x38 = INT32_MIN;
	static uint32_t x39 = UINT32_MAX;
	uint32_t x40 = 347815936U;
	volatile uint32_t t6 = 1140997U;

	t6 = (x37*((x38==x39)-x40));

	if (t6 != 119341056U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x43 = 1242595508LLU;
	uint16_t x44 = 25U;

	t7 = (x41*((x42==x43)-x44));

	if (t7 != -375) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	int8_t x46 = -1;
	uint8_t x47 = 0U;
	static int64_t x48 = INT64_MAX;
	volatile int64_t t8 = INT64_MAX;

	t8 = (x45*((x46==x47)-x48));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x54 = -1673988178340LL;
	volatile uint32_t t9 = 83U;

	t9 = (x53*((x54==x55)-x56));

	if (t9 != 4294965406U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x61 = 96014LL;
	int32_t x62 = -6655426;
	volatile int32_t x63 = -1;
	volatile int64_t t10 = -343494505LL;

	t10 = (x61*((x62==x63)-x64));

	if (t10 != -206188494883058LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x70 = INT8_MAX;
	static int64_t x72 = -1LL;
	int64_t t11 = -17351563LL;

	t11 = (x69*((x70==x71)-x72));

	if (t11 != -38941129LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x81 = -1;
	uint32_t x82 = 868U;
	int16_t x83 = INT16_MAX;
	static int16_t x84 = INT16_MIN;
	int32_t t12 = 62518;

	t12 = (x81*((x82==x83)-x84));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x87 = 2003;
	uint64_t x88 = UINT64_MAX;
	static uint64_t t13 = 9669355945LLU;

	t13 = (x85*((x86==x87)-x88));

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = INT8_MAX;
	static int16_t x94 = INT16_MIN;
	uint16_t x95 = UINT16_MAX;
	static volatile int32_t t14 = -238;

	t14 = (x93*((x94==x95)-x96));

	if (t14 != 16256) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x97 = 66955263U;
	uint16_t x98 = UINT16_MAX;
	uint16_t x99 = 1004U;
	volatile int16_t x100 = -1;
	volatile uint32_t t15 = 1278U;

	t15 = (x97*((x98==x99)-x100));

	if (t15 != 66955263U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x101 = 19U;
	int16_t x102 = 47;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MAX;
	static volatile int32_t t16 = -59354331;

	t16 = (x101*((x102==x103)-x104));

	if (t16 != -622573) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = UINT32_MAX;
	static int16_t x107 = -55;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t17 = 521077987288897031LLU;

	t17 = (x105*((x106==x107)-x108));

	if (t17 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x117 = 17285964901215LL;
	volatile uint8_t x119 = 2U;
	volatile uint64_t x120 = UINT64_MAX;
	uint64_t t18 = 12120495LLU;

	t18 = (x117*((x118==x119)-x120));

	if (t18 != 17285964901215LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x122 = -1;
	int16_t x123 = INT16_MIN;
	uint32_t x124 = UINT32_MAX;
	static int64_t t19 = INT64_MIN;

	t19 = (x121*((x122==x123)-x124));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x125 = 0;
	int16_t x126 = 423;
	static int32_t x127 = INT32_MAX;
	uint16_t x128 = 5106U;

	t20 = (x125*((x126==x127)-x128));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x129 = 29U;
	static volatile int8_t x130 = -1;
	volatile uint16_t x131 = 21U;
	static int64_t x132 = -1LL;
	int64_t t21 = -29744LL;

	t21 = (x129*((x130==x131)-x132));

	if (t21 != 29LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x133 = UINT32_MAX;
	static uint64_t x134 = 618430641LLU;
	int8_t x135 = INT8_MIN;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t22 = 26145429074434454LLU;

	t22 = (x133*((x134==x135)-x136));

	if (t22 != 4294967295LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x139 = UINT32_MAX;

	t23 = (x137*((x138==x139)-x140));

	if (t23 != 3709759488U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x141 = 0U;
	uint64_t x142 = 111970305427202612LLU;
	uint64_t x143 = 0LLU;
	static volatile uint32_t x144 = 271934110U;

	t24 = (x141*((x142==x143)-x144));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = 62;
	volatile int16_t x146 = INT16_MIN;
	static uint16_t x147 = 413U;
	uint64_t x148 = 27LLU;
	static volatile uint64_t t25 = 48601248998448737LLU;

	t25 = (x145*((x146==x147)-x148));

	if (t25 != 18446744073709549942LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = -1;
	uint64_t x150 = 6767867474285866LLU;
	int16_t x151 = INT16_MAX;
	static int8_t x152 = INT8_MIN;
	static int32_t t26 = 21336274;

	t26 = (x149*((x150==x151)-x152));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x153 = INT32_MIN;
	static uint8_t x155 = UINT8_MAX;
	volatile uint64_t x156 = 114724416829818LLU;
	volatile uint64_t t27 = 100LLU;

	t27 = (x153*((x154==x155)-x156));

	if (t27 != 12542063979091984384LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x157 = INT8_MAX;
	int32_t x158 = INT32_MIN;
	volatile int8_t x159 = INT8_MIN;
	uint16_t x160 = 1886U;
	volatile int32_t t28 = 172;

	t28 = (x157*((x158==x159)-x160));

	if (t28 != -239522) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x161 = 7U;
	int8_t x163 = -1;

	t29 = (x161*((x162==x163)-x164));

	if (t29 != 896) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x166 = INT8_MIN;
	volatile uint16_t x167 = UINT16_MAX;
	int64_t x168 = -1LL;
	volatile int64_t t30 = 4413258637112LL;

	t30 = (x165*((x166==x167)-x168));

	if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = -275LL;
	static uint8_t x170 = 5U;
	int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MIN;
	volatile int64_t t31 = -2857LL;

	t31 = (x169*((x170==x171)-x172));

	if (t31 != -9011200LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = -1;
	int64_t x175 = INT64_MIN;

	t32 = (x173*((x174==x175)-x176));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x177 = 9U;
	static volatile uint32_t x178 = UINT32_MAX;
	static int8_t x179 = -1;
	int8_t x180 = -13;
	int32_t t33 = -1385193;

	t33 = (x177*((x178==x179)-x180));

	if (t33 != 126) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = 34U;
	uint64_t x186 = UINT64_MAX;
	uint64_t x187 = 90696895479647286LLU;
	static int16_t x188 = -338;

	t34 = (x185*((x186==x187)-x188));

	if (t34 != 11492U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x189 = INT16_MAX;
	int64_t x190 = -4013114544859816LL;
	uint8_t x192 = 64U;
	int32_t t35 = 118573419;

	t35 = (x189*((x190==x191)-x192));

	if (t35 != -2097088) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x197 = 559737798849702LLU;
	int8_t x198 = -3;
	int32_t x199 = 159152850;
	uint64_t x200 = 510233LLU;
	volatile uint64_t t36 = 78705LLU;

	t36 = (x197*((x198==x199)-x200));

	if (t36 != 9551208858872825290LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x201 = 12840U;
	static int8_t x202 = -1;
	int16_t x203 = INT16_MAX;
	volatile int32_t t37 = 77;

	t37 = (x201*((x202==x203)-x204));

	if (t37 != 420741120) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x205 = 13351425U;
	int32_t x206 = INT32_MAX;
	int16_t x207 = -4;
	static int16_t x208 = INT16_MIN;
	uint32_t t38 = 1921U;

	t38 = (x205*((x206==x207)-x208));

	if (t38 != 3707797504U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = 17265075876LL;
	int64_t x211 = INT64_MAX;
	int16_t x212 = -8;
	static int64_t t39 = -1065LL;

	t39 = (x209*((x210==x211)-x212));

	if (t39 != 138120607008LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = -78849LL;
	int64_t x214 = INT64_MAX;
	int16_t x215 = INT16_MIN;
	static int64_t x216 = 3583453080890LL;
	volatile int64_t t40 = 0LL;

	t40 = (x213*((x214==x215)-x216));

	if (t40 != 282551691975095610LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = -1LL;
	int64_t x218 = INT64_MAX;
	uint16_t x219 = 26986U;
	int32_t x220 = INT32_MAX;
	int64_t t41 = -5915580967436LL;

	t41 = (x217*((x218==x219)-x220));

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = -1;
	static volatile int16_t x222 = -1;
	static int8_t x223 = INT8_MAX;
	volatile uint8_t x224 = UINT8_MAX;
	volatile int32_t t42 = -35934308;

	t42 = (x221*((x222==x223)-x224));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = INT16_MAX;
	int64_t x234 = 3314134741134502LL;
	volatile uint8_t x235 = 0U;
	int8_t x236 = -31;
	volatile int32_t t43 = -392997;

	t43 = (x233*((x234==x235)-x236));

	if (t43 != 1015777) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x238 = UINT16_MAX;
	static int16_t x240 = 95;

	t44 = (x237*((x238==x239)-x240));

	if (t44 != 95U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MIN;
	int16_t x247 = 7;
	uint16_t x248 = 3789U;

	t45 = (x245*((x246==x247)-x248));

	if (t45 != 124157952) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x253 = 9806U;
	volatile int8_t x254 = -1;
	static int16_t x255 = INT16_MIN;
	volatile int16_t x256 = INT16_MAX;
	int32_t t46 = 24495590;

	t46 = (x253*((x254==x255)-x256));

	if (t46 != -321313202) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = INT16_MIN;
	static int16_t x259 = -1;
	int32_t x260 = -1;
	volatile int32_t t47 = 250549460;

	t47 = (x257*((x258==x259)-x260));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x261 = 18U;
	volatile int16_t x262 = 174;
	static int16_t x264 = -4209;

	t48 = (x261*((x262==x263)-x264));

	if (t48 != 75762U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x265 = -16;
	int32_t x267 = -922240858;
	int8_t x268 = -17;
	static volatile int32_t t49 = -10584;

	t49 = (x265*((x266==x267)-x268));

	if (t49 != -272) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x269 = INT32_MAX;
	static int64_t x270 = -108168764632293877LL;
	int8_t x272 = -1;

	t50 = (x269*((x270==x271)-x272));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x273 = -6;
	int64_t x274 = -1LL;
	uint8_t x275 = UINT8_MAX;
	int32_t x276 = -189612;

	t51 = (x273*((x274==x275)-x276));

	if (t51 != -1137672) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x278 = INT64_MAX;
	int32_t x279 = -1;
	int16_t x280 = INT16_MAX;

	t52 = (x277*((x278==x279)-x280));

	if (t52 != 1073709056) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x281 = UINT8_MAX;
	int16_t x282 = INT16_MAX;
	volatile uint8_t x284 = 8U;
	int32_t t53 = 718;

	t53 = (x281*((x282==x283)-x284));

	if (t53 != -2040) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x285 = INT8_MIN;
	uint64_t x286 = 122463125LLU;
	int32_t x288 = -1;
	int32_t t54 = -2287;

	t54 = (x285*((x286==x287)-x288));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x290 = UINT64_MAX;
	int8_t x292 = 59;

	t55 = (x289*((x290==x291)-x292));

	if (t55 != -1900486) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = -198;
	int16_t x299 = 1544;
	int32_t t56 = -28947940;

	t56 = (x297*((x298==x299)-x300));

	if (t56 != -198) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x310 = 16783316043044LLU;
	uint64_t x311 = UINT64_MAX;
	static uint8_t x312 = 110U;
	int32_t t57 = -889938774;

	t57 = (x309*((x310==x311)-x312));

	if (t57 != 14080) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;

	t58 = (x313*((x314==x315)-x316));

	if (t58 != 16256) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x317 = -14;
	uint64_t x318 = 0LLU;
	int64_t x319 = -199900409925576809LL;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t59 = -2919;

	t59 = (x317*((x318==x319)-x320));

	if (t59 != -458752) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = -15;
	int64_t x323 = -198671977635181933LL;
	uint16_t x324 = UINT16_MAX;

	t60 = (x321*((x322==x323)-x324));

	if (t60 != 65535LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x326 = 866551165U;
	volatile uint64_t t61 = 635122117564934505LLU;

	t61 = (x325*((x326==x327)-x328));

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x329 = INT16_MIN;
	volatile int16_t x330 = -1;
	int16_t x331 = -1;
	volatile int16_t x332 = INT16_MAX;
	volatile int32_t t62 = -723706;

	t62 = (x329*((x330==x331)-x332));

	if (t62 != 1073676288) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x333 = 13U;
	static int64_t x334 = 0LL;
	static int16_t x335 = 0;
	volatile int32_t x336 = 3971;
	static int32_t t63 = 1;

	t63 = (x333*((x334==x335)-x336));

	if (t63 != -51610) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x337 = 5;
	static uint16_t x338 = UINT16_MAX;
	uint32_t x339 = 61U;
	int8_t x340 = -12;

	t64 = (x337*((x338==x339)-x340));

	if (t64 != 60) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x341 = 3893LL;
	static int8_t x342 = -1;
	static volatile uint16_t x343 = 5965U;
	volatile int64_t x344 = -1LL;
	int64_t t65 = 9632943117018LL;

	t65 = (x341*((x342==x343)-x344));

	if (t65 != 3893LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x345 = -3;
	static int64_t x346 = -3422900204683504018LL;
	volatile int32_t x347 = 1;
	int16_t x348 = 1;

	t66 = (x345*((x346==x347)-x348));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x350 = -1;
	int64_t x351 = INT64_MIN;
	volatile int16_t x352 = -1;

	t67 = (x349*((x350==x351)-x352));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x358 = INT64_MIN;
	static int8_t x359 = -1;
	uint16_t x360 = 5U;
	volatile int32_t t68 = 509976486;

	t68 = (x357*((x358==x359)-x360));

	if (t68 != -1275) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x361 = INT8_MIN;
	static uint32_t x363 = 687899557U;
	int8_t x364 = INT8_MIN;
	volatile int32_t t69 = -793207787;

	t69 = (x361*((x362==x363)-x364));

	if (t69 != -16384) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MAX;
	uint8_t x367 = UINT8_MAX;
	uint64_t x368 = 248317LLU;
	volatile uint64_t t70 = 4856547212LLU;

	t70 = (x365*((x366==x367)-x368));

	if (t70 != 31784576LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x370 = INT64_MAX;
	static int64_t x371 = INT64_MAX;
	int64_t x372 = 231616085LL;

	t71 = (x369*((x370==x371)-x372));

	if (t71 != -12738884620LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x373 = INT16_MIN;
	static int64_t x374 = -1LL;
	static volatile uint32_t x376 = 44041U;
	volatile uint32_t t72 = 147507127U;

	t72 = (x373*((x374==x375)-x376));

	if (t72 != 1443135488U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x379 = -1LL;
	static uint64_t x380 = 58415LLU;
	volatile uint64_t t73 = 479823712978220351LLU;

	t73 = (x377*((x378==x379)-x380));

	if (t73 != 18446744073635422981LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x406 = INT32_MAX;
	uint16_t x407 = UINT16_MAX;
	static int8_t x408 = INT8_MIN;
	int32_t t74 = 2332;

	t74 = (x405*((x406==x407)-x408));

	if (t74 != -4194304) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x410 = 14;
	uint64_t x412 = 591952972188187LLU;
	uint64_t t75 = 258491371380992LLU;

	t75 = (x409*((x410==x411)-x412));

	if (t75 != 591952972188187LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x413 = 6U;
	int32_t x414 = -1;
	volatile int32_t x415 = -1;
	static uint64_t x416 = 1067LLU;
	uint64_t t76 = 2700920695LLU;

	t76 = (x413*((x414==x415)-x416));

	if (t76 != 18446744073709545220LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x417 = 2471646;
	static int16_t x419 = INT16_MIN;
	int64_t x420 = 216763468772LL;
	static int64_t t77 = 1225119862293370423LL;

	t77 = (x417*((x418==x419)-x420));

	if (t77 != -535762560536438712LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x425 = 233U;
	volatile int16_t x426 = -24;
	static uint8_t x427 = UINT8_MAX;
	static int16_t x428 = INT16_MIN;

	t78 = (x425*((x426==x427)-x428));

	if (t78 != 7634944) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x437 = 43U;
	uint8_t x438 = 0U;
	volatile int64_t x439 = 7963342LL;
	static uint64_t x440 = 53468879149LLU;

	t79 = (x437*((x438==x439)-x440));

	if (t79 != 18446741774547748209LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x442 = 0U;
	int8_t x443 = INT8_MAX;
	volatile int32_t t80 = -1066680;

	t80 = (x441*((x442==x443)-x444));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x445 = -1;
	uint64_t x446 = 78206832648LLU;
	int64_t x447 = INT64_MIN;
	uint64_t x448 = 191888973950108LLU;
	uint64_t t81 = 18487804809LLU;

	t81 = (x445*((x446==x447)-x448));

	if (t81 != 191888973950108LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x449 = 75639885U;
	static uint64_t x450 = UINT64_MAX;
	volatile int16_t x451 = 5;
	int16_t x452 = 489;
	volatile uint32_t t82 = 5U;

	t82 = (x449*((x450==x451)-x452));

	if (t82 != 1666801899U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x454 = -1;
	volatile uint16_t x455 = 2U;
	uint32_t x456 = UINT32_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = (x453*((x454==x455)-x456));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x457 = -1;
	int8_t x458 = 1;
	uint16_t x459 = UINT16_MAX;
	uint16_t x460 = 0U;
	volatile int32_t t84 = -33600331;

	t84 = (x457*((x458==x459)-x460));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x461 = 3712LLU;
	int32_t x462 = INT32_MIN;
	int8_t x463 = -6;
	volatile int16_t x464 = INT16_MIN;

	t85 = (x461*((x462==x463)-x464));

	if (t85 != 121634816LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x465 = UINT32_MAX;
	uint16_t x466 = 18404U;
	uint16_t x467 = UINT16_MAX;
	uint16_t x468 = 60U;
	volatile uint32_t t86 = 22672U;

	t86 = (x465*((x466==x467)-x468));

	if (t86 != 60U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x469 = INT8_MAX;
	static int32_t x470 = INT32_MAX;
	int64_t x471 = INT64_MAX;
	volatile uint32_t x472 = 281000U;
	uint32_t t87 = 23005U;

	t87 = (x469*((x470==x471)-x472));

	if (t87 != 4259280296U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x475 = 15090;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x473*((x474==x475)-x476));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x481 = 60457302LLU;
	int32_t x483 = -1;
	int32_t x484 = -62;
	uint64_t t89 = 2844710243LLU;

	t89 = (x481*((x482==x483)-x484));

	if (t89 != 3748352724LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x485 = 411542041LL;
	uint8_t x487 = 121U;
	int64_t t90 = -4312457372560927LL;

	t90 = (x485*((x486==x487)-x488));

	if (t90 != -2880794287LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x489 = 35;
	int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MAX;
	volatile int32_t t91 = -1289;

	t91 = (x489*((x490==x491)-x492));

	if (t91 != -35) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x493 = 3U;
	uint8_t x494 = 5U;
	uint8_t x495 = UINT8_MAX;
	static uint16_t x496 = UINT16_MAX;
	int32_t t92 = 0;

	t92 = (x493*((x494==x495)-x496));

	if (t92 != -196605) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x506 = 1996011078665507LLU;
	int8_t x508 = 44;
	uint64_t t93 = 1818LLU;

	t93 = (x505*((x506==x507)-x508));

	if (t93 != 18446744073709516372LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x509 = INT16_MIN;
	int32_t x511 = INT32_MIN;
	static uint64_t x512 = 24402623LLU;
	uint64_t t94 = 11413943LLU;

	t94 = (x509*((x510==x511)-x512));

	if (t94 != 799625150464LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x513 = 1277U;
	static int32_t x514 = INT32_MIN;
	uint16_t x515 = 0U;
	uint16_t x516 = 12U;
	uint32_t t95 = 13U;

	t95 = (x513*((x514==x515)-x516));

	if (t95 != 4294951972U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x518 = -123399418;
	uint8_t x519 = UINT8_MAX;
	static uint64_t x520 = UINT64_MAX;

	t96 = (x517*((x518==x519)-x520));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x522 = 101189349U;
	int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MIN;
	uint32_t t97 = 1U;

	t97 = (x521*((x522==x523)-x524));

	if (t97 != 86144U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x525 = 18U;
	int64_t x526 = -17606293313832481LL;
	int32_t x527 = 3698339;
	uint16_t x528 = 1429U;

	t98 = (x525*((x526==x527)-x528));

	if (t98 != 4294941574U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x529 = 4885U;
	static int16_t x530 = 1;
	static int32_t x531 = INT32_MAX;
	static int16_t x532 = INT16_MIN;
	static uint32_t t99 = 748160681U;

	t99 = (x529*((x530==x531)-x532));

	if (t99 != 160071680U) { NG(); } else { ; }
	
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

