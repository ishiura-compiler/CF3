#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 61U;
static int16_t x6 = INT16_MIN;
volatile int32_t x7 = INT32_MIN;
int64_t x11 = -1567158057LL;
int32_t t2 = 15470;
static int64_t x23 = 7589701235355LL;
static int8_t x24 = INT8_MIN;
uint32_t x40 = UINT32_MAX;
uint64_t x50 = 105715986692421LLU;
volatile int32_t t11 = 199794;
volatile int32_t t12 = -9;
uint8_t x71 = 63U;
int16_t x74 = INT16_MIN;
int32_t t17 = 2;
int8_t x82 = -1;
int64_t x87 = INT64_MAX;
int8_t x91 = -1;
int8_t x92 = INT8_MAX;
volatile int32_t t20 = 0;
int32_t t21 = 28179;
static int32_t t24 = -335053273;
int64_t x119 = INT64_MIN;
int64_t x120 = INT64_MAX;
uint32_t x124 = 503U;
volatile int32_t t26 = 37365;
int32_t x127 = -1;
int64_t x130 = 1220615265LL;
uint16_t x139 = 0U;
int64_t x140 = INT64_MIN;
volatile int8_t x150 = 1;
static volatile int8_t x152 = INT8_MIN;
int8_t x153 = -1;
int16_t x162 = -1;
int8_t x163 = INT8_MIN;
static int16_t x168 = -1;
volatile uint64_t x172 = UINT64_MAX;
int32_t x175 = INT32_MIN;
int32_t t41 = 71688;
int16_t x195 = INT16_MIN;
static uint16_t x198 = 30759U;
uint64_t x203 = 1005479LLU;
volatile int32_t t45 = -65705;
static uint64_t x210 = UINT64_MAX;
static int8_t x211 = INT8_MIN;
static int16_t x218 = INT16_MAX;
int8_t x221 = INT8_MIN;
uint64_t x223 = UINT64_MAX;
volatile uint16_t x230 = UINT16_MAX;
int8_t x241 = -54;
uint16_t x246 = 57U;
static uint32_t x249 = 3U;
static volatile int32_t x251 = -309;
volatile uint32_t x252 = 339U;
static int16_t x256 = 7;
static int8_t x257 = -15;
static int8_t x262 = INT8_MAX;
volatile int32_t t59 = 110;
uint8_t x269 = 1U;
uint32_t x272 = 3089U;
volatile int32_t t60 = 6505;
int16_t x278 = -25;
int8_t x283 = INT8_MAX;
volatile int8_t x294 = -1;
int8_t x295 = INT8_MIN;
int16_t x312 = 0;
uint32_t x313 = UINT32_MAX;
int16_t x314 = -42;
int8_t x316 = -1;
uint16_t x324 = 1526U;
int8_t x331 = INT8_MIN;
int16_t x336 = -76;
int16_t x337 = INT16_MIN;
uint32_t x338 = UINT32_MAX;
int8_t x339 = -36;
static int8_t x343 = INT8_MAX;
uint64_t x361 = 4LLU;
volatile int32_t t79 = 11954224;
int16_t x370 = -1;
uint64_t x389 = 60536796959LLU;
int16_t x390 = INT16_MIN;
static int32_t x399 = INT32_MIN;
volatile int8_t x405 = -1;
volatile int8_t x407 = INT8_MIN;
uint8_t x416 = 127U;
volatile int32_t t88 = 1;
uint8_t x424 = 92U;
int16_t x436 = 3234;
volatile uint64_t x443 = 11734139826LLU;
static int32_t t94 = 102255;
uint32_t x446 = 19704693U;
int8_t x448 = INT8_MIN;
int64_t x451 = 4113852346896964234LL;
int32_t x453 = INT32_MIN;
uint32_t x461 = 801598391U;
int16_t x462 = -29;
uint64_t x463 = UINT64_MAX;
volatile int32_t x466 = INT32_MIN;
int64_t x467 = 981605344707126416LL;
volatile int32_t t99 = -13368592;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int32_t x2 = -1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -4056674;

	t0 = (x1<((x2&x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x8 = 505881039520LLU;
	volatile int32_t t1 = 26036;

	t1 = (x5<((x6&x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x10 = INT16_MIN;
	uint8_t x12 = 52U;

	t2 = (x9<((x10&x11)*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int8_t x14 = INT8_MAX;
	int8_t x15 = -1;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -1;

	t3 = (x13<((x14&x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 72124396U;
	int8_t x18 = 47;
	uint16_t x19 = 56U;
	static uint64_t x20 = 2119461561722325LLU;
	volatile int32_t t4 = 7;

	t4 = (x17<((x18&x19)*x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	volatile int8_t x22 = 0;
	volatile int32_t t5 = -14;

	t5 = (x21<((x22&x23)*x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -560588118608165LL;
	static int64_t x30 = 248349493785442LL;
	uint16_t x31 = 158U;
	volatile int32_t x32 = -924566;
	int32_t t6 = -181;

	t6 = (x29<((x30&x31)*x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x33 = 5U;
	volatile int64_t x34 = -1LL;
	static int32_t x35 = INT32_MIN;
	uint16_t x36 = UINT16_MAX;
	static volatile int32_t t7 = -1011871847;

	t7 = (x33<((x34&x35)*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	int32_t x38 = 460;
	static int16_t x39 = 83;
	static volatile int32_t t8 = -12692;

	t8 = (x37<((x38&x39)*x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	static int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	int64_t x44 = 68730205542LL;
	int32_t t9 = -32878;

	t9 = (x41<((x42&x43)*x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = -13323;
	volatile int16_t x46 = INT16_MAX;
	int32_t x47 = -14251;
	volatile uint32_t x48 = 1319670U;
	volatile int32_t t10 = -106830;

	t10 = (x45<((x46&x47)*x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	uint8_t x51 = UINT8_MAX;
	int64_t x52 = INT64_MIN;

	t11 = (x49<((x50&x51)*x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = -1;
	uint64_t x54 = 122104278477LLU;
	int64_t x55 = 137057LL;
	int32_t x56 = 3908;

	t12 = (x53<((x54&x55)*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	int32_t x62 = INT32_MIN;
	volatile int32_t x63 = INT32_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t13 = 54;

	t13 = (x61<((x62&x63)*x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	int32_t x66 = -1;
	static int32_t x67 = INT32_MAX;
	int64_t x68 = -1LL;
	int32_t t14 = -88199;

	t14 = (x65<((x66&x67)*x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 31U;
	int32_t x70 = INT32_MAX;
	static int8_t x72 = INT8_MAX;
	static volatile int32_t t15 = -127680;

	t15 = (x69<((x70&x71)*x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = 1848LL;
	volatile uint64_t x75 = 97LLU;
	int16_t x76 = 132;
	int32_t t16 = 25;

	t16 = (x73<((x74&x75)*x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 51;
	int16_t x78 = -1;
	int8_t x79 = INT8_MIN;
	static volatile uint16_t x80 = UINT16_MAX;

	t17 = (x77<((x78&x79)*x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = INT32_MIN;
	uint16_t x83 = 25U;
	static int8_t x84 = -19;
	int32_t t18 = 124914;

	t18 = (x81<((x82&x83)*x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = -30507707117061901LL;
	int32_t x86 = 69;
	int8_t x88 = -14;
	volatile int32_t t19 = -3;

	t19 = (x85<((x86&x87)*x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x89 = INT32_MIN;
	int32_t x90 = 7;

	t20 = (x89<((x90&x91)*x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 3U;
	uint16_t x94 = 2U;
	volatile int64_t x95 = INT64_MIN;
	volatile uint16_t x96 = 1U;

	t21 = (x93<((x94&x95)*x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	int32_t x104 = 5;
	int32_t t22 = -3613;

	t22 = (x101<((x102&x103)*x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	int64_t x106 = INT64_MAX;
	uint8_t x107 = 18U;
	static int32_t x108 = -145;
	volatile int32_t t23 = 1;

	t23 = (x105<((x106&x107)*x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 2U;
	volatile int8_t x110 = -1;
	uint32_t x111 = 694403586U;
	int64_t x112 = 8LL;

	t24 = (x109<((x110&x111)*x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = INT32_MAX;
	uint16_t x118 = 363U;
	volatile int32_t t25 = 20575;

	t25 = (x117<((x118&x119)*x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 90U;
	uint16_t x122 = 144U;
	static int16_t x123 = 10346;

	t26 = (x121<((x122&x123)*x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	static uint64_t x126 = 2034692LLU;
	int8_t x128 = 0;
	volatile int32_t t27 = -7;

	t27 = (x125<((x126&x127)*x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = -15117;
	static uint64_t x131 = 109895151461LLU;
	uint64_t x132 = 44449857874LLU;
	static volatile int32_t t28 = 7;

	t28 = (x129<((x130&x131)*x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 573921U;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t29 = 266571;

	t29 = (x133<((x134&x135)*x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = UINT8_MAX;
	int8_t x138 = INT8_MAX;
	volatile int32_t t30 = 49135074;

	t30 = (x137<((x138&x139)*x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x141 = UINT8_MAX;
	static int8_t x142 = INT8_MIN;
	static volatile int8_t x143 = INT8_MAX;
	static int16_t x144 = INT16_MIN;
	static int32_t t31 = -13914;

	t31 = (x141<((x142&x143)*x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x151 = 4183093U;
	volatile int32_t t32 = -6807958;

	t32 = (x149<((x150&x151)*x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x154 = 0;
	int32_t x155 = 58;
	volatile int32_t x156 = INT32_MIN;
	static int32_t t33 = -11629770;

	t33 = (x153<((x154&x155)*x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = INT16_MIN;
	static volatile int32_t x158 = INT32_MAX;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -1;
	volatile int32_t t34 = -8523680;

	t34 = (x157<((x158&x159)*x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x161 = INT32_MIN;
	static uint32_t x164 = 12U;
	int32_t t35 = 6244372;

	t35 = (x161<((x162&x163)*x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = INT8_MIN;
	static uint8_t x167 = UINT8_MAX;
	int32_t t36 = 7817;

	t36 = (x165<((x166&x167)*x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = 50U;
	int64_t x170 = INT64_MAX;
	int8_t x171 = INT8_MAX;
	int32_t t37 = 8;

	t37 = (x169<((x170&x171)*x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MAX;
	uint64_t x174 = 11400LLU;
	int8_t x176 = -1;
	static volatile int32_t t38 = -941;

	t38 = (x173<((x174&x175)*x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	uint16_t x183 = UINT16_MAX;
	int8_t x184 = -2;
	volatile int32_t t39 = -1;

	t39 = (x181<((x182&x183)*x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = 573732LL;
	int32_t x186 = INT32_MIN;
	volatile int16_t x187 = INT16_MAX;
	int64_t x188 = -280281953419825338LL;
	volatile int32_t t40 = 3344425;

	t40 = (x185<((x186&x187)*x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 1998U;
	int16_t x190 = INT16_MIN;
	static int64_t x191 = -1LL;
	int64_t x192 = 20965419270LL;

	t41 = (x189<((x190&x191)*x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x193 = INT64_MAX;
	uint16_t x194 = 1U;
	static int8_t x196 = 5;
	int32_t t42 = 11523;

	t42 = (x193<((x194&x195)*x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x197 = 42U;
	int32_t x199 = -1;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t43 = 58920710;

	t43 = (x197<((x198&x199)*x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = 4570U;
	int32_t x202 = -1;
	int64_t x204 = 22962672143486LL;
	int32_t t44 = -43220193;

	t44 = (x201<((x202&x203)*x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x205 = INT32_MIN;
	static uint8_t x206 = 76U;
	int8_t x207 = -1;
	uint32_t x208 = UINT32_MAX;

	t45 = (x205<((x206&x207)*x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x209 = UINT64_MAX;
	int16_t x212 = INT16_MIN;
	static int32_t t46 = 2018;

	t46 = (x209<((x210&x211)*x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = -1;
	static volatile int64_t x214 = -1LL;
	volatile int16_t x215 = INT16_MAX;
	int16_t x216 = -1;
	int32_t t47 = 7884;

	t47 = (x213<((x214&x215)*x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x217 = 13;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = 12492739;
	volatile int32_t t48 = -5932620;

	t48 = (x217<((x218&x219)*x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = -1;
	static volatile int32_t x224 = INT32_MAX;
	int32_t t49 = 0;

	t49 = (x221<((x222&x223)*x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = -39389448;
	volatile int8_t x226 = INT8_MIN;
	volatile int8_t x227 = 20;
	int16_t x228 = INT16_MIN;
	volatile int32_t t50 = 10630;

	t50 = (x225<((x226&x227)*x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x229 = 4293695637LLU;
	static int64_t x231 = INT64_MAX;
	uint64_t x232 = 188LLU;
	static volatile int32_t t51 = -46;

	t51 = (x229<((x230&x231)*x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = 373U;
	static int32_t x234 = INT32_MIN;
	volatile uint16_t x235 = 3U;
	int16_t x236 = INT16_MIN;
	volatile int32_t t52 = -2388596;

	t52 = (x233<((x234&x235)*x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x242 = -1;
	int8_t x243 = -1;
	static uint8_t x244 = 83U;
	int32_t t53 = 1997501;

	t53 = (x241<((x242&x243)*x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x245 = 47U;
	static uint32_t x247 = UINT32_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t54 = 409658;

	t54 = (x245<((x246&x247)*x248));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x250 = 55559;
	int32_t t55 = 797;

	t55 = (x249<((x250&x251)*x252));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = 247062866U;
	int16_t x254 = -811;
	int8_t x255 = -1;
	int32_t t56 = 63534699;

	t56 = (x253<((x254&x255)*x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x258 = 20U;
	int64_t x259 = INT64_MIN;
	int64_t x260 = 183789344LL;
	int32_t t57 = 454;

	t57 = (x257<((x258&x259)*x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = -1;
	static int16_t x263 = INT16_MIN;
	int32_t x264 = 171309991;
	volatile int32_t t58 = -6;

	t58 = (x261<((x262&x263)*x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = -1;
	static uint32_t x266 = UINT32_MAX;
	uint32_t x267 = 1028790U;
	int16_t x268 = INT16_MIN;

	t59 = (x265<((x266&x267)*x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x270 = 1592571175186533LLU;
	static int16_t x271 = -6620;

	t60 = (x269<((x270&x271)*x272));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = -1LL;
	int8_t x279 = 58;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t61 = -2266;

	t61 = (x277<((x278&x279)*x280));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x281 = -1;
	int32_t x282 = 19472;
	uint64_t x284 = 8292475424LLU;
	volatile int32_t t62 = -4;

	t62 = (x281<((x282&x283)*x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x289 = UINT8_MAX;
	int16_t x290 = 0;
	int8_t x291 = INT8_MAX;
	volatile int32_t x292 = INT32_MIN;
	volatile int32_t t63 = -27151;

	t63 = (x289<((x290&x291)*x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int32_t x296 = -1;
	int32_t t64 = -7468;

	t64 = (x293<((x294&x295)*x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x297 = 122577835;
	int64_t x298 = INT64_MAX;
	volatile uint32_t x299 = 6676U;
	static volatile int8_t x300 = INT8_MIN;
	int32_t t65 = -5192474;

	t65 = (x297<((x298&x299)*x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = -14;
	static uint32_t x303 = UINT32_MAX;
	uint32_t x304 = 53U;
	volatile int32_t t66 = -10;

	t66 = (x301<((x302&x303)*x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 3884LLU;
	int8_t x307 = 1;
	int16_t x308 = INT16_MIN;
	volatile int32_t t67 = 1737175;

	t67 = (x305<((x306&x307)*x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x309 = INT8_MIN;
	static int16_t x310 = -1;
	int32_t x311 = INT32_MIN;
	volatile int32_t t68 = -597328;

	t68 = (x309<((x310&x311)*x312));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x315 = 3186U;
	int32_t t69 = -2946488;

	t69 = (x313<((x314&x315)*x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x317 = UINT8_MAX;
	int32_t x318 = 1715;
	volatile int64_t x319 = -1LL;
	int32_t x320 = -19843;
	volatile int32_t t70 = -46;

	t70 = (x317<((x318&x319)*x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = 54U;
	volatile int8_t x322 = 29;
	uint16_t x323 = 58U;
	volatile int32_t t71 = -387123;

	t71 = (x321<((x322&x323)*x324));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x329 = 12612506724LLU;
	int32_t x330 = INT32_MAX;
	int32_t x332 = -1;
	volatile int32_t t72 = -885844996;

	t72 = (x329<((x330&x331)*x332));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x333 = UINT16_MAX;
	volatile int32_t x334 = 1925886;
	uint32_t x335 = UINT32_MAX;
	int32_t t73 = -428;

	t73 = (x333<((x334&x335)*x336));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x340 = 1772U;
	int32_t t74 = 71976351;

	t74 = (x337<((x338&x339)*x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = INT16_MAX;
	uint64_t x342 = 4212516106659LLU;
	uint8_t x344 = 0U;
	volatile int32_t t75 = -117646;

	t75 = (x341<((x342&x343)*x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = 0;
	uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 92U;
	uint64_t x348 = UINT64_MAX;
	int32_t t76 = 91964;

	t76 = (x345<((x346&x347)*x348));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = -1LL;
	uint64_t x354 = 358529335249354LLU;
	int32_t x355 = 1;
	int32_t x356 = 7826;
	volatile int32_t t77 = 899581739;

	t77 = (x353<((x354&x355)*x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x357 = -1LL;
	int32_t x358 = INT32_MIN;
	uint64_t x359 = 1012307LLU;
	int64_t x360 = INT64_MIN;
	int32_t t78 = -240;

	t78 = (x357<((x358&x359)*x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x362 = INT64_MAX;
	volatile uint64_t x363 = UINT64_MAX;
	int64_t x364 = 505810LL;

	t79 = (x361<((x362&x363)*x364));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x369 = -5;
	int32_t x371 = -15302825;
	int8_t x372 = -1;
	volatile int32_t t80 = -216;

	t80 = (x369<((x370&x371)*x372));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x381 = 51U;
	volatile uint64_t x382 = 10163LLU;
	uint64_t x383 = UINT64_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t81 = 49078;

	t81 = (x381<((x382&x383)*x384));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x385 = UINT32_MAX;
	int64_t x386 = -6977064259LL;
	int32_t x387 = INT32_MIN;
	int32_t x388 = 741860619;
	int32_t t82 = 352;

	t82 = (x385<((x386&x387)*x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x391 = INT8_MIN;
	static uint32_t x392 = 7294U;
	int32_t t83 = -743666;

	t83 = (x389<((x390&x391)*x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = -1023;
	int8_t x394 = -1;
	volatile uint64_t x395 = 5LLU;
	int16_t x396 = INT16_MIN;
	static int32_t t84 = -7;

	t84 = (x393<((x394&x395)*x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x397 = INT8_MIN;
	static int8_t x398 = 4;
	static int64_t x400 = -1LL;
	volatile int32_t t85 = 43;

	t85 = (x397<((x398&x399)*x400));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = INT8_MAX;
	uint64_t x402 = 12LLU;
	int8_t x403 = -5;
	static int64_t x404 = INT64_MIN;
	int32_t t86 = -16830623;

	t86 = (x401<((x402&x403)*x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x406 = 270U;
	uint64_t x408 = 1756LLU;
	int32_t t87 = -1;

	t87 = (x405<((x406&x407)*x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x413 = INT32_MIN;
	int8_t x414 = 1;
	static int16_t x415 = INT16_MIN;

	t88 = (x413<((x414&x415)*x416));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = 0;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MAX;
	volatile int32_t t89 = -41;

	t89 = (x421<((x422&x423)*x424));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x425 = 171763001U;
	int8_t x426 = INT8_MAX;
	volatile uint64_t x427 = UINT64_MAX;
	static uint64_t x428 = 26980219455752LLU;
	static int32_t t90 = -163052;

	t90 = (x425<((x426&x427)*x428));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x429 = 32348LL;
	uint16_t x430 = 1373U;
	volatile int16_t x431 = 396;
	int16_t x432 = 1;
	int32_t t91 = -109845753;

	t91 = (x429<((x430&x431)*x432));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x433 = UINT8_MAX;
	int8_t x434 = -10;
	volatile uint8_t x435 = 29U;
	volatile int32_t t92 = 10289438;

	t92 = (x433<((x434&x435)*x436));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = 20947701;
	uint32_t x438 = 1327079U;
	int32_t x439 = INT32_MAX;
	volatile uint64_t x440 = 23598165720360LLU;
	volatile int32_t t93 = -22694;

	t93 = (x437<((x438&x439)*x440));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x441 = 924;
	int16_t x442 = 191;
	static int16_t x444 = INT16_MIN;

	t94 = (x441<((x442&x443)*x444));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x445 = INT16_MAX;
	static uint16_t x447 = 911U;
	int32_t t95 = -1407439;

	t95 = (x445<((x446&x447)*x448));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = INT32_MAX;
	int32_t x450 = 1;
	int16_t x452 = INT16_MIN;
	int32_t t96 = -116;

	t96 = (x449<((x450&x451)*x452));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x454 = 27U;
	volatile int32_t x455 = -94806;
	uint32_t x456 = UINT32_MAX;
	int32_t t97 = -1;

	t97 = (x453<((x454&x455)*x456));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x464 = INT32_MAX;
	static volatile int32_t t98 = -189;

	t98 = (x461<((x462&x463)*x464));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = INT16_MAX;
	volatile int8_t x468 = 3;

	t99 = (x465<((x466&x467)*x468));

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

