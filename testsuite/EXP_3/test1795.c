#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 14U;
int64_t x4 = INT64_MIN;
volatile int64_t t1 = -1LL;
uint8_t x14 = 1U;
static uint32_t x24 = UINT32_MAX;
static uint8_t x28 = 2U;
static int32_t x32 = -1;
int32_t t7 = 19;
volatile int32_t x33 = -1;
volatile uint32_t x34 = 2U;
static int8_t x37 = 54;
int64_t x40 = -434016066LL;
int64_t t9 = 7946821LL;
static int8_t x45 = INT8_MIN;
uint32_t x49 = 1U;
uint8_t x67 = 7U;
volatile int64_t t16 = 3744886092058511LL;
uint8_t x70 = 30U;
int8_t x74 = -1;
volatile uint32_t x95 = 3007U;
static volatile int16_t x100 = 253;
int64_t x116 = INT64_MAX;
int64_t t28 = 3949015509693778615LL;
int32_t x118 = INT32_MIN;
volatile int64_t x122 = INT64_MAX;
uint32_t x132 = 1178413627U;
static volatile uint8_t x133 = 37U;
static volatile int16_t x136 = -6633;
volatile int64_t x142 = INT64_MAX;
uint8_t x145 = UINT8_MAX;
volatile uint16_t x150 = 54U;
volatile int16_t x156 = 8146;
volatile uint64_t x157 = UINT64_MAX;
static int64_t x165 = -1640132049542826131LL;
uint16_t x167 = 2U;
int32_t t41 = 7442;
volatile int16_t x173 = -1;
static int8_t x180 = INT8_MAX;
uint32_t x181 = 419525750U;
volatile int32_t x182 = 2874109;
volatile uint32_t x184 = 40094594U;
static uint8_t x188 = 9U;
int16_t x192 = INT16_MAX;
int8_t x193 = -16;
static volatile int32_t t51 = 225820570;
volatile int8_t x212 = INT8_MIN;
volatile int16_t x216 = INT16_MAX;
uint64_t x217 = UINT64_MAX;
int32_t x224 = INT32_MIN;
uint64_t t55 = 162519330LLU;
uint8_t x240 = 6U;
uint16_t x242 = UINT16_MAX;
volatile int32_t t60 = 118884036;
static int16_t x249 = -1;
uint64_t x250 = 129658853LLU;
volatile uint32_t x253 = UINT32_MAX;
volatile int64_t t63 = -6LL;
uint32_t x264 = 3353U;
int8_t x266 = INT8_MAX;
uint64_t t66 = 222937625626LLU;
int64_t x277 = INT64_MAX;
volatile uint16_t x282 = 3U;
int64_t x286 = -812736211LL;
volatile uint32_t x289 = 1958U;
uint8_t x292 = UINT8_MAX;
uint32_t x308 = 2057836U;
int32_t x314 = INT32_MIN;
volatile int32_t x322 = 51;
int64_t x327 = -1LL;
uint64_t x329 = UINT64_MAX;
int64_t x340 = -38940601320646358LL;
uint16_t x344 = 0U;
uint16_t x345 = 5U;
volatile int64_t x346 = 727370058213801LL;
int32_t x352 = INT32_MIN;
volatile int32_t t87 = INT32_MIN;
uint64_t x357 = 48756832628878471LLU;
volatile int64_t t91 = 4425119LL;
int32_t x370 = INT32_MIN;
uint8_t x372 = UINT8_MAX;
volatile int16_t x374 = -1;
int8_t x385 = INT8_MIN;
int32_t t97 = -42081;
int32_t x397 = INT32_MIN;
uint16_t x398 = 178U;


void f0(void) {
	int16_t x2 = -2144;
	uint32_t x3 = UINT32_MAX;
	static volatile int64_t t0 = 5753664LL;

	t0 = ((x1<x2)+(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 0U;
	uint32_t x6 = 10654U;
	int32_t x7 = INT32_MAX;
	volatile int64_t x8 = INT64_MIN;

	t1 = ((x5<x6)+(x7&x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint16_t x10 = 34U;
	int64_t x11 = INT64_MAX;
	static uint32_t x12 = 950U;
	static int64_t t2 = 174368LL;

	t2 = ((x9<x10)+(x11&x12));

	if (t2 != 950LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 14931U;
	uint32_t x15 = 6U;
	static volatile int16_t x16 = INT16_MIN;
	static uint32_t t3 = 374623284U;

	t3 = ((x13<x14)+(x15&x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint64_t x18 = 3753087971171829871LLU;
	static volatile int16_t x19 = INT16_MAX;
	int8_t x20 = INT8_MAX;
	static int32_t t4 = 62663;

	t4 = ((x17<x18)+(x19&x20));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int16_t x22 = -1;
	static int64_t x23 = 124151LL;
	int64_t t5 = 272581878941LL;

	t5 = ((x21<x22)+(x23&x24));

	if (t5 != 124152LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static int64_t x26 = INT64_MIN;
	int8_t x27 = 14;
	int32_t t6 = 11116;

	t6 = ((x25<x26)+(x27&x28));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 0;
	static int8_t x30 = -1;
	int8_t x31 = INT8_MIN;

	t7 = ((x29<x30)+(x31&x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x35 = 11LLU;
	int16_t x36 = INT16_MAX;
	uint64_t t8 = 78555328521214LLU;

	t8 = ((x33<x34)+(x35&x36));

	if (t8 != 11LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = INT8_MIN;
	volatile int8_t x39 = INT8_MIN;

	t9 = ((x37<x38)+(x39&x40));

	if (t9 != -434016128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	volatile int32_t x42 = 450744;
	volatile uint16_t x43 = UINT16_MAX;
	static volatile uint32_t x44 = 3523421U;
	volatile uint32_t t10 = 5478U;

	t10 = ((x41<x42)+(x43&x44));

	if (t10 != 50013U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	int16_t x48 = -1;
	int32_t t11 = INT32_MAX;

	t11 = ((x45<x46)+(x47&x48));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = -1;
	int16_t x51 = 0;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = -2801010;

	t12 = ((x49<x50)+(x51&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint16_t x54 = UINT16_MAX;
	int32_t x55 = -1;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -8233;

	t13 = ((x53<x54)+(x55&x56));

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	static int32_t x58 = INT32_MIN;
	volatile int32_t x59 = INT32_MAX;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = 14839;

	t14 = ((x57<x58)+(x59&x60));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 116U;
	int8_t x62 = INT8_MAX;
	volatile int8_t x63 = -44;
	uint32_t x64 = 7286U;
	volatile uint32_t t15 = 35187U;

	t15 = ((x61<x62)+(x63&x64));

	if (t15 != 7253U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 7239900935617LLU;
	static int32_t x66 = INT32_MIN;
	int64_t x68 = INT64_MIN;

	t16 = ((x65<x66)+(x67&x68));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int16_t x71 = INT16_MIN;
	int8_t x72 = -29;
	volatile int32_t t17 = 161240070;

	t17 = ((x69<x70)+(x71&x72));

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint32_t x75 = UINT32_MAX;
	static uint16_t x76 = UINT16_MAX;
	volatile uint32_t t18 = 13305491U;

	t18 = ((x73<x74)+(x75&x76));

	if (t18 != 65536U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = -22;
	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = -120;

	t19 = ((x77<x78)+(x79&x80));

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile int32_t x82 = INT32_MIN;
	static int64_t x83 = -2789070396LL;
	int8_t x84 = -1;
	int64_t t20 = 11541LL;

	t20 = ((x81<x82)+(x83&x84));

	if (t20 != -2789070396LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = 6419;
	int32_t x86 = -5;
	int8_t x87 = INT8_MIN;
	int64_t x88 = 3373LL;
	static volatile int64_t t21 = -485076837LL;

	t21 = ((x85<x86)+(x87&x88));

	if (t21 != 3328LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	uint8_t x91 = UINT8_MAX;
	uint32_t x92 = 1589491U;
	uint32_t t22 = 2800752U;

	t22 = ((x89<x90)+(x91&x92));

	if (t22 != 243U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int64_t x94 = -42567460LL;
	volatile uint16_t x96 = UINT16_MAX;
	uint32_t t23 = 394U;

	t23 = ((x93<x94)+(x95&x96));

	if (t23 != 3007U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static int16_t x98 = -1;
	static uint32_t x99 = 24U;
	uint32_t t24 = 13269307U;

	t24 = ((x97<x98)+(x99&x100));

	if (t24 != 25U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -79;
	static uint16_t x102 = 2191U;
	static int8_t x103 = 2;
	static int8_t x104 = INT8_MIN;
	int32_t t25 = -914;

	t25 = ((x101<x102)+(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MAX;
	static uint16_t x108 = 11059U;
	volatile int32_t t26 = -8;

	t26 = ((x105<x106)+(x107&x108));

	if (t26 != 11059) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 1;
	static uint64_t x110 = UINT64_MAX;
	int32_t x111 = 250928;
	uint64_t x112 = 5810118172585234LLU;
	volatile uint64_t t27 = 920971408LLU;

	t27 = ((x109<x110)+(x111&x112));

	if (t27 != 230417LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 1U;
	int32_t x114 = 541658297;
	int8_t x115 = -8;

	t28 = ((x113<x114)+(x115&x116));

	if (t28 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	static uint8_t x119 = UINT8_MAX;
	static uint16_t x120 = 1U;
	volatile int32_t t29 = 771114990;

	t29 = ((x117<x118)+(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static volatile uint16_t x123 = UINT16_MAX;
	int32_t x124 = -1;
	volatile int32_t t30 = -1938622;

	t30 = ((x121<x122)+(x123&x124));

	if (t30 != 65536) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = 7;
	volatile int64_t x126 = -1118951841725578LL;
	static int32_t x127 = INT32_MIN;
	static uint64_t x128 = UINT64_MAX;
	volatile uint64_t t31 = 365978997LLU;

	t31 = ((x125<x126)+(x127&x128));

	if (t31 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -521124859416714LL;
	uint64_t x130 = 2776LLU;
	static int16_t x131 = INT16_MIN;
	uint32_t t32 = 2U;

	t32 = ((x129<x130)+(x131&x132));

	if (t32 != 1178402816U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = 67224060909264LL;
	uint32_t x135 = 2568634U;
	volatile uint32_t t33 = 1990942442U;

	t33 = ((x133<x134)+(x135&x136));

	if (t33 != 2564115U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	static int8_t x138 = INT8_MIN;
	static int64_t x139 = -130441918002365051LL;
	int16_t x140 = INT16_MIN;
	static volatile int64_t t34 = -175838617470366LL;

	t34 = ((x137<x138)+(x139&x140));

	if (t34 != -130441918002397184LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 4440U;
	volatile uint8_t x143 = 80U;
	uint32_t x144 = 31U;
	uint32_t t35 = 591963U;

	t35 = ((x141<x142)+(x143&x144));

	if (t35 != 17U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MAX;
	uint16_t x147 = 1924U;
	static int32_t x148 = INT32_MIN;
	int32_t t36 = -671987438;

	t36 = ((x145<x146)+(x147&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x149 = -1LL;
	int16_t x151 = INT16_MAX;
	uint32_t x152 = 1296856U;
	volatile uint32_t t37 = 36223U;

	t37 = ((x149<x150)+(x151&x152));

	if (t37 != 18905U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	int16_t x154 = 1;
	static int8_t x155 = 39;
	static int32_t t38 = 15290;

	t38 = ((x153<x154)+(x155&x156));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x158 = UINT16_MAX;
	volatile int8_t x159 = -63;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = 72738;

	t39 = ((x157<x158)+(x159&x160));

	if (t39 != 193) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = 1994;
	volatile uint32_t x162 = 3853U;
	volatile uint64_t x163 = 1LLU;
	int32_t x164 = INT32_MIN;
	uint64_t t40 = 1264872056LLU;

	t40 = ((x161<x162)+(x163&x164));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MAX;
	volatile int16_t x168 = -247;

	t41 = ((x165<x166)+(x167&x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MAX;
	uint64_t x170 = 5LLU;
	static uint64_t x171 = 248620423365915436LLU;
	int8_t x172 = 6;
	volatile uint64_t t42 = 1579994646509LLU;

	t42 = ((x169<x170)+(x171&x172));

	if (t42 != 4LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = INT8_MAX;
	int64_t x175 = -41063947LL;
	static uint32_t x176 = 9597961U;
	int64_t t43 = -15430136LL;

	t43 = ((x173<x174)+(x175&x176));

	if (t43 != 8413186LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	int16_t x178 = INT16_MAX;
	int64_t x179 = 2LL;
	static int64_t t44 = 164440498832965062LL;

	t44 = ((x177<x178)+(x179&x180));

	if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x183 = INT32_MIN;
	volatile uint32_t t45 = 27U;

	t45 = ((x181<x182)+(x183&x184));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = 144;
	static volatile int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	int32_t t46 = 8;

	t46 = ((x185<x186)+(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	uint8_t x190 = UINT8_MAX;
	static uint8_t x191 = 101U;
	static volatile int32_t t47 = 1;

	t47 = ((x189<x190)+(x191&x192));

	if (t47 != 102) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x194 = UINT16_MAX;
	int16_t x195 = -972;
	static volatile int32_t x196 = INT32_MIN;
	int32_t t48 = 78135496;

	t48 = ((x193<x194)+(x195&x196));

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = 1U;
	uint16_t x200 = 123U;
	static volatile int32_t t49 = -785;

	t49 = ((x197<x198)+(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 728LL;
	int32_t x202 = 5430;
	static int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -133316482;

	t50 = ((x201<x202)+(x203&x204));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 0;
	int64_t x206 = 292LL;
	static int16_t x207 = -7723;
	int8_t x208 = INT8_MIN;

	t51 = ((x205<x206)+(x207&x208));

	if (t51 != -7807) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = INT64_MAX;
	static volatile int8_t x210 = INT8_MIN;
	static int32_t x211 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

	t52 = ((x209<x210)+(x211&x212));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 7121U;
	int64_t x214 = -234889356332317LL;
	volatile int16_t x215 = INT16_MIN;
	int32_t t53 = -1;

	t53 = ((x213<x214)+(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x218 = 11416U;
	int8_t x219 = INT8_MAX;
	int64_t x220 = 4LL;
	volatile int64_t t54 = -1740757759435582113LL;

	t54 = ((x217<x218)+(x219&x220));

	if (t54 != 4LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;

	t55 = ((x221<x222)+(x223&x224));

	if (t55 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 0;
	int8_t x226 = INT8_MAX;
	int64_t x227 = 145277LL;
	int8_t x228 = -54;
	volatile int64_t t56 = 21728643LL;

	t56 = ((x225<x226)+(x227&x228));

	if (t56 != 145225LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile int32_t x230 = INT32_MIN;
	uint8_t x231 = 1U;
	uint16_t x232 = 7U;
	int32_t t57 = -7;

	t57 = ((x229<x230)+(x231&x232));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	volatile int32_t x235 = -1;
	static volatile uint8_t x236 = 8U;
	static volatile int32_t t58 = -2965578;

	t58 = ((x233<x234)+(x235&x236));

	if (t58 != 9) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = -12;
	static int16_t x238 = INT16_MIN;
	static int32_t x239 = INT32_MAX;
	volatile int32_t t59 = -3;

	t59 = ((x237<x238)+(x239&x240));

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 5LLU;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t x244 = INT32_MIN;

	t60 = ((x241<x242)+(x243&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = -1;
	int8_t x247 = -1;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t61 = 134286927U;

	t61 = ((x245<x246)+(x247&x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x251 = 1;
	static int32_t x252 = INT32_MIN;
	static int32_t t62 = 129430772;

	t62 = ((x249<x250)+(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -14123;
	volatile int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MAX;

	t63 = ((x253<x254)+(x255&x256));

	if (t63 != 127LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int32_t x258 = -39;
	uint8_t x259 = UINT8_MAX;
	static int16_t x260 = INT16_MAX;
	volatile int32_t t64 = -1;

	t64 = ((x257<x258)+(x259&x260));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = -1LL;
	int8_t x262 = INT8_MIN;
	volatile int64_t x263 = 2804714148649537955LL;
	volatile int64_t t65 = 6LL;

	t65 = ((x261<x262)+(x263&x264));

	if (t65 != 257LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x265 = -1;
	uint64_t x267 = 3297477517LLU;
	volatile uint16_t x268 = 1U;

	t66 = ((x265<x266)+(x267&x268));

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 15;
	uint16_t x270 = 7U;
	uint16_t x271 = 3087U;
	volatile int64_t x272 = -1LL;
	volatile int64_t t67 = 2178429280591280LL;

	t67 = ((x269<x270)+(x271&x272));

	if (t67 != 3087LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = -1;
	static int32_t x274 = INT32_MAX;
	volatile uint32_t x275 = 1876U;
	volatile uint64_t x276 = 7535803072555LLU;
	uint64_t t68 = 7330739LLU;

	t68 = ((x273<x274)+(x275&x276));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	static int64_t x279 = INT64_MAX;
	uint32_t x280 = UINT32_MAX;
	int64_t t69 = 20766256192LL;

	t69 = ((x277<x278)+(x279&x280));

	if (t69 != 4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = 496679072;
	int64_t x283 = INT64_MAX;
	volatile int64_t x284 = INT64_MIN;
	int64_t t70 = -3LL;

	t70 = ((x281<x282)+(x283&x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	static int64_t x287 = 139826354LL;
	volatile uint16_t x288 = 82U;
	volatile int64_t t71 = -356067513143644753LL;

	t71 = ((x285<x286)+(x287&x288));

	if (t71 != 18LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x290 = 104806053LLU;
	int64_t x291 = -1660520LL;
	static volatile int64_t t72 = -27595726462935095LL;

	t72 = ((x289<x290)+(x291&x292));

	if (t72 != 153LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t73 = -2797;

	t73 = ((x293<x294)+(x295&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	static uint8_t x298 = 5U;
	uint32_t x299 = UINT32_MAX;
	volatile uint16_t x300 = UINT16_MAX;
	volatile uint32_t t74 = 529540673U;

	t74 = ((x297<x298)+(x299&x300));

	if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	static int16_t x302 = INT16_MIN;
	int32_t x303 = -1;
	int16_t x304 = -1;
	int32_t t75 = -909253;

	t75 = ((x301<x302)+(x303&x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	volatile int16_t x306 = 4;
	uint32_t x307 = 444U;
	uint32_t t76 = 2U;

	t76 = ((x305<x306)+(x307&x308));

	if (t76 != 44U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	int16_t x310 = 0;
	uint64_t x311 = UINT64_MAX;
	int8_t x312 = 58;
	volatile uint64_t t77 = 55375LLU;

	t77 = ((x309<x310)+(x311&x312));

	if (t77 != 59LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = 1556;
	static int8_t x315 = -1;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t78 = -1;

	t78 = ((x313<x314)+(x315&x316));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	int32_t x318 = -1;
	static uint64_t x319 = UINT64_MAX;
	volatile int16_t x320 = INT16_MIN;
	uint64_t t79 = 2277675800LLU;

	t79 = ((x317<x318)+(x319&x320));

	if (t79 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int64_t x323 = -126233742LL;
	static int8_t x324 = -1;
	volatile int64_t t80 = -68397509LL;

	t80 = ((x321<x322)+(x323&x324));

	if (t80 != -126233742LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = UINT8_MAX;
	static uint16_t x326 = 173U;
	uint8_t x328 = 0U;
	volatile int64_t t81 = 1439641692712LL;

	t81 = ((x325<x326)+(x327&x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	int16_t x332 = -1;
	volatile int64_t t82 = INT64_MIN;

	t82 = ((x329<x330)+(x331&x332));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	static volatile int64_t x334 = 426229LL;
	static volatile int8_t x335 = INT8_MAX;
	int16_t x336 = INT16_MIN;
	int32_t t83 = 935471;

	t83 = ((x333<x334)+(x335&x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	uint32_t x338 = UINT32_MAX;
	uint8_t x339 = UINT8_MAX;
	static int64_t t84 = -7357LL;

	t84 = ((x337<x338)+(x339&x340));

	if (t84 != 42LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 8U;
	volatile int64_t x342 = -1LL;
	int16_t x343 = INT16_MIN;
	int32_t t85 = 0;

	t85 = ((x341<x342)+(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x347 = -1231;
	volatile int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -2365415;

	t86 = ((x345<x346)+(x347&x348));

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 1U;
	volatile int8_t x350 = 0;
	volatile int32_t x351 = INT32_MIN;

	t87 = ((x349<x350)+(x351&x352));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MAX;
	int32_t x354 = -18642;
	int32_t x355 = -1;
	volatile int64_t x356 = INT64_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = ((x353<x354)+(x355&x356));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 1083U;
	int64_t x359 = INT64_MIN;
	int64_t x360 = 1LL;
	static volatile int64_t t89 = 17246014355516LL;

	t89 = ((x357<x358)+(x359&x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 45;
	uint64_t x362 = 52473350642LLU;
	int8_t x363 = 4;
	int16_t x364 = 353;
	static int32_t t90 = -1;

	t90 = ((x361<x362)+(x363&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1527110;
	volatile int16_t x366 = 2153;
	int16_t x367 = INT16_MIN;
	static int64_t x368 = 0LL;

	t91 = ((x365<x366)+(x367&x368));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -4008216;
	uint32_t x371 = 13608947U;
	volatile uint32_t t92 = 201158U;

	t92 = ((x369<x370)+(x371&x372));

	if (t92 != 243U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	static volatile int32_t x375 = INT32_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t93 = -152888;

	t93 = ((x373<x374)+(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = UINT16_MAX;
	int32_t x378 = 15437;
	static int8_t x379 = -1;
	uint16_t x380 = 2067U;
	volatile int32_t t94 = 174;

	t94 = ((x377<x378)+(x379&x380));

	if (t94 != 2067) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	uint32_t x382 = UINT32_MAX;
	uint32_t x383 = UINT32_MAX;
	volatile uint32_t x384 = 904420U;
	uint32_t t95 = 101184U;

	t95 = ((x381<x382)+(x383&x384));

	if (t95 != 904420U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	volatile int64_t x387 = INT64_MAX;
	static volatile uint16_t x388 = 0U;
	volatile int64_t t96 = 107419673926908055LL;

	t96 = ((x385<x386)+(x387&x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 28U;
	volatile uint64_t x390 = 90209347LLU;
	static uint16_t x391 = 1460U;
	int8_t x392 = INT8_MAX;

	t97 = ((x389<x390)+(x391&x392));

	if (t97 != 53) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = 74;
	int32_t x394 = -34;
	int32_t x395 = -1;
	int16_t x396 = INT16_MIN;
	int32_t t98 = 1669;

	t98 = ((x393<x394)+(x395&x396));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x399 = -1;
	static volatile uint8_t x400 = UINT8_MAX;
	static volatile int32_t t99 = 14;

	t99 = ((x397<x398)+(x399&x400));

	if (t99 != 256) { NG(); } else { ; }
	
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

