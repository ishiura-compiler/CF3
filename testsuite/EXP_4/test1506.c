#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -11474;
volatile int16_t x10 = -1;
int8_t x17 = 42;
static volatile int8_t x18 = INT8_MAX;
int16_t x19 = -1;
static uint64_t x20 = UINT64_MAX;
volatile int64_t x25 = INT64_MIN;
int32_t x30 = -1;
volatile uint64_t x34 = 1029025038546LLU;
uint8_t x36 = 78U;
int32_t x38 = INT32_MIN;
volatile uint64_t t9 = 41LLU;
int16_t x46 = 899;
static int64_t t11 = -1826046367LL;
int16_t x50 = INT16_MIN;
int64_t x51 = -61LL;
static int64_t x54 = -3872LL;
uint32_t x55 = UINT32_MAX;
int16_t x60 = INT16_MIN;
static int8_t x63 = INT8_MIN;
volatile int32_t t17 = 46;
volatile int8_t x76 = INT8_MAX;
int64_t t18 = 8667873006LL;
uint64_t x79 = UINT64_MAX;
int16_t x83 = INT16_MIN;
uint16_t x84 = 27U;
int64_t x85 = INT64_MIN;
volatile int16_t x86 = INT16_MAX;
static uint32_t x88 = 17877829U;
int32_t x92 = 230;
int64_t x99 = INT64_MAX;
static int64_t x102 = INT64_MAX;
int64_t x105 = -1LL;
int8_t x109 = INT8_MAX;
uint16_t x110 = 4U;
int64_t t28 = INT64_MAX;
int64_t x124 = INT64_MIN;
uint64_t x130 = 363092888802LLU;
int16_t x134 = INT16_MIN;
static uint8_t x136 = UINT8_MAX;
int32_t t33 = -13759574;
int32_t x137 = INT32_MAX;
int8_t x138 = -1;
static volatile int32_t t35 = -1457515;
volatile int16_t x162 = INT16_MIN;
int32_t x164 = -1678935;
int64_t x168 = INT64_MAX;
uint16_t x171 = 2243U;
volatile uint32_t t42 = 36603625U;
volatile int8_t x174 = INT8_MAX;
int32_t t43 = 147370;
static volatile uint32_t t44 = 5U;
uint64_t x182 = 41331LLU;
int8_t x186 = INT8_MAX;
volatile int8_t x188 = -1;
static volatile int64_t t47 = -2069663156594945927LL;
int8_t x195 = -44;
static int64_t x196 = INT64_MIN;
uint8_t x197 = 2U;
int64_t x200 = INT64_MAX;
int32_t x203 = INT32_MIN;
static uint8_t x206 = UINT8_MAX;
int64_t x208 = -1LL;
static int8_t x211 = INT8_MIN;
static int32_t x217 = INT32_MAX;
uint32_t x219 = 17083U;
volatile uint8_t x224 = UINT8_MAX;
volatile uint8_t x226 = 7U;
int32_t t56 = -922223543;
static int32_t x229 = INT32_MIN;
uint8_t x234 = 8U;
int32_t x235 = -207177858;
volatile uint16_t x242 = UINT16_MAX;
volatile int32_t x245 = 1616;
static uint8_t x250 = 35U;
int32_t x254 = -1;
int32_t t64 = 88;
int64_t t66 = -101913600028LL;
int16_t x270 = INT16_MIN;
int16_t x275 = -196;
int16_t x278 = -1;
static int64_t x280 = INT64_MIN;
uint64_t x284 = 3746625459496097LLU;
int64_t x292 = -23318LL;
volatile int32_t x294 = -108;
uint64_t x295 = 1204684199LLU;
static int8_t x296 = INT8_MAX;
int64_t x298 = 100636772254LL;
int32_t x300 = -1;
uint64_t x303 = 748633572380518LLU;
int32_t x308 = INT32_MIN;
volatile int8_t x310 = 1;
int8_t x316 = -1;
int16_t x322 = 6;
uint64_t x325 = 343780641002934LLU;
static int8_t x327 = INT8_MAX;
uint8_t x328 = 6U;
int32_t x346 = INT32_MIN;
int8_t x352 = INT8_MAX;
int8_t x359 = 1;
int32_t t89 = 0;
volatile int64_t t91 = -162938LL;
static volatile int64_t x381 = INT64_MIN;
volatile int64_t x382 = -1644039729954041LL;
static int32_t x386 = -10899751;
static int64_t x390 = INT64_MIN;
static int64_t x392 = INT64_MIN;
static volatile int64_t t97 = -336LL;
int8_t x393 = INT8_MIN;
int32_t x394 = -216343;
static volatile int16_t x395 = -365;


void f0(void) {
	static uint8_t x2 = UINT8_MAX;
	static int32_t x3 = -78;
	int64_t x4 = 1232840LL;
	volatile int32_t t0 = -18366;

	t0 = (x1&(x2|(x3<x4)));

	if (t0 != 46) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 370490795015570LLU;
	int8_t x6 = -1;
	int32_t x7 = 308647;
	volatile uint8_t x8 = 10U;
	uint64_t t1 = 118913358254731360LLU;

	t1 = (x5&(x6|(x7<x8)));

	if (t1 != 370490795015570LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int8_t x11 = -1;
	static uint16_t x12 = 13U;
	int32_t t2 = -765703142;

	t2 = (x9&(x10|(x11<x12)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 1U;
	uint8_t x14 = 40U;
	uint32_t x15 = 2U;
	int16_t x16 = 74;
	static volatile uint32_t t3 = 1221742452U;

	t3 = (x13&(x14|(x15<x16)));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t t4 = -1;

	t4 = (x17&(x18|(x19<x20)));

	if (t4 != 42) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x22 = -3;
	int16_t x23 = INT16_MAX;
	int32_t x24 = -1;
	volatile int32_t t5 = 453142;

	t5 = (x21&(x22|(x23<x24)));

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = 29747260597LL;
	uint64_t x27 = 101LLU;
	static volatile uint16_t x28 = 84U;
	static int64_t t6 = 123LL;

	t6 = (x25&(x26|(x27<x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 1454581364290405LLU;
	int16_t x31 = 3;
	int32_t x32 = -1;
	uint64_t t7 = 356277LLU;

	t7 = (x29&(x30|(x31<x32)));

	if (t7 != 1454581364290405LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	static int32_t x35 = -1;
	uint64_t t8 = 276143490490369980LLU;

	t8 = (x33&(x34|(x35<x36)));

	if (t8 != 1029025038547LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	uint8_t x39 = UINT8_MAX;
	int8_t x40 = 1;

	t9 = (x37&(x38|(x39<x40)));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 22U;
	int8_t x42 = INT8_MIN;
	uint32_t x43 = 95U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -29736;

	t10 = (x41&(x42|(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	int8_t x48 = -7;

	t11 = (x45&(x46|(x47<x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 863936LL;
	int8_t x52 = INT8_MIN;
	volatile int64_t t12 = 1LL;

	t12 = (x49&(x50|(x51<x52)));

	if (t12 != 851968LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 8010U;
	int8_t x56 = -1;
	volatile int64_t t13 = -252804LL;

	t13 = (x53&(x54|(x55<x56)));

	if (t13 != 4160LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -1;
	static uint16_t x58 = UINT16_MAX;
	int16_t x59 = 14282;
	volatile int32_t t14 = 13986044;

	t14 = (x57&(x58|(x59<x60)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MIN;
	uint16_t x64 = 7594U;
	static uint32_t t15 = 80976976U;

	t15 = (x61&(x62|(x63<x64)));

	if (t15 != 4294967169U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	volatile int8_t x66 = INT8_MAX;
	uint16_t x67 = 264U;
	static uint8_t x68 = UINT8_MAX;
	int64_t t16 = 3068LL;

	t16 = (x65&(x66|(x67<x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 0;
	int16_t x70 = -1;
	volatile int16_t x71 = INT16_MIN;
	int32_t x72 = -1;

	t17 = (x69&(x70|(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	volatile int64_t x74 = 50203LL;
	volatile int32_t x75 = 3719;

	t18 = (x73&(x74|(x75<x76)));

	if (t18 != 50203LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	uint64_t x78 = 1245361246LLU;
	int64_t x80 = INT64_MIN;
	uint64_t t19 = 2124619878645LLU;

	t19 = (x77&(x78|(x79<x80)));

	if (t19 != 1245361152LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 45U;
	uint64_t x82 = 23927586641LLU;
	volatile uint64_t t20 = 62327144685241322LLU;

	t20 = (x81&(x82|(x83<x84)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x87 = 840U;
	static volatile int64_t t21 = 5LL;

	t21 = (x85&(x86|(x87<x88)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	uint64_t x90 = 7LLU;
	volatile int16_t x91 = 0;
	uint64_t t22 = 5886133454LLU;

	t22 = (x89&(x90|(x91<x92)));

	if (t22 != 7LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = 101;
	uint16_t x94 = 342U;
	int64_t x95 = INT64_MIN;
	volatile int32_t x96 = 803024297;
	static volatile int32_t t23 = -3382517;

	t23 = (x93&(x94|(x95<x96)));

	if (t23 != 69) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	uint8_t x98 = UINT8_MAX;
	volatile int16_t x100 = -1846;
	int32_t t24 = 61;

	t24 = (x97&(x98|(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	int64_t x103 = -2287724225195485956LL;
	volatile int8_t x104 = 3;
	volatile int64_t t25 = -1282903150765406LL;

	t25 = (x101&(x102|(x103<x104)));

	if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x106 = 30U;
	volatile int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	static int64_t t26 = -135426648410LL;

	t26 = (x105&(x106|(x107<x108)));

	if (t26 != 31LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x111 = -1LL;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = -296;

	t27 = (x109&(x110|(x111<x112)));

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = 4U;

	t28 = (x113&(x114|(x115<x116)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	int64_t x118 = 185015316334556LL;
	volatile uint16_t x119 = UINT16_MAX;
	int64_t x120 = INT64_MAX;
	int64_t t29 = -254278390293701LL;

	t29 = (x117&(x118|(x119<x120)));

	if (t29 != 18397LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int64_t x122 = INT64_MIN;
	static int16_t x123 = -1;
	int64_t t30 = INT64_MIN;

	t30 = (x121&(x122|(x123<x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 0LL;
	volatile int32_t x126 = -96709;
	static int16_t x127 = INT16_MAX;
	uint16_t x128 = UINT16_MAX;
	int64_t t31 = 11543LL;

	t31 = (x125&(x126|(x127<x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	static uint8_t x131 = UINT8_MAX;
	volatile int64_t x132 = -161682282672627LL;
	volatile uint64_t t32 = 287222164034LLU;

	t32 = (x129&(x130|(x131<x132)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	int32_t x135 = -204001591;

	t33 = (x133&(x134|(x135<x136)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MAX;
	int32_t t34 = INT32_MAX;

	t34 = (x137&(x138|(x139<x140)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int16_t x142 = INT16_MAX;
	int16_t x143 = -42;
	uint16_t x144 = 1084U;

	t35 = (x141&(x142|(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	static int64_t x146 = -1LL;
	static uint32_t x147 = 12567U;
	int8_t x148 = -6;
	int64_t t36 = -278471703LL;

	t36 = (x145&(x146|(x147<x148)));

	if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 3286320U;
	int16_t x150 = -4099;
	int8_t x151 = 0;
	int16_t x152 = INT16_MIN;
	uint32_t t37 = 297194801U;

	t37 = (x149&(x150|(x151<x152)));

	if (t37 != 3286320U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 1;
	volatile int64_t x154 = -1LL;
	uint16_t x155 = UINT16_MAX;
	volatile int8_t x156 = 1;
	int64_t t38 = 2209570067036409LL;

	t38 = (x153&(x154|(x155<x156)));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 124957U;
	int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MIN;
	volatile int8_t x160 = INT8_MAX;
	volatile int64_t t39 = 130786800LL;

	t39 = (x157&(x158|(x159<x160)));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int64_t x163 = -1LL;
	volatile int64_t t40 = INT64_MIN;

	t40 = (x161&(x162|(x163<x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int32_t x166 = INT32_MIN;
	static int64_t x167 = 295LL;
	volatile int32_t t41 = -1;

	t41 = (x165&(x166|(x167<x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 180U;
	volatile uint8_t x172 = UINT8_MAX;

	t42 = (x169&(x170|(x171<x172)));

	if (t42 != 180U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x173 = UINT16_MAX;
	volatile int8_t x175 = -1;
	int64_t x176 = -1338439868480018LL;

	t43 = (x173&(x174|(x175<x176)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	volatile uint32_t x178 = 20U;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = INT8_MAX;

	t44 = (x177&(x178|(x179<x180)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 1520;
	volatile int32_t x183 = -1;
	int32_t x184 = 0;
	uint64_t t45 = 173825LLU;

	t45 = (x181&(x182|(x183<x184)));

	if (t45 != 368LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int32_t x187 = INT32_MIN;
	volatile int32_t t46 = 53332;

	t46 = (x185&(x186|(x187<x188)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static int64_t x190 = 60126LL;
	uint32_t x191 = UINT32_MAX;
	volatile int8_t x192 = -1;

	t47 = (x189&(x190|(x191<x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 19168U;
	uint32_t x194 = 21U;
	uint32_t t48 = 3U;

	t48 = (x193&(x194|(x195<x196)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 0LLU;
	volatile int8_t x199 = INT8_MIN;
	uint64_t t49 = 1033119LLU;

	t49 = (x197&(x198|(x199<x200)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 2502487233LL;
	int8_t x202 = INT8_MAX;
	int8_t x204 = -22;
	static int64_t t50 = -125949383986121798LL;

	t50 = (x201&(x202|(x203<x204)));

	if (t50 != 65LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 99U;
	int8_t x207 = INT8_MIN;
	volatile int32_t t51 = -1;

	t51 = (x205&(x206|(x207<x208)));

	if (t51 != 99) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	static uint64_t x210 = UINT64_MAX;
	int64_t x212 = -1LL;
	uint64_t t52 = 8097392986015338998LLU;

	t52 = (x209&(x210|(x211<x212)));

	if (t52 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	uint8_t x214 = UINT8_MAX;
	static volatile int8_t x215 = -1;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = 24218421;

	t53 = (x213&(x214|(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x218 = 295;
	uint16_t x220 = UINT16_MAX;
	int32_t t54 = -120101485;

	t54 = (x217&(x218|(x219<x220)));

	if (t54 != 295) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = 24;
	static volatile uint64_t t55 = UINT64_MAX;

	t55 = (x221&(x222|(x223<x224)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 0;
	volatile int16_t x227 = -181;
	int16_t x228 = 12;

	t56 = (x225&(x226|(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = 19572780;
	int64_t x231 = -15708384909817391LL;
	int8_t x232 = 1;
	static int32_t t57 = -1;

	t57 = (x229&(x230|(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = 83543877;
	int8_t x236 = -34;
	int32_t t58 = 354;

	t58 = (x233&(x234|(x235<x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 1949863305153704531LLU;
	volatile int64_t x238 = -1LL;
	volatile uint16_t x239 = 1040U;
	static uint32_t x240 = 1947U;
	uint64_t t59 = 1783559123445461LLU;

	t59 = (x237&(x238|(x239<x240)));

	if (t59 != 1949863305153704531LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	volatile int16_t x243 = 8;
	static int8_t x244 = -1;
	int32_t t60 = -22894;

	t60 = (x241&(x242|(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 5U;
	static int32_t x247 = INT32_MAX;
	volatile uint32_t x248 = 9U;
	static volatile int32_t t61 = -11;

	t61 = (x245&(x246|(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 2895U;
	uint32_t x251 = 799979U;
	int16_t x252 = INT16_MIN;
	uint32_t t62 = 8218314U;

	t62 = (x249&(x250|(x251<x252)));

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = 0U;
	volatile int32_t t63 = 12;

	t63 = (x253&(x254|(x255<x256)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -2;
	int8_t x258 = INT8_MAX;
	volatile int32_t x259 = INT32_MIN;
	static uint8_t x260 = UINT8_MAX;

	t64 = (x257&(x258|(x259<x260)));

	if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	int64_t x264 = -1LL;
	volatile int32_t t65 = -901548365;

	t65 = (x261&(x262|(x263<x264)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = -1173;
	int64_t x266 = -1007LL;
	uint8_t x267 = 0U;
	int16_t x268 = -1;

	t66 = (x265&(x266|(x267<x268)));

	if (t66 != -2047LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 6;
	uint8_t x271 = 1U;
	static uint8_t x272 = 24U;
	int32_t t67 = -15412;

	t67 = (x269&(x270|(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 99U;
	uint16_t x274 = 881U;
	int32_t x276 = INT32_MIN;
	int32_t t68 = -1;

	t68 = (x273&(x274|(x275<x276)));

	if (t68 != 97) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = UINT64_MAX;
	volatile int64_t x279 = -1LL;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x277&(x278|(x279<x280)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	volatile uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x281&(x282|(x283<x284)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = INT32_MIN;
	int8_t x287 = 0;
	volatile uint64_t x288 = 387103LLU;
	int32_t t71 = -4;

	t71 = (x285&(x286|(x287<x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = INT8_MIN;
	uint16_t x290 = 15U;
	volatile uint16_t x291 = 0U;
	int32_t t72 = -1118874;

	t72 = (x289&(x290|(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 2881629;
	int32_t t73 = -76637;

	t73 = (x293&(x294|(x295<x296)));

	if (t73 != 2881556) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 47U;
	static int32_t x299 = INT32_MIN;
	int64_t t74 = -233990133LL;

	t74 = (x297&(x298|(x299<x300)));

	if (t74 != 15LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 1;
	volatile int32_t x302 = INT32_MIN;
	int8_t x304 = -1;
	int32_t t75 = 71312;

	t75 = (x301&(x302|(x303<x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = -239;
	volatile int8_t x307 = -1;
	static int32_t t76 = 7825920;

	t76 = (x305&(x306|(x307<x308)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = -1;
	volatile int64_t x311 = 2163539594LL;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t77 = -49521083;

	t77 = (x309&(x310|(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 528;
	static int64_t x314 = INT64_MAX;
	static volatile uint64_t x315 = 5953516364687866030LLU;
	volatile int64_t t78 = 440226332346LL;

	t78 = (x313&(x314|(x315<x316)));

	if (t78 != 528LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 4288272640LL;
	static int8_t x318 = INT8_MAX;
	uint8_t x319 = 27U;
	uint16_t x320 = UINT16_MAX;
	volatile int64_t t79 = -67817490372LL;

	t79 = (x317&(x318|(x319<x320)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	uint16_t x323 = 284U;
	int16_t x324 = INT16_MIN;
	volatile uint32_t t80 = 3833U;

	t80 = (x321&(x322|(x323<x324)));

	if (t80 != 6U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = UINT32_MAX;
	uint64_t t81 = 16536142642LLU;

	t81 = (x325&(x326|(x327<x328)));

	if (t81 != 2868696502LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = 39U;
	int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	uint16_t x332 = 237U;
	int32_t t82 = 1;

	t82 = (x329&(x330|(x331<x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int16_t x334 = -1;
	static int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	uint64_t t83 = UINT64_MAX;

	t83 = (x333&(x334|(x335<x336)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -14;
	int8_t x338 = 0;
	uint64_t x339 = UINT64_MAX;
	volatile int8_t x340 = INT8_MAX;
	volatile int32_t t84 = 16976170;

	t84 = (x337&(x338|(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MIN;
	static volatile int32_t x342 = INT32_MIN;
	static int64_t x343 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t85 = INT32_MIN;

	t85 = (x341&(x342|(x343<x344)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 5U;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = 823;
	volatile int32_t t86 = 1;

	t86 = (x345&(x346|(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = 1609605541129408280LLU;
	uint64_t x351 = UINT64_MAX;
	static uint64_t t87 = 496787762019532LLU;

	t87 = (x349&(x350|(x351<x352)));

	if (t87 != 1609605540399284224LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -8390;
	static int64_t x354 = INT64_MIN;
	int32_t x355 = -1;
	int16_t x356 = INT16_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x353&(x354|(x355<x356)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = UINT8_MAX;
	int32_t x358 = INT32_MIN;
	static volatile uint8_t x360 = 3U;

	t89 = (x357&(x358|(x359<x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -4811505460894LL;
	int32_t x362 = -1;
	int8_t x363 = -1;
	volatile uint32_t x364 = 14787U;
	int64_t t90 = 1797905398946800304LL;

	t90 = (x361&(x362|(x363<x364)));

	if (t90 != -4811505460894LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MAX;
	static int16_t x367 = 164;
	uint8_t x368 = 14U;

	t91 = (x365&(x366|(x367<x368)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 11U;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -8963LL;
	volatile int32_t x372 = INT32_MIN;
	int32_t t92 = 0;

	t92 = (x369&(x370|(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	uint8_t x374 = 32U;
	int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	static int32_t t93 = -361232243;

	t93 = (x373&(x374|(x375<x376)));

	if (t93 != 32) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x377 = 8;
	static uint16_t x378 = 515U;
	int64_t x379 = INT64_MIN;
	int64_t x380 = -1LL;
	volatile int32_t t94 = -20414;

	t94 = (x377&(x378|(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x383 = UINT8_MAX;
	static int64_t x384 = INT64_MAX;
	int64_t t95 = INT64_MIN;

	t95 = (x381&(x382|(x383<x384)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MAX;
	int64_t x387 = -583299762LL;
	uint64_t x388 = 27LLU;
	volatile int32_t t96 = -6294236;

	t96 = (x385&(x386|(x387<x388)));

	if (t96 != 89) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = UINT16_MAX;
	volatile int16_t x391 = INT16_MIN;

	t97 = (x389&(x390|(x391<x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x396 = 198U;
	int32_t t98 = -30;

	t98 = (x393&(x394|(x395<x396)));

	if (t98 != -216448) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 1U;
	uint8_t x398 = 90U;
	volatile int32_t x399 = INT32_MIN;
	volatile int16_t x400 = INT16_MIN;
	static int32_t t99 = 11;

	t99 = (x397&(x398|(x399<x400)));

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

