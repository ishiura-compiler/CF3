#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int32_t t1 = -1;
int64_t x15 = 27814LL;
int64_t x17 = -1LL;
int32_t x20 = INT32_MAX;
uint32_t x25 = 61495U;
volatile uint64_t x28 = 1149950LLU;
int64_t x30 = -1LL;
int64_t x32 = INT64_MIN;
int32_t x35 = INT32_MIN;
static uint64_t x39 = UINT64_MAX;
int8_t x44 = INT8_MIN;
uint32_t x45 = 414684U;
int32_t t12 = -3;
volatile int64_t x63 = 13012296553429LL;
uint64_t x76 = 5LLU;
int32_t t16 = -2021;
int32_t x85 = INT32_MIN;
uint8_t x87 = UINT8_MAX;
static int32_t x98 = 655941;
volatile int32_t t22 = -3;
uint16_t x101 = UINT16_MAX;
int64_t x125 = INT64_MIN;
int16_t x126 = -2;
volatile int32_t t28 = -112996848;
volatile int64_t x136 = INT64_MIN;
int64_t x142 = INT64_MIN;
int8_t x144 = -1;
static int8_t x145 = INT8_MIN;
static int16_t x157 = -849;
int32_t x159 = -1;
static int8_t x160 = INT8_MIN;
uint32_t x163 = 138413U;
int64_t x164 = INT64_MAX;
static uint16_t x165 = UINT16_MAX;
volatile int32_t t36 = 802;
int32_t x175 = -1;
volatile uint16_t x176 = UINT16_MAX;
uint8_t x181 = 58U;
int8_t x186 = 4;
int32_t t40 = -131071793;
int32_t x189 = INT32_MIN;
volatile int16_t x197 = INT16_MIN;
static int8_t x215 = 62;
int64_t x216 = INT64_MIN;
uint8_t x218 = 1U;
static uint8_t x223 = 8U;
static uint32_t x224 = 113133U;
int8_t x233 = INT8_MIN;
volatile int16_t x235 = -1;
static int32_t x237 = -1;
int8_t x259 = 3;
volatile int8_t x260 = INT8_MAX;
int8_t x274 = INT8_MIN;
volatile uint16_t x281 = 3U;
volatile int16_t x284 = -1;
uint8_t x285 = UINT8_MAX;
uint16_t x286 = UINT16_MAX;
volatile int64_t x288 = INT64_MIN;
static volatile int32_t t62 = -17518;
int8_t x307 = INT8_MIN;
volatile int8_t x316 = 27;
volatile uint64_t x325 = UINT64_MAX;
static int32_t x333 = -8300;
static int32_t t67 = -158;
int64_t x339 = 582431758651063221LL;
int64_t x348 = INT64_MIN;
volatile int64_t x350 = -234562344LL;
int64_t x360 = INT64_MIN;
int8_t x365 = -1;
int8_t x375 = INT8_MIN;
static int64_t x376 = INT64_MIN;
static int32_t t75 = 0;
volatile int32_t t78 = 212151;
int32_t x399 = -2871125;
static int32_t t80 = -22138;
int64_t x401 = INT64_MIN;
static volatile int8_t x411 = 1;
int16_t x422 = INT16_MIN;
int64_t x433 = -1LL;
int32_t x437 = -1;
static int16_t x438 = INT16_MIN;
int32_t t90 = -1;
static int32_t x452 = -1;
uint64_t x454 = UINT64_MAX;
volatile int8_t x455 = 15;
uint8_t x474 = 7U;
uint64_t x475 = 2677088838LLU;
uint16_t x477 = 36U;
volatile int16_t x481 = INT16_MAX;
int8_t x482 = 5;


void f0(void) {
	uint16_t x1 = 0U;
	int32_t x3 = INT32_MIN;
	static int32_t x4 = -1;
	int32_t t0 = -21791;

	t0 = (x1<=(x2*(x3%x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int8_t x10 = INT8_MAX;
	volatile int32_t x11 = 3889;
	uint8_t x12 = 1U;

	t1 = (x9<=(x10*(x11%x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int64_t x14 = -1LL;
	uint32_t x16 = 37066U;
	int32_t t2 = -24692887;

	t2 = (x13<=(x14*(x15%x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x18 = UINT64_MAX;
	int32_t x19 = -1;
	volatile int32_t t3 = 19600869;

	t3 = (x17<=(x18*(x19%x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 1U;
	int8_t x22 = 10;
	int32_t x23 = -351;
	static volatile int64_t x24 = INT64_MIN;
	int32_t t4 = 389155;

	t4 = (x21<=(x22*(x23%x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	uint8_t x27 = UINT8_MAX;
	static volatile int32_t t5 = -326924;

	t5 = (x25<=(x26*(x27%x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 4605765U;
	static int8_t x31 = -1;
	int32_t t6 = -10274;

	t6 = (x29<=(x30*(x31%x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MAX;
	static uint16_t x34 = UINT16_MAX;
	int64_t x36 = INT64_MIN;
	static int32_t t7 = 303429;

	t7 = (x33<=(x34*(x35%x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MIN;
	uint32_t x38 = 790843424U;
	static int16_t x40 = -1;
	volatile int32_t t8 = -373654905;

	t8 = (x37<=(x38*(x39%x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	uint8_t x42 = 7U;
	uint8_t x43 = 2U;
	int32_t t9 = 28127;

	t9 = (x41<=(x42*(x43%x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MIN;
	volatile uint8_t x48 = UINT8_MAX;
	volatile int32_t t10 = -4347436;

	t10 = (x45<=(x46*(x47%x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x49 = 832U;
	volatile uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	volatile int64_t x52 = INT64_MAX;
	int32_t t11 = 7279219;

	t11 = (x49<=(x50*(x51%x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	static int16_t x54 = INT16_MIN;
	uint32_t x55 = 44303U;
	uint32_t x56 = UINT32_MAX;

	t12 = (x53<=(x54*(x55%x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	static int64_t x58 = 99LL;
	uint16_t x59 = 246U;
	static int16_t x60 = INT16_MAX;
	int32_t t13 = -334;

	t13 = (x57<=(x58*(x59%x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 1843U;
	uint64_t x62 = 1080801929LLU;
	uint32_t x64 = UINT32_MAX;
	int32_t t14 = -77747988;

	t14 = (x61<=(x62*(x63%x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = 1U;
	int64_t x66 = -1LL;
	int32_t x67 = INT32_MIN;
	static int32_t x68 = 131959;
	static volatile int32_t t15 = 9;

	t15 = (x65<=(x66*(x67%x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -2;
	static uint16_t x74 = UINT16_MAX;
	volatile int8_t x75 = INT8_MAX;

	t16 = (x73<=(x74*(x75%x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -937LL;
	int32_t x78 = -449;
	static int16_t x79 = -902;
	int32_t x80 = INT32_MIN;
	volatile int32_t t17 = -13623;

	t17 = (x77<=(x78*(x79%x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 119U;
	int8_t x82 = INT8_MIN;
	uint64_t x83 = 405372549742256LLU;
	static volatile int64_t x84 = -1LL;
	volatile int32_t t18 = 1;

	t18 = (x81<=(x82*(x83%x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = INT64_MAX;
	int64_t x88 = -1LL;
	volatile int32_t t19 = -158781269;

	t19 = (x85<=(x86*(x87%x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	static int64_t x90 = INT64_MIN;
	uint64_t x91 = 15225204420212LLU;
	int32_t x92 = INT32_MIN;
	int32_t t20 = -59026405;

	t20 = (x89<=(x90*(x91%x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x93 = -18;
	uint16_t x94 = 12992U;
	static int32_t x95 = -9284;
	volatile int16_t x96 = -1;
	static volatile int32_t t21 = 0;

	t21 = (x93<=(x94*(x95%x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = 11;
	int16_t x99 = 1199;
	volatile int8_t x100 = INT8_MIN;

	t22 = (x97<=(x98*(x99%x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = -1;
	volatile int64_t x103 = 63201001193LL;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t23 = 59;

	t23 = (x101<=(x102*(x103%x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = -1909373LL;
	volatile uint64_t x108 = 240426557555163LLU;
	static volatile int32_t t24 = -153319;

	t24 = (x105<=(x106*(x107%x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	volatile uint8_t x110 = 0U;
	volatile int64_t x111 = INT64_MAX;
	uint8_t x112 = 1U;
	static int32_t t25 = 418220385;

	t25 = (x109<=(x110*(x111%x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -1;
	int8_t x114 = -3;
	volatile int32_t x115 = -1247;
	static int16_t x116 = INT16_MAX;
	volatile int32_t t26 = 0;

	t26 = (x113<=(x114*(x115%x116)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -19;
	static int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	volatile int8_t x124 = INT8_MIN;
	int32_t t27 = 5;

	t27 = (x121<=(x122*(x123%x124)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x127 = INT32_MIN;
	static uint16_t x128 = UINT16_MAX;

	t28 = (x125<=(x126*(x127%x128)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 3185U;
	static volatile uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 407732834LLU;
	volatile uint64_t x132 = 310401715686746LLU;
	int32_t t29 = 27;

	t29 = (x129<=(x130*(x131%x132)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MAX;
	static int32_t x135 = INT32_MIN;
	int32_t t30 = -106052125;

	t30 = (x133<=(x134*(x135%x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x141 = 852U;
	static int8_t x143 = INT8_MIN;
	volatile int32_t t31 = 0;

	t31 = (x141<=(x142*(x143%x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = -357;
	volatile int8_t x147 = 1;
	static volatile uint16_t x148 = 13465U;
	int32_t t32 = 1778360;

	t32 = (x145<=(x146*(x147%x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	int16_t x154 = 4;
	uint32_t x155 = UINT32_MAX;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t33 = -12052;

	t33 = (x153<=(x154*(x155%x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x158 = 0U;
	int32_t t34 = 30342790;

	t34 = (x157<=(x158*(x159%x160)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x161 = -1LL;
	static volatile uint64_t x162 = 4LLU;
	static volatile int32_t t35 = 1713;

	t35 = (x161<=(x162*(x163%x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = -199;
	int64_t x167 = -5924817766680742LL;
	uint8_t x168 = 2U;

	t36 = (x165<=(x166*(x167%x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	int16_t x170 = -1521;
	volatile uint16_t x171 = UINT16_MAX;
	int32_t x172 = INT32_MIN;
	int32_t t37 = 0;

	t37 = (x169<=(x170*(x171%x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = 115U;
	volatile int32_t t38 = -772244;

	t38 = (x173<=(x174*(x175%x176)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x182 = INT16_MIN;
	uint8_t x183 = 24U;
	uint32_t x184 = 273184U;
	int32_t t39 = -65;

	t39 = (x181<=(x182*(x183%x184)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = 11;
	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MAX;

	t40 = (x185<=(x186*(x187%x188)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x190 = -1406969945LL;
	uint64_t x191 = 1655929670LLU;
	int16_t x192 = INT16_MAX;
	volatile int32_t t41 = -1;

	t41 = (x189<=(x190*(x191%x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MAX;
	int64_t x196 = -1278LL;
	static int32_t t42 = 138471;

	t42 = (x193<=(x194*(x195%x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x198 = 4U;
	static volatile uint64_t x199 = 952645973762LLU;
	int32_t x200 = -1;
	volatile int32_t t43 = -1355;

	t43 = (x197<=(x198*(x199%x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = -1LL;
	int8_t x202 = 3;
	static volatile int64_t x203 = -4967070559329843LL;
	static volatile int16_t x204 = INT16_MAX;
	int32_t t44 = 1554;

	t44 = (x201<=(x202*(x203%x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x213 = INT64_MIN;
	static int32_t x214 = -4;
	volatile int32_t t45 = 409;

	t45 = (x213<=(x214*(x215%x216)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = -1494647;
	volatile int8_t x219 = INT8_MAX;
	uint64_t x220 = 746LLU;
	volatile int32_t t46 = 7138;

	t46 = (x217<=(x218*(x219%x220)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = INT64_MAX;
	uint32_t x222 = 58558U;
	volatile int32_t t47 = -1155;

	t47 = (x221<=(x222*(x223%x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x229 = 4LL;
	volatile uint32_t x230 = 136892U;
	static int32_t x231 = INT32_MIN;
	uint64_t x232 = 169584754958720LLU;
	volatile int32_t t48 = -381148104;

	t48 = (x229<=(x230*(x231%x232)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x234 = 0U;
	volatile uint64_t x236 = UINT64_MAX;
	volatile int32_t t49 = -119761;

	t49 = (x233<=(x234*(x235%x236)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x238 = INT16_MIN;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = INT16_MIN;
	static int32_t t50 = 556267;

	t50 = (x237<=(x238*(x239%x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x245 = INT64_MAX;
	uint16_t x246 = 31565U;
	int16_t x247 = 3221;
	int64_t x248 = -1801008750215380436LL;
	volatile int32_t t51 = 0;

	t51 = (x245<=(x246*(x247%x248)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x249 = INT64_MIN;
	uint32_t x250 = 4612502U;
	int8_t x251 = -1;
	int8_t x252 = INT8_MIN;
	int32_t t52 = -13312;

	t52 = (x249<=(x250*(x251%x252)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x253 = 0;
	uint32_t x254 = 1792U;
	uint32_t x255 = 6U;
	uint16_t x256 = 6U;
	static volatile int32_t t53 = 1185;

	t53 = (x253<=(x254*(x255%x256)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = -1;
	int8_t x258 = INT8_MIN;
	int32_t t54 = 296050749;

	t54 = (x257<=(x258*(x259%x260)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x261 = 5481444421769493425LLU;
	int8_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	int16_t x264 = -1;
	int32_t t55 = 123;

	t55 = (x261<=(x262*(x263%x264)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = 1;
	int16_t x270 = -513;
	volatile uint64_t x271 = 95LLU;
	volatile uint64_t x272 = 11594854LLU;
	int32_t t56 = 72029;

	t56 = (x269<=(x270*(x271%x272)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = INT8_MIN;
	int8_t x275 = INT8_MAX;
	int16_t x276 = 15064;
	static volatile int32_t t57 = 10693;

	t57 = (x273<=(x274*(x275%x276)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = 21;
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	static uint64_t x280 = 30437738309503967LLU;
	int32_t t58 = 97879;

	t58 = (x277<=(x278*(x279%x280)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x282 = 160077U;
	volatile int8_t x283 = INT8_MAX;
	int32_t t59 = -32658;

	t59 = (x281<=(x282*(x283%x284)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x287 = INT64_MIN;
	volatile int32_t t60 = -19;

	t60 = (x285<=(x286*(x287%x288)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x293 = 798U;
	int16_t x294 = -1;
	static uint64_t x295 = 2519LLU;
	volatile int64_t x296 = 739629255505480LL;
	int32_t t61 = 62244291;

	t61 = (x293<=(x294*(x295%x296)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x297 = 5475;
	uint64_t x298 = 49427448644902LLU;
	int8_t x299 = 6;
	int64_t x300 = 3728775634LL;

	t62 = (x297<=(x298*(x299%x300)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x305 = 122803U;
	int64_t x306 = 1LL;
	int8_t x308 = -12;
	volatile int32_t t63 = -3502;

	t63 = (x305<=(x306*(x307%x308)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = INT32_MIN;
	volatile int32_t x310 = INT32_MIN;
	int32_t x311 = -1;
	uint64_t x312 = 623064890LLU;
	volatile int32_t t64 = -14;

	t64 = (x309<=(x310*(x311%x312)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x313 = 155654591LLU;
	uint32_t x314 = 0U;
	volatile int16_t x315 = -1;
	static volatile int32_t t65 = 129;

	t65 = (x313<=(x314*(x315%x316)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x326 = INT16_MIN;
	int16_t x327 = 26;
	int8_t x328 = INT8_MIN;
	volatile int32_t t66 = 658951939;

	t66 = (x325<=(x326*(x327%x328)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MAX;
	volatile int16_t x336 = -1;

	t67 = (x333<=(x334*(x335%x336)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x337 = INT8_MIN;
	volatile uint8_t x338 = 3U;
	int16_t x340 = INT16_MIN;
	volatile int32_t t68 = 4323;

	t68 = (x337<=(x338*(x339%x340)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = INT32_MIN;
	static uint16_t x346 = UINT16_MAX;
	volatile int16_t x347 = -12;
	static volatile int32_t t69 = -1;

	t69 = (x345<=(x346*(x347%x348)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x349 = 738063651U;
	int32_t x351 = -118;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t70 = 100692;

	t70 = (x349<=(x350*(x351%x352)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MAX;
	int16_t x355 = -1;
	static uint64_t x356 = UINT64_MAX;
	int32_t t71 = -187028;

	t71 = (x353<=(x354*(x355%x356)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x357 = -12;
	uint64_t x358 = 6020051732956719LLU;
	volatile int64_t x359 = INT64_MAX;
	int32_t t72 = 38;

	t72 = (x357<=(x358*(x359%x360)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = -1;
	static int32_t x362 = -1;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -1;
	int32_t t73 = -27;

	t73 = (x361<=(x362*(x363%x364)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x366 = 205491602;
	int64_t x367 = INT64_MIN;
	int16_t x368 = -2;
	int32_t t74 = -2825;

	t74 = (x365<=(x366*(x367%x368)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x373 = 100U;
	volatile int16_t x374 = INT16_MAX;

	t75 = (x373<=(x374*(x375%x376)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = -1;
	volatile int8_t x379 = -1;
	int64_t x380 = INT64_MIN;
	volatile int32_t t76 = 2600;

	t76 = (x377<=(x378*(x379%x380)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x381 = -15025136091974725LL;
	int32_t x382 = 126407479;
	uint8_t x383 = UINT8_MAX;
	static int32_t x384 = -1;
	int32_t t77 = -46060904;

	t77 = (x381<=(x382*(x383%x384)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = -2;

	t78 = (x385<=(x386*(x387%x388)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x389 = 85;
	int32_t x390 = -11;
	static volatile int64_t x391 = INT64_MAX;
	int32_t x392 = INT32_MIN;
	static int32_t t79 = -1170066;

	t79 = (x389<=(x390*(x391%x392)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x397 = 789;
	int64_t x398 = -1LL;
	int32_t x400 = -1;

	t80 = (x397<=(x398*(x399%x400)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x402 = 101962319206LL;
	int16_t x403 = 3;
	int16_t x404 = INT16_MIN;
	volatile int32_t t81 = 173921;

	t81 = (x401<=(x402*(x403%x404)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x405 = 254458LLU;
	int64_t x406 = INT64_MIN;
	int16_t x407 = 29;
	uint64_t x408 = 26692502825148578LLU;
	int32_t t82 = 3;

	t82 = (x405<=(x406*(x407%x408)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x409 = INT32_MAX;
	volatile int16_t x410 = INT16_MIN;
	static uint32_t x412 = 1800U;
	volatile int32_t t83 = -3;

	t83 = (x409<=(x410*(x411%x412)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x413 = 112453U;
	uint8_t x414 = 3U;
	int64_t x415 = INT64_MAX;
	volatile uint8_t x416 = 6U;
	volatile int32_t t84 = 172;

	t84 = (x413<=(x414*(x415%x416)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x417 = INT16_MAX;
	int32_t x418 = INT32_MAX;
	int32_t x419 = -26871;
	uint64_t x420 = 24311560245339LLU;
	int32_t t85 = -607355;

	t85 = (x417<=(x418*(x419%x420)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x421 = 33289803636LLU;
	int32_t x423 = -286802;
	int8_t x424 = INT8_MIN;
	volatile int32_t t86 = -50746;

	t86 = (x421<=(x422*(x423%x424)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MAX;
	uint32_t x427 = 8286U;
	int32_t x428 = -8374702;
	int32_t t87 = 98;

	t87 = (x425<=(x426*(x427%x428)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x429 = UINT32_MAX;
	static int8_t x430 = INT8_MIN;
	uint8_t x431 = 57U;
	static int64_t x432 = INT64_MAX;
	volatile int32_t t88 = -6229716;

	t88 = (x429<=(x430*(x431%x432)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x434 = 65183388U;
	int8_t x435 = 1;
	uint16_t x436 = 136U;
	int32_t t89 = -43075328;

	t89 = (x433<=(x434*(x435%x436)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x439 = INT64_MAX;
	int64_t x440 = -22110508931718LL;

	t90 = (x437<=(x438*(x439%x440)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x441 = INT64_MIN;
	int16_t x442 = INT16_MIN;
	uint32_t x443 = 192U;
	volatile int32_t x444 = INT32_MIN;
	volatile int32_t t91 = 30004;

	t91 = (x441<=(x442*(x443%x444)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x449 = UINT32_MAX;
	static int32_t x450 = 53617;
	int16_t x451 = INT16_MAX;
	int32_t t92 = -92943;

	t92 = (x449<=(x450*(x451%x452)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x453 = INT64_MIN;
	int16_t x456 = INT16_MIN;
	volatile int32_t t93 = 1;

	t93 = (x453<=(x454*(x455%x456)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x457 = 2184U;
	int64_t x458 = INT64_MIN;
	static uint8_t x459 = 1U;
	volatile int32_t x460 = INT32_MIN;
	volatile int32_t t94 = -19;

	t94 = (x457<=(x458*(x459%x460)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x465 = INT64_MAX;
	static volatile int64_t x466 = INT64_MAX;
	uint32_t x467 = 1U;
	static volatile uint16_t x468 = 978U;
	static volatile int32_t t95 = -27;

	t95 = (x465<=(x466*(x467%x468)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x469 = 248608LLU;
	volatile uint32_t x470 = UINT32_MAX;
	int32_t x471 = INT32_MAX;
	static uint32_t x472 = 307214896U;
	volatile int32_t t96 = -14857613;

	t96 = (x469<=(x470*(x471%x472)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x473 = -1LL;
	volatile uint64_t x476 = 5796427531198181LLU;
	int32_t t97 = 325581;

	t97 = (x473<=(x474*(x475%x476)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x478 = INT16_MAX;
	int64_t x479 = INT64_MIN;
	static volatile uint16_t x480 = UINT16_MAX;
	int32_t t98 = -3;

	t98 = (x477<=(x478*(x479%x480)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x483 = -18996398795136459LL;
	int32_t x484 = INT32_MIN;
	volatile int32_t t99 = 85251240;

	t99 = (x481<=(x482*(x483%x484)));

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

