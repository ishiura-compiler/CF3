#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = -34;
uint16_t x21 = 12U;
uint32_t x23 = 2713U;
static volatile int16_t x30 = INT16_MIN;
uint8_t x31 = 5U;
int32_t x34 = -18;
static volatile int32_t t10 = -308851;
volatile int32_t t14 = -125089657;
uint64_t x62 = 1214126728991110785LLU;
int64_t x66 = INT64_MIN;
int32_t x68 = INT32_MIN;
static int32_t x69 = INT32_MIN;
uint8_t x70 = 2U;
uint8_t x72 = 29U;
static uint64_t x76 = 78860321992052913LLU;
int8_t x77 = 3;
static volatile int32_t x78 = INT32_MAX;
int64_t x89 = INT64_MIN;
static int16_t x92 = -1;
int8_t x93 = INT8_MIN;
int64_t x104 = -4LL;
static int8_t x108 = 1;
uint16_t x110 = 1U;
volatile int32_t t26 = 807731;
volatile int64_t t27 = 42604308452188LL;
int64_t x124 = -669LL;
int32_t t29 = -201;
int8_t x142 = -1;
int16_t x144 = -1;
static int16_t x146 = 955;
static int32_t t34 = -11;
volatile int8_t x155 = INT8_MIN;
int16_t x157 = -1;
static volatile int16_t x159 = 0;
int32_t t37 = -4039;
int8_t x165 = 3;
static int8_t x166 = 25;
volatile int16_t x168 = 7;
static volatile uint8_t x170 = 57U;
int64_t x171 = INT64_MAX;
uint64_t x180 = UINT64_MAX;
uint64_t x183 = 56258482192744884LLU;
int32_t x187 = -183918982;
static int32_t x197 = INT32_MIN;
static volatile uint8_t x202 = 90U;
int16_t x204 = -1;
int64_t t48 = 10LL;
int32_t t49 = 246497762;
int32_t x217 = -1;
int32_t t50 = 247957;
int8_t x231 = -7;
uint32_t x241 = UINT32_MAX;
int64_t x242 = -3752792246372828LL;
volatile uint64_t t54 = 195345606524260884LLU;
static volatile uint8_t x247 = 4U;
static volatile int32_t t55 = 120;
uint8_t x258 = 0U;
uint64_t x259 = 208482LLU;
static int64_t t62 = INT64_MAX;
static volatile int64_t t66 = -23205650007356LL;
volatile int32_t x301 = -1087105;
uint8_t x302 = 23U;
int16_t x314 = INT16_MIN;
static volatile int32_t t71 = 13038;
static int32_t x320 = -1;
int8_t x324 = INT8_MIN;
volatile uint64_t t74 = 33214270093383LLU;
volatile int8_t x330 = INT8_MIN;
static uint8_t x333 = 15U;
static int32_t t76 = -59;
int16_t x337 = -13;
int32_t x340 = INT32_MAX;
uint64_t x342 = 0LLU;
static volatile uint64_t x347 = 7772963LLU;
static int32_t x350 = -604253337;
uint32_t x354 = 254U;
static uint8_t x360 = 108U;
int8_t x365 = 1;
int32_t x378 = -1;
volatile uint64_t x385 = 429821608069254LLU;
uint8_t x387 = 1U;
static volatile int32_t t88 = -1;
int32_t x408 = INT32_MAX;
static int32_t x416 = -1;
static volatile uint8_t x424 = 1U;
int64_t t96 = -25735931550060404LL;
static uint16_t x427 = 8U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MIN;
	uint16_t x3 = 6101U;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 23114;

	t0 = (((x1<x2)|x3)-x4);

	if (t0 != 38869) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 394346700U;
	volatile uint64_t x6 = 2436237481265070LLU;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -3;

	t1 = (((x5<x6)|x7)-x8);

	if (t1 != -65662) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int64_t x10 = INT64_MIN;
	int8_t x11 = 1;
	static int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = -207;

	t2 = (((x9<x10)|x11)-x12);

	if (t2 != -126) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static int64_t x14 = INT64_MIN;
	volatile uint16_t x16 = 27U;
	volatile int32_t t3 = 10;

	t3 = (((x13<x14)|x15)-x16);

	if (t3 != -61) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 16182U;
	static int8_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = -4;
	volatile int32_t t4 = 368142;

	t4 = (((x17<x18)|x19)-x20);

	if (t4 != 65539) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = -2219901LL;
	int16_t x24 = INT16_MIN;
	uint32_t t5 = 30U;

	t5 = (((x21<x22)|x23)-x24);

	if (t5 != 35481U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 60U;
	int64_t x26 = 6803954519083412LL;
	uint32_t x27 = 270412U;
	uint32_t x28 = 11U;
	uint32_t t6 = 311265232U;

	t6 = (((x25<x26)|x27)-x28);

	if (t6 != 270402U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = 2;
	static int64_t x32 = 0LL;
	volatile int64_t t7 = 5321454906720805LL;

	t7 = (((x29<x30)|x31)-x32);

	if (t7 != 5LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint32_t x35 = 10U;
	int8_t x36 = -1;
	volatile uint32_t t8 = 22U;

	t8 = (((x33<x34)|x35)-x36);

	if (t8 != 12U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	int64_t x38 = INT64_MIN;
	volatile int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 154;

	t9 = (((x37<x38)|x39)-x40);

	if (t9 != 32640) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	static int8_t x42 = 0;
	volatile int16_t x43 = INT16_MIN;
	uint16_t x44 = 586U;

	t10 = (((x41<x42)|x43)-x44);

	if (t10 != -33353) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int32_t x46 = INT32_MIN;
	volatile uint16_t x47 = 420U;
	int8_t x48 = -1;
	int32_t t11 = -122902991;

	t11 = (((x45<x46)|x47)-x48);

	if (t11 != 421) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint16_t x50 = UINT16_MAX;
	volatile uint64_t x51 = 4470237237928864LLU;
	int16_t x52 = -1;
	static uint64_t t12 = 1280667300236689LLU;

	t12 = (((x49<x50)|x51)-x52);

	if (t12 != 4470237237928866LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 428249195LLU;
	static int32_t x54 = 189344;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t x56 = 136;
	volatile uint64_t t13 = 3613250675474LLU;

	t13 = (((x53<x54)|x55)-x56);

	if (t13 != 18446744073709551479LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint8_t x58 = UINT8_MAX;
	int8_t x59 = -1;
	int8_t x60 = 6;

	t14 = (((x57<x58)|x59)-x60);

	if (t14 != -7) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static uint64_t x63 = 3588999792LLU;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t15 = 2476137918111605276LLU;

	t15 = (((x61<x62)|x63)-x64);

	if (t15 != 3588999920LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = 1122;
	static int32_t x67 = -1;
	volatile int32_t t16 = INT32_MAX;

	t16 = (((x65<x66)|x67)-x68);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x71 = UINT32_MAX;
	volatile uint32_t t17 = 3U;

	t17 = (((x69<x70)|x71)-x72);

	if (t17 != 4294967266U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = 27592191413817LL;
	volatile int8_t x75 = -1;
	uint64_t t18 = 60115652LLU;

	t18 = (((x73<x74)|x75)-x76);

	if (t18 != 18367883751717498702LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x79 = INT8_MIN;
	static volatile uint64_t x80 = 83083701LLU;
	static uint64_t t19 = 216176185863LLU;

	t19 = (((x77<x78)|x79)-x80);

	if (t19 != 18446744073626467788LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -2;
	int16_t x82 = -116;
	int64_t x83 = INT64_MAX;
	uint16_t x84 = 2041U;
	static int64_t t20 = -14928LL;

	t20 = (((x81<x82)|x83)-x84);

	if (t20 != 9223372036854773766LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	uint32_t x86 = 16524U;
	uint32_t x87 = UINT32_MAX;
	uint8_t x88 = 41U;
	volatile uint32_t t21 = 211U;

	t21 = (((x85<x86)|x87)-x88);

	if (t21 != 4294967254U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = 0U;
	volatile int8_t x91 = -1;
	static volatile int32_t t22 = -5308;

	t22 = (((x89<x90)|x91)-x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = -61;
	int64_t x95 = 982788LL;
	int8_t x96 = INT8_MIN;
	volatile int64_t t23 = 1817045128750338524LL;

	t23 = (((x93<x94)|x95)-x96);

	if (t23 != 982917LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MAX;
	static int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	int64_t t24 = 357451913001911LL;

	t24 = (((x101<x102)|x103)-x104);

	if (t24 != -124LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 3U;
	volatile int8_t x106 = INT8_MIN;
	volatile int64_t x107 = INT64_MAX;
	volatile int64_t t25 = 0LL;

	t25 = (((x105<x106)|x107)-x108);

	if (t25 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = -1;
	volatile int8_t x111 = -1;
	int8_t x112 = INT8_MAX;

	t26 = (((x109<x110)|x111)-x112);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x113 = UINT64_MAX;
	uint32_t x114 = 109001U;
	int64_t x115 = INT64_MIN;
	int16_t x116 = -1;

	t27 = (((x113<x114)|x115)-x116);

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x121 = 31U;
	int32_t x122 = INT32_MIN;
	int32_t x123 = -1;
	int64_t t28 = 65704778411326LL;

	t28 = (((x121<x122)|x123)-x124);

	if (t28 != 668LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x129 = UINT16_MAX;
	static int8_t x130 = INT8_MIN;
	static int8_t x131 = 1;
	int8_t x132 = -1;

	t29 = (((x129<x130)|x131)-x132);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = -2238044492590933874LL;
	static int16_t x134 = INT16_MIN;
	volatile uint32_t x135 = UINT32_MAX;
	int16_t x136 = -21;
	uint32_t t30 = 126570U;

	t30 = (((x133<x134)|x135)-x136);

	if (t30 != 20U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x137 = -1;
	static uint8_t x138 = 2U;
	volatile int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t31 = 10837494;

	t31 = (((x137<x138)|x139)-x140);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = 7;
	int16_t x143 = INT16_MIN;
	static volatile int32_t t32 = -89259425;

	t32 = (((x141<x142)|x143)-x144);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	static uint64_t x147 = 25755LLU;
	int32_t x148 = INT32_MAX;
	uint64_t t33 = 8124LLU;

	t33 = (((x145<x146)|x147)-x148);

	if (t33 != 18446744071562093724LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	volatile int16_t x150 = -22;
	static int16_t x151 = -1;
	volatile int8_t x152 = INT8_MAX;

	t34 = (((x149<x150)|x151)-x152);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x154 = UINT64_MAX;
	static int16_t x156 = INT16_MIN;
	int32_t t35 = -594;

	t35 = (((x153<x154)|x155)-x156);

	if (t35 != 32641) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x158 = INT16_MIN;
	uint16_t x160 = 337U;
	int32_t t36 = 8;

	t36 = (((x157<x158)|x159)-x160);

	if (t36 != -337) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x161 = UINT8_MAX;
	uint64_t x162 = UINT64_MAX;
	static uint16_t x163 = UINT16_MAX;
	uint16_t x164 = UINT16_MAX;

	t37 = (((x161<x162)|x163)-x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x167 = 1029548243U;
	uint32_t t38 = 5819746U;

	t38 = (((x165<x166)|x167)-x168);

	if (t38 != 1029548236U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = INT8_MIN;
	volatile uint32_t x172 = UINT32_MAX;
	int64_t t39 = 1LL;

	t39 = (((x169<x170)|x171)-x172);

	if (t39 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = UINT32_MAX;
	uint8_t x178 = 22U;
	static int32_t x179 = INT32_MIN;
	static uint64_t t40 = 2211615714066737LLU;

	t40 = (((x177<x178)|x179)-x180);

	if (t40 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x181 = 1U;
	int16_t x182 = 1;
	int8_t x184 = INT8_MIN;
	uint64_t t41 = 134602872572LLU;

	t41 = (((x181<x182)|x183)-x184);

	if (t41 != 56258482192745012LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 7U;
	uint32_t x186 = 504U;
	uint16_t x188 = 0U;
	static volatile int32_t t42 = -61;

	t42 = (((x185<x186)|x187)-x188);

	if (t42 != -183918981) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x189 = UINT32_MAX;
	volatile int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t43 = -869;

	t43 = (((x189<x190)|x191)-x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = 3;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = 2670U;
	static int64_t x196 = -47LL;
	static int64_t t44 = -5153806207971348LL;

	t44 = (((x193<x194)|x195)-x196);

	if (t44 != 2717LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x198 = 5855310LLU;
	int16_t x199 = INT16_MIN;
	static int8_t x200 = INT8_MIN;
	int32_t t45 = -78836967;

	t45 = (((x197<x198)|x199)-x200);

	if (t45 != -32640) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = UINT32_MAX;
	uint8_t x203 = 3U;
	volatile int32_t t46 = 801235;

	t46 = (((x201<x202)|x203)-x204);

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x205 = UINT16_MAX;
	static int64_t x206 = -2333703736703LL;
	int16_t x207 = INT16_MAX;
	volatile uint32_t x208 = 966U;
	static uint32_t t47 = 2629U;

	t47 = (((x205<x206)|x207)-x208);

	if (t47 != 31801U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MAX;
	int64_t x211 = -1068571725LL;
	int64_t x212 = -2452083011259647LL;

	t48 = (((x209<x210)|x211)-x212);

	if (t48 != 2452081942687922LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MAX;
	int16_t x215 = 2274;
	int32_t x216 = INT32_MAX;

	t49 = (((x213<x214)|x215)-x216);

	if (t49 != -2147481372) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x218 = 0U;
	uint16_t x219 = UINT16_MAX;
	static int16_t x220 = -1;

	t50 = (((x217<x218)|x219)-x220);

	if (t50 != 65536) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x225 = UINT32_MAX;
	static int32_t x226 = INT32_MAX;
	volatile int16_t x227 = INT16_MIN;
	volatile int16_t x228 = -88;
	static volatile int32_t t51 = -91943;

	t51 = (((x225<x226)|x227)-x228);

	if (t51 != -32680) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	uint32_t x232 = 51U;
	uint32_t t52 = 2U;

	t52 = (((x229<x230)|x231)-x232);

	if (t52 != 4294967238U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x233 = UINT16_MAX;
	uint8_t x234 = 1U;
	int16_t x235 = -1;
	volatile int8_t x236 = INT8_MIN;
	int32_t t53 = 36923954;

	t53 = (((x233<x234)|x235)-x236);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x243 = -104154;
	static uint64_t x244 = UINT64_MAX;

	t54 = (((x241<x242)|x243)-x244);

	if (t54 != 18446744073709447463LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = -438149170;
	int16_t x246 = 103;
	int8_t x248 = INT8_MIN;

	t55 = (((x245<x246)|x247)-x248);

	if (t55 != 133) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = -21621940;
	uint32_t x250 = UINT32_MAX;
	volatile int8_t x251 = -1;
	volatile int64_t x252 = 753622641LL;
	int64_t t56 = -6430LL;

	t56 = (((x249<x250)|x251)-x252);

	if (t56 != -753622642LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = 906LL;
	volatile int8_t x254 = INT8_MIN;
	volatile int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t57 = 124581377;

	t57 = (((x253<x254)|x255)-x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x257 = 2510LLU;
	int32_t x260 = -1;
	volatile uint64_t t58 = 1LLU;

	t58 = (((x257<x258)|x259)-x260);

	if (t58 != 208483LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x261 = UINT32_MAX;
	static volatile int8_t x262 = 1;
	uint8_t x263 = UINT8_MAX;
	static int16_t x264 = -1;
	volatile int32_t t59 = 3;

	t59 = (((x261<x262)|x263)-x264);

	if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = 120U;
	uint64_t x266 = 780LLU;
	static int32_t x267 = INT32_MAX;
	int8_t x268 = 2;
	volatile int32_t t60 = 86087947;

	t60 = (((x265<x266)|x267)-x268);

	if (t60 != 2147483645) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x269 = -24;
	static uint16_t x270 = UINT16_MAX;
	int32_t x271 = 1;
	uint32_t x272 = 14111198U;
	uint32_t t61 = 455U;

	t61 = (((x269<x270)|x271)-x272);

	if (t61 != 4280856099U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x277 = INT8_MAX;
	uint8_t x278 = UINT8_MAX;
	int8_t x279 = -1;
	int64_t x280 = INT64_MIN;

	t62 = (((x277<x278)|x279)-x280);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -56736LL;
	static int8_t x282 = -11;
	uint16_t x283 = UINT16_MAX;
	volatile uint32_t x284 = 28U;
	volatile uint32_t t63 = 4372U;

	t63 = (((x281<x282)|x283)-x284);

	if (t63 != 65507U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x285 = UINT64_MAX;
	int16_t x286 = INT16_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t64 = 44223875;

	t64 = (((x285<x286)|x287)-x288);

	if (t64 != 33023) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = -1;
	uint16_t x290 = 484U;
	volatile uint16_t x291 = 1979U;
	volatile int8_t x292 = INT8_MAX;
	volatile int32_t t65 = 1864497;

	t65 = (((x289<x290)|x291)-x292);

	if (t65 != 1852) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = 101691114837984LL;
	int8_t x294 = INT8_MAX;
	static int64_t x295 = 178204LL;
	int32_t x296 = -1;

	t66 = (((x293<x294)|x295)-x296);

	if (t66 != 178205LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = 83U;
	uint16_t x298 = UINT16_MAX;
	volatile int64_t x299 = INT64_MAX;
	int32_t x300 = INT32_MAX;
	static volatile int64_t t67 = -1LL;

	t67 = (((x297<x298)|x299)-x300);

	if (t67 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x303 = 939160005LLU;
	uint32_t x304 = 734927U;
	volatile uint64_t t68 = 23186968LLU;

	t68 = (((x301<x302)|x303)-x304);

	if (t68 != 938425078LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MAX;
	volatile uint32_t x308 = 4106U;
	uint32_t t69 = 269U;

	t69 = (((x305<x306)|x307)-x308);

	if (t69 != 28661U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x309 = INT64_MIN;
	volatile int8_t x310 = INT8_MIN;
	uint16_t x311 = UINT16_MAX;
	static volatile int64_t x312 = -509370122322638LL;
	static int64_t t70 = 6148458656413688LL;

	t70 = (((x309<x310)|x311)-x312);

	if (t70 != 509370122388173LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = 5302412;
	int16_t x315 = INT16_MIN;
	volatile int16_t x316 = INT16_MIN;

	t71 = (((x313<x314)|x315)-x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = 1;
	uint32_t x318 = 20596778U;
	uint16_t x319 = UINT16_MAX;
	int32_t t72 = -3417806;

	t72 = (((x317<x318)|x319)-x320);

	if (t72 != 65536) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int16_t x322 = 435;
	int64_t x323 = 11425LL;
	volatile int64_t t73 = -5335244762276LL;

	t73 = (((x321<x322)|x323)-x324);

	if (t73 != 11553LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x325 = INT16_MIN;
	volatile int8_t x326 = INT8_MAX;
	static uint8_t x327 = 0U;
	static uint64_t x328 = UINT64_MAX;

	t74 = (((x325<x326)|x327)-x328);

	if (t74 != 2LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x329 = 7U;
	int32_t x331 = 41;
	uint8_t x332 = UINT8_MAX;
	int32_t t75 = -637;

	t75 = (((x329<x330)|x331)-x332);

	if (t75 != -214) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x334 = -13437621LL;
	int16_t x335 = -2333;
	int16_t x336 = INT16_MAX;

	t76 = (((x333<x334)|x335)-x336);

	if (t76 != -35100) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x338 = INT16_MIN;
	int16_t x339 = 216;
	volatile int32_t t77 = 10047858;

	t77 = (((x337<x338)|x339)-x340);

	if (t77 != -2147483431) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x341 = UINT64_MAX;
	uint8_t x343 = 6U;
	int32_t x344 = INT32_MAX;
	int32_t t78 = 1777;

	t78 = (((x341<x342)|x343)-x344);

	if (t78 != -2147483641) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MIN;
	uint16_t x348 = 4139U;
	volatile uint64_t t79 = 78LLU;

	t79 = (((x345<x346)|x347)-x348);

	if (t79 != 7768824LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = 41;
	static volatile uint64_t x351 = UINT64_MAX;
	uint16_t x352 = UINT16_MAX;
	static volatile uint64_t t80 = 84783LLU;

	t80 = (((x349<x350)|x351)-x352);

	if (t80 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x353 = INT8_MIN;
	uint64_t x355 = UINT64_MAX;
	static int8_t x356 = INT8_MIN;
	static volatile uint64_t t81 = 3LLU;

	t81 = (((x353<x354)|x355)-x356);

	if (t81 != 127LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x357 = -4;
	uint32_t x358 = 1U;
	volatile int32_t x359 = -126;
	volatile int32_t t82 = -935;

	t82 = (((x357<x358)|x359)-x360);

	if (t82 != -234) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x361 = INT16_MAX;
	static int16_t x362 = -70;
	int16_t x363 = INT16_MAX;
	int32_t x364 = 1;
	static int32_t t83 = -1;

	t83 = (((x361<x362)|x363)-x364);

	if (t83 != 32766) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x366 = INT8_MIN;
	uint32_t x367 = 10994U;
	static uint64_t x368 = 786245224614460711LLU;
	uint64_t t84 = 7236459189252LLU;

	t84 = (((x365<x366)|x367)-x368);

	if (t84 != 17660498849095101899LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x369 = INT8_MIN;
	static int32_t x370 = INT32_MIN;
	uint8_t x371 = 10U;
	volatile int64_t x372 = -1LL;
	static int64_t t85 = -4304LL;

	t85 = (((x369<x370)|x371)-x372);

	if (t85 != 11LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = 12998788746LL;
	static volatile int32_t x374 = 611950;
	uint8_t x375 = UINT8_MAX;
	volatile int16_t x376 = INT16_MAX;
	volatile int32_t t86 = 1216;

	t86 = (((x373<x374)|x375)-x376);

	if (t86 != -32512) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = INT8_MIN;
	int16_t x379 = 1489;
	int32_t x380 = -31119203;
	static int32_t t87 = 62987;

	t87 = (((x377<x378)|x379)-x380);

	if (t87 != 31120692) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x386 = UINT8_MAX;
	volatile int32_t x388 = -1;

	t88 = (((x385<x386)|x387)-x388);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = 16U;
	int8_t x392 = 0;
	uint32_t t89 = 176U;

	t89 = (((x389<x390)|x391)-x392);

	if (t89 != 16U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x393 = INT64_MIN;
	volatile int16_t x394 = -1451;
	int32_t x395 = 6;
	volatile uint16_t x396 = 1306U;
	volatile int32_t t90 = 130997340;

	t90 = (((x393<x394)|x395)-x396);

	if (t90 != -1299) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = -1;
	uint32_t x398 = 80778750U;
	volatile int32_t x399 = -1;
	static int64_t x400 = INT64_MAX;
	int64_t t91 = INT64_MIN;

	t91 = (((x397<x398)|x399)-x400);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = 14;
	int64_t x402 = INT64_MAX;
	static int8_t x403 = INT8_MIN;
	int16_t x404 = -488;
	static volatile int32_t t92 = 1481087;

	t92 = (((x401<x402)|x403)-x404);

	if (t92 != 361) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x405 = INT64_MAX;
	static uint8_t x406 = 46U;
	volatile int16_t x407 = INT16_MAX;
	volatile int32_t t93 = 1015986;

	t93 = (((x405<x406)|x407)-x408);

	if (t93 != -2147450880) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = -1;
	int32_t x414 = 13765;
	uint8_t x415 = 34U;
	volatile int32_t t94 = 16785;

	t94 = (((x413<x414)|x415)-x416);

	if (t94 != 36) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x417 = -1;
	static int8_t x418 = INT8_MIN;
	uint16_t x419 = UINT16_MAX;
	uint8_t x420 = 11U;
	static volatile int32_t t95 = 464387;

	t95 = (((x417<x418)|x419)-x420);

	if (t95 != 65524) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x421 = 51;
	uint16_t x422 = UINT16_MAX;
	int64_t x423 = -1LL;

	t96 = (((x421<x422)|x423)-x424);

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MIN;
	uint32_t x428 = UINT32_MAX;
	uint32_t t97 = 1066534U;

	t97 = (((x425<x426)|x427)-x428);

	if (t97 != 9U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = -1LL;
	static int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MIN;
	uint32_t x432 = 592U;
	static uint32_t t98 = 18U;

	t98 = (((x429<x430)|x431)-x432);

	if (t98 != 4294933936U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	volatile uint16_t x439 = 13409U;
	int16_t x440 = 0;
	volatile int32_t t99 = -65200371;

	t99 = (((x437<x438)|x439)-x440);

	if (t99 != 13409) { NG(); } else { ; }
	
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

