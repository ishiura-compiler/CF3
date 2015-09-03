#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
volatile int64_t x5 = -8388425LL;
static int16_t x10 = -1;
volatile uint32_t x12 = 50046U;
volatile int32_t t3 = -647;
int8_t x21 = INT8_MIN;
int16_t x24 = 3;
static volatile uint32_t x31 = 61612931U;
int16_t x35 = -3;
uint16_t x51 = 56U;
volatile int32_t t11 = -2;
uint16_t x60 = 64U;
uint64_t x62 = 1393579528031LLU;
uint16_t x63 = 1U;
static uint64_t x67 = UINT64_MAX;
static int16_t x68 = -1;
volatile int32_t t15 = 13019490;
static volatile uint32_t x71 = 74U;
uint16_t x73 = 870U;
uint32_t x75 = 5U;
volatile uint8_t x79 = UINT8_MAX;
static volatile uint16_t x80 = UINT16_MAX;
static int32_t t18 = 299;
static uint32_t x82 = 0U;
int64_t x88 = 1493825797572279532LL;
int16_t x90 = INT16_MAX;
int32_t t21 = -2;
volatile int32_t t22 = 14138;
uint64_t x102 = UINT64_MAX;
int64_t x104 = -1196470608145LL;
volatile int32_t t24 = -414765424;
int32_t x105 = -1;
volatile int32_t t25 = -3;
int8_t x113 = INT8_MAX;
volatile int32_t x116 = -2;
volatile int8_t x125 = -2;
int32_t x129 = INT32_MIN;
int64_t x130 = -1LL;
int8_t x134 = INT8_MAX;
uint64_t x136 = 839581LLU;
volatile int32_t t31 = -104;
uint16_t x137 = 4U;
volatile int32_t t32 = 1204407;
volatile uint32_t x146 = 13405U;
static volatile int32_t t34 = 5825856;
int16_t x150 = INT16_MAX;
int32_t x155 = INT32_MIN;
static uint32_t x162 = UINT32_MAX;
volatile uint32_t x174 = 235U;
volatile int64_t x177 = 23176445956LL;
int32_t x180 = INT32_MIN;
volatile int16_t x183 = INT16_MIN;
int64_t x191 = -11556244918850171LL;
int64_t x192 = -1003LL;
volatile int32_t t44 = -46;
int64_t x209 = INT64_MIN;
int32_t t49 = -11146436;
volatile uint8_t x219 = 37U;
static volatile int32_t t50 = -827;
volatile int32_t x221 = INT32_MIN;
volatile uint32_t x226 = UINT32_MAX;
volatile int32_t t52 = -1201;
int16_t x230 = -1;
uint16_t x241 = 17U;
uint64_t x255 = UINT64_MAX;
uint8_t x266 = 0U;
static int32_t x287 = -1;
int32_t t62 = 3;
int32_t t63 = 860963;
uint16_t x304 = 1U;
static int64_t x305 = INT64_MIN;
int32_t t66 = 598;
uint16_t x312 = UINT16_MAX;
static volatile int32_t t68 = -4250087;
int32_t x339 = -60694873;
uint8_t x348 = UINT8_MAX;
int32_t t74 = 3;
int16_t x349 = INT16_MAX;
uint8_t x357 = 4U;
int32_t t79 = 213935;
int64_t x375 = -16070764LL;
static uint16_t x376 = UINT16_MAX;
static int32_t x380 = -1;
uint8_t x390 = 29U;
static int64_t x401 = INT64_MIN;
int32_t t87 = 18;
uint8_t x414 = 15U;
int16_t x422 = 5;
int32_t t92 = -31914270;
volatile uint64_t x437 = 26798952762LLU;
uint64_t x442 = 93543LLU;
static int32_t x444 = INT32_MIN;
int64_t x450 = INT64_MAX;
uint64_t x452 = 1693100024LLU;


void f0(void) {
	volatile uint16_t x1 = 7341U;
	int8_t x3 = 0;
	volatile uint64_t x4 = 988113LLU;
	int32_t t0 = -31862084;

	t0 = (x1<(x2|(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MIN;
	static int32_t x7 = -1;
	int16_t x8 = -11166;
	volatile int32_t t1 = -338;

	t1 = (x5<(x6|(x7+x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	uint64_t x11 = 6681576567LLU;
	volatile int32_t t2 = -307956132;

	t2 = (x9<(x10|(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2U;
	int32_t x14 = INT32_MAX;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = -1;

	t3 = (x13<(x14|(x15+x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	static int32_t x18 = INT32_MIN;
	int16_t x19 = -3373;
	uint8_t x20 = 11U;
	volatile int32_t t4 = -1006;

	t4 = (x17<(x18|(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	int64_t x23 = INT64_MIN;
	volatile int32_t t5 = -177078198;

	t5 = (x21<(x22|(x23+x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint16_t x26 = 6U;
	int64_t x27 = INT64_MIN;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = 17919;

	t6 = (x25<(x26|(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile int32_t x30 = -1;
	uint64_t x32 = 54LLU;
	static int32_t t7 = -183769012;

	t7 = (x29<(x30|(x31+x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MAX;
	static volatile int16_t x36 = INT16_MAX;
	volatile int32_t t8 = 1;

	t8 = (x33<(x34|(x35+x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 36U;
	volatile int64_t x38 = 0LL;
	volatile int64_t x39 = -1LL;
	static volatile int32_t x40 = INT32_MAX;
	int32_t t9 = -232501468;

	t9 = (x37<(x38|(x39+x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 4047686102876466LLU;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = INT64_MIN;
	static uint16_t x44 = UINT16_MAX;
	int32_t t10 = 106754945;

	t10 = (x41<(x42|(x43+x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	static int8_t x52 = -25;

	t11 = (x49<(x50|(x51+x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = 1750U;
	static uint8_t x55 = 7U;
	int16_t x56 = 530;
	static int32_t t12 = -14270;

	t12 = (x53<(x54|(x55+x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 6955LLU;
	uint64_t x58 = 2145LLU;
	volatile int8_t x59 = 14;
	static volatile int32_t t13 = -27701650;

	t13 = (x57<(x58|(x59+x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	volatile int32_t x64 = -1;
	int32_t t14 = 6625;

	t14 = (x61<(x62|(x63+x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -6386607148LL;
	static int32_t x66 = -188899;

	t15 = (x65<(x66|(x67+x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x72 = 68329064368LL;
	int32_t t16 = 136246193;

	t16 = (x69<(x70|(x71+x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = UINT8_MAX;
	static volatile int8_t x76 = INT8_MIN;
	volatile int32_t t17 = -608;

	t17 = (x73<(x74|(x75+x76)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	int8_t x78 = INT8_MIN;

	t18 = (x77<(x78|(x79+x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 52;
	int32_t x83 = 1017105041;
	uint64_t x84 = 14589826501LLU;
	static int32_t t19 = -53102297;

	t19 = (x81<(x82|(x83+x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 1804;
	volatile uint32_t x86 = 1878166U;
	uint16_t x87 = 0U;
	int32_t t20 = -37195;

	t20 = (x85<(x86|(x87+x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = -6;
	static uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MIN;

	t21 = (x89<(x90|(x91+x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -15252657LL;
	static int16_t x94 = -1;
	static uint32_t x95 = 519694785U;
	int16_t x96 = 3957;

	t22 = (x93<(x94|(x95+x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 70761;
	int16_t x98 = INT16_MAX;
	uint64_t x99 = 1964373LLU;
	int16_t x100 = INT16_MAX;
	int32_t t23 = 2780;

	t23 = (x97<(x98|(x99+x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x101 = INT16_MIN;
	static int64_t x103 = INT64_MAX;

	t24 = (x101<(x102|(x103+x104)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = 1538;
	volatile int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MAX;

	t25 = (x105<(x106|(x107+x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	volatile uint64_t x110 = 384078LLU;
	static int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t26 = 2902;

	t26 = (x109<(x110|(x111+x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x114 = INT8_MIN;
	uint64_t x115 = 17519998683789852LLU;
	int32_t t27 = -886;

	t27 = (x113<(x114|(x115+x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = 114245;
	uint32_t x124 = 33026U;
	int32_t t28 = -29456954;

	t28 = (x121<(x122|(x123+x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x126 = 4834322228LLU;
	volatile int16_t x127 = 1;
	static int64_t x128 = -1LL;
	int32_t t29 = -2;

	t29 = (x125<(x126|(x127+x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x131 = 0U;
	int16_t x132 = -19;
	volatile int32_t t30 = -80215774;

	t30 = (x129<(x130|(x131+x132)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MAX;
	int16_t x135 = INT16_MIN;

	t31 = (x133<(x134|(x135+x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x138 = 10U;
	int64_t x139 = -24LL;
	int8_t x140 = -1;

	t32 = (x137<(x138|(x139+x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 0;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = -1;
	static uint32_t x144 = 1825430230U;
	volatile int32_t t33 = 295125250;

	t33 = (x141<(x142|(x143+x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	int64_t x147 = -1LL;
	volatile int16_t x148 = 6951;

	t34 = (x145<(x146|(x147+x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = -7;
	volatile int16_t x151 = 43;
	uint32_t x152 = 0U;
	static volatile int32_t t35 = 3;

	t35 = (x149<(x150|(x151+x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 372984U;
	uint16_t x154 = 776U;
	uint32_t x156 = 24995668U;
	volatile int32_t t36 = -6350507;

	t36 = (x153<(x154|(x155+x156)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	int16_t x163 = 12;
	uint64_t x164 = UINT64_MAX;
	int32_t t37 = -82980231;

	t37 = (x161<(x162|(x163+x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MAX;
	static uint16_t x167 = 16U;
	int16_t x168 = INT16_MIN;
	int32_t t38 = 13839;

	t38 = (x165<(x166|(x167+x168)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	static int64_t x171 = INT64_MIN;
	static int16_t x172 = 21;
	volatile int32_t t39 = -35;

	t39 = (x169<(x170|(x171+x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x173 = 3U;
	static int64_t x175 = 21185LL;
	volatile uint64_t x176 = 32374LLU;
	int32_t t40 = 2781;

	t40 = (x173<(x174|(x175+x176)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = INT16_MIN;
	int64_t x179 = -1LL;
	int32_t t41 = 42959342;

	t41 = (x177<(x178|(x179+x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = 161;
	volatile int8_t x184 = -1;
	int32_t t42 = -93;

	t42 = (x181<(x182|(x183+x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 9U;
	uint32_t x186 = UINT32_MAX;
	static int64_t x187 = 1238991248LL;
	static int64_t x188 = INT64_MIN;
	volatile int32_t t43 = -947;

	t43 = (x185<(x186|(x187+x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = 0;
	uint8_t x190 = 3U;

	t44 = (x189<(x190|(x191+x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MAX;
	static int8_t x194 = INT8_MIN;
	static uint64_t x195 = UINT64_MAX;
	volatile int64_t x196 = 588925277010635913LL;
	int32_t t45 = 366611;

	t45 = (x193<(x194|(x195+x196)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = 27235U;
	int64_t x202 = -26636262959843LL;
	volatile int8_t x203 = -1;
	int32_t x204 = INT32_MAX;
	int32_t t46 = -2216;

	t46 = (x201<(x202|(x203+x204)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = 229058467;
	uint16_t x206 = 416U;
	volatile int8_t x207 = 2;
	static volatile int32_t x208 = INT32_MIN;
	int32_t t47 = -17928651;

	t47 = (x205<(x206|(x207+x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x210 = 37U;
	int32_t x211 = INT32_MAX;
	int8_t x212 = -1;
	int32_t t48 = 508;

	t48 = (x209<(x210|(x211+x212)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MAX;
	uint64_t x216 = UINT64_MAX;

	t49 = (x213<(x214|(x215+x216)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -7;
	static int64_t x218 = INT64_MIN;
	int16_t x220 = INT16_MIN;

	t50 = (x217<(x218|(x219+x220)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x222 = -4;
	static int32_t x223 = INT32_MIN;
	volatile int32_t x224 = INT32_MAX;
	volatile int32_t t51 = 93648;

	t51 = (x221<(x222|(x223+x224)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MIN;
	static int64_t x227 = -6750962978359846LL;
	int8_t x228 = 1;

	t52 = (x225<(x226|(x227+x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x229 = -5420;
	uint64_t x231 = 146LLU;
	volatile int8_t x232 = INT8_MIN;
	static volatile int32_t t53 = 183646;

	t53 = (x229<(x230|(x231+x232)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	uint8_t x238 = UINT8_MAX;
	volatile int8_t x239 = INT8_MIN;
	uint16_t x240 = 12U;
	volatile int32_t t54 = 549854466;

	t54 = (x237<(x238|(x239+x240)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x242 = -112;
	volatile int16_t x243 = -1;
	int64_t x244 = INT64_MAX;
	volatile int32_t t55 = -775861;

	t55 = (x241<(x242|(x243+x244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = -26637847404490932LL;
	static uint8_t x246 = 55U;
	volatile int64_t x247 = 126357LL;
	int32_t x248 = -1;
	volatile int32_t t56 = -63458019;

	t56 = (x245<(x246|(x247+x248)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = 1U;
	uint32_t x250 = UINT32_MAX;
	static int32_t x251 = -1095605;
	uint16_t x252 = 777U;
	int32_t t57 = 4874;

	t57 = (x249<(x250|(x251+x252)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x253 = 10U;
	volatile int64_t x254 = INT64_MAX;
	uint16_t x256 = UINT16_MAX;
	int32_t t58 = 25426;

	t58 = (x253<(x254|(x255+x256)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x265 = -1;
	uint32_t x267 = UINT32_MAX;
	uint32_t x268 = 40410U;
	int32_t t59 = -1;

	t59 = (x265<(x266|(x267+x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x269 = 2;
	int64_t x270 = 7LL;
	static int16_t x271 = 1;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t60 = 1017119;

	t60 = (x269<(x270|(x271+x272)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x273 = 6607924U;
	int16_t x274 = INT16_MAX;
	int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MAX;
	volatile int32_t t61 = -2;

	t61 = (x273<(x274|(x275+x276)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = UINT32_MAX;
	static int8_t x286 = 0;
	static int16_t x288 = INT16_MAX;

	t62 = (x285<(x286|(x287+x288)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x289 = 293104429LL;
	static int16_t x290 = -1;
	volatile int8_t x291 = INT8_MIN;
	volatile int32_t x292 = 4379447;

	t63 = (x289<(x290|(x291+x292)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x293 = 3;
	int8_t x294 = -1;
	volatile uint8_t x295 = 1U;
	uint64_t x296 = UINT64_MAX;
	int32_t t64 = 19;

	t64 = (x293<(x294|(x295+x296)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = -1;
	volatile int32_t x302 = -776;
	int16_t x303 = INT16_MAX;
	int32_t t65 = -87;

	t65 = (x301<(x302|(x303+x304)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x306 = -726479;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MAX;

	t66 = (x305<(x306|(x307+x308)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x309 = UINT8_MAX;
	static int64_t x310 = 105169683674724LL;
	static volatile uint32_t x311 = UINT32_MAX;
	volatile int32_t t67 = 3721;

	t67 = (x309<(x310|(x311+x312)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 885478175U;

	t68 = (x313<(x314|(x315+x316)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x317 = INT16_MIN;
	volatile uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 4U;
	volatile int32_t x320 = 33545025;
	volatile int32_t t69 = -15199173;

	t69 = (x317<(x318|(x319+x320)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x325 = UINT16_MAX;
	uint32_t x326 = 15460635U;
	int16_t x327 = INT16_MAX;
	uint32_t x328 = UINT32_MAX;
	int32_t t70 = -141783;

	t70 = (x325<(x326|(x327+x328)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = INT32_MIN;
	volatile int64_t x330 = INT64_MAX;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = INT64_MIN;
	volatile int32_t t71 = -14497675;

	t71 = (x329<(x330|(x331+x332)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x333 = -1217;
	static int8_t x334 = 10;
	volatile int16_t x335 = INT16_MAX;
	volatile int8_t x336 = -1;
	int32_t t72 = -135793;

	t72 = (x333<(x334|(x335+x336)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 2855U;
	static int16_t x338 = 251;
	int64_t x340 = INT64_MAX;
	volatile int32_t t73 = -1343;

	t73 = (x337<(x338|(x339+x340)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x345 = 41U;
	int16_t x346 = 7372;
	volatile int32_t x347 = -1;

	t74 = (x345<(x346|(x347+x348)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x350 = 21746359342LLU;
	static volatile int8_t x351 = -1;
	volatile uint8_t x352 = 7U;
	volatile int32_t t75 = 54780;

	t75 = (x349<(x350|(x351+x352)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -175455956LL;
	int64_t x354 = -1LL;
	uint16_t x355 = 3U;
	static volatile int64_t x356 = 47809LL;
	volatile int32_t t76 = 7;

	t76 = (x353<(x354|(x355+x356)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x358 = UINT32_MAX;
	volatile int64_t x359 = INT64_MIN;
	uint16_t x360 = 52U;
	volatile int32_t t77 = -775586398;

	t77 = (x357<(x358|(x359+x360)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x361 = 7LLU;
	volatile uint64_t x362 = UINT64_MAX;
	volatile int8_t x363 = INT8_MIN;
	volatile int32_t x364 = INT32_MAX;
	volatile int32_t t78 = -527213825;

	t78 = (x361<(x362|(x363+x364)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x365 = INT8_MAX;
	int8_t x366 = INT8_MIN;
	static int32_t x367 = -1;
	volatile uint32_t x368 = 13U;

	t79 = (x365<(x366|(x367+x368)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 37U;
	int8_t x371 = 7;
	int64_t x372 = -634302841402462335LL;
	static int32_t t80 = -195732;

	t80 = (x369<(x370|(x371+x372)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = INT32_MAX;
	static uint32_t x374 = UINT32_MAX;
	int32_t t81 = -50;

	t81 = (x373<(x374|(x375+x376)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x377 = INT16_MAX;
	uint32_t x378 = 5U;
	uint8_t x379 = 123U;
	volatile int32_t t82 = -338;

	t82 = (x377<(x378|(x379+x380)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x381 = UINT32_MAX;
	uint64_t x382 = 4835103630200LLU;
	int64_t x383 = 112982966672LL;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t83 = -147706623;

	t83 = (x381<(x382|(x383+x384)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = INT16_MIN;
	static uint32_t x386 = 43804U;
	uint8_t x387 = 103U;
	uint64_t x388 = 111469767471349LLU;
	int32_t t84 = -229534;

	t84 = (x385<(x386|(x387+x388)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int8_t x391 = -1;
	int64_t x392 = INT64_MAX;
	int32_t t85 = 1;

	t85 = (x389<(x390|(x391+x392)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -1LL;
	int16_t x398 = -12214;
	volatile int8_t x399 = -3;
	int64_t x400 = INT64_MAX;
	volatile int32_t t86 = 1;

	t86 = (x397<(x398|(x399+x400)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = -1LL;
	uint64_t x404 = 4581267251272LLU;

	t87 = (x401<(x402|(x403+x404)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = INT16_MIN;
	static uint16_t x406 = 37U;
	static volatile int32_t x407 = INT32_MIN;
	uint64_t x408 = 23641820678LLU;
	volatile int32_t t88 = -2273;

	t88 = (x405<(x406|(x407+x408)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x409 = INT8_MIN;
	int32_t x410 = INT32_MAX;
	static uint64_t x411 = 71094958840605129LLU;
	volatile uint32_t x412 = 842U;
	int32_t t89 = -936738342;

	t89 = (x409<(x410|(x411+x412)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = -1;
	uint8_t x415 = UINT8_MAX;
	int16_t x416 = INT16_MAX;
	static volatile int32_t t90 = -10420;

	t90 = (x413<(x414|(x415+x416)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = 28888202LL;
	int32_t x418 = 23;
	int8_t x419 = -1;
	int16_t x420 = INT16_MIN;
	int32_t t91 = 19;

	t91 = (x417<(x418|(x419+x420)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = INT32_MIN;
	int64_t x423 = INT64_MIN;
	static int8_t x424 = 0;

	t92 = (x421<(x422|(x423+x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = INT16_MAX;
	int16_t x426 = 322;
	volatile int64_t x427 = INT64_MIN;
	volatile uint8_t x428 = 36U;
	volatile int32_t t93 = -1;

	t93 = (x425<(x426|(x427+x428)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x433 = 0U;
	int64_t x434 = -1LL;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = 59U;
	static int32_t t94 = -1156;

	t94 = (x433<(x434|(x435+x436)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x438 = INT8_MIN;
	int8_t x439 = 0;
	static int8_t x440 = -20;
	static volatile int32_t t95 = -116717046;

	t95 = (x437<(x438|(x439+x440)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x441 = 0LL;
	int64_t x443 = INT64_MAX;
	volatile int32_t t96 = 3;

	t96 = (x441<(x442|(x443+x444)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = INT32_MIN;
	uint32_t x446 = UINT32_MAX;
	static int16_t x447 = INT16_MIN;
	int8_t x448 = -1;
	volatile int32_t t97 = 1;

	t97 = (x445<(x446|(x447+x448)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x449 = INT64_MIN;
	int8_t x451 = INT8_MIN;
	static int32_t t98 = 8;

	t98 = (x449<(x450|(x451+x452)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = INT32_MAX;
	uint8_t x454 = 71U;
	int32_t x455 = -40745119;
	int16_t x456 = -1;
	int32_t t99 = 236530;

	t99 = (x453<(x454|(x455+x456)));

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

